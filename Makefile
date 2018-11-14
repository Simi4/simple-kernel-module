ifneq ($(KERNELRELEASE),)
obj-m := simi4m.o
else
KDIR := /lib/modules/$(shell uname -r)/build
all:
	$(MAKE) -C $(KDIR) M=$(shell pwd)
endif

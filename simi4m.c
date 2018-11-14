#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


static int __init simi4m_init(void)
{
    pr_alert("Hello! This is %s.\n", __FUNCTION__);
    return 0;
}


static void __exit simi4m_exit(void)
{
    pr_alert("Goodbye! This is %s.\n", __FUNCTION__);
}


module_init(simi4m_init);
module_exit(simi4m_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("This module is positive. Yay!");
MODULE_AUTHOR("Smirnov Maxim");

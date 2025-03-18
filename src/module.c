#include <linux/init.h> /* Needed for the macros */ 
#include <linux/module.h> /* Needed by all modules */ 
#include <linux/printk.h> /* Needed for pr_info() */ 
 
MODULE_LICENSE("GPL"); 
MODULE_AUTHOR("AUTHOR"); 
MODULE_DESCRIPTION("module"); 
 
static int __init init(void) 
{ 
    pr_info("Module is started up\n"); 
    return 0; 
} 
 
static void __exit cleanup(void) 
{ 
    pr_info("Module is stopped\n"); 
} 
 
module_init(init); 
module_exit(cleanup);


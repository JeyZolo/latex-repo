#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x72126245, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x7c87c514, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


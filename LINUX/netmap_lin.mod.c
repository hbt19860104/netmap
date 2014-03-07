#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0x802f8f46, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2f1cfeac, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x72df2f2a, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x20eadeb6, __VMLINUX_SYMBOL_STR(ip_compute_csum) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x12c4812a, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x9aebe134, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xe828ee87, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x20385fba, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcee5cfda, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd0f0d945, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x44baf9ca, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xb90416c1, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x68dfc59f, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x5b4df55, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xdd5e2094, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xf97456ea, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9b5b0439, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xa41751c0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xcc4fdcbf, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xdd1a2871, __VMLINUX_SYMBOL_STR(down) },
	{ 0xbc1afedf, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x218e0a1e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x61b5ade0, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xfb2c9c8, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xa15d0751, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0x94615fb3, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x3c3e5983, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x5b9c0302, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe436d79f, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0x65d475bf, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x24f169fc, __VMLINUX_SYMBOL_STR(down_read_trylock) },
	{ 0x21fb443e, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe45f60d8, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbfff63b6, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xb8df50b3, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xc4554217, __VMLINUX_SYMBOL_STR(up) },
	{ 0xa181ee34, __VMLINUX_SYMBOL_STR(fget) },
	{ 0xcfd86080, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x6859b071, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xd8fb358d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x129e985c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xdab76886, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x657879ce, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


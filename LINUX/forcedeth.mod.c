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
	{ 0x132e76c6, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xe9a8a914, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xac5008a2, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x86e7a937, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xb8d268f4, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xa09778d4, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0xfc5c5ea, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x72493e13, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x5383f34b, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3a598ab3, __VMLINUX_SYMBOL_STR(netmap_ring_reinit) },
	{ 0x106148e9, __VMLINUX_SYMBOL_STR(netmap_buffer_base) },
	{ 0xf399ce75, __VMLINUX_SYMBOL_STR(netmap_no_pendintr) },
	{ 0x6b2a287a, __VMLINUX_SYMBOL_STR(nm_rxsync_prologue) },
	{ 0xda5bbe17, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x5905a6c2, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfb6e0282, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa2169268, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xf87ff723, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xb586f7e8, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xe5e05aa, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x59b0c76d, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xddb8d762, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x5c7280e7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd98b017a, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x2a4d74b, __VMLINUX_SYMBOL_STR(netmap_attach) },
	{ 0xe27d160a, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x7a1f79e0, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0xacb82357, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x8bf826c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa4eb4eff, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x66c77343, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x687513db, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xacc4ad9d, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd01fa126, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x832be87a, __VMLINUX_SYMBOL_STR(netmap_detach) },
	{ 0x49c5877c, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xac4a686c, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xf6f5960b, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x74b30f87, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0xa7cc0008, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xad696b1b, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xf1faac3a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x67f7403e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x306c9d96, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x58320da8, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x65d475bf, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xd8fb358d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc9d9cb91, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf97456ea, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x21fb443e, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1222e57f, __VMLINUX_SYMBOL_STR(netmap_rx_irq) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0x3d6e6c18, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0xa15d0751, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0x57f4cd8b, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8dcf36c9, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0x9d0fafcb, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xdffb0052, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x1fbd2292, __VMLINUX_SYMBOL_STR(netmap_buf_size) },
	{ 0x5982c59, __VMLINUX_SYMBOL_STR(netmap_total_buffers) },
	{ 0xb7817124, __VMLINUX_SYMBOL_STR(netmap_buffer_lut) },
	{ 0x9f1d5dc9, __VMLINUX_SYMBOL_STR(netmap_reset) },
	{ 0x5b9c0302, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x44baf9ca, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa64c8aca, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x56ddc480, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x7220bfc2, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=netmap_lin";

MODULE_ALIAS("pci:v000010DEd000001C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000066sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000008Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000038sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000269sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000373sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000450sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000451sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000452sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000453sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000760sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000761sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000762sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000763sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000D7Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "34DCCB4A33176DA3482F0DC");

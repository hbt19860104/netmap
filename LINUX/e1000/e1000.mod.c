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
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x56ddc480, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x132e76c6, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x4210b2f8, __VMLINUX_SYMBOL_STR(pcix_set_mmrbc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2a4d74b, __VMLINUX_SYMBOL_STR(netmap_attach) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5703006c, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x687513db, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb586f7e8, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xa09778d4, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x74b30f87, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0x1222e57f, __VMLINUX_SYMBOL_STR(netmap_rx_irq) },
	{ 0xfc5c5ea, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x6b2a287a, __VMLINUX_SYMBOL_STR(nm_rxsync_prologue) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xacb82357, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xa2169268, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x5528d259, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x5857b225, __VMLINUX_SYMBOL_STR(ioread16_rep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x8cc79cab, __VMLINUX_SYMBOL_STR(iowrite16_rep) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1d9460c3, __VMLINUX_SYMBOL_STR(pcix_get_mmrbc) },
	{ 0xcee5cfda, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf399ce75, __VMLINUX_SYMBOL_STR(netmap_no_pendintr) },
	{ 0x44baf9ca, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0x8d525527, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xddb8d762, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x9d0eaf3c, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x3a598ab3, __VMLINUX_SYMBOL_STR(netmap_ring_reinit) },
	{ 0x5905a6c2, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf97456ea, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xacc4ad9d, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xda5bbe17, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x52e46db8, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x6c8a6b63, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x832be87a, __VMLINUX_SYMBOL_STR(netmap_detach) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0xfb6e0282, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xb7817124, __VMLINUX_SYMBOL_STR(netmap_buffer_lut) },
	{ 0xa15d0751, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0xc4e30c6, __VMLINUX_SYMBOL_STR(netmap_disable_all_rings) },
	{ 0xc3b82bd6, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x5982c59, __VMLINUX_SYMBOL_STR(netmap_total_buffers) },
	{ 0x86b933d7, __VMLINUX_SYMBOL_STR(pci_set_mwi) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x57dfb13e, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x86e7a937, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x58320da8, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xe5e05aa, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xa7cc0008, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x94615fb3, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xf8ccbe0b, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x306c9d96, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x53f01b6b, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x65d475bf, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x1fbd2292, __VMLINUX_SYMBOL_STR(netmap_buf_size) },
	{ 0xae605cda, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x3593ed6, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x7220bfc2, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x67f7403e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x16356262, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x106148e9, __VMLINUX_SYMBOL_STR(netmap_buffer_base) },
	{ 0x21fb443e, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xac4a686c, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xe27d160a, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0xac5008a2, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x9aa8a730, __VMLINUX_SYMBOL_STR(pci_clear_mwi) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9a3710ec, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xf87ff723, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x50002f0b, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0x9f1d5dc9, __VMLINUX_SYMBOL_STR(netmap_reset) },
	{ 0x72493e13, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0x9b690274, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xc39f59dd, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x49c5877c, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x3d6e6c18, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xc9d9cb91, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x35225686, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0xcf4ad331, __VMLINUX_SYMBOL_STR(netmap_enable_all_rings) },
	{ 0x7a1f79e0, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xd8fb358d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x5c7280e7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xf6f5960b, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x24876078, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0xf05810e1, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xad696b1b, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xa64c8aca, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x66c77343, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x95197559, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xd98b017a, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=netmap_lin";

MODULE_ALIAS("pci:v00008086d00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000100Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000101Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000101Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000101Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001026sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001075sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001078sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001079sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001099sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E6Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3D7D7729362A50013FE41AD");

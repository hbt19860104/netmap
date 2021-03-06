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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1a539e23, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x56ddc480, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc4dc87, __VMLINUX_SYMBOL_STR(timecounter_init) },
	{ 0x3830b100, __VMLINUX_SYMBOL_STR(pci_enable_sriov) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x2a4d74b, __VMLINUX_SYMBOL_STR(netmap_attach) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x7459f9f2, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x70716d5d, __VMLINUX_SYMBOL_STR(pci_sriov_set_totalvfs) },
	{ 0x5703006c, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x687513db, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x115eacfd, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xb586f7e8, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x163746f3, __VMLINUX_SYMBOL_STR(node_data) },
	{ 0xa09778d4, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x74b30f87, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xf8367cc6, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xdffb0052, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0xab147933, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0x1222e57f, __VMLINUX_SYMBOL_STR(netmap_rx_irq) },
	{ 0xfc5c5ea, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x6b2a287a, __VMLINUX_SYMBOL_STR(nm_rxsync_prologue) },
	{ 0xc82053b5, __VMLINUX_SYMBOL_STR(pci_disable_sriov) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xacb82357, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xa2169268, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x5528d259, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x2447533c, __VMLINUX_SYMBOL_STR(ktime_get_real) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x760097fb, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x8cc8528e, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf399ce75, __VMLINUX_SYMBOL_STR(netmap_no_pendintr) },
	{ 0x44baf9ca, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xab21428f, __VMLINUX_SYMBOL_STR(ptp_clock_unregister) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xddb8d762, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xd4ec3d37, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0x8dcf36c9, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
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
	{ 0x3c770e0b, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x832be87a, __VMLINUX_SYMBOL_STR(netmap_detach) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x9a7a60e8, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0xfb6e0282, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x7d5ab203, __VMLINUX_SYMBOL_STR(ptp_clock_register) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xb7817124, __VMLINUX_SYMBOL_STR(netmap_buffer_lut) },
	{ 0xa15d0751, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0xc4e30c6, __VMLINUX_SYMBOL_STR(netmap_disable_all_rings) },
	{ 0xc3b82bd6, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x74954462, __VMLINUX_SYMBOL_STR(timecounter_read) },
	{ 0xf143c1f6, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x5982c59, __VMLINUX_SYMBOL_STR(netmap_total_buffers) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x57dfb13e, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0xe7470db3, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xc0bf6ead, __VMLINUX_SYMBOL_STR(timecounter_cyc2time) },
	{ 0x86e7a937, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x58320da8, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xe5e05aa, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xb60c1fc4, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0xa7cc0008, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x94615fb3, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xf8ccbe0b, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x306c9d96, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x53f01b6b, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x44f89621, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0x5b9c0302, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x65d475bf, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x1fbd2292, __VMLINUX_SYMBOL_STR(netmap_buf_size) },
	{ 0xae605cda, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x3593ed6, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x7220bfc2, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x67f7403e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x106148e9, __VMLINUX_SYMBOL_STR(netmap_buffer_base) },
	{ 0x21fb443e, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xac4a686c, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xe27d160a, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0xac5008a2, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1c08142, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x85c669d, __VMLINUX_SYMBOL_STR(ptp_clock_index) },
	{ 0x9d0fafcb, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xf87ff723, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x430243f9, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0x7ab3190b, __VMLINUX_SYMBOL_STR(pci_num_vf) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x50002f0b, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0x9f1d5dc9, __VMLINUX_SYMBOL_STR(netmap_reset) },
	{ 0x72493e13, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0x9b690274, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xc39f59dd, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x49c5877c, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x62212b03, __VMLINUX_SYMBOL_STR(i2c_bit_add_bus) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa3492f90, __VMLINUX_SYMBOL_STR(pci_vfs_assigned) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x57f4cd8b, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0x3d6e6c18, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xc9d9cb91, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x35225686, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0xcf4ad331, __VMLINUX_SYMBOL_STR(netmap_enable_all_rings) },
	{ 0x7a1f79e0, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xd8fb358d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf6f5960b, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x24876078, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0xf05810e1, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x129e985c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x270c29ff, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0xad696b1b, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1cf76de8, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0xfabf5b15, __VMLINUX_SYMBOL_STR(pcie_capability_write_word) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xa64c8aca, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x6259d024, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x66c77343, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x95197559, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xd98b017a, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=netmap_lin,i2c-core,hwmon,ptp,i2c-algo-bit";

MODULE_ALIAS("pci:v00008086d00001F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001539sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001536sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001538sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001524sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001527sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001516sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000438sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001518sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001526sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "80C8FC3571A1C1269F44FF6");

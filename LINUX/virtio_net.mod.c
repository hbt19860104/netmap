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
	{ 0xe9a8a914, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xac5008a2, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x86e7a937, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xe9bad5f2, __VMLINUX_SYMBOL_STR(eth_commit_mac_addr_change) },
	{ 0x9720cbd6, __VMLINUX_SYMBOL_STR(eth_prepare_mac_addr_change) },
	{ 0x75ce3772, __VMLINUX_SYMBOL_STR(netdev_notify_peers) },
	{ 0x83a54fac, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0x2aac3512, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x6ba57131, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1fbd2292, __VMLINUX_SYMBOL_STR(netmap_buf_size) },
	{ 0xdecb8cd7, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x3a598ab3, __VMLINUX_SYMBOL_STR(netmap_ring_reinit) },
	{ 0x106148e9, __VMLINUX_SYMBOL_STR(netmap_buffer_base) },
	{ 0xf399ce75, __VMLINUX_SYMBOL_STR(netmap_no_pendintr) },
	{ 0x6b2a287a, __VMLINUX_SYMBOL_STR(nm_rxsync_prologue) },
	{ 0xfc5c5ea, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xacb82357, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0xda5bbe17, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x3c770e0b, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x9a7a60e8, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x324a198f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd98b017a, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x2a4d74b, __VMLINUX_SYMBOL_STR(netmap_attach) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xcf4ad331, __VMLINUX_SYMBOL_STR(netmap_enable_all_rings) },
	{ 0x5982c59, __VMLINUX_SYMBOL_STR(netmap_total_buffers) },
	{ 0xb7817124, __VMLINUX_SYMBOL_STR(netmap_buffer_lut) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x9f1d5dc9, __VMLINUX_SYMBOL_STR(netmap_reset) },
	{ 0xc4e30c6, __VMLINUX_SYMBOL_STR(netmap_disable_all_rings) },
	{ 0xd7f4d4a0, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb_delayed) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5b9c0302, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc39f59dd, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1896171c, __VMLINUX_SYMBOL_STR(virtqueue_add_outbuf) },
	{ 0xa15d0751, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd6cdb6b9, __VMLINUX_SYMBOL_STR(virtqueue_get_vring_size) },
	{ 0xacc4ad9d, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x49c5877c, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x832be87a, __VMLINUX_SYMBOL_STR(netmap_detach) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x5528d259, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xa7cc0008, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x79cd8a2d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb77fd35b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0xb60c1fc4, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x163408c9, __VMLINUX_SYMBOL_STR(virtqueue_detach_unused_buf) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x31046343, __VMLINUX_SYMBOL_STR(virtqueue_poll) },
	{ 0x91c975a3, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb_prepare) },
	{ 0x53f01b6b, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x85eabc19, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x65d475bf, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x84defae9, __VMLINUX_SYMBOL_STR(skb_partial_csum_set) },
	{ 0xcee5cfda, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd48c57aa, __VMLINUX_SYMBOL_STR(skb_coalesce_rx_frag) },
	{ 0x94615fb3, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdabe7f14, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xa09778d4, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0xd296d3d9, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x1fb72299, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xac90feaf, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x1fe912f1, __VMLINUX_SYMBOL_STR(netdev_alloc_frag) },
	{ 0xe93899bf, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xe85cafb9, __VMLINUX_SYMBOL_STR(skb_page_frag_refill) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0xb0ab2594, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xfb6e0282, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8cc8528e, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x2b9d4007, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x35e0d11, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xcb05454f, __VMLINUX_SYMBOL_STR(netif_set_xps_queue) },
	{ 0xcba00735, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x115eacfd, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x3d6e6c18, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x1902adf, __VMLINUX_SYMBOL_STR(netpoll_trap) },
	{ 0x1222e57f, __VMLINUX_SYMBOL_STR(netmap_rx_irq) },
	{ 0xc9d9cb91, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x9b690274, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x430243f9, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0xd8fb358d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x44baf9ca, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x306c9d96, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x4364bfd6, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x64823a3c, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio_ring,virtio,netmap_lin";

MODULE_ALIAS("virtio:d00000001v*");

MODULE_INFO(srcversion, "68EF584CA2D4293BC84E696");

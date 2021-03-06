/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(C) 2020 Marvell International Ltd.
 */

#define RTE_TRACE_POINT_REGISTER_SELECT

#include "rte_cryptodev_trace.h"

RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_configure);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_start);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_stop);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_close);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_queue_pair_setup);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_sym_session_pool_create);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_sym_session_create);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_asym_session_create);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_sym_session_free);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_asym_session_free);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_sym_session_init);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_asym_session_init);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_sym_session_clear);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_asym_session_clear);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_enqueue_burst);
RTE_TRACE_POINT_DEFINE(rte_cryptodev_trace_dequeue_burst);

RTE_INIT(cryptodev_trace_init)
{
	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_configure,
		lib.cryptodev.configure);

	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_start,
		lib.cryptodev.start);

	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_stop,
		lib.cryptodev.stop);

	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_close,
		lib.cryptodev.close);

	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_queue_pair_setup,
		lib.cryptodev.queue.pair.setup);

	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_sym_session_pool_create,
		lib.cryptodev.sym.pool.create);

	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_sym_session_create,
		lib.cryptodev.sym.create);

	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_asym_session_create,
		lib.cryptodev.asym.create);

	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_sym_session_free,
		lib.cryptodev.sym.free);

	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_asym_session_free,
		lib.cryptodev.asym.free);

	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_sym_session_init,
		lib.cryptodev.sym.init);

	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_asym_session_init,
		lib.cryptodev.asym.init);

	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_enqueue_burst,
		lib.cryptodev.enq.burst);

	RTE_TRACE_POINT_REGISTER(rte_cryptodev_trace_dequeue_burst,
		lib.cryptodev.deq.burst);
}

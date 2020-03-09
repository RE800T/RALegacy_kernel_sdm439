/*
 * Author: @AkiraNoSushi
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _LINUX_SDM439_H
#define _LINUX_SDM439_H

enum SDM439_devices {
    DEVICE_UNKNOWN = -1,
    XIAOMI_PINE,
    XIAOMI_OLIVES
};

extern enum SDM439_devices sdm439_devices;

extern int sdm439_current_device;

#endif
#define LIST_WL_DEFAULT				"qcom_rx_wakelock;wlan;wlan_wow_wl;wlan_extscan_wl;netmgr_wl;NETLINK;IPA_WS;[timerfd];wlan_ipa;wlan_pno_wl;wcnss_filter_lock;IPA_CLIENT_APPS_LAN_CONS;IPA_CLIENT_APPS_WAN_CONS;rmnet_ipa%d;IPCRTR_lpass_rx;hal_bluetooth_lock;DIAG_WS;qcom_sap_wakelock;sensor_ind;wlan_rx_wake;wlan_ctrl_wake;wlan_wake;qbt_wake_source;4c90000.qcom,qup_uart"

#define LENGTH_LIST_WL				355
#define LENGTH_LIST_WL_DEFAULT		333
#define LENGTH_LIST_WL_SEARCH		LENGTH_LIST_WL + LENGTH_LIST_WL_DEFAULT + 5

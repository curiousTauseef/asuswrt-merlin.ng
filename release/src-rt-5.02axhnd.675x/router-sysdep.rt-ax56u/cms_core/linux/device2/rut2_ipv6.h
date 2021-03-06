/***********************************************************************
 *
 *  Copyright (c) 2006-2008  Broadcom Corporation
 *  All Rights Reserved
 *
<:label-BRCM:2012:proprietary:standard

 This program is the proprietary software of Broadcom and/or its
 licensors, and may only be used, duplicated, modified or distributed pursuant
 to the terms and conditions of a separate, written license agreement executed
 between you and Broadcom (an "Authorized License").  Except as set forth in
 an Authorized License, Broadcom grants no license (express or implied), right
 to use, or waiver of any kind with respect to the Software, and Broadcom
 expressly reserves all rights in and to the Software and all intellectual
 property rights therein.  IF YOU HAVE NO AUTHORIZED LICENSE, THEN YOU HAVE
 NO RIGHT TO USE THIS SOFTWARE IN ANY WAY, AND SHOULD IMMEDIATELY NOTIFY
 BROADCOM AND DISCONTINUE ALL USE OF THE SOFTWARE.

 Except as expressly set forth in the Authorized License,

 1. This program, including its structure, sequence and organization,
    constitutes the valuable trade secrets of Broadcom, and you shall use
    all reasonable efforts to protect the confidentiality thereof, and to
    use this information only in connection with your use of Broadcom
    integrated circuit products.

 2. TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS"
    AND WITH ALL FAULTS AND BROADCOM MAKES NO PROMISES, REPRESENTATIONS OR
    WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY, OR OTHERWISE, WITH
    RESPECT TO THE SOFTWARE.  BROADCOM SPECIFICALLY DISCLAIMS ANY AND
    ALL IMPLIED WARRANTIES OF TITLE, MERCHANTABILITY, NONINFRINGEMENT,
    FITNESS FOR A PARTICULAR PURPOSE, LACK OF VIRUSES, ACCURACY OR
    COMPLETENESS, QUIET ENJOYMENT, QUIET POSSESSION OR CORRESPONDENCE
    TO DESCRIPTION. YOU ASSUME THE ENTIRE RISK ARISING OUT OF USE OR
    PERFORMANCE OF THE SOFTWARE.

 3. TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL BROADCOM OR
    ITS LICENSORS BE LIABLE FOR (i) CONSEQUENTIAL, INCIDENTAL, SPECIAL,
    INDIRECT, OR EXEMPLARY DAMAGES WHATSOEVER ARISING OUT OF OR IN ANY
    WAY RELATING TO YOUR USE OF OR INABILITY TO USE THE SOFTWARE EVEN
    IF BROADCOM HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES;
    OR (ii) ANY AMOUNT IN EXCESS OF THE AMOUNT ACTUALLY PAID FOR THE
    SOFTWARE ITSELF OR U.S. $1, WHICHEVER IS GREATER. THESE LIMITATIONS
    SHALL APPLY NOTWITHSTANDING ANY FAILURE OF ESSENTIAL PURPOSE OF ANY
    LIMITED REMEDY.
:>
 *
 ************************************************************************/

#ifdef DMP_DEVICE2_BASELINE_1
/* this file touches TR181 IPv6 objects */
#ifdef DMP_X_BROADCOM_COM_DEV2_IPV6_1 /* aka SUPPORT_IPV6 */

/* in rut2_ip6.c */
void rutIp_configureStaticIpv6Addrs(const InstanceIdStack *ipIntfIidStack,
                                    const char *ipIntfName);

void rutIp_configureIpv6Addr(const char *ifname, const char *addr, 
                             const char *prefix);

void rutIp_unconfigureStaticIpv6Addrs(const InstanceIdStack *ipIntfIidStack,
                                      const char *ipIntfName);

void rutIp_unconfigureIpv6Addr(const char *ifname, const char *addr);

UBOOL8 rutIp_findIpv6Addr(const InstanceIdStack *iidStack_ipIntf, const char *addr,
                          const char *origin, InstanceIdStack *iidStack_ipv6Addr);
CmsRet rutIp_addIpv6Addr(const InstanceIdStack *iidStack_ipIntf, const char *addr,
                         const char *origin, const char *prefix, int plt, int vlt);
CmsRet rutIp_replaceIpv6Addr(const InstanceIdStack *iidStack_ipv6Addr, const char *addr,
                             const char *origin, const char *prefix, int plt, int vlt);
CmsRet rutIp_deleteIpv6Addr(const InstanceIdStack *iidStack_ipIntf, const char *addr, const char *origin);


UBOOL8 rutIp_findIpv6Prefix(const InstanceIdStack *iidStack_ipIntf, const char *prefix,
                            const char *origin, const char *staticType, InstanceIdStack *iidStack_ipv6Prefix);
CmsRet rutIp_addIpv6Prefix(const InstanceIdStack *iidStack_ipIntf, const char *prefix,
                           const char *origin, const char *staticType, const char *parent,
                           const char *child, UBOOL8 onLink, UBOOL8 Autonomous,
                           int plt, int vlt, char *myPathRef, UINT32 pathLen);
CmsRet rutIp_replaceIpv6Prefix(const InstanceIdStack *iidStack_ipv6Prefix, const char *prefix,
                               const char *origin, const char *staticType, const char *parent,
                               const char *child, UBOOL8 onLink, UBOOL8 Autonomous, int plt, int vlt,
                               const char *prefixOld, int vltOld);
CmsRet rutIp_deleteIpv6Prefix(const InstanceIdStack *iidStack_ipIntf, const char *prefix, 
                              const char *origin, const char *staticType);

CmsRet rutIp_disableOrDeleteChildPrefix(const char *prefixFullPath, UBOOL8 isDisable);
CmsRet rutIp_updateSystemForPrefixChange(const char *prefixFullPath, UBOOL8 isDisable);

#endif  /* SUPPORT_IPV6 */
#endif  /* DMP_DEVICE2_BASELINE_1 */

/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TDENGINE_OS_SYSINFO_H
#define TDENGINE_OS_SYSINFO_H

#ifdef __cplusplus
extern "C" {
#endif

// TAOS_OS_FUNC_SYSINFO
void taosGetSystemInfo();
bool taosGetProcIO(float *readKB, float *writeKB);
bool taosGetBandSpeed(float *bandSpeedKb);
bool taosGetDisk();
bool taosGetCpuUsage(float *sysCpuUsage, float *procCpuUsage) ;
bool taosGetProcMemory(float *memoryUsedMB) ;
bool taosGetSysMemory(float *memoryUsedMB);
void taosPrintOsInfo();
int  taosSystem(const char * cmd) ;
void taosKillSystem();
bool taosGetSystemUid(char *uid);

// TAOS_OS_FUNC_SYSINFO_CORE
void taosSetCoreDump();

#ifdef __cplusplus
}
#endif

#endif

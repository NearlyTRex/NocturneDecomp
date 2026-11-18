// Name: core_mmx.c_getCPUInfo_FUN_004f7d2f
// Address: 004f7d2f
// Address Range: [[004f7d2f, 004f7d82]]
// Convention: __cdecl
// Signature: int __cdecl core_mmx_c_getCPUInfo_FUN_004f7d2f(SCPUInfo *cpu_info)

#include "nocturne.h"

int __cdecl core_mmx_c_getCPUInfo_FUN_004f7d2f(SCPUInfo *cpu_info)

{
  if (cpu_info != (SCPUInfo *)0x0) {
    core_mmx_c_detectIntelProcessor_FUN_004f7c6c();
    core_mmx_c_detectMMXSupport_FUN_004f7d19();
    cpu_info->family = (uint)g_CPUInfoFamily;
    cpu_info->model = (uint)g_CPUInfoModel;
    cpu_info->stepping = (uint)g_CPUInfoStepping;
    cpu_info->is_intel = (uint)g_CPUInfoIntelCPU;
    cpu_info->mmx_supported = (uint)g_CPUInfoMMXSupported;
  }
  return (uint)(cpu_info != (SCPUInfo *)0x0);
}

// Name: core_mmx.c_getCPUInfo_FUN_004d9f6f
// Address: 004d9f6f
// Address Range: [[004d9f6f, 004d9fc2]]
// Convention: __cdecl
// Signature: int __cdecl core_mmx_c_getCPUInfo_FUN_004d9f6f(SCPUInfo *cpu_info)

#include "nocturne.h"

int __cdecl core_mmx_c_getCPUInfo_FUN_004d9f6f(SCPUInfo *cpu_info)

{
  if (cpu_info != (SCPUInfo *)0x0) {
    core_mmx_c_detectIntelProcessor_FUN_004d9eac();
    core_mmx_c_detectMMXSupport_FUN_004d9f59();
    cpu_info->family = (uint)g_CPUInfoFamily;
    cpu_info->model = (uint)g_CPUInfoModel;
    cpu_info->stepping = (uint)g_CPUInfoStepping;
    cpu_info->is_intel = (uint)g_CPUInfoIntelCPU;
    cpu_info->mmx_supported = (uint)g_CPUInfoMMXSupported;
  }
  return (uint)(cpu_info != (SCPUInfo *)0x0);
}

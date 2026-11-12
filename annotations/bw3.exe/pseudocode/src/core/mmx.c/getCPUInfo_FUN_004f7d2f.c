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
    cpu_info->family = (uint)DAT_00600698;
    cpu_info->model = (uint)DAT_00600699;
    cpu_info->stepping = (uint)DAT_0060069a;
    cpu_info->is_intel = (uint)DAT_0060069c;
    cpu_info->mmx_supported = (uint)DAT_006006a1;
  }
  return (uint)(cpu_info != (SCPUInfo *)0x0);
}

// Name: core_mmx.c_getCPUInfo_FUN_004fd58f
// Address: 004fd58f
// Address Range: [[004fd58f, 004fd5e2]]
// Convention: __cdecl
// Signature: int __cdecl core_mmx_c_getCPUInfo_FUN_004fd58f(SCPUInfo *cpu_info)

#include "nocturne.h"

int __cdecl core_mmx_c_getCPUInfo_FUN_004fd58f(SCPUInfo *cpu_info)

{
  if (cpu_info != (SCPUInfo *)0x0) {
    core_mmx_c_detectIntelProcessor_FUN_004fd4cc();
    core_mmx_c_detectMMXSupport_FUN_004fd579();
    cpu_info->family = (uint)DAT_006182d8;
    cpu_info->model = (uint)DAT_006182d9;
    cpu_info->stepping = (uint)DAT_006182da;
    cpu_info->is_intel = (uint)DAT_006182dc;
    cpu_info->mmx_supported = (uint)DAT_006182e1;
  }
  return (uint)(cpu_info != (SCPUInfo *)0x0);
}

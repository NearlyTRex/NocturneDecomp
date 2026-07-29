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
    cpu_info->family = (uint)DAT_005bb118;
    cpu_info->model = (uint)DAT_005bb119;
    cpu_info->stepping = (uint)DAT_005bb11a;
    cpu_info->is_intel = (uint)DAT_005bb11c;
    cpu_info->mmx_supported = (uint)DAT_005bb121;
  }
  return (uint)(cpu_info != (SCPUInfo *)0x0);
}

// Name: core_mmx.c_getCPUInfo_FUN_0051c54f
// Address: 0051c54f
// Address Range: [[0051c54f, 0051c5a2]]
// Convention: __cdecl
// Signature: int __cdecl core_mmx_c_getCPUInfo_FUN_0051c54f(SCPUInfo *cpu_info)

#include "nocturne.h"

int __cdecl core_mmx_c_getCPUInfo_FUN_0051c54f(SCPUInfo *cpu_info)

{
  if (cpu_info != (SCPUInfo *)0x0) {
    core_mmx_c_detectIntelProcessor_FUN_0051c48c();
    core_mmx_c_detectMMXSupport_FUN_0051c539();
    cpu_info->family = (uint)DAT_0061f7b8;
    cpu_info->model = (uint)DAT_0061f7b9;
    cpu_info->stepping = (uint)DAT_0061f7ba;
    cpu_info->is_intel = (uint)DAT_0061f7bc;
    cpu_info->mmx_supported = (uint)DAT_0061f7c1;
  }
  return (uint)(cpu_info != (SCPUInfo *)0x0);
}

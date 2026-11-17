// Name: core_mmx.c_detectCPUFeatures_FUN_004f7c30
// Address: 004f7c30
// Address Range: [[004f7c30, 004f7c60]]
// Convention: __cdecl
// Signature: void __cdecl core_mmx_c_detectCPUFeatures_FUN_004f7c30(void)

#include "nocturne.h"

void __cdecl core_mmx_c_detectCPUFeatures_FUN_004f7c30(void)

{
  core_mmx_c_detectIntelProcessor_FUN_004f7c6c();
  core_mmx_c_detectMMXSupport_FUN_004f7d19();
  g_INT_01c6e2a0 = (uint)g_UCHAR_006006a1;
  g_UINT_005fba34 = (uint)g_UCHAR_00600698;
  g_INT_01c6e2a4 = (uint)g_UCHAR_0060069c;
  return;
}

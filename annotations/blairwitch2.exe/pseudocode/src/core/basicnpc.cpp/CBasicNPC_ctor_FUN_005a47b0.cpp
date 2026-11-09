// Name: core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0
// Address: 005a47b0
// Address Range: [[005a47b0, 005a4869]]
// Convention: unknown
// Signature: CBasicNPC * core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBasicNPC * core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC *this_ptr)

{
  uint uVar1;
  CBasicNPC *pCVar2;
  
  pCVar2 = (CBasicNPC *)unkafter_basicene_cpp_FUN_0059e3b0(this_ptr);
  *(byte **)&pCVar2->field_0x2b0 = &g_CBasicNPCVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar2->field_0x2b4,(char *)0x5f03f4);
  *(uint *)&pCVar2->field_0x3434 = 0x3f800000;
  *(uint *)&pCVar2->field_0x1134c = 0x3f800000;
  *(uint *)&pCVar2->field_0x11380 = 0;
  *(uint *)&pCVar2->field_0x11384 = 0;
  *(uint *)&pCVar2->field_0x11388 = 1;
  *(uint *)&pCVar2->field_0x1138c = 1;
  uVar1 = _DAT_005ff71c;
  *(uint *)&pCVar2->field_0x11394 = 0;
  *(uint *)&pCVar2->field_0x11344 = 2;
  *(uint *)&pCVar2->field_0x11370 = uVar1;
  core_basicnpc_cpp_FUN_005a4880(pCVar2,0,0);
  unkaddr_0059d350_cpp_FUN_0059d990(&pCVar2->field_0x10af8,"Animation");
  unkaddr_0059d350_cpp_FUN_0059dc80(&pCVar2->field_0x10af8);
  return pCVar2;
}

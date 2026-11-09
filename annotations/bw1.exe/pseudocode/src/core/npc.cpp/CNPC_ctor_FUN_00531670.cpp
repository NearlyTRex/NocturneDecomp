// Name: core_npc.cpp_CNPC_ctor_FUN_00531670
// Address: 00531670
// Address Range: [[00531670, 0053171f]]
// Convention: unknown
// Signature: CNPC * core_npc_cpp_CNPC_ctor_FUN_00531670(CNPC *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CNPC * core_npc_cpp_CNPC_ctor_FUN_00531670(CNPC *this_ptr)

{
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  uint uVar3;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_0042c080((CCharacter *)this_ptr);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00532fe0((CPathMap *)(pCVar1 + 1));
  *(byte ***)&pCVar2[-1].field_0x7860 = &g_CNPCVTable;
  *(uint *)&pCVar2[-1].field_0xa6f8 = 0x3f19999a;
  *(uint *)&pCVar2[-1].field_0xa6fc = 0x3f666666;
  *(uint *)&pCVar2[-1].field_0xa708 = 0x3fcccccd;
  *(uint *)&pCVar2[-1].field_0xa70c = 0xc479c000;
  uVar3 = core_actor_cpp_FUN_0040cc00(0x3f666666,0x3f8ccccd);
  *(uint *)&pCVar2[1].field_0x8 = uVar3;
  core_skeleton_cpp_FUN_00569f50(&pCVar2[-1].field_0x7864,"nocchar.dfm");
  *(uint *)&pCVar2[-1].field_0x9ecc = 0;
  *(uint *)(pCVar2 + 1) = 0;
  *(uint *)&pCVar2[1].field_0x4 = 0;
  return (CNPC *)&pCVar2[-1].field_0x770c;
}

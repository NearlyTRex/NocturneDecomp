// Name: core_npc.cpp_CNPC_ctor_FUN_00510460
// Address: 00510460
// Address Range: [[00510460, 0051050f]]
// Convention: unknown
// Signature: CNPC * core_npc_cpp_CNPC_ctor_FUN_00510460(CNPC *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CNPC * core_npc_cpp_CNPC_ctor_FUN_00510460(CNPC *this_ptr)

{
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  uint uVar3;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_00422340((CCharacter *)this_ptr);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00511c90((CPathMap *)(pCVar1 + 1));
  *(byte **)&pCVar2[-1].field_0x312c = &g_CNPCVTable;
  *(uint *)&pCVar2[-1].field_0x62ac = 0x3f19999a;
  *(uint *)&pCVar2[-1].field_0x62b0 = 0x3f666666;
  *(uint *)&pCVar2[-1].field_0x62bc = 0x3fcccccd;
  *(uint *)&pCVar2[-1].field_0x62c0 = 0xc479c000;
  uVar3 = core_actor_cpp_FUN_0040cf60(0x3f666666,0x3f8ccccd);
  *(uint *)&pCVar2[1].field_0x8 = uVar3;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar2[-1].field_0x3130,"nocchar.dfm");
  *(uint *)&pCVar2[-1].field_0x56a8 = 0;
  *(uint *)(pCVar2 + 1) = 0;
  *(uint *)&pCVar2[1].field_0x4 = 0;
  return (CNPC *)&pCVar2[-1].field_0x2e7c;
}

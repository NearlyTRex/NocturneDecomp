// Name: core_npc.cpp_CNPC_ctor_FUN_00508f40
// Address: 00508f40
// Address Range: [[00508f40, 00509017]]
// Convention: unknown
// Signature: CNPC * core_npc_cpp_CNPC_ctor_FUN_00508f40(CNPC *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CNPC * core_npc_cpp_CNPC_ctor_FUN_00508f40(CNPC *this_ptr)

{
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  uint uVar3;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_0042ac20((CCharacter *)this_ptr);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_0050acc0((CPathMap *)(pCVar1 + 1));
  *(byte ***)&pCVar2[-1].field_0x6c64 = &g_CNPCVTable;
  *(uint *)&pCVar2[-1].field_0x9d7c = 0x3f19999a;
  *(uint *)&pCVar2[-1].field_0x9d80 = 0x3f666666;
  *(uint *)&pCVar2[-1].field_0x9d8c = 0x3fcccccd;
  *(uint *)&pCVar2[-1].field_0x9d90 = 0xc479c000;
  uVar3 = core_actor_cpp_FUN_0040ce40(0x3f666666,0x3f8ccccd);
  *(uint *)&pCVar2[1].field_0x8 = uVar3;
  core_skeleton_cpp_FUN_0054eae0(&pCVar2[-1].field_0x6c68,"nocchar.dfm");
  *(uint *)&pCVar2[-1].field_0x92d0 = 0;
  *(uint *)(pCVar2 + 1) = 0;
  *(uint *)&pCVar2[1].field_0x4 = 0;
  *(uint *)&pCVar2[1].field_0xc = 0x10000;
  *(uint *)&pCVar2[1].field_0x14 = 100;
  *(uint *)&pCVar2[1].field_0x1c = 0x40000000;
  *(uint *)&pCVar2[1].field_0x10 = 0xffffffff;
  return (CNPC *)&pCVar2[-1].field_0x6b10;
}

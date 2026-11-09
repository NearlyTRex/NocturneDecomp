// Name: core_asgaya.cpp_CAsgaya_ctor_FUN_005a0a10
// Address: 005a0a10
// Address Range: [[005a0a10, 005a0af1]]
// Convention: unknown
// Signature: CAsgaya * core_asgaya_cpp_CAsgaya_ctor_FUN_005a0a10(CAsgaya *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAsgaya * core_asgaya_cpp_CAsgaya_ctor_FUN_005a0a10(CAsgaya *this_ptr)

{
  CNPC *pCVar1;
  CPathMap *pCVar2;
  uint uVar3;
  
  pCVar1 = core_npc_cpp_CNPC_ctor_FUN_00508f40((CNPC *)this_ptr);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_0050acc0((CPathMap *)(pCVar1 + 1));
  *(byte ***)&pCVar2[-2].field_0x6c44 = &g_CAsgayaVTable;
  *(uint *)&pCVar2[-2].field_0x9d5c = 0x3f19999a;
  *(uint *)&pCVar2[-2].field_0x9d60 = 0x3f666666;
  *(uint *)&pCVar2[-2].field_0x9d6c = 0x3fcccccd;
  *(uint *)&pCVar2[-2].field_0x9d70 = 0xc479c000;
  uVar3 = core_actor_cpp_FUN_0040ce40(0x3f666666,0x3f8ccccd);
  *(uint *)&pCVar2[1].field_0x8 = uVar3;
  core_skeleton_cpp_FUN_0054eae0(&pCVar2[-2].field_0x6c48,"bwp3_shaman.dfm");
  *(uint *)&pCVar2[-2].field_0x92b0 = 0;
  *(uint *)(pCVar2 + 1) = 0;
  *(uint *)&pCVar2[1].field_0x4 = 0;
  *(uint *)&pCVar2[1].field_0x10 = 0;
  *(uint *)&pCVar2[1].field_0x28 = 0xffff;
  *(uint *)&pCVar2[-1].field_0x138d0 = 100;
  *(uint *)&pCVar2[-1].field_0x138d8 = 0x40000000;
  *(uint *)&pCVar2[1].field_0x20 = 0xffffffff;
  return (CAsgaya *)&pCVar2[-2].field_0x6af0;
}

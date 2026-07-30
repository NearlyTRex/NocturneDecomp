// Name: core_charactr.cpp_CCharacter_ctor_FUN_00423f40
// Address: 00423f40
// Address Range: [[00423f40, 0042425c]]
// Convention: __cdecl
// Signature: CCharacter * __cdecl core_charactr_cpp_CCharacter_ctor_FUN_00423f40(CCharacter *this_ptr)

#include "nocturne.h"

CCharacter * __cdecl core_charactr_cpp_CCharacter_ctor_FUN_00423f40(CCharacter *this_ptr)

{
  CDemonActor *pCVar1;
  CDeformableModelInstance *pCVar2;
  CClothList *pCVar3;
  void *pvVar4;
  CCharacter *pCVar5;
  uint local_c [3];
  float *pfVar6;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(&this_ptr->base);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0051b660
                     ((CDeformableModelInstance *)(pCVar1 + 1));
  pCVar3 = core_cloth_cpp_CClothList_ctor_FUN_00438210
                     ((CClothList *)(pCVar2[1].rest_pose_data + 0x5d));
  pvVar4 = __arrinit
                     (pCVar3[1].filenames[0] + 8,0xf,&g_CVectorTypeInfo_005993b0);
  pvVar4 = __arrinit
                     ((void *)((int)pvVar4 + 0xb4),0xf,&g_CVectorTypeInfo_005993b0);
  pvVar4 = __arrinit
                     ((void *)((int)pvVar4 + 0x20c),0x32,&g_SFireTypeInfo_00599960);
  pvVar4 = __arrinit
                     ((void *)((int)pvVar4 + 0x4b0),0x32,&g_CFlameTypeInfo_00599940);
  *(CCharacter_full_vtable **)((int)pvVar4 + -0x3278) = &g_CCharacterVTable;
  *(uint *)((int)pvVar4 + -0xfc0) = 0;
  *(uint *)((int)pvVar4 + -0xf9c) = 0;
  *(uint *)((int)pvVar4 + -4000) = *(uint *)((int)pvVar4 + -0xf9c);
  *(uint *)((int)pvVar4 + -0xfa4) = *(uint *)((int)pvVar4 + -4000);
  *(uint *)((int)pvVar4 + -0xf8c) = 0x42c80000;
  *(uint *)((int)pvVar4 + -0x5f0) = 0x3f800000;
  *(uint *)((int)pvVar4 + -0x5ec) = 0x40000000;
  *(uint *)((int)pvVar4 + -0x5e8) = 0x41a00000;
  *(uint *)((int)pvVar4 + -0x5e4) = 0x42480000;
  *(uint *)((int)pvVar4 + -0x5e0) = 0x40000000;
  *(uint *)((int)pvVar4 + -0x5dc) = 0xc479c000;
  *(uint *)((int)pvVar4 + -0x5d8) = 0;
  *(uint *)((int)pvVar4 + -0x4bc) = 0;
  *(uint *)((int)pvVar4 + -0x4b4) = 0x40000000;
  *(uint *)((int)pvVar4 + -0xe04) = 0xffffffff;
  *(uint *)((int)pvVar4 + -0xe08) = 0xffffffff;
  *(uint *)((int)pvVar4 + -0x5f4) = 0;
  *(uint *)((int)pvVar4 + -0xe1c) = 0;
  *(uint *)((int)pvVar4 + -0xe2c) = 0;
  *(uint *)((int)pvVar4 + -0xe28) = 0x40400000;
  *(uint *)((int)pvVar4 + -0xe24) = 0x7149f2ca;
  *(uint *)((int)pvVar4 + -0xe20) = 0xbf800000;
  *(uint *)((int)pvVar4 + -0xe18) = 0;
  *(uint *)((int)pvVar4 + -0xf90) = 0x42c80000;
  if ((uint *)((int)pvVar4 + -0xe14) != local_c) {
    *(uint *)((int)pvVar4 + -0xe14) = 0;
    *(uint *)((int)pvVar4 + -0xe10) = 0;
    *(uint *)((int)pvVar4 + -0xe0c) = 0x40000000;
  }
  *(uint *)((int)pvVar4 + -0xde4) = 0;
  *(uint *)((int)pvVar4 + -0xde0) = 0;
  *(uint *)((int)pvVar4 + -0xddc) = 0;
  *(uint *)((int)pvVar4 + -0xdd8) = 0;
  *(uint *)((int)pvVar4 + -0xde8) = 0xffffffff;
  pCVar5 = (CCharacter *)((int)pvVar4 + -0x33c4);
  do {
    pfVar6 = &(pCVar5->base).orient_matrix.m[0].z;
    pCVar5->carry_hands[0].bone_index = -1;
    pCVar5->carry_hands[0].secondary_bone_index = -1;
    pCVar5->carry_hands[0].carry_actor = (CDemonActor *)0x0;
    pCVar5 = (CCharacter *)pfVar6;
  } while (pfVar6 != (float *)((int)pvVar4 + -0x333c));
  *(uint *)((int)pvVar4 + -0xdf4) = 0;
  *(uint *)((int)pvVar4 + -0xdf0) = 0;
  *(uint *)((int)pvVar4 + -0xdec) = 0;
  *(uint *)((int)pvVar4 + -0xdfc) = 0;
  *(uint *)((int)pvVar4 + -0xdf8) = 0;
  *(uint *)((int)pvVar4 + -0xdbc) = 0;
  *(uint *)((int)pvVar4 + 0x827c) = 0;
  *(uint *)((int)pvVar4 + -0xdb8) = 0;
  *(uint *)((int)pvVar4 + -0xe34) = 0;
  *(uint *)((int)pvVar4 + -0xe30) = 0;
  *(uint *)((int)pvVar4 + -0xdb4) = 0;
  *(uint *)((int)pvVar4 + 0x8284) = 0;
  *(uint *)((int)pvVar4 + -0xdb0) = 0x3f800000;
  *(uint *)((int)pvVar4 + -0xdac) = 0;
  *(uint *)((int)pvVar4 + -0xda4) = 0;
  *(uint *)((int)pvVar4 + -0x940) = 0;
  *(uint *)((int)pvVar4 + -0x93c) = 0;
  *(uint *)((int)pvVar4 + -0xda8) = 1;
  *(uint *)((int)pvVar4 + -0xf88) = 0;
  *(byte *)((int)pvVar4 + -0xf84) = 0;
  *(uint *)((int)pvVar4 + -0x77c) = 0;
  *(uint *)((int)pvVar4 + -0x778) = 0;
  *(uint *)((int)pvVar4 + -0x774) = 0;
  *(uint *)((int)pvVar4 + -0x608) = 0;
  *(uint *)((int)pvVar4 + -0x5f8) = 0;
  *(byte *)((int)pvVar4 + -0xe98) = 0;
  return (CCharacter *)((int)pvVar4 + -0x33c4);
}

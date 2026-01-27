// Name: core_charactr.cpp_CCharacter_ctor_FUN_00427e20
// Address: 00427e20
// Address Range: [[00427e20, 0042813c]]
// Convention: __cdecl
// Signature: CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_00427e20(CCharacter * this_ptr)

#include "nocturne.h"

CCharacter * __cdecl core_charactr_cpp_CCharacter_ctor_FUN_00427e20(CCharacter *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  void *pvVar3;
  CCharacter *pCVar4;
  uint local_c [3];
  float *pfVar5;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
            ((CDeformableModelInstance *)(pCVar1 + 1));
  iVar2 = core_cloth_cpp_FUN_0043bf40();
  pvVar3 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)(iVar2 + 0x1c8),0xf,&g_CVectorTypeInfo);
  pvVar3 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar3 + 0xb4),0xf,&g_CVectorTypeInfo);
  pvVar3 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar3 + 0x20c),0x32,&g_SFireTypeInfo);
  pvVar3 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar3 + 0x4b0),0x32,&g_CFlameTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar3 + -0x3278) = &g_CCharacterVTable;
  *(uint *)((int)pvVar3 + -0xfc0) = 0;
  *(uint *)((int)pvVar3 + -0xf9c) = 0;
  *(uint *)((int)pvVar3 + -4000) = *(uint *)((int)pvVar3 + -0xf9c);
  *(uint *)((int)pvVar3 + -0xfa4) = *(uint *)((int)pvVar3 + -4000);
  *(uint *)((int)pvVar3 + -0xf8c) = 0x42c80000;
  *(uint *)((int)pvVar3 + -0x5f0) = 0x3f800000;
  *(uint *)((int)pvVar3 + -0x5ec) = 0x40000000;
  *(uint *)((int)pvVar3 + -0x5e8) = 0x41a00000;
  *(uint *)((int)pvVar3 + -0x5e4) = 0x42480000;
  *(uint *)((int)pvVar3 + -0x5e0) = 0x40000000;
  *(uint *)((int)pvVar3 + -0x5dc) = 0xc479c000;
  *(uint *)((int)pvVar3 + -0x5d8) = 0;
  *(uint *)((int)pvVar3 + -0x4bc) = 0;
  *(uint *)((int)pvVar3 + -0x4b4) = 0x40000000;
  *(uint *)((int)pvVar3 + -0xe04) = 0xffffffff;
  *(uint *)((int)pvVar3 + -0xe08) = 0xffffffff;
  *(uint *)((int)pvVar3 + -0x5f4) = 0;
  *(uint *)((int)pvVar3 + -0xe1c) = 0;
  *(uint *)((int)pvVar3 + -0xe2c) = 0;
  *(uint *)((int)pvVar3 + -0xe28) = 0x40400000;
  *(uint *)((int)pvVar3 + -0xe24) = 0x7149f2ca;
  *(uint *)((int)pvVar3 + -0xe20) = 0xbf800000;
  *(uint *)((int)pvVar3 + -0xe18) = 0;
  *(uint *)((int)pvVar3 + -0xf90) = 0x42c80000;
  if ((uint *)((int)pvVar3 + -0xe14) != local_c) {
    *(uint *)((int)pvVar3 + -0xe14) = 0;
    *(uint *)((int)pvVar3 + -0xe10) = 0;
    *(uint *)((int)pvVar3 + -0xe0c) = 0x40000000;
  }
  *(uint *)((int)pvVar3 + -0xde4) = 0;
  *(uint *)((int)pvVar3 + -0xde0) = 0;
  *(uint *)((int)pvVar3 + -0xddc) = 0;
  *(uint *)((int)pvVar3 + -0xdd8) = 0;
  *(uint *)((int)pvVar3 + -0xde8) = 0xffffffff;
  pCVar4 = (CCharacter *)((int)pvVar3 + -0x33cc);
  do {
    pfVar5 = &(pCVar4->base).orient_matrix.m[0].z;
    pCVar4->carry_hands[0].unk1[0] = -1;
    pCVar4->carry_hands[0].unk1[1] = -1;
    pCVar4->carry_hands[0].unk1[2] = -1;
    pCVar4->carry_hands[0].unk1[3] = -1;
    pCVar4->carry_hands[0].unk1[4] = -1;
    pCVar4->carry_hands[0].unk1[5] = -1;
    pCVar4->carry_hands[0].unk1[6] = -1;
    pCVar4->carry_hands[0].unk1[7] = -1;
    pCVar4->carry_hands[0].carry_actor = (CDemonActor *)0x0;
    pCVar4 = (CCharacter *)pfVar5;
  } while (pfVar5 != (float *)((int)pvVar3 + -0x3344));
  *(uint *)((int)pvVar3 + -0xdf4) = 0;
  *(uint *)((int)pvVar3 + -0xdf0) = 0;
  *(uint *)((int)pvVar3 + -0xdec) = 0;
  *(uint *)((int)pvVar3 + -0xdfc) = 0;
  *(uint *)((int)pvVar3 + -0xdf8) = 0;
  *(uint *)((int)pvVar3 + -0xdbc) = 0;
  *(uint *)((int)pvVar3 + 0x840c) = 0;
  *(uint *)((int)pvVar3 + -0xdb8) = 0;
  *(uint *)((int)pvVar3 + -0xe34) = 0;
  *(uint *)((int)pvVar3 + -0xe30) = 0;
  *(uint *)((int)pvVar3 + -0xdb4) = 0;
  *(uint *)((int)pvVar3 + 0x8414) = 0;
  *(uint *)((int)pvVar3 + -0xdb0) = 0x3f800000;
  *(uint *)((int)pvVar3 + -0xdac) = 0;
  *(uint *)((int)pvVar3 + -0xda4) = 0;
  *(uint *)((int)pvVar3 + -0x940) = 0;
  *(uint *)((int)pvVar3 + -0x93c) = 0;
  *(uint *)((int)pvVar3 + -0xda8) = 1;
  *(uint *)((int)pvVar3 + -0xf88) = 0;
  *(byte *)((int)pvVar3 + -0xf84) = 0;
  *(uint *)((int)pvVar3 + -0x77c) = 0;
  *(uint *)((int)pvVar3 + -0x778) = 0;
  *(uint *)((int)pvVar3 + -0x774) = 0;
  *(uint *)((int)pvVar3 + -0x608) = 0;
  *(uint *)((int)pvVar3 + -0x5f8) = 0;
  *(byte *)((int)pvVar3 + -0xe98) = 0;
  return (CCharacter *)((int)pvVar3 + -0x33cc);
}

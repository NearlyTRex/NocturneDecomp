// Name: core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400
// Address: 00417400
// Address Range: [[00417400, 00417604]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400(CBoneGuy *this_ptr)

#include "nocturne.h"

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400(CBoneGuy *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CEnemy *pCVar5;
  void *dest;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float afStackY_1018 [1015];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CColor3f CStack_24;
  CColor3f CStack_18;
  
  bVar9 = 0;
  pCVar5 = core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  dest = __arrinit
                   (pCVar5[1].base.base.create_event + 0x24,0x14,&g_SBoneGuyBoxTypeInfo);
  *(CBoneGuy_full_vtable **)((int)dest + -0xcf9c) = &g_CBoneGuyVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)((int)dest + -0xcf98),"boneguy.dfm");
  *(uint *)((int)dest + -0x9e84) = 0x3f19999a;
  *(uint *)((int)dest + -0x9e80) = 0x3f666666;
  pcVar7 = "boneguydie";
  *(uint *)((int)dest + -0xcff4) = 1;
  pcVar8 = (char *)((int)dest + -0x74);
  *(uint *)((int)dest + -0xc) = 0;
  fVar2 = 50.0f;
  *(uint *)((int)dest + -0xa950) = 3;
  fVar3 = 100.0f;
  *(uint *)((int)dest + -0x10) = 0x41200000;
  *(float *)((int)dest + -0x9e7c) = fVar2;
  *(float *)((int)dest + -0x9e78) = fVar3;
  do {
    cVar1 = *pcVar7;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)dest + -8) = 0;
  memset(dest,0,0x5a0);
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0xff);
  *(uint *)((int)dest + -0x94) = 0;
  *(uint *)((int)dest + -0x90) = 0;
  *(uint *)((int)dest + -0x8c) = 0;
  *(uint *)((int)dest + -0x298) = 0x40c00000;
  *(uint *)((int)dest + -0xabc4) = 0x3f490fdb;
  *(uint *)((int)dest + -4) = 0;
  *(uint *)((int)dest + -0x7c) = 0;
  *(int *)((int)dest + -0x9c) = iVar6;
  CStack_24.r = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,255.0);
  CStack_24.g = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,40.0);
  CStack_24.b = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(106.0,256.0);
  core_boneguy_cpp_hsvToRgb_FUN_00417240(&CStack_24,&CStack_18);
  fStack_30 = CStack_18.r;
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar9 * -8) =
       *(uint *)((int)&CStack_18 + (uint)bVar9 * -8 + 4);
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       *(uint *)((int)&CStack_18 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  fVar2 = fStack_30 * 256.0f;
  fVar3 = fStack_2c * 256.0f;
  fVar4 = fStack_28 * 256.0f;
  *(uint *)((int)dest + -0x9e8c) = 0;
  dVar10 = round((double)fVar2);
  dVar11 = round((double)fVar3);
  dVar12 = round((double)fVar4);
  *(int *)((int)dest + -0xcfe8) = (int)ROUND(dVar10);
  *(int *)((int)dest + -0xcfe4) = (int)ROUND(dVar11);
  *(int *)((int)dest + -0xcfe0) = (int)ROUND(dVar12);
  return (CBoneGuy *)((int)dest + -0xd0f0);
}

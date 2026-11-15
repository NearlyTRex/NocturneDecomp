// Name: core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400
// Address: 00417400
// Address Range: [[00417400, 00417604]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400(CBoneGuy *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  CEnemy *pCVar7;
  void *dest;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float afStackY_1018 [1015];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CColor3f CStack_24;
  CColor3f CStack_18;
  
  bVar11 = 0;
  pCVar7 = core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  dest = __arrinit
                   (pCVar7[1].base.base.create_event + 0x24,0x14,&g_SBoneGuyBoxTypeInfo);
  *(CBoneGuy_full_vtable **)((int)dest + -0xcf9c) = &g_CBoneGuyVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)((int)dest + -0xcf98),(char *)0x5b6d7a);
  *(uint *)((int)dest + -0x9e84) = 0x3f19999a;
  *(uint *)((int)dest + -0x9e80) = 0x3f666666;
  pcVar9 = "boneguydie";
  *(uint *)((int)dest + -0xcff4) = 1;
  pcVar10 = (char *)((int)dest + -0x74);
  *(uint *)((int)dest + -0xc) = 0;
  uVar5 = _DAT_005dc13c;
  *(uint *)((int)dest + -0xa950) = 3;
  uVar6 = _DAT_005dc140;
  *(uint *)((int)dest + -0x10) = 0x41200000;
  *(uint *)((int)dest + -0x9e7c) = uVar5;
  *(uint *)((int)dest + -0x9e78) = uVar6;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)dest + -8) = 0;
  memset(dest,0,0x5a0);
  iVar8 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0xff);
  *(uint *)((int)dest + -0x94) = 0;
  *(uint *)((int)dest + -0x90) = 0;
  *(uint *)((int)dest + -0x8c) = 0;
  *(uint *)((int)dest + -0x298) = 0x40c00000;
  *(uint *)((int)dest + -0xabc4) = 0x3f490fdb;
  *(uint *)((int)dest + -4) = 0;
  *(uint *)((int)dest + -0x7c) = 0;
  *(int *)((int)dest + -0x9c) = iVar8;
  CStack_24.r = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,255.0);
  CStack_24.g = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,40.0);
  CStack_24.b = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(106.0,256.0);
  core_boneguy_cpp_hsvToRgb_FUN_00417240(&CStack_24,&CStack_18);
  fStack_30 = CStack_18.r;
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar11 * -8) =
       *(uint *)((int)&CStack_18 + (uint)bVar11 * -8 + 4);
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
       *(uint *)((int)&CStack_18 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
  fVar2 = fStack_30 * _DAT_005b6d92;
  fVar3 = fStack_2c * _DAT_005b6d92;
  fVar4 = fStack_28 * _DAT_005b6d92;
  *(uint *)((int)dest + -0x9e8c) = 0;
  dVar12 = round((double)fVar2);
  dVar13 = round((double)fVar3);
  dVar14 = round((double)fVar4);
  *(int *)((int)dest + -0xcfe8) = (int)ROUND(dVar12);
  *(int *)((int)dest + -0xcfe4) = (int)ROUND(dVar13);
  *(int *)((int)dest + -0xcfe0) = (int)ROUND(dVar14);
  return (CBoneGuy *)((int)dest + -0xd0f0);
}

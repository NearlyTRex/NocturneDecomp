// Name: core_boneguy.cpp_CBoneGuy_ctor_FUN_0041b750
// Address: 0041b750
// Address Range: [[0041b750, 0041b936]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_0041b750(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_0041b750(CBoneGuy *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  CEnemy *pCVar6;
  void *dest;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float afStackY_101c [1015];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CColor3f CStack_28;
  CColor3f CStack_1c;
  float fStack_10;
  
  bVar10 = 0;
  pCVar6 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  dest = __arrinit
                   (pCVar6[1].base.base.create_event + 8,0x14,&g_SBoneGuyBoxTypeInfo);
  *(CBoneGuy_full_vtable **)((int)dest + -0xc194) = &g_CBoneGuyVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)((int)dest + -0xc190),(char *)0x5d4599);
  *(uint *)((int)dest + -0x92fc) = 0x3f19999a;
  *(uint *)((int)dest + -0x92f8) = 0x3f666666;
  pcVar8 = "boneguydie";
  *(uint *)((int)dest + -0xc1ec) = 1;
  pcVar9 = (char *)((int)dest + -0x6c);
  *(uint *)((int)dest + 0x5a0) = 0;
  uVar4 = _DAT_005fcc30;
  *(uint *)((int)dest + -0x9b48) = 2;
  uVar5 = _DAT_005fcc34;
  *(uint *)((int)dest + -8) = 0x41200000;
  *(uint *)((int)dest + -0x92f4) = uVar4;
  *(uint *)((int)dest + -0x92f0) = uVar5;
  do {
    cVar1 = *pcVar8;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)dest + -4) = 0;
  memset(dest,0,0x5a0);
  iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,0xff);
  *(uint *)((int)dest + -0x7c) = 0;
  *(uint *)((int)dest + -0x78) = 0;
  *(uint *)((int)dest + -0x74) = 0;
  *(uint *)((int)dest + -0x8c) = 0x40c00000;
  *(uint *)((int)dest + -0x9dbc) = 0x3f490fdb;
  *(int *)((int)dest + -0x80) = iVar7;
  CStack_28.r = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,255.0);
  fStack_10 = CStack_28.r;
  CStack_28.g = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,40.0);
  fStack_10 = CStack_28.g;
  CStack_28.b = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(106.0,256.0);
  fStack_10 = CStack_28.b;
  core_boneguy_cpp_hsvToRgb_FUN_0041b590(&CStack_28,&CStack_1c);
  fStack_34 = CStack_1c.r;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar10 * -8) =
       *(uint *)((int)&CStack_1c + (uint)bVar10 * -8 + 4);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
       *(uint *)((int)&CStack_1c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  fVar2 = fStack_30 * _DAT_005d45b1;
  fVar3 = fStack_2c * _DAT_005d45b1;
  dVar11 = round((double)(fStack_34 * _DAT_005d45b1));
  dVar12 = round((double)fVar2);
  dVar13 = round((double)fVar3);
  *(int *)((int)dest + -0xc1e0) = (int)ROUND(dVar11);
  *(int *)((int)dest + -0xc1dc) = (int)ROUND(dVar12);
  *(int *)((int)dest + -0xc1d8) = (int)ROUND(dVar13);
  return (CBoneGuy *)((int)dest + -0xc2e8);
}

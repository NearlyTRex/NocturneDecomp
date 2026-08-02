// Name: core_boneguy.cpp_CBoneGuy_ctor_FUN_00418630
// Address: 00418630
// Address Range: [[00418630, 004187f8]]
// Convention: __cdecl
// Signature: CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_00418630(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_00418630(CBoneGuy *this_ptr)

{
  char cVar1;
  float fVar2;
  float fVar3;
  CEnemy *pCVar4;
  void *dest;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  double dVar8;
  CColor3f local_20;
  CColor3f local_14;
  float local_8;
  
  pCVar4 = core_enemy_cpp_CEnemy_ctor_FUN_00479560(&this_ptr->base);
  dest = __arrinit
                   (pCVar4[1].base.base.create_event + 8,0x14,&g_SBoneGuyBoxTypeInfo_0059aa00);
  *(CBoneGuy_full_vtable **)((int)dest + -0xbc58) = &g_CBoneGuyVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            ((CDeformableModelInstance *)((int)dest + -0xbc54),"boneguy.dfm");
  *(uint *)((int)dest + -0x8fd0) = 0x3f19999a;
  *(uint *)((int)dest + -0x8fcc) = 0x3f666666;
  pcVar6 = "boneguydie";
  *(uint *)((int)dest + -0xbca8) = 1;
  pcVar7 = (char *)((int)dest + -0x6c);
  *(uint *)((int)dest + 0x5a0) = 0;
  fVar2 = 50.0f;
  *(uint *)((int)dest + -0x979c) = 2;
  fVar3 = 100.0f;
  *(uint *)((int)dest + -8) = 0x41200000;
  *(float *)((int)dest + -0x8fc8) = fVar2;
  *(float *)((int)dest + -0x8fc4) = fVar3;
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  *(uint *)((int)dest + -4) = 0;
  memset(dest,0,0x5a0);
  iVar5 = core_actor_cpp_getRandomInt_FUN_0040de00(0,0xff);
  *(uint *)((int)dest + -0x7c) = 0;
  *(uint *)((int)dest + -0x78) = 0;
  *(uint *)((int)dest + -0x74) = 0;
  *(uint *)((int)dest + -0x8c) = 0x40c00000;
  *(int *)((int)dest + -0x80) = iVar5;
  local_14.r = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,255.0);
  local_8 = local_14.r;
  local_14.g = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,40.0);
  local_8 = local_14.g;
  local_14.b = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(106.0,256.0);
  local_8 = local_14.b;
  core_boneguy_cpp_hsvToRgb_FUN_00418480(&local_20,&local_14);
  fVar2 = _DAT_0057919e;
  dVar8 = round((double)(local_20.r * _DAT_0057919e));
  *(int *)((int)dest + -0xbc9c) = (int)ROUND(dVar8);
  dVar8 = round((double)(local_20.r * fVar2));
  *(int *)((int)dest + -0xbc98) = (int)ROUND(dVar8);
  dVar8 = round((double)(fVar2 * local_20.r));
  *(int *)((int)dest + -0xbc94) = (int)ROUND(dVar8);
  return (CBoneGuy *)((int)dest + -0xbda4);
}

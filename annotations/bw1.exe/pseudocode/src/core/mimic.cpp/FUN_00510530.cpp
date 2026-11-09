// Name: core_mimic.cpp_FUN_00510530
// Address: 00510530
// Address Range: [[00510530, 00510618]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_FUN_00510530(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_FUN_00510530(CMimic *this_ptr)

{
  int iVar1;
  SMotion *motion_name;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float frame_number;
  
  bVar5 = 0;
  *(uint *)&this_ptr->field_0x46e60 = 2;
  core_cloth_cpp_FUN_0043eea0
            ((CCloth *)&this_ptr->field_0xc330,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,(CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),g_CGabriellaClassInfo.name_hash)
  ;
  if (iVar1 != 0) {
    puVar3 = (uint *)(iVar1 + 0x20384);
    puVar4 = (uint *)&this_ptr->field_0xc6c8;
    for (uVar2 = *(int *)&this_ptr->field_0xc434 * 0x47 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1)
    {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(byte *)puVar4 = *(byte *)puVar3;
      puVar3 = (uint *)((int)puVar3 + (uint)bVar5 * -2 + 1);
      puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -2 + 1);
    }
  }
  iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  frame_number = *(float *)(iVar1 + 0x160);
  motion_name = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                          ((CMotionController *)(iVar1 + 0x158));
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
            ((CMotionController *)&this_ptr->field_0x158,(char *)motion_name,frame_number);
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&this_ptr->field_0x158,1,1);
  engine_console_cpp_FUN_00445430(g_CConsolePtr,">@%s attacking hero\n" + 2,this_ptr);
  return;
}

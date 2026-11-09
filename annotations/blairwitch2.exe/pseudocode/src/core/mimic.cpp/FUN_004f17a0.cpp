// Name: core_mimic.cpp_FUN_004f17a0
// Address: 004f17a0
// Address Range: [[004f17a0, 004f1888]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_FUN_004f17a0(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_FUN_004f17a0(CMimic *this_ptr)

{
  int iVar1;
  char *motion_name;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float frame_number;
  
  bVar5 = 0;
  *(uint *)&this_ptr->field_0x4b6f0 = 2;
  core_cloth_cpp_FUN_005ae680
            ((CCloth *)&this_ptr->field_0x10bc0,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,(CDeformableModelInstance *)&this_ptr->field_0x2b4);
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),g_CGabriellaClassInfo.name_hash)
  ;
  if (iVar1 != 0) {
    puVar3 = (uint *)(iVar1 + 0x25a18);
    puVar4 = (uint *)&this_ptr->field_0x10f58;
    for (uVar2 = *(int *)&this_ptr->field_0x10cc4 * 0x47 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1
        ) {
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
  iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  frame_number = *(float *)(iVar1 + 700);
  motion_name = (char *)core_motion_cpp_FUN_005035c0(iVar1 + 0x2b4);
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
            ((CMotionController *)&this_ptr->field_0x2b4,motion_name,frame_number);
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,1,1);
  engine_console_cpp_FUN_00436710(g_CConsolePtr,">@%s attacking hero\n" + 2,this_ptr);
  return;
}

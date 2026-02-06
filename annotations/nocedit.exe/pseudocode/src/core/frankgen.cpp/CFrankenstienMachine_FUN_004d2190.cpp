// Name: core_frankgen.cpp_CFrankenstienMachine_FUN_004d2190
// Address: 004d2190
// Address Range: [[004d2190, 004d232c]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_frankgen_cpp_CFrankenstienMachine_FUN_004d2190(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

CVector3f * __cdecl
core_frankgen_cpp_CFrankenstienMachine_FUN_004d2190(CFrankenstienMachine *this_ptr)

{
  int iVar1;
  CKeyFramedModel *this_ptr_00;
  CVector3i *pCVar2;
  CVector3f *pCVar3;
  uint *puVar4;
  byte bVar5;
  double dVar6;
  int aiStackY_1018 [1012];
  int frame_index;
  int iStack_30;
  int local_2c;
  int local_28;
  CVector3f local_24;
  int local_18;
  
  bVar5 = 0;
  switch(this_ptr->which_part) {
  case 0:
    goto LAB_004d21b9;
  case 1:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d23a0(this_ptr);
    break;
  case 2:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d23a0(this_ptr);
    break;
  case 3:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d23a0(this_ptr);
    break;
  case 4:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d23a0(this_ptr);
    break;
  case 5:
    core_frankgen_cpp_CFrankenstienMachine_FUN_004d23a0(this_ptr);
    break;
  case 6:
  case 7:
    goto LAB_004d21b9;
  case 8:
LAB_004d21b9:
    core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430(this_ptr);
    break;
  default:
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 0x1bb;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WTF!");
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  dVar6 = round((double)this_ptr->unk1);
  frame_index = (int)ROUND(dVar6);
  iVar1 = this_ptr->unk2;
  local_18 = frame_index;
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                          (&this_ptr->bed_model);
  pCVar2 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(this_ptr_00,frame_index);
  puVar4 = (uint *)((int)(pCVar2 + iVar1) + (uint)bVar5 * -8 + 4);
  iStack_30 = pCVar2[iVar1].x;
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8) = *puVar4;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       puVar4[(uint)bVar5 * -2 + 1];
  local_24.x = (float)iStack_30 * 0.00390625f;
  local_24.y = (float)local_2c * 0.00390625f;
  local_24.z = (float)local_28 * 0.00390625f;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (&this_ptr->base,(CVector3f *)&stack0xffffffc4,&local_24);
  if (&this_ptr->unk4 != pCVar3) {
    (this_ptr->unk4).x = pCVar3->x;
    (this_ptr->unk4).y = pCVar3->y;
    (this_ptr->unk4).z = pCVar3->z;
    return pCVar3;
  }
  return pCVar3;
}

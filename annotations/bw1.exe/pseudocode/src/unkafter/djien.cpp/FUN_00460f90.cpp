// Name: unkafter_djien.cpp_FUN_00460f90
// Address: 00460f90
// Address Range: [[00460f90, 00461089]]
// Convention: unknown
// Signature: void unkafter_djien_cpp_FUN_00460f90(CCharacter *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_djien_cpp_FUN_00460f90(CCharacter *param_1,int *param_2)

{
  float fVar1;
  CEventList *this_ptr;
  int iVar2;
  CBodyPart *body_part;
  
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x14c))(param_1,*param_2);
  if (iVar2 == -1) {
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    fVar1 = (float)_DAT_00612270;
    *(float *)(&param_1[1].field_0x108 + iVar2 * 4) =
         (float)param_2[1] + *(float *)(&param_1[1].field_0x108 + iVar2 * 4);
    if (fVar1 < *(float *)(&param_1[1].field_0x108 + iVar2 * 4)) {
      *(int *)&param_1[1].field_0x100 = *(int *)&param_1[1].field_0x100 + 1;
      body_part = core_bodypart_cpp_FUN_00418940
                            ((CVector3f *)&param_1->field_0x20,
                             (UOrientationVector *)&param_1->field_0x30,(CVector3f *)(param_2 + 3),
                             (CDemonActor *)param_1,0,0,BLOOD_TYPE_RED);
      *(uint *)&body_part->field_0xcc4 = 1;
      core_charactr_cpp_FUN_00431210(param_1,body_part,*param_2,0);
      core_charactr_cpp_FUN_004352e0(param_1,"limb.wav");
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"djien-heart?.wav @ 6");
      core_bodypart_cpp_FUN_00419b90(body_part);
      this_ptr = 0x01C51D80;
      param_2[2] = (int)((float)param_2[2] * (float)_DAT_005d8e60);
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(this_ptr,"DjienSackBlown");
      return;
    }
  }
  return;
}

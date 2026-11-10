// Name: core_hag.cpp_CHag_startBurn_FUN_005aad70
// Address: 005aad70
// Address Range: [[005aad70, 005aae75]]
// Convention: __cdecl
// Signature: void __cdecl core_hag_cpp_CHag_startBurn_FUN_005aad70(CHag *this_ptr,CVector3f *direction,float strength)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hag_cpp_CHag_startBurn_FUN_005aad70(CHag *this_ptr,CVector3f *direction,float strength)

{
  byte *puVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&this_ptr->field_0x2b4,8,1);
  puVar1 = &this_ptr->field_0x10af8;
  iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(puVar1,&DAT_005f0c0e);
  if (iVar3 == 0) {
    uVar4 = unkaddr_0059d350_cpp_FUN_0059db70(puVar1);
    unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"BurnComplete",uVar4);
  }
  unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->field_0x10af8,&DAT_005f0c20);
  *(float *)&this_ptr->field_0x11430 = strength * _DAT_005f0c26;
  if ((CVector3f *)&this_ptr->field_0x11434 != direction) {
    *(float *)&this_ptr->field_0x11434 = direction->x;
    *(float *)&this_ptr->field_0x11438 = direction->y;
    *(float *)&this_ptr->field_0x1143c = direction->z;
  }
  puVar1 = &this_ptr->field_0x11434;
  *(uint *)&this_ptr->field_0x11438 = 0;
  fVar2 = SQRT(*(float *)&this_ptr->field_0x1143c * *(float *)&this_ptr->field_0x1143c +
               *(float *)puVar1 * *(float *)puVar1 +
               *(float *)&this_ptr->field_0x11438 * *(float *)&this_ptr->field_0x11438);
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    *(float *)puVar1 = *(float *)puVar1 * fVar2;
    *(float *)&this_ptr->field_0x11438 = *(float *)&this_ptr->field_0x11438 * fVar2;
    *(float *)&this_ptr->field_0x1143c = *(float *)&this_ptr->field_0x1143c * fVar2;
    return;
  }
  *(uint *)&this_ptr->field_0x1143c = 0;
  *(uint *)&this_ptr->field_0x11438 = *(uint *)&this_ptr->field_0x1143c;
  *(uint *)puVar1 = *(uint *)&this_ptr->field_0x11438;
  return;
}

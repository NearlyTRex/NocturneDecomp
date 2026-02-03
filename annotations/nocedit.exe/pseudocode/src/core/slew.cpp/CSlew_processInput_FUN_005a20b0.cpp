// Name: core_slew.cpp_CSlew_processInput_FUN_005a20b0
// Address: 005a20b0
// Address Range: [[005a20b0, 005a23b8]]
// Convention: __cdecl
// Signature: void __cdecl core_slew_cpp_CSlew_processInput_FUN_005a20b0(CSlew *this_ptr)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_20 */
/* WARNING: Variable defined which should be unmapped: local_1c */
/* WARNING: Variable defined which should be unmapped: local_18 */

void __cdecl core_slew_cpp_CSlew_processInput_FUN_005a20b0(CSlew *this_ptr)

{
  int iVar1;
  float unaff_EBP;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000044;
  float in_stack_0000004c;
  float in_stack_00000054;
  float in_stack_0000005c;
  float in_stack_00000068;
  float in_stack_00000070;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  if (iVar1 == 0) {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar1 != 0) {
      local_1c = local_18 * (float)10;
    }
  }
  else {
    local_1c = local_20 * (float)0.050000000000000003;
  }
  fVar4 = local_1c * (float)30;
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4f);
  if (iVar1 != 0) {
    this_ptr->yaw = this_ptr->yaw - (float)this_ptr;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x51);
  if (iVar1 != 0) {
    this_ptr->yaw = this_ptr->yaw + in_stack_0000000c;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar1 != 0) {
    fVar3 = (float10)fcos((float10)this_ptr->yaw);
    fVar2 = (float10)fsin((float10)this_ptr->yaw);
    (this_ptr->position).x = (float)(fVar2 * (float10)unaff_EBP + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar3 * (float10)unaff_EBP + (float10)(this_ptr->position).z);
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar1 != 0) {
    fVar3 = (float10)fcos((float10)this_ptr->yaw);
    fVar2 = (float10)fsin((float10)this_ptr->yaw);
    (this_ptr->position).x = (float)((float10)(this_ptr->position).x - fVar2 * (float10)fVar4);
    (this_ptr->position).z = (float)((float10)(this_ptr->position).z - fVar3 * (float10)fVar4);
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar1 != 0) {
    fVar3 = (float10)fsin((float10)this_ptr->yaw + (float10)-1.57079632675);
    fVar2 = (float10)fcos((float10)this_ptr->yaw + (float10)-1.57079632675);
    (this_ptr->position).x =
         (float)(fVar3 * (float10)in_stack_00000008 + (float10)(this_ptr->position).x);
    (this_ptr->position).z =
         (float)(fVar2 * (float10)in_stack_00000008 + (float10)(this_ptr->position).z);
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar1 != 0) {
    fVar3 = (float10)fsin((float10)this_ptr->yaw + (float10)1.57079632675);
    fVar2 = (float10)fcos((float10)this_ptr->yaw + (float10)1.57079632675);
    (this_ptr->position).x =
         (float)(fVar3 * (float10)in_stack_00000010 + (float10)(this_ptr->position).x);
    (this_ptr->position).z =
         (float)(fVar2 * (float10)in_stack_00000010 + (float10)(this_ptr->position).z);
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
  if (iVar1 != 0) {
    (this_ptr->position).y = (this_ptr->position).y + in_stack_00000018;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
  if (iVar1 != 0) {
    (this_ptr->position).y = (this_ptr->position).y - in_stack_00000020;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x3f);
  if (iVar1 != 0) {
    this_ptr->pitch = this_ptr->pitch - in_stack_00000044;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x42);
  if (iVar1 != 0) {
    this_ptr->pitch = this_ptr->pitch + in_stack_0000004c;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x47);
  if (iVar1 != 0) {
    this_ptr->roll = this_ptr->roll - in_stack_00000054;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x49);
  if (iVar1 != 0) {
    this_ptr->roll = this_ptr->roll + in_stack_0000005c;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0xc);
  if (iVar1 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate - in_stack_00000068;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0xd);
  if (iVar1 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate + in_stack_00000070;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4c);
  if (iVar1 != 0) {
    this_ptr->roll = 0.0;
    this_ptr->yaw = this_ptr->roll;
    this_ptr->pitch = this_ptr->yaw;
    return;
  }
  return;
}

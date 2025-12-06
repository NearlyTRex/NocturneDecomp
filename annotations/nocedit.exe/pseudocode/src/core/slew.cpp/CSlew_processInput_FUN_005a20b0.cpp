// Name: core_slew.cpp_CSlew_processInput_FUN_005a20b0
// Address: 005a20b0
// Address Range: [[005a20b0, 005a23b8]]
// Convention: __cdecl
// Signature: void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)

#include "nocturne.h"

void __cdecl core_slew_cpp_CSlew_processInput_FUN_005a20b0(CSlew *this_ptr)

{
  int iVar1;
  float unaff_EBX;
  float10 fVar2;
  float10 fVar3;
  float unaff_retaddr;
  float fStack00000014;
  float in_stack_00000028;
  float in_stack_00000034;
  float in_stack_0000003c;
  float in_stack_00000048;
  uint uStack00000050;
  float in_stack_0000005c;
  uint uStack00000064;
  float in_stack_00000070;
  uint uStack00000078;
  float in_stack_00000084;
  uint uStack0000008c;
  float in_stack_00000098;
  uint uStack000000a0;
  uint uStack000000b4;
  float in_stack_000000c8;
  float in_stack_000000dc;
  float in_stack_000000f0;
  float in_stack_00000104;
  float in_stack_0000011c;
  float in_stack_00000130;
  float fStack_14;
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
  if (iVar1 == 0) {
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    if (iVar1 != 0) {
      unaff_EBX = unaff_retaddr * (float)10;
    }
  }
  else {
    unaff_EBX = fStack_14 * (float)0.050000000000000003;
  }
  fStack00000014 = unaff_EBX * (float)3.1415926535000001;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4f);
  if (iVar1 != 0) {
    this_ptr->yaw = this_ptr->yaw - in_stack_00000028;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x51);
  if (iVar1 != 0) {
    this_ptr->yaw = this_ptr->yaw + in_stack_0000003c;
  }
  fStack00000014 = 8.277177e-39;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
  if (iVar1 != 0) {
    fVar3 = (float10)fcos((float10)this_ptr->yaw);
    fVar2 = (float10)fsin((float10)this_ptr->yaw);
    (this_ptr->position).x =
         (float)(fVar2 * (float10)in_stack_00000034 + (float10)(this_ptr->position).x);
    (this_ptr->position).z =
         (float)(fVar3 * (float10)in_stack_00000034 + (float10)(this_ptr->position).z);
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
  if (iVar1 != 0) {
    fVar3 = (float10)fcos((float10)this_ptr->yaw);
    fVar2 = (float10)fsin((float10)this_ptr->yaw);
    (this_ptr->position).x =
         (float)((float10)(this_ptr->position).x - fVar2 * (float10)in_stack_00000048);
    (this_ptr->position).z =
         (float)((float10)(this_ptr->position).z - fVar3 * (float10)in_stack_00000048);
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
  if (iVar1 != 0) {
    fVar3 = (float10)fsin((float10)this_ptr->yaw + (float10)-1.57079632675);
    fVar2 = (float10)fcos((float10)this_ptr->yaw + (float10)-1.57079632675);
    (this_ptr->position).x =
         (float)(fVar3 * (float10)in_stack_0000005c + (float10)(this_ptr->position).x);
    (this_ptr->position).z =
         (float)(fVar2 * (float10)in_stack_0000005c + (float10)(this_ptr->position).z);
  }
  uStack00000050 = 0x5a2235;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
  if (iVar1 != 0) {
    fVar3 = (float10)fsin((float10)this_ptr->yaw + (float10)1.57079632675);
    fVar2 = (float10)fcos((float10)this_ptr->yaw + (float10)1.57079632675);
    (this_ptr->position).x =
         (float)(fVar3 * (float10)in_stack_00000070 + (float10)(this_ptr->position).x);
    (this_ptr->position).z =
         (float)(fVar2 * (float10)in_stack_00000070 + (float10)(this_ptr->position).z);
  }
  uStack00000064 = 0x5a2285;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
  if (iVar1 != 0) {
    (this_ptr->position).y = (this_ptr->position).y + in_stack_00000084;
  }
  uStack00000078 = 0x5a22a1;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
  if (iVar1 != 0) {
    (this_ptr->position).y = (this_ptr->position).y - in_stack_00000098;
  }
  uStack0000008c = 0x5a22bd;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x3f);
  if (iVar1 != 0) {
    this_ptr->pitch = this_ptr->pitch - in_stack_000000c8;
  }
  uStack000000a0 = 0x5a22da;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x42);
  if (iVar1 != 0) {
    this_ptr->pitch = this_ptr->pitch + in_stack_000000dc;
  }
  uStack000000b4 = 0x5a22f7;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x47);
  if (iVar1 != 0) {
    this_ptr->roll = this_ptr->roll - in_stack_000000f0;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x49);
  if (iVar1 != 0) {
    this_ptr->roll = this_ptr->roll + in_stack_00000104;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0xc);
  if (iVar1 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate - in_stack_0000011c;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0xd);
  if (iVar1 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate + in_stack_00000130;
  }
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4c);
  if (iVar1 != 0) {
    this_ptr->roll = 0.0;
    this_ptr->yaw = this_ptr->roll;
    this_ptr->pitch = this_ptr->yaw;
    return;
  }
  return;
}

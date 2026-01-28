// Name: core_bodypart.cpp_CreateBodyPart_FUN_00418e10
// Address: 00418e10
// Address Range: [[00418e10, 00418f34] [00418fa2, 00418fca]]
// Convention: unknown
// Signature: CBodyPart * core_bodypart_cpp_CreateBodyPart_FUN_00418e10(void)

#include "nocturne.h"

CBodyPart * core_bodypart_cpp_CreateBodyPart_FUN_00418e10(void)

{
  COrientation *pCVar1;
  CBodyPart *this_ptr;
  CBodyPart *this_ptr_00;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float *in_stack_00000004;
  float *in_stack_00000008;
  uint *in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  uint in_stack_0000001c;
  
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xf30,"..\\core\\bodypart.cpp",0x31);
  this_ptr_00 = (CBodyPart *)0x0;
  if (this_ptr != (CBodyPart *)0x0) {
    this_ptr_00 = core_bodypart_cpp_CBodyPart_ctor_FUN_00419010(this_ptr);
  }
  if (this_ptr_00 == (CBodyPart *)0x0) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 0x32;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create body part!");
  }
  (this_ptr_00->base).location.position.x = *in_stack_00000004;
  (this_ptr_00->base).location.position.y = in_stack_00000004[1];
  (this_ptr_00->base).location.position.z = in_stack_00000004[2];
  pCVar1 = &(this_ptr_00->base).orient;
  if (pCVar1 != (COrientation *)in_stack_00000008) {
    pCVar1->pitch = *in_stack_00000008;
    (this_ptr_00->base).orient.bank = in_stack_00000008[1];
    (this_ptr_00->base).orient.heading = in_stack_00000008[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr_00->base);
  if (in_stack_0000000c == (uint *)0x0) {
    fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
    fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
    fVar4 = (float10)fcos((float10)fVar3);
    fVar5 = (float10)fcos((float10)fVar2);
    fVar6 = (float10)fsin((float10)fVar3);
    fVar7 = (float10)fsin((float10)fVar2);
    fVar8 = (float10)10.0f;
    *(float *)(this_ptr_00->unk + 300) = (float)(fVar7 * fVar8);
    *(float *)(this_ptr_00->unk + 0x128) = (float)(fVar4 * fVar8 * fVar5);
    *(float *)(this_ptr_00->unk + 0x130) = (float)(fVar6 * fVar8 * fVar5);
  }
  else if (this_ptr_00->unk + 0x128 != (char *)in_stack_0000000c) {
    *(uint *)(this_ptr_00->unk + 0x128) = *in_stack_0000000c;
    *(uint *)(this_ptr_00->unk + 300) = in_stack_0000000c[1];
    *(uint *)(this_ptr_00->unk + 0x130) = in_stack_0000000c[2];
  }
  core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
  core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
  if (in_stack_00000010 != 0) {
    (this_ptr_00->base).scale.x = *(int *)(in_stack_00000010 + 0x108);
    (this_ptr_00->base).scale.y = *(int *)(in_stack_00000010 + 0x10c);
    (this_ptr_00->base).scale.z = *(int *)(in_stack_00000010 + 0x110);
  }
  *(uint *)(this_ptr_00->unk + 0xb58) = in_stack_00000014;
  (this_ptr_00->base).is_transparent = in_stack_00000018;
  *(int *)(this_ptr_00->unk + 0xb5c) = in_stack_00000018;
  *(uint *)(this_ptr_00->unk + 0xb60) = in_stack_0000001c;
  return this_ptr_00;
}

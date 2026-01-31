// Name: core_bodypart.cpp_CBodyPart_FUN_0041ae50
// Address: 0041ae50
// Address Range: [[0041ae50, 0041af6e] [0041af82, 0041af87]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041ae50(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041ae50(CBodyPart *this_ptr)

{
  char cVar1;
  CVector3f *pCVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  CVector3f *input_local_point;
  char *pcVar6;
  char *pcVar7;
  CVector3f *in_stack_00000008;
  CVector3f local_18;
  
  iVar5 = *(int *)(this_ptr->unk + 0x5f4);
  if (iVar5 < 2) {
    input_local_point = (CVector3f *)(this_ptr->unk + iVar5 * 0x2b0 + 0x5f8);
    *(int *)(this_ptr->unk + 0x5f4) = iVar5 + 1;
    if (input_local_point != in_stack_00000008) {
      input_local_point->x = in_stack_00000008->x;
      input_local_point->y = in_stack_00000008->y;
      input_local_point->z = in_stack_00000008->z;
    }
    pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base,&local_18,input_local_point);
    input_local_point[3].z = pCVar2->x;
    input_local_point[4].x = pCVar2->y;
    input_local_point[4].y = pCVar2->z;
    core_flame_cpp_FUN_004c9b90();
    input_local_point[0x24].z = 0.0;
    input_local_point[0x1d].z = 1.5;
    input_local_point[0x1e].x = 3.0;
    pcVar7 = this_ptr->unk + 0x40;
    input_local_point[0x1e].y = 1.5;
    (this_ptr->base).is_transparent = 1;
    pcVar6 = "CHAR2.RAW";
    this_ptr->unk[0x34] = '\x01';
    this_ptr->unk[0x35] = '\0';
    this_ptr->unk[0x36] = '\0';
    this_ptr->unk[0x37] = '\0';
    do {
      cVar1 = *pcVar6;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    iVar5 = 0;
    if (0 < *(int *)(this_ptr->unk + 0x28)) {
      iVar3 = 0;
      do {
        *(uint *)(*(int *)(this_ptr->unk + 0x30) + iVar3) = 0;
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar5 < *(int *)(this_ptr->unk + 0x28));
    }
    fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(12.0,20.0);
    *(float *)(this_ptr->unk + 0xb70) = fVar4;
  }
  return;
}

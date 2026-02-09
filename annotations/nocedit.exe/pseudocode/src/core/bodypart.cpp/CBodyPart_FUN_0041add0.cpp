// Name: core_bodypart.cpp_CBodyPart_FUN_0041add0
// Address: 0041add0
// Address Range: [[0041add0, 0041ae4b]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041add0(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041add0(CBodyPart *this_ptr)

{
  int iVar1;
  char *pcVar2;
  char *in_stack_00000008;
  uint *in_stack_0000000c;
  uint *in_stack_00000010;
  
  iVar1 = *(int *)(this_ptr->unk5 + 0xfc);
  if (iVar1 < 3) {
    pcVar2 = this_ptr->unk5 + iVar1 * 0x194 + 0x100;
    *(int *)(this_ptr->unk5 + 0xfc) = iVar1 + 1;
    if (pcVar2 != (char *)in_stack_0000000c) {
      *(uint *)pcVar2 = *in_stack_0000000c;
      *(uint *)(pcVar2 + 4) = in_stack_0000000c[1];
      *(uint *)(pcVar2 + 8) = in_stack_0000000c[2];
    }
    if (pcVar2 + 0xc != (char *)in_stack_00000010) {
      *(uint *)(pcVar2 + 0xc) = *in_stack_00000010;
      *(uint *)(pcVar2 + 0x10) = in_stack_00000010[1];
      *(uint *)(pcVar2 + 0x14) = in_stack_00000010[2];
    }
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)(pcVar2 + 0x18),in_stack_00000008);
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
              ((CKeyFramedModelInstance *)(pcVar2 + 0x18));
  }
  return;
}

// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509b20
// Address: 00509b20
// Address Range: [[00509b20, 00509beb]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509b20(CMansionPuzzleCircle * this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509b20(CMansionPuzzleCircle *this_ptr)

{
  char *pcVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  int in_stack_00000008;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar3 = in_stack_00000008 * 100;
  fVar2 = ((float)in_stack_00000008 + *(float *)(this_ptr->unk2 + iVar3)) * 0.5235988f;
  pcVar1 = this_ptr->unk2 + iVar3 + 0x14;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1 = this_ptr->unk2 + iVar3 + 0x1c;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  *(float *)(this_ptr->unk2 + iVar3 + 0x18) = fVar2;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(this_ptr->unk2 + iVar3 + 0x20),
             (CVector3f *)(this_ptr->unk2 + iVar3 + 0x14));
  local_34.z = *(float *)(this_ptr->unk3 + 0xec4);
  local_34.x = 0.0;
  local_34.y = 0.0;
  pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     ((CMatrix3x3f *)(this_ptr->unk2 + iVar3 + 0x20),&local_28,&local_34);
  if ((CVector3f *)(this_ptr->unk2 + iVar3 + 8) != pCVar4) {
    ((CVector3f *)(this_ptr->unk2 + iVar3 + 8))->x = pCVar4->x;
    *(float *)(this_ptr->unk2 + iVar3 + 0xc) = pCVar4->y;
    *(float *)(this_ptr->unk2 + iVar3 + 0x10) = pCVar4->z;
  }
  pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (&this_ptr->base,&local_1c,(CVector3f *)(this_ptr->unk2 + iVar3 + 8));
  if ((CVector3f *)(this_ptr->unk3 + iVar3) == pCVar4) {
    return;
  }
  ((CVector3f *)(this_ptr->unk3 + iVar3))->x = pCVar4->x;
  *(float *)(this_ptr->unk3 + iVar3 + 4) = pCVar4->y;
  *(float *)(this_ptr->unk3 + iVar3 + 8) = pCVar4->z;
  return;
}

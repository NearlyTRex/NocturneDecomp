// Name: core_bodypart.cpp_CBodyPart_FUN_00419e10
// Address: 00419e10
// Address Range: [[00419e10, 00419f41]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_FUN_00419e10(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_FUN_00419e10(CBodyPart *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *input_local_point;
  char *pcVar3;
  int iVar4;
  float in_stack_00000008;
  float local_30;
  CVector3f local_2c;
  float local_18;
  char *local_14;
  
  if (*(int *)(this_ptr->unk5 + 0x5bc) != 0) {
    fVar1 = (float)this_ptr->unk7 - in_stack_00000008;
    this_ptr->unk7 = (int)fVar1;
    if (fVar1 < 0.0) {
      this_ptr->unk5[0x5bc] = '\0';
      this_ptr->unk5[0x5bd] = '\0';
      this_ptr->unk5[0x5be] = '\0';
      this_ptr->unk5[0x5bf] = '\0';
      this_ptr->unk7 = 0;
      return;
    }
    iVar4 = 0;
    if (0 < *(int *)(this_ptr->unk5 + 0x5bc)) {
      local_14 = this_ptr->unk5 + 0x5c0;
      pcVar3 = this_ptr->unk5 + 0x5ec;
      do {
        input_local_point = (CVector3f *)(local_14 + iVar4 * 0x2b0);
        pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&this_ptr->base,&local_2c,input_local_point);
        *(float *)pcVar3 = pCVar2->x;
        local_30 = 1.0;
        *(float *)(pcVar3 + 4) = pCVar2->y;
        *(float *)(pcVar3 + 8) = pCVar2->z;
        if ((float)this_ptr->unk7 < (float)5) {
          local_30 = (float)this_ptr->unk7 * (float)0.20000000000000001;
        }
        local_18 = local_30 * (float)1.5;
        fVar1 = (float)3;
        input_local_point[0x1d].z = local_18;
        input_local_point[0x1e].x = local_30 * fVar1;
        input_local_point[0x1e].y = local_18;
        core_flame_cpp_CFlame_FUN_004c9c00((CFlame *)(input_local_point + 1));
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 0x2b0;
      } while (iVar4 < *(int *)(this_ptr->unk5 + 0x5bc));
    }
  }
  return;
}

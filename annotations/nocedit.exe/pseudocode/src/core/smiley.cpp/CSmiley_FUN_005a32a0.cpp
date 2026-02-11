// Name: core_smiley.cpp_CSmiley_FUN_005a32a0
// Address: 005a32a0
// Address Range: [[005a32a0, 005a357f]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_FUN_005a32a0(CSmiley *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_smiley_cpp_CSmiley_FUN_005a32a0(CSmiley *this_ptr)

{
  CBodyPart *body_part;
  int iVar1;
  int *in_stack_00000008;
  float local_14;
  
  if (in_stack_00000008[0xc] < 0xc) {
    return;
  }
  if ((in_stack_00000008[0xc] == 0x6b) && (*(float *)(this_ptr->unk2 + 0x34) <= 0.0)) {
    iVar1 = *(int *)(this_ptr->unk2 + 0x30) + 1;
    *(float *)(this_ptr->unk2 + 0x34) = *(float *)(this_ptr->unk2 + 0x34) + 1.0;
    *(int *)(this_ptr->unk2 + 0x30) = iVar1;
    if (2 < iVar1) {
      in_stack_00000008[0xb] = 0x3f800000;
      if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
        iVar1 = rand();
        switch(iVar1 % 6) {
        case 0:
          iVar1 = *(int *)this_ptr->unk2;
          break;
        case 1:
          iVar1 = *(int *)(this_ptr->unk2 + 4);
          break;
        case 2:
          iVar1 = *(int *)(this_ptr->unk2 + 8);
          break;
        case 3:
          iVar1 = *(int *)(this_ptr->unk2 + 0xc);
          break;
        case 4:
          iVar1 = *(int *)(this_ptr->unk2 + 0x28);
          break;
        case 5:
          iVar1 = *(int *)(this_ptr->unk2 + 0x24);
          break;
        default:
          goto switchD_005a3329_default;
        }
        *in_stack_00000008 = iVar1;
      }
switchD_005a3329_default:
      iVar1 = *in_stack_00000008;
      if (((((iVar1 == *(int *)this_ptr->unk2) || (iVar1 == *(int *)(this_ptr->unk2 + 4))) ||
           (iVar1 == *(int *)(this_ptr->unk2 + 8))) ||
          ((iVar1 == *(int *)(this_ptr->unk2 + 0xc) || (iVar1 == *(int *)(this_ptr->unk2 + 0x24)))))
         || (iVar1 == *(int *)(this_ptr->unk2 + 0x28))) {
        local_14 = (float)in_stack_00000008[0xb];
        if (g_CGamePtr->unk4 != 0) {
          local_14 = 1.0;
        }
        iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(local_14);
        if (iVar1 != 0) {
          body_part = core_bodypart_cpp_createBodyPart_FUN_00418e10();
          core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                    ((CCharacter *)this_ptr,body_part,*in_stack_00000008,0);
          if (*in_stack_00000008 == *(int *)this_ptr->unk2) {
            core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                      ((CCharacter *)this_ptr,body_part,*(int *)(this_ptr->unk2 + 4),0);
          }
          if (*(int *)(this_ptr->unk2 + 8) == *in_stack_00000008) {
            core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
                      ((CCharacter *)this_ptr,body_part,*(int *)(this_ptr->unk2 + 0xc),0);
          }
          if (*(int *)(this_ptr->unk2 + 0x24) == *in_stack_00000008) {
            core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                      ((CCharacter *)this_ptr,*(int *)(this_ptr->unk2 + 8));
            core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                      ((CCharacter *)this_ptr,*(int *)(this_ptr->unk2 + 0xc));
            core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                      ((CCharacter *)this_ptr,*(int *)this_ptr->unk2);
            core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                      ((CCharacter *)this_ptr,*(int *)(this_ptr->unk2 + 4));
            core_charactr_cpp_CCharacter_detachBodyPart_FUN_0042bcc0
                      ((CCharacter *)this_ptr,*(int *)(this_ptr->unk2 + 0x28));
          }
          core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_0042f300
                    ((CCharacter *)this_ptr,"limb?.wav");
          core_bodypart_cpp_CBodyPart_FUN_0041a050(body_part);
          if ((this_ptr->base).base.model.part_data.visibility_flags
              [*(int *)(this_ptr->unk2 + 0x28)] == 0) {
            in_stack_00000008[1] = 0x461c3c00;
          }
          in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)7);
        }
      }
      iVar1 = *in_stack_00000008;
      if (iVar1 != *(int *)(this_ptr->unk2 + 0x28)) {
        if ((iVar1 != *(int *)(this_ptr->unk2 + 0x20)) && (iVar1 != *(int *)(this_ptr->unk2 + 0x24))
           ) {
          in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)0.5);
          return;
        }
        in_stack_00000008[1] = in_stack_00000008[1];
        return;
      }
      in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)2.5);
      return;
    }
  }
  in_stack_00000008[1] = 0;
  return;
}

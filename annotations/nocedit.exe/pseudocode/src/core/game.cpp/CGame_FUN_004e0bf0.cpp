// Name: core_game.cpp_CGame_FUN_004e0bf0
// Address: 004e0bf0
// Address Range: [[004e0bf0, 004e0ccc]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_FUN_004e0bf0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004e0bf0(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *in_stack_00000008;
  uint in_stack_0000000c;
  float in_stack_00000010;
  
  if (((0.0 < in_stack_00000010) && (in_stack_00000008 != (char *)0x0)) &&
     (*in_stack_00000008 != '\0')) {
    iVar3 = 0;
    pcVar4 = this_ptr->unk13;
    if (0 < this_ptr->status_display_count) {
      do {
        iVar2 = stricmp(pcVar4,in_stack_00000008);
        if (iVar2 == 0) {
          *(uint *)(this_ptr->unk13 + iVar3 * 4 + 0x500) = in_stack_0000000c;
          *(float *)(this_ptr->unk13 + iVar3 * 4 + 0x514) = in_stack_00000010;
          return;
        }
        iVar3 = iVar3 + 1;
        pcVar4 = pcVar4 + 0x100;
      } while (iVar3 < this_ptr->status_display_count);
    }
    if (this_ptr->status_display_count < 5) {
      pcVar4 = this_ptr->unk13 + this_ptr->status_display_count * 0x100;
      do {
        cVar1 = *in_stack_00000008;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      *(uint *)(this_ptr->unk13 + this_ptr->status_display_count * 4 + 0x500) =
           in_stack_0000000c;
      *(float *)(this_ptr->unk13 + this_ptr->status_display_count * 4 + 0x514) = in_stack_00000010;
      this_ptr->status_display_count = this_ptr->status_display_count + 1;
      return;
    }
  }
  return;
}

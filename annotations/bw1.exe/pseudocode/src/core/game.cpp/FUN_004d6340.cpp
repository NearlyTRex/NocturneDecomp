// Name: core_game.cpp_FUN_004d6340
// Address: 004d6340
// Address Range: [[004d6340, 004d641c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004d6340(CGame *this_ptr,char *name,float value,float duration)

#include "nocturne.h"

void __cdecl core_game_cpp_FUN_004d6340(CGame *this_ptr,char *name,float value,float duration)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (((0.0 < duration) && (name != (char *)0x0)) && (*name != '\0')) {
    iVar3 = 0;
    pcVar4 = &this_ptr->field_0x3c0;
    if (0 < *(int *)&this_ptr->field_0x3bc) {
      do {
        iVar2 = _stricmp(pcVar4,name);
        if (iVar2 == 0) {
          *(float *)(&this_ptr->field_0x8c0 + iVar3 * 4) = value;
          *(float *)(&this_ptr->field_0x8d4 + iVar3 * 4) = duration;
          return;
        }
        iVar3 = iVar3 + 1;
        pcVar4 = pcVar4 + 0x100;
      } while (iVar3 < *(int *)&this_ptr->field_0x3bc);
    }
    if (*(int *)&this_ptr->field_0x3bc < 5) {
      pcVar4 = &this_ptr->field_0x3c0 + *(int *)&this_ptr->field_0x3bc * 0x100;
      do {
        cVar1 = *name;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = name[1];
        name = name + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      *(float *)(&this_ptr->field_0x8c0 + *(int *)&this_ptr->field_0x3bc * 4) = value;
      *(float *)(&this_ptr->field_0x8d4 + *(int *)&this_ptr->field_0x3bc * 4) = duration;
      *(int *)&this_ptr->field_0x3bc = *(int *)&this_ptr->field_0x3bc + 1;
      return;
    }
  }
  return;
}

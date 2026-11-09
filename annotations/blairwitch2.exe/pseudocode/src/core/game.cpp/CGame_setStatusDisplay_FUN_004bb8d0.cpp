// Name: core_game.cpp_CGame_setStatusDisplay_FUN_004bb8d0
// Address: 004bb8d0
// Address Range: [[004bb8d0, 004bb9ac]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setStatusDisplay_FUN_004bb8d0(CGame *this_ptr,char *name,float value,float duration)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setStatusDisplay_FUN_004bb8d0(CGame *this_ptr,char *name,float value,float duration)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (((0.0 < duration) && (name != (char *)0x0)) && (*name != '\0')) {
    iVar3 = 0;
    pcVar4 = &this_ptr->field_0x3b0;
    if (0 < *(int *)&this_ptr->field_0x3ac) {
      do {
        iVar2 = _stricmp(pcVar4,name);
        if (iVar2 == 0) {
          *(float *)(&this_ptr->field_0x8b0 + iVar3 * 4) = value;
          *(float *)(&this_ptr->field_0x8c4 + iVar3 * 4) = duration;
          return;
        }
        iVar3 = iVar3 + 1;
        pcVar4 = pcVar4 + 0x100;
      } while (iVar3 < *(int *)&this_ptr->field_0x3ac);
    }
    if (*(int *)&this_ptr->field_0x3ac < 5) {
      pcVar4 = &this_ptr->field_0x3b0 + *(int *)&this_ptr->field_0x3ac * 0x100;
      do {
        cVar1 = *name;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = name[1];
        name = name + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      *(float *)(&this_ptr->field_0x8b0 + *(int *)&this_ptr->field_0x3ac * 4) = value;
      *(float *)(&this_ptr->field_0x8c4 + *(int *)&this_ptr->field_0x3ac * 4) = duration;
      *(int *)&this_ptr->field_0x3ac = *(int *)&this_ptr->field_0x3ac + 1;
      return;
    }
  }
  return;
}

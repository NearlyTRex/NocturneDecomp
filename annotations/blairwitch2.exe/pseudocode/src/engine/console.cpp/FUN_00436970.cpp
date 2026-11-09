// Name: engine_console.cpp_FUN_00436970
// Address: 00436970
// Address Range: [[00436970, 00436a9f]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_FUN_00436970(CConsole *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_console_cpp_FUN_00436970(CConsole *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CConsole *pCVar4;
  int iVar5;
  int y1;
  CConsole *local_24;
  int local_20;
  int local_18;
  char local_14 [4];
  
  local_14[1] = 0;
  local_20 = 0;
  if (0 < *(int *)&this_ptr->field_0xfb4) {
    local_24 = this_ptr;
    local_18 = 0;
    do {
      iVar3 = 0;
      if (0 < *(int *)&this_ptr->field_0xfb0) {
        iVar5 = 0;
        pCVar4 = local_24;
        do {
          local_14[0] = pCVar4->field_0x8;
          if (local_14[0] != '\0') {
            engine_2d_c_drawString_FUN_00402090
                      (local_14,*(int *)&this_ptr->field_0xfb8 + iVar5,
                       local_18 + *(int *)&this_ptr->field_0xfbc,0xf8);
          }
          pCVar4 = (CConsole *)&pCVar4->field_0x1;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 7;
        } while (iVar3 < *(int *)&this_ptr->field_0xfb0);
      }
      local_24 = (CConsole *)&local_24->field_0x50;
      local_18 = local_18 + 0xb;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)&this_ptr->field_0xfb4);
  }
  iVar5 = *(int *)&this_ptr->field_0xfb8;
  iVar2 = *(int *)&this_ptr->field_0xfbc;
  iVar1 = *(int *)&this_ptr->field_0xfb4;
  iVar3 = iVar5 + *(int *)&this_ptr->field_0xfb0 * 7;
  y1 = iVar2 + -1;
  _DAT_01c35e60 = 0xf8;
  engine_2d_c_drawLine_FUN_004011a0(iVar5,y1,iVar3,y1);
  iVar2 = iVar2 + iVar1 * 0xb + 1;
  engine_2d_c_drawLine_FUN_004011a0(iVar5,iVar2,iVar3,iVar2);
  engine_2d_c_drawLine_FUN_004011a0(iVar5 + -1,y1,iVar5 + -1,iVar2);
  engine_2d_c_drawLine_FUN_004011a0(iVar3 + 1,y1,iVar3 + 1,iVar2);
  return;
}

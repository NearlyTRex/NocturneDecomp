// Name: engine_palette.cpp_CFont_flushTextQueue_FUN_00509d90
// Address: 00509d90
// Address Range: [[00509d90, 00509df3]]
// Convention: __cdecl
// Signature: void __cdecl engine_palette_cpp_CFont_flushTextQueue_FUN_00509d90(CFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_palette_cpp_CFont_flushTextQueue_FUN_00509d90(CFont *this_ptr)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  CFont *pCVar5;
  int iVar6;
  char (*pacVar7) [256];
  
  engine_mini3d_cpp_lockFrame_FUN_004ec930();
  iVar6 = 0;
  if (0 < this_ptr->queued_text_count) {
    pCVar5 = this_ptr;
    pacVar7 = this_ptr->queued_text;
    do {
      piVar2 = pCVar5->queued_background_color;
      piVar3 = pCVar5->queued_foreground_color;
      piVar4 = pCVar5->queued_y;
      piVar1 = pCVar5->queued_x;
      pCVar5 = (CFont *)pCVar5->queued_x;
      iVar6 = iVar6 + 1;
      (*this_ptr->vtable->drawText)(this_ptr,pacVar7,*piVar1,*piVar4,*piVar3,*piVar2);
      pacVar7 = pacVar7 + 1;
    } while (iVar6 < this_ptr->queued_text_count);
  }
  engine_mini3d_cpp_unlockFrame_FUN_004ec940();
  this_ptr->queued_text_count = 0;
  return;
}

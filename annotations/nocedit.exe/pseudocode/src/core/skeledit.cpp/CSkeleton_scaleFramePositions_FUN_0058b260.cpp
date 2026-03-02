// Name: core_skeledit.cpp_CSkeleton_scaleFramePositions_FUN_0058b260
// Address: 0058b260
// Address Range: [[0058b260, 0058b2b8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CSkeleton_scaleFramePositions_FUN_0058b260(CSkeleton *this_ptr,float scale)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CSkeleton_scaleFramePositions_FUN_0058b260(CSkeleton *this_ptr,float scale)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  
  __STK();
  iVar3 = 0;
  if (0 < this_ptr->frame_count) {
    iVar2 = 0;
    do {
      pCVar1 = this_ptr->frame_positions_1;
      iVar3 = iVar3 + 1;
      *(float *)((int)&pCVar1->x + iVar2) = *(float *)((int)&pCVar1->x + iVar2) * scale;
      *(float *)((int)&pCVar1->y + iVar2) = *(float *)((int)&pCVar1->y + iVar2) * scale;
      *(float *)((int)&pCVar1->z + iVar2) = *(float *)((int)&pCVar1->z + iVar2) * scale;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < this_ptr->frame_count);
  }
  return;
}

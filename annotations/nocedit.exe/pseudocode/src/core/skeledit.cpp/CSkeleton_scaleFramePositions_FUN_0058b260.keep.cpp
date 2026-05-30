// Name: core_skeledit.cpp_CSkeleton_scaleFramePositions_FUN_0058b260
// Address: 0058b260
// MANUAL RECONSTRUCTION
// Address Range: [[0058b260, 0058b2b8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CSkeleton_scaleFramePositions_FUN_0058b260(CSkeleton *this_ptr,float scale)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CSkeleton_scaleFramePositions_FUN_0058b260(CSkeleton *this_ptr,float scale)

{
  CVector3f *pCVar1;
  int iVar3;

  iVar3 = 0;
  if (0 < this_ptr->frame_count) {
    do {
      pCVar1 = &this_ptr->frame_positions_1[iVar3];
      pCVar1->x = pCVar1->x * scale;
      pCVar1->y = pCVar1->y * scale;
      pCVar1->z = pCVar1->z * scale;
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->frame_count);
  }
  return;
}

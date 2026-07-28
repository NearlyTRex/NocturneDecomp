// Name: core_dtri.cpp_buildClipTriangleFan_FUN_0046e960
// Address: 0046e960
// Address Range: [[0046e960, 0046e9c0]]
// Convention: unknown
// Signature: undefined4 core_dtri_cpp_buildClipTriangleFan_FUN_0046e960(int param_1)

#include "nocturne.h"

uint core_dtri_cpp_buildClipTriangleFan_FUN_0046e960(int param_1)

{
  int iVar1;
  CDemonTriangle *this_ptr;
  int iVar2;
  CVector3f *vertex2;
  CVector3f *vertex3;
  
  iVar1 = core_dtri_cpp_getClippedTriangleCount_FUN_0046e950(param_1);
  iVar2 = 0;
  if (0 < iVar1) {
    this_ptr = (CDemonTriangle *)0x1bc9ec8;
    vertex2 = (CVector3f *)&DAT_01bc9e14;
    vertex3 = (CVector3f *)&DAT_01bc9e20;
    do {
      iVar2 = iVar2 + 1;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                (this_ptr,(CVector3f *)&DAT_01bc9e08,vertex2,vertex3);
      vertex2 = vertex2 + 1;
      this_ptr = this_ptr + 1;
      vertex3 = vertex3 + 1;
    } while (iVar2 < iVar1);
  }
  return 0x1bc9ec8;
}

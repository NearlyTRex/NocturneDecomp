// Name: core_dtri.cpp_buildClipTriangleFan_FUN_0047ae10
// Address: 0047ae10
// Address Range: [[0047ae10, 0047ae70]]
// Convention: __cdecl
// Signature: CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0047ae10(int flags)

#include "nocturne.h"

CDemonTriangle * __cdecl core_dtri_cpp_buildClipTriangleFan_FUN_0047ae10(int flags)

{
  int iVar1;
  CDemonTriangle *this_ptr;
  int iVar2;
  CVector3f *vertex2;
  CVector3f *vertex3;
  
  iVar1 = core_dtri_cpp_getClippedTriangleCount_FUN_0047ae00(flags);
  iVar2 = 0;
  if (0 < iVar1) {
    this_ptr = (CDemonTriangle *)0x1c59f38;
    vertex2 = (CVector3f *)&DAT_01c59e84;
    vertex3 = (CVector3f *)&DAT_01c59e90;
    do {
      iVar2 = iVar2 + 1;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_00478a50
                (this_ptr,(CVector3f *)&DAT_01c59e78,vertex2,vertex3);
      vertex2 = vertex2 + 1;
      this_ptr = this_ptr + 1;
      vertex3 = vertex3 + 1;
    } while (iVar2 < iVar1);
  }
  return (CDemonTriangle *)0x1c59f38;
}

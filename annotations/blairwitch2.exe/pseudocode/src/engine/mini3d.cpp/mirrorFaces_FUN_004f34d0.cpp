// Name: engine_mini3d.cpp_mirrorFaces_FUN_004f34d0
// Address: 004f34d0
// Address Range: [[004f34d0, 004f354c]]
// Convention: __cdecl
// Signature: ushort * __cdecl engine_mini3d_cpp_mirrorFaces_FUN_004f34d0(ushort *faces,int face_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * __cdecl engine_mini3d_cpp_mirrorFaces_FUN_004f34d0(ushort *faces,int face_count)

{
  int iVar1;
  
  if (3000 < face_count) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x5ad;
    core_main_c_FUN_004e4500("CMini3D::mirrorFaces - Too many of them!!!");
  }
  if (0 < face_count) {
    iVar1 = 0;
    do {
      *(ushort *)(iVar1 + 0x1d1215c) = faces[2];
      *(ushort *)(iVar1 + 0x1d1215e) = faces[1];
      face_count = face_count + -1;
      *(ushort *)(iVar1 + 0x1d12160) = *faces;
      iVar1 = iVar1 + 6;
      faces = faces + 3;
    } while (0 < face_count);
  }
  return (ushort *)0x1d1215c;
}

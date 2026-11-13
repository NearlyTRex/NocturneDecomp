// Name: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455d00
// Address: 00455d00
// Address Range: [[00455d00, 00455e50]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455d00(float max_z_plane)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455d00(float max_z_plane)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_0152c120) {
    vertex1 = (CVector3f *)0x152c124;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_0152c120) {
        uVar2 = uVar2 ^ _DAT_0152c120;
      }
      vertex2 = (CVector3f *)(uVar2 * 0xc + 0x152c124);
      bVar1 = max_z_plane < vertex1->z;
      if (max_z_plane < *(float *)(uVar2 * 0xc + 0x152c12c)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_0152c1e4 * 0xc;
        if ((CVector3f *)(&DAT_0152c1e8 + iVar3) != vertex1) {
          ((CVector3f *)(&DAT_0152c1e8 + iVar3))->x = vertex1->x;
          *(float *)(&DAT_0152c1ec + iVar3) = vertex1->y;
          *(float *)(&DAT_0152c1f0 + iVar3) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (vertex2,vertex1,(CVector3f *)(&DAT_0152c1e8 + _DAT_0152c1e4 * 0xc),0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      case 2:
        iVar3 = _DAT_0152c1e4 * 0xc;
        if ((CVector3f *)(&DAT_0152c1e8 + iVar3) != vertex1) {
          ((CVector3f *)(&DAT_0152c1e8 + iVar3))->x = vertex1->x;
          *(float *)(&DAT_0152c1ec + iVar3) = vertex1->y;
          *(float *)(&DAT_0152c1f0 + iVar3) = vertex1->z;
        }
        _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (vertex1,vertex2,(CVector3f *)(&DAT_0152c1e8 + _DAT_0152c1e4 * 0xc),0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      default:
        goto switchD_00455d74_caseD_3;
      }
      _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
switchD_00455d74_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_0152c120);
  }
  return;
}

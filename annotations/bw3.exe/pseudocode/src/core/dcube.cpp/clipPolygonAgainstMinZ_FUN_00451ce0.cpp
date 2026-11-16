// Name: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00451ce0
// Address: 00451ce0
// Address Range: [[00451ce0, 00451e30]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00451ce0(float min_z_plane)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00451ce0(float min_z_plane)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_0154890c) {
    vertex1 = (CVector3f *)0x1548910;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_0154890c) {
        uVar2 = uVar2 ^ _DAT_0154890c;
      }
      vertex2 = (CVector3f *)(uVar2 * 0xc + 0x1548910);
      bVar1 = vertex1->z < min_z_plane;
      if (*(float *)(uVar2 * 0xc + 0x1548918) < min_z_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_015489d0 * 0xc;
        if ((CVector3f *)(iVar3 + 0x15489d4) != vertex1) {
          ((CVector3f *)(iVar3 + 0x15489d4))->x = vertex1->x;
          *(float *)(iVar3 + 0x15489d8) = vertex1->y;
          *(float *)(iVar3 + 0x15489dc) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (vertex2,vertex1,(CVector3f *)(_DAT_015489d0 * 0xc + 0x15489d4),0.0,0.0,-1.0,
                   (double)min_z_plane);
        break;
      case 2:
        iVar3 = _DAT_015489d0 * 0xc;
        if ((CVector3f *)(iVar3 + 0x15489d4) != vertex1) {
          ((CVector3f *)(iVar3 + 0x15489d4))->x = vertex1->x;
          *(float *)(iVar3 + 0x15489d8) = vertex1->y;
          *(float *)(iVar3 + 0x15489dc) = vertex1->z;
        }
        _DAT_015489d0 = _DAT_015489d0 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (vertex1,vertex2,(CVector3f *)(_DAT_015489d0 * 0xc + 0x15489d4),0.0,0.0,-1.0,
                   (double)min_z_plane);
        break;
      default:
        goto switchD_00451d54_caseD_3;
      }
      _DAT_015489d0 = _DAT_015489d0 + 1;
switchD_00451d54_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_0154890c);
  }
  return;
}

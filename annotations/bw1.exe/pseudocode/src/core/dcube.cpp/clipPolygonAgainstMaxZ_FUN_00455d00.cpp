// Name: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455d00
// Address: 00455d00
// Address Range: [[00455d00, 00455e50]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455d00(float max_z_plane)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455d00(float max_z_plane)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)_DAT_0152c120) {
    puVar4 = (uint *)&DAT_0152c124;
    do {
      uVar2 = iVar5 + 1;
      if (uVar2 == _DAT_0152c120) {
        uVar2 = uVar2 ^ _DAT_0152c120;
      }
      bVar1 = max_z_plane < (float)puVar4[2];
      if (max_z_plane < *(float *)(&DAT_0152c12c + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_0152c1e4 * 0xc;
        if ((uint *)(&DAT_0152c1e8 + iVar3) != puVar4) {
          *(uint *)(&DAT_0152c1e8 + iVar3) = *puVar4;
          *(uint *)(&DAT_0152c1ec + iVar3) = puVar4[1];
          *(uint *)(&DAT_0152c1f0 + iVar3) = puVar4[2];
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (&DAT_0152c124 + uVar2 * 0xc,puVar4,&DAT_0152c1e8 + _DAT_0152c1e4 * 0xc,0,0,0,0,0,
                   0xbff00000,(double)max_z_plane);
        break;
      case 2:
        iVar3 = _DAT_0152c1e4 * 0xc;
        if ((uint *)(&DAT_0152c1e8 + iVar3) != puVar4) {
          *(uint *)(&DAT_0152c1e8 + iVar3) = *puVar4;
          *(uint *)(&DAT_0152c1ec + iVar3) = puVar4[1];
          *(uint *)(&DAT_0152c1f0 + iVar3) = puVar4[2];
        }
        _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (puVar4,&DAT_0152c124 + uVar2 * 0xc,&DAT_0152c1e8 + _DAT_0152c1e4 * 0xc,0,0,0,0,0,
                   0xbff00000,(double)max_z_plane);
        break;
      default:
        goto switchD_00455d74_caseD_3;
      }
      _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
switchD_00455d74_caseD_3:
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar5 < (int)_DAT_0152c120);
  }
  return;
}

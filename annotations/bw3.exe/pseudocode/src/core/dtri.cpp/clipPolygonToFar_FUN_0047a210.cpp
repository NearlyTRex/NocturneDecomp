// Name: core_dtri.cpp_clipPolygonToFar_FUN_0047a210
// Address: 0047a210
// Address Range: [[0047a210, 0047a360]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_0047a210(float z_far)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_0047a210(float z_far)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)_DAT_01c59db0) {
    puVar4 = (uint *)&DAT_01c59db4;
    do {
      uVar2 = iVar5 + 1;
      if (uVar2 == _DAT_01c59db0) {
        uVar2 = uVar2 ^ _DAT_01c59db0;
      }
      bVar1 = z_far < (float)puVar4[2];
      if (z_far < *(float *)(&DAT_01c59dbc + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c59e74 * 0xc;
        if ((uint *)(&DAT_01c59e78 + iVar3) != puVar4) {
          *(uint *)(&DAT_01c59e78 + iVar3) = *puVar4;
          *(uint *)(&DAT_01c59e7c + iVar3) = puVar4[1];
          *(uint *)(&DAT_01c59e80 + iVar3) = puVar4[2];
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (&DAT_01c59db4 + uVar2 * 0xc,puVar4,&DAT_01c59e78 + _DAT_01c59e74 * 0xc,0,0,0,0,0,
                   0xbff00000,(double)z_far);
        break;
      case 2:
        iVar3 = _DAT_01c59e74 * 0xc;
        if ((uint *)(&DAT_01c59e78 + iVar3) != puVar4) {
          *(uint *)(&DAT_01c59e78 + iVar3) = *puVar4;
          *(uint *)(&DAT_01c59e7c + iVar3) = puVar4[1];
          *(uint *)(&DAT_01c59e80 + iVar3) = puVar4[2];
        }
        _DAT_01c59e74 = _DAT_01c59e74 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (puVar4,&DAT_01c59db4 + uVar2 * 0xc,&DAT_01c59e78 + _DAT_01c59e74 * 0xc,0,0,0,0,0,
                   0xbff00000,(double)z_far);
        break;
      default:
        goto switchD_0047a284_caseD_3;
      }
      _DAT_01c59e74 = _DAT_01c59e74 + 1;
switchD_0047a284_caseD_3:
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 3;
    } while (iVar5 < (int)_DAT_01c59db0);
  }
  return;
}

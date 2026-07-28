// Name: engine_clipper.c_clipPolygonBottomPlane_FUN_00431cd0
// Address: 00431cd0
// Address Range: [[00431cd0, 00431df7]]
// Convention: unknown
// Signature: int engine_clipper_c_clipPolygonBottomPlane_FUN_00431cd0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

int engine_clipper_c_clipPolygonBottomPlane_FUN_00431cd0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int *local_14;
  
  iVar4 = 0;
  local_18 = 0;
  if (0 < param_3) {
    local_14 = param_1;
    iVar5 = param_1[param_3 + -1];
    do {
      iVar3 = DAT_00767b38;
      iVar1 = *local_14;
      bVar2 = *(int *)(iVar5 + 8) <= *(int *)(iVar5 + 4);
      if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 4)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = iVar4 + 1;
        *(int *)(param_2 + -4 + iVar4 * 4) = iVar5;
        break;
      case 1:
        if (0xb < DAT_00767b38) {
          PTR_01cc4800 = "..\\engine\\clipper.c";
          INT_01cc4804 = 0x5e;
          core_main_c_FUN_004c8440("Ran out of clipped verts!");
        }
        iVar3 = DAT_00767b38 * 0x30;
        iVar4 = iVar4 + 1;
        DAT_00767b38 = DAT_00767b38 + 1;
        *(byte **)(param_2 + -4 + iVar4 * 4) = &DAT_007678f8 + iVar3;
        engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(iVar1,iVar5,&DAT_007678f8 + iVar3)
        ;
        break;
      case 2:
        *(int *)(param_2 + -4 + (iVar4 + 1) * 4) = iVar5;
        if (0xb < iVar3) {
          PTR_01cc4800 = "..\\engine\\clipper.c";
          INT_01cc4804 = 0x5e;
          core_main_c_FUN_004c8440("Ran out of clipped verts!");
        }
        iVar3 = DAT_00767b38 * 0x30;
        iVar4 = iVar4 + 2;
        DAT_00767b38 = DAT_00767b38 + 1;
        *(byte **)(param_2 + -4 + iVar4 * 4) = &DAT_007678f8 + iVar3;
        engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(iVar5,iVar1,&DAT_007678f8 + iVar3)
        ;
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
      iVar5 = iVar1;
    } while (local_18 < param_3);
  }
  return iVar4;
}

// Name: FUN_00431b90
// Address: 00431b90
// Address Range: [[00431b90, 00431cbb]]
// Convention: unknown
// Signature: int FUN_00431b90(undefined4 *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00431b90(uint *param_1,int param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_18;
  uint *local_14;
  
  iVar4 = 0;
  local_18 = 0;
  if (0 < param_3) {
    local_14 = param_1;
    piVar5 = (int *)param_1[param_3 + -1];
    do {
      iVar3 = DAT_00767b38;
      piVar1 = (int *)*local_14;
      bVar2 = *piVar5 <= -piVar5[2];
      if (*piVar1 <= -piVar1[2]) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = iVar4 + 1;
        *(int **)(param_2 + -4 + iVar4 * 4) = piVar5;
        break;
      case 1:
        if (0xb < DAT_00767b38) {
          _DAT_01cc4800 = "..\\engine\\clipper.c";
          _DAT_01cc4804 = 0x5e;
          FUN_004c8440("Ran out of clipped verts!");
        }
        iVar3 = DAT_00767b38 * 0x30;
        iVar4 = iVar4 + 1;
        DAT_00767b38 = DAT_00767b38 + 1;
        *(byte **)(param_2 + -4 + iVar4 * 4) = &DAT_007678f8 + iVar3;
        engine_clipper_c_interpolateVertexRightClip_FUN_00431630
                  (piVar1,piVar5,&DAT_007678f8 + iVar3);
        break;
      case 2:
        *(int **)(param_2 + -4 + (iVar4 + 1) * 4) = piVar5;
        if (0xb < iVar3) {
          _DAT_01cc4800 = "..\\engine\\clipper.c";
          _DAT_01cc4804 = 0x5e;
          FUN_004c8440("Ran out of clipped verts!");
        }
        iVar3 = DAT_00767b38 * 0x30;
        iVar4 = iVar4 + 2;
        DAT_00767b38 = DAT_00767b38 + 1;
        *(byte **)(param_2 + -4 + iVar4 * 4) = &DAT_007678f8 + iVar3;
        engine_clipper_c_interpolateVertexRightClip_FUN_00431630
                  (piVar5,piVar1,&DAT_007678f8 + iVar3);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
      piVar5 = piVar1;
    } while (local_18 < param_3);
  }
  return iVar4;
}

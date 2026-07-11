// Name: FUN_00444c90
// Address: 00444c90
// Address Range: [[00444c90, 00444e1a]]
// Convention: unknown
// Signature: void FUN_00444c90(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00444c90(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0;
  if (0 < *(int *)(param_1 + 0x154)) {
    local_18 = 0;
    local_20 = 0xa9d078;
    local_14 = param_2;
    do {
      iVar2 = (*(int *)(local_14 + 0x1888) - *(int *)(local_14 + 0x14c8)) + 1;
      if (0 < iVar2) {
        puVar3 = (uint *)(*(int *)(param_2 + 0x1c48) + local_18 + *(int *)(local_14 + 0x14c8) * 4);
        puVar9 = (uint *)
                 (*(int *)(param_2 + 0x1c4c) + local_18 + *(int *)(local_14 + 0x14c8) * 4);
        piVar4 = (int *)(*(int *)(param_2 + 0x1c50) + local_18 + *(int *)(local_14 + 0x14c8) * 4);
        pcVar5 = (char *)(local_20 + *(int *)(local_14 + 0x14c8));
        _DAT_014b7194 = *(int *)(param_2 + 0x1c54);
        iVar8 = iVar2;
        do {
          iVar6 = iVar8 + -8;
          bVar1 = 7 < iVar8;
          iVar7 = iVar2;
          iVar8 = iVar6;
        } while (iVar6 != 0 && bVar1);
        do {
          iVar6 = iVar7 + -8;
          bVar1 = 7 < iVar7;
          iVar8 = iVar2;
          iVar7 = iVar6;
        } while (iVar6 != 0 && bVar1);
        do {
          iVar7 = iVar8 + -8;
          bVar1 = 7 < iVar8;
          iVar8 = iVar7;
        } while (iVar7 != 0 && bVar1);
        do {
          if ((*puVar3 != 0) && (*puVar3 <= (uint)*(ushort *)*puVar9)) {
            *pcVar5 = *pcVar5 + *(char *)(_DAT_014b7194 + *piVar4);
          }
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
          piVar4 = piVar4 + 1;
          pcVar5 = pcVar5 + 1;
          iVar8 = iVar2 + -1;
          bVar1 = 0 < iVar2;
          iVar2 = iVar8;
        } while (iVar8 != 0 && bVar1);
      }
      local_14 = local_14 + 4;
      local_20 = local_20 + 0x140;
      local_18 = local_18 + 0x500;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0x154));
  }
  return;
}

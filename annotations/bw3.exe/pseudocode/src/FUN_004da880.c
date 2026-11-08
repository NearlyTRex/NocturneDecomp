// Name: FUN_004da880
// Address: 004da880
// Address Range: [[004da880, 004db8c3]]
// Convention: unknown
// Signature: undefined4 FUN_004da880(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004db142) */
/* WARNING: Removing unreachable block (ram,0x004db14b) */
/* WARNING: Removing unreachable block (ram,0x004db159) */
/* WARNING: Removing unreachable block (ram,0x004db49d) */
/* WARNING: Removing unreachable block (ram,0x004db4bb) */
/* WARNING: Removing unreachable block (ram,0x004db4d4) */
/* WARNING: Removing unreachable block (ram,0x004db176) */
/* WARNING: Removing unreachable block (ram,0x004db181) */
/* WARNING: Removing unreachable block (ram,0x004db193) */
/* WARNING: Removing unreachable block (ram,0x004db1a2) */
/* WARNING: Removing unreachable block (ram,0x004db52b) */
/* WARNING: Removing unreachable block (ram,0x004db546) */
/* WARNING: Removing unreachable block (ram,0x004db1bc) */
/* WARNING: Removing unreachable block (ram,0x004db1c7) */
/* WARNING: Removing unreachable block (ram,0x004db1d5) */
/* WARNING: Removing unreachable block (ram,0x004db1f3) */
/* WARNING: Removing unreachable block (ram,0x004db54b) */
/* WARNING: Removing unreachable block (ram,0x004db56d) */
/* WARNING: Removing unreachable block (ram,0x004db586) */
/* WARNING: Removing unreachable block (ram,0x004db20f) */
/* WARNING: Removing unreachable block (ram,0x004db21a) */
/* WARNING: Removing unreachable block (ram,0x004db2b5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004da880(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  byte bVar17;
  float10 fVar18;
  char local_33c [256];
  char local_23c [256];
  char local_13c [256];
  char *local_3c;
  int local_38;
  int local_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar17 = 0;
  bVar2 = true;
  iVar3 = FUN_0040c840(param_2,DAT_007dfd24);
  if ((iVar3 != 0) && (iVar4 = FUN_0040c840(*(uint *)(param_1 + 4),_DAT_01d5ba70), iVar4 != 0)
     ) {
    if (*(int *)(iVar3 + 0x318) == 10) {
      iVar3 = *(int *)(iVar4 + 0x20b80) + *(int *)(iVar3 + 0x314);
      *(int *)(iVar4 + 0x20b80) = iVar3;
      if (100 < iVar3) {
        *(uint *)(iVar4 + 0x20b80) = 100;
      }
      FUN_005609d0(0x02CF5680,iVar4,"wp_getmana.wav",iVar4 + 0x20);
      bVar2 = false;
    }
    else {
      if (*(int *)(iVar3 + 0x318) == 0xb) {
        iVar3 = *(int *)(iVar4 + 0x20b84) + *(int *)(iVar3 + 0x314);
        *(int *)(iVar4 + 0x20b84) = iVar3;
        if (0x32 < iVar3) {
          *(uint *)(iVar4 + 0x20b84) = 0x32;
        }
        FUN_005609d0(0x02CF5680,iVar4,"wp_getammo.wav",iVar4 + 0x20);
      }
      bVar2 = false;
    }
  }
  iVar3 = FUN_0040c840(param_2,_DAT_01d5b9b4);
  local_38 = iVar3;
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x2e0) == 0)) {
    if (bVar2) {
      if (99 < *(int *)(param_1 + 0x10)) {
        return 0;
      }
      iVar3 = (**(code **)(*(int *)(param_2 + 0x154) + 0x94))(param_2);
      if (iVar3 != *(int *)(param_1 + 4)) {
        (**(code **)(*(int *)(param_2 + 0x154) + 0x8c))(param_2,0);
        if (*(int *)(param_1 + 4) != 0) {
          (**(code **)(*(int *)(param_2 + 0x154) + 0x88))(param_2,*(int *)(param_1 + 4));
        }
      }
    }
  }
  else {
    iVar4 = FUN_0040c840(*(uint *)(param_1 + 4),_DAT_01d5ba70);
    if (iVar4 != 0) {
      FUN_004d20c0(iVar3,iVar4);
    }
    bVar2 = false;
  }
  pcVar12 = local_33c;
  pcVar13 = local_33c;
  pcVar14 = local_33c;
  pcVar15 = local_33c;
  pcVar16 = local_33c;
  pcVar9 = local_33c;
  if (((*(int *)(param_1 + 4) != *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) || (param_3 == 0)) ||
     (*(int *)(0x01D2130C + 0x24c) != 0)) goto LAB_004db104;
  local_3c = (char *)FUN_004d9e40(param_2);
  FUN_004d9eb0(param_2);
  pcVar5 = (char *)FUN_00508960("You've found : ");
  pcVar10 = local_23c;
  do {
    cVar1 = *pcVar5;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  local_30 = FUN_0040c840(param_2,DAT_007dfd24);
  iVar3 = FUN_0040c840(param_2,_DAT_01d5b9b4);
  if (local_30 == 0) {
    pcVar10 = local_3c;
    if ((iVar3 == 0) || (bVar2)) goto LAB_004daa3e;
    fVar18 = (float10)*(float *)(iVar3 + 0x2d8);
    FUN_005a3120();
    local_14 = (int)ROUND(fVar18);
    FUN_005a28c0(local_23c,"You've received : %d health",local_14);
  }
  else {
    FUN_005a28c0(local_13c,&DAT_005c6010,*(uint *)(local_30 + 0x314));
    pcVar10 = local_13c;
    iVar3 = -1;
    pcVar5 = local_23c;
    do {
      pcVar11 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar11 = pcVar5 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    if (*(int *)(local_30 + 0x318) == 0xb) {
      pcVar10 = "bullets";
    }
    else {
      if (*(int *)(local_30 + 0x318) != 10) goto LAB_004daa67;
      pcVar10 = &DAT_005c601c;
    }
LAB_004daa3e:
    iVar3 = -1;
    pcVar5 = local_23c;
    do {
      pcVar11 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar11 = pcVar5 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
  }
LAB_004daa67:
  local_33c[0] = '\0';
  iVar3 = FUN_0040c790(param_2,"CHealthItem");
  if ((iVar3 != 0) && (bVar2)) {
    pcVar10 = (char *)FUN_00508960("Press ");
    do {
      cVar1 = *pcVar10;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar10 = (char *)FUN_004eaa60(*(uint *)(0x01D2130C + 0x9c));
    iVar3 = -1;
    pcVar12 = local_33c;
    do {
      pcVar5 = pcVar12;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar12 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    pcVar10 = (char *)FUN_00508960(" and ");
    iVar3 = -1;
    pcVar12 = local_33c;
    do {
      pcVar5 = pcVar12;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar12 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    pcVar10 = (char *)FUN_004eaa60(*(uint *)(0x01D2130C + 0xa0));
    iVar3 = -1;
    pcVar12 = local_33c;
    do {
      pcVar5 = pcVar12;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar12 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    pcVar10 = (char *)FUN_00508960(" to cycle through your inventory.  Press ");
    iVar3 = -1;
    pcVar12 = local_33c;
    do {
      pcVar5 = pcVar12;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar12 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    pcVar10 = (char *)FUN_004eaa60(*(uint *)(0x01D2130C + 0x50));
    iVar3 = -1;
    pcVar12 = local_33c;
    do {
      pcVar5 = pcVar12;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar12 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    pcVar10 = (char *)FUN_00508960(" to use this item to restore some health.");
    iVar3 = -1;
    pcVar12 = local_33c;
    do {
      pcVar5 = pcVar12;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar12 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar10;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar10[1];
      pcVar10 = pcVar10 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  iVar3 = FUN_0040c790(param_2,"CKeyActor");
  if (iVar3 != 0) {
    pcVar12 = (char *)FUN_00508960("With your guns put away, press ");
    do {
      cVar1 = *pcVar12;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    pcVar12 = (char *)FUN_004eaa60(*(uint *)(0x01D2130C + 0x48));
    iVar3 = -1;
    pcVar13 = local_33c;
    do {
      pcVar10 = pcVar13;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar10 = pcVar13 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    pcVar12 = (char *)FUN_00508960(" to open a previously locked door.");
    iVar3 = -1;
    pcVar13 = local_33c;
    do {
      pcVar10 = pcVar13;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar10 = pcVar13 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
  }
  iVar3 = FUN_0040c790(param_2,"CBoxActor");
  if (iVar3 != 0) {
    pcVar13 = (char *)FUN_00508960("Press ");
    do {
      cVar1 = *pcVar13;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar13 = (char *)FUN_004eaa60(*(uint *)(0x01D2130C + 0x9c));
    iVar3 = -1;
    pcVar14 = local_33c;
    do {
      pcVar12 = pcVar14;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar12 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar13 = (char *)FUN_00508960(" and ");
    iVar3 = -1;
    pcVar14 = local_33c;
    do {
      pcVar12 = pcVar14;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar12 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar13 = (char *)FUN_004eaa60(*(uint *)(0x01D2130C + 0xa0));
    iVar3 = -1;
    pcVar14 = local_33c;
    do {
      pcVar12 = pcVar14;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar12 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar13 = (char *)FUN_00508960(" to cycle through your inventory.  Press ");
    iVar3 = -1;
    pcVar14 = local_33c;
    do {
      pcVar12 = pcVar14;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar12 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar13 = (char *)FUN_004eaa60(*(uint *)(0x01D2130C + 0x50));
    iVar3 = -1;
    pcVar14 = local_33c;
    do {
      pcVar12 = pcVar14;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar12 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar13 = (char *)FUN_00508960(" to use this item.");
    iVar3 = -1;
    pcVar14 = local_33c;
    do {
      pcVar12 = pcVar14;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar12 = pcVar14 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar13;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar13[1];
      pcVar13 = pcVar13 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
  }
  iVar3 = FUN_0040c790(param_2,"CLightActor");
  if (iVar3 != 0) {
    pcVar14 = (char *)FUN_00508960("Press ");
    do {
      cVar1 = *pcVar14;
      *pcVar15 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar15[1] = cVar1;
      pcVar15 = pcVar15 + 2;
    } while (cVar1 != '\0');
    pcVar14 = (char *)FUN_004eaa60(*(uint *)(0x01D2130C + 0x54));
    iVar3 = -1;
    pcVar15 = local_33c;
    do {
      pcVar13 = pcVar15;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar13 = pcVar15 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
    pcVar14 = (char *)FUN_00508960(" to use the lantern.");
    iVar3 = -1;
    pcVar15 = local_33c;
    do {
      pcVar13 = pcVar15;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar13 = pcVar15 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar1 != '\0');
    pcVar13 = pcVar13 + -1;
    do {
      cVar1 = *pcVar14;
      *pcVar13 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar13[1] = cVar1;
      pcVar13 = pcVar13 + 2;
    } while (cVar1 != '\0');
  }
  iVar3 = FUN_0040c790(param_2,"CWeapon");
  if (iVar3 != 0) {
    local_14 = FUN_0040c840(param_2,_DAT_02d0c150);
    pcVar15 = (char *)FUN_00508960("Select your ");
    do {
      cVar1 = *pcVar15;
      *pcVar16 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar16[1] = cVar1;
      pcVar16 = pcVar16 + 2;
    } while (cVar1 != '\0');
    pcVar15 = (char *)FUN_004d9e40(local_14);
    iVar3 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar14 = pcVar16 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar15;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar15 = (char *)FUN_00508960(" with ");
    iVar3 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar14 = pcVar16 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar15;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar15 = (char *)FUN_004eaa60(*(uint *)(0x01D2130C + 0x94));
    iVar3 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar14 = pcVar16 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar15;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar15 = (char *)FUN_00508960(" and ");
    iVar3 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar14 = pcVar16 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar15;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar15 = (char *)FUN_004eaa60(*(uint *)(0x01D2130C + 0x98));
    iVar3 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar14 = pcVar16 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar15;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
    pcVar15 = (char *)FUN_00508960(&DAT_005c6195);
    iVar3 = -1;
    pcVar16 = local_33c;
    do {
      pcVar14 = pcVar16;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar14 = pcVar16 + (uint)bVar17 * -2 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar14;
    } while (cVar1 != '\0');
    pcVar14 = pcVar14 + -1;
    do {
      cVar1 = *pcVar15;
      *pcVar14 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar15[1];
      pcVar15 = pcVar15 + 2;
      pcVar14[1] = cVar1;
      pcVar14 = pcVar14 + 2;
    } while (cVar1 != '\0');
  }
  FUN_004b46b0(0x01D2130C,local_23c,0x41200000);
  pcVar16 = (char *)(param_1 + 0x354);
  do {
    cVar1 = *pcVar9;
    *pcVar16 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar16[1] = cVar1;
    pcVar16 = pcVar16 + 2;
  } while (cVar1 != '\0');
  local_14 = FUN_004b2a80(_DAT_01549ab4,(char *)(param_1 + 0x354));
  *(float *)(param_1 + 0x34c) = (float)local_14 * (float)_DAT_005c627f;
LAB_004db104:
  if ((local_38 != 0) && (!bVar2)) {
    FUN_004f6f10(0x01D81080,param_2,1);
    return 1;
  }
  local_24 = FUN_0040c840(param_2,DAT_007dfd24);
  if (local_24 != 0) {
    FUN_004f6f10(0x01D81080,param_2,1);
    return 1;
  }
  iVar3 = FUN_0040c840(param_2,_DAT_02d0c150);
  if (iVar3 != 0) {
    iVar4 = FUN_0040c840(iVar3,_DAT_01d72c08);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x14 + *(int *)(param_1 + 0x10) * 4) = param_2;
      uVar8 = 0x01D81080;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      FUN_004f6f10(uVar8,param_2,0);
      (**(code **)(*(int *)(param_2 + 0x154) + 0x6c))(param_2,param_1);
      return 1;
    }
    local_1c = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      local_1c = 0;
      iVar4 = param_1;
      do {
        iVar6 = FUN_0040c840(*(uint *)(iVar4 + 0x14),_DAT_02d0c150);
        if (iVar6 != 0) {
          uVar8 = FUN_00408870(iVar6);
          uVar8 = FUN_00408870(iVar3,uVar8);
          iVar7 = FUN_005a3d00(uVar8);
          if ((iVar7 == 0) && (*(int *)(iVar6 + 0x56c) == *(int *)(iVar3 + 0x56c))) {
            *(int *)(iVar6 + 0x568) = *(int *)(iVar6 + 0x568) + *(int *)(iVar3 + 0x568);
            FUN_00441ff0(PTR_DAT_005f1690,"Found same weapon, increasing ammoCount\n");
            FUN_004f6f10(0x01D81080,param_2,1);
            return 1;
          }
        }
        iVar4 = iVar4 + 4;
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(param_1 + 0x10));
    }
    bVar2 = false;
    local_20 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      local_18 = param_1;
      do {
        iVar4 = FUN_0040c840(*(uint *)(local_18 + 0x14),DAT_007dfd24);
        if (iVar4 != 0) {
          uVar8 = FUN_00408870(iVar3);
          iVar6 = FUN_005a3d00(iVar4 + 0x2d4,uVar8);
          if (iVar6 == 0) {
            uVar8 = FUN_00408870(iVar3);
            iVar6 = FUN_0040c4f0(uVar8);
            FUN_004f7530(0x01D81080,iVar6);
            (*(code *)**(uint **)(iVar6 + 0x154))(iVar6);
            *(uint *)(iVar6 + 0x568) = *(uint *)(iVar4 + 0x314);
            *(uint *)(iVar6 + 0x56c) = *(uint *)(iVar4 + 0x318);
            (**(code **)(*(int *)(iVar6 + 0x154) + 0x88))(iVar6,*(uint *)(param_1 + 4));
            (**(code **)(*(int *)(iVar6 + 0x154) + 0x6c))(iVar6,param_1);
            FUN_004085a0(*(uint *)(local_18 + 0x14));
            *(int *)(local_18 + 0x14) = iVar6;
            uVar8 = FUN_00408870(iVar3);
            bVar2 = true;
            FUN_00441ff0(PTR_DAT_005f1690,"Converting existing ammo for %s to weapon\n",uVar8);
          }
        }
        local_18 = local_18 + 4;
        local_20 = local_20 + 1;
      } while (local_20 < *(int *)(param_1 + 0x10));
    }
    if (bVar2) {
      FUN_004f6f10(0x01D81080,iVar3,1);
      return 1;
    }
  }
  *(int *)(param_1 + 0x14 + *(int *)(param_1 + 0x10) * 4) = param_2;
  uVar8 = 0x01D81080;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_004f69a0(uVar8,param_2);
  (**(code **)(*(int *)(param_2 + 0x154) + 0x6c))(param_2,param_1);
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x338) == 0)) {
    FUN_004dbb40(param_1,iVar3,5,1);
  }
  return 1;
}

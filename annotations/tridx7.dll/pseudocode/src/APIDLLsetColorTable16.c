// Name: APIDLLsetColorTable16
// Address: 10004b30
// Address Range: [[10004b30, 10004d02]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLsetColorTable16(void *source_palette,void *color_table)

#include "nocturne.h"

int __cdecl APIDLLsetColorTable16(void *source_palette,void *color_table)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  ushort *puVar6;
  uint local_7c [22];
  uint local_24;
  uint local_20;
  uint local_1c;
  
                    /* 0x4b30  28  APIDLLsetColorTable16 */
  DAT_10215e40 = source_palette;
  DAT_10226868 = color_table;
  puVar5 = local_7c;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_7c[0] = 0x7c;
  iVar3 = FUN_10002e20(DAT_10014180,local_7c);
  if (iVar3 == 0) {
    FUN_10002340("Could not lock back buffer");
  }
  iVar3 = FUN_10002cb0(DAT_10014180);
  if (iVar3 == 0) {
    FUN_10002340("Could not unlock back buffer");
  }
  iVar3 = 0;
  for (uVar1 = local_24; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
    iVar3 = iVar3 + 1;
  }
  *(int *)DAT_102268b8 = iVar3;
  *DAT_102268bc = (uint)(0xff / (ulonglong)(local_24 >> ((byte)iVar3 & 0x1f)));
  uVar2 = FUN_10004d10(*DAT_102268bc);
  *DAT_102268c0 = uVar2;
  iVar3 = 0;
  for (uVar1 = local_20; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
    iVar3 = iVar3 + 1;
  }
  *(int *)DAT_102268c4 = iVar3;
  *DAT_102268c8 = (uint)(0xff / (ulonglong)(local_20 >> ((byte)iVar3 & 0x1f)));
  uVar2 = FUN_10004d10(*DAT_102268c8);
  *DAT_102268cc = uVar2;
  iVar3 = 0;
  for (uVar1 = local_1c; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
    iVar3 = iVar3 + 1;
  }
  *(int *)DAT_102268d0 = iVar3;
  *DAT_102268d4 = (uint)(0xff / (ulonglong)(local_1c >> ((byte)iVar3 & 0x1f)));
  uVar2 = FUN_10004d10(*DAT_102268d4);
  puVar6 = DAT_10226868;
  pbVar4 = (byte *)((int)DAT_10215e40 + 2);
  iVar3 = 0x100;
  *DAT_102268d8 = uVar2;
  do {
    iVar3 = iVar3 + -1;
    *puVar6 = (short)((uint)pbVar4[-2] / *DAT_102268bc) << (*DAT_102268b8 & 0x1f) |
              (short)((uint)pbVar4[-1] / *DAT_102268c8) << (*DAT_102268c4 & 0x1f) |
              (short)((uint)*pbVar4 / *DAT_102268d4) << (*DAT_102268d0 & 0x1f);
    pbVar4 = pbVar4 + 3;
    puVar6 = puVar6 + 1;
  } while (iVar3 != 0);
  return 1;
}

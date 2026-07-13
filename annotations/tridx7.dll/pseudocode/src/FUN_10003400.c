// Name: FUN_10003400
// Address: 10003400
// Address Range: [[10003400, 100035a3]]
// Convention: unknown
// Signature: undefined4 FUN_10003400(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10003400(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  int local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_34 [3];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint local_14;
  
  bVar7 = 0;
  FUN_10002ea0();
  local_80 = 0;
  do {
    iVar3 = 0;
    iVar4 = local_80;
    do {
      puVar5 = &local_7c;
      for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      }
      puVar5 = &DAT_10226a58;
      puVar6 = local_34;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      local_74 = *(uint *)(&DAT_10226848 + local_80);
      local_7c = 0x7c;
      local_78 = 0x1007;
      local_14 = 0x1800;
      local_70 = local_74;
      iVar2 = (**(code **)(*DAT_10014188 + 0x18))
                        (DAT_10014188,&local_7c,(uint *)((int)&DAT_10139048 + iVar4),0);
      if (iVar2 != 0) {
        return 0;
      }
      puVar5 = *(uint **)((int)&DAT_10139048 + iVar4);
      iVar2 = (**(code **)*puVar5)(puVar5,&DAT_100121f8,(int)&DAT_10138f30 + iVar4);
      if (iVar2 != 0) {
        return 0;
      }
      iVar4 = iVar4 + 0x20;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    local_80 = local_80 + 4;
    if (0x1f < local_80) {
      _DAT_101386a8 = 0;
      for (uVar1 = uStack_24; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
        _DAT_101386a8 = _DAT_101386a8 + 1;
      }
      _DAT_10226a78 = (uint)(0xff / (ulonglong)(uStack_24 >> ((byte)_DAT_101386a8 & 0x1f)));
      _DAT_10240620 = 0;
      for (uVar1 = uStack_20; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
        _DAT_10240620 = _DAT_10240620 + 1;
      }
      _DAT_102268b0 = (uint)(0xff / (ulonglong)(uStack_20 >> ((byte)_DAT_10240620 & 0x1f)));
      _DAT_10226e80 = 0;
      for (uVar1 = uStack_1c; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1) {
        _DAT_10226e80 = _DAT_10226e80 + 1;
      }
      _DAT_101b88d8 = (uint)(0xff / (ulonglong)(uStack_1c >> ((byte)_DAT_10226e80 & 0x1f)));
      if (DAT_100141fc == 0) {
        _DAT_1013b8d0 = 0;
      }
      else {
        _DAT_1013b8d0 = uStack_18;
      }
      DAT_10014214 = 0;
      _DAT_10240628 = uStack_28;
      FUN_10001200();
      return 1;
    }
  } while( true );
}

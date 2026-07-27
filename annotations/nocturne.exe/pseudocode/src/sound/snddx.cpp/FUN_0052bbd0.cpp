// Name: sound_snddx.cpp_FUN_0052bbd0
// Address: 0052bbd0
// Address Range: [[0052bbd0, 0052bdee]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_0052bbd0(undefined4 *param_1)

#include "nocturne.h"

uint sound_snddx_cpp_FUN_0052bbd0(uint *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char *unaff_EBP;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  byte bVar9;
  int *piStack_3a4;
  int *piStack_3a0;
  uint *puStack_39c;
  uint *puStack_398;
  uint uStack_394;
  byte auStack_20c [396];
  byte bStack_80;
  uint auStack_7c [4];
  int iStack_6c;
  int *piStack_24;
  int *piStack_1c;
  uint local_10;
  
  bVar9 = 0;
  if (0xb < DAT_005bed40) {
    return 0;
  }
  uStack_394 = 0;
  puStack_398 = &local_10;
  puStack_39c = param_1;
  local_10 = 0;
  piStack_3a0 = (int *)0x52bc0f;
  piVar2 = (int *)Ordinal_1();
  if (piVar2 != (int *)0x0) {
    piStack_3a4 = (int *)0x52bc34;
    piStack_3a0 = piVar2;
    piStack_3a0 = (int *)sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90();
    piStack_3a4 = (int *)"create DirectSound object";
    _sprintf(auStack_20c,"DirectSux: Unable to %s.  (%s)");
    piStack_3a0 = (int *)auStack_20c;
    piStack_3a4 = (int *)0x52bc5f;
    sound_sndmain_cpp_FUN_00529980();
    return 1;
  }
  if (piStack_1c != (int *)0x0) {
    piStack_3a0 = (int *)0x60;
    piStack_3a4 = piVar2;
    memset(auStack_7c);
    auStack_7c[0] = 0x60;
    piStack_3a0 = auStack_7c;
    piStack_3a4 = piStack_1c;
    iVar3 = (**(code **)(*piStack_1c + 0x10))();
    if (iVar3 != 0) {
      uVar4 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(iVar3);
      _sprintf(&piStack_3a4,"DirectSux: Unable to %s.  (%s)","Querry DirectSound capabilities"
                 ,uVar4);
      sound_sndmain_cpp_FUN_00529980(&piStack_3a4);
    }
    if (piStack_24 != (int *)0x0) {
      (**(code **)(*piStack_24 + 8))(piStack_24);
    }
    if (iVar3 == 0) {
      iVar3 = DAT_005bed40 * 0x11c;
      if (param_1 == (uint *)0x0) {
        *(uint *)(iVar3 + 0x2dc84c4) = 1;
      }
      else {
        *(uint *)(iVar3 + 0x2dc84c4) = 0;
        puVar6 = (uint *)(iVar3 + 0x2dc84cc + (uint)bVar9 * -8);
        puVar5 = param_1 + (uint)bVar9 * -2 + 1;
        *(uint *)(iVar3 + 0x2dc84c8) = *param_1;
        puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
        *puVar6 = *puVar5;
        *puVar7 = puVar5[(uint)bVar9 * -2 + 1];
        puVar7[(uint)bVar9 * -2 + 1] = (puVar5 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
      }
      iVar3 = DAT_005bed40;
      *(uint *)(DAT_005bed40 * 0x11c + 0x2dc85d8) = (uint)((bStack_80 & 0x20) != 0);
      *(uint *)(iVar3 * 0x11c + 0x2dc85dc) = (uint)(iStack_6c != 0);
      pcVar8 = (char *)(iVar3 * 0x11c + 0x2dc84d8);
      do {
        cVar1 = *unaff_EBP;
        *pcVar8 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = unaff_EBP[1];
        unaff_EBP = unaff_EBP + 2;
        pcVar8[1] = cVar1;
        pcVar8 = pcVar8 + 2;
      } while (cVar1 != '\0');
      DAT_005bed40 = DAT_005bed40 + 1;
      return 1;
    }
  }
  return 1;
}

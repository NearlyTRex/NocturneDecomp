// Name: sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_0055bbf0
// Address: 0055bbf0
// Address Range: [[0055bbf0, 0055bd41]]
// Convention: __cdecl
// Signature: void * __cdecl sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0055bbf0(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0055bbf0(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  byte *puStack_1b4;
  byte *puStack_1b0;
  byte auStack_18 [4];
  byte auStack_14 [4];
  
  if ((((buffer_id < 1) || (0x40 < buffer_id)) || (*(int *)(buffer_id * 0x18 + 0x2cf49f4) == 0)) ||
     (*(int *)(buffer_id * 0x18 + 0x2cf49fc) < 1)) {
    return (void *)0x0;
  }
  iVar4 = buffer_id * 0x18;
  if (*(int *)(iVar4 + 0x2cf4a04) != 0) {
    _DAT_01d71de0 = "..\\sound\\snddx.cpp";
    _DAT_01d71de4 = 0x437;
    puStack_1b0 = (byte *)0x55bc6d;
    core_main_c_displayErrorAndQuit_FUN_004e4330("DirectSoundDevice::lockSample - already locked!");
  }
  iVar2 = offset * *(int *)(iVar4 + 0x2cf49fc);
  iVar3 = iVar2 >> 0x1f;
  iVar2 = (iVar2 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0);
  uVar5 = CONCAT22((short)(char)((uint)iVar2 >> 0x18),(short)((uint)iVar2 >> 8)) & 0xffffffe0;
  uVar6 = size + 0x1fU & 0xffffffe0;
  uVar1 = *(int *)(iVar4 + 0x2cf4a00) - uVar5;
  if ((int)uVar1 < (int)uVar6) {
    uVar6 = uVar1;
  }
  puStack_1b0 = auStack_14;
  puStack_1b4 = auStack_18;
  iStack_1b8 = iVar4 + 0x2cf4a08;
  iStack_1bc = iVar4 + 0x2cf4a04;
  piStack_1c8 = *(int **)(iVar4 + 0x2cf49f4);
  uStack_1c4 = uVar5;
  uStack_1c0 = uVar6;
  uVar1 = (**(code **)(*piStack_1c8 + 0x2c))();
  if (uVar1 == 0) {
    if (*(int *)(iVar4 + 0x2cf4a00) + -0x20 <= (int)(uVar6 + uVar5)) {
      memset
                ((void *)(((*(int *)(iVar4 + 0x2cf4a04) + *(int *)(iVar4 + 0x2cf4a00)) - uVar5) +
                         -0x20),0,0x20);
    }
    return (void *)((*(int *)(iVar4 + 0x2cf4a04) + (iVar2 >> 8)) - uVar5);
  }
  sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar1);
  _sprintf((char *)&piStack_1c8,"DirectSux: Unable to %s.  (%s)");
  sound_sndmain_cpp_logSoundError_FUN_0055a560((char *)&piStack_1c8);
  return (void *)0x0;
}

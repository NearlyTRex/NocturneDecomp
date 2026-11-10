// Name: sound_snddx.cpp_FUN_00579ad0
// Address: 00579ad0
// Address Range: [[00579ad0, 00579f2a]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_00579ad0(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_00579ad0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piStack_b14;
  int *piStack_b10;
  char *pcStack_b0c;
  char *pcStack_b08;
  char acStack_9b4 [440];
  char acStack_7fc [392];
  char acStack_674 [384];
  char acStack_4f4 [400];
  char acStack_364 [392];
  char acStack_1dc [424];
  uint uStack_34;
  uint uStack_14;
  
  iVar1 = *(int *)(param_2 + 0x60);
  if (((iVar1 < 1) || (0x1e < iVar1)) || (*(int *)(iVar1 * 0x24 + 0x2c823e0) == 0)) {
    pcStack_b0c = "DirectSoundDevice::startSfx - invalid handle: %d";
    _DAT_01d1d400 = "..\\sound\\snddx.cpp";
    _DAT_01d1d404 = 0x61a;
    piStack_b10 = (int *)0x579b19;
    pcStack_b08 = (char *)iVar1;
    core_main_c_FUN_005030e0();
  }
  pcStack_b08 = (char *)0xffffffff;
  pcStack_b0c = (char *)param_2;
  piStack_b10 = param_1;
  piStack_b14 = (int *)0x579b26;
  iVar3 = (**(code **)(*param_1 + 0x44))();
  uVar5 = 0;
  if (iVar3 != 0) {
    uStack_14 = 0;
    if (*(int *)(param_2 + 0x68) == 0) {
      pcStack_b08 = "DirectSoundDevice::startSfx - no sample??";
      _DAT_01d1d400 = "..\\sound\\snddx.cpp";
      _DAT_01d1d404 = 0x624;
      pcStack_b0c = (char *)0x579c3c;
      core_main_c_FUN_005030e0();
    }
    if ((1 < *(int *)(*(int *)(param_2 + 0x68) + 0x124)) ||
       (0 < *(int *)(*(int *)(param_2 + 0x68) + 0x13c))) {
      pcStack_b08 = "DirectSoundDevice::startSfx - exotic jump sequences not allowed for hardware mixed sounds";
      _DAT_01d1d400 = "..\\sound\\snddx.cpp";
      _DAT_01d1d404 = 0x626;
      pcStack_b0c = (char *)0x579b74;
      core_main_c_FUN_005030e0();
    }
    if ((*(int *)(*(int *)(param_2 + 0x68) + 0x124) == 1) &&
       (-1 < *(int *)(*(int *)(param_2 + 0x68) + 0x13c))) {
      uStack_14 = uStack_14 | 1;
    }
    if (*(int *)(*(int *)(param_2 + 0x68) + 0x164) != *(int *)(*(int *)(param_2 + 0x68) + 0x110)) {
      uStack_14 = uStack_14 | 1;
    }
    pcStack_b08 = (char *)uStack_14;
    pcStack_b0c = (char *)0x0;
    piStack_b10 = (int *)0x0;
    piStack_b14 = *(int **)(iVar1 * 0x24 + 0x2c823e0);
    uVar4 = (**(code **)(*piStack_b14 + 0x30))();
    if (uVar4 == 0x88780064) {
      piVar2 = *(int **)(iVar1 * 0x24 + 0x2c823e0);
      uVar4 = (**(code **)(*piVar2 + 0x44))(piVar2,0);
      if (uVar4 != 0) {
        sound_snddx_cpp_FUN_00577500(uVar4);
        _sprintf(acStack_7fc,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_005773f0(acStack_7fc);
        return 0;
      }
      piVar2 = *(int **)(iVar1 * 0x24 + 0x2c823e0);
      uVar4 = (**(code **)(*piVar2 + 0x3c))(piVar2,0xffffd8f0);
      if (uVar4 != 0) {
        sound_snddx_cpp_FUN_00577500(uVar4);
        _sprintf(acStack_674,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_005773f0(acStack_674);
        return 0;
      }
      piVar2 = *(int **)(iVar1 * 0x24 + 0x2c823e0);
      uVar4 = (**(code **)(*piVar2 + 0x30))(piVar2,0,0,uStack_34);
      if (uVar4 != 0) {
        sound_snddx_cpp_FUN_00577500(uVar4);
        _sprintf(acStack_364,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_005773f0(acStack_364);
        return 0;
      }
      iVar3 = iVar1 * 0x24;
      if (((*(int *)(iVar3 + 0x2c823fc) != -1) &&
          (*(int *)(iVar3 + 0x2c823fc) != *(int *)(*(int *)(param_2 + 0x68) + 0x10c))) &&
         (iVar6 = sound_snddx_cpp_FUN_00577a50
                            ((float)*(int *)(*(int *)(param_2 + 0x68) + 0x10c) *
                             *(float *)(param_2 + 0x3c)),
         1 < (uint)(iVar6 - *(int *)(iVar3 + 0x2c823fc)))) {
        uVar4 = (**(code **)(**(int **)(iVar3 + 0x2c823e0) + 0x44))
                          (*(int **)(iVar3 + 0x2c823e0),iVar6);
        if (uVar4 != 0) {
          sound_snddx_cpp_FUN_00577500(uVar4);
          _sprintf(acStack_4f4,"DirectSux: Unable to %s.  (%s)");
          sound_sndmain_cpp_FUN_005773f0(acStack_4f4);
        }
        *(int *)(iVar1 * 0x24 + 0x2c823fc) = iVar6;
      }
      piVar2 = *(int **)(iVar1 * 0x24 + 0x2c823e0);
      uVar4 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
      if (uVar4 != 0) {
        sound_snddx_cpp_FUN_00577500(uVar4);
        _sprintf(acStack_1dc,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_005773f0(acStack_1dc);
        return 0;
      }
      piVar2 = *(int **)(iVar1 * 0x24 + 0x2c823e0);
      uVar4 = (**(code **)(*piVar2 + 0x3c))(piVar2,*(uint *)(iVar1 * 0x24 + 0x2c823f4));
      if (uVar4 != 0) {
        sound_snddx_cpp_FUN_00577500(uVar4);
        _sprintf(acStack_9b4,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_FUN_005773f0(acStack_9b4);
        return 0;
      }
    }
    else if (uVar4 != 0) {
      sound_snddx_cpp_FUN_00577500(uVar4);
      _sprintf((char *)&piStack_b14,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_FUN_005773f0(&piStack_b14);
      return 0;
    }
    uVar5 = 1;
    *(byte *)(param_2 + 0x11b) = *(byte *)(param_2 + 0x11b) & 0xbf;
  }
  return uVar5;
}

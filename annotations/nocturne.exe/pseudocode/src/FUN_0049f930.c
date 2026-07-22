// Name: FUN_0049f930
// Address: 0049f930
// Address Range: [[0049f930, 004a025a]]
// Convention: unknown
// Signature: void FUN_0049f930(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049f930(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  float fStack_220;
  byte auStack_21c [256];
  byte auStack_11c [256];
  int iStack_1c;
  float fStack_18;
  
  if (_DAT_01c78420 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xcc) == 0) {
    if ((((*(int *)(param_1 + 0x210) != 0) &&
         (iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d), iVar4 != 0)) &&
        (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x12), iVar4 != 0)) &&
       (iVar4 = 1 - *(int *)(param_1 + 0x274), *(int *)(param_1 + 0x274) = iVar4, iVar4 != 0)) {
      FUN_005125a0(0x01E57284,*(uint *)(0x01E56DA0 + 0xc),1);
      *(uint *)(0x01E56DA0 + 0x10) = 0;
    }
    if ((*(int *)(param_1 + 0x274) == 0) &&
       (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x2e), iVar4 != 0)) {
      iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x2a);
      piVar3 = 0x01E57284;
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x270) + 1;
        *(int *)(param_1 + 0x270) = iVar4;
        if (*piVar3 <= iVar4) {
          *(uint *)(param_1 + 0x270) = 0;
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x270) + -1;
        *(int *)(param_1 + 0x270) = iVar4;
        if (iVar4 < 0) {
          *(int *)(param_1 + 0x270) = *0x01E57284 + -1;
        }
      }
      core_set_cpp_CDemonSet_setCameraView_FUN_005088f0
                (0x01E57284,*(uint *)(param_1 + 0x270));
    }
  }
  if (((*(int *)(param_1 + 0x210) != 0) &&
      (iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x15), iVar4 != 0)) {
    iVar4 = 1 - *(int *)(param_1 + 0x1fc);
    *(int *)(param_1 + 0x1fc) = iVar4;
    if (iVar4 == 0) {
      core_sound_cpp_CSound_init_FUN_0052ddf0();
      FUN_004940d0();
    }
    else {
      _DAT_01bd1d94 = 0;
      core_sound_cpp_CSound_shutdown_FUN_0052df90();
      FUN_004940d0();
    }
  }
  if (*(int *)(param_1 + 0x210) == 0) {
    support_newmsg_cpp_decryptMessage_FUN_004ee3f0();
    iVar4 = getenv();
    if (iVar4 != 0) goto LAB_0049f9d8;
  }
  else {
LAB_0049f9d8:
    iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d);
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x2c), iVar4 != 0)) {
      *(int *)(param_1 + 0x1e4) = 1 - *(int *)(param_1 + 0x1e4);
    }
  }
  iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x38);
  if ((iVar4 != 0) && (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x32), iVar4 != 0)) {
    _DAT_01cd4318 = (uint)(_DAT_01cd4318 == 0);
  }
  if (((*(int *)(param_1 + 0x1dc) == 0) &&
      (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x3f), iVar4 != 0)) ||
     ((iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d), iVar4 != 0 &&
      (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x32), iVar4 != 0)))) {
    iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
    if (iVar4 == 0) {
      core_sound_cpp_CSound_shutdown_FUN_0052df90();
      sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0();
    }
    else {
      sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0();
      core_sound_cpp_CSound_init_FUN_0052ddf0();
    }
  }
  if ((((*(int *)(param_1 + 0x210) != 0) &&
       (iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d), iVar4 != 0)) &&
      (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x11), uVar2 = DAT_005b7620, iVar4 != 0
      )) && (0x1df < (int)DAT_005b7620)) {
    iVar4 = 1 - *(int *)(param_1 + 0x278);
    *(int *)(param_1 + 0x278) = iVar4;
    if (iVar4 != 0) {
      lVar8 = 0xf000000001;
    }
    else {
      lVar8 = (ulonglong)uVar2 << 0x20;
    }
    core_set_cpp_FUN_005090f0(0x01E57284,iVar4 != 0,lVar8);
  }
  if (((*(int *)(param_1 + 0x210) != 0) && (_DAT_01c78ac8 == 0)) &&
     ((iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d), iVar4 != 0 &&
      ((iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x2f), iVar4 != 0 &&
       (0x1df < (int)DAT_005b7620)))))) {
    *(uint *)(param_1 + 0x1e8) = (uint)(*(int *)(param_1 + 0x1e8) == 0);
  }
  iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d);
  if (((iVar4 != 0) && (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x1f), iVar4 != 0)) &&
     (*(int *)(param_1 + 0x228) == 0)) {
    FUN_004a3b90(param_1,0);
  }
  iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x3c);
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x228) == 0)) {
    FUN_004a3b90(param_1,0);
  }
  iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x3d);
  if (iVar4 != 0) {
    core_game_cpp_CGame_promptLoadGame_FUN_004a6570();
  }
  iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x40);
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x228) == 0)) {
    FUN_004a3b90(param_1,"quicksavedgame.noc");
    uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quick Save",0x40000000);
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar5);
  }
  if ((*(int *)(param_1 + 0x1dc) == 0) &&
     (iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x43), iVar4 != 0)) {
    iVar4 = engine_dosio_cpp_getFile_FUN_00456a60
                      ("save","quicksavedgame.noc","rb");
    if (iVar4 == 0) {
      uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370
                        ("No quicked saved game to load",0x40000000);
      core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,uVar5);
    }
    else {
      _fclose();
      uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370();
      iVar4 = FUN_00470230(0x01BCD074,uVar5);
      if (iVar4 != 0) {
        pcVar6 = "quicksavedgame.noc";
        pcVar7 = (char *)(param_1 + 0x9c8);
        *(uint *)(param_1 + 0x9c4) = 1;
        do {
          cVar1 = *pcVar6;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
    }
  }
  iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x3b);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0xac8) = (uint)(*(int *)(param_1 + 0xac8) == 0);
  }
  if (*(int *)(param_1 + 0x210) == 0) {
    support_newmsg_cpp_decryptMessage_FUN_004ee3f0();
    iVar4 = getenv();
    if (iVar4 == 0) goto LAB_0049fc23;
  }
  iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0xf);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x280) = (uint)(*(int *)(param_1 + 0x280) == 0);
  }
LAB_0049fc23:
  if (*(int *)(param_1 + 0x1fc) == 0) {
    if ((*(int *)(0x01E56DA0 + 0x18) != 2) &&
       (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x3f), piVar3 = 0x01E57284,
       iVar4 != 0)) {
      *(uint *)(param_1 + 0x278) = 1;
      core_set_cpp_FUN_005090f0(piVar3,0,0,0xf0);
      iVar4 = 0x01E56DA0;
      *(uint *)(param_1 + 0x1dc) = 1;
      if (*(int *)(iVar4 + 0x18) == 1) {
        *(uint *)(iVar4 + 0x18) = 0;
      }
      else {
        *(uint *)(iVar4 + 0x18) = 1;
      }
    }
    if (*(int *)(param_1 + 0x1dc) != 0) {
      if ((*(int *)(0x01E56DA0 + 0x18) == 2) &&
         (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x44), iVar4 != 0)) {
        *(uint *)(0x01E56DA0 + 0x18) = 1;
      }
      iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x3f);
      if (iVar4 != 0) {
        *(uint *)(0x01E56DA0 + 0x18) = 0;
      }
      iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x43);
      if (iVar4 != 0) {
        FUN_00504d60();
      }
    }
  }
  iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x57);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x224) + -0x400;
    *(int *)(param_1 + 0x224) = iVar4;
    if (iVar4 < 0x8000) {
      *(uint *)(param_1 + 0x224) = 0x8000;
    }
    _sprintf(auStack_21c,"Gamma : %f",(double)*(int *)(param_1 + 0x224) * 1.52587890625e-05
              );
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,auStack_21c,0x3f800000);
    core_set_cpp_CDemonSet_setGamma_FUN_0050e400(0x01E57284,*(uint *)(param_1 + 0x224));
  }
  iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x58);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x224) + 0x400;
    *(int *)(param_1 + 0x224) = iVar4;
    if (0x10000 < iVar4) {
      *(uint *)(param_1 + 0x224) = 0x10000;
    }
    _sprintf(auStack_11c,"Gamma : %f",(double)*(int *)(param_1 + 0x224) * 1.52587890625e-05
              );
    core_game_cpp_CGame_displayMessage_FUN_0049aa30(param_1,auStack_11c,0x3f800000);
    core_set_cpp_CDemonSet_setGamma_FUN_0050e400(0x01E57284,*(uint *)(param_1 + 0x224));
  }
  if (((*(int *)(param_1 + 0x210) != 0) &&
      (iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x1d), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x23), iVar4 != 0)) {
    0x01E57284[0x56aae] = (uint)(0x01E57284[0x56aae] == 0);
  }
  if (((*(int *)(param_1 + 0x210) != 0) &&
      (iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x38), iVar4 != 0)) &&
     (iVar4 = (**(code **)(*0x01CC30E4 + 4))(0x01CC30E4,0x1e), iVar4 != 0)) {
    fStack_18 = 0.02;
    iVar4 = (**(code **)*0x01CC30E4)(0x01CC30E4,0x2a);
    if (iVar4 != 0) {
      fStack_18 = -0.02;
    }
    iStack_1c = _DAT_01fb96f0;
    fStack_220 = (float)_DAT_01fb96f0 * (float)1.5259021896696401e-05 + fStack_18;
    if (fStack_220 < 0.0) {
      fStack_220 = 0.0;
    }
    if (1.0 < fStack_220) {
      fStack_220 = 1.0;
    }
    for (iVar4 = 0; iVar4 < *0x01E57284; iVar4 = iVar4 + 1) {
      core_set_cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0(0x01E57284,iVar4,fStack_220);
    }
  }
  return;
}

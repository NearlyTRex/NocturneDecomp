// Name: FUN_004e7ed0
// Address: 004e7ed0
// Address Range: [[004e7ed0, 004e825f]]
// Convention: unknown
// Signature: void FUN_004e7ed0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e7ed0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  float10 fVar7;
  int unaff_retaddr;
  uint uVar8;
  int **ppiVar9;
  int local_78 [3];
  int local_6c;
  int *local_48;
  int local_44;
  uint uStack_40;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int **local_20;
  uint local_1c;
  int local_18;
  
  sound_mp3_cpp_CMP3Decoder_free_FUN_004e8260(param_1);
  local_1c = 0x1000;
  piVar6 = (int *)(param_1 + 0x5320);
  local_24 = param_3;
  if (*piVar6 != 0) {
    _fclose(*piVar6);
    *piVar6 = 0;
  }
  if (*(int *)(param_1 + 0x5324) != 0) {
    FUN_005638d0(*(int *)(param_1 + 0x5324));
    *(uint *)(param_1 + 0x5324) = 0;
  }
  *piVar6 = param_2;
  uVar1 = _ftell(param_2);
  *(uint *)(param_1 + 0x5340) = uVar1;
  *(int *)(param_1 + 0x5344) = local_24;
  *(uint *)(param_1 + 0x5328) = local_1c;
  iVar2 = malloc(local_1c);
  *(int *)(param_1 + 0x5324) = iVar2;
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\sound\\mp3.cpp";
    _DAT_01cc4804 = 0x1ff;
    FUN_004c8440("Out of memory.  File: %s",&DAT_01cd8b28);
  }
  _fseek(*piVar6,*(uint *)(param_1 + 0x5340),0);
  *(uint *)(param_1 + 0x5330) = 0;
  *(uint *)(param_1 + 0x5334) = 0;
  *(uint *)(param_1 + 0x532c) = 0;
  *(uint *)(param_1 + 0x5348) = *(uint *)(param_1 + 0x5344);
  *(uint *)(param_1 + 0x5338) = 0;
  iVar2 = param_1 + 0x5320;
  *(uint *)(param_1 + 0x533c) = 0;
  uVar5 = *(uint *)(param_1 + 0x532c) & 7;
  if (uVar5 != 0) {
    sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(iVar2,8 - uVar5);
  }
  uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(iVar2,0xc);
  while (((uVar5 & 0x1fff) != 0xfff && (*(int *)(param_1 + 0x533c) == 0))) {
    uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(iVar2,8);
    uVar5 = uVar5 << 8 | uVar3;
  }
  ppiVar9 = &local_48;
  local_48 = local_78;
  sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004e3130(param_1 + 0x5320);
  piVar6 = local_48;
  local_44 = local_48[7];
  local_38 = (local_44 != 3) + 1;
  if (local_48[1] == 2) {
    local_18 = local_30;
    local_2c = local_48[1] + -1;
    local_28 = local_48[3];
    iVar2 = *local_48;
    iVar4 = *(int *)(&DAT_005bbc88 + local_28 * 4 + iVar2 * 0xb4 + local_2c * 0x3c) / local_38;
    ppiVar9 = (int **)0x4e80e5;
    local_20 = &local_48;
    fVar7 = (float10)round
                               ((float10)*(double *)(&DAT_005bbc48 + local_48[4] * 8 + iVar2 * 0x20)
                               );
    local_18 = (int)ROUND(fVar7);
    if (iVar2 == 1) {
      if (((local_18 == 0x30) && (0x37 < iVar4)) || ((0x37 < iVar4 && (iVar4 < 0x51)))) {
        iVar2 = 0;
      }
      else if ((local_18 == 0x30) || (iVar4 < 0x60)) {
        if ((local_18 == 0x20) || (0x30 < iVar4)) {
          iVar2 = 3;
        }
        else {
          iVar2 = 2;
        }
      }
      else {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = 4;
    }
    if (iVar2 != *(int *)(local_24 + 0xc)) {
      _DAT_01cc4800 = "..\\sound\\mp3.cpp";
      _DAT_01cc4804 = 0x1a1;
      FUN_004c8440("MPEG Layer 2 - pick_table - can't load tables!  File: %s",&DAT_01cd8b28);
    }
    local_30 = local_1c;
  }
  else {
    local_30 = 0x20;
  }
  local_34 = local_30;
  if (piVar6[7] == 1) {
    iVar2 = piVar6[1];
    iVar4 = piVar6[8];
    if ((((iVar2 < 1) || (3 < iVar2)) || (iVar4 < 0)) || (3 < iVar4)) {
      _DAT_01cc4800 = "..\\sound\\mp3.cpp";
      _DAT_01cc4804 = 0x1b1;
      FUN_004c8440("js_bound bad layer/modext (%d/%d)  File: %s",iVar2,iVar4,&DAT_01cd8b28);
    }
    local_34 = *(uint *)("$CMotionController$$" + iVar4 * 4 + iVar2 * 0x10 + 10);
  }
  uVar8 = 0;
  uVar1 = 0x4e81c7;
  fVar7 = (float10)round
                             ((float10)*(double *)
                                        (&DAT_005bbc48 + local_6c * 8 + (int)ppiVar9 * 0x20) *
                              (float10)_DAT_0058b9b8);
  *(int *)(unaff_retaddr + 0x100) = (int)ROUND(fVar7);
  *(uint *)(unaff_retaddr + 0x104) = uStack_40;
  sound_mp3_cpp_CMP3Decoder_seek_FUN_004e8410(unaff_retaddr,uVar1,uVar8);
  return;
}

// Name: sound_mp3.cpp_FUN_00504670
// Address: 00504670
// Address Range: [[00504670, 00504827]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_FUN_00504670(SMpegFrame *frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_FUN_00504670(SMpegFrame *frame)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  float10 fVar6;
  
  iVar1 = *(int *)frame;
  iVar5 = *(int *)(iVar1 + 0x1c);
  *(int *)(frame + 4) = iVar5;
  *(uint *)(frame + 0x10) = (iVar5 != 3) + 1;
  if (*(int *)(iVar1 + 4) == 2) {
    uVar2 = *(uint *)(frame + 0x18);
    piVar3 = *(int **)frame;
    iVar4 = *piVar3;
    fVar6 = (float10)*(double *)(&DAT_00618e88 + piVar3[4] * 8 + iVar4 * 0x20);
    round(piVar3[3],iVar4 * 0xb4);
    iVar5 = (int)ROUND(fVar6);
    if (iVar4 == 1) {
      if (((iVar5 == 0x30) && (0x37 < extraout_EDX)) ||
         ((0x37 < extraout_EDX && (extraout_EDX < 0x51)))) {
        iVar5 = 0;
      }
      else if ((iVar5 == 0x30) || (extraout_EDX < 0x60)) {
        if ((iVar5 == 0x20) || (0x30 < extraout_EDX)) {
          iVar5 = 3;
        }
        else {
          iVar5 = 2;
        }
      }
      else {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 4;
    }
    if (iVar5 != *(int *)(frame + 0xc)) {
      _DAT_01d046a0 = "..\\sound\\mp3.cpp";
      _DAT_01d046a4 = 0x1d8;
      core_main_c_FUN_004e4500("MPEG Layer 2 - pick_table - can't load tables!  File: %s",&DAT_01d23558);
    }
    *(uint *)(frame + 0x18) = uVar2;
  }
  else {
    *(uint *)(frame + 0x18) = 0x20;
  }
  if (*(int *)(iVar1 + 0x1c) != 1) {
    *(uint *)(frame + 0x14) = *(uint *)(frame + 0x18);
    return;
  }
  iVar5 = *(int *)(iVar1 + 4);
  iVar1 = *(int *)(iVar1 + 0x20);
  if ((((iVar5 < 1) || (3 < iVar5)) || (iVar1 < 0)) || (3 < iVar1)) {
    _DAT_01d046a0 = "..\\sound\\mp3.cpp";
    _DAT_01d046a4 = 0x1ea;
    core_main_c_FUN_004e4500("js_bound bad layer/modext (%d/%d)  File: %s",iVar5,iVar1,&DAT_01d23558);
  }
  *(uint *)(frame + 0x14) =
       *(uint *)("$CMotionController$$" + iVar5 * 0x10 + iVar1 * 4 + 0x14);
  return;
}

// Name: core_script.cpp_FUN_0055ff00
// Address: 0055ff00
// Address Range: [[0055ff00, 005600b9]]
// Convention: unknown
// Signature: float core_script_cpp_FUN_0055ff00(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_0055ff00(uint param_1, uint param_2,
   uint param_3, uint param_4) */

float core_script_cpp_FUN_0055ff00(void)

{
  char cVar1;
  int iVar2;
  uint extraout_EAX;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  void *in_stack_00000004;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  float local_28;
  uint local_24;
  uint uStack_20;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  local_18 = 0;
  if (*(float *)((int)in_stack_00000004 + 0x454) < 0.0) {
    iVar2 = sscanf(in_stack_0000000c,&DAT_006431a0,&local_28);
    if (iVar2 != 1) {
      local_28 = core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(g_CSoundPtr,in_stack_0000000c);
      local_14 = local_28;
      if (local_28 < 0.0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&DAT_0310f4b0.base,in_stack_0000000c);
        uVar3 = 0xffffffff;
        pcVar4 = in_stack_00000010;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
        } while (cVar1 != '\0');
        local_24 = ~uVar3 - 1;
        uStack_20 = 0;
        local_28 = (float)((float10)local_24 * (float10)0.02 + (float10)0.40000000000000002);
      }
      if (DAT_0310ec9c == 0) {
        local_18 = 1;
      }
    }
  }
  else {
    local_28 = *(float *)((int)in_stack_00000004 + 0x454);
  }
  iVar2 = core_script_cpp_GetDemonActor_FUN_005594e0();
  *(int *)((int)in_stack_00000004 + 4) = iVar2;
  if (iVar2 == 0) {
    if (DAT_0310f4ac != 0) {
      return 0.0;
    }
    return -1.0;
  }
  *(int *)((int)in_stack_00000004 + 8) = iVar2;
  if ((*(int *)((int)in_stack_00000004 + 0x14) == 0) &&
     (*(int *)((int)in_stack_00000004 + 4) != *(int *)((int)in_stack_00000004 + 0xc))) {
    *(uint *)((int)in_stack_00000004 + 0x10) = 1;
    *(uint *)((int)in_stack_00000004 + 0xc) = *(uint *)((int)in_stack_00000004 + 4);
  }
  if (DAT_0310ec9c == 0) {
    pcVar4 = (char *)((int)in_stack_00000004 + 0x54);
    do {
      cVar1 = *in_stack_00000010;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = in_stack_00000010[1];
      in_stack_00000010 = in_stack_00000010 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    if (*(int *)((int)in_stack_00000004 + 4) != 0) {
      *(float *)(*(int *)((int)in_stack_00000004 + 4) + 0x2618) = local_28;
    }
    if (local_18 != 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(2);
      core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,in_stack_00000004,in_stack_0000000c);
      *(uint *)((int)in_stack_00000004 + 0x24) = extraout_EAX;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  return local_28;
}

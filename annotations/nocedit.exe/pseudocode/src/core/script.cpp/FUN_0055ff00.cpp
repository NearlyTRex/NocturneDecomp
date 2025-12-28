// Name: core_script.cpp_FUN_0055ff00
// Address: 0055ff00
// Address Range: [[0055ff00, 005600b9]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_0055ff00()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_0055ff00(uint param_1, uint param_2,
   uint param_3, uint param_4) */

int core_script_cpp_FUN_0055ff00(void)

{
  char cVar1;
  int iVar2;
  float fVar3;
  uint extraout_EAX;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  char *pcVar5;
  byte bVar6;
  void *in_stack_00000004;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  int in_stack_ffffffe4;
  
  bVar6 = 0;
  if (((*(float *)((int)in_stack_00000004 + 0x454) < 0.0) &&
      (iVar2 = crt_stdio_c_sscanf_FUN_0060013c(in_stack_0000000c,&DAT_006431a0,&stack0xffffffd8),
      iVar2 != 1)) &&
     (fVar3 = core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(g_CSoundPtr,in_stack_0000000c),
     fVar3 < 0.0)) {
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&DAT_0310f4b0,in_stack_0000000c);
    uVar4 = 0xffffffff;
    pcVar5 = in_stack_00000010;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    in_stack_ffffffe4 = ~uVar4 - 1;
  }
  iVar2 = core_script_cpp_GetDemonActor_FUN_005594e0();
  *(int *)((int)in_stack_00000004 + 4) = iVar2;
  if (iVar2 == 0) {
    if (DAT_0310f4ac != 0) {
      return 0;
    }
    return -0x40800000;
  }
  *(int *)((int)in_stack_00000004 + 8) = iVar2;
  if ((*(int *)((int)in_stack_00000004 + 0x14) == 0) &&
     (*(int *)((int)in_stack_00000004 + 4) != *(int *)((int)in_stack_00000004 + 0xc))) {
    *(uint *)((int)in_stack_00000004 + 0x10) = 1;
    *(uint *)((int)in_stack_00000004 + 0xc) = *(uint *)((int)in_stack_00000004 + 4);
  }
  if (DAT_0310ec9c == 0) {
    pcVar5 = (char *)((int)in_stack_00000004 + 0x54);
    do {
      cVar1 = *in_stack_00000010;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = in_stack_00000010[1];
      in_stack_00000010 = in_stack_00000010 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    if (*(int *)((int)in_stack_00000004 + 4) != 0) {
      *(int *)(*(int *)((int)in_stack_00000004 + 4) + 0x2618) = in_stack_ffffffe4;
    }
    if (unaff_EDI != 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(2);
      core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,in_stack_00000004,in_stack_0000000c);
      *(uint *)((int)in_stack_00000004 + 0x24) = extraout_EAX;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  return unaff_EDI;
}

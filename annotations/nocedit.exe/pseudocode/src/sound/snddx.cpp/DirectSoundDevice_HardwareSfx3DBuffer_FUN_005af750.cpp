// Name: sound_snddx.cpp_DirectSoundDevice_HardwareSfx3DBuffer_FUN_005af750
// Address: 005af750
// Address Range: [[005af750, 005afcb4]]
// Convention: unknown
// Signature: undefined sound_snddx.cpp_DirectSoundDevice_HardwareSfx3DBuffer_FUN_005af750()
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_sound_snddx_cpp_00651e80
//   TerminatedCString s_DirectSoundDevice_setSfx_00651e93
//   TerminatedCString s_Set_hardware_sfx_3d_buff_00651ec1
//   TerminatedCString s_Set_hardware_sfx_3d_buff_00651ee5
//   TerminatedCString s_Set_hardware_sfx_seconda_00651f09
//   TerminatedCString s_Set_hardware_sfx_seconda_00651f32
//   TerminatedCString s_Set_hardware_sfx_3d_buff_00651f5e
//   TerminatedCString s_Set_hardware_sfx_3d_buff_00651f7e
//   TerminatedCString s_Set_hardware_sfx_3d_buff_00651faa
//   TerminatedCString s_sound_snddx_cpp_00651fd6
//   TerminatedCString s_DirectSoundDevice_setSfx_00651fe9
//   TerminatedCString s_Commit_hardware_sfx_3d_b_00652023
//   TerminatedCString s_DirectSoundDevice_setSfx_0065204a
//   double DOUBLE_00652074 = 868.589000000000
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03f6a9bc
//   undefined4 DAT_03f6aa44
//   undefined4 DAT_03f6aac0
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_FUN_005ade70
//   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0

#include "nocturne.h"

/* Signature: undefined1 sound_snddx.cpp_DirectSoundDevice_HardwareSfx3DBuffer(undefined1 param_1,
   undefined4 param_2, undefined1 param_3) */

bool sound_snddx_cpp_DirectSoundDevice_HardwareSfx3DBuffer_FUN_005af750(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_EAX;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  bool bVar5;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  int *in_stack_00000008;
  byte in_stack_0000000c;
  undefined8 uVar7;
  int *local_cb8;
  char acStack_cb4 [400];
  char acStack_b24 [400];
  char acStack_994 [400];
  char acStack_804 [400];
  char acStack_674 [400];
  char acStack_4e4 [388];
  char acStack_360 [412];
  char acStack_1c4 [400];
  undefined8 uStack_34;
  float local_2c;
  float local_28;
  int local_24;
  int *local_20;
  undefined4 uStack_1c;
  int *local_18;
  
  iVar3 = in_stack_00000008[0x1c];
  if ((((iVar3 < 1) || (0x1e < iVar3)) || ((&DAT_03f6aa44)[iVar3] == 0)) ||
     ((&DAT_03f6aac0)[iVar3] == 0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x322;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::setSfxPos - invalid handle");
  }
  bVar5 = true;
  local_20 = (int *)(&DAT_03f6aa44)[iVar3];
  local_24 = 0;
  piVar1 = (int *)(&DAT_03f6aac0)[iVar3];
  if ((local_20 == (int *)0x0) || (piVar1 == (int *)0x0)) {
    return false;
  }
  piVar2 = local_20;
  if ((in_stack_0000000c & 0x88) != 0) {
    local_2c = (float)in_stack_00000008[0x40];
    local_28 = (float)in_stack_00000008[0x42];
    local_18 = (int *)sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(*in_stack_00000008);
    piVar2 = local_18;
    local_cb8 = local_18;
    if (((*(byte *)(in_stack_00000008 + 0x17) & 1) == 0) &&
       (piVar2 = (int *)CONCAT22((short)((uint)local_18 >> 0x10),
                                 (ushort)(0.0 < (float)local_18) << 8 |
                                 (ushort)NAN((float)local_18) << 10 |
                                 (ushort)((float)local_18 == 0.0) << 0xe), 0.0 < (float)local_18)) {
      local_cb8 = (int *)((float)local_18 / (float)local_18);
      local_2c = local_2c * (float)local_18;
      local_28 = local_28 * (float)local_18;
    }
  }
  if ((in_stack_0000000c & 2) != 0) {
    piVar2 = (int *)(**(code **)(*piVar1 + 0x4c))();
    bVar5 = piVar2 != (int *)0x0;
    in_ST0 = extraout_ST0;
    if (bVar5) {
      sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_804,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer position")
      ;
      piVar2 = (int *)sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
      in_ST0 = extraout_ST0_01;
    }
    bVar5 = !bVar5;
    local_24 = 1;
  }
  if ((in_stack_0000000c & 4) != 0) {
    piVar2 = (int *)(**(code **)(*piVar1 + 0x50))();
    in_ST0 = extraout_ST0_00;
    if (piVar2 != (int *)0x0) {
      sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_994,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer velocity")
      ;
      bVar5 = false;
      piVar2 = (int *)sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
      in_ST0 = extraout_ST0_02;
    }
    local_24 = 1;
  }
  if ((in_stack_0000000c & 8) != 0) {
    if (0.0 < (float)in_stack_00000008[0x11] * (float)local_cb8) {
      if ((float)in_stack_00000008[0x11] * (float)local_cb8 < 1.0) {
        crt_math_c_floor_FUN_005feb90((double)in_ST0);
        fVar6 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
        uStack_34._0_4_ = extraout_EDX;
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
        local_20 = (int *)(int)ROUND(fVar6);
        if ((int)local_20 < 1) {
          if ((int)local_20 < -10000) goto LAB_005af8a8;
        }
        else {
          local_20 = (int *)0x0;
        }
      }
      else {
        uStack_1c = 0;
      }
    }
    else {
LAB_005af8a8:
      uStack_1c = 0xffffd8f0;
    }
    piVar2 = (int *)(**(code **)(*local_20 + 0x3c))();
    if (piVar2 != (int *)0x0) {
      sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_4e4,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer volume")
      ;
      bVar5 = false;
      piVar2 = (int *)sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
    }
  }
  if ((in_stack_0000000c & 0x10) != 0) {
    fVar6 = (float10)*(int *)(in_stack_00000008[0x1e] + 0x10c) *
            (float10)(float)in_stack_00000008[0x12];
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_stack_00000008[0x1e],piVar2));
    uStack_34 = (longlong)ROUND(fVar6);
    iVar3 = (**(code **)(*local_20 + 0x44))();
    if (iVar3 != 0) {
      sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_b24,"DirectSux: Unable to %s.  (%s)","Set hardware sfx secondary buffer frequency")
      ;
      bVar5 = false;
      sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
    }
  }
  if ((in_stack_0000000c & 0x40) != 0) {
    iVar3 = (**(code **)(*piVar1 + 0x48))();
    if (iVar3 != 0) {
      sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_674,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer mode")
      ;
      bVar5 = false;
      sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
    }
    local_24 = 1;
  }
  if ((in_stack_0000000c & 0x80) == 0) {
    if (local_24 != 0) goto LAB_005af982;
  }
  else {
    uVar7 = CONCAT44(1,local_2c);
    piVar2 = piVar1;
    iVar3 = (**(code **)(*piVar1 + 0x44))();
    if (iVar3 != 0) {
      uVar4 = sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_360,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer minimum distance",
                 uVar4,piVar2,uVar7);
      bVar5 = false;
      sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
    }
    iVar3 = (**(code **)(*piVar1 + 0x40))();
    if (iVar3 != 0) {
      sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_cb4,"DirectSux: Unable to %s.  (%s)","Set hardware sfx 3d buffer maximum distance")
      ;
      bVar5 = false;
      sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
    }
LAB_005af982:
    if (DAT_03f6a9bc == (int *)0x0) {
      g_CurrentFilename = "..\\sound\\snddx.cpp";
      g_CurrentLineNumber = 0x3ab;
      core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::setSfxOpt - no 3d listener allocated?!");
    }
    iVar3 = (**(code **)(*DAT_03f6a9bc + 0x44))();
    if (iVar3 != 0) {
      uVar4 = sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_1c4,"DirectSux: Unable to %s.  (%s)","Commit hardware sfx 3d buffer settings",
                 uVar4);
      bVar5 = false;
      sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
      goto LAB_005af9c4;
    }
  }
  if (bVar5 != false) {
    return bVar5;
  }
LAB_005af9c4:
  sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
  return bVar5;
}


// Assembly code:
// 005af750: PUSH EBX
//   Label: sound_snddx.cpp_DirectSoundDevice_HardwareSfx3DBuffer_FUN_005af750
// 005af751: PUSH ESI
// 005af752: PUSH EDI
// 005af753: PUSH EBP
// 005af754: MOV EBP,ESP
// 005af756: SUB ESP,0xcac
// 005af75c: AND ESP,0xfffffff8
// 005af75f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005af762: MOV ESI,dword ptr [EBX + 0x70]
// 005af765: TEST ESI,ESI
// 005af767: JLE 0x005af772
//   XREF to: 005af772 (CONDITIONAL_JUMP)
// 005af769: CMP ESI,0x1f
// 005af76c: JL 0x005af9da
//   XREF to: 005af9da (CONDITIONAL_JUMP)
// 005af772: MOV EDI,0x651e80
//   Label: LAB_005af772
//   XREF to: 00651e80 (DATA)
// 005af777: MOV EAX,0x322
// 005af77c: PUSH 0x651e93
//   XREF to: 00651e93 (DATA)
// 005af781: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005af787: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005af78c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005af791: ADD ESP,0x4
// 005af794: MOV EDI,0x1
//   Label: LAB_005af794
// 005af799: XOR EDX,EDX
// 005af79b: MOV EAX,dword ptr [ESI*0x4 + 0x3f6aa44]
//   XREF to: 03f6aa44 (DATA)
// 005af7a2: MOV dword ptr [ESP + 0xc9c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005af7a9: MOV dword ptr [ESP + 0xca0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005af7b0: MOV ESI,dword ptr [ESI*0x4 + 0x3f6aac0]
//   XREF to: 03f6aac0 (DATA)
// 005af7b7: TEST EAX,EAX
// 005af7b9: JZ 0x005afa00
//   XREF to: 005afa00 (CONDITIONAL_JUMP)
// 005af7bf: TEST ESI,ESI
// 005af7c1: JZ 0x005afa00
//   XREF to: 005afa00 (CONDITIONAL_JUMP)
// 005af7c7: TEST byte ptr [EBP + 0x1c],0x88
//   XREF to: Stack[0xc] (READ)
// 005af7cb: JZ 0x005af810
//   XREF to: 005af810 (CONDITIONAL_JUMP)
// 005af7cd: MOV EAX,dword ptr [EBX + 0x100]
// 005af7d3: MOV dword ptr [ESP + 0xc94],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005af7da: MOV EAX,dword ptr [EBX + 0x108]
// 005af7e0: MOV dword ptr [ESP + 0xc98],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005af7e7: MOV EAX,dword ptr [EBX]
// 005af7e9: PUSH EAX
// 005af7ea: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 005af7ef: MOV dword ptr [ESP + 0xcac],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005af7f6: FLD float ptr [ESP + 0xcac]
//   XREF to: Stack[-0x18] (READ)
// 005af7fd: ADD ESP,0x4
// 005af800: MOV DL,byte ptr [EBX + 0x5c]
// 005af803: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0xcb8] (WRITE)
// 005af807: TEST DL,0x1
// 005af80a: JZ 0x005afa0b
//   XREF to: 005afa0b (CONDITIONAL_JUMP)
// 005af810: TEST byte ptr [EBP + 0x1c],0x2
//   Label: LAB_005af810
//   XREF to: Stack[0xc] (READ)
// 005af814: JZ 0x005af84c
//   XREF to: 005af84c (CONDITIONAL_JUMP)
// 005af816: PUSH 0x1
// 005af818: FLD double ptr [EBX + 0x14]
// 005af81b: SUB ESP,0x4
// 005af81e: MOV EAX,dword ptr [ESI]
// 005af820: FSTP float ptr [ESP]
//   XREF to: Stack[-0xcc8] (DATA)
// 005af823: SUB ESP,0x4
// 005af826: FLD double ptr [EBX + 0xc]
// 005af829: FSTP float ptr [ESP]
//   XREF to: Stack[-0xccc] (DATA)
// 005af82c: SUB ESP,0x4
// 005af82f: FLD double ptr [EBX + 0x4]
// 005af832: FSTP float ptr [ESP]
//   XREF to: Stack[-0xcd0] (DATA)
// 005af835: PUSH ESI
// 005af836: CALL dword ptr [EAX + 0x4c]
// 005af839: TEST EAX,EAX
// 005af83b: JNZ 0x005afa51
//   XREF to: 005afa51 (CONDITIONAL_JUMP)
// 005af841: MOV dword ptr [ESP + 0xc9c],0x1
//   Label: LAB_005af841
// 005af84c: TEST byte ptr [EBP + 0x1c],0x4
//   Label: LAB_005af84c
//   XREF to: Stack[0xc] (READ)
// 005af850: JZ 0x005af888
//   XREF to: 005af888 (CONDITIONAL_JUMP)
// 005af852: PUSH 0x1
// 005af854: FLD double ptr [EBX + 0x34]
// 005af857: SUB ESP,0x4
// 005af85a: MOV EAX,dword ptr [ESI]
// 005af85c: FSTP float ptr [ESP]
//   XREF to: Stack[-0xcc8] (DATA)
// 005af85f: SUB ESP,0x4
// 005af862: FLD double ptr [EBX + 0x2c]
// 005af865: FSTP float ptr [ESP]
//   XREF to: Stack[-0xccc] (DATA)
// 005af868: SUB ESP,0x4
// 005af86b: FLD double ptr [EBX + 0x24]
// 005af86e: FSTP float ptr [ESP]
//   XREF to: Stack[-0xcd0] (DATA)
// 005af871: PUSH ESI
// 005af872: CALL dword ptr [EAX + 0x50]
// 005af875: TEST EAX,EAX
// 005af877: JNZ 0x005afa8c
//   XREF to: 005afa8c (CONDITIONAL_JUMP)
// 005af87d: MOV dword ptr [ESP + 0xc9c],0x1
//   Label: LAB_005af87d
// 005af888: TEST byte ptr [EBP + 0x1c],0x8
//   Label: LAB_005af888
//   XREF to: Stack[0xc] (READ)
// 005af88c: JZ 0x005af8d7
//   XREF to: 005af8d7 (CONDITIONAL_JUMP)
// 005af88e: FLD float ptr [EBX + 0x44]
// 005af891: FMUL float ptr [ESP + 0x8]
// 005af895: FLDZ
// 005af897: FXCH
// 005af899: FSTP double ptr [ESP]
// 005af89c: FCOMP double ptr [ESP]
// 005af89f: FNSTSW AX
// 005af8a1: SAHF
// 005af8a2: JC 0x005afac7
//   XREF to: 005afac7 (CONDITIONAL_JUMP)
// 005af8a8: MOV dword ptr [ESP + 0xca4],0xffffd8f0
//   Label: LAB_005af8a8
// 005af8b3: MOV EDX,dword ptr [ESP + 0xca4]
//   Label: LAB_005af8b3
// 005af8ba: MOV EAX,dword ptr [ESP + 0xca0]
// 005af8c1: PUSH EDX
// 005af8c2: MOV ECX,dword ptr [ESP + 0xca4]
// 005af8c9: MOV EAX,dword ptr [EAX]
// 005af8cb: PUSH ECX
// 005af8cc: CALL dword ptr [EAX + 0x3c]
// 005af8cf: TEST EAX,EAX
// 005af8d1: JNZ 0x005afb46
//   XREF to: 005afb46 (CONDITIONAL_JUMP)
// 005af8d7: TEST byte ptr [EBP + 0x1c],0x10
//   Label: LAB_005af8d7
//   XREF to: Stack[0xc] (READ)
// 005af8db: JZ 0x005af919
//   XREF to: 005af919 (CONDITIONAL_JUMP)
// 005af8dd: MOV EDX,dword ptr [EBX + 0x78]
// 005af8e0: FILD dword ptr [EDX + 0x10c]
// 005af8e6: FMUL float ptr [EBX + 0x48]
// 005af8e9: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005af8ee: FISTP qword ptr [ESP + 0xc8c]
// 005af8f5: MOV EDX,dword ptr [ESP + 0xc8c]
// 005af8fc: MOV EAX,dword ptr [ESP + 0xca0]
// 005af903: PUSH EDX
// 005af904: MOV EDX,dword ptr [ESP + 0xca4]
// 005af90b: MOV EAX,dword ptr [EAX]
// 005af90d: PUSH EDX
// 005af90e: CALL dword ptr [EAX + 0x44]
// 005af911: TEST EAX,EAX
// 005af913: JNZ 0x005afb81
//   XREF to: 005afb81 (CONDITIONAL_JUMP)
// 005af919: TEST byte ptr [EBP + 0x1c],0x40
//   Label: LAB_005af919
//   XREF to: Stack[0xc] (READ)
// 005af91d: JZ 0x005af94a
//   XREF to: 005af94a (CONDITIONAL_JUMP)
// 005af91f: MOV DL,byte ptr [EBX + 0x5c]
// 005af922: XOR EAX,EAX
// 005af924: TEST DL,0x1
// 005af927: JZ 0x005af92e
//   XREF to: 005af92e (CONDITIONAL_JUMP)
// 005af929: MOV EAX,0x2
// 005af92e: PUSH 0x1
//   Label: LAB_005af92e
// 005af930: PUSH EAX
// 005af931: MOV EDX,dword ptr [ESI]
// 005af933: PUSH ESI
// 005af934: CALL dword ptr [EDX + 0x48]
// 005af937: TEST EAX,EAX
// 005af939: JNZ 0x005afbbc
//   XREF to: 005afbbc (CONDITIONAL_JUMP)
// 005af93f: MOV dword ptr [ESP + 0xc9c],0x1
//   Label: LAB_005af93f
// 005af94a: TEST byte ptr [EBP + 0x1c],0x80
//   Label: LAB_005af94a
//   XREF to: Stack[0xc] (READ)
// 005af94e: JZ 0x005afc67
//   XREF to: 005afc67 (CONDITIONAL_JUMP)
// 005af954: PUSH 0x1
// 005af956: MOV EAX,dword ptr [ESI]
// 005af958: PUSH dword ptr [ESP + 0xc98]
// 005af95f: PUSH ESI
// 005af960: CALL dword ptr [EAX + 0x44]
// 005af963: TEST EAX,EAX
// 005af965: JNZ 0x005afbf7
//   XREF to: 005afbf7 (CONDITIONAL_JUMP)
// 005af96b: PUSH 0x1
//   Label: LAB_005af96b
// 005af96d: MOV EAX,dword ptr [ESI]
// 005af96f: PUSH dword ptr [ESP + 0xc9c]
// 005af976: PUSH ESI
// 005af977: CALL dword ptr [EAX + 0x40]
// 005af97a: TEST EAX,EAX
// 005af97c: JNZ 0x005afc32
//   XREF to: 005afc32 (CONDITIONAL_JUMP)
// 005af982: CMP dword ptr [0x03f6a9bc],0x0
//   Label: LAB_005af982
//   XREF to: 03f6a9bc (READ)
// 005af989: JNZ 0x005af9ad
//   XREF to: 005af9ad (CONDITIONAL_JUMP)
// 005af98b: MOV EAX,0x651fd6
//   XREF to: 00651fd6 (PARAM)
// 005af990: MOV EDX,0x3ab
// 005af995: PUSH 0x651fe9
//   XREF to: 00651fe9 (DATA)
// 005af99a: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005af99f: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005af9a5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005af9aa: ADD ESP,0x4
// 005af9ad: MOV EAX,[0x03f6a9bc]
//   Label: LAB_005af9ad
//   XREF to: 03f6a9bc (READ)
// 005af9b2: PUSH EAX
// 005af9b3: MOV EBX,dword ptr [EAX]
// 005af9b5: CALL dword ptr [EBX + 0x44]
// 005af9b8: TEST EAX,EAX
// 005af9ba: JNZ 0x005afc7a
//   XREF to: 005afc7a (CONDITIONAL_JUMP)
// 005af9c0: TEST EDI,EDI
//   Label: LAB_005af9c0
// 005af9c2: JNZ 0x005af9d1
//   XREF to: 005af9d1 (CONDITIONAL_JUMP)
// 005af9c4: PUSH 0x65204a
//   Label: LAB_005af9c4
//   XREF to: 0065204a (DATA)
// 005af9c9: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005af9ce: ADD ESP,0x4
// 005af9d1: MOV EAX,EDI
//   Label: LAB_005af9d1
// 005af9d3: MOV ESP,EBP
// 005af9d5: POP EBP
// 005af9d6: POP EDI
// 005af9d7: POP ESI
// 005af9d8: POP EBX
// 005af9d9: RET
// 005af9da: LEA EAX,[ESI*0x4 + 0x0]
//   Label: LAB_005af9da
// 005af9e1: CMP dword ptr [EAX + 0x3f6aa44],0x0
//   XREF to: 03f6aa44 (DATA)
// 005af9e8: JZ 0x005af772
//   XREF to: 005af772 (CONDITIONAL_JUMP)
// 005af9ee: CMP dword ptr [EAX + 0x3f6aac0],0x0
//   XREF to: 03f6aac0 (DATA)
// 005af9f5: JZ 0x005af772
//   XREF to: 005af772 (CONDITIONAL_JUMP)
// 005af9fb: JMP 0x005af794
//   XREF to: 005af794 (UNCONDITIONAL_JUMP)
// 005afa00: XOR EDI,EDI
//   Label: LAB_005afa00
// 005afa02: MOV EAX,EDI
// 005afa04: MOV ESP,EBP
// 005afa06: POP EBP
// 005afa07: POP EDI
// 005afa08: POP ESI
// 005afa09: POP EBX
// 005afa0a: RET
// 005afa0b: FLD float ptr [ESP + 0x8]
//   Label: LAB_005afa0b
//   XREF to: Stack[-0xcb8] (READ)
// 005afa0f: FLDZ
// 005afa11: FCOMPP
// 005afa13: FNSTSW AX
// 005afa15: SAHF
// 005afa16: JNC 0x005af810
//   XREF to: 005af810 (CONDITIONAL_JUMP)
// 005afa1c: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0xcb8] (READ)
// 005afa20: FDIV ST0,ST0
// 005afa22: FLD float ptr [ESP + 0xc94]
//   XREF to: Stack[-0x2c] (READ)
// 005afa29: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0xcb8] (READ)
// 005afa2d: FLD float ptr [ESP + 0xc98]
//   XREF to: Stack[-0x28] (READ)
// 005afa34: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0xcb8] (READ)
// 005afa38: FXCH
// 005afa3a: FSTP float ptr [ESP + 0xc94]
//   XREF to: Stack[-0x2c] (WRITE)
// 005afa41: FSTP float ptr [ESP + 0xc98]
//   XREF to: Stack[-0x28] (WRITE)
// 005afa48: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0xcb8] (WRITE)
// 005afa4c: JMP 0x005af810
//   XREF to: 005af810 (UNCONDITIONAL_JUMP)
// 005afa51: PUSH EAX
//   Label: LAB_005afa51
// 005afa52: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005afa57: ADD ESP,0x4
// 005afa5a: PUSH EAX
// 005afa5b: PUSH 0x651ec1
//   XREF to: 00651ec1 (DATA)
// 005afa60: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005afa65: LEA EAX,[ESP + 0x4c8]
// 005afa6c: PUSH EAX
// 005afa6d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005afa72: ADD ESP,0x10
// 005afa75: LEA EAX,[ESP + 0x4bc]
// 005afa7c: PUSH EAX
// 005afa7d: XOR EDI,EDI
// 005afa7f: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005afa84: ADD ESP,0x4
// 005afa87: JMP 0x005af841
//   XREF to: 005af841 (UNCONDITIONAL_JUMP)
// 005afa8c: PUSH EAX
//   Label: LAB_005afa8c
// 005afa8d: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005afa92: ADD ESP,0x4
// 005afa95: PUSH EAX
// 005afa96: PUSH 0x651ee5
//   XREF to: 00651ee5 (DATA)
// 005afa9b: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005afaa0: LEA EAX,[ESP + 0x338]
// 005afaa7: PUSH EAX
// 005afaa8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005afaad: ADD ESP,0x10
// 005afab0: LEA EAX,[ESP + 0x32c]
// 005afab7: PUSH EAX
// 005afab8: XOR EDI,EDI
// 005afaba: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005afabf: ADD ESP,0x4
// 005afac2: JMP 0x005af87d
//   XREF to: 005af87d (UNCONDITIONAL_JUMP)
// 005afac7: FLD1
//   Label: LAB_005afac7
// 005afac9: FCOMP double ptr [ESP]
// 005afacc: FNSTSW AX
// 005aface: SAHF
// 005afacf: JA 0x005afadf
//   XREF to: 005afadf (CONDITIONAL_JUMP)
// 005afad1: XOR EDX,EDX
// 005afad3: MOV dword ptr [ESP + 0xca4],EDX
// 005afada: JMP 0x005af8b3
//   XREF to: 005af8b3 (UNCONDITIONAL_JUMP)
// 005afadf: FLD double ptr [ESP]
//   Label: LAB_005afadf
// 005afae2: FLDLN2
// 005afae4: FXCH
// 005afae6: FYL2X
// 005afae8: FMUL double ptr [0x00652074]
//   XREF to: 00652074 (READ)
// 005afaee: SUB ESP,0x8
// 005afaf1: FSTP double ptr [ESP]
// 005afaf4: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005afaf9: MOV dword ptr [ESP + 0xc94],EAX
// 005afb00: MOV dword ptr [ESP + 0xc98],EDX
// 005afb07: FLD double ptr [ESP + 0xc94]
// 005afb0e: ADD ESP,0x8
// 005afb11: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005afb16: FISTP dword ptr [ESP + 0xca4]
// 005afb1d: MOV EAX,dword ptr [ESP + 0xca4]
// 005afb24: TEST EAX,EAX
// 005afb26: JLE 0x005afb36
//   XREF to: 005afb36 (CONDITIONAL_JUMP)
// 005afb28: XOR EAX,EAX
// 005afb2a: MOV dword ptr [ESP + 0xca4],EAX
// 005afb31: JMP 0x005af8b3
//   XREF to: 005af8b3 (UNCONDITIONAL_JUMP)
// 005afb36: CMP EAX,0xffffd8f0
//   Label: LAB_005afb36
// 005afb3b: JGE 0x005af8b3
//   XREF to: 005af8b3 (CONDITIONAL_JUMP)
// 005afb41: JMP 0x005af8a8
//   XREF to: 005af8a8 (UNCONDITIONAL_JUMP)
// 005afb46: PUSH EAX
//   Label: LAB_005afb46
// 005afb47: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005afb4c: ADD ESP,0x4
// 005afb4f: PUSH EAX
// 005afb50: PUSH 0x651f09
//   XREF to: 00651f09 (DATA)
// 005afb55: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005afb5a: LEA EAX,[ESP + 0x7e8]
// 005afb61: PUSH EAX
// 005afb62: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005afb67: ADD ESP,0x10
// 005afb6a: LEA EAX,[ESP + 0x7dc]
// 005afb71: PUSH EAX
// 005afb72: XOR EDI,EDI
// 005afb74: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005afb79: ADD ESP,0x4
// 005afb7c: JMP 0x005af8d7
//   XREF to: 005af8d7 (UNCONDITIONAL_JUMP)
// 005afb81: PUSH EAX
//   Label: LAB_005afb81
// 005afb82: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005afb87: ADD ESP,0x4
// 005afb8a: PUSH EAX
// 005afb8b: PUSH 0x651f32
//   XREF to: 00651f32 (DATA)
// 005afb90: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005afb95: LEA EAX,[ESP + 0x1a8]
// 005afb9c: PUSH EAX
// 005afb9d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005afba2: ADD ESP,0x10
// 005afba5: LEA EAX,[ESP + 0x19c]
// 005afbac: PUSH EAX
// 005afbad: XOR EDI,EDI
// 005afbaf: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005afbb4: ADD ESP,0x4
// 005afbb7: JMP 0x005af919
//   XREF to: 005af919 (UNCONDITIONAL_JUMP)
// 005afbbc: PUSH EAX
//   Label: LAB_005afbbc
// 005afbbd: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005afbc2: ADD ESP,0x4
// 005afbc5: PUSH EAX
// 005afbc6: PUSH 0x651f5e
//   XREF to: 00651f5e (DATA)
// 005afbcb: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005afbd0: LEA EAX,[ESP + 0x658]
// 005afbd7: PUSH EAX
// 005afbd8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005afbdd: ADD ESP,0x10
// 005afbe0: LEA EAX,[ESP + 0x64c]
// 005afbe7: PUSH EAX
// 005afbe8: XOR EDI,EDI
// 005afbea: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005afbef: ADD ESP,0x4
// 005afbf2: JMP 0x005af93f
//   XREF to: 005af93f (UNCONDITIONAL_JUMP)
// 005afbf7: PUSH EAX
//   Label: LAB_005afbf7
// 005afbf8: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005afbfd: ADD ESP,0x4
// 005afc00: PUSH EAX
// 005afc01: PUSH 0x651f7e
//   XREF to: 00651f7e (DATA)
// 005afc06: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005afc0b: LEA EAX,[ESP + 0x978]
// 005afc12: PUSH EAX
// 005afc13: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005afc18: ADD ESP,0x10
// 005afc1b: LEA EAX,[ESP + 0x96c]
// 005afc22: PUSH EAX
// 005afc23: XOR EDI,EDI
// 005afc25: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005afc2a: ADD ESP,0x4
// 005afc2d: JMP 0x005af96b
//   XREF to: 005af96b (UNCONDITIONAL_JUMP)
// 005afc32: PUSH EAX
//   Label: LAB_005afc32
// 005afc33: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005afc38: ADD ESP,0x4
// 005afc3b: PUSH EAX
// 005afc3c: PUSH 0x651faa
//   XREF to: 00651faa (DATA)
// 005afc41: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005afc46: LEA EAX,[ESP + 0x18]
// 005afc4a: PUSH EAX
// 005afc4b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005afc50: ADD ESP,0x10
// 005afc53: LEA EAX,[ESP + 0xc]
// 005afc57: PUSH EAX
// 005afc58: XOR EDI,EDI
// 005afc5a: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005afc5f: ADD ESP,0x4
// 005afc62: JMP 0x005af982
//   XREF to: 005af982 (UNCONDITIONAL_JUMP)
// 005afc67: CMP dword ptr [ESP + 0xc9c],0x0
//   Label: LAB_005afc67
// 005afc6f: JNZ 0x005af982
//   XREF to: 005af982 (CONDITIONAL_JUMP)
// 005afc75: JMP 0x005af9c0
//   XREF to: 005af9c0 (UNCONDITIONAL_JUMP)
// 005afc7a: PUSH EAX
//   Label: LAB_005afc7a
// 005afc7b: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005afc80: ADD ESP,0x4
// 005afc83: PUSH EAX
// 005afc84: PUSH 0x652023
//   XREF to: 00652023 (DATA)
// 005afc89: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005afc8e: LEA EAX,[ESP + 0xb08]
// 005afc95: PUSH EAX
// 005afc96: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005afc9b: ADD ESP,0x10
// 005afc9e: LEA EAX,[ESP + 0xafc]
// 005afca5: PUSH EAX
// 005afca6: XOR EDI,EDI
// 005afca8: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005afcad: ADD ESP,0x4
// 005afcb0: JMP 0x005af9c4
//   XREF to: 005af9c4 (UNCONDITIONAL_JUMP)

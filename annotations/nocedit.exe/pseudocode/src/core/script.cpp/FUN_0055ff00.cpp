// Name: core_script.cpp_FUN_0055ff00
// Address: 0055ff00
// Address Range: [[0055ff00, 005600b9]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_0055ff00()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c587 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_006431a0
//   double DOUBLE_006431a8 = 0.0200000000000000
//   double DOUBLE_006431b0 = 0.400000000000000
//   CSound* g_CSoundPtr = 03f6af64
//   CDemonActorType g_CCharacterClassInfo
//   undefined4 g_CCharacterClassInfo.name_hash
//   undefined4 DAT_0310ec9c
//   undefined4 DAT_0310f4ac
//   undefined4 DAT_0310f4b0
//   CSound g_CSoundInstance
// Function calls:
//   core_script.cpp_GetDemonActor_FUN_005594e0
//   core_sound.cpp_CSound_playSfx_FUN_005b3a20
//   core_sound.cpp_GetSampleInfo_FUN_005b3ba0
//   crt_stdio.c_sscanf_FUN_0060013c
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_0055ff00(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

int core_script_cpp_FUN_0055ff00(void)

{
  char cVar1;
  int iVar2;
  float fVar3;
  undefined4 extraout_EAX;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char *pcVar5;
  byte bVar6;
  int in_stack_00000004;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  int iVar7;
  
  bVar6 = 0;
  iVar7 = 0;
  if (((*(float *)(in_stack_00000004 + 0x454) < 0.0) &&
      (iVar2 = crt_stdio_c_sscanf_FUN_0060013c(in_stack_0000000c,&DAT_006431a0,&stack0xffffffd8),
      iVar2 != 1)) && (fVar3 = (float)core_sound_cpp_GetSampleInfo_FUN_005b3ba0(), fVar3 < 0.0)) {
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&DAT_0310f4b0,in_stack_0000000c);
    uVar4 = 0xffffffff;
    pcVar5 = in_stack_00000010;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    iVar7 = ~uVar4 - 1;
  }
  iVar2 = core_script_cpp_GetDemonActor_FUN_005594e0();
  *(int *)(in_stack_00000004 + 4) = iVar2;
  if (iVar2 == 0) {
    if (DAT_0310f4ac != 0) {
      return 0;
    }
    return -0x40800000;
  }
  *(int *)(in_stack_00000004 + 8) = iVar2;
  if ((*(int *)(in_stack_00000004 + 0x14) == 0) &&
     (*(int *)(in_stack_00000004 + 4) != *(int *)(in_stack_00000004 + 0xc))) {
    *(undefined4 *)(in_stack_00000004 + 0x10) = 1;
    *(undefined4 *)(in_stack_00000004 + 0xc) = *(undefined4 *)(in_stack_00000004 + 4);
  }
  if (DAT_0310ec9c == 0) {
    pcVar5 = (char *)(in_stack_00000004 + 0x54);
    do {
      cVar1 = *in_stack_00000010;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = in_stack_00000010[1];
      in_stack_00000010 = in_stack_00000010 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    if (*(int *)(in_stack_00000004 + 4) != 0) {
      *(int *)(*(int *)(in_stack_00000004 + 4) + 0x2618) = iVar7;
    }
    if (unaff_ESI != 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0();
      core_sound_cpp_CSound_playSfx_FUN_005b3a20(g_CSoundPtr,in_stack_00000004,in_stack_0000000c);
      *(undefined4 *)(in_stack_00000004 + 0x24) = extraout_EAX;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  return unaff_ESI;
}


// Assembly code:
// 0055ff00: PUSH EBX
//   Label: core_script.cpp_FUN_0055ff00
// 0055ff01: PUSH ESI
// 0055ff02: PUSH EDI
// 0055ff03: PUSH EBP
// 0055ff04: MOV EBP,ESP
// 0055ff06: SUB ESP,0x18
// 0055ff09: AND ESP,0xfffffff8
// 0055ff0c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0055ff0f: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0055ff12: XOR EDX,EDX
// 0055ff14: FLDZ
// 0055ff16: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0055ff1a: FCOMP float ptr [EBX + 0x454]
// 0055ff20: FNSTSW AX
// 0055ff22: SAHF
// 0055ff23: JA 0x0055ff6d
//   XREF to: 0055ff6d (CONDITIONAL_JUMP)
// 0055ff25: MOV EAX,dword ptr [EBX + 0x454]
// 0055ff2b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 0055ff2e: PUSH 0x823c14
//   Label: LAB_0055ff2e
//   XREF to: 00823c14 (DATA)
// 0055ff33: MOV ECX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 0055ff39: PUSH ECX
// 0055ff3a: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055ff3d: PUSH EDI
// 0055ff3e: CALL core_script.cpp_GetDemonActor_FUN_005594e0
//   XREF to: 005594e0 (UNCONDITIONAL_CALL)
// 0055ff43: ADD ESP,0xc
// 0055ff46: MOV dword ptr [EBX + 0x4],EAX
// 0055ff49: TEST EAX,EAX
// 0055ff4b: JNZ 0x00560012
//   XREF to: 00560012 (CONDITIONAL_JUMP)
// 0055ff51: CMP dword ptr [0x0310f4ac],0x0
//   XREF to: 0310f4ac (READ)
// 0055ff58: JZ 0x0055ffff
//   XREF to: 0055ffff (CONDITIONAL_JUMP)
// 0055ff5e: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0055ff62: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0055ff66: MOV ESP,EBP
// 0055ff68: POP EBP
// 0055ff69: POP EDI
// 0055ff6a: POP ESI
// 0055ff6b: POP EBX
// 0055ff6c: RET
// 0055ff6d: MOV EAX,ESP
//   Label: LAB_0055ff6d
// 0055ff6f: PUSH EAX
// 0055ff70: PUSH 0x6431a0
//   XREF to: 006431a0 (DATA)
// 0055ff75: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0055ff78: PUSH ECX
// 0055ff79: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 0055ff7e: ADD ESP,0xc
// 0055ff81: CMP EAX,0x1
// 0055ff84: JZ 0x0055ff2e
//   XREF to: 0055ff2e (CONDITIONAL_JUMP)
// 0055ff86: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0055ff89: PUSH EDI
// 0055ff8a: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0055ff8f: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 0055ff90: CALL core_sound.cpp_GetSampleInfo_FUN_005b3ba0
//   XREF to: 005b3ba0 (UNCONDITIONAL_CALL)
// 0055ff95: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0055ff99: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0055ff9d: ADD ESP,0x8
// 0055ffa0: FST float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0055ffa3: FLDZ
// 0055ffa5: FCOMPP
// 0055ffa7: FNSTSW AX
// 0055ffa9: SAHF
// 0055ffaa: JA 0x0055ffc6
//   XREF to: 0055ffc6 (CONDITIONAL_JUMP)
// 0055ffac: CMP dword ptr [0x0310ec9c],0x0
//   Label: LAB_0055ffac
//   XREF to: 0310ec9c (READ)
// 0055ffb3: JNZ 0x0055ff2e
//   XREF to: 0055ff2e (CONDITIONAL_JUMP)
// 0055ffb9: MOV dword ptr [ESP + 0x10],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 0055ffc1: JMP 0x0055ff2e
//   XREF to: 0055ff2e (UNCONDITIONAL_JUMP)
// 0055ffc6: PUSH EDI
//   Label: LAB_0055ffc6
// 0055ffc7: PUSH 0x310f4b0
//   XREF to: 0310f4b0 (DATA)
// 0055ffcc: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0055ffd1: ADD ESP,0x8
// 0055ffd4: MOV EDI,ESI
// 0055ffd6: SUB ECX,ECX
// 0055ffd8: DEC ECX
// 0055ffd9: XOR EAX,EAX
// 0055ffdb: SCASB.REPNE ES:EDI
// 0055ffdd: NOT ECX
// 0055ffdf: DEC ECX
// 0055ffe0: XOR EDI,EDI
// 0055ffe2: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0055ffe6: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0055ffea: FILD qword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0055ffee: FMUL double ptr [0x006431a8]
//   XREF to: 006431a8 (READ)
// 0055fff4: FADD double ptr [0x006431b0]
//   XREF to: 006431b0 (READ)
// 0055fffa: FSTP float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0055fffd: JMP 0x0055ffac
//   XREF to: 0055ffac (UNCONDITIONAL_JUMP)
// 0055ffff: MOV dword ptr [ESP + 0xc],0xbf800000
//   Label: LAB_0055ffff
//   XREF to: Stack[-0x1c] (WRITE)
// 00560007: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0056000b: MOV ESP,EBP
// 0056000d: POP EBP
// 0056000e: POP EDI
// 0056000f: POP ESI
// 00560010: POP EBX
// 00560011: RET
// 00560012: MOV EDX,dword ptr [EBX + 0x14]
//   Label: LAB_00560012
// 00560015: MOV dword ptr [EBX + 0x8],EAX
// 00560018: TEST EDX,EDX
// 0056001a: JZ 0x0056009c
//   XREF to: 0056009c (CONDITIONAL_JUMP)
// 00560020: CMP dword ptr [0x0310ec9c],0x0
//   Label: LAB_00560020
//   XREF to: 0310ec9c (READ)
// 00560027: JNZ 0x0056008a
//   XREF to: 0056008a (CONDITIONAL_JUMP)
// 00560029: LEA EDI,[EBX + 0x54]
// 0056002c: PUSH EDI
// 0056002d: MOV AL,byte ptr [ESI]
//   Label: LAB_0056002d
// 0056002f: MOV byte ptr [EDI],AL
// 00560031: CMP AL,0x0
// 00560033: JZ 0x00560045
//   XREF to: 00560045 (CONDITIONAL_JUMP)
// 00560035: MOV AL,byte ptr [ESI + 0x1]
// 00560038: ADD ESI,0x2
// 0056003b: MOV byte ptr [EDI + 0x1],AL
// 0056003e: ADD EDI,0x2
// 00560041: CMP AL,0x0
// 00560043: JNZ 0x0056002d
//   XREF to: 0056002d (CONDITIONAL_JUMP)
// 00560045: POP EDI
//   Label: LAB_00560045
// 00560046: MOV EAX,dword ptr [EBX + 0x4]
// 00560049: TEST EAX,EAX
// 0056004b: JZ 0x00560058
//   XREF to: 00560058 (CONDITIONAL_JUMP)
// 0056004d: MOV ECX,EAX
// 0056004f: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00560052: MOV dword ptr [ECX + 0x2618],EAX
// 00560058: CMP dword ptr [ESP + 0x10],0x0
//   Label: LAB_00560058
//   XREF to: Stack[-0x18] (READ)
// 0056005d: JZ 0x0056008a
//   XREF to: 0056008a (CONDITIONAL_JUMP)
// 0056005f: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 00560064: PUSH 0x2
// 00560066: CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0
//   XREF to: 005a8af0 (UNCONDITIONAL_CALL)
// 0056006b: ADD ESP,0x4
// 0056006e: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00560071: PUSH ECX
// 00560072: PUSH EBX
// 00560073: MOV ESI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 00560079: PUSH ESI
//   XREF to: 03f6af64 (DATA)
// 0056007a: CALL core_sound.cpp_CSound_playSfx_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 0056007f: ADD ESP,0xc
// 00560082: MOV dword ptr [EBX + 0x24],EAX
// 00560085: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 0056008a: MOV EAX,dword ptr [ESP]
//   Label: LAB_0056008a
//   XREF to: Stack[-0x28] (DATA)
// 0056008d: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00560091: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00560095: MOV ESP,EBP
// 00560097: POP EBP
// 00560098: POP EDI
// 00560099: POP ESI
// 0056009a: POP EBX
// 0056009b: RET
// 0056009c: MOV ECX,dword ptr [EBX + 0x4]
//   Label: LAB_0056009c
// 0056009f: CMP ECX,dword ptr [EBX + 0xc]
// 005600a2: JZ 0x00560020
//   XREF to: 00560020 (CONDITIONAL_JUMP)
// 005600a8: MOV EAX,dword ptr [EBX + 0x4]
// 005600ab: MOV dword ptr [EBX + 0x10],0x1
// 005600b2: MOV dword ptr [EBX + 0xc],EAX
// 005600b5: JMP 0x00560020
//   XREF to: 00560020 (UNCONDITIONAL_JUMP)

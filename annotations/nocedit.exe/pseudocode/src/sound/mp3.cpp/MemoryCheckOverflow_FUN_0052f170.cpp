// Name: sound_mp3.cpp_MemoryCheckOverflow_FUN_0052f170
// Address: 0052f170
// Address Range: [[0052f170, 0052f24e]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_MemoryCheckOverflow_FUN_0052f170()
// Cross-references:
//   sound_mp3.cpp_FUN_00530d20 (00530d20) at 0053104a [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_005310f0 (005310f0) at 0053145f [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_HuffmanCodeCheck_FUN_0052f350 (0052f350) at 0052f54b [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_HuffmanDecodeTableThing_FUN_00531680 (00531680) at 00531d3c [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 00535725 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_RelatedToMemoryCheckOverflow_FUN_0052f250 (0052f250) at 0052f257 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_mp3_cpp_0063ad8b
//   TerminatedCString s_Buffer_overflow_File_s_0063ad9c
//   undefined4 DAT_0067e5e0
//   undefined4 DAT_0067e600
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined1 DAT_02f68188
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_MemoryCheckOverflow(undefined4 param_1, undefined4 param_2)
    */

uint sound_mp3_cpp_MemoryCheckOverflow_FUN_0052f170(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_stack_00000004;
  uint in_stack_00000008;
  byte local_14;
  
  uVar3 = 0;
  *(uint *)(in_stack_00000004 + 0x1314) = *(int *)(in_stack_00000004 + 0x1314) + in_stack_00000008;
  if (0 < (int)in_stack_00000008) {
    do {
      if (*(int *)(in_stack_00000004 + 0x531c) == 0) {
        *(undefined4 *)(in_stack_00000004 + 0x531c) = 8;
        uVar2 = *(int *)(in_stack_00000004 + 0x1318) + 1;
        *(uint *)(in_stack_00000004 + 0x1318) = uVar2;
        if (*(uint *)(in_stack_00000004 + 0x1310) < uVar2) {
          g_CurrentFilename = "..\\sound\\mp3.cpp";
          g_CurrentLineNumber = 0x2c1;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("Buffer overflow!!  File: %s",&DAT_02f68188);
        }
      }
      uVar2 = *(uint *)(in_stack_00000004 + 0x531c);
      if (in_stack_00000008 < uVar2) {
        uVar2 = in_stack_00000008;
      }
      in_stack_00000008 = in_stack_00000008 - uVar2;
      iVar1 = *(int *)(in_stack_00000004 + 0x531c) - uVar2;
      local_14 = (byte)iVar1;
      uVar3 = uVar3 | ((*(uint *)(in_stack_00000004 + 0x131c +
                                 (*(uint *)(in_stack_00000004 + 0x1318) & 0xfff) * 4) &
                       *(uint *)(&DAT_0067e5e0 + *(int *)(in_stack_00000004 + 0x531c) * 4)) >>
                      (local_14 & 0x1f)) << ((byte)in_stack_00000008 & 0x1f);
      *(int *)(in_stack_00000004 + 0x531c) = iVar1;
    } while (0 < (int)in_stack_00000008);
  }
  return uVar3;
}


// Assembly code:
// 0052f170: PUSH EBX
//   Label: sound_mp3.cpp_MemoryCheckOverflow_FUN_0052f170
// 0052f171: PUSH ESI
// 0052f172: PUSH EDI
// 0052f173: PUSH EBP
// 0052f174: SUB ESP,0x4
// 0052f177: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0052f17b: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0052f17f: MOV EDX,dword ptr [EBX + 0x1314]
// 0052f185: MOV ESI,EAX
// 0052f187: ADD EDX,EAX
// 0052f189: XOR EDI,EDI
// 0052f18b: MOV dword ptr [EBX + 0x1314],EDX
// 0052f191: TEST EAX,EAX
// 0052f193: JLE 0x0052f1f1
//   XREF to: 0052f1f1 (CONDITIONAL_JUMP)
// 0052f195: CMP dword ptr [EBX + 0x531c],0x0
//   Label: LAB_0052f195
// 0052f19c: JZ 0x0052f1fb
//   XREF to: 0052f1fb (CONDITIONAL_JUMP)
// 0052f19e: MOV EDX,dword ptr [EBX + 0x531c]
//   Label: LAB_0052f19e
// 0052f1a4: CMP ESI,EDX
// 0052f1a6: JNC 0x0052f248
//   XREF to: 0052f248 (CONDITIONAL_JUMP)
// 0052f1ac: MOV EAX,ESI
// 0052f1ae: MOV EDX,dword ptr [EBX + 0x1318]
//   Label: LAB_0052f1ae
// 0052f1b4: MOV ECX,dword ptr [EBX + 0x531c]
// 0052f1ba: SUB ESI,EAX
// 0052f1bc: AND EDX,0xfff
// 0052f1c2: MOV EBP,dword ptr [ECX*0x4 + 0x67e5e0]
//   XREF to: 0067e5e0 (DATA)
//   XREF to: 0067e600 (READ)
// 0052f1c9: SUB ECX,EAX
// 0052f1cb: MOV EDX,dword ptr [EBX + EDX*0x4 + 0x131c]
// 0052f1d2: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 0052f1d5: AND EDX,EBP
// 0052f1d7: MOV CL,byte ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0052f1da: MOV EAX,ESI
// 0052f1dc: SHR EDX,CL
// 0052f1de: MOV CL,AL
// 0052f1e0: SHL EDX,CL
// 0052f1e2: OR EDI,EDX
// 0052f1e4: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0052f1e7: MOV dword ptr [EBX + 0x531c],EDX
// 0052f1ed: TEST ESI,ESI
// 0052f1ef: JG 0x0052f195
//   XREF to: 0052f195 (CONDITIONAL_JUMP)
// 0052f1f1: MOV EAX,EDI
//   Label: LAB_0052f1f1
// 0052f1f3: ADD ESP,0x4
// 0052f1f6: POP EBP
// 0052f1f7: POP EDI
// 0052f1f8: POP ESI
// 0052f1f9: POP EBX
// 0052f1fa: RET
// 0052f1fb: MOV EDX,dword ptr [EBX + 0x1318]
//   Label: LAB_0052f1fb
// 0052f201: MOV dword ptr [EBX + 0x531c],0x8
// 0052f20b: INC EDX
// 0052f20c: MOV ECX,dword ptr [EBX + 0x1310]
// 0052f212: MOV dword ptr [EBX + 0x1318],EDX
// 0052f218: CMP EDX,ECX
// 0052f21a: JBE 0x0052f19e
//   XREF to: 0052f19e (CONDITIONAL_JUMP)
// 0052f21c: PUSH 0x2f68188
//   XREF to: 02f68188 (DATA)
// 0052f221: MOV EBP,0x63ad8b
//   XREF to: 0063ad8b (DATA)
// 0052f226: MOV EAX,0x2c1
// 0052f22b: PUSH 0x63ad9c
//   XREF to: 0063ad9c (DATA)
// 0052f230: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0052f236: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0052f23b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052f240: ADD ESP,0x8
// 0052f243: JMP 0x0052f19e
//   XREF to: 0052f19e (UNCONDITIONAL_JUMP)
// 0052f248: MOV EAX,EDX
//   Label: LAB_0052f248
// 0052f24a: JMP 0x0052f1ae
//   XREF to: 0052f1ae (UNCONDITIONAL_JUMP)

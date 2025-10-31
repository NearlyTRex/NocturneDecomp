// Name: crt_stdio.c_OpenModeStringParser_FUN_006017d0
// Address: 006017d0
// Address Range: [[006017d0, 0060190b]]
// Convention: __cdecl
// Signature: int crt_stdio.c_OpenModeStringParser_FUN_006017d0(char * mode_string, char * output_flags)
// Cross-references:
//   crt_stdio.c_fopenThreadSafe_FUN_00601b14 (00601b14) at 00601b27 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fopenWithFlags_FUN_00601a20 (00601a20) at 00601a2e [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00684ed0
//   undefined4 DAT_00685280
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790

#include "nocturne.h"

int __cdecl crt_stdio_c_OpenModeStringParser_FUN_006017d0(char *mode_string,char *output_flags)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  
  bVar2 = true;
  bVar4 = false;
  bVar5 = false;
  bVar3 = false;
  if (output_flags != (char *)0x0) {
    if (DAT_00685280 == 1) {
      output_flags[0] = '\x01';
      output_flags[1] = '\0';
      output_flags[2] = '\0';
      output_flags[3] = '\0';
    }
    else {
      output_flags[0] = '\0';
      output_flags[1] = '\0';
      output_flags[2] = '\0';
      output_flags[3] = '\0';
    }
  }
  bVar1 = *mode_string;
  if (bVar1 < 0x72) {
    if (bVar1 != 0x61) {
LAB_00601822:
      crt_errno_c_setErrno_FUN_00602790(SYSTEM_BAD_FILE_DESCRIPTOR);
      return 0;
    }
    uVar6 = 0x82;
  }
  else if (bVar1 < 0x73) {
    uVar6 = 1;
  }
  else {
    if (bVar1 != 0x77) goto LAB_00601822;
    uVar6 = 2;
  }
  bVar1 = mode_string[1];
  while ((bVar1 != 0 && (bVar2))) {
    bVar1 = ((byte *)mode_string)[1];
    if (bVar1 < 99) {
      if (0x2a < bVar1) {
        if (bVar1 < 0x2c) {
          if (bVar3) {
            bVar2 = false;
          }
          else {
            uVar6 = uVar6 | 3;
            bVar3 = true;
          }
        }
        else if (bVar1 == 0x62) {
          if (bVar4) {
            bVar2 = false;
          }
          else {
            bVar4 = true;
            uVar6 = uVar6 | 0x40;
          }
        }
      }
    }
    else if (bVar1 < 100) {
      if (bVar5) {
        bVar2 = false;
      }
      else {
        bVar5 = true;
        *output_flags = *output_flags | 1;
      }
    }
    else if (0x6d < bVar1) {
      if (bVar1 < 0x6f) {
        if (bVar5) {
          bVar2 = false;
        }
        else {
          bVar5 = true;
          *output_flags = *output_flags & 0xfe;
        }
      }
      else if (bVar1 == 0x74) {
        if (bVar4) {
          bVar2 = false;
        }
        else {
          bVar4 = true;
        }
      }
    }
    bVar1 = ((byte *)mode_string)[2];
    mode_string = (char *)((byte *)mode_string + 1);
  }
  if ((!bVar4) && (DAT_00684ed0 == 0x200)) {
    uVar6 = uVar6 | 0x40;
  }
  return uVar6;
}


// Assembly code:
// 006017d0: PUSH EBX
//   Label: crt_stdio.c_OpenModeStringParser_FUN_006017d0
// 006017d1: PUSH ESI
// 006017d2: PUSH EDI
// 006017d3: PUSH EBP
// 006017d4: SUB ESP,0x4
// 006017d7: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 006017db: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 006017df: MOV EDX,0x1
// 006017e4: XOR EBX,EBX
// 006017e6: XOR EDI,EDI
// 006017e8: XOR EBP,EBP
// 006017ea: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x14] (DATA)
// 006017ed: TEST ESI,ESI
// 006017ef: JZ 0x006017ff
//   XREF to: 006017ff (CONDITIONAL_JUMP)
// 006017f1: CMP EDX,dword ptr [0x00685280]
//   XREF to: 00685280 (READ)
// 006017f7: JNZ 0x006017fd
//   XREF to: 006017fd (CONDITIONAL_JUMP)
// 006017f9: MOV dword ptr [ESI],EDX
// 006017fb: JMP 0x006017ff
//   XREF to: 006017ff (UNCONDITIONAL_JUMP)
// 006017fd: MOV dword ptr [ESI],EBX
//   Label: LAB_006017fd
// 006017ff: MOV AL,byte ptr [ECX]
//   Label: LAB_006017ff
// 00601801: CMP AL,0x72
// 00601803: JC 0x0060180d
//   XREF to: 0060180d (CONDITIONAL_JUMP)
// 00601805: JBE 0x00601813
//   XREF to: 00601813 (CONDITIONAL_JUMP)
// 00601807: CMP AL,0x77
// 00601809: JZ 0x00601818
//   XREF to: 00601818 (CONDITIONAL_JUMP)
// 0060180b: JMP 0x00601822
//   XREF to: 00601822 (UNCONDITIONAL_JUMP)
// 0060180d: CMP AL,0x61
//   Label: LAB_0060180d
// 0060180f: JZ 0x0060181d
//   XREF to: 0060181d (CONDITIONAL_JUMP)
// 00601811: JMP 0x00601822
//   XREF to: 00601822 (UNCONDITIONAL_JUMP)
// 00601813: OR BL,0x1
//   Label: LAB_00601813
// 00601816: JMP 0x00601833
//   XREF to: 00601833 (UNCONDITIONAL_JUMP)
// 00601818: OR BL,0x2
//   Label: LAB_00601818
// 0060181b: JMP 0x00601833
//   XREF to: 00601833 (UNCONDITIONAL_JUMP)
// 0060181d: OR BL,0x82
//   Label: LAB_0060181d
// 00601820: JMP 0x00601833
//   XREF to: 00601833 (UNCONDITIONAL_JUMP)
// 00601822: PUSH 0x9
//   Label: LAB_00601822
// 00601824: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 00601829: ADD ESP,0x4
// 0060182c: XOR EDX,EDX
// 0060182e: JMP 0x00601902
//   XREF to: 00601902 (UNCONDITIONAL_JUMP)
// 00601833: MOV AH,byte ptr [ECX + 0x1]
//   Label: LAB_00601833
// 00601836: INC ECX
// 00601837: TEST AH,AH
// 00601839: JZ 0x006018ed
//   XREF to: 006018ed (CONDITIONAL_JUMP)
// 0060183f: TEST EDX,EDX
//   Label: LAB_0060183f
// 00601841: JZ 0x006018ed
//   XREF to: 006018ed (CONDITIONAL_JUMP)
// 00601847: MOV AL,byte ptr [ECX]
// 00601849: CMP AL,0x63
// 0060184b: JC 0x0060186a
//   XREF to: 0060186a (CONDITIONAL_JUMP)
// 0060184d: JBE 0x006018b8
//   XREF to: 006018b8 (CONDITIONAL_JUMP)
// 00601853: CMP AL,0x6e
// 00601855: JC 0x006018e1
//   XREF to: 006018e1 (CONDITIONAL_JUMP)
// 0060185b: JBE 0x006018cd
//   XREF to: 006018cd (CONDITIONAL_JUMP)
// 00601861: CMP AL,0x74
// 00601863: JZ 0x00601897
//   XREF to: 00601897 (CONDITIONAL_JUMP)
// 00601865: JMP 0x006018e1
//   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
// 0060186a: CMP AL,0x2b
//   Label: LAB_0060186a
// 0060186c: JC 0x006018e1
//   XREF to: 006018e1 (CONDITIONAL_JUMP)
// 00601872: JBE 0x0060187d
//   XREF to: 0060187d (CONDITIONAL_JUMP)
// 00601874: CMP AL,0x62
// 00601876: JZ 0x006018a6
//   XREF to: 006018a6 (CONDITIONAL_JUMP)
// 00601878: JMP 0x006018e1
//   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
// 0060187d: CMP dword ptr [ESP],0x0
//   Label: LAB_0060187d
//   XREF to: Stack[-0x14] (DATA)
// 00601881: JZ 0x0060188a
//   XREF to: 0060188a (CONDITIONAL_JUMP)
// 00601883: XOR EDX,EDX
// 00601885: JMP 0x006018e1
//   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
// 0060188a: MOV EAX,0x1
//   Label: LAB_0060188a
// 0060188f: OR BL,0x3
// 00601892: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00601895: JMP 0x006018e1
//   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
// 00601897: TEST EDI,EDI
//   Label: LAB_00601897
// 00601899: JZ 0x0060189f
//   XREF to: 0060189f (CONDITIONAL_JUMP)
// 0060189b: XOR EDX,EDX
// 0060189d: JMP 0x006018e1
//   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
// 0060189f: MOV EDI,0x1
//   Label: LAB_0060189f
// 006018a4: JMP 0x006018e1
//   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
// 006018a6: TEST EDI,EDI
//   Label: LAB_006018a6
// 006018a8: JZ 0x006018ae
//   XREF to: 006018ae (CONDITIONAL_JUMP)
// 006018aa: XOR EDX,EDX
// 006018ac: JMP 0x006018e1
//   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
// 006018ae: MOV EDI,0x1
//   Label: LAB_006018ae
// 006018b3: OR BL,0x40
// 006018b6: JMP 0x006018e1
//   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
// 006018b8: TEST EBP,EBP
//   Label: LAB_006018b8
// 006018ba: JZ 0x006018c0
//   XREF to: 006018c0 (CONDITIONAL_JUMP)
// 006018bc: XOR EDX,EDX
// 006018be: JMP 0x006018e1
//   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
// 006018c0: MOV AL,byte ptr [ESI]
//   Label: LAB_006018c0
// 006018c2: OR AL,0x1
// 006018c4: MOV EBP,0x1
// 006018c9: MOV byte ptr [ESI],AL
// 006018cb: JMP 0x006018e1
//   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
// 006018cd: TEST EBP,EBP
//   Label: LAB_006018cd
// 006018cf: JZ 0x006018d5
//   XREF to: 006018d5 (CONDITIONAL_JUMP)
// 006018d1: XOR EDX,EDX
// 006018d3: JMP 0x006018e1
//   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
// 006018d5: MOV AH,byte ptr [ESI]
//   Label: LAB_006018d5
// 006018d7: AND AH,0xfe
// 006018da: MOV EBP,0x1
// 006018df: MOV byte ptr [ESI],AH
// 006018e1: MOV AL,byte ptr [ECX + 0x1]
//   Label: LAB_006018e1
// 006018e4: INC ECX
// 006018e5: TEST AL,AL
// 006018e7: JNZ 0x0060183f
//   XREF to: 0060183f (CONDITIONAL_JUMP)
// 006018ed: TEST EDI,EDI
//   Label: LAB_006018ed
// 006018ef: JNZ 0x00601900
//   XREF to: 00601900 (CONDITIONAL_JUMP)
// 006018f1: CMP dword ptr [0x00684ed0],0x200
//   XREF to: 00684ed0 (READ)
// 006018fb: JNZ 0x00601900
//   XREF to: 00601900 (CONDITIONAL_JUMP)
// 006018fd: OR BL,0x40
// 00601900: MOV EDX,EBX
//   Label: LAB_00601900
// 00601902: MOV EAX,EDX
//   Label: LAB_00601902
// 00601904: ADD ESP,0x4
// 00601907: POP EBP
// 00601908: POP EDI
// 00601909: POP ESI
// 0060190a: POP EBX
// 0060190b: RET

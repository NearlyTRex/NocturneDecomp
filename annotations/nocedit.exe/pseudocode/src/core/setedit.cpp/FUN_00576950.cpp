// Name: core_setedit.cpp_FUN_00576950
// Address: 00576950
// Address Range: [[00576950, 0057699c]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00576950()
// Globals:
//   TerminatedCString s_d_006465a5
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_atoi_FUN_005ffef0

#include "nocturne.h"

void core_setedit_cpp_FUN_00576950
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               char *param_5)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  uVar4 = 0xffffffff;
  pcVar6 = param_5;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar5 = ~uVar4 - 2;
  if (0 < iVar5) {
    pbVar2 = (byte *)(param_5 + iVar5);
    do {
      if ((*pbVar2 < 0x30) || (0x39 < *pbVar2)) break;
      iVar5 = iVar5 + -1;
      pbVar2 = pbVar2 + -1;
    } while (0 < iVar5);
  }
  iVar3 = crt_stdlib_c_atoi_FUN_005ffef0(param_5 + iVar5 + 1);
  crt_stdio_c_sprintf_FUN_005fdbd0(param_5 + iVar5 + 1,"%d",iVar3 + 1,unaff_EBX);
  return;
}


// Assembly code:
// 00576950: PUSH EBX
//   Label: core_setedit.cpp_FUN_00576950
// 00576951: PUSH EDI
// 00576952: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00576956: MOV EDI,EBX
// 00576958: SUB ECX,ECX
// 0057695a: DEC ECX
// 0057695b: XOR EAX,EAX
// 0057695d: SCASB.REPNE ES:EDI
// 0057695f: NOT ECX
// 00576961: DEC ECX
// 00576962: LEA EDX,[ECX + -0x1]
// 00576965: TEST EDX,EDX
// 00576967: JLE 0x0057697e
//   XREF to: 0057697e (CONDITIONAL_JUMP)
// 00576969: LEA EAX,[EDX + EBX*0x1]
// 0057696c: MOV CL,byte ptr [EAX]
//   Label: LAB_0057696c
// 0057696e: CMP CL,0x30
// 00576971: JC 0x0057697e
//   XREF to: 0057697e (CONDITIONAL_JUMP)
// 00576973: CMP CL,0x39
// 00576976: JA 0x0057697e
//   XREF to: 0057697e (CONDITIONAL_JUMP)
// 00576978: DEC EDX
// 00576979: DEC EAX
// 0057697a: TEST EDX,EDX
// 0057697c: JG 0x0057696c
//   XREF to: 0057696c (CONDITIONAL_JUMP)
// 0057697e: INC EDX
//   Label: LAB_0057697e
// 0057697f: ADD EBX,EDX
// 00576981: PUSH EBX
// 00576982: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 00576987: ADD ESP,0x4
// 0057698a: INC EAX
// 0057698b: PUSH EAX
// 0057698c: PUSH 0x6465a5
//   XREF to: 006465a5 (DATA)
// 00576991: PUSH EBX
// 00576992: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00576997: ADD ESP,0xc
// 0057699a: POP EDI
// 0057699b: POP EBX
// 0057699c: RET

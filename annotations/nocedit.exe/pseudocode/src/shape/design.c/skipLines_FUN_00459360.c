// Name: shape_design.c_skipLines_FUN_00459360
// Address: 00459360
// Address Range: [[00459360, 0045939f]]
// Convention: __cdecl
// Signature: void shape_design.c_skipLines_FUN_00459360(FILE * file, int line_count)
// Cross-references:
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 004596c2 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840

#include "nocturne.h"

void __cdecl shape_design_c_skipLines_FUN_00459360(FILE *file,int line_count)

{
  int iVar1;
  
  do {
    if (line_count < 1) {
      return;
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar1 < 0) {
        return;
      }
    } while (iVar1 != 10);
    line_count = line_count + -1;
  } while( true );
}


// Assembly code:
// 00459360: PUSH EBX
//   Label: shape_design.c_skipLines_FUN_00459360
// 00459361: PUSH ESI
// 00459362: PUSH EDI
// 00459363: PUSH EBP
// 00459364: MOV EBP,ESP
// 00459366: SUB ESP,0x4
// 0045936c: CMP dword ptr [EBP + 0x18],0x0
//   Label: LAB_0045936c
//   XREF to: Stack[0x8] (READ)
// 00459370: JLE 0x00459399
//   XREF to: 00459399 (CONDITIONAL_JUMP)
// 00459372: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00459372
//   XREF to: Stack[0x4] (READ)
// 00459375: PUSH EAX
// 00459376: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0045937b: ADD ESP,0x4
// 0045937e: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00459381: CMP dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (READ)
// 00459385: JGE 0x00459389
//   XREF to: 00459389 (CONDITIONAL_JUMP)
// 00459387: JMP 0x00459399
//   XREF to: 00459399 (UNCONDITIONAL_JUMP)
// 00459389: CMP dword ptr [EBP + -0x4],0xa
//   Label: LAB_00459389
//   XREF to: Stack[-0x14] (READ)
// 0045938d: JNZ 0x00459391
//   XREF to: 00459391 (CONDITIONAL_JUMP)
// 0045938f: JMP 0x00459393
//   XREF to: 00459393 (UNCONDITIONAL_JUMP)
// 00459391: JMP 0x00459372
//   Label: LAB_00459391
//   XREF to: 00459372 (UNCONDITIONAL_JUMP)
// 00459393: ADD dword ptr [EBP + 0x18],-0x1
//   Label: LAB_00459393
//   XREF to: Stack[0x8] (READ_WRITE)
// 00459397: JMP 0x0045936c
//   XREF to: 0045936c (UNCONDITIONAL_JUMP)
// 00459399: MOV ESP,EBP
//   Label: LAB_00459399
// 0045939b: POP EBP
// 0045939c: POP EDI
// 0045939d: POP ESI
// 0045939e: POP EBX
// 0045939f: RET

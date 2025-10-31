// Name: shape_design.c_createBoxPrimitive_FUN_0045e520
// Address: 0045e520
// Address Range: [[0045e520, 0045ea88]]
// Convention: unknown
// Signature: undefined shape_design.c_createBoxPrimitive_FUN_0045e520()
// Globals:
//   TerminatedCString s_Enter_in_X_Y_Z_box_dimen_0061b54e
//   TerminatedCString s_f_f_f_0061b56f
//   TerminatedCString s_Enter_in_X_Y_Z_box_cente_0061b578
//   TerminatedCString s_f_f_f_0061b595
//   TerminatedCString s_I_nside_O_utside_B_oth_0061b59e
//   float g_BoxScaleFactor = 0.5
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_stdio.c_sscanf_FUN_0060013c
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_createQuadPolygon_FUN_0045df60
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0045e5b1) */
/* WARNING: Removing unreachable block (ram,0x0045e5a3) */
/* WARNING: Removing unreachable block (ram,0x0045e5c2) */
/* WARNING: Removing unreachable block (ram,0x0045e5e2) */
/* WARNING: Removing unreachable block (ram,0x0045e5e4) */
/* WARNING: Removing unreachable block (ram,0x0045e5f0) */
/* WARNING: Removing unreachable block (ram,0x0045e61c) */
/* WARNING: Removing unreachable block (ram,0x0045e8d1) */
/* WARNING: Removing unreachable block (ram,0x0045e8db) */
/* WARNING: Removing unreachable block (ram,0x0045e9a4) */
/* WARNING: Removing unreachable block (ram,0x0045e9aa) */
/* WARNING: Removing unreachable block (ram,0x0045e9b4) */
/* WARNING: Removing unreachable block (ram,0x0045ea7d) */
/* WARNING: Removing unreachable block (ram,0x0045e617) */
/* WARNING: Removing unreachable block (ram,0x0045e5eb) */

void shape_design_c_createBoxPrimitive_FUN_0045e520(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  
  bVar4 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff78,0x4f,0,0,"Enter in X,Y,Z box dimentions : ");
  iVar2 = -1;
  pcVar3 = &stack0xffffff78;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    crt_stdio_c_sscanf_FUN_0060013c(&stack0xffffff78,"%f,%f,%f");
  }
  return;
}


// Assembly code:
// 0045e520: PUSH EBX
//   Label: shape_design.c_createBoxPrimitive_FUN_0045e520
// 0045e521: PUSH ESI
// 0045e522: PUSH EDI
// 0045e523: PUSH EBP
// 0045e524: MOV EBP,ESP
// 0045e526: SUB ESP,0x78
// 0045e52c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0045e531: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045e536: MOV dword ptr [EBP + -0x20],0xbf800000
//   XREF to: Stack[-0x30] (WRITE)
// 0045e53d: MOV dword ptr [EBP + -0x1c],0xbf800000
//   XREF to: Stack[-0x2c] (WRITE)
// 0045e544: MOV dword ptr [EBP + -0x18],0xbf800000
//   XREF to: Stack[-0x28] (WRITE)
// 0045e54b: MOV ECX,0x61b54e
//   XREF to: 0061b54e (DATA)
// 0045e550: PUSH ECX
//   XREF to: 0061b54e (DATA)
// 0045e551: PUSH 0x0
// 0045e553: PUSH 0x0
// 0045e555: PUSH 0x4f
// 0045e557: LEA ECX,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 0045e55a: PUSH ECX
// 0045e55b: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045e560: ADD ESP,0x14
// 0045e563: LEA EDI,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 0045e566: SUB ECX,ECX
// 0045e568: DEC ECX
// 0045e569: XOR EAX,EAX
// 0045e56b: SCASB.REPNE ES:EDI
// 0045e56d: NOT ECX
// 0045e56f: DEC ECX
// 0045e570: TEST ECX,ECX
// 0045e572: JNZ 0x0045e579
//   XREF to: 0045e579 (CONDITIONAL_JUMP)
// 0045e574: JMP 0x0045ea82
//   XREF to: 0045ea82 (UNCONDITIONAL_JUMP)
// 0045e579: LEA EAX,[EBP + -0x18]
//   Label: LAB_0045e579
//   XREF to: Stack[-0x28] (DATA)
// 0045e57c: PUSH EAX
// 0045e57d: LEA EAX,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0045e580: PUSH EAX
// 0045e581: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x30] (DATA)
// 0045e584: PUSH EAX
// 0045e585: MOV EAX,0x61b56f
//   XREF to: 0061b56f (DATA)
// 0045e58a: PUSH EAX
//   XREF to: 0061b56f (DATA)
// 0045e58b: LEA EAX,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 0045e58e: PUSH EAX
// 0045e58f: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 0045e594: ADD ESP,0x14
// 0045e597: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045e59a: FLDZ
// 0045e59c: FCOMPP
// 0045e59e: FNSTSW AX
// 0045e5a0: SAHF
// 0045e5a1: JNC 0x0045e5af
//   XREF to: 0045e5af (CONDITIONAL_JUMP)
// 0045e5a3: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045e5a6: FLDZ
// 0045e5a8: FCOMPP
// 0045e5aa: FNSTSW AX
// 0045e5ac: SAHF
// 0045e5ad: JC 0x0045e5b1
//   XREF to: 0045e5b1 (CONDITIONAL_JUMP)
// 0045e5af: JMP 0x0045e5bd
//   Label: LAB_0045e5af
//   XREF to: 0045e5bd (UNCONDITIONAL_JUMP)
// 0045e5b1: FLD float ptr [EBP + -0x18]
//   Label: LAB_0045e5b1
//   XREF to: Stack[-0x28] (READ)
// 0045e5b4: FLDZ
// 0045e5b6: FCOMPP
// 0045e5b8: FNSTSW AX
// 0045e5ba: SAHF
// 0045e5bb: JC 0x0045e5c2
//   XREF to: 0045e5c2 (CONDITIONAL_JUMP)
// 0045e5bd: JMP 0x0045ea82
//   Label: LAB_0045e5bd
//   XREF to: 0045ea82 (UNCONDITIONAL_JUMP)
// 0045e5c2: MOV ECX,0x61b578
//   Label: LAB_0045e5c2
//   XREF to: 0061b578 (DATA)
// 0045e5c7: PUSH ECX
//   XREF to: 0061b578 (DATA)
// 0045e5c8: PUSH 0xb
// 0045e5ca: PUSH 0x0
// 0045e5cc: PUSH 0x4f
// 0045e5ce: LEA ECX,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 0045e5d1: PUSH ECX
// 0045e5d2: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045e5d7: ADD ESP,0x14
// 0045e5da: LEA EDI,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 0045e5dd: SUB ECX,ECX
// 0045e5df: DEC ECX
// 0045e5e0: XOR EAX,EAX
// 0045e5e2: SCASB.REPNE ES:EDI
// 0045e5e4: NOT ECX
// 0045e5e6: DEC ECX
// 0045e5e7: TEST ECX,ECX
// 0045e5e9: JNZ 0x0045e5f0
//   XREF to: 0045e5f0 (CONDITIONAL_JUMP)
// 0045e5eb: JMP 0x0045ea82
//   XREF to: 0045ea82 (UNCONDITIONAL_JUMP)
// 0045e5f0: LEA EAX,[EBP + -0xc]
//   Label: LAB_0045e5f0
//   XREF to: Stack[-0x1c] (DATA)
// 0045e5f3: PUSH EAX
// 0045e5f4: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 0045e5f7: PUSH EAX
// 0045e5f8: LEA EAX,[EBP + -0x14]
//   XREF to: Stack[-0x24] (DATA)
// 0045e5fb: PUSH EAX
// 0045e5fc: MOV EAX,0x61b595
//   XREF to: 0061b595 (DATA)
// 0045e601: PUSH EAX
//   XREF to: 0061b595 (DATA)
// 0045e602: LEA EAX,[EBP + -0x78]
//   XREF to: Stack[-0x88] (DATA)
// 0045e605: PUSH EAX
// 0045e606: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 0045e60b: ADD ESP,0x14
// 0045e60e: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0045e611: CMP dword ptr [EBP + -0x24],0x3
//   XREF to: Stack[-0x34] (READ)
// 0045e615: JZ 0x0045e61c
//   XREF to: 0045e61c (CONDITIONAL_JUMP)
// 0045e617: JMP 0x0045ea82
//   XREF to: 0045ea82 (UNCONDITIONAL_JUMP)
// 0045e61c: PUSH 0x16
//   Label: LAB_0045e61c
// 0045e61e: PUSH 0x0
// 0045e620: MOV EAX,0x61b59e
//   XREF to: 0061b59e (DATA)
// 0045e625: PUSH EAX
//   XREF to: 0061b59e (DATA)
// 0045e626: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045e62b: ADD ESP,0xc
// 0045e62e: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0045e633: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0045e638: AND EAX,0xff
// 0045e63d: PUSH EAX
// 0045e63e: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0045e643: ADD ESP,0x4
// 0045e646: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045e649: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 0045e64e: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045e651: ADD dword ptr [0x01626408],0x8
//   XREF to: 01626408 (READ_WRITE)
// 0045e658: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045e65b: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e661: FADD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045e664: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0045e668: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e66e: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045e671: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e677: FSUBR float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e67a: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0045e67e: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e684: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045e687: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e68d: FADD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e690: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0045e694: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e69a: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045e69d: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e6a3: FSUBR float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045e6a6: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e6a9: INC EAX
// 0045e6aa: IMUL EAX,EAX,0x14
// 0045e6ad: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e6b3: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045e6b6: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e6bc: FSUBR float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e6bf: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e6c2: INC EAX
// 0045e6c3: IMUL EAX,EAX,0x14
// 0045e6c6: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e6cc: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045e6cf: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e6d5: FADD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e6d8: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e6db: INC EAX
// 0045e6dc: IMUL EAX,EAX,0x14
// 0045e6df: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e6e5: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045e6e8: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e6ee: FSUBR float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045e6f1: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e6f4: ADD EAX,0x2
// 0045e6f7: IMUL EAX,EAX,0x14
// 0045e6fa: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e700: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045e703: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e709: FSUBR float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e70c: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e70f: ADD EAX,0x2
// 0045e712: IMUL EAX,EAX,0x14
// 0045e715: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e71b: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045e71e: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e724: FSUBR float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e727: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e72a: ADD EAX,0x2
// 0045e72d: IMUL EAX,EAX,0x14
// 0045e730: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e736: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045e739: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e73f: FADD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045e742: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e745: ADD EAX,0x3
// 0045e748: IMUL EAX,EAX,0x14
// 0045e74b: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e751: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045e754: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e75a: FSUBR float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e75d: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e760: ADD EAX,0x3
// 0045e763: IMUL EAX,EAX,0x14
// 0045e766: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e76c: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045e76f: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e775: FSUBR float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e778: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e77b: ADD EAX,0x3
// 0045e77e: IMUL EAX,EAX,0x14
// 0045e781: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e787: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045e78a: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e790: FADD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045e793: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e796: ADD EAX,0x4
// 0045e799: IMUL EAX,EAX,0x14
// 0045e79c: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e7a2: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045e7a5: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e7ab: FADD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e7ae: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e7b1: ADD EAX,0x4
// 0045e7b4: IMUL EAX,EAX,0x14
// 0045e7b7: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e7bd: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045e7c0: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e7c6: FADD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e7c9: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e7cc: ADD EAX,0x4
// 0045e7cf: IMUL EAX,EAX,0x14
// 0045e7d2: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e7d8: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045e7db: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e7e1: FSUBR float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045e7e4: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e7e7: ADD EAX,0x5
// 0045e7ea: IMUL EAX,EAX,0x14
// 0045e7ed: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e7f3: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045e7f6: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e7fc: FADD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e7ff: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e802: ADD EAX,0x5
// 0045e805: IMUL EAX,EAX,0x14
// 0045e808: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e80e: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045e811: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e817: FADD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e81a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e81d: ADD EAX,0x5
// 0045e820: IMUL EAX,EAX,0x14
// 0045e823: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e829: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045e82c: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e832: FSUBR float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045e835: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e838: ADD EAX,0x6
// 0045e83b: IMUL EAX,EAX,0x14
// 0045e83e: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e844: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045e847: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e84d: FADD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e850: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e853: ADD EAX,0x6
// 0045e856: IMUL EAX,EAX,0x14
// 0045e859: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e85f: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045e862: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e868: FSUBR float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e86b: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e86e: ADD EAX,0x6
// 0045e871: IMUL EAX,EAX,0x14
// 0045e874: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e87a: FLD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0045e87d: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e883: FADD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0045e886: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e889: ADD EAX,0x7
// 0045e88c: IMUL EAX,EAX,0x14
// 0045e88f: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 0045e895: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0045e898: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e89e: FADD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045e8a1: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e8a4: ADD EAX,0x7
// 0045e8a7: IMUL EAX,EAX,0x14
// 0045e8aa: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 0045e8b0: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 0045e8b3: FMUL float ptr [0x0061b5ba]
//   XREF to: 0061b5ba (READ)
// 0045e8b9: FSUBR float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045e8bc: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e8bf: ADD EAX,0x7
// 0045e8c2: IMUL EAX,EAX,0x14
// 0045e8c5: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 0045e8cb: CMP dword ptr [EBP + -0x8],0x42
//   XREF to: Stack[-0x18] (READ)
// 0045e8cf: JZ 0x0045e8db
//   XREF to: 0045e8db (CONDITIONAL_JUMP)
// 0045e8d1: CMP dword ptr [EBP + -0x8],0x49
//   XREF to: Stack[-0x18] (READ)
// 0045e8d5: JNZ 0x0045e9a4
//   XREF to: 0045e9a4 (CONDITIONAL_JUMP)
// 0045e8db: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045e8db
//   XREF to: Stack[-0x14] (READ)
// 0045e8de: ADD EAX,0x4
// 0045e8e1: PUSH EAX
// 0045e8e2: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e8e5: ADD EAX,0x5
// 0045e8e8: PUSH EAX
// 0045e8e9: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e8ec: INC EAX
// 0045e8ed: PUSH EAX
// 0045e8ee: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e8f1: PUSH EAX
// 0045e8f2: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045e8f7: ADD ESP,0x10
// 0045e8fa: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e8fd: ADD EAX,0x5
// 0045e900: PUSH EAX
// 0045e901: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e904: ADD EAX,0x6
// 0045e907: PUSH EAX
// 0045e908: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e90b: ADD EAX,0x2
// 0045e90e: PUSH EAX
// 0045e90f: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e912: INC EAX
// 0045e913: PUSH EAX
// 0045e914: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045e919: ADD ESP,0x10
// 0045e91c: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e91f: ADD EAX,0x6
// 0045e922: PUSH EAX
// 0045e923: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e926: ADD EAX,0x7
// 0045e929: PUSH EAX
// 0045e92a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e92d: ADD EAX,0x3
// 0045e930: PUSH EAX
// 0045e931: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e934: ADD EAX,0x2
// 0045e937: PUSH EAX
// 0045e938: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045e93d: ADD ESP,0x10
// 0045e940: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e943: ADD EAX,0x7
// 0045e946: PUSH EAX
// 0045e947: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e94a: ADD EAX,0x4
// 0045e94d: PUSH EAX
// 0045e94e: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e951: PUSH EAX
// 0045e952: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e955: ADD EAX,0x3
// 0045e958: PUSH EAX
// 0045e959: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045e95e: ADD ESP,0x10
// 0045e961: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e964: ADD EAX,0x7
// 0045e967: PUSH EAX
// 0045e968: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e96b: ADD EAX,0x6
// 0045e96e: PUSH EAX
// 0045e96f: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e972: ADD EAX,0x5
// 0045e975: PUSH EAX
// 0045e976: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e979: ADD EAX,0x4
// 0045e97c: PUSH EAX
// 0045e97d: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045e982: ADD ESP,0x10
// 0045e985: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e988: PUSH EAX
// 0045e989: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e98c: INC EAX
// 0045e98d: PUSH EAX
// 0045e98e: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e991: ADD EAX,0x2
// 0045e994: PUSH EAX
// 0045e995: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e998: ADD EAX,0x3
// 0045e99b: PUSH EAX
// 0045e99c: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045e9a1: ADD ESP,0x10
// 0045e9a4: CMP dword ptr [EBP + -0x8],0x42
//   Label: LAB_0045e9a4
//   XREF to: Stack[-0x18] (READ)
// 0045e9a8: JZ 0x0045e9b4
//   XREF to: 0045e9b4 (CONDITIONAL_JUMP)
// 0045e9aa: CMP dword ptr [EBP + -0x8],0x4f
//   XREF to: Stack[-0x18] (READ)
// 0045e9ae: JNZ 0x0045ea7d
//   XREF to: 0045ea7d (CONDITIONAL_JUMP)
// 0045e9b4: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045e9b4
//   XREF to: Stack[-0x14] (READ)
// 0045e9b7: ADD EAX,0x5
// 0045e9ba: PUSH EAX
// 0045e9bb: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e9be: ADD EAX,0x4
// 0045e9c1: PUSH EAX
// 0045e9c2: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e9c5: PUSH EAX
// 0045e9c6: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e9c9: INC EAX
// 0045e9ca: PUSH EAX
// 0045e9cb: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045e9d0: ADD ESP,0x10
// 0045e9d3: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e9d6: ADD EAX,0x6
// 0045e9d9: PUSH EAX
// 0045e9da: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e9dd: ADD EAX,0x5
// 0045e9e0: PUSH EAX
// 0045e9e1: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e9e4: INC EAX
// 0045e9e5: PUSH EAX
// 0045e9e6: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e9e9: ADD EAX,0x2
// 0045e9ec: PUSH EAX
// 0045e9ed: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045e9f2: ADD ESP,0x10
// 0045e9f5: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e9f8: ADD EAX,0x7
// 0045e9fb: PUSH EAX
// 0045e9fc: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045e9ff: ADD EAX,0x6
// 0045ea02: PUSH EAX
// 0045ea03: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea06: ADD EAX,0x2
// 0045ea09: PUSH EAX
// 0045ea0a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea0d: ADD EAX,0x3
// 0045ea10: PUSH EAX
// 0045ea11: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045ea16: ADD ESP,0x10
// 0045ea19: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea1c: ADD EAX,0x4
// 0045ea1f: PUSH EAX
// 0045ea20: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea23: ADD EAX,0x7
// 0045ea26: PUSH EAX
// 0045ea27: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea2a: ADD EAX,0x3
// 0045ea2d: PUSH EAX
// 0045ea2e: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea31: PUSH EAX
// 0045ea32: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045ea37: ADD ESP,0x10
// 0045ea3a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea3d: ADD EAX,0x4
// 0045ea40: PUSH EAX
// 0045ea41: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea44: ADD EAX,0x5
// 0045ea47: PUSH EAX
// 0045ea48: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea4b: ADD EAX,0x6
// 0045ea4e: PUSH EAX
// 0045ea4f: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea52: ADD EAX,0x7
// 0045ea55: PUSH EAX
// 0045ea56: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045ea5b: ADD ESP,0x10
// 0045ea5e: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea61: ADD EAX,0x3
// 0045ea64: PUSH EAX
// 0045ea65: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea68: ADD EAX,0x2
// 0045ea6b: PUSH EAX
// 0045ea6c: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea6f: INC EAX
// 0045ea70: PUSH EAX
// 0045ea71: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045ea74: PUSH EAX
// 0045ea75: CALL shape_design.c_createQuadPolygon_FUN_0045df60
//   XREF to: 0045df60 (UNCONDITIONAL_CALL)
// 0045ea7a: ADD ESP,0x10
// 0045ea7d: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_0045ea7d
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0045ea82: MOV ESP,EBP
//   Label: LAB_0045ea82
// 0045ea84: POP EBP
// 0045ea85: POP EDI
// 0045ea86: POP ESI
// 0045ea87: POP EBX
// 0045ea88: RET

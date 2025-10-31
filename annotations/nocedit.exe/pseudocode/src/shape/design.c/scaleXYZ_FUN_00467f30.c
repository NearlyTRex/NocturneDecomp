// Name: shape_design.c_scaleXYZ_FUN_00467f30
// Address: 00467f30
// Address Range: [[00467f30, 00467ff3]]
// Convention: __cdecl
// Signature: void shape_design.c_scaleXYZ_FUN_00467f30(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f736 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_X_Y_Z_scales_0061cbba
//   TerminatedCString s_f_f_f_0061cbd0
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
// Function calls:
//   crt_stdio.c_sscanf_FUN_0060013c
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl shape_design_c_scaleXYZ_FUN_00467f30(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar4 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff90,0x32,0,0,"Enter X,Y,Z scales : ");
  iVar2 = -1;
  pcVar3 = &stack0xffffff90;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if ((iVar2 != -2) &&
     (iVar2 = crt_stdio_c_sscanf_FUN_0060013c(&stack0xffffff90,"%f,%f,%f",&local_1c),
     iVar2 == 3)) {
    for (local_20 = 0; local_20 < g_VertexCount; local_20 = local_20 + 1) {
      g_LoadedVertices[local_20].vertex.x = g_LoadedVertices[local_20].vertex.x * local_1c;
      g_LoadedVertices[local_20].vertex.y = g_LoadedVertices[local_20].vertex.y * local_18;
      g_LoadedVertices[local_20].vertex.z = g_LoadedVertices[local_20].vertex.z * local_14;
    }
  }
  return;
}


// Assembly code:
// 00467f30: PUSH EBX
//   Label: shape_design.c_scaleXYZ_FUN_00467f30
// 00467f31: PUSH ESI
// 00467f32: PUSH EDI
// 00467f33: PUSH EBP
// 00467f34: MOV EBP,ESP
// 00467f36: SUB ESP,0x60
// 00467f3c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00467f41: MOV ECX,0x61cbba
//   XREF to: 0061cbba (DATA)
// 00467f46: PUSH ECX
//   XREF to: 0061cbba (DATA)
// 00467f47: PUSH 0x0
// 00467f49: PUSH 0x0
// 00467f4b: PUSH 0x32
// 00467f4d: LEA ECX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 00467f50: PUSH ECX
// 00467f51: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00467f56: ADD ESP,0x14
// 00467f59: LEA EDI,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 00467f5c: SUB ECX,ECX
// 00467f5e: DEC ECX
// 00467f5f: XOR EAX,EAX
// 00467f61: SCASB.REPNE ES:EDI
// 00467f63: NOT ECX
// 00467f65: DEC ECX
// 00467f66: TEST ECX,ECX
// 00467f68: JNZ 0x00467f6f
//   XREF to: 00467f6f (CONDITIONAL_JUMP)
// 00467f6a: JMP 0x00467fed
//   XREF to: 00467fed (UNCONDITIONAL_JUMP)
// 00467f6f: LEA EAX,[EBP + -0x4]
//   Label: LAB_00467f6f
//   XREF to: Stack[-0x14] (DATA)
// 00467f72: PUSH EAX
// 00467f73: LEA EAX,[EBP + -0x8]
//   XREF to: Stack[-0x18] (DATA)
// 00467f76: PUSH EAX
// 00467f77: LEA EAX,[EBP + -0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 00467f7a: PUSH EAX
// 00467f7b: MOV EAX,0x61cbd0
//   XREF to: 0061cbd0 (DATA)
// 00467f80: PUSH EAX
//   XREF to: 0061cbd0 (DATA)
// 00467f81: LEA EAX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 00467f84: PUSH EAX
// 00467f85: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00467f8a: ADD ESP,0x14
// 00467f8d: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00467f90: CMP dword ptr [EBP + -0x10],0x3
//   XREF to: Stack[-0x20] (READ)
// 00467f94: JZ 0x00467f98
//   XREF to: 00467f98 (CONDITIONAL_JUMP)
// 00467f96: JMP 0x00467fed
//   XREF to: 00467fed (UNCONDITIONAL_JUMP)
// 00467f98: MOV dword ptr [EBP + -0x10],0x0
//   Label: LAB_00467f98
//   XREF to: Stack[-0x20] (WRITE)
// 00467f9f: JMP 0x00467fa7
//   XREF to: 00467fa7 (UNCONDITIONAL_JUMP)
// 00467fa1: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00467fa1
//   XREF to: Stack[-0x20] (READ)
// 00467fa4: INC dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 00467fa7: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_00467fa7
//   XREF to: Stack[-0x20] (READ)
// 00467faa: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00467fb0: JGE 0x00467fed
//   XREF to: 00467fed (CONDITIONAL_JUMP)
// 00467fb2: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 00467fb6: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00467fbc: FMUL float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00467fbf: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00467fc5: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 00467fc9: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00467fcf: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00467fd2: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00467fd8: IMUL EAX,dword ptr [EBP + -0x10],0x14
//   XREF to: Stack[-0x20] (READ)
// 00467fdc: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00467fe2: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00467fe5: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00467feb: JMP 0x00467fa1
//   XREF to: 00467fa1 (UNCONDITIONAL_JUMP)
// 00467fed: MOV ESP,EBP
//   Label: LAB_00467fed
// 00467fef: POP EBP
// 00467ff0: POP EDI
// 00467ff1: POP ESI
// 00467ff2: POP EBX
// 00467ff3: RET

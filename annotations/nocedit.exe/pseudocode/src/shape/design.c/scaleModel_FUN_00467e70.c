// Name: shape_design.c_scaleModel_FUN_00467e70
// Address: 00467e70
// Address Range: [[00467e70, 00467f24]]
// Convention: __cdecl
// Signature: void shape_design.c_scaleModel_FUN_00467e70(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f6b9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_in_scale_multiplie_0061cb9d
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
// Function calls:
//   crt_string.c_strtod_FUN_005ff0f3
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl shape_design_c_scaleModel_FUN_00467e70(void)

{
  char cVar1;
  float fVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  undefined4 *****pppppuVar4;
  byte bVar5;
  double dVar6;
  undefined4 ****local_68;
  char *in_stack_ffffff9c;
  int local_18;
  
  bVar5 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            ((char *)&local_68,0x14,0,0,"Enter in scale multiplier : ");
  iVar3 = -1;
  pppppuVar4 = &local_68;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *(char *)pppppuVar4;
    pppppuVar4 = (undefined4 *****)((int)pppppuVar4 + (uint)bVar5 * -2 + 1);
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    local_68 = &local_68;
    dVar6 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff9c);
    fVar2 = (float)dVar6;
    for (local_18 = 0; local_18 < g_VertexCount; local_18 = local_18 + 1) {
      g_LoadedVertices[local_18].vertex.x = g_LoadedVertices[local_18].vertex.x * fVar2;
      g_LoadedVertices[local_18].vertex.y = g_LoadedVertices[local_18].vertex.y * fVar2;
      g_LoadedVertices[local_18].vertex.z = g_LoadedVertices[local_18].vertex.z * fVar2;
    }
  }
  return;
}


// Assembly code:
// 00467e70: PUSH EBX
//   Label: shape_design.c_scaleModel_FUN_00467e70
// 00467e71: PUSH ESI
// 00467e72: PUSH EDI
// 00467e73: PUSH EBP
// 00467e74: MOV EBP,ESP
// 00467e76: SUB ESP,0x60
// 00467e7c: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00467e81: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00467e86: MOV ECX,0x61cb9d
//   XREF to: 0061cb9d (DATA)
// 00467e8b: PUSH ECX
//   XREF to: 0061cb9d (DATA)
// 00467e8c: PUSH 0x0
// 00467e8e: PUSH 0x0
// 00467e90: PUSH 0x14
// 00467e92: LEA ECX,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 00467e95: PUSH ECX
// 00467e96: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00467e9b: ADD ESP,0x14
// 00467e9e: LEA EDI,[EBP + -0x58]
//   XREF to: Stack[-0x68] (DATA)
// 00467ea1: SUB ECX,ECX
// 00467ea3: DEC ECX
// 00467ea4: XOR EAX,EAX
// 00467ea6: SCASB.REPNE ES:EDI
// 00467ea8: NOT ECX
// 00467eaa: DEC ECX
// 00467eab: TEST ECX,ECX
// 00467ead: JNZ 0x00467eb1
//   XREF to: 00467eb1 (CONDITIONAL_JUMP)
// 00467eaf: JMP 0x00467f1e
//   XREF to: 00467f1e (UNCONDITIONAL_JUMP)
// 00467eb1: LEA EAX,[EBP + -0x58]
//   Label: LAB_00467eb1
//   XREF to: Stack[-0x68] (DATA)
// 00467eb4: PUSH EAX
// 00467eb5: CALL crt_string.c_strtod_FUN_005ff0f3
//   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)
// 00467eba: MOV dword ptr [EBP + -0x60],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00467ebd: MOV dword ptr [EBP + -0x5c],EDX
//   XREF to: Stack[-0x6c] (WRITE)
// 00467ec0: FLD double ptr [EBP + -0x60]
//   XREF to: Stack[-0x70] (READ)
// 00467ec3: ADD ESP,0x4
// 00467ec6: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 00467ec9: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00467ed0: JMP 0x00467ed8
//   XREF to: 00467ed8 (UNCONDITIONAL_JUMP)
// 00467ed2: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00467ed2
//   XREF to: Stack[-0x18] (READ)
// 00467ed5: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00467ed8: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00467ed8
//   XREF to: Stack[-0x18] (READ)
// 00467edb: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00467ee1: JGE 0x00467f1e
//   XREF to: 00467f1e (CONDITIONAL_JUMP)
// 00467ee3: IMUL EAX,dword ptr [EBP + -0x8],0x14
//   XREF to: Stack[-0x18] (READ)
// 00467ee7: FLD float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00467eed: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00467ef0: FSTP float ptr [EAX + 0x162640c]
//   XREF to: 0162640c (DATA)
// 00467ef6: IMUL EAX,dword ptr [EBP + -0x8],0x14
//   XREF to: Stack[-0x18] (READ)
// 00467efa: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00467f00: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00467f03: FSTP float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00467f09: IMUL EAX,dword ptr [EBP + -0x8],0x14
//   XREF to: Stack[-0x18] (READ)
// 00467f0d: FLD float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00467f13: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00467f16: FSTP float ptr [EAX + 0x1626414]
//   XREF to: 01626414 (DATA)
// 00467f1c: JMP 0x00467ed2
//   XREF to: 00467ed2 (UNCONDITIONAL_JUMP)
// 00467f1e: MOV ESP,EBP
//   Label: LAB_00467f1e
// 00467f20: POP EBP
// 00467f21: POP EDI
// 00467f22: POP ESI
// 00467f23: POP EBX
// 00467f24: RET

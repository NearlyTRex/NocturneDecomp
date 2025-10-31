// Name: shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0
// Address: 0045d1d0
// Address Range: [[0045d1d0, 0045d2fb]]
// Convention: __cdecl
// Signature: void shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0(int polygon_index, int * color_value)
// Cross-references:
//   shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920 (0045d920) at 0045d9a7 [UNCONDITIONAL_CALL]
// Globals:
//   float g_OverlayNormalScale = 65535
//   float g_OverlayPlaneDistanceScale = 256
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99b8
//   undefined4 DAT_016e99bc
//   undefined4 DAT_016e99c0
//   undefined4 DAT_016e99c4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e9a88
//   int g_AntiAliasingEnabled
//   int g_CurrentPartIndex
//   int g_WireframeMode
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   shape_design.c_renderPolygonWireframe_FUN_0045d300
//   shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470

#include "nocturne.h"

void __cdecl
shape_design_c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0(int polygon_index,int *color_value)

{
  undefined4 in_EDX;
  BADSPACEBASE *in_ESP;
  double dVar1;
  int local_6c;
  uint local_68;
  uint auStack_54 [16];
  int local_14;
  
  if (((g_WireframeMode == 0) || (g_CurrentPartIndex == -1)) ||
     (g_ModelPolygonData[polygon_index].part_assignment == g_CurrentPartIndex)) {
    local_68 = g_ModelPolygonData[polygon_index].vertex_indices_count;
    dVar1 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,polygon_index * 0x184));
    local_6c = 0x45d24d;
    dVar1 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),polygon_index * 0x184));
    local_68 = 0x45d268;
    dVar1 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),polygon_index * 0x184));
    crt_math_c_round_FUN_005fe6b0
              ((double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),polygon_index * 0x184));
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[polygon_index].vertex_indices_count;
        local_14 = local_14 + 1) {
      auStack_54[local_14] = g_ModelPolygonData[polygon_index].vertex_indices[local_14];
    }
    if (g_AntiAliasingEnabled == 0) {
      shape_design_c_renderPolygonWireframe_FUN_0045d300((SMRGLHeaderPrimitive *)&local_6c);
    }
    else {
      local_68 = 0x45d2f2;
      shape_design_c_renderPolygonWireframeAntialiased_FUN_0045d470
                ((SMRGLHeaderPrimitive *)&local_6c,(int)color_value);
    }
  }
  return;
}


// Assembly code:
// 0045d1d0: PUSH EBX
//   Label: shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0
// 0045d1d1: PUSH ESI
// 0045d1d2: PUSH EDI
// 0045d1d3: PUSH EBP
// 0045d1d4: MOV EBP,ESP
// 0045d1d6: SUB ESP,0x5c
// 0045d1dc: CMP dword ptr [0x01e66158],0x0
//   XREF to: 01e66158 (READ)
// 0045d1e3: JZ 0x0045d1ee
//   XREF to: 0045d1ee (CONDITIONAL_JUMP)
// 0045d1e5: CMP dword ptr [0x01e6614c],-0x1
//   XREF to: 01e6614c (READ)
// 0045d1ec: JNZ 0x0045d1f0
//   XREF to: 0045d1f0 (CONDITIONAL_JUMP)
// 0045d1ee: JMP 0x0045d20a
//   Label: LAB_0045d1ee
//   XREF to: 0045d20a (UNCONDITIONAL_JUMP)
// 0045d1f0: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045d1f0
//   XREF to: Stack[0x4] (READ)
// 0045d1f7: MOV EAX,dword ptr [EAX + 0x16e9a88]
//   XREF to: 016e9a88 (DATA)
// 0045d1fd: CMP EAX,dword ptr [0x01e6614c]
//   XREF to: 01e6614c (READ)
// 0045d203: JZ 0x0045d20a
//   XREF to: 0045d20a (CONDITIONAL_JUMP)
// 0045d205: JMP 0x0045d2f5
//   XREF to: 0045d2f5 (UNCONDITIONAL_JUMP)
// 0045d20a: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045d20a
//   XREF to: Stack[0x4] (READ)
// 0045d211: MOV EAX,dword ptr [EAX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045d217: MOV dword ptr [EBP + -0x58],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 0045d21a: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045d221: FLD float ptr [EAX + 0x16e99b8]
//   XREF to: 016e99b8 (DATA)
// 0045d227: FMUL float ptr [0x0061b3fe]
//   XREF to: 0061b3fe (READ)
// 0045d22d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045d232: FISTP dword ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 0045d235: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045d23c: FLD float ptr [EAX + 0x16e99bc]
//   XREF to: 016e99bc (DATA)
// 0045d242: FMUL float ptr [0x0061b3fe]
//   XREF to: 0061b3fe (READ)
// 0045d248: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045d24d: FISTP dword ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (WRITE)
// 0045d250: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045d257: FLD float ptr [EAX + 0x16e99c0]
//   XREF to: 016e99c0 (DATA)
// 0045d25d: FMUL float ptr [0x0061b3fe]
//   XREF to: 0061b3fe (READ)
// 0045d263: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045d268: FISTP dword ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (WRITE)
// 0045d26b: IMUL EAX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045d272: FLD float ptr [EAX + 0x16e99c4]
//   XREF to: 016e99c4 (DATA)
// 0045d278: FMUL float ptr [0x0061b3fe]
//   XREF to: 0061b3fe (READ)
// 0045d27e: FMUL float ptr [0x0061b402]
//   XREF to: 0061b402 (READ)
// 0045d284: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045d289: FISTP dword ptr [EBP + -0x48]
//   XREF to: Stack[-0x58] (WRITE)
// 0045d28c: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0045d293: JMP 0x0045d29b
//   XREF to: 0045d29b (UNCONDITIONAL_JUMP)
// 0045d295: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045d295
//   XREF to: Stack[-0x14] (READ)
// 0045d298: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045d29b: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   Label: LAB_0045d29b
//   XREF to: Stack[0x4] (READ)
// 0045d2a2: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d2a5: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045d2ab: JGE 0x0045d2ce
//   XREF to: 0045d2ce (CONDITIONAL_JUMP)
// 0045d2ad: IMUL EDX,dword ptr [EBP + 0x14],0x184
//   XREF to: Stack[0x4] (READ)
// 0045d2b4: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d2b7: SHL EAX,0x2
// 0045d2ba: ADD EAX,EDX
// 0045d2bc: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045d2bf: SHL EDX,0x2
// 0045d2c2: MOV EAX,dword ptr [EAX + 0x16e99c8]
//   XREF to: 016e99c8 (DATA)
// 0045d2c8: MOV dword ptr [EDX + EBP*0x1 + -0x44],EAX
// 0045d2cc: JMP 0x0045d295
//   XREF to: 0045d295 (UNCONDITIONAL_JUMP)
// 0045d2ce: CMP dword ptr [0x01e528c4],0x0
//   Label: LAB_0045d2ce
//   XREF to: 01e528c4 (READ)
// 0045d2d5: JNZ 0x0045d2e5
//   XREF to: 0045d2e5 (CONDITIONAL_JUMP)
// 0045d2d7: LEA EAX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045d2da: PUSH EAX
// 0045d2db: CALL shape_design.c_renderPolygonWireframe_FUN_0045d300
//   XREF to: 0045d300 (UNCONDITIONAL_CALL)
// 0045d2e0: ADD ESP,0x4
// 0045d2e3: JMP 0x0045d2f5
//   XREF to: 0045d2f5 (UNCONDITIONAL_JUMP)
// 0045d2e5: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0045d2e5
//   XREF to: Stack[0x8] (READ)
// 0045d2e8: PUSH EAX
// 0045d2e9: LEA EAX,[EBP + -0x5c]
//   XREF to: Stack[-0x6c] (DATA)
// 0045d2ec: PUSH EAX
// 0045d2ed: CALL shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470
//   XREF to: 0045d470 (UNCONDITIONAL_CALL)
// 0045d2f2: ADD ESP,0x8
// 0045d2f5: MOV ESP,EBP
//   Label: LAB_0045d2f5
// 0045d2f7: POP EBP
// 0045d2f8: POP EDI
// 0045d2f9: POP ESI
// 0045d2fa: POP EBX
// 0045d2fb: RET

// Name: shape_design.c_clampAndTransformUVCoordinates_FUN_0045f080
// Address: 0045f080
// Address Range: [[0045f080, 0045f1c3]]
// Convention: __cdecl
// Signature: void shape_design.c_clampAndTransformUVCoordinates_FUN_0045f080(void)
// Cross-references:
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f795 [UNCONDITIONAL_CALL]
// Globals:
//   double g_UVScaleFactorPrimary = 0.00390625
//   double g_UVScaleFactorSecondary = 248
//   double g_UVOffsetBase = 4
//   double g_UVClampMinU = 252
//   double g_UVClampMinV = 4
//   double g_UVClampMaxV = 252
//   int g_PolygonCount
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a48

#include "nocturne.h"

void __cdecl shape_design_c_clampAndTransformUVCoordinates_FUN_0045f080(void)

{
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  for (local_18 = 0; local_18 < g_PolygonCount; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[local_18].vertex_indices_count;
        local_14 = local_14 + 1) {
      local_20 = (float)g_ModelPolygonData[local_18].vertex_indices[local_14 + 0x10] *
                 (float)g_UVScaleFactorPrimary * (float)g_UVScaleFactorSecondary +
                 (float)g_UVOffsetBase;
      local_1c = g_ModelPolygonData[local_18].uv_coordinates[local_14] *
                 (float)g_UVScaleFactorPrimary * (float)g_UVScaleFactorSecondary +
                 (float)g_UVOffsetBase;
      if (local_20 < (float)g_UVOffsetBase) {
        local_20 = 4.0;
      }
      if ((float)g_UVClampMinU < local_20) {
        local_20 = 252.0;
      }
      if (local_1c < (float)g_UVClampMinV) {
        local_1c = 4.0;
      }
      if ((float)g_UVClampMaxV < local_1c) {
        local_1c = 252.0;
      }
      g_ModelPolygonData[local_18].vertex_indices[local_14 + 0x10] = (uint)local_20;
      g_ModelPolygonData[local_18].uv_coordinates[local_14] = local_1c;
    }
  }
  return;
}


// Assembly code:
// 0045f080: PUSH EBX
//   Label: shape_design.c_clampAndTransformUVCoordinates_FUN_0045f080
// 0045f081: PUSH ESI
// 0045f082: PUSH EDI
// 0045f083: PUSH EBP
// 0045f084: MOV EBP,ESP
// 0045f086: SUB ESP,0x10
// 0045f08c: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0045f093: JMP 0x0045f09b
//   XREF to: 0045f09b (UNCONDITIONAL_JUMP)
// 0045f095: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045f095
//   XREF to: Stack[-0x18] (READ)
// 0045f098: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045f09b: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045f09b
//   XREF to: Stack[-0x18] (READ)
// 0045f09e: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0045f0a4: JGE 0x0045f1bd
//   XREF to: 0045f1bd (CONDITIONAL_JUMP)
// 0045f0aa: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0045f0b1: JMP 0x0045f0b9
//   XREF to: 0045f0b9 (UNCONDITIONAL_JUMP)
// 0045f0b3: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0045f0b3
//   XREF to: Stack[-0x14] (READ)
// 0045f0b6: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0045f0b9: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   Label: LAB_0045f0b9
//   XREF to: Stack[-0x18] (READ)
// 0045f0c0: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045f0c3: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0045f0c9: JGE 0x0045f1b8
//   XREF to: 0045f1b8 (CONDITIONAL_JUMP)
// 0045f0cf: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0045f0d6: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045f0d9: SHL EAX,0x2
// 0045f0dc: ADD EAX,EDX
// 0045f0de: MOV EAX,dword ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0045f0e4: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0045f0e7: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0045f0ee: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045f0f1: SHL EAX,0x2
// 0045f0f4: ADD EAX,EDX
// 0045f0f6: MOV EAX,dword ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0045f0fc: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0045f0ff: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045f102: FMUL double ptr [0x0061b6de]
//   XREF to: 0061b6de (READ)
// 0045f108: FMUL double ptr [0x0061b6e6]
//   XREF to: 0061b6e6 (READ)
// 0045f10e: FADD double ptr [0x0061b6ee]
//   XREF to: 0061b6ee (READ)
// 0045f114: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045f117: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045f11a: FMUL double ptr [0x0061b6de]
//   XREF to: 0061b6de (READ)
// 0045f120: FMUL double ptr [0x0061b6e6]
//   XREF to: 0061b6e6 (READ)
// 0045f126: FADD double ptr [0x0061b6ee]
//   XREF to: 0061b6ee (READ)
// 0045f12c: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045f12f: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045f132: FCOMP double ptr [0x0061b6ee]
//   XREF to: 0061b6ee (READ)
// 0045f138: FNSTSW AX
// 0045f13a: SAHF
// 0045f13b: JNC 0x0045f144
//   XREF to: 0045f144 (CONDITIONAL_JUMP)
// 0045f13d: MOV dword ptr [EBP + -0x10],0x40800000
//   XREF to: Stack[-0x20] (WRITE)
// 0045f144: FLD float ptr [EBP + -0x10]
//   Label: LAB_0045f144
//   XREF to: Stack[-0x20] (READ)
// 0045f147: FCOMP double ptr [0x0061b6f6]
//   XREF to: 0061b6f6 (READ)
// 0045f14d: FNSTSW AX
// 0045f14f: SAHF
// 0045f150: JBE 0x0045f159
//   XREF to: 0045f159 (CONDITIONAL_JUMP)
// 0045f152: MOV dword ptr [EBP + -0x10],0x437c0000
//   XREF to: Stack[-0x20] (WRITE)
// 0045f159: FLD float ptr [EBP + -0xc]
//   Label: LAB_0045f159
//   XREF to: Stack[-0x1c] (READ)
// 0045f15c: FCOMP double ptr [0x0061b6fe]
//   XREF to: 0061b6fe (READ)
// 0045f162: FNSTSW AX
// 0045f164: SAHF
// 0045f165: JNC 0x0045f16e
//   XREF to: 0045f16e (CONDITIONAL_JUMP)
// 0045f167: MOV dword ptr [EBP + -0xc],0x40800000
//   XREF to: Stack[-0x1c] (WRITE)
// 0045f16e: FLD float ptr [EBP + -0xc]
//   Label: LAB_0045f16e
//   XREF to: Stack[-0x1c] (READ)
// 0045f171: FCOMP double ptr [0x0061b706]
//   XREF to: 0061b706 (READ)
// 0045f177: FNSTSW AX
// 0045f179: SAHF
// 0045f17a: JBE 0x0045f183
//   XREF to: 0045f183 (CONDITIONAL_JUMP)
// 0045f17c: MOV dword ptr [EBP + -0xc],0x437c0000
//   XREF to: Stack[-0x1c] (WRITE)
// 0045f183: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   Label: LAB_0045f183
//   XREF to: Stack[-0x18] (READ)
// 0045f18a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045f18d: SHL EAX,0x2
// 0045f190: ADD EDX,EAX
// 0045f192: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045f195: MOV dword ptr [EDX + 0x16e9a08],EAX
//   XREF to: 016e9a08 (DATA)
// 0045f19b: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0045f1a2: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045f1a5: SHL EAX,0x2
// 0045f1a8: ADD EDX,EAX
// 0045f1aa: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045f1ad: MOV dword ptr [EDX + 0x16e9a48],EAX
//   XREF to: 016e9a48 (DATA)
// 0045f1b3: JMP 0x0045f0b3
//   XREF to: 0045f0b3 (UNCONDITIONAL_JUMP)
// 0045f1b8: JMP 0x0045f095
//   Label: LAB_0045f1b8
//   XREF to: 0045f095 (UNCONDITIONAL_JUMP)
// 0045f1bd: MOV ESP,EBP
//   Label: LAB_0045f1bd
// 0045f1bf: POP EBP
// 0045f1c0: POP EDI
// 0045f1c1: POP ESI
// 0045f1c2: POP EBX
// 0045f1c3: RET

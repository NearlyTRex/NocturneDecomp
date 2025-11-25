// Name: shape_design.c_normalizeUVCoordinates_FUN_0046e340
// Address: 0046e340
// Address Range: [[0046e340, 0046e4c8]]
// Convention: __cdecl
// Signature: void shape_design.c_normalizeUVCoordinates_FUN_0046e340(void)
// Cross-references:
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a232 [UNCONDITIONAL_CALL]
// Globals:
//   double g_UvNormalizationFactor = 0.00390625
//   double g_UvOffsetMultiplier = 256
//   int g_PolygonCount
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a48
// Function calls:
//   crt_math.c_floor_FUN_005feb90

#include "nocturne.h"

void __cdecl shape_design_c_normalizeUVCoordinates_FUN_0046e340(void)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float10 in_ST0;
  double dVar3;
  float local_24;
  float local_20;
  int local_18;
  int local_14;
  
  for (local_18 = 0; local_18 < g_PolygonCount; local_18 = local_18 + 1) {
    local_24 = 1e+30;
    local_20 = 1e+30;
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[local_18].vertex_indices_count;
        local_14 = local_14 + 1) {
      if (g_ModelPolygonData[local_18].uv_u[local_14] < local_24) {
        local_24 = g_ModelPolygonData[local_18].uv_u[local_14];
      }
      if (g_ModelPolygonData[local_18].uv_v[local_14] < local_20) {
        local_20 = g_ModelPolygonData[local_18].uv_v[local_14];
      }
    }
    dVar3 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fVar1 = (float10)g_UvOffsetMultiplier;
    dVar3 = crt_math_c_floor_FUN_005feb90(dVar3);
    in_ST0 = (float10)dVar3;
    fVar2 = (float10)g_UvOffsetMultiplier;
    for (local_14 = 0; local_14 < (int)g_ModelPolygonData[local_18].vertex_indices_count;
        local_14 = local_14 + 1) {
      g_ModelPolygonData[local_18].uv_u[local_14] =
           g_ModelPolygonData[local_18].uv_u[local_14] -
           (float)((float10)(double)CONCAT44(extraout_EDX,extraout_EAX) * fVar1);
      g_ModelPolygonData[local_18].uv_v[local_14] =
           g_ModelPolygonData[local_18].uv_v[local_14] -
           (float)((float10)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00) * fVar2);
    }
  }
  return;
}


// Assembly code:
// 0046e340: PUSH EBX
//   Label: shape_design.c_normalizeUVCoordinates_FUN_0046e340
// 0046e341: PUSH ESI
// 0046e342: PUSH EDI
// 0046e343: PUSH EBP
// 0046e344: MOV EBP,ESP
// 0046e346: SUB ESP,0x1c
// 0046e34c: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0046e353: JMP 0x0046e358
//   XREF to: 0046e358 (UNCONDITIONAL_JUMP)
// 0046e355: INC dword ptr [EBP + -0x8]
//   Label: LAB_0046e355
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0046e358: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0046e358
//   XREF to: Stack[-0x18] (READ)
// 0046e35b: CMP EAX,dword ptr [0x016e990c]
//   XREF to: 016e990c (READ)
// 0046e361: JGE 0x0046e4c2
//   XREF to: 0046e4c2 (CONDITIONAL_JUMP)
// 0046e367: MOV dword ptr [EBP + -0x14],0x7149f2ca
//   XREF to: Stack[-0x24] (WRITE)
// 0046e36e: MOV dword ptr [EBP + -0x10],0x7149f2ca
//   XREF to: Stack[-0x20] (WRITE)
// 0046e375: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0046e37c: JMP 0x0046e381
//   XREF to: 0046e381 (UNCONDITIONAL_JUMP)
// 0046e37e: INC dword ptr [EBP + -0x4]
//   Label: LAB_0046e37e
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046e381: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   Label: LAB_0046e381
//   XREF to: Stack[-0x18] (READ)
// 0046e388: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e38b: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0046e391: JGE 0x0046e402
//   XREF to: 0046e402 (CONDITIONAL_JUMP)
// 0046e393: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0046e39a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e39d: SHL EAX,0x2
// 0046e3a0: ADD EAX,EDX
// 0046e3a2: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046e3a8: FCOMP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046e3ab: FNSTSW AX
// 0046e3ad: SAHF
// 0046e3ae: JNC 0x0046e3c8
//   XREF to: 0046e3c8 (CONDITIONAL_JUMP)
// 0046e3b0: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0046e3b7: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e3ba: SHL EAX,0x2
// 0046e3bd: ADD EAX,EDX
// 0046e3bf: MOV EAX,dword ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046e3c5: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0046e3c8: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   Label: LAB_0046e3c8
//   XREF to: Stack[-0x18] (READ)
// 0046e3cf: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e3d2: SHL EAX,0x2
// 0046e3d5: ADD EAX,EDX
// 0046e3d7: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046e3dd: FCOMP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046e3e0: FNSTSW AX
// 0046e3e2: SAHF
// 0046e3e3: JNC 0x0046e3fd
//   XREF to: 0046e3fd (CONDITIONAL_JUMP)
// 0046e3e5: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0046e3ec: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e3ef: SHL EAX,0x2
// 0046e3f2: ADD EAX,EDX
// 0046e3f4: MOV EAX,dword ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046e3fa: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0046e3fd: JMP 0x0046e37e
//   Label: LAB_0046e3fd
//   XREF to: 0046e37e (UNCONDITIONAL_JUMP)
// 0046e402: MOV dword ptr [EBP + -0xc],0x40800000
//   Label: LAB_0046e402
//   XREF to: Stack[-0x1c] (WRITE)
// 0046e409: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046e40c: FADD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e40f: FMUL double ptr [0x0061de66]
//   XREF to: 0061de66 (READ)
// 0046e415: SUB ESP,0x8
// 0046e418: FSTP double ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 0046e41b: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0046e420: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0046e423: MOV dword ptr [EBP + -0x18],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0046e426: FLD double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046e429: ADD ESP,0x8
// 0046e42c: FMUL double ptr [0x0061de6e]
//   XREF to: 0061de6e (READ)
// 0046e432: FSTP float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0046e435: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046e438: FADD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046e43b: FMUL double ptr [0x0061de66]
//   XREF to: 0061de66 (READ)
// 0046e441: SUB ESP,0x8
// 0046e444: FSTP double ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 0046e447: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0046e44c: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0046e44f: MOV dword ptr [EBP + -0x18],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0046e452: FLD double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046e455: ADD ESP,0x8
// 0046e458: FMUL double ptr [0x0061de6e]
//   XREF to: 0061de6e (READ)
// 0046e45e: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0046e461: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0046e468: JMP 0x0046e46d
//   XREF to: 0046e46d (UNCONDITIONAL_JUMP)
// 0046e46a: INC dword ptr [EBP + -0x4]
//   Label: LAB_0046e46a
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046e46d: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   Label: LAB_0046e46d
//   XREF to: Stack[-0x18] (READ)
// 0046e474: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e477: CMP EAX,dword ptr [EDX + 0x16e99b4]
//   XREF to: 016e99b4 (DATA)
// 0046e47d: JGE 0x0046e4bd
//   XREF to: 0046e4bd (CONDITIONAL_JUMP)
// 0046e47f: IMUL EDX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0046e486: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e489: SHL EAX,0x2
// 0046e48c: ADD EAX,EDX
// 0046e48e: FLD float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046e494: FSUB float ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046e497: FSTP float ptr [EAX + 0x16e9a08]
//   XREF to: 016e9a08 (DATA)
// 0046e49d: IMUL EAX,dword ptr [EBP + -0x8],0x184
//   XREF to: Stack[-0x18] (READ)
// 0046e4a4: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e4a7: SHL EDX,0x2
// 0046e4aa: ADD EAX,EDX
// 0046e4ac: FLD float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046e4b2: FSUB float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046e4b5: FSTP float ptr [EAX + 0x16e9a48]
//   XREF to: 016e9a48 (DATA)
// 0046e4bb: JMP 0x0046e46a
//   XREF to: 0046e46a (UNCONDITIONAL_JUMP)
// 0046e4bd: JMP 0x0046e355
//   Label: LAB_0046e4bd
//   XREF to: 0046e355 (UNCONDITIONAL_JUMP)
// 0046e4c2: MOV ESP,EBP
//   Label: LAB_0046e4c2
// 0046e4c4: POP EBP
// 0046e4c5: POP EDI
// 0046e4c6: POP ESI
// 0046e4c7: POP EBX
// 0046e4c8: RET

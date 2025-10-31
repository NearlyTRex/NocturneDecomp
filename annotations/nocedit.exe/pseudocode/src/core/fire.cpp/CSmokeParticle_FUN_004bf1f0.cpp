// Name: core_fire.cpp_CSmokeParticle_FUN_004bf1f0
// Address: 004bf1f0
// Address Range: [[004bf1f0, 004bf2d2]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CSmokeParticle_FUN_004bf1f0(CSmokeParticle * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c72a7 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00629c03 = -65536
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonCamera* g_CurrentSceneCamera
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02d12db4
//   undefined4 DAT_02d12db8
//   undefined4 DAT_02d12dbc
//   undefined4 DAT_02d12dc0
//   undefined4 DAT_02d12dc4
//   undefined4 DAT_02d12dc8
//   undefined4 DAT_02d12dd0
//   undefined4 DAT_02d12dd4
//   undefined4 DAT_02d12dd8
//   undefined4 DAT_02d12ddc
//   undefined4 DAT_02d12de0
//   undefined4 DAT_02d12de4
//   undefined4 DAT_02d12de8
//   undefined4 DAT_02d12dec
//   undefined4 DAT_02d12df0
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fire_cpp_CSmokeParticle_FUN_004bf1f0(CSmokeParticle *this_ptr)

{
  undefined4 extraout_EAX;
  int iVar1;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  CMatrix3x3i *pCVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  int aiStackY_ffc [996];
  CVector3i *in_stack_ffffff98;
  int iStack_64;
  undefined4 local_60;
  float fStack_5c;
  float fStack_50;
  float fStack_44;
  int aiStack_3c [10];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  bVar5 = 0;
  _DAT_02d12dd0 = 4;
  _DAT_02d12dd4 = 0;
  _DAT_02d12dd8 = 0;
  _DAT_02d12ddc = 0;
  _DAT_02d12de0 = 0;
  _DAT_02d12de4 = 0;
  _DAT_02d12de8 = 1;
  _DAT_02d12dec = 2;
  _DAT_02d12df0 = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr,in_stack_ffffff98);
  DAT_02d12db4 = uStack_14;
  (&DAT_02d12db8)[(uint)bVar5 * -2] = (&uStack_10)[(uint)bVar5 * -2];
  (&DAT_02d12dbc)[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
       *(undefined4 *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  DAT_02d12db8 = 0;
  pCVar2 = &(g_CurrentSceneCamera->base).rotation_matrix;
  piVar3 = aiStack_3c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = pCVar2->m[0][0];
    pCVar2 = (CMatrix3x3i *)((int)pCVar2 + (uint)bVar5 * -8 + 4);
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
  }
  piVar3 = aiStack_3c;
  piVar4 = &stack0xffffff9c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  fVar6 = (float10)DOUBLE_00629c03;
  fVar7 = (float10)fStack_5c * fVar6;
  fVar8 = (float10)fStack_50 * fVar6;
  fVar6 = (float10)fStack_44 * fVar6;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  iStack_64 = 0x4bf2af;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  local_60 = 0x4bf2b6;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  _DAT_02d12dc0 = (int)ROUND(fVar7);
  _DAT_02d12dc4 = (int)ROUND(fVar8);
  _DAT_02d12dc8 = (int)ROUND(fVar6);
  return SUB84(dVar9,0);
}


// Assembly code:
// 004bf1f0: PUSH EBX
//   Label: core_fire.cpp_CSmokeParticle_FUN_004bf1f0
// 004bf1f1: PUSH ESI
// 004bf1f2: PUSH EDI
// 004bf1f3: SUB ESP,0x5c
// 004bf1f6: MOV EDX,0x4
// 004bf1fb: MOV EAX,0x1
// 004bf200: LEA ESI,[ESP + 0x50]
//   XREF to: Stack[-0x18] (DATA)
// 004bf204: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004bf20a: MOV EDI,0x2d12db4
//   XREF to: 02d12db4 (DATA)
// 004bf20f: XOR ECX,ECX
// 004bf211: MOV dword ptr [0x02d12dd0],EDX
//   XREF to: 02d12dd0 (WRITE)
// 004bf217: MOV dword ptr [0x02d12dd4],ECX
//   XREF to: 02d12dd4 (WRITE)
// 004bf21d: MOV dword ptr [0x02d12dd8],ECX
//   XREF to: 02d12dd8 (WRITE)
// 004bf223: MOV dword ptr [0x02d12ddc],ECX
//   XREF to: 02d12ddc (WRITE)
// 004bf229: MOV dword ptr [0x02d12de0],ECX
//   XREF to: 02d12de0 (WRITE)
// 004bf22f: MOV dword ptr [0x02d12de4],ECX
//   XREF to: 02d12de4 (WRITE)
// 004bf235: MOV [0x02d12de8],EAX
//   XREF to: 02d12de8 (WRITE)
// 004bf23a: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004bf23b: MOV EDX,0x2
// 004bf240: MOV ECX,0x3
// 004bf245: MOV dword ptr [0x02d12dec],EDX
//   XREF to: 02d12dec (WRITE)
// 004bf24b: MOV dword ptr [0x02d12df0],ECX
//   XREF to: 02d12df0 (WRITE)
// 004bf251: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
//   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)
// 004bf256: LEA ESI,[ESP + 0x54]
//   XREF to: Stack[-0x18] (DATA)
// 004bf25a: ADD ESP,0x4
// 004bf25d: MOVSD ES:EDI,ESI
//   XREF to: 02d12db4 (WRITE)
// 004bf25e: MOVSD ES:EDI,ESI
//   XREF to: 02d12db8 (WRITE)
// 004bf25f: MOVSD ES:EDI,ESI
//   XREF to: 02d12dbc (WRITE)
// 004bf260: XOR ESI,ESI
// 004bf262: MOV dword ptr [0x02d12db8],ESI
//   XREF to: 02d12db8 (WRITE)
// 004bf268: MOV ESI,dword ptr [0x00823a74]
//   XREF to: 00823a74 (READ)
// 004bf26e: MOV ECX,0xa
// 004bf273: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x40] (DATA)
// 004bf277: LEA ESI,[ESI + 0x10]
// 004bf27a: MOVSD.REP ES:EDI,ESI
// 004bf27c: MOV ECX,0xa
// 004bf281: MOV EDI,ESP
// 004bf283: LEA ESI,[ESP + 0x28]
//   XREF to: Stack[-0x40] (DATA)
// 004bf287: MOVSD.REP ES:EDI,ESI
// 004bf289: FLD double ptr [0x00629c03]
//   XREF to: 00629c03 (READ)
// 004bf28f: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 004bf293: FMUL ST1
// 004bf295: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 004bf299: FMUL ST2
// 004bf29b: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 004bf29f: FMULP ST3
// 004bf2a1: FXCH
// 004bf2a3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004bf2a8: FXCH
// 004bf2aa: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004bf2af: FXCH ST2
// 004bf2b1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004bf2b6: FXCH
// 004bf2b8: FISTP dword ptr [0x02d12dc0]
//   XREF to: 02d12dc0 (WRITE)
// 004bf2be: FXCH
// 004bf2c0: FISTP dword ptr [0x02d12dc4]
//   XREF to: 02d12dc4 (WRITE)
// 004bf2c6: FISTP dword ptr [0x02d12dc8]
//   XREF to: 02d12dc8 (WRITE)
// 004bf2cc: ADD ESP,0x5c
// 004bf2cf: POP EDI
// 004bf2d0: POP ESI
// 004bf2d1: POP EBX
// 004bf2d2: RET

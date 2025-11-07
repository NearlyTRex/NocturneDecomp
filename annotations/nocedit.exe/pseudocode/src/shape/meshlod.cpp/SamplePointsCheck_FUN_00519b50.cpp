// Name: shape_meshlod.cpp_SamplePointsCheck_FUN_00519b50
// Address: 00519b50
// Address Range: [[00519b50, 0051a026]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_SamplePointsCheck_FUN_00519b50()
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00518910 (00518910) at 00518f21 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_00637a5d
//   TerminatedCString s_Too_many_sample_points_00637a72
//   float FLOAT_00637a8d = 0.5
//   double DOUBLE_00637a95 = 0.5
//   double DOUBLE_00637a9d = 16
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f313ec
//   CVector3f[400] CVector3f_ARRAY_02f313f0
//   undefined4 CVector3f_ARRAY_02f313f0[0].y
//   undefined4 CVector3f_ARRAY_02f313f0[0].z
//   undefined4 DAT_02f313fc
//   undefined4 DAT_02f31400
//   undefined4 DAT_02f326b0
//   undefined4 DAT_02f326b0+4
//   undefined8 DAT_02f326b8
//   undefined4 DAT_02f326b8+4
//   undefined4 DAT_02f33334
// Function calls:
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   shape_meshlod.cpp_FUN_0051a030

#include "nocturne.h"

void shape_meshlod_cpp_SamplePointsCheck_FUN_00519b50
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               float param_5)

{
  int iVar1;
  int iVar2;
  CVector3f *extraout_EAX;
  CVector3f *pCVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  uint extraout_EDX_00;
  uint uVar5;
  undefined4 extraout_EDX_01;
  uint extraout_EDX_02;
  int iVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  CVector3f *point;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  int unaff_retaddr;
  float local_8c;
  float in_stack_ffffff78;
  float in_stack_ffffff7c;
  float in_stack_ffffff80;
  CBoundingBox3D local_7c;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50 [2];
  CVector3f local_34;
  int local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint uStack_14;
  
  if (400 < DAT_02f313ec) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0xd78;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many sample points!");
    param_2 = extraout_EDX_01;
  }
  if ((float *)&stack0x00000000 != &CVector3f_ARRAY_02f313f0[0xb].z) {
    local_8c = CVector3f_ARRAY_02f313f0[0].x;
    in_stack_ffffff78 = CVector3f_ARRAY_02f313f0[0].y;
    in_stack_ffffff7c = CVector3f_ARRAY_02f313f0[0].z;
  }
  pCVar3 = (CVector3f *)&stack0xffffff80;
  if ((CVector3f *)&stack0xffffff80 != CVector3f_ARRAY_02f313f0) {
    local_7c.min.x = CVector3f_ARRAY_02f313f0[0].y;
    local_7c.min.y = CVector3f_ARRAY_02f313f0[0].z;
    pCVar3 = (CVector3f *)CVector3f_ARRAY_02f313f0[0].z;
    in_stack_ffffff80 = CVector3f_ARRAY_02f313f0[0].x;
  }
  iVar9 = 0;
  if (0 < DAT_02f313ec) {
    iVar6 = 0;
    point = CVector3f_ARRAY_02f313f0;
    do {
      *(undefined4 *)((int)&DAT_02f326b0 + iVar6) = 0;
      iVar9 = iVar9 + 1;
      *(undefined4 *)((int)&DAT_02f326b0_4 + iVar6) = 0x3ff00000;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&local_8c,point);
      pCVar3 = extraout_EAX;
      param_2 = extraout_EDX;
      iVar6 = iVar6 + 8;
      point = point + 1;
    } while (iVar9 < DAT_02f313ec);
  }
  local_50[0].x = (float)((float10)local_8c + (float10)in_stack_ffffff80);
  fVar11 = (float10)FLOAT_00637a8d;
  local_50[0].y = (float)((float10)in_stack_ffffff78 + (float10)local_7c.min.x);
  fVar12 = ((float10)in_stack_ffffff78 + (float10)local_7c.min.x) * fVar11;
  local_50[0].z = (float)((float10)in_stack_ffffff7c + (float10)local_7c.min.y);
  fVar15 = ((float10)in_stack_ffffff7c + (float10)local_7c.min.y) * fVar11;
  local_7c.min.z = (float)(((float10)local_8c + (float10)in_stack_ffffff80) * fVar11);
  local_7c.max.x = (float)fVar12;
  fVar11 = (float10)DOUBLE_00637a95;
  fVar13 = (float10)DOUBLE_00637a9d;
  fVar14 = ((float10)local_7c.min.z + fVar11) * fVar13;
  fVar12 = (fVar12 + fVar11) * fVar13;
  local_7c.max.y = (float)fVar15;
  DAT_02f33334 = DAT_02f33334 + 1;
  fVar13 = fVar13 * (fVar15 + fVar11);
  dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(param_2,pCVar3));
  local_8c = 7.494825e-39;
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  dVar16 = crt_math_c_round_FUN_005fe6b0(dVar16);
  uVar4 = (uint)((ulonglong)dVar16 >> 0x20);
  local_24 = (float)(int)ROUND(fVar14);
  local_28 = (int)ROUND(fVar12);
  local_20 = (int)ROUND(fVar13);
  if ((((-1 < (int)local_24) && ((int)local_24 < 0x10)) && (-1 < local_28)) &&
     (((local_28 < 0x10 && (-1 < local_20)) && (local_20 < 0x10)))) {
    local_8c = local_24;
    shape_meshlod_cpp_FUN_0051a030();
    uVar4 = extraout_EDX_02;
  }
  local_18 = 1;
  while( true ) {
    iVar9 = local_20 - local_18;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    uStack_14 = local_20 + local_18;
    if (0xf < (int)uStack_14) {
      uStack_14 = 0xf;
    }
    iVar6 = (int)local_24 - local_18;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar7 = (int)local_24 + local_18;
    if (0xf < iVar7) {
      iVar7 = 0xf;
    }
    iVar8 = local_1c - local_18;
    if (iVar8 < 0) {
      uVar4 = 0;
      iVar8 = 0;
    }
    iVar10 = local_1c + local_18;
    if (0xf < iVar10) {
      iVar10 = 0xf;
    }
    iVar1 = iVar6;
    if (iVar9 <= (int)uStack_14) {
      do {
        for (; uVar4 = uStack_14, uStack_14 = uVar4, iVar2 = iVar8, iVar1 <= iVar7;
            iVar1 = iVar1 + 1) {
          for (; iVar2 <= iVar10; iVar2 = iVar2 + 1) {
            local_8c = param_5;
            shape_meshlod_cpp_FUN_0051a030();
          }
        }
        iVar9 = iVar9 + 1;
        iVar1 = iVar6;
      } while (iVar9 <= (int)uVar4);
    }
    if ((float *)&stack0x00000000 != &CVector3f_ARRAY_02f313f0[10].y) {
      local_7c.min.x = CVector3f_ARRAY_02f313f0[0].x;
      local_7c.min.y = CVector3f_ARRAY_02f313f0[0].y;
      local_7c.min.z = CVector3f_ARRAY_02f313f0[0].z;
    }
    if ((float *)&stack0x00000000 != &CVector3f_ARRAY_02f313f0[9].y) {
      local_7c.max.x = CVector3f_ARRAY_02f313f0[0].x;
      local_7c.max.y = CVector3f_ARRAY_02f313f0[0].y;
      local_7c.max.z = CVector3f_ARRAY_02f313f0[0].z;
    }
    iVar9 = 0;
    if (0 < DAT_02f313ec) {
      iVar6 = 0;
      pCVar3 = CVector3f_ARRAY_02f313f0;
      do {
        local_58 = SQRT((float)*(double *)((int)&DAT_02f326b0 + iVar6));
        iVar6 = iVar6 + 8;
        iVar9 = iVar9 + 1;
        local_34.x = pCVar3->x - local_58;
        local_34.y = pCVar3->y - local_58;
        local_34.z = pCVar3->z - local_58;
        local_54 = local_58;
        local_50[0].x = local_58;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_7c,&local_34);
        local_50[0].x = pCVar3->x + local_5c;
        local_50[0].y = pCVar3->y + local_58;
        local_50[0].z = pCVar3->z + local_54;
        local_8c = 7.49551e-39;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&stack0xffffff80,local_50)
        ;
        uVar4 = extraout_EDX_00;
        pCVar3 = pCVar3 + 1;
      } while (iVar9 < DAT_02f313ec);
    }
    fVar11 = ((float10)local_7c.min.x + (float10)DOUBLE_00637a95) * (float10)DOUBLE_00637a9d;
    dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar4,local_20));
    local_24 = (float)(int)ROUND(fVar11);
    uVar4 = SUB84(dVar16,0) - (int)local_24;
    uVar5 = (int)uVar4 >> 0x1f;
    iVar6 = (uVar4 ^ uVar5) - uVar5;
    iVar9 = -1;
    if (-1 < iVar6) {
      iVar9 = iVar6;
    }
    fVar11 = ((float10)local_7c.min.z + (float10)DOUBLE_00637a95) * (float10)DOUBLE_00637a9d;
    local_7c.min.x = 7.495635e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar5,local_20));
    local_20 = (int)ROUND(fVar11);
    uVar4 = SUB84(dVar16,0) - local_20;
    uVar5 = (int)uVar4 >> 0x1f;
    iVar6 = (uVar4 ^ uVar5) - uVar5;
    if (iVar9 < iVar6) {
      iVar9 = iVar6;
    }
    fVar11 = ((float10)local_7c.max.y + (float10)DOUBLE_00637a95) * (float10)DOUBLE_00637a9d;
    local_7c.min.y = 7.495697e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar5,uStack_14));
    local_1c = (int)ROUND(fVar11);
    uVar4 = SUB84(dVar16,0) - local_1c;
    uVar5 = (int)uVar4 >> 0x1f;
    iVar6 = (uVar4 ^ uVar5) - uVar5;
    if (iVar9 < iVar6) {
      iVar9 = iVar6;
    }
    fVar11 = ((float10)local_64 + (float10)DOUBLE_00637a95) * (float10)DOUBLE_00637a9d;
    local_7c.min.z = 7.495758e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar5,uStack_14));
    local_18 = (int)ROUND(fVar11);
    uVar4 = SUB84(dVar16,0) - local_18;
    uVar5 = (int)uVar4 >> 0x1f;
    iVar6 = (uVar4 ^ uVar5) - uVar5;
    if (iVar9 < iVar6) {
      iVar9 = iVar6;
    }
    fVar11 = ((float10)local_5c + (float10)DOUBLE_00637a95) * (float10)DOUBLE_00637a9d;
    local_7c.max.x = 7.49582e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar5,uStack_14));
    uStack_14 = (uint)ROUND(fVar11);
    uVar4 = SUB84(dVar16,0) - uStack_14;
    uVar5 = (int)uVar4 >> 0x1f;
    iVar6 = (uVar4 ^ uVar5) - uVar5;
    if (iVar9 < iVar6) {
      iVar9 = iVar6;
    }
    fVar11 = ((float10)local_54 + (float10)DOUBLE_00637a95) * (float10)DOUBLE_00637a9d;
    local_7c.max.y = 7.495882e-39;
    dVar16 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar5,iVar8));
    uVar5 = SUB84(dVar16,0) - (int)ROUND(fVar11);
    uVar4 = (int)uVar5 >> 0x1f;
    iVar6 = (uVar5 ^ uVar4) - uVar4;
    if (iVar9 < iVar6) {
      iVar9 = iVar6;
    }
    if (iVar9 + 1 < unaff_retaddr) break;
    unaff_retaddr = unaff_retaddr + 1;
  }
  return;
}


// Assembly code:
// 00519b50: PUSH EBX
//   Label: shape_meshlod.cpp_SamplePointsCheck_FUN_00519b50
// 00519b51: PUSH ESI
// 00519b52: PUSH EDI
// 00519b53: PUSH EBP
// 00519b54: MOV EBP,ESP
// 00519b56: SUB ESP,0x7c
// 00519b59: AND ESP,0xfffffff8
// 00519b5c: CMP dword ptr [0x02f313ec],0x190
//   XREF to: 02f313ec (READ)
// 00519b66: JG 0x00519fa4
//   XREF to: 00519fa4 (CONDITIONAL_JUMP)
// 00519b6c: MOV EAX,ESP
//   Label: LAB_00519b6c
// 00519b6e: CMP EAX,0x2f313f0
//   XREF to: 02f313f0 (DATA)
// 00519b73: JZ 0x00519b8f
//   XREF to: 00519b8f (CONDITIONAL_JUMP)
// 00519b75: MOV EAX,[0x02f313f0]
//   XREF to: 02f313f0 (READ)
// 00519b7a: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x90] (DATA)
// 00519b7d: MOV EAX,[0x02f313f4]
//   XREF to: 02f313f4 (READ)
// 00519b82: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 00519b86: MOV EAX,[0x02f313f8]
//   XREF to: 02f313f8 (READ)
// 00519b8b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 00519b8f: LEA EAX,[ESP + 0xc]
//   Label: LAB_00519b8f
//   XREF to: Stack[-0x84] (DATA)
// 00519b93: CMP EAX,0x2f313f0
//   XREF to: 02f313f0 (DATA)
// 00519b98: JZ 0x00519bb5
//   XREF to: 00519bb5 (CONDITIONAL_JUMP)
// 00519b9a: MOV EAX,[0x02f313f0]
//   XREF to: 02f313f0 (READ)
// 00519b9f: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 00519ba3: MOV EAX,[0x02f313f4]
//   XREF to: 02f313f4 (READ)
// 00519ba8: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00519bac: MOV EAX,[0x02f313f8]
//   XREF to: 02f313f8 (READ)
// 00519bb1: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 00519bb5: MOV ESI,dword ptr [0x02f313ec]
//   Label: LAB_00519bb5
//   XREF to: 02f313ec (READ)
// 00519bbb: XOR EDI,EDI
// 00519bbd: TEST ESI,ESI
// 00519bbf: JLE 0x00519c00
//   XREF to: 00519c00 (CONDITIONAL_JUMP)
// 00519bc1: MOV ESI,0x2f313f0
//   XREF to: 02f313f0 (DATA)
// 00519bc6: XOR EBX,EBX
// 00519bc8: MOV EDX,0x3ff00000
//   Label: LAB_00519bc8
// 00519bcd: ADD EBX,0x8
// 00519bd0: XOR EAX,EAX
// 00519bd2: PUSH ESI
//   XREF to: 02f313f0 (DATA)
//   XREF to: 02f313fc (DATA)
// 00519bd3: MOV dword ptr [EBX + 0x2f326a8],EAX
//   XREF to: 02f326b0 (WRITE)
//   XREF to: 02f326b8 (WRITE)
// 00519bd9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x90] (DATA)
// 00519bdd: INC EDI
// 00519bde: PUSH EAX
// 00519bdf: ADD ESI,0xc
// 00519be2: MOV dword ptr [EBX + 0x2f326ac],EDX
//   XREF to: 02f326b4 (WRITE)
//   XREF to: 02f326bc (WRITE)
// 00519be8: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 00519bed: MOV ECX,dword ptr [0x02f313ec]
//   XREF to: 02f313ec (READ)
// 00519bf3: ADD ESP,0x8
// 00519bf6: CMP EDI,ECX
// 00519bf8: JL 0x00519bc8
//   XREF to: 00519bc8 (CONDITIONAL_JUMP)
// 00519bfa: LEA EAX,[EAX]
// 00519c00: FLD float ptr [ESP]
//   Label: LAB_00519c00
//   XREF to: Stack[-0x90] (DATA)
// 00519c03: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x84] (READ)
// 00519c07: FST float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x54] (WRITE)
// 00519c0b: FLD float ptr [0x00637a8d]
//   XREF to: 00637a8d (READ)
// 00519c11: FXCH
// 00519c13: FMUL ST1
// 00519c15: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x88] (READ)
// 00519c19: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x8c] (READ)
// 00519c1d: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (READ)
// 00519c21: FXCH
// 00519c23: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x7c] (READ)
// 00519c27: FXCH
// 00519c29: FST float ptr [ESP + 0x40]
//   XREF to: Stack[-0x50] (WRITE)
// 00519c2d: FMUL ST3
// 00519c2f: FXCH
// 00519c31: FST float ptr [ESP + 0x44]
//   XREF to: Stack[-0x4c] (WRITE)
// 00519c35: FMULP ST3
// 00519c37: FXCH
// 00519c39: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (WRITE)
// 00519c3d: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x74] (WRITE)
// 00519c41: FLD double ptr [0x00637a95]
//   XREF to: 00637a95 (READ)
// 00519c47: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (READ)
// 00519c4b: FADD ST0,ST1
// 00519c4d: FXCH ST2
// 00519c4f: FADD ST0,ST1
// 00519c51: FXCH ST2
// 00519c53: FLD double ptr [0x00637a9d]
//   XREF to: 00637a9d (READ)
// 00519c59: FXCH
// 00519c5b: FMUL ST1
// 00519c5d: FXCH ST3
// 00519c5f: FMUL ST1
// 00519c61: MOV EBX,dword ptr [0x02f33334]
//   XREF to: 02f33334 (READ)
// 00519c67: FXCH ST4
// 00519c69: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x70] (WRITE)
// 00519c6d: FADDP ST2,ST0
// 00519c6f: INC EBX
// 00519c70: FMULP
// 00519c72: MOV dword ptr [0x02f33334],EBX
//   XREF to: 02f33334 (WRITE)
// 00519c78: FXCH
// 00519c7a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00519c7f: FXCH ST2
// 00519c81: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00519c86: FXCH
// 00519c88: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00519c8d: FXCH ST2
// 00519c8f: FISTP dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x34] (WRITE)
// 00519c93: FISTP dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (WRITE)
// 00519c97: MOV ESI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x34] (READ)
// 00519c9b: FISTP dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (WRITE)
// 00519c9f: TEST ESI,ESI
// 00519ca1: JL 0x00519cac
//   XREF to: 00519cac (CONDITIONAL_JUMP)
// 00519ca3: CMP ESI,0x10
// 00519ca6: JL 0x00519fcc
//   XREF to: 00519fcc (CONDITIONAL_JUMP)
// 00519cac: MOV dword ptr [ESP + 0x64],0x1
//   Label: LAB_00519cac
//   XREF to: Stack[-0x2c] (WRITE)
// 00519cb4: MOV EAX,dword ptr [ESP + 0x5c]
//   Label: LAB_00519cb4
//   XREF to: Stack[-0x34] (READ)
// 00519cb8: SUB EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x2c] (READ)
// 00519cbc: TEST EAX,EAX
// 00519cbe: JL 0x0051a00a
//   XREF to: 0051a00a (CONDITIONAL_JUMP)
// 00519cc4: MOV EBX,dword ptr [ESP + 0x5c]
//   Label: LAB_00519cc4
//   XREF to: Stack[-0x34] (READ)
// 00519cc8: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x2c] (READ)
// 00519ccc: ADD EBX,ESI
// 00519cce: MOV dword ptr [ESP + 0x68],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 00519cd2: CMP EBX,0x10
// 00519cd5: JL 0x00519cdf
//   XREF to: 00519cdf (CONDITIONAL_JUMP)
// 00519cd7: MOV dword ptr [ESP + 0x68],0xf
//   XREF to: Stack[-0x28] (WRITE)
// 00519cdf: MOV EBX,dword ptr [ESP + 0x58]
//   Label: LAB_00519cdf
//   XREF to: Stack[-0x38] (READ)
// 00519ce3: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x2c] (READ)
// 00519ce7: SUB EBX,ECX
// 00519ce9: MOV dword ptr [ESP + 0x6c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 00519ced: TEST EBX,EBX
// 00519cef: JL 0x0051a011
//   XREF to: 0051a011 (CONDITIONAL_JUMP)
// 00519cf5: MOV EBX,dword ptr [ESP + 0x58]
//   Label: LAB_00519cf5
//   XREF to: Stack[-0x38] (READ)
// 00519cf9: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x2c] (READ)
// 00519cfd: ADD EBX,EDI
// 00519cff: MOV dword ptr [ESP + 0x70],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00519d03: CMP EBX,0x10
// 00519d06: JL 0x00519d10
//   XREF to: 00519d10 (CONDITIONAL_JUMP)
// 00519d08: MOV dword ptr [ESP + 0x70],0xf
//   XREF to: Stack[-0x20] (WRITE)
// 00519d10: MOV EBX,dword ptr [ESP + 0x60]
//   Label: LAB_00519d10
//   XREF to: Stack[-0x30] (READ)
// 00519d14: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x2c] (READ)
// 00519d18: SUB EBX,ESI
// 00519d1a: MOV dword ptr [ESP + 0x74],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 00519d1e: TEST EBX,EBX
// 00519d20: JL 0x0051a01c
//   XREF to: 0051a01c (CONDITIONAL_JUMP)
// 00519d26: MOV EDI,dword ptr [ESP + 0x60]
//   Label: LAB_00519d26
//   XREF to: Stack[-0x30] (READ)
// 00519d2a: ADD EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x2c] (READ)
// 00519d2e: CMP EDI,0x10
// 00519d31: JL 0x00519d38
//   XREF to: 00519d38 (CONDITIONAL_JUMP)
// 00519d33: MOV EDI,0xf
// 00519d38: MOV EBX,dword ptr [ESP + 0x68]
//   Label: LAB_00519d38
//   XREF to: Stack[-0x28] (READ)
// 00519d3c: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00519d40: CMP EAX,EBX
// 00519d42: JG 0x00519d8d
//   XREF to: 00519d8d (CONDITIONAL_JUMP)
// 00519d44: MOV EBX,dword ptr [ESP + 0x70]
//   Label: LAB_00519d44
//   XREF to: Stack[-0x20] (READ)
// 00519d48: MOV ESI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x24] (READ)
// 00519d4c: CMP ESI,EBX
// 00519d4e: JG 0x00519d7c
//   XREF to: 00519d7c (CONDITIONAL_JUMP)
// 00519d50: MOV EBX,dword ptr [ESP + 0x74]
//   Label: LAB_00519d50
//   XREF to: Stack[-0x1c] (READ)
// 00519d54: CMP EDI,EBX
// 00519d56: JL 0x00519d73
//   XREF to: 00519d73 (CONDITIONAL_JUMP)
// 00519d58: PUSH EBX
//   Label: LAB_00519d58
// 00519d59: PUSH ESI
// 00519d5a: MOV ECX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (READ)
// 00519d61: PUSH ECX
// 00519d62: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00519d65: PUSH EAX
// 00519d66: INC EBX
// 00519d67: CALL shape_meshlod.cpp_FUN_0051a030
//   XREF to: 0051a030 (UNCONDITIONAL_CALL)
// 00519d6c: ADD ESP,0x10
// 00519d6f: CMP EBX,EDI
// 00519d71: JLE 0x00519d58
//   XREF to: 00519d58 (CONDITIONAL_JUMP)
// 00519d73: MOV EAX,dword ptr [ESP + 0x70]
//   Label: LAB_00519d73
//   XREF to: Stack[-0x20] (READ)
// 00519d77: INC ESI
// 00519d78: CMP ESI,EAX
// 00519d7a: JLE 0x00519d50
//   XREF to: 00519d50 (CONDITIONAL_JUMP)
// 00519d7c: MOV ESI,dword ptr [ESP + 0x78]
//   Label: LAB_00519d7c
//   XREF to: Stack[-0x18] (READ)
// 00519d80: INC ESI
// 00519d81: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x28] (READ)
// 00519d85: MOV dword ptr [ESP + 0x78],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00519d89: CMP ESI,EDX
// 00519d8b: JLE 0x00519d44
//   XREF to: 00519d44 (CONDITIONAL_JUMP)
// 00519d8d: MOV EAX,ESP
//   Label: LAB_00519d8d
// 00519d8f: CMP EAX,0x2f313f0
//   XREF to: 02f313f0 (DATA)
// 00519d94: JZ 0x00519db0
//   XREF to: 00519db0 (CONDITIONAL_JUMP)
// 00519d96: MOV EAX,[0x02f313f0]
//   XREF to: 02f313f0 (READ)
// 00519d9b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x90] (DATA)
// 00519d9e: MOV EAX,[0x02f313f4]
//   XREF to: 02f313f4 (READ)
// 00519da3: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 00519da7: MOV EAX,[0x02f313f8]
//   XREF to: 02f313f8 (READ)
// 00519dac: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 00519db0: LEA EAX,[ESP + 0xc]
//   Label: LAB_00519db0
//   XREF to: Stack[-0x84] (DATA)
// 00519db4: CMP EAX,0x2f313f0
//   XREF to: 02f313f0 (DATA)
// 00519db9: JZ 0x00519dd6
//   XREF to: 00519dd6 (CONDITIONAL_JUMP)
// 00519dbb: MOV EAX,[0x02f313f0]
//   XREF to: 02f313f0 (READ)
// 00519dc0: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 00519dc4: MOV EAX,[0x02f313f4]
//   XREF to: 02f313f4 (READ)
// 00519dc9: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00519dcd: MOV EAX,[0x02f313f8]
//   XREF to: 02f313f8 (READ)
// 00519dd2: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 00519dd6: MOV ECX,dword ptr [0x02f313ec]
//   Label: LAB_00519dd6
//   XREF to: 02f313ec (READ)
// 00519ddc: XOR EDI,EDI
// 00519dde: TEST ECX,ECX
// 00519de0: JLE 0x00519e7f
//   XREF to: 00519e7f (CONDITIONAL_JUMP)
// 00519de6: MOV EBX,0x2f313f0
//   XREF to: 02f313f0 (DATA)
// 00519deb: XOR ESI,ESI
// 00519ded: FLD double ptr [ESI + 0x2f326b0]
//   Label: LAB_00519ded
//   XREF to: 02f326b0 (READ)
//   XREF to: 02f326b8 (READ)
// 00519df3: FSQRT
// 00519df5: ADD EBX,0xc
//   XREF to: 02f313fc (PARAM)
// 00519df8: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x64] (WRITE)
// 00519dfc: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x64] (READ)
// 00519e00: ADD ESI,0x8
// 00519e03: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00519e07: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00519e0b: INC EDI
// 00519e0c: FLD float ptr [EBX + -0xc]
//   XREF to: 02f313f0 (READ)
//   XREF to: 02f313fc (READ)
// 00519e0f: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x48] (DATA)
// 00519e13: FSUB float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x64] (READ)
// 00519e17: PUSH EAX
// 00519e18: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x48] (WRITE)
// 00519e1c: FLD float ptr [EBX + -0x8]
//   XREF to: 02f313f4 (READ)
//   XREF to: 02f31400 (READ)
// 00519e1f: FSUB float ptr [ESP + 0x30]
//   XREF to: Stack[-0x64] (READ)
// 00519e23: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x90] (DATA)
// 00519e27: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x44] (WRITE)
// 00519e2b: FLD float ptr [EBX + -0x4]
//   XREF to: 02f313f8 (READ)
// 00519e2e: FSUB float ptr [ESP + 0x30]
//   XREF to: Stack[-0x64] (READ)
// 00519e32: PUSH EAX
// 00519e33: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x40] (WRITE)
// 00519e37: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 00519e3c: FLD float ptr [EBX + -0xc]
//   XREF to: 02f313f0 (READ)
// 00519e3f: ADD ESP,0x8
// 00519e42: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x60] (DATA)
// 00519e46: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x6c] (READ)
// 00519e4a: PUSH EAX
// 00519e4b: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x60] (WRITE)
// 00519e4f: FLD float ptr [EBX + -0x8]
//   XREF to: 02f313f4 (READ)
// 00519e52: FADD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x68] (READ)
// 00519e56: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x90] (DATA)
// 00519e5a: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x5c] (WRITE)
// 00519e5e: FLD float ptr [EBX + -0x4]
//   XREF to: 02f313f8 (READ)
// 00519e61: FADD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x64] (READ)
// 00519e65: PUSH EAX
// 00519e66: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (WRITE)
// 00519e6a: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 00519e6f: MOV EAX,[0x02f313ec]
//   XREF to: 02f313ec (READ)
// 00519e74: ADD ESP,0x8
// 00519e77: CMP EDI,EAX
// 00519e79: JL 0x00519ded
//   XREF to: 00519ded (CONDITIONAL_JUMP)
// 00519e7f: FLD float ptr [ESP]
//   Label: LAB_00519e7f
//   XREF to: Stack[-0x90] (DATA)
// 00519e82: FADD double ptr [0x00637a95]
//   XREF to: 00637a95 (READ)
// 00519e88: FMUL double ptr [0x00637a9d]
//   XREF to: 00637a9d (READ)
// 00519e8e: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x34] (READ)
// 00519e92: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00519e97: FISTP dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (WRITE)
// 00519e9b: SUB EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (READ)
// 00519e9f: MOV EBX,0xffffffff
// 00519ea4: CDQ
// 00519ea5: XOR EAX,EDX
// 00519ea7: SUB EAX,EDX
// 00519ea9: CMP EAX,EBX
// 00519eab: JLE 0x00519eaf
//   XREF to: 00519eaf (CONDITIONAL_JUMP)
// 00519ead: MOV EBX,EAX
// 00519eaf: FLD float ptr [ESP + 0x4]
//   Label: LAB_00519eaf
//   XREF to: Stack[-0x8c] (READ)
// 00519eb3: FADD double ptr [0x00637a95]
//   XREF to: 00637a95 (READ)
// 00519eb9: FMUL double ptr [0x00637a9d]
//   XREF to: 00637a9d (READ)
// 00519ebf: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (READ)
// 00519ec3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00519ec8: FISTP dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (WRITE)
// 00519ecc: SUB EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (READ)
// 00519ed0: CDQ
// 00519ed1: XOR EAX,EDX
// 00519ed3: SUB EAX,EDX
// 00519ed5: CMP EAX,EBX
// 00519ed7: JLE 0x00519edb
//   XREF to: 00519edb (CONDITIONAL_JUMP)
// 00519ed9: MOV EBX,EAX
// 00519edb: FLD float ptr [ESP + 0x8]
//   Label: LAB_00519edb
//   XREF to: Stack[-0x88] (READ)
// 00519edf: FADD double ptr [0x00637a95]
//   XREF to: 00637a95 (READ)
// 00519ee5: FMUL double ptr [0x00637a9d]
//   XREF to: 00637a9d (READ)
// 00519eeb: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (READ)
// 00519eef: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00519ef4: FISTP dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (WRITE)
// 00519ef8: SUB EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (READ)
// 00519efc: CDQ
// 00519efd: XOR EAX,EDX
// 00519eff: SUB EAX,EDX
// 00519f01: CMP EAX,EBX
// 00519f03: JLE 0x00519f07
//   XREF to: 00519f07 (CONDITIONAL_JUMP)
// 00519f05: MOV EBX,EAX
// 00519f07: FLD float ptr [ESP + 0xc]
//   Label: LAB_00519f07
//   XREF to: Stack[-0x84] (READ)
// 00519f0b: FADD double ptr [0x00637a95]
//   XREF to: 00637a95 (READ)
// 00519f11: FMUL double ptr [0x00637a9d]
//   XREF to: 00637a9d (READ)
// 00519f17: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x34] (READ)
// 00519f1b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00519f20: FISTP dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (WRITE)
// 00519f24: SUB EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (READ)
// 00519f28: CDQ
// 00519f29: XOR EAX,EDX
// 00519f2b: SUB EAX,EDX
// 00519f2d: CMP EAX,EBX
// 00519f2f: JLE 0x00519f33
//   XREF to: 00519f33 (CONDITIONAL_JUMP)
// 00519f31: MOV EBX,EAX
// 00519f33: FLD float ptr [ESP + 0x10]
//   Label: LAB_00519f33
//   XREF to: Stack[-0x80] (READ)
// 00519f37: FADD double ptr [0x00637a95]
//   XREF to: 00637a95 (READ)
// 00519f3d: FMUL double ptr [0x00637a9d]
//   XREF to: 00637a9d (READ)
// 00519f43: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (READ)
// 00519f47: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00519f4c: FISTP dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (WRITE)
// 00519f50: SUB EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (READ)
// 00519f54: CDQ
// 00519f55: XOR EAX,EDX
// 00519f57: SUB EAX,EDX
// 00519f59: CMP EAX,EBX
// 00519f5b: JLE 0x00519f5f
//   XREF to: 00519f5f (CONDITIONAL_JUMP)
// 00519f5d: MOV EBX,EAX
// 00519f5f: FLD float ptr [ESP + 0x14]
//   Label: LAB_00519f5f
//   XREF to: Stack[-0x7c] (READ)
// 00519f63: FADD double ptr [0x00637a95]
//   XREF to: 00637a95 (READ)
// 00519f69: FMUL double ptr [0x00637a9d]
//   XREF to: 00637a9d (READ)
// 00519f6f: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (READ)
// 00519f73: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00519f78: FISTP dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (WRITE)
// 00519f7c: SUB EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (READ)
// 00519f80: CDQ
// 00519f81: XOR EAX,EDX
// 00519f83: SUB EAX,EDX
// 00519f85: CMP EAX,EBX
// 00519f87: JLE 0x00519f8b
//   XREF to: 00519f8b (CONDITIONAL_JUMP)
// 00519f89: MOV EBX,EAX
// 00519f8b: MOV ESI,dword ptr [ESP + 0x64]
//   Label: LAB_00519f8b
//   XREF to: Stack[-0x2c] (READ)
// 00519f8f: INC EBX
// 00519f90: CMP EBX,ESI
// 00519f92: JL 0x00519afe
//   XREF to: 00519afe (CONDITIONAL_JUMP)
// 00519f98: LEA EDI,[ESI + 0x1]
// 00519f9b: MOV dword ptr [ESP + 0x64],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00519f9f: JMP 0x00519cb4
//   XREF to: 00519cb4 (UNCONDITIONAL_JUMP)
// 00519fa4: MOV ECX,0x637a5d
//   Label: LAB_00519fa4
//   XREF to: 00637a5d (DATA)
// 00519fa9: MOV EBX,0xd78
// 00519fae: PUSH 0x637a72
//   XREF to: 00637a72 (DATA)
// 00519fb3: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00519fb9: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00519fbf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00519fc4: ADD ESP,0x4
// 00519fc7: JMP 0x00519b6c
//   XREF to: 00519b6c (UNCONDITIONAL_JUMP)
// 00519fcc: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_00519fcc
//   XREF to: Stack[-0x38] (READ)
// 00519fd0: TEST EAX,EAX
// 00519fd2: JL 0x00519cac
//   XREF to: 00519cac (CONDITIONAL_JUMP)
// 00519fd8: CMP EAX,0x10
// 00519fdb: JGE 0x00519cac
//   XREF to: 00519cac (CONDITIONAL_JUMP)
// 00519fe1: MOV ECX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (READ)
// 00519fe5: TEST ECX,ECX
// 00519fe7: JL 0x00519cac
//   XREF to: 00519cac (CONDITIONAL_JUMP)
// 00519fed: CMP ECX,0x10
// 00519ff0: JGE 0x00519cac
//   XREF to: 00519cac (CONDITIONAL_JUMP)
// 00519ff6: PUSH ECX
// 00519ff7: PUSH EAX
// 00519ff8: PUSH ESI
// 00519ff9: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00519ffc: PUSH EDX
// 00519ffd: CALL shape_meshlod.cpp_FUN_0051a030
//   XREF to: 0051a030 (UNCONDITIONAL_CALL)
// 0051a002: ADD ESP,0x10
// 0051a005: JMP 0x00519cac
//   XREF to: 00519cac (UNCONDITIONAL_JUMP)
// 0051a00a: XOR EAX,EAX
//   Label: LAB_0051a00a
// 0051a00c: JMP 0x00519cc4
//   XREF to: 00519cc4 (UNCONDITIONAL_JUMP)
// 0051a011: XOR ESI,ESI
//   Label: LAB_0051a011
// 0051a013: MOV dword ptr [ESP + 0x6c],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 0051a017: JMP 0x00519cf5
//   XREF to: 00519cf5 (UNCONDITIONAL_JUMP)
// 0051a01c: XOR EDX,EDX
//   Label: LAB_0051a01c
// 0051a01e: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051a022: JMP 0x00519d26
//   XREF to: 00519d26 (UNCONDITIONAL_JUMP)

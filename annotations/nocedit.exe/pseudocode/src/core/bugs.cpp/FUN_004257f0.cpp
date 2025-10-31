// Name: core_bugs.cpp_FUN_004257f0
// Address: 004257f0
// Address Range: [[004257f0, 00425b61]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004257f0()
// Cross-references:
//   core_bugs.cpp_FUN_00425cc0 (00425cc0) at 00425fb9 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 004263f4 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004278d0 (004278d0) at 00427951 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00616ddf = 0.5
//   float FLOAT_00616de3 = 11
//   double DOUBLE_00616deb = 0.5
//   undefined4 DAT_0065b5c8
//   undefined4 DAT_00822d08
//   undefined1 DAT_00822d0c
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_004257f0(CCharacter* param_1) */

void core_bugs_cpp_FUN_004257f0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  float fVar5;
  int iVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  byte bVar12;
  float10 in_ST0;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  int in_stack_00000004;
  int in_stack_00000008;
  CVector3f local_4c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  
  bVar12 = 0;
  local_c = 1.0 / _DAT_0065b5c8;
  dVar16 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar14 = (float10)dVar16;
  fVar13 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  local_34 = (int)ROUND(fVar13);
  crt_math_c_floor_FUN_005feb90((double)fVar14);
  fVar14 = (float10)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00);
  local_10 = local_38;
  fVar13 = (float10)local_38 * (float10)_DAT_0065b5c8;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,local_38));
  local_10 = (int)ROUND(fVar14);
  fVar14 = (float10)_DAT_0065b5c8;
  fVar15 = (float10)_DAT_0065b5c8 * (float10)FLOAT_00616de3 * (float10)DOUBLE_00616deb;
  *(float *)(in_stack_00000004 + 0x199ec) =
       (float)((fVar13 - (float10)*(float *)(in_stack_00000004 + 0x20)) - fVar15);
  *(float *)(in_stack_00000004 + 0x199f0) =
       (float)(((float10)local_10 * fVar14 - (float10)*(float *)(in_stack_00000004 + 0x28)) - fVar15
              );
  if ((local_34 != *(int *)(in_stack_00000004 + 0x199e4)) ||
     (local_10 != *(int *)(in_stack_00000004 + 0x199e8))) {
    local_18 = *(int *)(in_stack_00000004 + 0x199e4) - local_34;
    local_1c = *(int *)(in_stack_00000004 + 0x199e8) - local_10;
    local_24 = local_18 + 0xb;
    local_20 = local_1c + 0xb;
    puVar9 = (undefined4 *)(in_stack_00000004 + 0x128b8);
    puVar10 = &DAT_00822d08;
    for (iVar6 = 0x90; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar12 * -2 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + (uint)bVar12 * -2 + 1);
    }
    fVar3 = *(float *)(in_stack_00000004 + 0x20);
    local_4c.y = *(float *)(in_stack_00000004 + 0x24);
    fVar4 = *(float *)(in_stack_00000004 + 0x28);
    fVar1 = *(float *)(in_stack_00000004 + 0x199ec);
    fVar2 = *(float *)(in_stack_00000004 + 0x199f0);
    local_28 = in_stack_00000004;
    local_2c = local_18 * -0x30;
    local_30 = local_1c * 4;
    local_14 = 0;
    do {
      iVar7 = 0;
      local_4c.x = (float)local_14 * _DAT_0065b5c8 + fVar3 + fVar1;
      iVar8 = local_2c - local_30;
      iVar6 = local_28;
      iVar11 = local_28;
      do {
        local_4c.z = (float)iVar7 * _DAT_0065b5c8 + fVar4 + fVar2;
        if ((((local_14 < local_18) || (local_24 < local_14)) || (iVar7 < local_1c)) ||
           (local_20 < iVar7)) {
          local_c = (float)iVar7;
          fVar5 = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
                            (&g_CDemonRaytraceInstance,&local_4c,&local_38,(CVector3f *)0x0);
          *(float *)(iVar11 + 0x128b8) = fVar5 - *(float *)(in_stack_00000008 + 0x24);
        }
        else {
          *(undefined4 *)(iVar6 + 0x128b8) = *(undefined4 *)((int)&DAT_00822d08 + iVar8);
        }
        iVar6 = iVar6 + 4;
        iVar8 = iVar8 + 4;
        iVar7 = iVar7 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar7 < 0xc);
      local_2c = local_2c + 0x30;
      local_14 = local_14 + 1;
      local_28 = local_28 + 0x30;
    } while (local_14 < 0xc);
    *(int *)(in_stack_00000004 + 0x199e4) = local_34;
    *(int *)(in_stack_00000004 + 0x199e8) = local_10;
  }
  return;
}


// Assembly code:
// 004257f0: PUSH EBX
//   Label: core_bugs.cpp_FUN_004257f0
// 004257f1: PUSH EBP
// 004257f2: SUB ESP,0x74
// 004257f5: FLD1
// 004257f7: FDIV float ptr [0x0065b5c8]
//   XREF to: 0065b5c8 (READ)
// 004257fd: MOV EBX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 00425804: FLD float ptr [EBX + 0x199cc]
// 0042580a: FADD float ptr [EBX + 0x199d8]
// 00425810: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x58] (WRITE)
// 00425814: FLD float ptr [EBX + 0x199d0]
// 0042581a: FADD float ptr [EBX + 0x199dc]
// 00425820: FXCH
// 00425822: FLD float ptr [0x00616ddf]
//   XREF to: 00616ddf (READ)
// 00425828: FXCH
// 0042582a: FMUL ST1
// 0042582c: FXCH ST2
// 0042582e: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x54] (WRITE)
// 00425832: FLD float ptr [EBX + 0x199d4]
// 00425838: FADD float ptr [EBX + 0x199e0]
// 0042583e: FXCH
// 00425840: FMUL ST2
// 00425842: FXCH
// 00425844: FST float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x50] (WRITE)
// 00425848: FMULP ST2
// 0042584a: FXCH ST2
// 0042584c: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x64] (WRITE)
// 00425850: FXCH
// 00425852: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x60] (WRITE)
// 00425856: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x5c] (WRITE)
// 0042585a: FLD float ptr [EBX + 0x20]
// 0042585d: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x64] (READ)
// 00425861: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x70] (WRITE)
// 00425865: FLD float ptr [EBX + 0x24]
// 00425868: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x60] (READ)
// 0042586c: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x70] (READ)
// 00425870: FXCH
// 00425872: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x6c] (WRITE)
// 00425876: FLD float ptr [EBX + 0x28]
// 00425879: FXCH ST2
// 0042587b: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0xc] (WRITE)
// 0042587f: FXCH
// 00425881: FADD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x5c] (READ)
// 00425885: FXCH
// 00425887: FMUL float ptr [ESP + 0x70]
//   XREF to: Stack[-0xc] (READ)
// 0042588b: FXCH
// 0042588d: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x68] (WRITE)
// 00425891: SUB ESP,0x8
// 00425894: FSTP double ptr [ESP]
//   XREF to: Stack[-0x84] (DATA)
// 00425897: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0042589c: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004258a0: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 004258a4: FLD double ptr [ESP + 0x44]
//   XREF to: Stack[-0x40] (READ)
// 004258a8: ADD ESP,0x8
// 004258ab: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x68] (READ)
// 004258af: FMUL float ptr [ESP + 0x70]
//   XREF to: Stack[-0xc] (READ)
// 004258b3: FXCH
// 004258b5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004258ba: FISTP dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x34] (WRITE)
// 004258be: SUB ESP,0x8
// 004258c1: FSTP double ptr [ESP]
//   XREF to: Stack[-0x84] (DATA)
// 004258c4: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 004258c9: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004258cd: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 004258d1: FLD double ptr [ESP + 0x44]
//   XREF to: Stack[-0x40] (READ)
// 004258d5: ADD ESP,0x8
// 004258d8: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x34] (READ)
// 004258dc: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004258e0: FILD dword ptr [ESP + 0x70]
//   XREF to: Stack[-0xc] (READ)
// 004258e4: FMUL float ptr [0x0065b5c8]
//   XREF to: 0065b5c8 (READ)
// 004258ea: FXCH
// 004258ec: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004258f1: FISTP dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x10] (WRITE)
// 004258f5: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x10] (READ)
// 004258f9: FSUB float ptr [EBX + 0x20]
// 004258fc: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00425900: FLD float ptr [0x0065b5c8]
//   XREF to: 0065b5c8 (READ)
// 00425906: FMUL float ptr [0x00616de3]
//   XREF to: 00616de3 (READ)
// 0042590c: FILD dword ptr [ESP + 0x70]
//   XREF to: Stack[-0xc] (READ)
// 00425910: FMUL float ptr [0x0065b5c8]
//   XREF to: 0065b5c8 (READ)
// 00425916: FXCH
// 00425918: FMUL double ptr [0x00616deb]
//   XREF to: 00616deb (READ)
// 0042591e: MOV EDX,dword ptr [EBX + 0x199e4]
// 00425924: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x34] (READ)
// 00425928: FXCH
// 0042592a: FSUB float ptr [EBX + 0x28]
// 0042592d: FXCH ST2
// 0042592f: FSUB ST0,ST1
// 00425931: FXCH ST2
// 00425933: FSUBRP
// 00425935: FXCH
// 00425937: FSTP float ptr [EBX + 0x199ec]
// 0042593d: FSTP float ptr [EBX + 0x199f0]
// 00425943: CMP EAX,EDX
// 00425945: JNZ 0x00425957
//   XREF to: 00425957 (CONDITIONAL_JUMP)
// 00425947: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x10] (READ)
// 0042594b: CMP EAX,dword ptr [EBX + 0x199e8]
// 00425951: JZ 0x00425b20
//   XREF to: 00425b20 (CONDITIONAL_JUMP)
// 00425957: PUSH EDI
//   Label: LAB_00425957
// 00425958: PUSH ESI
// 00425959: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 00425960: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x34] (READ)
// 00425964: MOV EAX,dword ptr [EAX + 0x199e4]
// 0042596a: SUB EAX,EBX
// 0042596c: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00425970: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 00425977: MOV ESI,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x10] (READ)
// 0042597b: MOV EAX,dword ptr [EAX + 0x199e8]
// 00425981: SUB EAX,ESI
// 00425983: MOV ECX,0x240
// 00425988: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0042598c: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x18] (READ)
// 00425990: MOV EDI,0x822d08
//   XREF to: 00822d08 (DATA)
// 00425995: ADD EAX,0xb
// 00425998: MOV EBX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 0042599f: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004259a3: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x1c] (READ)
// 004259a7: MOV ESI,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 004259ae: ADD EAX,0xb
// 004259b1: ADD ESI,0x128b8
// 004259b7: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004259bb: PUSH EDI
//   XREF to: 00822d08 (DATA)
// 004259bc: MOV EAX,ECX
// 004259be: SHR ECX,0x2
// 004259c1: MOVSD.REP ES:EDI,ESI
//   XREF to: 00822d08 (WRITE)
//   XREF to: 00822d0c (WRITE)
// 004259c3: MOV CL,AL
// 004259c5: AND CL,0x3
// 004259c8: MOVSB.REP ES:EDI,ESI
//   XREF to: 00822d08 (WRITE)
//   XREF to: 00822d0c (WRITE)
// 004259ca: POP EDI
// 004259cb: MOV EAX,dword ptr [EBX + 0x20]
// 004259ce: ADD EBX,0x20
// 004259d1: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 004259d5: LEA EAX,[EBX + 0x4]
// 004259d8: MOV EAX,dword ptr [EAX]
// 004259da: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 004259de: LEA EAX,[EBX + 0x8]
// 004259e1: MOV EAX,dword ptr [EAX]
// 004259e3: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 004259e7: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 004259ee: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x7c] (READ)
// 004259f2: FADD float ptr [EAX + 0x199ec]
// 004259f8: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x74] (READ)
// 004259fc: FXCH
// 004259fe: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x7c] (WRITE)
// 00425a02: FADD float ptr [EAX + 0x199f0]
// 00425a08: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x7c] (READ)
// 00425a0c: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00425a10: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x78] (READ)
// 00425a14: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x74] (WRITE)
// 00425a18: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00425a1c: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x74] (READ)
// 00425a20: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00425a24: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 00425a2b: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x18] (READ)
// 00425a2f: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00425a33: LEA EAX,[EBX*0x4 + 0x0]
// 00425a3a: SUB EAX,EBX
// 00425a3c: SHL EAX,0x4
// 00425a3f: NEG EAX
// 00425a41: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00425a45: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x1c] (READ)
// 00425a49: XOR EDI,EDI
// 00425a4b: SHL EAX,0x2
// 00425a4e: MOV dword ptr [ESP + 0x70],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00425a52: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00425a56: MOV EAX,dword ptr [ESP + 0x70]
//   Label: LAB_00425a56
//   XREF to: Stack[-0x14] (READ)
// 00425a5a: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00425a5e: FILD dword ptr [ESP + 0x78]
//   XREF to: Stack[-0xc] (READ)
// 00425a62: FMUL float ptr [0x0065b5c8]
//   XREF to: 0065b5c8 (READ)
// 00425a68: MOV EDI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x28] (READ)
// 00425a6c: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x2c] (READ)
// 00425a70: XOR EBX,EBX
// 00425a72: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x30] (READ)
// 00425a76: MOV ESI,EDI
// 00425a78: NEG EAX
// 00425a7a: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x7c] (READ)
// 00425a7e: ADD EBP,EAX
// 00425a80: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x4c] (WRITE)
// 00425a84: MOV dword ptr [ESP + 0x78],EBX
//   Label: LAB_00425a84
//   XREF to: Stack[-0xc] (WRITE)
// 00425a88: FILD dword ptr [ESP + 0x78]
//   XREF to: Stack[-0xc] (READ)
// 00425a8c: FMUL float ptr [0x0065b5c8]
//   XREF to: 0065b5c8 (READ)
// 00425a92: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x14] (READ)
// 00425a96: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x74] (READ)
// 00425a9a: MOV EDX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x18] (READ)
// 00425a9e: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x44] (WRITE)
// 00425aa2: CMP EAX,EDX
// 00425aa4: JL 0x00425b26
//   XREF to: 00425b26 (CONDITIONAL_JUMP)
// 00425aaa: CMP EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x24] (READ)
// 00425aae: JG 0x00425b26
//   XREF to: 00425b26 (CONDITIONAL_JUMP)
// 00425ab4: CMP EBX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x1c] (READ)
// 00425ab8: JL 0x00425b26
//   XREF to: 00425b26 (CONDITIONAL_JUMP)
// 00425aba: CMP EBX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x20] (READ)
// 00425abe: JG 0x00425b26
//   XREF to: 00425b26 (CONDITIONAL_JUMP)
// 00425ac0: MOV EAX,dword ptr [EBP + 0x822d08]
//   XREF to: 00822d08 (DATA)
//   XREF to: 00822d0c (DATA)
// 00425ac6: MOV dword ptr [ESI + 0x128b8],EAX
// 00425acc: ADD ESI,0x4
//   Label: LAB_00425acc
// 00425acf: ADD EBP,0x4
// 00425ad2: INC EBX
// 00425ad3: ADD EDI,0x4
// 00425ad6: CMP EBX,0xc
// 00425ad9: JL 0x00425a84
//   XREF to: 00425a84 (CONDITIONAL_JUMP)
// 00425adb: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x2c] (READ)
// 00425adf: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x14] (READ)
// 00425ae3: MOV ECX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x28] (READ)
// 00425ae7: ADD EBX,0x30
// 00425aea: INC ESI
// 00425aeb: ADD ECX,0x30
// 00425aee: MOV dword ptr [ESP + 0x58],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 00425af2: MOV dword ptr [ESP + 0x70],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00425af6: MOV dword ptr [ESP + 0x5c],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00425afa: CMP ESI,0xc
// 00425afd: JL 0x00425a56
//   XREF to: 00425a56 (CONDITIONAL_JUMP)
// 00425b03: MOV EBX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 00425b0a: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x34] (READ)
// 00425b0e: MOV dword ptr [EBX + 0x199e4],EAX
// 00425b14: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x10] (READ)
// 00425b18: MOV dword ptr [EBX + 0x199e8],EAX
// 00425b1e: POP ESI
// 00425b1f: POP EDI
// 00425b20: ADD ESP,0x74
//   Label: LAB_00425b20
// 00425b23: POP EBP
// 00425b24: POP EBX
// 00425b25: RET
// 00425b26: PUSH 0x0
//   Label: LAB_00425b26
// 00425b28: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x38] (DATA)
// 00425b2c: PUSH EAX
// 00425b2d: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x4c] (DATA)
// 00425b31: PUSH EAX
// 00425b32: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00425b37: CALL core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
//   XREF to: 004966f0 (UNCONDITIONAL_CALL)
// 00425b3c: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00425b43: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0xc] (READ)
// 00425b4a: ADD ESP,0x10
// 00425b4d: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x4] (READ)
// 00425b54: FSUB float ptr [EAX + 0x24]
// 00425b57: FSTP float ptr [EDI + 0x128b8]
// 00425b5d: JMP 0x00425acc
//   XREF to: 00425acc (UNCONDITIONAL_JUMP)

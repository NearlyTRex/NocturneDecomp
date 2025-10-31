// Name: core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
// Address: 0047c5f0
// Address Range: [[0047c5f0, 0047c92c]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0(CKeyFramedModel * this_ptr, CVector3f * rotation_angles)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e1ec [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Realign_object_00620583
//   double DOUBLE_00620593 = 0.318309886192889
//   double DOUBLE_0062059b = 32768
//   double DOUBLE_006205a3 = 0.000030517578125
//   double DOUBLE_006205ab = 3.14159265350000
//   double DOUBLE_006205b3 = 0.5
// Function calls:
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
          (CKeyFramedModel *this_ptr,CVector3f *rotation_angles)

{
  undefined4 extraout_EAX;
  int iVar1;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  int extraout_EAX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  byte bVar4;
  float10 in_ST0;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int aiStackY_1058 [1010];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_6c;
  int local_68;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  int iVar12;
  
  bVar4 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Realign object",0,0);
  local_84 = 0x47c61a;
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  fVar5 = (float10)DOUBLE_00620593;
  fVar6 = (float10)DOUBLE_0062059b;
  fVar7 = (float10)rotation_angles->x * fVar5 * fVar6;
  fVar8 = (float10)rotation_angles->z * fVar5 * fVar6;
  fVar6 = (float10)rotation_angles->y * fVar5 * fVar6;
  local_80 = 0x47c649;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  local_60 = (int)ROUND(fVar7);
  local_7c = 0x47c65d;
  dVar11 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),local_60 + 0x2000));
  local_5c = SUB84(dVar11,0) & 0xc000;
  local_58 = (int)ROUND(fVar8);
  dVar11 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),local_58 + 0x2000));
  local_54 = SUB84(dVar11,0) & 0xc000;
  local_5c = (int)ROUND(fVar6) + 0x2000U & 0xc000;
  fVar5 = (float10)DOUBLE_006205a3;
  fVar7 = (float10)DOUBLE_006205ab;
  fVar8 = (float10)local_58 * fVar5 * fVar7;
  fVar6 = (float10)fsin(fVar8);
  fVar8 = (float10)fcos(fVar8);
  fVar9 = (float10)local_54 * fVar5 * fVar7;
  fVar10 = (float10)fsin(fVar9);
  fVar9 = (float10)fcos(fVar9);
  fVar7 = (float10)local_5c * fVar5 * fVar7;
  fVar5 = (float10)fsin(fVar7);
  fVar7 = (float10)fcos(fVar7);
  local_3c = (float)fVar8;
  local_34 = (float)fVar10;
  local_44 = (float)fVar6;
  local_30 = (float)fVar9;
  local_40 = (float)fVar5;
  local_20 = local_40 * local_3c;
  local_38 = (float)fVar7;
  local_1c = local_38 * local_3c;
  fStack_14 = -local_44;
  local_48 = (float)(fVar7 * (float10)local_44);
  local_28 = (float)(fVar10 * (float10)local_3c);
  iVar12 = 0;
  local_18 = -local_38 * local_34 + (float)(fVar5 * (float10)local_44) * local_30;
  local_2c = local_34 * local_40 + local_48 * local_30;
  local_24 = (float)(fVar7 * (float10)local_44 * (float10)local_34 +
                    -(float10)local_40 * (float10)local_30);
  iVar2 = 0;
  while( true ) {
    iVar1 = this_ptr->vertex_count * this_ptr->frame_count;
    if (iVar1 - iVar12 == 0 || iVar1 < iVar12) break;
    puVar3 = (undefined4 *)((int)this_ptr->vertex_list + (uint)bVar4 * -8 + iVar2 + 4);
    *(undefined4 *)((int)&stack0xffffff94 + (uint)bVar4 * -8) = *puVar3;
    *(undefined4 *)((int)&stack0xffffff98 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         puVar3[(uint)bVar4 * -2 + 1];
    local_4c = (float)local_6c;
    local_50 = (float)local_68;
    local_7c = 0x47c842;
    dVar11 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
    fVar5 = (float10)dVar11;
    fVar7 = (float10)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,extraout_EAX_00));
    *(int *)((int)this_ptr->vertex_list + iVar2) = (int)ROUND(fVar7);
    local_7c = 0x47c899;
    dVar11 = crt_math_c_floor_FUN_005feb90((double)fVar5);
    fVar5 = (float10)dVar11;
    fVar7 = (float10)(double)CONCAT44(extraout_EDX_01,extraout_EAX_01);
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_01,this_ptr->vertex_list));
    *(int *)(SUB84(dVar11,0) + iVar2 + 4) = (int)ROUND(fVar7);
    local_7c = 0x47c8f3;
    dVar11 = crt_math_c_floor_FUN_005feb90((double)fVar5);
    in_ST0 = (float10)dVar11;
    fVar5 = (float10)(double)CONCAT44(extraout_EDX_02,extraout_EAX_02);
    local_68 = extraout_EAX_02;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_02,extraout_EAX_02));
    iVar12 = iVar12 + 1;
    *(int *)((int)this_ptr->vertex_list + iVar2 + 8) = (int)ROUND(fVar5);
    iVar2 = iVar2 + 0xc;
  }
  return;
}


// Assembly code:
// 0047c5f0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
// 0047c5f1: PUSH ESI
// 0047c5f2: PUSH EDI
// 0047c5f3: PUSH EBP
// 0047c5f4: MOV EBP,ESP
// 0047c5f6: SUB ESP,0x74
// 0047c5f9: AND ESP,0xfffffff8
// 0047c5fc: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0047c5ff: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0047c604: PUSH 0x0
// 0047c606: PUSH 0x0
// 0047c608: PUSH 0x620583
//   XREF to: 00620583 (DATA)
// 0047c60d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047c612: ADD ESP,0xc
// 0047c615: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0047c61a: FLD double ptr [0x00620593]
//   XREF to: 00620593 (READ)
// 0047c620: FLD float ptr [ESI]
// 0047c622: FMUL ST1
// 0047c624: FLD float ptr [ESI + 0x8]
// 0047c627: FMUL ST2
// 0047c629: FLD float ptr [ESI + 0x4]
// 0047c62c: FMULP ST3
// 0047c62e: FXCH
// 0047c630: FLD double ptr [0x0062059b]
//   XREF to: 0062059b (READ)
// 0047c636: FXCH
// 0047c638: FMUL ST1
// 0047c63a: FXCH ST2
// 0047c63c: FMUL ST1
// 0047c63e: FXCH ST3
// 0047c640: FMULP
// 0047c642: FXCH
// 0047c644: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047c649: FISTP dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (WRITE)
// 0047c64d: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (READ)
// 0047c651: ADD EAX,0x2000
// 0047c656: FXCH
// 0047c658: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047c65d: AND EAX,0xc000
// 0047c662: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (WRITE)
// 0047c666: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0047c66a: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (READ)
// 0047c66e: ADD EAX,0x2000
// 0047c673: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047c678: AND EAX,0xc000
// 0047c67d: FISTP dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x74] (WRITE)
// 0047c681: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0047c685: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x74] (READ)
// 0047c689: ADD EAX,0x2000
// 0047c68e: AND EAX,0xc000
// 0047c693: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0047c697: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (READ)
// 0047c69b: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047c69f: FLD double ptr [0x006205a3]
//   XREF to: 006205a3 (READ)
// 0047c6a5: FILD dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 0047c6a9: FMUL ST1
// 0047c6ab: FLD double ptr [0x006205ab]
//   XREF to: 006205ab (READ)
// 0047c6b1: FXCH
// 0047c6b3: FMUL ST1
// 0047c6b5: FLD ST0
// 0047c6b7: FSIN
// 0047c6b9: FXCH
// 0047c6bb: FCOS
// 0047c6bd: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (READ)
// 0047c6c1: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047c6c5: FILD dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 0047c6c9: FMUL ST4
// 0047c6cb: FMUL ST3
// 0047c6cd: FLD ST0
// 0047c6cf: FSIN
// 0047c6d1: FXCH
// 0047c6d3: FCOS
// 0047c6d5: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x74] (READ)
// 0047c6d9: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047c6dd: FILD dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 0047c6e1: FMULP ST6
// 0047c6e3: FXCH ST5
// 0047c6e5: FMULP ST4
// 0047c6e7: FLD ST3
// 0047c6e9: FSIN
// 0047c6eb: FXCH ST4
// 0047c6ed: FCOS
// 0047c6ef: FXCH ST2
// 0047c6f1: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (WRITE)
// 0047c6f5: FST float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (WRITE)
// 0047c6f9: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 0047c6fd: FXCH ST2
// 0047c6ff: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (WRITE)
// 0047c703: FXCH ST3
// 0047c705: FST float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (WRITE)
// 0047c709: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 0047c70d: FXCH ST2
// 0047c70f: FST float ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (WRITE)
// 0047c713: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (READ)
// 0047c717: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 0047c71b: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 0047c71f: FXCH
// 0047c721: FST float ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (WRITE)
// 0047c725: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0047c729: FXCH ST4
// 0047c72b: FST float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (WRITE)
// 0047c72f: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (READ)
// 0047c733: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 0047c737: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0047c73b: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 0047c73f: FXCH
// 0047c741: FADDP ST6,ST0
// 0047c743: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 0047c747: FXCH ST5
// 0047c749: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (WRITE)
// 0047c74d: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 0047c751: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0047c755: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (READ)
// 0047c759: FCHS
// 0047c75b: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0047c75f: FXCH
// 0047c761: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (WRITE)
// 0047c765: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0047c769: FXCH ST3
// 0047c76b: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (WRITE)
// 0047c76f: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (READ)
// 0047c773: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0047c777: FXCH ST4
// 0047c779: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (WRITE)
// 0047c77d: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 0047c781: FCHS
// 0047c783: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0047c787: FXCH ST2
// 0047c789: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (WRITE)
// 0047c78d: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0047c791: FMUL float ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 0047c795: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 0047c799: FCHS
// 0047c79b: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0047c79f: XOR EDX,EDX
// 0047c7a1: XOR EBX,EBX
// 0047c7a3: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0047c7a7: FXCH ST6
// 0047c7a9: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (WRITE)
// 0047c7ad: FXCH ST2
// 0047c7af: FADDP
// 0047c7b1: FXCH
// 0047c7b3: FADDP ST3,ST0
// 0047c7b5: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (WRITE)
// 0047c7b9: FADDP ST2,ST0
// 0047c7bb: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (WRITE)
// 0047c7bf: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0047c7c3: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_0047c7c3
//   XREF to: Stack[0x4] (READ)
// 0047c7c6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047c7c9: MOV ECX,dword ptr [EDX + 0x100]
// 0047c7cf: MOV EAX,dword ptr [EAX + 0x104]
// 0047c7d5: IMUL EAX,ECX
// 0047c7d8: CMP EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 0047c7dc: JG 0x0047c7e5
//   XREF to: 0047c7e5 (CONDITIONAL_JUMP)
// 0047c7de: MOV ESP,EBP
// 0047c7e0: POP EBP
// 0047c7e1: POP EDI
// 0047c7e2: POP ESI
// 0047c7e3: POP EBX
// 0047c7e4: RET
// 0047c7e5: MOV ESI,dword ptr [EDX + 0x10c]
//   Label: LAB_0047c7e5
// 0047c7eb: MOV EDI,ESP
// 0047c7ed: ADD ESI,EBX
// 0047c7ef: MOVSD ES:EDI,ESI
// 0047c7f0: MOVSD ES:EDI,ESI
// 0047c7f1: MOVSD ES:EDI,ESI
// 0047c7f2: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (READ)
// 0047c7f6: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047c7fa: FILD dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 0047c7fe: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0047c801: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (WRITE)
// 0047c805: FMUL float ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (READ)
// 0047c809: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047c80d: FILD dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 0047c811: FST float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (WRITE)
// 0047c815: FMUL float ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 0047c819: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (READ)
// 0047c81d: FADDP
// 0047c81f: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047c823: FILD dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 0047c827: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (WRITE)
// 0047c82b: FMUL float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (READ)
// 0047c82f: FADDP
// 0047c831: FADD double ptr [0x006205b3]
//   XREF to: 006205b3 (READ)
// 0047c837: SUB ESP,0x8
// 0047c83a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 0047c83d: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0047c842: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0047c846: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 0047c84a: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[-0x7c] (READ)
// 0047c84e: ADD ESP,0x8
// 0047c851: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (READ)
// 0047c855: FMUL float ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (READ)
// 0047c859: FLD float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 0047c85d: FMUL float ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 0047c861: FADDP
// 0047c863: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 0047c867: FMUL float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 0047c86b: FXCH ST2
// 0047c86d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047c872: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047c875: FISTP dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (WRITE)
// 0047c879: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 0047c87d: MOV EDX,dword ptr [EDX + 0x10c]
// 0047c883: FADDP
// 0047c885: MOV dword ptr [EDX + EBX*0x1],EAX
// 0047c888: FADD double ptr [0x006205b3]
//   XREF to: 006205b3 (READ)
// 0047c88e: SUB ESP,0x8
// 0047c891: FSTP double ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 0047c894: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0047c899: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0047c89d: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 0047c8a1: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[-0x7c] (READ)
// 0047c8a5: ADD ESP,0x8
// 0047c8a8: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (READ)
// 0047c8ac: FMUL float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 0047c8b0: FLD float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x1c] (READ)
// 0047c8b4: FMUL float ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 0047c8b8: FADDP
// 0047c8ba: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047c8bd: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 0047c8c1: FMUL float ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (READ)
// 0047c8c5: MOV EAX,dword ptr [EAX + 0x10c]
// 0047c8cb: FXCH ST2
// 0047c8cd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047c8d2: LEA EDX,[EAX + EBX*0x1]
// 0047c8d5: FISTP dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (WRITE)
// 0047c8d9: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 0047c8dd: FADDP
// 0047c8df: MOV dword ptr [EDX + 0x4],EAX
// 0047c8e2: FADD double ptr [0x006205b3]
//   XREF to: 006205b3 (READ)
// 0047c8e8: SUB ESP,0x8
// 0047c8eb: FSTP double ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 0047c8ee: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0047c8f3: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0047c8f7: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 0047c8fb: ADD EBX,0xc
// 0047c8fe: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[-0x7c] (READ)
// 0047c902: ADD ESP,0x8
// 0047c905: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047c90a: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047c90d: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 0047c911: FISTP dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (WRITE)
// 0047c915: INC EDI
// 0047c916: MOV EDX,dword ptr [EDX + 0x10c]
// 0047c91c: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 0047c920: MOV dword ptr [ESP + 0x64],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0047c924: MOV dword ptr [EDX + EBX*0x1 + -0x4],EAX
// 0047c928: JMP 0x0047c7c3
//   XREF to: 0047c7c3 (UNCONDITIONAL_JUMP)

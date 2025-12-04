// Name: shape_superopt.cpp_CPoly_transform_FUN_005ccc30
// Address: 005ccc30
// Address Range: [[005ccc30, 005cd0aa]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_transform_FUN_005ccc30(CPoly * this_ptr, CMatrix3x3d * matrix, CVector3d * pivot)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_transform_FUN_005ccc30
          (CPoly *this_ptr,CMatrix3x3d *matrix,CVector3d *pivot)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  double *pdVar2;
  double *pdVar3;
  undefined4 *puVar4;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined4 local_1a0 [4];
  undefined4 local_190;
  undefined4 local_18c;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined4 local_128 [4];
  undefined4 local_118;
  undefined4 local_114;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined4 local_e0 [4];
  undefined4 local_d0;
  undefined4 local_cc;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  CVert *local_20;
  CVert *local_1c;
  CVert *local_18;
  
  local_20 = this_ptr->parent_obj->vertex_data;
  local_18 = local_20 + this_ptr->vertex_idx_0;
  local_68 = (local_18->position).x - pivot->x;
  local_60 = (local_18->position).y - pivot->y;
  local_58 = (local_18->position).z - pivot->z;
  pdVar2 = &local_68;
  pdVar3 = &local_158;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar3 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  local_98 = matrix->m[0].z * local_148 + matrix->m[0].x * local_158 + matrix->m[0].y * local_150;
  local_90 = matrix->m[1].z * local_148 + matrix->m[1].x * local_158 + matrix->m[1].y * local_150;
  local_88 = matrix->m[2].z * local_148 + matrix->m[2].x * local_158 + matrix->m[2].y * local_150;
  pdVar2 = &local_98;
  pdVar3 = &local_140;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar3 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  local_50 = local_140 + pivot->x;
  local_48 = local_138 + pivot->y;
  local_40 = local_130 + pivot->z;
  pdVar2 = &local_50;
  puVar4 = local_128;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)&(local_18->position).x = local_128[0];
  *(undefined4 *)((int)&(local_18->position).x + 4) = local_128[1];
  *(undefined4 *)&(local_18->position).y = local_128[2];
  *(undefined4 *)((int)&(local_18->position).y + 4) = local_128[3];
  *(undefined4 *)&(local_18->position).z = local_118;
  *(undefined4 *)((int)&(local_18->position).z + 4) = local_114;
  local_18 = local_20 + this_ptr->vertex_idx_1;
  local_1b8 = (local_18->position).x - pivot->x;
  local_1b0 = (local_18->position).y - pivot->y;
  local_1a8 = (local_18->position).z - pivot->z;
  pdVar2 = &local_1b8;
  pdVar3 = &local_b0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar3 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  local_1d0 = matrix->m[0].z * local_a0 + matrix->m[0].x * local_b0 + matrix->m[0].y * local_a8;
  local_1c8 = matrix->m[1].z * local_a0 + matrix->m[1].x * local_b0 + matrix->m[1].y * local_a8;
  local_1c0 = matrix->m[2].z * local_a0 + matrix->m[2].x * local_b0 + matrix->m[2].y * local_a8;
  pdVar2 = &local_1d0;
  pdVar3 = &local_110;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar3 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  local_c8 = local_110 + pivot->x;
  local_c0 = local_108 + pivot->y;
  local_b8 = local_100 + pivot->z;
  pdVar2 = &local_c8;
  puVar4 = local_e0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)&(local_18->position).x = local_e0[0];
  *(undefined4 *)((int)&(local_18->position).x + 4) = local_e0[1];
  *(undefined4 *)&(local_18->position).y = local_e0[2];
  *(undefined4 *)((int)&(local_18->position).y + 4) = local_e0[3];
  *(undefined4 *)&(local_18->position).z = local_d0;
  *(undefined4 *)((int)&(local_18->position).z + 4) = local_cc;
  local_1c = local_20 + this_ptr->vertex_idx_2;
  local_170 = (local_1c->position).x - pivot->x;
  local_168 = (local_1c->position).y - pivot->y;
  local_160 = (local_1c->position).z - pivot->z;
  pdVar2 = &local_170;
  pdVar3 = &local_80;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar3 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  local_f8 = matrix->m[0].z * local_70 + matrix->m[0].x * local_80 + matrix->m[0].y * local_78;
  local_f0 = matrix->m[1].z * local_70 + matrix->m[1].x * local_80 + matrix->m[1].y * local_78;
  local_e8 = matrix->m[2].z * local_70 + matrix->m[2].x * local_80 + matrix->m[2].y * local_78;
  pdVar2 = &local_f8;
  pdVar3 = &local_188;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pdVar3 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  local_38 = local_188 + pivot->x;
  local_30 = local_180 + pivot->y;
  local_28 = local_178 + pivot->z;
  pdVar2 = &local_38;
  puVar4 = local_1a0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)&(local_1c->position).x = local_1a0[0];
  *(undefined4 *)((int)&(local_1c->position).x + 4) = local_1a0[1];
  *(undefined4 *)&(local_1c->position).y = local_1a0[2];
  *(undefined4 *)((int)&(local_1c->position).y + 4) = local_1a0[3];
  *(undefined4 *)&(local_1c->position).z = local_190;
  *(undefined4 *)((int)&(local_1c->position).z + 4) = local_18c;
  return;
}


// Assembly code:
// 005ccc30: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_transform_FUN_005ccc30
// 005ccc31: PUSH ESI
// 005ccc32: PUSH EDI
// 005ccc33: PUSH EBP
// 005ccc34: MOV EBP,ESP
// 005ccc36: SUB ESP,0x1bc
// 005ccc3c: AND ESP,0xfffffff8
// 005ccc3f: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ccc42: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005ccc45: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ccc48: MOV EAX,dword ptr [EAX]
// 005ccc4a: MOV EAX,dword ptr [EAX + 0x4]
// 005ccc4d: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005ccc54: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ccc57: MOV EAX,dword ptr [EAX + 0x4]
// 005ccc5a: SHL EAX,0x3
// 005ccc5d: MOV ECX,EAX
// 005ccc5f: SHL EAX,0x3
// 005ccc62: SUB EAX,ECX
// 005ccc64: MOV ECX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x20] (READ)
// 005ccc6b: ADD ECX,EAX
// 005ccc6d: LEA EDI,[ESP + 0x78]
//   XREF to: Stack[-0x158] (DATA)
// 005ccc71: LEA ESI,[ESP + 0x168]
//   XREF to: Stack[-0x68] (DATA)
// 005ccc78: FLD double ptr [ECX + 0x8]
// 005ccc7b: FLD double ptr [ECX + 0x10]
// 005ccc7e: FLD double ptr [ECX]
// 005ccc80: MOV dword ptr [ESP + 0x1b8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005ccc87: MOV ECX,0x6
// 005ccc8c: FSUB double ptr [EBX]
// 005ccc8e: FXCH ST2
// 005ccc90: FSUB double ptr [EBX + 0x8]
// 005ccc93: FXCH
// 005ccc95: FSUB double ptr [EBX + 0x10]
// 005ccc98: FXCH ST2
// 005ccc9a: FSTP double ptr [ESP + 0x168]
//   XREF to: Stack[-0x68] (WRITE)
// 005ccca1: FSTP double ptr [ESP + 0x170]
//   XREF to: Stack[-0x60] (WRITE)
// 005ccca8: FSTP double ptr [ESP + 0x178]
//   XREF to: Stack[-0x58] (WRITE)
// 005cccaf: MOVSD.REP ES:EDI,ESI
// 005cccb1: FLD double ptr [EDX + 0x8]
// 005cccb4: FMUL double ptr [ESP + 0x80]
//   XREF to: Stack[-0x150] (READ)
// 005cccbb: FLD double ptr [EDX + 0x20]
// 005cccbe: FMUL double ptr [ESP + 0x80]
//   XREF to: Stack[-0x150] (READ)
// 005cccc5: FLD double ptr [EDX + 0x38]
// 005cccc8: FMUL double ptr [ESP + 0x80]
//   XREF to: Stack[-0x150] (READ)
// 005ccccf: FLD double ptr [EDX]
// 005cccd1: FMUL double ptr [ESP + 0x78]
//   XREF to: Stack[-0x158] (READ)
// 005cccd5: FLD double ptr [EDX + 0x18]
// 005cccd8: FMUL double ptr [ESP + 0x78]
//   XREF to: Stack[-0x158] (READ)
// 005cccdc: FLD double ptr [EDX + 0x30]
// 005cccdf: FXCH ST2
// 005ccce1: FADDP ST5,ST0
// 005ccce3: FXCH
// 005ccce5: FMUL double ptr [ESP + 0x78]
//   XREF to: Stack[-0x158] (READ)
// 005ccce9: FLD double ptr [EDX + 0x10]
// 005cccec: FMUL double ptr [ESP + 0x88]
//   XREF to: Stack[-0x148] (READ)
// 005cccf3: FXCH ST2
// 005cccf5: FADDP ST4,ST0
// 005cccf7: FADDP ST2,ST0
// 005cccf9: FLD double ptr [EDX + 0x28]
// 005cccfc: FMUL double ptr [ESP + 0x88]
//   XREF to: Stack[-0x148] (READ)
// 005ccd03: FLD double ptr [EDX + 0x40]
// 005ccd06: FMUL double ptr [ESP + 0x88]
//   XREF to: Stack[-0x148] (READ)
// 005ccd0d: MOV ECX,0x6
// 005ccd12: LEA EDI,[ESP + 0x90]
//   XREF to: Stack[-0x140] (DATA)
// 005ccd19: LEA ESI,[ESP + 0x138]
//   XREF to: Stack[-0x98] (DATA)
// 005ccd20: FXCH ST2
// 005ccd22: FADDP ST5,ST0
// 005ccd24: FADDP ST3,ST0
// 005ccd26: FADDP
// 005ccd28: FXCH ST2
// 005ccd2a: FSTP double ptr [ESP + 0x138]
//   XREF to: Stack[-0x98] (WRITE)
// 005ccd31: FSTP double ptr [ESP + 0x140]
//   XREF to: Stack[-0x90] (WRITE)
// 005ccd38: FSTP double ptr [ESP + 0x148]
//   XREF to: Stack[-0x88] (WRITE)
// 005ccd3f: MOVSD.REP ES:EDI,ESI
// 005ccd41: FLD double ptr [ESP + 0x90]
//   XREF to: Stack[-0x140] (READ)
// 005ccd48: FLD double ptr [ESP + 0x98]
//   XREF to: Stack[-0x138] (READ)
// 005ccd4f: FLD double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x130] (READ)
// 005ccd56: MOV ECX,0x6
// 005ccd5b: LEA EDI,[ESP + 0xa8]
//   XREF to: Stack[-0x128] (DATA)
// 005ccd62: LEA ESI,[ESP + 0x180]
//   XREF to: Stack[-0x50] (DATA)
// 005ccd69: FXCH ST2
// 005ccd6b: FADD double ptr [EBX]
// 005ccd6d: FXCH
// 005ccd6f: FADD double ptr [EBX + 0x8]
// 005ccd72: FXCH ST2
// 005ccd74: FADD double ptr [EBX + 0x10]
// 005ccd77: FXCH
// 005ccd79: FSTP double ptr [ESP + 0x180]
//   XREF to: Stack[-0x50] (WRITE)
// 005ccd80: FXCH
// 005ccd82: FSTP double ptr [ESP + 0x188]
//   XREF to: Stack[-0x48] (WRITE)
// 005ccd89: FSTP double ptr [ESP + 0x190]
//   XREF to: Stack[-0x40] (WRITE)
// 005ccd90: MOVSD.REP ES:EDI,ESI
// 005ccd92: MOV ECX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005ccd99: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x128] (READ)
// 005ccda0: MOV dword ptr [ECX],EAX
// 005ccda2: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x124] (READ)
// 005ccda9: MOV dword ptr [ECX + 0x4],EAX
// 005ccdac: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x120] (READ)
// 005ccdb3: MOV dword ptr [ECX + 0x8],EAX
// 005ccdb6: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x11c] (READ)
// 005ccdbd: MOV dword ptr [ECX + 0xc],EAX
// 005ccdc0: MOV EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x118] (READ)
// 005ccdc7: MOV dword ptr [ECX + 0x10],EAX
// 005ccdca: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x114] (READ)
// 005ccdd1: MOV dword ptr [ECX + 0x14],EAX
// 005ccdd4: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ccdd7: MOV EAX,dword ptr [EAX + 0x8]
// 005ccdda: SHL EAX,0x3
// 005ccddd: MOV ECX,EAX
// 005ccddf: SHL EAX,0x3
// 005ccde2: SUB EAX,ECX
// 005ccde4: MOV ECX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x20] (READ)
// 005ccdeb: ADD ECX,EAX
// 005ccded: LEA EDI,[ESP + 0x120]
//   XREF to: Stack[-0xb0] (DATA)
// 005ccdf4: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x1b8] (DATA)
// 005ccdf8: FLD double ptr [ECX + 0x8]
// 005ccdfb: FLD double ptr [ECX + 0x10]
// 005ccdfe: FLD double ptr [ECX]
// 005cce00: MOV dword ptr [ESP + 0x1b8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005cce07: MOV ECX,0x6
// 005cce0c: FSUB double ptr [EBX]
// 005cce0e: FXCH ST2
// 005cce10: FSUB double ptr [EBX + 0x8]
// 005cce13: FXCH
// 005cce15: FSUB double ptr [EBX + 0x10]
// 005cce18: FXCH ST2
// 005cce1a: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x1b8] (WRITE)
// 005cce1e: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1b0] (WRITE)
// 005cce22: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x1a8] (WRITE)
// 005cce26: MOVSD.REP ES:EDI,ESI
// 005cce28: FLD double ptr [EDX + 0x8]
// 005cce2b: FMUL double ptr [ESP + 0x128]
//   XREF to: Stack[-0xa8] (READ)
// 005cce32: FLD double ptr [EDX + 0x20]
// 005cce35: FMUL double ptr [ESP + 0x128]
//   XREF to: Stack[-0xa8] (READ)
// 005cce3c: FLD double ptr [EDX + 0x38]
// 005cce3f: FMUL double ptr [ESP + 0x128]
//   XREF to: Stack[-0xa8] (READ)
// 005cce46: FLD double ptr [EDX]
// 005cce48: FMUL double ptr [ESP + 0x120]
//   XREF to: Stack[-0xb0] (READ)
// 005cce4f: FLD double ptr [EDX + 0x18]
// 005cce52: FMUL double ptr [ESP + 0x120]
//   XREF to: Stack[-0xb0] (READ)
// 005cce59: FLD double ptr [EDX + 0x30]
// 005cce5c: FXCH ST2
// 005cce5e: FADDP ST5,ST0
// 005cce60: FXCH
// 005cce62: FMUL double ptr [ESP + 0x120]
//   XREF to: Stack[-0xb0] (READ)
// 005cce69: FLD double ptr [EDX + 0x10]
// 005cce6c: FMUL double ptr [ESP + 0x130]
//   XREF to: Stack[-0xa0] (READ)
// 005cce73: FXCH ST2
// 005cce75: FADDP ST4,ST0
// 005cce77: FADDP ST2,ST0
// 005cce79: FLD double ptr [EDX + 0x28]
// 005cce7c: FMUL double ptr [ESP + 0x130]
//   XREF to: Stack[-0xa0] (READ)
// 005cce83: FLD double ptr [EDX + 0x40]
// 005cce86: FMUL double ptr [ESP + 0x130]
//   XREF to: Stack[-0xa0] (READ)
// 005cce8d: MOV ECX,0x6
// 005cce92: LEA EDI,[ESP + 0xc0]
//   XREF to: Stack[-0x110] (DATA)
// 005cce99: MOV ESI,ESP
// 005cce9b: FXCH ST2
// 005cce9d: FADDP ST5,ST0
// 005cce9f: FADDP ST3,ST0
// 005ccea1: FADDP
// 005ccea3: FXCH ST2
// 005ccea5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1d0] (DATA)
// 005ccea8: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c8] (WRITE)
// 005cceac: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c0] (WRITE)
// 005cceb0: MOVSD.REP ES:EDI,ESI
// 005cceb2: FLD double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x110] (READ)
// 005cceb9: FLD double ptr [ESP + 0xc8]
//   XREF to: Stack[-0x108] (READ)
// 005ccec0: FLD double ptr [ESP + 0xd0]
//   XREF to: Stack[-0x100] (READ)
// 005ccec7: MOV ECX,0x6
// 005ccecc: LEA EDI,[ESP + 0xf0]
//   XREF to: Stack[-0xe0] (DATA)
// 005cced3: LEA ESI,[ESP + 0x108]
//   XREF to: Stack[-0xc8] (DATA)
// 005cceda: FXCH ST2
// 005ccedc: FADD double ptr [EBX]
// 005ccede: FXCH
// 005ccee0: FADD double ptr [EBX + 0x8]
// 005ccee3: FXCH ST2
// 005ccee5: FADD double ptr [EBX + 0x10]
// 005ccee8: FXCH
// 005cceea: FSTP double ptr [ESP + 0x108]
//   XREF to: Stack[-0xc8] (WRITE)
// 005ccef1: FXCH
// 005ccef3: FSTP double ptr [ESP + 0x110]
//   XREF to: Stack[-0xc0] (WRITE)
// 005ccefa: FSTP double ptr [ESP + 0x118]
//   XREF to: Stack[-0xb8] (WRITE)
// 005ccf01: MOVSD.REP ES:EDI,ESI
// 005ccf03: MOV ECX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x18] (READ)
// 005ccf0a: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0xe0] (READ)
// 005ccf11: MOV dword ptr [ECX],EAX
// 005ccf13: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0xdc] (READ)
// 005ccf1a: MOV dword ptr [ECX + 0x4],EAX
// 005ccf1d: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0xd8] (READ)
// 005ccf24: MOV dword ptr [ECX + 0x8],EAX
// 005ccf27: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0xd4] (READ)
// 005ccf2e: MOV dword ptr [ECX + 0xc],EAX
// 005ccf31: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0xd0] (READ)
// 005ccf38: MOV dword ptr [ECX + 0x10],EAX
// 005ccf3b: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0xcc] (READ)
// 005ccf42: MOV dword ptr [ECX + 0x14],EAX
// 005ccf45: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ccf48: MOV EAX,dword ptr [EAX + 0xc]
// 005ccf4b: SHL EAX,0x3
// 005ccf4e: MOV ECX,EAX
// 005ccf50: SHL EAX,0x3
// 005ccf53: SUB EAX,ECX
// 005ccf55: MOV ECX,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x20] (READ)
// 005ccf5c: ADD ECX,EAX
// 005ccf5e: LEA EDI,[ESP + 0x150]
//   XREF to: Stack[-0x80] (DATA)
// 005ccf65: LEA ESI,[ESP + 0x60]
//   XREF to: Stack[-0x170] (DATA)
// 005ccf69: FLD double ptr [ECX + 0x8]
// 005ccf6c: FLD double ptr [ECX + 0x10]
// 005ccf6f: FLD double ptr [ECX]
// 005ccf71: MOV dword ptr [ESP + 0x1b4],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005ccf78: MOV ECX,0x6
// 005ccf7d: FSUB double ptr [EBX]
// 005ccf7f: FXCH ST2
// 005ccf81: FSUB double ptr [EBX + 0x8]
// 005ccf84: FXCH
// 005ccf86: FSUB double ptr [EBX + 0x10]
// 005ccf89: FXCH ST2
// 005ccf8b: FSTP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x170] (WRITE)
// 005ccf8f: FSTP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x168] (WRITE)
// 005ccf93: FSTP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x160] (WRITE)
// 005ccf97: MOVSD.REP ES:EDI,ESI
// 005ccf99: FLD double ptr [EDX + 0x8]
// 005ccf9c: FMUL double ptr [ESP + 0x158]
//   XREF to: Stack[-0x78] (READ)
// 005ccfa3: FLD double ptr [EDX + 0x20]
// 005ccfa6: FMUL double ptr [ESP + 0x158]
//   XREF to: Stack[-0x78] (READ)
// 005ccfad: FLD double ptr [EDX + 0x38]
// 005ccfb0: FMUL double ptr [ESP + 0x158]
//   XREF to: Stack[-0x78] (READ)
// 005ccfb7: FLD double ptr [EDX]
// 005ccfb9: FMUL double ptr [ESP + 0x150]
//   XREF to: Stack[-0x80] (READ)
// 005ccfc0: FLD double ptr [EDX + 0x18]
// 005ccfc3: FMUL double ptr [ESP + 0x150]
//   XREF to: Stack[-0x80] (READ)
// 005ccfca: FLD double ptr [EDX + 0x30]
// 005ccfcd: FXCH ST2
// 005ccfcf: FADDP ST5,ST0
// 005ccfd1: FXCH
// 005ccfd3: FMUL double ptr [ESP + 0x150]
//   XREF to: Stack[-0x80] (READ)
// 005ccfda: FLD double ptr [EDX + 0x10]
// 005ccfdd: FMUL double ptr [ESP + 0x160]
//   XREF to: Stack[-0x70] (READ)
// 005ccfe4: FXCH ST2
// 005ccfe6: FADDP ST4,ST0
// 005ccfe8: FADDP ST2,ST0
// 005ccfea: FLD double ptr [EDX + 0x28]
// 005ccfed: FMUL double ptr [ESP + 0x160]
//   XREF to: Stack[-0x70] (READ)
// 005ccff4: FLD double ptr [EDX + 0x40]
// 005ccff7: FMUL double ptr [ESP + 0x160]
//   XREF to: Stack[-0x70] (READ)
// 005ccffe: MOV ECX,0x6
// 005cd003: LEA EDI,[ESP + 0x48]
//   XREF to: Stack[-0x188] (DATA)
// 005cd007: LEA ESI,[ESP + 0xd8]
//   XREF to: Stack[-0xf8] (DATA)
// 005cd00e: FXCH ST2
// 005cd010: FADDP ST5,ST0
// 005cd012: FADDP ST3,ST0
// 005cd014: FADDP
// 005cd016: FXCH ST2
// 005cd018: FSTP double ptr [ESP + 0xd8]
//   XREF to: Stack[-0xf8] (WRITE)
// 005cd01f: FSTP double ptr [ESP + 0xe0]
//   XREF to: Stack[-0xf0] (WRITE)
// 005cd026: FSTP double ptr [ESP + 0xe8]
//   XREF to: Stack[-0xe8] (WRITE)
// 005cd02d: MOVSD.REP ES:EDI,ESI
// 005cd02f: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x188] (READ)
// 005cd033: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0x180] (READ)
// 005cd037: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x178] (READ)
// 005cd03b: MOV ECX,0x6
// 005cd040: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x1a0] (DATA)
// 005cd044: LEA ESI,[ESP + 0x198]
//   XREF to: Stack[-0x38] (DATA)
// 005cd04b: FXCH ST2
// 005cd04d: FADD double ptr [EBX]
// 005cd04f: FXCH
// 005cd051: FADD double ptr [EBX + 0x8]
// 005cd054: FXCH ST2
// 005cd056: FADD double ptr [EBX + 0x10]
// 005cd059: FXCH
// 005cd05b: FSTP double ptr [ESP + 0x198]
//   XREF to: Stack[-0x38] (WRITE)
// 005cd062: FXCH
// 005cd064: FSTP double ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x30] (WRITE)
// 005cd06b: FSTP double ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x28] (WRITE)
// 005cd072: MOVSD.REP ES:EDI,ESI
// 005cd074: MOV EDX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x1c] (READ)
// 005cd07b: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x1a0] (READ)
// 005cd07f: MOV dword ptr [EDX],EAX
// 005cd081: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x19c] (READ)
// 005cd085: MOV dword ptr [EDX + 0x4],EAX
// 005cd088: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x198] (READ)
// 005cd08c: MOV dword ptr [EDX + 0x8],EAX
// 005cd08f: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x194] (READ)
// 005cd093: MOV dword ptr [EDX + 0xc],EAX
// 005cd096: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x190] (READ)
// 005cd09a: MOV dword ptr [EDX + 0x10],EAX
// 005cd09d: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x18c] (READ)
// 005cd0a1: MOV dword ptr [EDX + 0x14],EAX
// 005cd0a4: MOV ESP,EBP
// 005cd0a6: POP EBP
// 005cd0a7: POP EDI
// 005cd0a8: POP ESI
// 005cd0a9: POP EBX
// 005cd0aa: RET

// Name: shape_superopt.cpp_CPoly_scale_FUN_005cc7c0
// Address: 005cc7c0
// Address Range: [[005cc7c0, 005ccc2e]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_scale_FUN_005cc7c0(CPoly * this_ptr, CVector3d * scale, CVector3d * pivot)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_scale_FUN_005cc7c0(CPoly *this_ptr,CVector3d *scale,CVector3d *pivot)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  CVert *pCVar5;
  BADSPACEBASE *in_ESP;
  double *pdVar6;
  double *pdVar7;
  undefined4 *puVar8;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  undefined4 local_1c8 [4];
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  double local_198;
  double local_190;
  double local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  double local_168;
  double local_160;
  double local_158;
  undefined4 local_150 [4];
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  double local_a8;
  double local_a0;
  double local_98;
  undefined4 local_90 [4];
  undefined4 local_80;
  undefined4 local_7c;
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
  double local_20;
  CVert *local_18;
  
  local_18 = this_ptr->parent_obj->vertex_data;
  local_c0 = *(undefined4 *)&scale->x;
  uStack_bc = *(undefined4 *)((int)&scale->x + 4);
  local_b8 = *(undefined4 *)&scale->y;
  uStack_b4 = *(undefined4 *)((int)&scale->y + 4);
  local_b0 = *(undefined4 *)&scale->z;
  uStack_ac = *(undefined4 *)((int)&scale->z + 4);
  pCVar5 = local_18 + this_ptr->vertex_idx_0;
  local_108 = (pCVar5->position).x - pivot->x;
  local_100 = (pCVar5->position).y - pivot->y;
  local_f8 = (pCVar5->position).z - pivot->z;
  pdVar6 = &local_108;
  pdVar7 = &local_210;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar7 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  local_60 = local_210 * (double)CONCAT44(uStack_bc,local_c0);
  local_58 = local_208 * (double)CONCAT44(uStack_b4,local_b8);
  local_50 = local_200 * (double)CONCAT44(uStack_ac,local_b0);
  pdVar6 = &local_60;
  pdVar7 = &local_a8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar7 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  local_f0 = local_a8 + pivot->x;
  local_e8 = local_a0 + pivot->y;
  local_e0 = local_98 + pivot->z;
  pdVar6 = &local_f0;
  puVar8 = local_90;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)&(pCVar5->position).x = local_90[0];
  *(undefined4 *)((int)&(pCVar5->position).x + 4) = local_90[1];
  *(undefined4 *)&(pCVar5->position).y = local_90[2];
  *(undefined4 *)((int)&(pCVar5->position).y + 4) = local_90[3];
  *(undefined4 *)&(pCVar5->position).z = local_80;
  *(undefined4 *)((int)&(pCVar5->position).z + 4) = local_7c;
  local_180 = *(undefined4 *)&scale->x;
  dVar1 = scale->x;
  uStack_17c = *(undefined4 *)((int)&scale->x + 4);
  local_178 = *(undefined4 *)&scale->y;
  dVar2 = scale->y;
  uStack_174 = *(undefined4 *)((int)&scale->y + 4);
  local_170 = *(undefined4 *)&scale->z;
  dVar3 = scale->z;
  uStack_16c = *(undefined4 *)((int)&scale->z + 4);
  pCVar5 = local_18 + this_ptr->vertex_idx_1;
  local_168 = (pCVar5->position).x - pivot->x;
  local_160 = (pCVar5->position).y - pivot->y;
  local_158 = (pCVar5->position).z - pivot->z;
  pdVar6 = &local_168;
  pdVar7 = &local_78;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar7 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  local_138 = local_78 * dVar1;
  local_130 = local_70 * dVar2;
  local_128 = local_68 * dVar3;
  pdVar6 = &local_138;
  pdVar7 = &local_d8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar7 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  local_48 = local_d8 + pivot->x;
  local_40 = local_d0 + pivot->y;
  local_38 = local_c8 + pivot->z;
  pdVar6 = &local_48;
  puVar8 = local_150;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)&(pCVar5->position).x = local_150[0];
  *(undefined4 *)((int)&(pCVar5->position).x + 4) = local_150[1];
  *(undefined4 *)&(pCVar5->position).y = local_150[2];
  *(undefined4 *)((int)&(pCVar5->position).y + 4) = local_150[3];
  *(undefined4 *)&(pCVar5->position).z = local_140;
  *(undefined4 *)((int)&(pCVar5->position).z + 4) = local_13c;
  local_1b0 = *(undefined4 *)&scale->x;
  dVar1 = scale->x;
  uStack_1ac = *(undefined4 *)((int)&scale->x + 4);
  local_1a8 = *(undefined4 *)&scale->y;
  dVar2 = scale->y;
  uStack_1a4 = *(undefined4 *)((int)&scale->y + 4);
  local_1a0 = *(undefined4 *)&scale->z;
  dVar3 = scale->z;
  uStack_19c = *(undefined4 *)((int)&scale->z + 4);
  pCVar5 = local_18 + this_ptr->vertex_idx_2;
  local_1f8 = (pCVar5->position).x - pivot->x;
  local_1f0 = (pCVar5->position).y - pivot->y;
  local_1e8 = (pCVar5->position).z - pivot->z;
  pdVar6 = &local_1f8;
  pdVar7 = &local_30;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar7 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  local_1e0 = local_30 * dVar1;
  local_1d8 = local_28 * dVar2;
  local_1d0 = local_20 * dVar3;
  pdVar6 = &local_1e0;
  pdVar7 = &local_120;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar7 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    pdVar7 = (double *)((int)pdVar7 + 4);
  }
  local_198 = local_120 + pivot->x;
  local_190 = local_118 + pivot->y;
  local_188 = local_110 + pivot->z;
  pdVar6 = &local_198;
  puVar8 = local_1c8;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *(undefined4 *)pdVar6;
    pdVar6 = (double *)((int)pdVar6 + 4);
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)&(pCVar5->position).x = local_1c8[0];
  *(undefined4 *)((int)&(pCVar5->position).x + 4) = local_1c8[1];
  *(undefined4 *)&(pCVar5->position).y = local_1c8[2];
  *(undefined4 *)((int)&(pCVar5->position).y + 4) = local_1c8[3];
  *(undefined4 *)&(pCVar5->position).z = local_1b8;
  *(undefined4 *)((int)&(pCVar5->position).z + 4) = local_1b4;
  return;
}


// Assembly code:
// 005cc7c0: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_scale_FUN_005cc7c0
// 005cc7c1: PUSH ESI
// 005cc7c2: PUSH EDI
// 005cc7c3: PUSH EBP
// 005cc7c4: MOV EBP,ESP
// 005cc7c6: SUB ESP,0x1fc
// 005cc7cc: AND ESP,0xfffffff8
// 005cc7cf: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005cc7d2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cc7d5: MOV EAX,dword ptr [EAX]
// 005cc7d7: MOV EAX,dword ptr [EAX + 0x4]
// 005cc7da: MOV dword ptr [ESP + 0x1f8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005cc7e1: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cc7e4: MOV EAX,dword ptr [EAX]
// 005cc7e6: MOV dword ptr [ESP + 0x150],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 005cc7ed: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cc7f0: MOV EAX,dword ptr [EAX + 0x4]
// 005cc7f3: MOV dword ptr [ESP + 0x154],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 005cc7fa: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cc7fd: MOV EAX,dword ptr [EAX + 0x8]
// 005cc800: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005cc807: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cc80a: MOV EAX,dword ptr [EAX + 0xc]
// 005cc80d: MOV dword ptr [ESP + 0x15c],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005cc814: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cc817: MOV EAX,dword ptr [EAX + 0x10]
// 005cc81a: MOV dword ptr [ESP + 0x160],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005cc821: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cc824: MOV EAX,dword ptr [EAX + 0x14]
// 005cc827: MOV dword ptr [ESP + 0x164],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005cc82e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cc831: MOV EAX,dword ptr [EAX + 0x4]
// 005cc834: SHL EAX,0x3
// 005cc837: MOV EBX,EAX
// 005cc839: SHL EAX,0x3
// 005cc83c: SUB EAX,EBX
// 005cc83e: MOV EBX,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x18] (READ)
// 005cc845: MOV ECX,0x6
// 005cc84a: ADD EBX,EAX
// 005cc84c: MOV EDI,ESP
// 005cc84e: LEA ESI,[ESP + 0x108]
//   XREF to: Stack[-0x108] (DATA)
// 005cc855: FLD double ptr [EBX]
// 005cc857: FLD double ptr [EBX + 0x8]
// 005cc85a: FLD double ptr [EBX + 0x10]
// 005cc85d: FXCH ST2
// 005cc85f: FSUB double ptr [EDX]
// 005cc861: FXCH
// 005cc863: FSUB double ptr [EDX + 0x8]
// 005cc866: FXCH ST2
// 005cc868: FSUB double ptr [EDX + 0x10]
// 005cc86b: FXCH
// 005cc86d: FSTP double ptr [ESP + 0x108]
//   XREF to: Stack[-0x108] (WRITE)
// 005cc874: FXCH
// 005cc876: FSTP double ptr [ESP + 0x110]
//   XREF to: Stack[-0x100] (WRITE)
// 005cc87d: FSTP double ptr [ESP + 0x118]
//   XREF to: Stack[-0xf8] (WRITE)
// 005cc884: MOVSD.REP ES:EDI,ESI
// 005cc886: FLD double ptr [ESP]
//   XREF to: Stack[-0x210] (DATA)
// 005cc889: FMUL double ptr [ESP + 0x150]
//   XREF to: Stack[-0xc0] (READ)
// 005cc890: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x208] (READ)
// 005cc894: FMUL double ptr [ESP + 0x158]
//   XREF to: Stack[-0xb8] (READ)
// 005cc89b: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x200] (READ)
// 005cc89f: FMUL double ptr [ESP + 0x160]
//   XREF to: Stack[-0xb0] (READ)
// 005cc8a6: MOV ECX,0x6
// 005cc8ab: LEA EDI,[ESP + 0x168]
//   XREF to: Stack[-0xa8] (DATA)
// 005cc8b2: LEA ESI,[ESP + 0x1b0]
//   XREF to: Stack[-0x60] (DATA)
// 005cc8b9: FXCH ST2
// 005cc8bb: FSTP double ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x60] (WRITE)
// 005cc8c2: FSTP double ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x58] (WRITE)
// 005cc8c9: FSTP double ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x50] (WRITE)
// 005cc8d0: MOVSD.REP ES:EDI,ESI
// 005cc8d2: FLD double ptr [ESP + 0x168]
//   XREF to: Stack[-0xa8] (READ)
// 005cc8d9: FLD double ptr [ESP + 0x170]
//   XREF to: Stack[-0xa0] (READ)
// 005cc8e0: FLD double ptr [ESP + 0x178]
//   XREF to: Stack[-0x98] (READ)
// 005cc8e7: MOV ECX,0x6
// 005cc8ec: LEA EDI,[ESP + 0x180]
//   XREF to: Stack[-0x90] (DATA)
// 005cc8f3: LEA ESI,[ESP + 0x120]
//   XREF to: Stack[-0xf0] (DATA)
// 005cc8fa: FXCH ST2
// 005cc8fc: FADD double ptr [EDX]
// 005cc8fe: FXCH
// 005cc900: FADD double ptr [EDX + 0x8]
// 005cc903: FXCH ST2
// 005cc905: FADD double ptr [EDX + 0x10]
// 005cc908: FXCH
// 005cc90a: FSTP double ptr [ESP + 0x120]
//   XREF to: Stack[-0xf0] (WRITE)
// 005cc911: FXCH
// 005cc913: FSTP double ptr [ESP + 0x128]
//   XREF to: Stack[-0xe8] (WRITE)
// 005cc91a: FSTP double ptr [ESP + 0x130]
//   XREF to: Stack[-0xe0] (WRITE)
// 005cc921: MOVSD.REP ES:EDI,ESI
// 005cc923: MOV EAX,dword ptr [ESP + 0x180]
//   XREF to: Stack[-0x90] (READ)
// 005cc92a: MOV dword ptr [EBX],EAX
// 005cc92c: MOV EAX,dword ptr [ESP + 0x184]
//   XREF to: Stack[-0x8c] (READ)
// 005cc933: MOV dword ptr [EBX + 0x4],EAX
// 005cc936: MOV EAX,dword ptr [ESP + 0x188]
//   XREF to: Stack[-0x88] (READ)
// 005cc93d: MOV dword ptr [EBX + 0x8],EAX
// 005cc940: MOV EAX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[-0x84] (READ)
// 005cc947: MOV dword ptr [EBX + 0xc],EAX
// 005cc94a: MOV EAX,dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x80] (READ)
// 005cc951: MOV dword ptr [EBX + 0x10],EAX
// 005cc954: MOV EAX,dword ptr [ESP + 0x194]
//   XREF to: Stack[-0x7c] (READ)
// 005cc95b: MOV dword ptr [EBX + 0x14],EAX
// 005cc95e: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cc961: MOV EAX,dword ptr [EAX]
// 005cc963: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x180] (WRITE)
// 005cc96a: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cc96d: MOV EAX,dword ptr [EAX + 0x4]
// 005cc970: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x17c] (WRITE)
// 005cc977: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cc97a: MOV EAX,dword ptr [EAX + 0x8]
// 005cc97d: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x178] (WRITE)
// 005cc984: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cc987: MOV EAX,dword ptr [EAX + 0xc]
// 005cc98a: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x174] (WRITE)
// 005cc991: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cc994: MOV EAX,dword ptr [EAX + 0x10]
// 005cc997: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x170] (WRITE)
// 005cc99e: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005cc9a1: MOV EAX,dword ptr [EAX + 0x14]
// 005cc9a4: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x16c] (WRITE)
// 005cc9ab: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005cc9ae: MOV EAX,dword ptr [EAX + 0x8]
// 005cc9b1: SHL EAX,0x3
// 005cc9b4: MOV EBX,EAX
// 005cc9b6: SHL EAX,0x3
// 005cc9b9: SUB EAX,EBX
// 005cc9bb: MOV EBX,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x18] (READ)
// 005cc9c2: MOV ECX,0x6
// 005cc9c7: ADD EBX,EAX
// 005cc9c9: LEA EDI,[ESP + 0x198]
//   XREF to: Stack[-0x78] (DATA)
// 005cc9d0: LEA ESI,[ESP + 0xa8]
//   XREF to: Stack[-0x168] (DATA)
// 005cc9d7: FLD double ptr [EBX]
// 005cc9d9: FLD double ptr [EBX + 0x8]
// 005cc9dc: FLD double ptr [EBX + 0x10]
// 005cc9df: FXCH ST2
// 005cc9e1: FSUB double ptr [EDX]
// 005cc9e3: FXCH
// 005cc9e5: FSUB double ptr [EDX + 0x8]
// 005cc9e8: FXCH ST2
// 005cc9ea: FSUB double ptr [EDX + 0x10]
// 005cc9ed: FXCH
// 005cc9ef: FSTP double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x168] (WRITE)
// 005cc9f6: FXCH
// 005cc9f8: FSTP double ptr [ESP + 0xb0]
//   XREF to: Stack[-0x160] (WRITE)
// 005cc9ff: FSTP double ptr [ESP + 0xb8]
//   XREF to: Stack[-0x158] (WRITE)
// 005cca06: MOVSD.REP ES:EDI,ESI
// 005cca08: FLD double ptr [ESP + 0x198]
//   XREF to: Stack[-0x78] (READ)
// 005cca0f: FMUL double ptr [ESP + 0x90]
//   XREF to: Stack[-0x180] (READ)
// 005cca16: FLD double ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x70] (READ)
// 005cca1d: FMUL double ptr [ESP + 0x98]
//   XREF to: Stack[-0x178] (READ)
// 005cca24: FLD double ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x68] (READ)
// 005cca2b: FMUL double ptr [ESP + 0xa0]
//   XREF to: Stack[-0x170] (READ)
// 005cca32: MOV ECX,0x6
// 005cca37: LEA EDI,[ESP + 0x138]
//   XREF to: Stack[-0xd8] (DATA)
// 005cca3e: LEA ESI,[ESP + 0xd8]
//   XREF to: Stack[-0x138] (DATA)
// 005cca45: FXCH ST2
// 005cca47: FSTP double ptr [ESP + 0xd8]
//   XREF to: Stack[-0x138] (WRITE)
// 005cca4e: FSTP double ptr [ESP + 0xe0]
//   XREF to: Stack[-0x130] (WRITE)
// 005cca55: FSTP double ptr [ESP + 0xe8]
//   XREF to: Stack[-0x128] (WRITE)
// 005cca5c: MOVSD.REP ES:EDI,ESI
// 005cca5e: FLD double ptr [ESP + 0x138]
//   XREF to: Stack[-0xd8] (READ)
// 005cca65: FLD double ptr [ESP + 0x140]
//   XREF to: Stack[-0xd0] (READ)
// 005cca6c: FLD double ptr [ESP + 0x148]
//   XREF to: Stack[-0xc8] (READ)
// 005cca73: MOV ECX,0x6
// 005cca78: LEA EDI,[ESP + 0xc0]
//   XREF to: Stack[-0x150] (DATA)
// 005cca7f: LEA ESI,[ESP + 0x1c8]
//   XREF to: Stack[-0x48] (DATA)
// 005cca86: FXCH ST2
// 005cca88: FADD double ptr [EDX]
// 005cca8a: FXCH
// 005cca8c: FADD double ptr [EDX + 0x8]
// 005cca8f: FXCH ST2
// 005cca91: FADD double ptr [EDX + 0x10]
// 005cca94: FXCH
// 005cca96: FSTP double ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x48] (WRITE)
// 005cca9d: FXCH
// 005cca9f: FSTP double ptr [ESP + 0x1d0]
//   XREF to: Stack[-0x40] (WRITE)
// 005ccaa6: FSTP double ptr [ESP + 0x1d8]
//   XREF to: Stack[-0x38] (WRITE)
// 005ccaad: MOVSD.REP ES:EDI,ESI
// 005ccaaf: MOV EAX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x150] (READ)
// 005ccab6: MOV dword ptr [EBX],EAX
// 005ccab8: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x14c] (READ)
// 005ccabf: MOV dword ptr [EBX + 0x4],EAX
// 005ccac2: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x148] (READ)
// 005ccac9: MOV dword ptr [EBX + 0x8],EAX
// 005ccacc: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x144] (READ)
// 005ccad3: MOV dword ptr [EBX + 0xc],EAX
// 005ccad6: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x140] (READ)
// 005ccadd: MOV dword ptr [EBX + 0x10],EAX
// 005ccae0: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x13c] (READ)
// 005ccae7: MOV dword ptr [EBX + 0x14],EAX
// 005ccaea: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ccaed: MOV EAX,dword ptr [EAX]
// 005ccaef: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x1b0] (WRITE)
// 005ccaf3: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ccaf6: MOV EAX,dword ptr [EAX + 0x4]
// 005ccaf9: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x1ac] (WRITE)
// 005ccafd: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ccb00: MOV EAX,dword ptr [EAX + 0x8]
// 005ccb03: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 005ccb07: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ccb0a: MOV EAX,dword ptr [EAX + 0xc]
// 005ccb0d: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 005ccb11: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ccb14: MOV EAX,dword ptr [EAX + 0x10]
// 005ccb17: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 005ccb1b: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ccb1e: MOV EAX,dword ptr [EAX + 0x14]
// 005ccb21: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 005ccb25: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ccb28: MOV EAX,dword ptr [EAX + 0xc]
// 005ccb2b: SHL EAX,0x3
// 005ccb2e: MOV EBX,EAX
// 005ccb30: SHL EAX,0x3
// 005ccb33: SUB EAX,EBX
// 005ccb35: MOV EBX,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x18] (READ)
// 005ccb3c: MOV ECX,0x6
// 005ccb41: ADD EBX,EAX
// 005ccb43: LEA EDI,[ESP + 0x1e0]
//   XREF to: Stack[-0x30] (DATA)
// 005ccb4a: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x1f8] (DATA)
// 005ccb4e: FLD double ptr [EBX]
// 005ccb50: FLD double ptr [EBX + 0x8]
// 005ccb53: FLD double ptr [EBX + 0x10]
// 005ccb56: FXCH ST2
// 005ccb58: FSUB double ptr [EDX]
// 005ccb5a: FXCH
// 005ccb5c: FSUB double ptr [EDX + 0x8]
// 005ccb5f: FXCH ST2
// 005ccb61: FSUB double ptr [EDX + 0x10]
// 005ccb64: FXCH
// 005ccb66: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x1f8] (WRITE)
// 005ccb6a: FXCH
// 005ccb6c: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1f0] (WRITE)
// 005ccb70: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x1e8] (WRITE)
// 005ccb74: MOVSD.REP ES:EDI,ESI
// 005ccb76: FLD double ptr [ESP + 0x1e0]
//   XREF to: Stack[-0x30] (READ)
// 005ccb7d: FMUL double ptr [ESP + 0x60]
//   XREF to: Stack[-0x1b0] (READ)
// 005ccb81: FLD double ptr [ESP + 0x1e8]
//   XREF to: Stack[-0x28] (READ)
// 005ccb88: FMUL double ptr [ESP + 0x68]
//   XREF to: Stack[-0x1a8] (READ)
// 005ccb8c: FLD double ptr [ESP + 0x1f0]
//   XREF to: Stack[-0x20] (READ)
// 005ccb93: FMUL double ptr [ESP + 0x70]
//   XREF to: Stack[-0x1a0] (READ)
// 005ccb97: MOV ECX,0x6
// 005ccb9c: LEA EDI,[ESP + 0xf0]
//   XREF to: Stack[-0x120] (DATA)
// 005ccba3: LEA ESI,[ESP + 0x30]
//   XREF to: Stack[-0x1e0] (DATA)
// 005ccba7: FXCH ST2
// 005ccba9: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x1e0] (WRITE)
// 005ccbad: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x1d8] (WRITE)
// 005ccbb1: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x1d0] (WRITE)
// 005ccbb5: MOVSD.REP ES:EDI,ESI
// 005ccbb7: FLD double ptr [ESP + 0xf0]
//   XREF to: Stack[-0x120] (READ)
// 005ccbbe: FLD double ptr [ESP + 0xf8]
//   XREF to: Stack[-0x118] (READ)
// 005ccbc5: FLD double ptr [ESP + 0x100]
//   XREF to: Stack[-0x110] (READ)
// 005ccbcc: MOV ECX,0x6
// 005ccbd1: LEA EDI,[ESP + 0x48]
//   XREF to: Stack[-0x1c8] (DATA)
// 005ccbd5: LEA ESI,[ESP + 0x78]
//   XREF to: Stack[-0x198] (DATA)
// 005ccbd9: FXCH ST2
// 005ccbdb: FADD double ptr [EDX]
// 005ccbdd: FXCH
// 005ccbdf: FADD double ptr [EDX + 0x8]
// 005ccbe2: FXCH ST2
// 005ccbe4: FADD double ptr [EDX + 0x10]
// 005ccbe7: FXCH
// 005ccbe9: FSTP double ptr [ESP + 0x78]
//   XREF to: Stack[-0x198] (WRITE)
// 005ccbed: FXCH
// 005ccbef: FSTP double ptr [ESP + 0x80]
//   XREF to: Stack[-0x190] (WRITE)
// 005ccbf6: FSTP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x188] (WRITE)
// 005ccbfd: MOVSD.REP ES:EDI,ESI
// 005ccbff: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x1c8] (READ)
// 005ccc03: MOV dword ptr [EBX],EAX
// 005ccc05: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c4] (READ)
// 005ccc09: MOV dword ptr [EBX + 0x4],EAX
// 005ccc0c: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x1c0] (READ)
// 005ccc10: MOV dword ptr [EBX + 0x8],EAX
// 005ccc13: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1bc] (READ)
// 005ccc17: MOV dword ptr [EBX + 0xc],EAX
// 005ccc1a: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x1b8] (READ)
// 005ccc1e: MOV dword ptr [EBX + 0x10],EAX
// 005ccc21: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x1b4] (READ)
// 005ccc25: MOV dword ptr [EBX + 0x14],EAX
// 005ccc28: MOV ESP,EBP
// 005ccc2a: POP EBP
// 005ccc2b: POP EDI
// 005ccc2c: POP ESI
// 005ccc2d: POP EBX
// 005ccc2e: RET

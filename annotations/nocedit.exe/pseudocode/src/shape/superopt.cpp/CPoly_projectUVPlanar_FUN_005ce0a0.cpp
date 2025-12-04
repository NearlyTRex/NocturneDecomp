// Name: shape_superopt.cpp_CPoly_projectUVPlanar_FUN_005ce0a0
// Address: 005ce0a0
// Address Range: [[005ce0a0, 005ce3bb]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_CPoly_projectUVPlanar_FUN_005ce0a0(CPoly * this_ptr, CVector2d * uv_scale)
// Globals:
//   double DOUBLE_006542da = 0.00390625

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_projectUVPlanar_FUN_005ce0a0(CPoly *this_ptr,CVector2d *uv_scale)

{
  CVert *pCVar1;
  int iVar2;
  CPoly *pCVar3;
  double dVar4;
  double dVar5;
  CVector2d *pCVar6;
  int *piVar7;
  uint local_84;
  double local_80;
  double local_78;
  double local_70;
  uint local_64;
  uint local_5c;
  
  dVar5 = DOUBLE_006542da;
  if (0.0 <= (this_ptr->normal).z) {
    local_70 = (this_ptr->normal).z;
  }
  else {
    local_70 = -(this_ptr->normal).z;
  }
  if ((this_ptr->normal).y < 0.0) {
    local_80 = -(this_ptr->normal).y;
  }
  else {
    local_80 = (this_ptr->normal).y;
  }
  if ((this_ptr->normal).x < 0.0) {
    local_78 = -(this_ptr->normal).x;
  }
  else {
    local_78 = (this_ptr->normal).x;
  }
  if ((this_ptr->normal).x < 0.0) {
    local_84 = 0xbff00000;
  }
  else {
    local_84 = 0x3ff00000;
  }
  if ((this_ptr->normal).y < 0.0) {
    local_64 = 0xbff00000;
  }
  else {
    local_64 = 0x3ff00000;
  }
  if ((this_ptr->normal).z < 0.0) {
    local_5c = 0xbff00000;
  }
  else {
    local_5c = 0x3ff00000;
  }
  pCVar1 = this_ptr->parent_obj->vertex_data;
  if ((local_80 <= local_78) && (local_70 <= local_78)) {
    piVar7 = &this_ptr->vertex_idx_2;
    pCVar3 = this_ptr;
    do {
      pCVar6 = pCVar3->uv_coords;
      iVar2 = this_ptr->vertex_idx_0;
      pCVar6->x = pCVar1[iVar2].position.z * uv_scale->x * (double)((ulonglong)local_84 << 0x20);
      dVar4 = -pCVar1[iVar2].position.y * uv_scale->y;
      pCVar3->uv_coords[0].y = dVar4;
      this_ptr = (CPoly *)&this_ptr->vertex_idx_0;
      pCVar6->x = pCVar6->x * dVar5;
      pCVar3->uv_coords[0].y = dVar4 * dVar5;
      pCVar3 = (CPoly *)pCVar6;
    } while (this_ptr != (CPoly *)piVar7);
    return;
  }
  if ((local_78 <= local_80) && (local_70 <= local_80)) {
    piVar7 = &this_ptr->vertex_idx_2;
    pCVar3 = this_ptr;
    do {
      pCVar6 = pCVar3->uv_coords;
      iVar2 = this_ptr->vertex_idx_0;
      pCVar6->x = pCVar1[iVar2].position.x * uv_scale->x;
      dVar4 = -pCVar1[iVar2].position.z * uv_scale->y * (double)((ulonglong)local_64 << 0x20);
      pCVar3->uv_coords[0].y = dVar4;
      this_ptr = (CPoly *)&this_ptr->vertex_idx_0;
      pCVar6->x = pCVar6->x * dVar5;
      pCVar3->uv_coords[0].y = dVar4 * dVar5;
      pCVar3 = (CPoly *)pCVar6;
    } while (this_ptr != (CPoly *)piVar7);
    return;
  }
  piVar7 = &this_ptr->vertex_idx_2;
  pCVar3 = this_ptr;
  do {
    pCVar6 = pCVar3->uv_coords;
    iVar2 = this_ptr->vertex_idx_0;
    pCVar6->x = -pCVar1[iVar2].position.x * uv_scale->x * (double)((ulonglong)local_5c << 0x20);
    dVar4 = -pCVar1[iVar2].position.y * uv_scale->y;
    pCVar3->uv_coords[0].y = dVar4;
    this_ptr = (CPoly *)&this_ptr->vertex_idx_0;
    pCVar6->x = pCVar6->x * dVar5;
    pCVar3->uv_coords[0].y = dVar4 * dVar5;
    pCVar3 = (CPoly *)pCVar6;
  } while (this_ptr != (CPoly *)piVar7);
  return;
}


// Assembly code:
// 005ce0a0: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_projectUVPlanar_FUN_005ce0a0
// 005ce0a1: PUSH ESI
// 005ce0a2: PUSH EDI
// 005ce0a3: PUSH EBP
// 005ce0a4: MOV EBP,ESP
// 005ce0a6: SUB ESP,0x7c
// 005ce0a9: AND ESP,0xfffffff8
// 005ce0ac: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ce0af: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ce0b2: FLDZ
// 005ce0b4: FCOMP double ptr [ESI + 0x50]
// 005ce0b7: FNSTSW AX
// 005ce0b9: SAHF
// 005ce0ba: JBE 0x005ce285
//   XREF to: 005ce285 (CONDITIONAL_JUMP)
// 005ce0c0: FLD double ptr [ESI + 0x50]
// 005ce0c3: FCHS
// 005ce0c5: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x70] (WRITE)
// 005ce0c9: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_005ce0c9
//   XREF to: Stack[-0x70] (READ)
// 005ce0cd: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x90] (DATA)
// 005ce0d0: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x6c] (READ)
// 005ce0d4: FLDZ
// 005ce0d6: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 005ce0da: FCOMP double ptr [ESI + 0x48]
// 005ce0dd: FNSTSW AX
// 005ce0df: SAHF
// 005ce0e0: JA 0x005ce298
//   XREF to: 005ce298 (CONDITIONAL_JUMP)
// 005ce0e6: MOV EAX,dword ptr [ESI + 0x48]
// 005ce0e9: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005ce0ed: MOV EAX,dword ptr [ESI + 0x4c]
// 005ce0f0: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005ce0f4: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005ce0f4
//   XREF to: Stack[-0x80] (READ)
// 005ce0f8: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005ce0fc: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x7c] (READ)
// 005ce100: FLDZ
// 005ce102: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005ce106: FCOMP double ptr [ESI + 0x40]
// 005ce109: FNSTSW AX
// 005ce10b: SAHF
// 005ce10c: JA 0x005ce2a6
//   XREF to: 005ce2a6 (CONDITIONAL_JUMP)
// 005ce112: MOV EAX,dword ptr [ESI + 0x40]
// 005ce115: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005ce119: MOV EAX,dword ptr [ESI + 0x44]
// 005ce11c: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005ce120: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005ce120
//   XREF to: Stack[-0x78] (READ)
// 005ce124: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005ce128: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x74] (READ)
// 005ce12c: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005ce130: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x58] (READ)
// 005ce134: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005ce138: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x54] (READ)
// 005ce13c: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005ce140: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 005ce143: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005ce147: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8c] (READ)
// 005ce14b: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005ce14f: LEA EAX,[ESI + 0x40]
// 005ce152: MOV ECX,dword ptr [EAX]
// 005ce154: MOV dword ptr [ESP + 0x58],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 005ce158: MOV ECX,dword ptr [EAX + 0x4]
// 005ce15b: MOV dword ptr [ESP + 0x5c],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 005ce15f: MOV ECX,dword ptr [EAX + 0x8]
// 005ce162: MOV dword ptr [ESP + 0x60],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005ce166: MOV ECX,dword ptr [EAX + 0xc]
// 005ce169: FLDZ
// 005ce16b: MOV dword ptr [ESP + 0x64],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005ce16f: MOV ECX,dword ptr [EAX + 0x10]
// 005ce172: MOV EAX,dword ptr [EAX + 0x14]
// 005ce175: MOV dword ptr [ESP + 0x68],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005ce179: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005ce17d: FCOMP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (READ)
// 005ce181: FNSTSW AX
// 005ce183: SAHF
// 005ce184: JA 0x005ce2b4
//   XREF to: 005ce2b4 (CONDITIONAL_JUMP)
// 005ce18a: XOR EDI,EDI
// 005ce18c: MOV EAX,0x3ff00000
// 005ce191: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x88] (WRITE)
// 005ce195: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005ce199: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005ce199
//   XREF to: Stack[-0x88] (READ)
// 005ce19d: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005ce1a1: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x84] (READ)
// 005ce1a5: FLDZ
// 005ce1a7: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005ce1ab: FCOMP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (READ)
// 005ce1af: FNSTSW AX
// 005ce1b1: SAHF
// 005ce1b2: JA 0x005ce2c8
//   XREF to: 005ce2c8 (CONDITIONAL_JUMP)
// 005ce1b8: XOR EDI,EDI
// 005ce1ba: MOV EAX,0x3ff00000
// 005ce1bf: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x68] (WRITE)
// 005ce1c3: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005ce1c7: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_005ce1c7
//   XREF to: Stack[-0x68] (READ)
// 005ce1cb: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005ce1cf: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x64] (READ)
// 005ce1d3: FLDZ
// 005ce1d5: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005ce1d9: FCOMP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x28] (READ)
// 005ce1dd: FNSTSW AX
// 005ce1df: SAHF
// 005ce1e0: JA 0x005ce2dc
//   XREF to: 005ce2dc (CONDITIONAL_JUMP)
// 005ce1e6: XOR EDI,EDI
// 005ce1e8: MOV EAX,0x3ff00000
// 005ce1ed: MOV dword ptr [ESP + 0x30],EDI
//   XREF to: Stack[-0x60] (WRITE)
// 005ce1f1: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005ce1f5: FLD double ptr [ESP + 0x40]
//   Label: LAB_005ce1f5
//   XREF to: Stack[-0x50] (READ)
// 005ce1f9: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x60] (READ)
// 005ce1fd: MOV EBX,dword ptr [ESI]
// 005ce1ff: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005ce203: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x5c] (READ)
// 005ce207: MOV EBX,dword ptr [EBX + 0x4]
// 005ce20a: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005ce20e: FCOMP double ptr [ESP + 0x48]
//   XREF to: Stack[-0x48] (READ)
// 005ce212: FNSTSW AX
// 005ce214: SAHF
// 005ce215: JC 0x005ce2f0
//   XREF to: 005ce2f0 (CONDITIONAL_JUMP)
// 005ce21b: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x50] (READ)
// 005ce21f: FCOMP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x40] (READ)
// 005ce223: FNSTSW AX
// 005ce225: SAHF
// 005ce226: JC 0x005ce2f0
//   XREF to: 005ce2f0 (CONDITIONAL_JUMP)
// 005ce22c: LEA EAX,[ESI + 0x10]
// 005ce22f: MOV ECX,ESI
// 005ce231: ADD ESI,0xc
// 005ce234: MOV dword ptr [ESP + 0x78],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005ce238: FLD double ptr [0x006542da]
//   XREF to: 006542da (READ)
// 005ce23e: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (READ)
// 005ce242: IMUL ESI,dword ptr [ECX + 0x4],0x38
//   Label: LAB_005ce242
// 005ce246: FLD double ptr [ESI + EBX*0x1 + 0x10]
// 005ce24a: FMUL double ptr [EDX]
// 005ce24c: FMUL ST1
// 005ce24e: FSTP double ptr [EAX]
// 005ce250: FLD double ptr [ESI + EBX*0x1 + 0x8]
// 005ce254: FCHS
// 005ce256: FMUL double ptr [EDX + 0x8]
// 005ce259: FLD double ptr [EAX]
// 005ce25b: FMUL ST3
// 005ce25d: FXCH
// 005ce25f: FST double ptr [EAX + 0x8]
// 005ce262: FMUL ST3
// 005ce264: ADD EAX,0x10
// 005ce267: ADD ECX,0x4
// 005ce26a: MOV ESI,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (READ)
// 005ce26e: FXCH
// 005ce270: FSTP double ptr [EAX + -0x10]
// 005ce273: FSTP double ptr [EAX + -0x8]
// 005ce276: CMP ECX,ESI
// 005ce278: JNZ 0x005ce242
//   XREF to: 005ce242 (CONDITIONAL_JUMP)
// 005ce27a: FSTP ST0
// 005ce27c: FSTP ST0
// 005ce27e: MOV ESP,EBP
// 005ce280: POP EBP
// 005ce281: POP EDI
// 005ce282: POP ESI
// 005ce283: POP EBX
// 005ce284: RET
// 005ce285: MOV EAX,dword ptr [ESI + 0x50]
//   Label: LAB_005ce285
// 005ce288: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005ce28c: MOV EAX,dword ptr [ESI + 0x54]
// 005ce28f: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005ce293: JMP 0x005ce0c9
//   XREF to: 005ce0c9 (UNCONDITIONAL_JUMP)
// 005ce298: FLD double ptr [ESI + 0x48]
//   Label: LAB_005ce298
// 005ce29b: FCHS
// 005ce29d: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x80] (WRITE)
// 005ce2a1: JMP 0x005ce0f4
//   XREF to: 005ce0f4 (UNCONDITIONAL_JUMP)
// 005ce2a6: FLD double ptr [ESI + 0x40]
//   Label: LAB_005ce2a6
// 005ce2a9: FCHS
// 005ce2ab: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x78] (WRITE)
// 005ce2af: JMP 0x005ce120
//   XREF to: 005ce120 (UNCONDITIONAL_JUMP)
// 005ce2b4: XOR ECX,ECX
//   Label: LAB_005ce2b4
// 005ce2b6: MOV EBX,0xbff00000
// 005ce2bb: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x88] (WRITE)
// 005ce2bf: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x84] (WRITE)
// 005ce2c3: JMP 0x005ce199
//   XREF to: 005ce199 (UNCONDITIONAL_JUMP)
// 005ce2c8: XOR ECX,ECX
//   Label: LAB_005ce2c8
// 005ce2ca: MOV EBX,0xbff00000
// 005ce2cf: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x68] (WRITE)
// 005ce2d3: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x64] (WRITE)
// 005ce2d7: JMP 0x005ce1c7
//   XREF to: 005ce1c7 (UNCONDITIONAL_JUMP)
// 005ce2dc: XOR ECX,ECX
//   Label: LAB_005ce2dc
// 005ce2de: MOV EBX,0xbff00000
// 005ce2e3: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 005ce2e7: MOV dword ptr [ESP + 0x34],EBX
//   XREF to: Stack[-0x5c] (WRITE)
// 005ce2eb: JMP 0x005ce1f5
//   XREF to: 005ce1f5 (UNCONDITIONAL_JUMP)
// 005ce2f0: FLD double ptr [ESP + 0x48]
//   Label: LAB_005ce2f0
//   XREF to: Stack[-0x48] (READ)
// 005ce2f4: FCOMP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x50] (READ)
// 005ce2f8: FNSTSW AX
// 005ce2fa: SAHF
// 005ce2fb: JC 0x005ce362
//   XREF to: 005ce362 (CONDITIONAL_JUMP)
// 005ce2fd: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0x48] (READ)
// 005ce301: FCOMP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x40] (READ)
// 005ce305: FNSTSW AX
// 005ce307: SAHF
// 005ce308: JC 0x005ce362
//   XREF to: 005ce362 (CONDITIONAL_JUMP)
// 005ce30a: LEA EAX,[ESI + 0x10]
// 005ce30d: MOV ECX,ESI
// 005ce30f: ADD ESI,0xc
// 005ce312: MOV dword ptr [ESP + 0x74],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005ce316: FLD double ptr [0x006542da]
//   XREF to: 006542da (READ)
// 005ce31c: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (READ)
// 005ce320: IMUL ESI,dword ptr [ECX + 0x4],0x38
//   Label: LAB_005ce320
// 005ce324: FLD double ptr [ESI + EBX*0x1]
// 005ce327: FMUL double ptr [EDX]
// 005ce329: FSTP double ptr [EAX]
// 005ce32b: FLD double ptr [ESI + EBX*0x1 + 0x10]
// 005ce32f: FCHS
// 005ce331: FMUL double ptr [EDX + 0x8]
// 005ce334: FMUL ST1
// 005ce336: FLD double ptr [EAX]
// 005ce338: FMUL ST3
// 005ce33a: FXCH
// 005ce33c: FST double ptr [EAX + 0x8]
// 005ce33f: FMUL ST3
// 005ce341: ADD EAX,0x10
// 005ce344: ADD ECX,0x4
// 005ce347: MOV ESI,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 005ce34b: FXCH
// 005ce34d: FSTP double ptr [EAX + -0x10]
// 005ce350: FSTP double ptr [EAX + -0x8]
// 005ce353: CMP ECX,ESI
// 005ce355: JNZ 0x005ce320
//   XREF to: 005ce320 (CONDITIONAL_JUMP)
// 005ce357: FSTP ST0
// 005ce359: FSTP ST0
// 005ce35b: MOV ESP,EBP
// 005ce35d: POP EBP
// 005ce35e: POP EDI
// 005ce35f: POP ESI
// 005ce360: POP EBX
// 005ce361: RET
// 005ce362: LEA EAX,[ESI + 0x10]
//   Label: LAB_005ce362
// 005ce365: MOV ECX,ESI
// 005ce367: ADD ESI,0xc
// 005ce36a: MOV dword ptr [ESP + 0x70],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 005ce36e: FLD double ptr [0x006542da]
//   XREF to: 006542da (READ)
// 005ce374: FLD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x28] (READ)
// 005ce378: IMUL ESI,dword ptr [ECX + 0x4],0x38
//   Label: LAB_005ce378
// 005ce37c: FLD double ptr [ESI + EBX*0x1]
// 005ce37f: FCHS
// 005ce381: FMUL double ptr [EDX]
// 005ce383: FMUL ST1
// 005ce385: FSTP double ptr [EAX]
// 005ce387: FLD double ptr [ESI + EBX*0x1 + 0x8]
// 005ce38b: FCHS
// 005ce38d: FMUL double ptr [EDX + 0x8]
// 005ce390: FLD double ptr [EAX]
// 005ce392: FMUL ST3
// 005ce394: FXCH
// 005ce396: FST double ptr [EAX + 0x8]
// 005ce399: FMUL ST3
// 005ce39b: ADD EAX,0x10
// 005ce39e: ADD ECX,0x4
// 005ce3a1: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (READ)
// 005ce3a5: FXCH
// 005ce3a7: FSTP double ptr [EAX + -0x10]
// 005ce3aa: FSTP double ptr [EAX + -0x8]
// 005ce3ad: CMP ECX,ESI
// 005ce3af: JNZ 0x005ce378
//   XREF to: 005ce378 (CONDITIONAL_JUMP)
// 005ce3b1: FSTP ST0
// 005ce3b3: FSTP ST0
// 005ce3b5: MOV ESP,EBP
// 005ce3b7: POP EBP
// 005ce3b8: POP EDI
// 005ce3b9: POP ESI
// 005ce3ba: POP EBX
// 005ce3bb: RET

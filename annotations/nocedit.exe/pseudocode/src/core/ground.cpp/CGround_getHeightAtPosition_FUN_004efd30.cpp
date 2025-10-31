// Name: core_ground.cpp_CGround_getHeightAtPosition_FUN_004efd30
// Address: 004efd30
// Address Range: [[004efd30, 004effaf]]
// Convention: __cdecl
// Signature: int core_ground.cpp_CGround_getHeightAtPosition_FUN_004efd30(CGround * this_ptr, int world_x, int world_z)
// Cross-references:
//   core_terrain.cpp_CTerrain_render_FUN_005e1f50 (005e1f50) at 005e1f96 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(CGround *this_ptr,int world_x,int world_z)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar5 = this_ptr->vertical_scale * 0x100;
  iVar5 = (int)(((longlong)(int)(iVar5 - 1U & world_z) * 0x10000) / (longlong)iVar5);
  iVar6 = this_ptr->vertical_scale * 0x100;
  iVar6 = (int)(((longlong)(int)(iVar6 - 1U & world_x) * 0x10000) / (longlong)iVar6);
  uVar7 = this_ptr->vertical_scale << 8;
  uVar12 = this_ptr->width_minus_1 & (uint)world_z / uVar7;
  uVar4 = (uint)world_x / uVar7 & this_ptr->height_minus_1;
  uVar7 = uVar4 + 1;
  uVar11 = uVar12 + 1;
  if ((uVar12 & 1) != (uVar4 & 1)) {
    iVar5 = 0x10000 - iVar5;
    if (iVar6 < iVar5) {
      iVar9 = this_ptr->width * uVar4;
      pvVar1 = this_ptr->terrain_data;
      iVar8 = (int)*(short *)((uVar12 + iVar9) * 4 + (int)pvVar1) * this_ptr->height_scale;
      iVar9 = this_ptr->height_scale *
              (int)*(short *)(((uVar11 & this_ptr->width_minus_1) + iVar9) * 4 + (int)pvVar1);
      lVar2 = (longlong)iVar5 * (longlong)(iVar8 - iVar9);
      lVar3 = (longlong)iVar6 *
              (longlong)
              (this_ptr->height_scale *
               (int)*(short *)((uVar12 + (uVar7 & this_ptr->height_minus_1) * this_ptr->width) * 4 +
                              (int)pvVar1) - iVar8);
      return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
             iVar9 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    }
    uVar11 = this_ptr->width_minus_1 & uVar11;
    pvVar1 = this_ptr->terrain_data;
    iVar8 = this_ptr->height_scale *
            (int)*(short *)((uVar4 * this_ptr->width + uVar11) * 4 + (int)pvVar1);
    iVar9 = this_ptr->width * (uVar7 & this_ptr->height_minus_1);
    iVar10 = this_ptr->height_scale * (int)*(short *)((int)pvVar1 + (iVar9 + uVar11) * 4);
    lVar2 = (longlong)iVar5 *
            (longlong)
            ((int)*(short *)((int)pvVar1 + (uVar12 + iVar9) * 4) * this_ptr->height_scale - iVar10);
    lVar3 = (longlong)iVar6 * (longlong)(iVar10 - iVar8);
    return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           iVar8 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  if (iVar6 < iVar5) {
    iVar8 = this_ptr->width * uVar4;
    pvVar1 = this_ptr->terrain_data;
    iVar9 = this_ptr->height_scale * (int)*(short *)((int)pvVar1 + (uVar12 + iVar8) * 4);
    iVar8 = (int)*(short *)((int)pvVar1 + ((this_ptr->width_minus_1 & uVar11) + iVar8) * 4) *
            this_ptr->height_scale;
    lVar2 = (longlong)iVar5 * (longlong)(iVar8 - iVar9);
    lVar3 = (longlong)iVar6 *
            (longlong)
            (this_ptr->height_scale *
             (int)*(short *)((int)pvVar1 +
                            ((uVar11 & this_ptr->height_minus_1) +
                            (uVar7 & this_ptr->height_minus_1) * this_ptr->width) * 4) - iVar8);
    return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
           iVar9 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  pvVar1 = this_ptr->terrain_data;
  iVar10 = (int)*(short *)((uVar4 * this_ptr->width + uVar12) * 4 + (int)pvVar1) *
           this_ptr->height_scale;
  iVar8 = (uVar7 & this_ptr->height_minus_1) * this_ptr->width;
  iVar9 = this_ptr->height_scale * (int)*(short *)((uVar12 + iVar8) * 4 + (int)pvVar1);
  lVar2 = (longlong)iVar5 *
          (longlong)
          ((int)*(short *)(((uVar11 & this_ptr->width_minus_1) + iVar8) * 4 + (int)pvVar1) *
           this_ptr->height_scale - iVar9);
  lVar3 = (longlong)iVar6 * (longlong)(iVar9 - iVar10);
  return ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
         iVar10 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
}


// Assembly code:
// 004efd30: PUSH EBX
//   Label: core_ground.cpp_CGround_getHeightAtPosition_FUN_004efd30
// 004efd31: PUSH ESI
// 004efd32: PUSH EDI
// 004efd33: PUSH EBP
// 004efd34: SUB ESP,0x14
// 004efd37: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004efd3b: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 004efd3f: MOV EBX,dword ptr [ECX + 0x1c]
// 004efd42: SHL EBX,0x8
// 004efd45: LEA EAX,[EBX + -0x1]
// 004efd48: MOV EDX,0x10000
// 004efd4d: AND EAX,ESI
// 004efd4f: IMUL EDX
// 004efd51: IDIV EBX
// 004efd53: MOV EBX,dword ptr [ECX + 0x1c]
// 004efd56: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 004efd5a: SHL EBX,0x8
// 004efd5d: MOV EDI,EAX
// 004efd5f: LEA EAX,[EBX + -0x1]
// 004efd62: AND EAX,EDX
// 004efd64: MOV EDX,0x10000
// 004efd69: IMUL EDX
// 004efd6b: IDIV EBX
// 004efd6d: MOV EBX,EAX
// 004efd6f: MOV EBP,dword ptr [ECX + 0x1c]
// 004efd72: XOR EDX,EDX
// 004efd74: SHL EBP,0x8
// 004efd77: MOV EAX,ESI
// 004efd79: DIV EBP
// 004efd7b: MOV ESI,dword ptr [ECX + 0x8]
// 004efd7e: AND ESI,EAX
// 004efd80: XOR EDX,EDX
// 004efd82: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 004efd86: DIV EBP
// 004efd88: MOV EDX,ESI
// 004efd8a: MOV EBP,dword ptr [ECX + 0xc]
// 004efd8d: AND EDX,0x1
// 004efd90: AND EAX,EBP
// 004efd92: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004efd96: MOV EDX,EAX
// 004efd98: AND EDX,0x1
// 004efd9b: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004efd9f: LEA EDX,[EAX + 0x1]
// 004efda2: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004efda6: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004efdaa: LEA EDX,[ESI + 0x1]
// 004efdad: CMP EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004efdb1: JNZ 0x004efeab
//   XREF to: 004efeab (CONDITIONAL_JUMP)
// 004efdb7: CMP EDI,EBX
// 004efdb9: JLE 0x004efe32
//   XREF to: 004efe32 (CONDITIONAL_JUMP)
// 004efdbb: MOV EBP,dword ptr [ECX]
// 004efdbd: IMUL EBP,EAX
// 004efdc0: MOV EAX,dword ptr [ECX + 0x24]
// 004efdc3: ADD ESI,EBP
// 004efdc5: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 004efdc9: MOVSX ESI,word ptr [EAX + ESI*0x4]
// 004efdcd: MOV EBP,dword ptr [ECX + 0x20]
// 004efdd0: IMUL EBP,ESI
// 004efdd3: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x24] (DATA)
// 004efdd6: MOV ESI,dword ptr [ECX + 0x8]
// 004efdd9: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004efddd: AND ESI,EDX
// 004efddf: ADD ESI,EBP
// 004efde1: MOVSX ESI,word ptr [EAX + ESI*0x4]
// 004efde5: IMUL ESI,dword ptr [ECX + 0x20]
// 004efde9: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 004efded: AND EBP,dword ptr [ECX + 0xc]
// 004efdf0: IMUL EBP,dword ptr [ECX]
// 004efdf3: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 004efdf7: AND EDX,dword ptr [ECX + 0xc]
// 004efdfa: ADD EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004efdfe: MOV ECX,dword ptr [ECX + 0x20]
// 004efe01: MOVSX EAX,word ptr [EAX + EDX*0x4]
// 004efe05: IMUL ECX,EAX
// 004efe08: MOV EDX,ESI
// 004efe0a: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004efe0d: SUB ECX,ESI
// 004efe0f: SUB EDX,EAX
// 004efe11: MOV EAX,EDI
// 004efe13: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004efe16: IMUL EDX
// 004efe18: SHRD EAX,EDX,0x10
// 004efe1c: MOV EDX,ECX
// 004efe1e: ADD ESI,EAX
// 004efe20: MOV EAX,EBX
// 004efe22: IMUL EDX
// 004efe24: SHRD EAX,EDX,0x10
// 004efe28: ADD EAX,ESI
// 004efe2a: ADD ESP,0x14
// 004efe2d: POP EBP
// 004efe2e: POP EDI
// 004efe2f: POP ESI
// 004efe30: POP EBX
// 004efe31: RET
// 004efe32: IMUL EAX,dword ptr [ECX]
//   Label: LAB_004efe32
// 004efe35: ADD EAX,ESI
// 004efe37: MOV EBP,dword ptr [ECX + 0x24]
// 004efe3a: SHL EAX,0x2
// 004efe3d: ADD EAX,EBP
// 004efe3f: MOVSX EAX,word ptr [EAX]
// 004efe42: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 004efe46: MOV EBP,EAX
// 004efe48: IMUL EBP,dword ptr [ECX + 0x20]
// 004efe4c: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 004efe50: AND EAX,dword ptr [ECX + 0xc]
// 004efe53: IMUL EAX,dword ptr [ECX]
// 004efe56: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004efe5a: AND EDX,dword ptr [ECX + 0x8]
// 004efe5d: ADD EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004efe61: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004efe65: SHL EDX,0x2
// 004efe68: ADD EDX,EAX
// 004efe6a: MOVSX EDX,word ptr [EDX]
// 004efe6d: IMUL EDX,dword ptr [ECX + 0x20]
// 004efe71: ADD ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004efe75: LEA EAX,[ESI*0x4 + 0x0]
// 004efe7c: ADD EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004efe80: MOV ECX,dword ptr [ECX + 0x20]
// 004efe83: MOVSX EAX,word ptr [EAX]
// 004efe86: IMUL ECX,EAX
// 004efe89: MOV EAX,EDI
// 004efe8b: SUB EDX,ECX
// 004efe8d: SUB ECX,EBP
// 004efe8f: IMUL EDX
// 004efe91: SHRD EAX,EDX,0x10
// 004efe95: MOV EDX,ECX
// 004efe97: ADD EBP,EAX
// 004efe99: MOV EAX,EBX
// 004efe9b: IMUL EDX
// 004efe9d: SHRD EAX,EDX,0x10
// 004efea1: ADD EAX,EBP
// 004efea3: ADD ESP,0x14
// 004efea6: POP EBP
// 004efea7: POP EDI
// 004efea8: POP ESI
// 004efea9: POP EBX
// 004efeaa: RET
// 004efeab: MOV EBP,0x10000
//   Label: LAB_004efeab
// 004efeb0: SUB EBP,EDI
// 004efeb2: MOV EDI,EBP
// 004efeb4: CMP EBP,EBX
// 004efeb6: JLE 0x004eff32
//   XREF to: 004eff32 (CONDITIONAL_JUMP)
// 004efeb8: MOV EBP,dword ptr [ECX]
// 004efeba: IMUL EBP,EAX
// 004efebd: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 004efec1: LEA EAX,[ESI + EBP*0x1]
// 004efec4: SHL EAX,0x2
// 004efec7: MOV EBP,dword ptr [ECX + 0x24]
// 004efeca: ADD EAX,EBP
// 004efecc: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 004efed0: MOVSX EAX,word ptr [EAX]
// 004efed3: IMUL EAX,dword ptr [ECX + 0x20]
// 004efed7: AND EDX,dword ptr [ECX + 0x8]
// 004efeda: ADD EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004efede: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004efee2: SHL EDX,0x2
// 004efee5: ADD EDX,EBP
// 004efee7: MOVSX EDX,word ptr [EDX]
// 004efeea: MOV EBP,dword ptr [ECX + 0x20]
// 004efeed: IMUL EBP,EDX
// 004efef0: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 004efef4: AND EDX,dword ptr [ECX + 0xc]
// 004efef7: IMUL EDX,dword ptr [ECX]
// 004efefa: ADD ESI,EDX
// 004efefc: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004eff00: SHL ESI,0x2
// 004eff03: ADD ESI,EDX
// 004eff05: MOV ECX,dword ptr [ECX + 0x20]
// 004eff08: MOVSX ESI,word ptr [ESI]
// 004eff0b: IMUL ECX,ESI
// 004eff0e: MOV EDX,EAX
// 004eff10: SUB EDX,EBP
// 004eff12: SUB ECX,EAX
// 004eff14: MOV EAX,EDI
// 004eff16: IMUL EDX
// 004eff18: SHRD EAX,EDX,0x10
// 004eff1c: MOV EDX,ECX
// 004eff1e: ADD EBP,EAX
// 004eff20: MOV EAX,EBX
// 004eff22: IMUL EDX
// 004eff24: SHRD EAX,EDX,0x10
// 004eff28: ADD EAX,EBP
// 004eff2a: ADD ESP,0x14
// 004eff2d: POP EBP
// 004eff2e: POP EDI
// 004eff2f: POP ESI
// 004eff30: POP EBX
// 004eff31: RET
// 004eff32: MOV EBP,dword ptr [ECX + 0x8]
//   Label: LAB_004eff32
// 004eff35: AND EBP,EDX
// 004eff37: IMUL EAX,dword ptr [ECX]
// 004eff3a: ADD EAX,EBP
// 004eff3c: LEA EDX,[EAX*0x4 + 0x0]
// 004eff43: MOV EAX,dword ptr [ECX + 0x24]
// 004eff46: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 004eff4a: MOV EBP,dword ptr [ECX + 0x20]
// 004eff4d: MOVSX EDX,word ptr [EDX + EAX*0x1]
// 004eff51: IMUL EBP,EDX
// 004eff54: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 004eff58: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 004eff5c: AND EDX,dword ptr [ECX + 0xc]
// 004eff5f: MOV EBP,dword ptr [ECX]
// 004eff61: IMUL EBP,EDX
// 004eff64: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 004eff68: MOV EDX,EBP
// 004eff6a: ADD EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004eff6e: MOVSX EDX,word ptr [EAX + EDX*0x4]
// 004eff72: MOV EBP,dword ptr [ECX + 0x20]
// 004eff75: IMUL EBP,EDX
// 004eff78: ADD ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004eff7c: MOVSX EAX,word ptr [EAX + ESI*0x4]
// 004eff80: MOV EDX,EAX
// 004eff82: IMUL EDX,dword ptr [ECX + 0x20]
// 004eff86: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 004eff8a: SUB EDX,EBP
// 004eff8c: SUB EBP,EAX
// 004eff8e: MOV EAX,EDI
// 004eff90: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 004eff94: IMUL EDX
// 004eff96: SHRD EAX,EDX,0x10
// 004eff9a: MOV EDX,EBP
// 004eff9c: ADD ECX,EAX
// 004eff9e: MOV EAX,EBX
// 004effa0: IMUL EDX
// 004effa2: SHRD EAX,EDX,0x10
// 004effa6: ADD EAX,ECX
// 004effa8: ADD ESP,0x14
// 004effab: POP EBP
// 004effac: POP EDI
// 004effad: POP ESI
// 004effae: POP EBX
// 004effaf: RET

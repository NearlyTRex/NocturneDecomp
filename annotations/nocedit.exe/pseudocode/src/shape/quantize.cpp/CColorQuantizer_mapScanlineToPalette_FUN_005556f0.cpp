// Name: shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
// Address: 005556f0
// Address Range: [[005556f0, 00555a36]]
// Convention: __cdecl
// Signature: void shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0(CColorQuantizer * this_ptr, uchar * src_pixels, uchar * dest_indices, short start_x, short end_x, short num_palette_entries)
// Cross-references:
//   shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180 (00556180) at 005562d1 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00640d53 = 0.300000000000000
//   double DOUBLE_00640d5b = 0.590000000000000
//   double DOUBLE_00640d63 = 0.110000000000000
//   double DOUBLE_00640d6b = 0.150000000000000
//   double DOUBLE_00640d73 = 255
// Function calls:
//   shape_quantize.cpp_getAbsoluteValue_FUN_00556df0

#include "nocturne.h"

void __cdecl
shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
          (CColorQuantizer *this_ptr,uchar *src_pixels,uchar *dest_indices,short start_x,short end_x
          ,short num_palette_entries)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  SPaletteEntry *pSVar8;
  int unaff_EBX;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  int local_2c;
  int local_28;
  float local_24;
  
  uVar5 = shape_quantize_cpp_getAbsoluteValue_FUN_00556df0((int)end_x - (int)start_x);
  local_2c = local_28;
  src_pixels = src_pixels + local_28 * 3;
  while (end_x != local_2c) {
    local_54 = (float)*src_pixels;
    local_4c = (float)src_pixels[1];
    local_50 = (float)src_pixels[2];
    fStack_48 = (float)src_pixels[2] * (float)DOUBLE_00640d63 +
                (float)src_pixels[1] * (float)DOUBLE_00640d5b +
                (float)*src_pixels * (float)DOUBLE_00640d53;
    if (0 < this_ptr->status) {
      iVar6 = this_ptr->serpentine_toggle + local_2c;
      this_ptr->error_buffer_r[iVar6] = local_54;
      this_ptr->error_buffer_g[iVar6] = local_4c;
      this_ptr->error_buffer_b[iVar6] = local_50;
      this_ptr->error_buffer_i[iVar6] = fStack_48;
    }
    this_ptr->current_r = local_54;
    this_ptr->current_g = local_4c;
    this_ptr->current_b = local_50;
    this_ptr->current_i = fStack_48;
    if (0.0 <= local_54) {
      if ((float)DOUBLE_00640d73 < local_54) {
        local_54 = 255.0;
      }
    }
    else {
      local_54 = 0.0;
    }
    if (0.0 <= local_4c) {
      if ((float)DOUBLE_00640d73 < local_4c) {
        local_4c = 255.0;
      }
    }
    else {
      local_4c = 0.0;
    }
    if (0.0 <= local_50) {
      if ((float)DOUBLE_00640d73 < local_50) {
        local_50 = 255.0;
      }
    }
    else {
      local_50 = 0.0;
    }
    if (0.0 <= fStack_48) {
      if ((float)DOUBLE_00640d73 < fStack_48) {
        fStack_48 = 255.0;
      }
    }
    else {
      fStack_48 = 0.0;
    }
    local_24 = 9999.0;
    iVar6 = 0;
    pSVar8 = this_ptr->palette;
    while (iVar7 = iVar6, iVar7 < num_palette_entries) {
      fVar1 = pSVar8->r - local_54;
      fVar4 = pSVar8->g - local_4c;
      fVar3 = pSVar8->b - local_50;
      fVar2 = pSVar8->intensity - fStack_48;
      fVar1 = fVar2 * fVar2 * (float)DOUBLE_00640d6b +
              fVar3 * fVar3 * (float)DOUBLE_00640d63 +
              fVar4 * fVar4 * (float)DOUBLE_00640d5b + fVar1 * fVar1 * (float)DOUBLE_00640d53;
      if (fVar1 < local_24) {
        pSVar8 = pSVar8 + 1;
        iVar6 = iVar7 + 1;
        unaff_EBX = iVar7;
        local_24 = fVar1;
      }
      else {
        pSVar8 = pSVar8 + 1;
        iVar6 = iVar7 + 1;
      }
    }
    dest_indices[local_2c] = (uchar)unaff_EBX;
    if (start_x < end_x) {
      iVar6 = 1;
    }
    else {
      iVar6 = -1;
    }
    local_2c = local_2c + iVar6;
    if (start_x < end_x) {
      src_pixels = src_pixels + 3;
    }
    else {
      src_pixels = src_pixels + -3;
    }
  }
  this_ptr->serpentine_toggle = this_ptr->serpentine_toggle ^ uVar5;
  if (-1 < this_ptr->status) {
    this_ptr->status = this_ptr->status ^ uVar5;
    return;
  }
  this_ptr->status = 0;
  return;
}


// Assembly code:
// 005556f0: PUSH EBX
//   Label: shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
// 005556f1: PUSH ESI
// 005556f2: PUSH EDI
// 005556f3: PUSH EBP
// 005556f4: MOV EBP,ESP
// 005556f6: SUB ESP,0x68
// 005556f9: AND ESP,0xfffffff8
// 005556fc: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005556ff: MOV ESI,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00555702: MOV EAX,dword ptr [EBP + 0x22]
//   XREF to: Stack[0x12] (READ)
// 00555705: MOV EDX,dword ptr [EBP + 0x1e]
//   XREF to: Stack[0xe] (READ)
// 00555708: SAR EAX,0x10
// 0055570b: SAR EDX,0x10
// 0055570e: SUB EAX,EDX
// 00555710: PUSH EAX
// 00555711: MOV dword ptr [ESP + 0x50],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00555715: CALL shape_quantize.cpp_getAbsoluteValue_FUN_00556df0
//   XREF to: 00556df0 (UNCONDITIONAL_CALL)
// 0055571a: ADD ESP,0x4
// 0055571d: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x2c] (READ)
// 00555721: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00555725: LEA EAX,[EDX*0x4 + 0x0]
// 0055572c: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0055572f: SUB EAX,EDX
// 00555731: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00555735: ADD ECX,EAX
// 00555737: LEA EAX,[EDI + 0x1030]
// 0055573d: MOV dword ptr [EBP + 0x18],ECX
//   XREF to: Stack[0x8] (WRITE)
// 00555740: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00555744: MOV EAX,dword ptr [EBP + 0x22]
//   Label: LAB_00555744
//   XREF to: Stack[0x12] (READ)
// 00555747: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (READ)
// 0055574b: SAR EAX,0x10
// 0055574e: CMP EAX,EDX
// 00555750: JNZ 0x005557d1
//   XREF to: 005557d1 (CONDITIONAL_JUMP)
// 00555756: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x38] (READ)
// 0055575a: MOV ECX,dword ptr [EDI + 0x4b30]
// 00555760: XOR ECX,EAX
// 00555762: MOV EBX,dword ptr [EDI + 0x4b34]
// 00555768: MOV dword ptr [EDI + 0x4b30],ECX
// 0055576e: TEST EBX,EBX
// 00555770: JL 0x00555a26
//   XREF to: 00555a26 (CONDITIONAL_JUMP)
// 00555776: MOV ESI,EBX
// 00555778: XOR ESI,EAX
// 0055577a: MOV dword ptr [EDI + 0x4b34],ESI
// 00555780: MOV ESP,EBP
// 00555782: POP EBP
// 00555783: POP EDI
// 00555784: POP ESI
// 00555785: POP EBX
// 00555786: RET
// 00555787: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_00555787
//   XREF to: Stack[0xc] (READ)
// 0055578a: ADD EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (READ)
// 0055578e: MOV EDX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00555791: MOV byte ptr [EAX],BL
// 00555793: CMP DX,word ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00555797: JLE 0x005557bd
//   XREF to: 005557bd (CONDITIONAL_JUMP)
// 00555799: MOV EAX,0x1
// 0055579e: MOV EDX,dword ptr [ESP + 0x48]
//   Label: LAB_0055579e
//   XREF to: Stack[-0x30] (READ)
// 005557a2: MOV ECX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005557a5: ADD EDX,EAX
// 005557a7: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005557aa: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005557ae: CMP AX,CX
// 005557b1: JGE 0x005557c4
//   XREF to: 005557c4 (CONDITIONAL_JUMP)
// 005557b3: MOV EAX,0x3
// 005557b8: ADD dword ptr [EBP + 0x18],EAX
//   XREF to: Stack[0x8] (READ_WRITE)
// 005557bb: JMP 0x00555744
//   XREF to: 00555744 (UNCONDITIONAL_JUMP)
// 005557bd: MOV EAX,0xffffffff
//   Label: LAB_005557bd
// 005557c2: JMP 0x0055579e
//   XREF to: 0055579e (UNCONDITIONAL_JUMP)
// 005557c4: MOV EAX,0xfffffffd
//   Label: LAB_005557c4
// 005557c9: ADD dword ptr [EBP + 0x18],EAX
//   XREF to: Stack[0x8] (READ_WRITE)
// 005557cc: JMP 0x00555744
//   XREF to: 00555744 (UNCONDITIONAL_JUMP)
// 005557d1: MOV EDX,dword ptr [EBP + 0x18]
//   Label: LAB_005557d1
//   XREF to: Stack[0x8] (READ)
// 005557d4: XOR EAX,EAX
// 005557d6: MOV AL,byte ptr [EDX]
// 005557d8: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005557dc: XOR EAX,EAX
// 005557de: MOV AL,byte ptr [EDX + 0x1]
// 005557e1: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005557e5: XOR EAX,EAX
// 005557e7: MOV AL,byte ptr [EDX + 0x2]
// 005557ea: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005557ee: XOR EAX,EAX
// 005557f0: MOV AL,byte ptr [EDX]
// 005557f2: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005557f6: FILD word ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 005557fa: XOR EAX,EAX
// 005557fc: FMUL double ptr [0x00640d53]
//   XREF to: 00640d53 (READ)
// 00555802: MOV AL,byte ptr [EDX + 0x1]
// 00555805: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00555809: FILD word ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 0055580d: XOR EAX,EAX
// 0055580f: FMUL double ptr [0x00640d5b]
//   XREF to: 00640d5b (READ)
// 00555815: MOV AL,byte ptr [EDX + 0x2]
// 00555818: FADDP
// 0055581a: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0055581e: FILD word ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 00555822: FMUL double ptr [0x00640d63]
//   XREF to: 00640d63 (READ)
// 00555828: FILD word ptr [ESP + 0x58]
//   XREF to: Stack[-0x20] (READ)
// 0055582c: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x58] (WRITE)
// 00555830: FILD word ptr [ESP + 0x5c]
//   XREF to: Stack[-0x1c] (READ)
// 00555834: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x50] (WRITE)
// 00555838: FILD word ptr [ESP + 0x60]
//   XREF to: Stack[-0x18] (READ)
// 0055583c: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x54] (WRITE)
// 00555840: FADDP
// 00555842: MOV EAX,dword ptr [EDI + 0x4b34]
// 00555848: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x4c] (WRITE)
// 0055584c: TEST EAX,EAX
// 0055584e: JLE 0x00555888
//   XREF to: 00555888 (CONDITIONAL_JUMP)
// 00555850: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x30] (READ)
// 00555854: MOV EAX,dword ptr [EDI + 0x4b30]
// 0055585a: ADD EAX,EDX
// 0055585c: MOV EDX,dword ptr [EDI + 0x10]
// 0055585f: SHL EAX,0x2
// 00555862: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x58] (READ)
// 00555866: MOV dword ptr [EDX + EAX*0x1],ECX
// 00555869: MOV EDX,dword ptr [EDI + 0x14]
// 0055586c: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x50] (READ)
// 00555870: MOV dword ptr [EDX + EAX*0x1],ECX
// 00555873: MOV EDX,dword ptr [EDI + 0x18]
// 00555876: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x54] (READ)
// 0055587a: MOV dword ptr [EDX + EAX*0x1],ECX
// 0055587d: MOV EDX,dword ptr [EDI + 0x1c]
// 00555880: ADD EAX,EDX
// 00555882: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x4c] (READ)
// 00555886: MOV dword ptr [EAX],EDX
// 00555888: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_00555888
//   XREF to: Stack[-0x58] (READ)
// 0055588c: MOV dword ptr [EDI + 0x20],EAX
// 0055588f: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x50] (READ)
// 00555893: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x58] (READ)
// 00555897: MOV dword ptr [EDI + 0x24],EAX
// 0055589a: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x54] (READ)
// 0055589e: FLDZ
// 005558a0: MOV dword ptr [EDI + 0x28],EAX
// 005558a3: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x4c] (READ)
// 005558a7: FXCH
// 005558a9: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x70] (WRITE)
// 005558ad: MOV dword ptr [EDI + 0x2c],EAX
// 005558b0: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x70] (READ)
// 005558b4: FNSTSW AX
// 005558b6: SAHF
// 005558b7: JBE 0x00555994
//   XREF to: 00555994 (CONDITIONAL_JUMP)
// 005558bd: XOR EAX,EAX
// 005558bf: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005558c3: FLD float ptr [ESP + 0x28]
//   Label: LAB_005558c3
//   XREF to: Stack[-0x50] (READ)
// 005558c7: FLDZ
// 005558c9: FXCH
// 005558cb: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x60] (WRITE)
// 005558cf: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x60] (READ)
// 005558d3: FNSTSW AX
// 005558d5: SAHF
// 005558d6: JBE 0x005559b4
//   XREF to: 005559b4 (CONDITIONAL_JUMP)
// 005558dc: XOR ECX,ECX
// 005558de: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 005558e2: FLD float ptr [ESP + 0x24]
//   Label: LAB_005558e2
//   XREF to: Stack[-0x54] (READ)
// 005558e6: FLDZ
// 005558e8: FXCH
// 005558ea: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x68] (WRITE)
// 005558ee: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x68] (READ)
// 005558f2: FNSTSW AX
// 005558f4: SAHF
// 005558f5: JBE 0x005559d4
//   XREF to: 005559d4 (CONDITIONAL_JUMP)
// 005558fb: XOR EDX,EDX
// 005558fd: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 00555901: FLD float ptr [ESP + 0x2c]
//   Label: LAB_00555901
//   XREF to: Stack[-0x4c] (READ)
// 00555905: FLDZ
// 00555907: FXCH
// 00555909: FSTP double ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 0055590c: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 0055590f: FNSTSW AX
// 00555911: SAHF
// 00555912: JBE 0x005559f4
//   XREF to: 005559f4 (CONDITIONAL_JUMP)
// 00555918: XOR EAX,EAX
// 0055591a: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0055591e: MOV EDX,0x461c3c00
//   Label: LAB_0055591e
// 00555923: XOR ECX,ECX
// 00555925: MOV dword ptr [ESP + 0x50],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00555929: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x34] (READ)
// 0055592d: MOVSX EAX,SI
//   Label: LAB_0055592d
// 00555930: CMP ECX,EAX
// 00555932: JGE 0x00555787
//   XREF to: 00555787 (CONDITIONAL_JUMP)
// 00555938: FLD float ptr [EDX]
// 0055593a: FSUB float ptr [ESP + 0x20]
//   XREF to: Stack[-0x58] (READ)
// 0055593e: FMUL ST0
// 00555940: FMUL double ptr [0x00640d53]
//   XREF to: 00640d53 (READ)
// 00555946: FLD float ptr [EDX + 0x4]
// 00555949: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x50] (READ)
// 0055594d: FMUL ST0
// 0055594f: FMUL double ptr [0x00640d5b]
//   XREF to: 00640d5b (READ)
// 00555955: FLD float ptr [EDX + 0x8]
// 00555958: FXCH
// 0055595a: FADDP ST2,ST0
// 0055595c: FSUB float ptr [ESP + 0x24]
//   XREF to: Stack[-0x54] (READ)
// 00555960: FMUL ST0
// 00555962: FMUL double ptr [0x00640d63]
//   XREF to: 00640d63 (READ)
// 00555968: FLD float ptr [EDX + 0xc]
// 0055596b: FXCH
// 0055596d: FADDP ST2,ST0
// 0055596f: FSUB float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x4c] (READ)
// 00555973: FMUL ST0
// 00555975: FMUL double ptr [0x00640d6b]
//   XREF to: 00640d6b (READ)
// 0055597b: FADDP
// 0055597d: FST float ptr [ESP + 0x54]
//   XREF to: Stack[-0x24] (WRITE)
// 00555981: FCOMP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x28] (READ)
// 00555985: FNSTSW AX
// 00555987: SAHF
// 00555988: JC 0x00555a13
//   XREF to: 00555a13 (CONDITIONAL_JUMP)
// 0055598e: ADD EDX,0x10
// 00555991: INC ECX
// 00555992: JMP 0x0055592d
//   XREF to: 0055592d (UNCONDITIONAL_JUMP)
// 00555994: FLD double ptr [ESP + 0x8]
//   Label: LAB_00555994
//   XREF to: Stack[-0x70] (READ)
// 00555998: FCOMP double ptr [0x00640d73]
//   XREF to: 00640d73 (READ)
// 0055599e: FNSTSW AX
// 005559a0: SAHF
// 005559a1: JBE 0x005558c3
//   XREF to: 005558c3 (CONDITIONAL_JUMP)
// 005559a7: MOV dword ptr [ESP + 0x20],0x437f0000
//   XREF to: Stack[-0x58] (WRITE)
// 005559af: JMP 0x005558c3
//   XREF to: 005558c3 (UNCONDITIONAL_JUMP)
// 005559b4: FLD double ptr [ESP + 0x18]
//   Label: LAB_005559b4
//   XREF to: Stack[-0x60] (READ)
// 005559b8: FCOMP double ptr [0x00640d73]
//   XREF to: 00640d73 (READ)
// 005559be: FNSTSW AX
// 005559c0: SAHF
// 005559c1: JBE 0x005558e2
//   XREF to: 005558e2 (CONDITIONAL_JUMP)
// 005559c7: MOV dword ptr [ESP + 0x28],0x437f0000
//   XREF to: Stack[-0x50] (WRITE)
// 005559cf: JMP 0x005558e2
//   XREF to: 005558e2 (UNCONDITIONAL_JUMP)
// 005559d4: FLD double ptr [ESP + 0x10]
//   Label: LAB_005559d4
//   XREF to: Stack[-0x68] (READ)
// 005559d8: FCOMP double ptr [0x00640d73]
//   XREF to: 00640d73 (READ)
// 005559de: FNSTSW AX
// 005559e0: SAHF
// 005559e1: JBE 0x00555901
//   XREF to: 00555901 (CONDITIONAL_JUMP)
// 005559e7: MOV dword ptr [ESP + 0x24],0x437f0000
//   XREF to: Stack[-0x54] (WRITE)
// 005559ef: JMP 0x00555901
//   XREF to: 00555901 (UNCONDITIONAL_JUMP)
// 005559f4: FLD double ptr [ESP]
//   Label: LAB_005559f4
//   XREF to: Stack[-0x78] (DATA)
// 005559f7: FCOMP double ptr [0x00640d73]
//   XREF to: 00640d73 (READ)
// 005559fd: FNSTSW AX
// 005559ff: SAHF
// 00555a00: JBE 0x0055591e
//   XREF to: 0055591e (CONDITIONAL_JUMP)
// 00555a06: MOV dword ptr [ESP + 0x2c],0x437f0000
//   XREF to: Stack[-0x4c] (WRITE)
// 00555a0e: JMP 0x0055591e
//   XREF to: 0055591e (UNCONDITIONAL_JUMP)
// 00555a13: MOV EAX,dword ptr [ESP + 0x54]
//   Label: LAB_00555a13
//   XREF to: Stack[-0x24] (READ)
// 00555a17: MOV EBX,ECX
// 00555a19: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00555a1d: ADD EDX,0x10
// 00555a20: INC ECX
// 00555a21: JMP 0x0055592d
//   XREF to: 0055592d (UNCONDITIONAL_JUMP)
// 00555a26: MOV dword ptr [EDI + 0x4b34],0x0
//   Label: LAB_00555a26
// 00555a30: MOV ESP,EBP
// 00555a32: POP EBP
// 00555a33: POP EDI
// 00555a34: POP ESI
// 00555a35: POP EBX
// 00555a36: RET

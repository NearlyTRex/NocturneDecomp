// Name: core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
// Address: 00474770
// Address Range: [[00474770, 00474a89]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, int filter_pos_y)
// Cross-references:
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422ae7 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422d60 (00422d60) at 00423059 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_init_FUN_004727c0 (004727c0) at 0047286c [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0 (004765e0) at 00476626 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 005065a0 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_advanceFilter_FUN_00586e70 (00586e70) at 00586ec8 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_process_FUN_00586cb0 (00586cb0) at 00586db1 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00586f00 (00586f00) at 00586f3e [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
          (CDemonLight *this_ptr,CDemonFilter *filter_ptr,int filter_index,int filter_pos_x,
          int filter_pos_y)

{
  char cVar1;
  uchar *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  uchar local_40;
  uint local_38;
  uchar *local_34;
  int local_30;
  
  this_ptr->precomputed_lighting_textures = (uchar *)filter_ptr->data_buffer;
  this_ptr->texture_width = filter_ptr->size;
  this_ptr->texture_height = filter_ptr->count;
  iVar3 = this_ptr->texture_width;
  this_ptr->texture_row_shift = 0;
  for (; 1 < iVar3; iVar3 = iVar3 >> 1) {
    this_ptr->texture_row_shift = this_ptr->texture_row_shift + 1;
  }
  this_ptr->shadow_x_shift = 8;
  this_ptr->texture_col_shift = this_ptr->texture_row_shift;
  iVar3 = this_ptr->shadow_map_width;
  this_ptr->shadow_y_shift = 8;
  for (; 1 < iVar3; iVar3 = iVar3 >> 1) {
    this_ptr->shadow_x_shift = this_ptr->shadow_x_shift + 1;
    this_ptr->shadow_y_shift = this_ptr->shadow_y_shift + 1;
  }
  for (iVar3 = this_ptr->texture_width; iVar3 < 0x100; iVar3 = iVar3 * 2) {
    this_ptr->shadow_x_shift = this_ptr->shadow_x_shift + 1;
    this_ptr->shadow_y_shift = this_ptr->shadow_y_shift + 1;
  }
  this_ptr->shadow_y_shift = this_ptr->shadow_y_shift - filter_index;
  this_ptr->shadow_x_shift = this_ptr->shadow_x_shift - filter_index;
  local_34 = this_ptr->filter_buffer;
  this_ptr->teture_coord_mask = this_ptr->texture_width - 1;
  if (local_34 != (uchar *)0x0) {
    uVar8 = filter_pos_x & 0xff;
    local_30 = 0;
    if (0 < this_ptr->texture_height) {
      local_38 = filter_pos_y >> 8;
      do {
        local_38 = local_38 + 1;
        uVar4 = this_ptr->texture_height - 1;
        iVar6 = (local_30 + (filter_pos_y >> 8) & uVar4) * this_ptr->texture_width;
        puVar2 = this_ptr->precomputed_lighting_textures;
        iVar3 = (uVar4 & local_38) * this_ptr->texture_width;
        iVar5 = 0;
        puVar7 = local_34;
        uVar4 = filter_pos_x >> 8;
        if (0 < this_ptr->texture_width) {
          do {
            uVar9 = this_ptr->texture_width - 1;
            uVar11 = (filter_pos_x >> 8) + iVar5 & uVar9;
            uVar9 = uVar4 + 1 & uVar9;
            local_40 = (uchar)((filter_pos_y & 0xffU) *
                               (puVar2[uVar9 + iVar3] * uVar8 +
                               (uint)puVar2[uVar11 + iVar3] * (0xff - uVar8)) +
                               (0xff - (filter_pos_y & 0xffU)) *
                               (puVar2[uVar9 + iVar6] * uVar8 +
                               (0xff - uVar8) * (uint)puVar2[uVar11 + iVar6]) >> 0x10);
            *puVar7 = local_40;
            iVar5 = iVar5 + 1;
            puVar7 = puVar7 + 1;
            uVar4 = uVar4 + 1;
          } while (iVar5 < this_ptr->texture_width);
        }
        local_30 = local_30 + 1;
        local_34 = local_34 + this_ptr->texture_width;
      } while (local_30 < this_ptr->texture_height);
    }
    this_ptr->precomputed_lighting_textures = this_ptr->filter_buffer;
  }
  pcVar10 = filter_ptr->name;
  pcVar12 = this_ptr->filter_name;
  do {
    cVar1 = *pcVar10;
    *pcVar12 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 00474770: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
// 00474771: PUSH ESI
// 00474772: PUSH EDI
// 00474773: PUSH EBP
// 00474774: SUB ESP,0x30
// 00474777: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 0047477b: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x10] (READ)
// 0047477f: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x14] (READ)
// 00474783: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 00474787: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0047478b: MOV EAX,dword ptr [EAX + 0x48]
// 0047478e: MOV dword ptr [ESI + 0x1c54],EAX
// 00474794: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 00474798: MOV EAX,dword ptr [EAX]
// 0047479a: MOV dword ptr [ESI + 0x1c58],EAX
// 004747a0: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 004747a4: MOV EAX,dword ptr [EAX + 0x4]
// 004747a7: MOV dword ptr [ESI + 0x1c5c],EAX
// 004747ad: MOV EAX,dword ptr [ESI + 0x1c58]
// 004747b3: MOV dword ptr [ESI + 0x1c60],0x0
// 004747bd: CMP EAX,0x1
// 004747c0: JLE 0x004747e0
//   XREF to: 004747e0 (CONDITIONAL_JUMP)
// 004747c2: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 004747c6: MOV EDI,dword ptr [ESI + 0x1c60]
//   Label: LAB_004747c6
// 004747cc: INC EDI
// 004747cd: SAR EAX,0x1
// 004747cf: MOV dword ptr [ESI + 0x1c60],EDI
// 004747d5: CMP EAX,0x1
// 004747d8: JG 0x004747c6
//   XREF to: 004747c6 (CONDITIONAL_JUMP)
// 004747da: LEA EAX,[EAX]
// 004747e0: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_004747e0
//   XREF to: Stack[0x4] (READ)
// 004747e4: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 004747e8: MOV EAX,dword ptr [EAX + 0x1c60]
// 004747ee: MOV dword ptr [ESI + 0x1cc8],0x8
// 004747f8: MOV dword ptr [ESI + 0x1c64],EAX
// 004747fe: MOV EAX,dword ptr [ESI + 0x1cc0]
// 00474804: MOV dword ptr [ESI + 0x1ccc],0x8
// 0047480e: CMP EAX,0x1
// 00474811: JLE 0x00474840
//   XREF to: 00474840 (CONDITIONAL_JUMP)
// 00474813: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00474817: MOV EBP,dword ptr [ESI + 0x1cc8]
//   Label: LAB_00474817
// 0047481d: MOV EDI,dword ptr [ESI + 0x1ccc]
// 00474823: INC EBP
// 00474824: INC EDI
// 00474825: MOV dword ptr [ESI + 0x1cc8],EBP
// 0047482b: SAR EAX,0x1
// 0047482d: MOV dword ptr [ESI + 0x1ccc],EDI
// 00474833: CMP EAX,0x1
// 00474836: JG 0x00474817
//   XREF to: 00474817 (CONDITIONAL_JUMP)
// 00474838: LEA EAX,[EAX]
// 0047483e: MOV EDX,EDX
// 00474840: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_00474840
//   XREF to: Stack[0x4] (READ)
// 00474844: MOV EAX,dword ptr [EAX + 0x1c58]
// 0047484a: CMP EAX,0x100
// 0047484f: JGE 0x00474880
//   XREF to: 00474880 (CONDITIONAL_JUMP)
// 00474851: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00474855: MOV EBP,dword ptr [ESI + 0x1cc8]
//   Label: LAB_00474855
// 0047485b: MOV EDI,dword ptr [ESI + 0x1ccc]
// 00474861: INC EBP
// 00474862: INC EDI
// 00474863: MOV dword ptr [ESI + 0x1cc8],EBP
// 00474869: ADD EAX,EAX
// 0047486b: MOV dword ptr [ESI + 0x1ccc],EDI
// 00474871: CMP EAX,0x100
// 00474876: JL 0x00474855
//   XREF to: 00474855 (CONDITIONAL_JUMP)
// 00474878: LEA EAX,[EAX]
// 0047487e: MOV EDX,EDX
// 00474880: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_00474880
//   XREF to: Stack[0x4] (READ)
// 00474884: MOV ESI,dword ptr [EAX + 0x1ccc]
// 0047488a: MOV EBP,dword ptr [EAX + 0x1cc8]
// 00474890: SUB ESI,EBX
// 00474892: SUB EBP,EBX
// 00474894: MOV dword ptr [EAX + 0x1ccc],ESI
// 0047489a: MOV dword ptr [EAX + 0x1cc8],EBP
// 004748a0: MOV EAX,dword ptr [EAX + 0x1c58]
// 004748a6: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 004748aa: DEC EAX
// 004748ab: MOV EDI,dword ptr [EBX + 0x1c6c]
// 004748b1: MOV dword ptr [EBX + 0x1c68],EAX
// 004748b7: TEST EDI,EDI
// 004748b9: JZ 0x00474a57
//   XREF to: 00474a57 (CONDITIONAL_JUMP)
// 004748bf: MOV EAX,EDX
// 004748c1: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 004748c5: XOR EBP,EBP
// 004748c7: SAR EAX,0x8
// 004748ca: AND EDX,0xff
// 004748d0: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 004748d4: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004748d8: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004748dc: MOV EAX,ECX
// 004748de: MOV EDX,dword ptr [EBX + 0x1c5c]
// 004748e4: SAR EAX,0x8
// 004748e7: AND ECX,0xff
// 004748ed: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004748f1: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 004748f5: TEST EDX,EDX
// 004748f7: JLE 0x00474a43
//   XREF to: 00474a43 (CONDITIONAL_JUMP)
// 004748fd: MOV EAX,0xff
// 00474902: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 00474906: SUB EAX,EBP
// 00474908: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047490c: MOV EAX,0xff
// 00474911: SUB EAX,ECX
// 00474913: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00474917: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 0047491b: INC EAX
// 0047491c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00474920: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_00474920
//   XREF to: Stack[0x4] (READ)
// 00474924: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 00474928: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 0047492c: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00474930: MOV EAX,dword ptr [EAX + 0x1c5c]
// 00474936: ADD ECX,EBX
// 00474938: DEC EAX
// 00474939: MOV ESI,dword ptr [EDX + 0x1c58]
// 0047493f: AND ECX,EAX
// 00474941: IMUL ECX,ESI
// 00474944: MOV EDX,dword ptr [EDX + 0x1c54]
// 0047494a: MOV EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 0047494e: LEA EBX,[EDX + ECX*0x1]
// 00474951: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00474955: AND EAX,EDI
// 00474957: MOV EBP,dword ptr [ECX + 0x1c58]
// 0047495d: IMUL EAX,EBP
// 00474960: ADD EDX,EAX
// 00474962: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00474966: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0047496a: XOR EAX,EAX
// 0047496c: TEST EBP,EBP
// 0047496e: JLE 0x00474a0b
//   XREF to: 00474a0b (CONDITIONAL_JUMP)
// 00474974: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 00474978: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 0047497c: INC EBX
// 0047497d: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_0047497d
//   XREF to: Stack[0x4] (READ)
// 00474981: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 00474985: MOV EDX,dword ptr [EDX + 0x1c58]
// 0047498b: ADD EDI,EAX
// 0047498d: DEC EDX
// 0047498e: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00474992: AND EDI,EDX
// 00474994: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 00474998: MOVZX ESI,byte ptr [EDI + ESI*0x1]
// 0047499c: IMUL EBP,ESI
// 0047499f: MOV ESI,EBX
// 004749a1: AND ESI,EDX
// 004749a3: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 004749a7: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x40] (DATA)
// 004749aa: MOV DL,byte ptr [EDX + ESI*0x1]
// 004749ad: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 004749b1: AND EDX,0xff
// 004749b7: IMUL EDX,EBP
// 004749ba: ADD EDX,dword ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004749bd: ADD EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 004749c1: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 004749c5: MOVZX EDI,byte ptr [EDI]
// 004749c8: IMUL EDI,EBP
// 004749cb: ADD ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 004749cf: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 004749d3: MOVZX ESI,byte ptr [ESI]
// 004749d6: IMUL ESI,EBP
// 004749d9: ADD ESI,EDI
// 004749db: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 004749df: IMUL EDI,EDX
// 004749e2: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 004749e6: IMUL EDX,ESI
// 004749e9: ADD EDX,EDI
// 004749eb: SHR EDX,0x10
// 004749ee: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x40] (DATA)
// 004749f1: MOV DL,byte ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004749f4: MOV byte ptr [ECX],DL
// 004749f6: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 004749fa: INC ECX
// 004749fb: INC EAX
// 004749fc: MOV ESI,dword ptr [EDX + 0x1c58]
// 00474a02: INC EBX
// 00474a03: CMP EAX,ESI
// 00474a05: JL 0x0047497d
//   XREF to: 0047497d (CONDITIONAL_JUMP)
// 00474a0b: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_00474a0b
//   XREF to: Stack[0x4] (READ)
// 00474a0f: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 00474a13: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 00474a17: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 00474a1b: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00474a1f: INC EBX
// 00474a20: INC ESI
// 00474a21: MOV EAX,dword ptr [EAX + 0x1c58]
// 00474a27: MOV EDI,dword ptr [EDX + 0x1c5c]
// 00474a2d: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 00474a31: ADD ECX,EAX
// 00474a33: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 00474a37: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 00474a3b: CMP ESI,EDI
// 00474a3d: JL 0x00474920
//   XREF to: 00474920 (CONDITIONAL_JUMP)
// 00474a43: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_00474a43
//   XREF to: Stack[0x4] (READ)
// 00474a47: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00474a4b: MOV EAX,dword ptr [EAX + 0x1c6c]
// 00474a51: MOV dword ptr [EDX + 0x1c54],EAX
// 00474a57: MOV ESI,dword ptr [ESP + 0x48]
//   Label: LAB_00474a57
//   XREF to: Stack[0x8] (READ)
// 00474a5b: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00474a5f: ADD ESI,0x8
// 00474a62: ADD EDI,0x1c74
// 00474a68: PUSH EDI
// 00474a69: MOV AL,byte ptr [ESI]
//   Label: LAB_00474a69
// 00474a6b: MOV byte ptr [EDI],AL
// 00474a6d: CMP AL,0x0
// 00474a6f: JZ 0x00474a81
//   XREF to: 00474a81 (CONDITIONAL_JUMP)
// 00474a71: MOV AL,byte ptr [ESI + 0x1]
// 00474a74: ADD ESI,0x2
// 00474a77: MOV byte ptr [EDI + 0x1],AL
// 00474a7a: ADD EDI,0x2
// 00474a7d: CMP AL,0x0
// 00474a7f: JNZ 0x00474a69
//   XREF to: 00474a69 (CONDITIONAL_JUMP)
// 00474a81: POP EDI
//   Label: LAB_00474a81
// 00474a82: ADD ESP,0x30
// 00474a85: POP EBP
// 00474a86: POP EDI
// 00474a87: POP ESI
// 00474a88: POP EBX
// 00474a89: RET

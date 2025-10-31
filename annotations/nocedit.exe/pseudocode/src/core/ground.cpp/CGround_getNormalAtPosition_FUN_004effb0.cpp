// Name: core_ground.cpp_CGround_getNormalAtPosition_FUN_004effb0
// Address: 004effb0
// Address Range: [[004effb0, 004f027f]]
// Convention: __cdecl
// Signature: void core_ground.cpp_CGround_getNormalAtPosition_FUN_004effb0(CGround * this_ptr, int world_x, int world_z, CVector3i * out_normal)
// Function calls:
//   engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0

#include "nocturne.h"

void __cdecl
core_ground_cpp_CGround_getNormalAtPosition_FUN_004effb0
          (CGround *this_ptr,int world_x,int world_z,CVector3i *out_normal)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int *unaff_ESI;
  int *piVar6;
  uint uVar7;
  byte bVar8;
  int aiStackY_1024 [1008];
  CVector3i local_3c;
  int local_30 [4];
  int local_20;
  void *local_1c;
  void *local_18;
  int local_14;
  int local_10;
  
  bVar8 = 0;
  iVar5 = this_ptr->vertical_scale * 0x100;
  local_14 = (int)(((longlong)(int)(iVar5 - 1U & world_z) * 0x10000) / (longlong)iVar5);
  iVar5 = this_ptr->vertical_scale * 0x100;
  local_10 = (int)(((longlong)(int)(iVar5 - 1U & world_x) * 0x10000) / (longlong)iVar5);
  uVar4 = this_ptr->vertical_scale << 8;
  uVar7 = this_ptr->width_minus_1 & (uint)world_z / uVar4;
  uVar3 = (uint)world_x / uVar4 & this_ptr->height_minus_1;
  local_1c = (void *)(uVar3 & 1);
  uVar4 = uVar3 + 1;
  uVar1 = uVar7 + 1;
  if ((void *)(uVar7 & 1) == local_1c) {
    if (local_10 < local_14) {
      local_1c = (void *)(this_ptr->width * uVar3);
      pvVar2 = this_ptr->terrain_data;
      local_30[3] = (int)*(short *)((int)pvVar2 + ((int)local_1c + uVar7) * 4) *
                    this_ptr->height_scale;
      local_3c.z = (int)*(short *)((int)pvVar2 +
                                  ((this_ptr->width_minus_1 & uVar1) + (int)local_1c) * 4) *
                   this_ptr->height_scale;
      local_3c.x = local_30[3] - local_3c.z;
      local_3c.y = this_ptr->vertical_scale << 8;
      local_3c.z = local_3c.z -
                   this_ptr->height_scale *
                   (int)*(short *)((int)pvVar2 +
                                  ((uVar1 & this_ptr->height_minus_1) +
                                  (uVar4 & this_ptr->height_minus_1) * this_ptr->width) * 4);
      engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c);
      piVar6 = (int *)&stack0xffffffb0;
    }
    else {
      local_1c = this_ptr->terrain_data;
      local_30[3] = (int)*(short *)((uVar3 * this_ptr->width + uVar7) * 4 + (int)local_1c) *
                    this_ptr->height_scale;
      iVar5 = (this_ptr->height_minus_1 & uVar4) * this_ptr->width;
      local_3c.z = (int)*(short *)((iVar5 + uVar7) * 4 + (int)local_1c) * this_ptr->height_scale;
      local_3c.x = local_3c.z -
                   this_ptr->height_scale *
                   (int)*(short *)(((uVar1 & this_ptr->width_minus_1) + iVar5) * 4 + (int)local_1c);
      local_3c.y = this_ptr->vertical_scale << 8;
      local_3c.z = local_30[3] - local_3c.z;
      engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c);
      piVar6 = local_30 + 1;
    }
  }
  else if (local_10 < 0x10000 - local_14) {
    local_1c = (void *)(this_ptr->width * uVar3);
    local_18 = this_ptr->terrain_data;
    local_3c.z = this_ptr->height_scale *
                 (int)*(short *)(((int)local_1c + uVar7) * 4 + (int)local_18);
    local_20 = (int)*(short *)(((uVar1 & this_ptr->width_minus_1) + (int)local_1c) * 4 +
                              (int)local_18) * this_ptr->height_scale;
    local_3c.x = local_3c.z - local_20;
    local_3c.y = this_ptr->vertical_scale << 8;
    local_3c.z = local_3c.z -
                 this_ptr->height_scale *
                 (int)*(short *)((uVar7 + (uVar4 & this_ptr->height_minus_1) * this_ptr->width) * 4
                                + (int)local_18);
    engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c);
    piVar6 = (int *)&stack0xffffffa4;
  }
  else {
    local_18 = (void *)(this_ptr->width_minus_1 & uVar1);
    pvVar2 = this_ptr->terrain_data;
    local_20 = this_ptr->height_scale *
               (int)*(short *)((uVar3 * this_ptr->width + (int)local_18) * 4 + (int)pvVar2);
    iVar5 = (uVar4 & this_ptr->height_minus_1) * this_ptr->width;
    local_3c.z = (int)*(short *)((int)pvVar2 + ((int)local_18 + iVar5) * 4) * this_ptr->height_scale
    ;
    local_3c.x = (int)*(short *)((int)pvVar2 + (iVar5 + uVar7) * 4) * this_ptr->height_scale -
                 local_3c.z;
    local_3c.y = this_ptr->vertical_scale << 8;
    local_3c.z = local_20 - local_3c.z;
    engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&local_3c);
    piVar6 = (int *)&stack0xffffffbc;
  }
  local_3c.x = *piVar6;
  local_30[(uint)bVar8 * -2 + -2] = piVar6[(uint)bVar8 * -2 + 1];
  local_30[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -1] =
       (piVar6 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
  *unaff_ESI = local_3c.y;
  unaff_ESI[(uint)bVar8 * -2 + 1] = local_30[(uint)bVar8 * -2 + -1];
  (unaff_ESI + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
       local_30[(uint)bVar8 * -2 + (uint)bVar8 * -2];
  return;
}


// Assembly code:
// 004effb0: PUSH EBX
//   Label: core_ground.cpp_CGround_getNormalAtPosition_FUN_004effb0
// 004effb1: PUSH EDI
// 004effb2: PUSH EBP
// 004effb3: SUB ESP,0x54
// 004effb6: MOV EDI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0xc] (READ)
// 004effba: MOV EBP,ESI
// 004effbc: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x4] (READ)
// 004effc0: MOV EBX,dword ptr [ESI + 0x1c]
// 004effc3: SHL EBX,0x8
// 004effc6: LEA EAX,[EBX + -0x1]
// 004effc9: MOV EDX,0x10000
// 004effce: AND EAX,EDI
// 004effd0: IMUL EDX
// 004effd2: IDIV EBX
// 004effd4: MOV EBX,dword ptr [ESI + 0x1c]
// 004effd7: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x8] (READ)
// 004effdb: SHL EBX,0x8
// 004effde: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004effe2: LEA EAX,[EBX + -0x1]
// 004effe5: AND EAX,EDX
// 004effe7: MOV EDX,0x10000
// 004effec: IMUL EDX
// 004effee: IDIV EBX
// 004efff0: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004efff4: MOV ECX,dword ptr [ESI + 0x1c]
// 004efff7: XOR EDX,EDX
// 004efff9: SHL ECX,0x8
// 004efffc: MOV EAX,EDI
// 004efffe: DIV ECX
// 004f0000: MOV EDI,dword ptr [ESI + 0x8]
// 004f0003: AND EDI,EAX
// 004f0005: XOR EDX,EDX
// 004f0007: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[0x8] (READ)
// 004f000b: DIV ECX
// 004f000d: MOV EDX,EDI
// 004f000f: MOV ECX,dword ptr [ESI + 0xc]
// 004f0012: AND EDX,0x1
// 004f0015: AND EAX,ECX
// 004f0017: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f001b: MOV EDX,EAX
// 004f001d: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 004f0021: AND EDX,0x1
// 004f0024: LEA ECX,[EAX + 0x1]
// 004f0027: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f002b: LEA EDX,[EDI + 0x1]
// 004f002e: CMP EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 004f0032: JNZ 0x004f015a
//   XREF to: 004f015a (CONDITIONAL_JUMP)
// 004f0038: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 004f003c: CMP EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 004f0040: JLE 0x004f00d2
//   XREF to: 004f00d2 (CONDITIONAL_JUMP)
// 004f0046: MOV EBX,dword ptr [ESI]
// 004f0048: IMUL EBX,EAX
// 004f004b: MOV EAX,dword ptr [ESI + 0x24]
// 004f004e: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f0052: ADD EBX,EDI
// 004f0054: MOVSX EBX,word ptr [EAX + EBX*0x4]
// 004f0058: MOV EDI,dword ptr [ESI + 0x20]
// 004f005b: IMUL EBX,EDI
// 004f005e: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 004f0062: MOV EBX,dword ptr [ESI + 0x8]
// 004f0065: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 004f0069: AND EBX,EDX
// 004f006b: ADD EBX,EDI
// 004f006d: MOVSX EBX,word ptr [EAX + EBX*0x4]
// 004f0071: IMUL EBX,dword ptr [ESI + 0x20]
// 004f0075: AND ECX,dword ptr [ESI + 0xc]
// 004f0078: IMUL ECX,dword ptr [ESI]
// 004f007b: AND EDX,dword ptr [ESI + 0xc]
// 004f007e: ADD EDX,ECX
// 004f0080: MOVSX EAX,word ptr [EAX + EDX*0x4]
// 004f0084: MOV EDX,dword ptr [ESI + 0x20]
// 004f0087: IMUL EDX,EAX
// 004f008a: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 004f008e: SUB EAX,EBX
// 004f0090: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004f0094: MOV EAX,dword ptr [ESI + 0x1c]
// 004f0097: SHL EAX,0x8
// 004f009a: LEA EDI,[ESP + 0x24]
//   XREF to: Stack[-0x3c] (DATA)
// 004f009e: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004f00a2: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x3c] (DATA)
// 004f00a6: SUB EBX,EDX
// 004f00a8: PUSH EAX
// 004f00a9: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x54] (DATA)
// 004f00ad: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 004f00b1: CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
//   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)
// 004f00b6: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x54] (DATA)
// 004f00ba: ADD ESP,0x4
//   Label: LAB_004f00ba
// 004f00bd: MOVSD ES:EDI,ESI
// 004f00be: MOVSD ES:EDI,ESI
// 004f00bf: MOVSD ES:EDI,ESI
// 004f00c0: LEA ESI,[ESP + 0x24]
//   XREF to: Stack[-0x3c] (DATA)
// 004f00c4: MOV EDI,EBP
// 004f00c6: MOVSD ES:EDI,ESI
// 004f00c7: MOVSD ES:EDI,ESI
// 004f00c8: MOVSD ES:EDI,ESI
// 004f00c9: MOV EAX,EBP
// 004f00cb: ADD ESP,0x54
// 004f00ce: POP EBP
// 004f00cf: POP EDI
// 004f00d0: POP EBX
// 004f00d1: RET
// 004f00d2: IMUL EAX,dword ptr [ESI]
//   Label: LAB_004f00d2
// 004f00d5: ADD EAX,EDI
// 004f00d7: MOV EBX,dword ptr [ESI + 0x24]
// 004f00da: SHL EAX,0x2
// 004f00dd: ADD EAX,EBX
// 004f00df: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f00e3: MOVSX EAX,word ptr [EAX]
// 004f00e6: MOV EBX,dword ptr [ESI + 0x20]
// 004f00e9: IMUL EAX,EBX
// 004f00ec: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004f00f0: MOV EAX,dword ptr [ESI + 0xc]
// 004f00f3: AND EAX,ECX
// 004f00f5: IMUL EAX,dword ptr [ESI]
// 004f00f8: AND EDX,dword ptr [ESI + 0x8]
// 004f00fb: ADD EDX,EAX
// 004f00fd: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 004f0101: SHL EDX,0x2
// 004f0104: ADD EDX,ECX
// 004f0106: MOVSX EDX,word ptr [EDX]
// 004f0109: MOV ECX,dword ptr [ESI + 0x20]
// 004f010c: IMUL ECX,EDX
// 004f010f: ADD EAX,EDI
// 004f0111: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 004f0115: SHL EAX,0x2
// 004f0118: ADD EAX,EBX
// 004f011a: MOV EDI,dword ptr [ESI + 0x20]
// 004f011d: MOVSX EDX,word ptr [EAX]
// 004f0120: IMUL EDX,EDI
// 004f0123: MOV EAX,EDX
// 004f0125: SUB EAX,ECX
// 004f0127: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004f012b: MOV EAX,dword ptr [ESI + 0x1c]
// 004f012e: SHL EAX,0x8
// 004f0131: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004f0135: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 004f0139: SUB EAX,EDX
// 004f013b: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004f013f: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x3c] (DATA)
// 004f0143: PUSH EAX
// 004f0144: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x30] (DATA)
// 004f0148: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x3c] (DATA)
// 004f014c: CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
//   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)
// 004f0151: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x30] (DATA)
// 004f0155: JMP 0x004f00ba
//   XREF to: 004f00ba (UNCONDITIONAL_JUMP)
// 004f015a: MOV EBX,0x10000
//   Label: LAB_004f015a
// 004f015f: SUB EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 004f0163: CMP EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 004f0167: JLE 0x004f0200
//   XREF to: 004f0200 (CONDITIONAL_JUMP)
// 004f016d: MOV EBX,dword ptr [ESI]
// 004f016f: IMUL EBX,EAX
// 004f0172: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f0176: LEA EAX,[EBX + EDI*0x1]
// 004f0179: SHL EAX,0x2
// 004f017c: MOV EBX,dword ptr [ESI + 0x24]
// 004f017f: ADD EAX,EBX
// 004f0181: MOV dword ptr [ESP + 0x48],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004f0185: MOVSX EAX,word ptr [EAX]
// 004f0188: MOV EBX,dword ptr [ESI + 0x20]
// 004f018b: IMUL EBX,EAX
// 004f018e: AND EDX,dword ptr [ESI + 0x8]
// 004f0191: ADD EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 004f0195: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 004f0199: SHL EDX,0x2
// 004f019c: ADD EDX,EAX
// 004f019e: MOVSX EAX,word ptr [EDX]
// 004f01a1: MOV EDX,dword ptr [ESI + 0x20]
// 004f01a4: IMUL EAX,EDX
// 004f01a7: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004f01ab: MOV EAX,dword ptr [ESI + 0xc]
// 004f01ae: MOV EDX,dword ptr [ESI]
// 004f01b0: AND ECX,EAX
// 004f01b2: IMUL ECX,EDX
// 004f01b5: ADD EDI,ECX
// 004f01b7: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 004f01bb: SHL EDI,0x2
// 004f01be: ADD EDI,ECX
// 004f01c0: MOV EDX,dword ptr [ESI + 0x20]
// 004f01c3: MOVSX EAX,word ptr [EDI]
// 004f01c6: IMUL EDX,EAX
// 004f01c9: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 004f01cd: MOV EAX,EBX
// 004f01cf: SUB EAX,EDI
// 004f01d1: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004f01d5: MOV EAX,dword ptr [ESI + 0x1c]
// 004f01d8: SHL EAX,0x8
// 004f01db: SUB EBX,EDX
// 004f01dd: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004f01e1: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x3c] (DATA)
// 004f01e5: LEA EDI,[ESP + 0x24]
//   XREF to: Stack[-0x3c] (DATA)
// 004f01e9: PUSH EAX
// 004f01ea: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x60] (DATA)
// 004f01ee: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 004f01f2: CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
//   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)
// 004f01f7: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x60] (DATA)
// 004f01fb: JMP 0x004f00ba
//   XREF to: 004f00ba (UNCONDITIONAL_JUMP)
// 004f0200: MOV EBX,dword ptr [ESI + 0x8]
//   Label: LAB_004f0200
// 004f0203: AND EBX,EDX
// 004f0205: MOV dword ptr [ESP + 0x48],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004f0209: IMUL EAX,dword ptr [ESI]
// 004f020c: ADD EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 004f0210: LEA EDX,[EAX*0x4 + 0x0]
// 004f0217: MOV EAX,dword ptr [ESI + 0x24]
// 004f021a: MOV EBX,dword ptr [ESI + 0x20]
// 004f021d: MOVSX EDX,word ptr [EDX + EAX*0x1]
// 004f0221: IMUL EBX,EDX
// 004f0224: MOV dword ptr [ESP + 0x40],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 004f0228: MOV EBX,dword ptr [ESI + 0xc]
// 004f022b: MOV EDX,dword ptr [ESI]
// 004f022d: AND ECX,EBX
// 004f022f: IMUL ECX,EDX
// 004f0232: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 004f0236: ADD EDX,ECX
// 004f0238: MOV EBX,dword ptr [ESI + 0x20]
// 004f023b: MOVSX EDX,word ptr [EAX + EDX*0x4]
// 004f023f: IMUL EDX,EBX
// 004f0242: ADD ECX,EDI
// 004f0244: MOVSX EAX,word ptr [EAX + ECX*0x4]
// 004f0248: IMUL EAX,EBX
// 004f024b: SUB EAX,EDX
// 004f024d: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004f0251: MOV EAX,dword ptr [ESI + 0x1c]
// 004f0254: SHL EAX,0x8
// 004f0257: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004f025b: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 004f025f: SUB EAX,EDX
// 004f0261: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004f0265: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x3c] (DATA)
// 004f0269: PUSH EAX
// 004f026a: LEA ESI,[ESP + 0x1c]
//   XREF to: Stack[-0x48] (DATA)
// 004f026e: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x3c] (DATA)
// 004f0272: CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
//   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)
// 004f0277: LEA ESI,[ESP + 0x1c]
//   XREF to: Stack[-0x48] (DATA)
// 004f027b: JMP 0x004f00ba
//   XREF to: 004f00ba (UNCONDITIONAL_JUMP)

// Name: core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0
// Address: 0044bdd0
// Address Range: [[0044bdd0, 0044bfa2]]
// Convention: __cdecl
// Signature: uint core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0(SFogGrid * fog_ptr, CVector3i * start_pos, CVector3i * end_pos, int ray_length)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700 (00453700) at 00453798 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452c4c [UNCONDITIONAL_CALL]

#include "nocturne.h"

uint __cdecl
core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0
          (SFogGrid *fog_ptr,CVector3i *start_pos,CVector3i *end_pos,int ray_length)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int local_28;
  int local_24;
  uint local_14;
  
  if (ray_length == 0) {
    local_14 = 0;
  }
  else {
    uVar2 = (int)((ray_length + (ray_length >> 0x1f) * -0x100) -
                 (uint)((ray_length >> 0x1f) << 7 < 0)) >> 8;
    local_14 = uVar2;
    if (uVar2 != 0) {
      local_14 = 0;
      local_2c = start_pos->x + (fog_ptr->sampling_offset).x;
      local_28 = start_pos->y + (fog_ptr->sampling_offset).y;
      iVar5 = 0;
      local_24 = start_pos->z + (fog_ptr->sampling_offset).z;
      if (0 < (int)uVar2) {
        do {
          lVar1 = (longlong)fog_ptr->density_multiplier *
                  (longlong)
                  (int)(uint)(byte)fog_ptr->planes
                                   [(int)((local_24 + (local_24 >> 0x1f) * -0x100) -
                                         (uint)((local_24 >> 0x1f) << 7 < 0)) >> 8 & 0xf].grid
                                   [(int)((local_28 + (local_28 >> 0x1f) * -0x100) -
                                         (uint)((local_28 >> 0x1f) << 7 < 0)) >> 8 & 0xf]
                                   [(int)((local_2c + (local_2c >> 0x1f) * -0x100) -
                                         (uint)((local_2c >> 0x1f) << 7 < 0)) >> 8 & 0xf];
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          iVar4 = fog_ptr->height_threshold;
          if (iVar4 != 0) {
            if (iVar4 < local_28) {
              iVar4 = 0;
            }
            else if (local_28 < 0) {
              iVar4 = 0x10000;
            }
            else {
              iVar4 = (int)(((longlong)(iVar4 - local_28) * 0x10000) / (longlong)iVar4);
            }
            uVar3 = (uint)((longlong)iVar4 * (longlong)(int)uVar3) >> 0x10 |
                    (int)((ulonglong)((longlong)iVar4 * (longlong)(int)uVar3) >> 0x20) << 0x10;
          }
          local_14 = local_14 + uVar3;
          if (0x4000 < local_14) {
            return 0x4000;
          }
          local_2c = local_2c + (end_pos->x - start_pos->x) / (int)uVar2;
          iVar5 = iVar5 + 1;
          local_28 = local_28 + (end_pos->y - start_pos->y) / (int)uVar2;
          local_24 = local_24 + (end_pos->z - start_pos->z) / (int)uVar2;
        } while (iVar5 < (int)uVar2);
      }
    }
  }
  return local_14;
}


// Assembly code:
// 0044bdd0: PUSH EBX
//   Label: core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0
// 0044bdd1: PUSH ESI
// 0044bdd2: PUSH EDI
// 0044bdd3: PUSH EBP
// 0044bdd4: SUB ESP,0x1c
// 0044bdd7: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0044bddb: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0044bddf: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 0044bde3: CMP dword ptr [ESP + 0x3c],0x0
//   XREF to: Stack[0x10] (READ)
// 0044bde8: JZ 0x0044bf74
//   XREF to: 0044bf74 (CONDITIONAL_JUMP)
// 0044bdee: MOV EBX,dword ptr [ESI]
// 0044bdf0: MOV EAX,dword ptr [ECX]
// 0044bdf2: SUB EAX,EBX
// 0044bdf4: MOV EDI,dword ptr [ESI + 0x4]
// 0044bdf7: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044bdfb: MOV EAX,dword ptr [ECX + 0x4]
// 0044bdfe: SUB EAX,EDI
// 0044be00: MOV EDX,dword ptr [ESI + 0x8]
// 0044be03: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0044be07: MOV EAX,dword ptr [ECX + 0x8]
// 0044be0a: SUB EAX,EDX
// 0044be0c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044be10: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 0044be14: MOV EDX,EAX
// 0044be16: SAR EDX,0x1f
// 0044be19: SHL EDX,0x8
// 0044be1c: SBB EAX,EDX
// 0044be1e: SAR EAX,0x8
// 0044be21: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[0x10] (WRITE)
// 0044be25: TEST EAX,EAX
// 0044be27: JZ 0x0044bf6c
//   XREF to: 0044bf6c (CONDITIONAL_JUMP)
// 0044be2d: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0044be31: MOV EDX,EAX
// 0044be33: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 0044be37: SAR EDX,0x1f
// 0044be3a: IDIV EBX
// 0044be3c: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044be40: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0044be44: MOV EDX,EAX
// 0044be46: SAR EDX,0x1f
// 0044be49: IDIV EBX
// 0044be4b: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0044be4f: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0044be53: MOV EDX,EAX
// 0044be55: SAR EDX,0x1f
// 0044be58: IDIV EBX
// 0044be5a: MOV EDI,ESP
// 0044be5c: MOVSD ES:EDI,ESI
// 0044be5d: MOVSD ES:EDI,ESI
// 0044be5e: MOVSD ES:EDI,ESI
// 0044be5f: MOV ECX,EBX
// 0044be61: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0044be64: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 0044be68: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 0044be6c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044be70: XOR EBX,EBX
// 0044be72: MOV EAX,dword ptr [EBP + 0x1000]
// 0044be78: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0044be7c: ADD ESI,EAX
// 0044be7e: MOV EAX,dword ptr [EBP + 0x1004]
// 0044be84: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x2c] (DATA)
// 0044be87: ADD EDI,EAX
// 0044be89: MOV EAX,dword ptr [EBP + 0x1008]
// 0044be8f: XOR ESI,ESI
// 0044be91: ADD EDX,EAX
// 0044be93: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0044be97: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0044be9b: TEST ECX,ECX
// 0044be9d: JLE 0x0044bf68
//   XREF to: 0044bf68 (CONDITIONAL_JUMP)
// 0044bea3: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0044bea3
//   XREF to: Stack[-0x24] (READ)
// 0044bea7: MOV EDX,EAX
// 0044bea9: SAR EDX,0x1f
// 0044beac: SHL EDX,0x8
// 0044beaf: SBB EAX,EDX
// 0044beb1: SAR EAX,0x8
// 0044beb4: MOV ECX,EAX
// 0044beb6: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 0044beba: MOV EDX,EAX
// 0044bebc: SAR EDX,0x1f
// 0044bebf: SHL EDX,0x8
// 0044bec2: SBB EAX,EDX
// 0044bec4: SAR EAX,0x8
// 0044bec7: AND ECX,0xf
// 0044beca: SHL ECX,0x8
// 0044becd: AND EAX,0xf
// 0044bed0: ADD ECX,EBP
// 0044bed2: SHL EAX,0x4
// 0044bed5: ADD ECX,EAX
// 0044bed7: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0044beda: MOV EDX,EAX
// 0044bedc: SAR EDX,0x1f
// 0044bedf: SHL EDX,0x8
// 0044bee2: SBB EAX,EDX
// 0044bee4: SAR EAX,0x8
// 0044bee7: AND EAX,0xf
// 0044beea: MOV CL,byte ptr [ECX + EAX*0x1]
// 0044beed: MOV EDX,ECX
// 0044beef: MOV EAX,dword ptr [EBP + 0x101c]
// 0044bef5: AND EDX,0xff
// 0044befb: IMUL EDX
// 0044befd: SHRD EAX,EDX,0x10
// 0044bf01: MOV EBX,dword ptr [EBP + 0x1018]
// 0044bf07: MOV ECX,EAX
// 0044bf09: TEST EBX,EBX
// 0044bf0b: JZ 0x0044bf21
//   XREF to: 0044bf21 (CONDITIONAL_JUMP)
// 0044bf0d: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 0044bf11: CMP EAX,EBX
// 0044bf13: JLE 0x0044bf78
//   XREF to: 0044bf78 (CONDITIONAL_JUMP)
// 0044bf15: XOR EAX,EAX
// 0044bf17: MOV EDX,ECX
//   Label: LAB_0044bf17
// 0044bf19: IMUL EDX
// 0044bf1b: SHRD EAX,EDX,0x10
// 0044bf1f: MOV ECX,EAX
// 0044bf21: MOV EBX,dword ptr [ESP + 0x18]
//   Label: LAB_0044bf21
//   XREF to: Stack[-0x14] (READ)
// 0044bf25: ADD EBX,ECX
// 0044bf27: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0044bf2b: CMP EBX,0x4000
// 0044bf31: JA 0x0044bf96
//   XREF to: 0044bf96 (CONDITIONAL_JUMP)
// 0044bf33: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0044bf37: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0044bf3a: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 0044bf3e: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 0044bf42: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 0044bf46: ADD EBX,EAX
// 0044bf48: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0044bf4c: INC ESI
// 0044bf4d: ADD EDI,EAX
// 0044bf4f: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0044bf53: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x2c] (DATA)
// 0044bf56: ADD EDX,EAX
// 0044bf58: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0044bf5c: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0044bf60: CMP ESI,ECX
// 0044bf62: JL 0x0044bea3
//   XREF to: 0044bea3 (CONDITIONAL_JUMP)
// 0044bf68: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0044bf68
//   XREF to: Stack[-0x14] (READ)
// 0044bf6c: ADD ESP,0x1c
//   Label: LAB_0044bf6c
// 0044bf6f: POP EBP
// 0044bf70: POP EDI
// 0044bf71: POP ESI
// 0044bf72: POP EBX
// 0044bf73: RET
// 0044bf74: XOR EAX,EAX
//   Label: LAB_0044bf74
// 0044bf76: JMP 0x0044bf6c
//   XREF to: 0044bf6c (UNCONDITIONAL_JUMP)
// 0044bf78: TEST EAX,EAX
//   Label: LAB_0044bf78
// 0044bf7a: JGE 0x0044bf83
//   XREF to: 0044bf83 (CONDITIONAL_JUMP)
// 0044bf7c: MOV EAX,0x10000
// 0044bf81: JMP 0x0044bf17
//   XREF to: 0044bf17 (UNCONDITIONAL_JUMP)
// 0044bf83: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_0044bf83
//   XREF to: Stack[-0x28] (READ)
// 0044bf87: MOV EAX,EBX
// 0044bf89: SUB EAX,EDX
// 0044bf8b: MOV EDX,0x10000
// 0044bf90: IMUL EDX
// 0044bf92: IDIV EBX
// 0044bf94: JMP 0x0044bf17
//   XREF to: 0044bf17 (UNCONDITIONAL_JUMP)
// 0044bf96: MOV EAX,0x4000
//   Label: LAB_0044bf96
// 0044bf9b: ADD ESP,0x1c
// 0044bf9e: POP EBP
// 0044bf9f: POP EDI
// 0044bfa0: POP ESI
// 0044bfa1: POP EBX
// 0044bfa2: RET

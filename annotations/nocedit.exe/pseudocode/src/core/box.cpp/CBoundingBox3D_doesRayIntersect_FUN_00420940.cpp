// Name: core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
// Address: 00420940
// Address Range: [[00420940, 00420d69]]
// Convention: __cdecl
// Signature: float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
// Cross-references:
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 004095af [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422390 (00422390) at 00422413 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0 (004781d0) at 0047821d [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509330 (00509330) at 005096a4 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c340 (0053c340) at 0053c493 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_FUN_005763a0 (005763a0) at 005765ab [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 005840f5 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005eb740 (005eb740) at 005eb76f [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00420d35) */

float __cdecl
core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
          (CBoundingBox3D *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,
          CVector3f *out_normal)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  BADSPACEBASE *in_ESP;
  CVector3f local_5c [2];
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  
  bVar3 = true;
  if (ray_origin->x < (this_ptr->min).x) {
    local_34 = (this_ptr->min).x - ray_origin->x;
    if (ray_direction->x < local_34) {
      return -1.0;
    }
    local_34 = local_34 / ray_direction->x;
    local_40 = -1.0;
LAB_00420997:
    bVar3 = false;
  }
  else {
    if ((this_ptr->max).x < ray_origin->x) {
      local_34 = (this_ptr->max).x - ray_origin->x;
      if (local_34 < ray_direction->x) {
        return -1.0;
      }
      local_34 = local_34 / ray_direction->x;
      local_40 = 1.0;
      goto LAB_00420997;
    }
    local_34 = -1.0;
  }
  if ((this_ptr->min).y <= ray_origin->y) {
    if (ray_origin->y <= (this_ptr->max).y) {
      local_30 = -1.0;
      goto LAB_004209dc;
    }
    local_30 = (this_ptr->max).y - ray_origin->y;
    if (local_30 < ray_direction->y) {
      return -1.0;
    }
    local_30 = local_30 / ray_direction->y;
    local_44 = 1.0;
  }
  else {
    local_30 = (this_ptr->min).y - ray_origin->y;
    if (ray_direction->y < local_30) {
      return -1.0;
    }
    local_30 = local_30 / ray_direction->y;
    local_44 = -1.0;
  }
  bVar3 = false;
LAB_004209dc:
  if ((this_ptr->min).z <= ray_origin->z) {
    if ((this_ptr->max).z < ray_origin->z) {
      local_38 = (this_ptr->max).z - ray_origin->z;
      if (local_38 < ray_direction->z) {
        return -1.0;
      }
      local_38 = local_38 / ray_direction->z;
      local_20 = 1.0;
    }
    else {
      local_38 = -1.0;
      if (bVar3) {
        if (out_normal != (CVector3f *)0x0) {
          fVar1 = ray_direction->y;
          fVar2 = ray_direction->z;
          if (out_normal != local_5c) {
            out_normal->x = -ray_direction->x;
            out_normal->y = -fVar1;
            out_normal->z = -fVar2;
          }
          fVar1 = SQRT(out_normal->z * out_normal->z +
                       out_normal->x * out_normal->x + out_normal->y * out_normal->y);
          if (fVar1 <= 0.0) {
            out_normal->z = 0.0;
            out_normal->y = out_normal->z;
            out_normal->x = out_normal->y;
            return 0.0;
          }
          fVar1 = 1.0 / fVar1;
          out_normal->x = out_normal->x * fVar1;
          out_normal->y = out_normal->y * fVar1;
          out_normal->z = out_normal->z * fVar1;
        }
        return 0.0;
      }
    }
  }
  else {
    local_38 = (this_ptr->min).z - ray_origin->z;
    if (ray_direction->z < local_38) {
      return -1.0;
    }
    local_38 = local_38 / ray_direction->z;
    local_20 = -1.0;
  }
  local_2c = local_34;
  if (local_34 < local_30) {
    local_2c = local_30;
  }
  bVar3 = local_34 < local_30;
  if (local_38 <= local_2c) {
    if (!bVar3) {
      fVar1 = ray_direction->y * local_2c + ray_origin->y;
      if (fVar1 < (this_ptr->min).y) {
        return -1.0;
      }
      if ((this_ptr->max).y < fVar1) {
        return -1.0;
      }
      fVar1 = ray_direction->z * local_2c + ray_origin->z;
      if (fVar1 < (this_ptr->min).z) {
        return -1.0;
      }
      if (fVar1 <= (this_ptr->max).z) {
        if (out_normal == (CVector3f *)0x0) {
          return local_2c;
        }
        out_normal->y = 0.0;
        out_normal->z = 0.0;
        out_normal->x = local_40;
        return local_2c;
      }
      return -1.0;
    }
    if (bVar3 < 2) {
      fVar1 = ray_direction->x * local_2c + ray_origin->x;
      if (fVar1 < (this_ptr->min).x) {
        return -1.0;
      }
      if ((this_ptr->max).x < fVar1) {
        return -1.0;
      }
      fVar1 = ray_direction->z * local_2c + ray_origin->z;
      if (fVar1 < (this_ptr->min).z) {
        return -1.0;
      }
      if ((this_ptr->max).z < fVar1) {
        return -1.0;
      }
      if (out_normal == (CVector3f *)0x0) {
        return local_2c;
      }
      out_normal->z = 0.0;
      out_normal->x = 0.0;
      out_normal->y = local_44;
      return local_2c;
    }
    if (bVar3 != true) {
      return local_2c;
    }
  }
  else {
    local_2c = local_38;
  }
  fVar1 = ray_direction->x * local_2c + ray_origin->x;
  if (((((this_ptr->min).x <= fVar1) && (fVar1 <= (this_ptr->max).x)) &&
      (fVar1 = ray_direction->y * local_2c + ray_origin->y, (this_ptr->min).y <= fVar1)) &&
     (fVar1 <= (this_ptr->max).y)) {
    if (out_normal != (CVector3f *)0x0) {
      out_normal->y = 0.0;
      out_normal->x = 0.0;
      out_normal->z = local_20;
    }
    return local_2c;
  }
  return -1.0;
}


// Assembly code:
// 00420940: PUSH EBX
//   Label: core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
// 00420941: PUSH ESI
// 00420942: PUSH EDI
// 00420943: PUSH EBP
// 00420944: MOV EBP,ESP
// 00420946: SUB ESP,0x4c
// 00420949: AND ESP,0xfffffff8
// 0042094c: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042094f: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00420952: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00420955: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00420958: FLD float ptr [ESI]
// 0042095a: MOV EDI,0x1
// 0042095f: FCOMP float ptr [ECX]
// 00420961: FNSTSW AX
// 00420963: SAHF
// 00420964: JC 0x00420ac1
//   XREF to: 00420ac1 (CONDITIONAL_JUMP)
// 0042096a: FLD float ptr [ESI]
// 0042096c: FCOMP float ptr [ECX + 0xc]
// 0042096f: FNSTSW AX
// 00420971: SAHF
// 00420972: JBE 0x00420af3
//   XREF to: 00420af3 (CONDITIONAL_JUMP)
// 00420978: FLD float ptr [ECX + 0xc]
// 0042097b: FSUB float ptr [ESI]
// 0042097d: FST float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (WRITE)
// 00420981: FCOMP float ptr [EBX]
// 00420983: FNSTSW AX
// 00420985: SAHF
// 00420986: JC 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 0042098c: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (READ)
// 00420990: FDIV float ptr [EBX]
// 00420992: MOV EAX,0x3f800000
// 00420997: XOR EDI,EDI
//   Label: LAB_00420997
// 00420999: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0042099d: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (WRITE)
// 004209a1: FLD float ptr [ESI + 0x4]
//   Label: LAB_004209a1
// 004209a4: FCOMP float ptr [ECX + 0x4]
// 004209a7: FNSTSW AX
// 004209a9: SAHF
// 004209aa: JNC 0x00420b00
//   XREF to: 00420b00 (CONDITIONAL_JUMP)
// 004209b0: FLD float ptr [ECX + 0x4]
// 004209b3: FSUB float ptr [ESI + 0x4]
// 004209b6: FST float ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (WRITE)
// 004209ba: FCOMP float ptr [EBX + 0x4]
// 004209bd: FNSTSW AX
// 004209bf: SAHF
// 004209c0: JA 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 004209c6: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 004209ca: FDIV float ptr [EBX + 0x4]
// 004209cd: MOV EAX,0xbf800000
// 004209d2: XOR EDI,EDI
//   Label: LAB_004209d2
// 004209d4: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004209d8: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (WRITE)
// 004209dc: FLD float ptr [ESI + 0x8]
//   Label: LAB_004209dc
// 004209df: FCOMP float ptr [ECX + 0x8]
// 004209e2: FNSTSW AX
// 004209e4: SAHF
// 004209e5: JNC 0x00420b3b
//   XREF to: 00420b3b (CONDITIONAL_JUMP)
// 004209eb: FLD float ptr [ECX + 0x8]
// 004209ee: FSUB float ptr [ESI + 0x8]
// 004209f1: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 004209f5: FCOMP float ptr [EBX + 0x8]
// 004209f8: FNSTSW AX
// 004209fa: SAHF
// 004209fb: JA 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420a01: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 00420a05: FDIV float ptr [EBX + 0x8]
// 00420a08: MOV dword ptr [ESP + 0x40],0xbf800000
//   XREF to: Stack[-0x20] (WRITE)
// 00420a10: FSTP float ptr [ESP + 0x28]
//   Label: LAB_00420a10
//   XREF to: Stack[-0x38] (WRITE)
// 00420a14: FLD float ptr [ESP + 0x30]
//   Label: LAB_00420a14
//   XREF to: Stack[-0x30] (READ)
// 00420a18: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (READ)
// 00420a1c: XOR EDI,EDI
// 00420a1e: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00420a22: FCOMP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (READ)
// 00420a26: FNSTSW AX
// 00420a28: SAHF
// 00420a29: JBE 0x00420a38
//   XREF to: 00420a38 (CONDITIONAL_JUMP)
// 00420a2b: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 00420a2f: MOV EDI,0x1
// 00420a34: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00420a38: FLD float ptr [ESP + 0x28]
//   Label: LAB_00420a38
//   XREF to: Stack[-0x38] (READ)
// 00420a3c: FCOMP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00420a40: FNSTSW AX
// 00420a42: SAHF
// 00420a43: JBE 0x00420d28
//   XREF to: 00420d28 (CONDITIONAL_JUMP)
// 00420a49: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 00420a4d: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00420a51: FLD float ptr [EBX]
//   Label: LAB_00420a51
// 00420a53: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00420a57: FADD float ptr [ESI]
// 00420a59: FST float ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (WRITE)
// 00420a5d: FCOMP float ptr [ECX]
// 00420a5f: FNSTSW AX
// 00420a61: SAHF
// 00420a62: JC 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420a68: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 00420a6c: FCOMP float ptr [ECX + 0xc]
// 00420a6f: FNSTSW AX
// 00420a71: SAHF
// 00420a72: JA 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420a74: FLD float ptr [EBX + 0x4]
// 00420a77: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00420a7b: FADD float ptr [ESI + 0x4]
// 00420a7e: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (WRITE)
// 00420a82: FCOMP float ptr [ECX + 0x4]
// 00420a85: FNSTSW AX
// 00420a87: SAHF
// 00420a88: JC 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420a8a: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (READ)
// 00420a8e: FCOMP float ptr [ECX + 0x10]
// 00420a91: FNSTSW AX
// 00420a93: SAHF
// 00420a94: JA 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420a96: TEST EDX,EDX
// 00420a98: JZ 0x00420aae
//   XREF to: 00420aae (CONDITIONAL_JUMP)
// 00420a9a: MOV dword ptr [EDX + 0x4],0x0
// 00420aa1: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 00420aa5: MOV dword ptr [EDX],0x0
// 00420aab: MOV dword ptr [EDX + 0x8],EAX
// 00420aae: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_00420aae
//   XREF to: Stack[-0x2c] (READ)
// 00420ab2: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00420ab6: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00420aba: MOV ESP,EBP
// 00420abc: POP EBP
// 00420abd: POP EDI
// 00420abe: POP ESI
// 00420abf: POP EBX
// 00420ac0: RET
// 00420ac1: FLD float ptr [ECX]
//   Label: LAB_00420ac1
// 00420ac3: FSUB float ptr [ESI]
// 00420ac5: FST float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (WRITE)
// 00420ac9: FCOMP float ptr [EBX]
// 00420acb: FNSTSW AX
// 00420acd: SAHF
// 00420ace: JA 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420ad0: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (READ)
// 00420ad4: FDIV float ptr [EBX]
// 00420ad6: MOV EAX,0xbf800000
// 00420adb: JMP 0x00420997
//   XREF to: 00420997 (UNCONDITIONAL_JUMP)
// 00420ae0: MOV dword ptr [ESP + 0x38],0xbf800000
//   Label: LAB_00420ae0
//   XREF to: Stack[-0x28] (WRITE)
// 00420ae8: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00420aec: MOV ESP,EBP
// 00420aee: POP EBP
// 00420aef: POP EDI
// 00420af0: POP ESI
// 00420af1: POP EBX
// 00420af2: RET
// 00420af3: MOV dword ptr [ESP + 0x2c],0xbf800000
//   Label: LAB_00420af3
//   XREF to: Stack[-0x34] (WRITE)
// 00420afb: JMP 0x004209a1
//   XREF to: 004209a1 (UNCONDITIONAL_JUMP)
// 00420b00: FLD float ptr [ESI + 0x4]
//   Label: LAB_00420b00
// 00420b03: FCOMP float ptr [ECX + 0x10]
// 00420b06: FNSTSW AX
// 00420b08: SAHF
// 00420b09: JBE 0x00420b2e
//   XREF to: 00420b2e (CONDITIONAL_JUMP)
// 00420b0b: FLD float ptr [ECX + 0x10]
// 00420b0e: FSUB float ptr [ESI + 0x4]
// 00420b11: FST float ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (WRITE)
// 00420b15: FCOMP float ptr [EBX + 0x4]
// 00420b18: FNSTSW AX
// 00420b1a: SAHF
// 00420b1b: JC 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420b1d: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 00420b21: FDIV float ptr [EBX + 0x4]
// 00420b24: MOV EAX,0x3f800000
// 00420b29: JMP 0x004209d2
//   XREF to: 004209d2 (UNCONDITIONAL_JUMP)
// 00420b2e: MOV dword ptr [ESP + 0x30],0xbf800000
//   Label: LAB_00420b2e
//   XREF to: Stack[-0x30] (WRITE)
// 00420b36: JMP 0x004209dc
//   XREF to: 004209dc (UNCONDITIONAL_JUMP)
// 00420b3b: FLD float ptr [ESI + 0x8]
//   Label: LAB_00420b3b
// 00420b3e: FCOMP float ptr [ECX + 0x14]
// 00420b41: FNSTSW AX
// 00420b43: SAHF
// 00420b44: JBE 0x00420b6c
//   XREF to: 00420b6c (CONDITIONAL_JUMP)
// 00420b46: FLD float ptr [ECX + 0x14]
// 00420b49: FSUB float ptr [ESI + 0x8]
// 00420b4c: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 00420b50: FCOMP float ptr [EBX + 0x8]
// 00420b53: FNSTSW AX
// 00420b55: SAHF
// 00420b56: JC 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420b58: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 00420b5c: FDIV float ptr [EBX + 0x8]
// 00420b5f: MOV dword ptr [ESP + 0x40],0x3f800000
//   XREF to: Stack[-0x20] (WRITE)
// 00420b67: JMP 0x00420a10
//   XREF to: 00420a10 (UNCONDITIONAL_JUMP)
// 00420b6c: MOV dword ptr [ESP + 0x28],0xbf800000
//   Label: LAB_00420b6c
//   XREF to: Stack[-0x38] (WRITE)
// 00420b74: TEST EDI,EDI
// 00420b76: JZ 0x00420a14
//   XREF to: 00420a14 (CONDITIONAL_JUMP)
// 00420b7c: TEST EDX,EDX
// 00420b7e: JZ 0x00420be3
//   XREF to: 00420be3 (CONDITIONAL_JUMP)
// 00420b80: FLD float ptr [EBX]
// 00420b82: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 00420b86: FCHS
// 00420b88: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x5c] (WRITE)
// 00420b8c: FLD float ptr [EBX + 0x4]
// 00420b8f: FCHS
// 00420b91: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 00420b95: FLD float ptr [EBX + 0x8]
// 00420b98: FCHS
// 00420b9a: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x54] (WRITE)
// 00420b9e: CMP EDX,EAX
// 00420ba0: JNZ 0x00420bf4
//   XREF to: 00420bf4 (CONDITIONAL_JUMP)
// 00420ba2: FLD float ptr [EDX + 0x4]
//   Label: LAB_00420ba2
// 00420ba5: FMUL ST0
// 00420ba7: FLD float ptr [EDX]
// 00420ba9: FMUL ST0
// 00420bab: FADDP
// 00420bad: FLD float ptr [EDX + 0x8]
// 00420bb0: FMUL ST0
// 00420bb2: FADDP
// 00420bb4: FSQRT
// 00420bb6: FST float ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 00420bb9: FLDZ
// 00420bbb: FCOMPP
// 00420bbd: FNSTSW AX
// 00420bbf: SAHF
// 00420bc0: JNC 0x00420c0a
//   XREF to: 00420c0a (CONDITIONAL_JUMP)
// 00420bc2: FLD1
// 00420bc4: FLD float ptr [EDX]
// 00420bc6: FXCH
// 00420bc8: FDIV float ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 00420bcb: FXCH
// 00420bcd: FMUL ST1
// 00420bcf: FLD float ptr [EDX + 0x4]
// 00420bd2: FMUL ST2
// 00420bd4: FLD float ptr [EDX + 0x8]
// 00420bd7: FMULP ST3
// 00420bd9: FXCH
// 00420bdb: FSTP float ptr [EDX]
// 00420bdd: FSTP float ptr [EDX + 0x4]
// 00420be0: FSTP float ptr [EDX + 0x8]
// 00420be3: XOR EDX,EDX
//   Label: LAB_00420be3
// 00420be5: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00420be9: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00420bed: MOV ESP,EBP
// 00420bef: POP EBP
// 00420bf0: POP EDI
// 00420bf1: POP ESI
// 00420bf2: POP EBX
// 00420bf3: RET
// 00420bf4: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00420bf4
//   XREF to: Stack[-0x5c] (DATA)
// 00420bf8: MOV dword ptr [EDX],EAX
// 00420bfa: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 00420bfe: MOV dword ptr [EDX + 0x4],EAX
// 00420c01: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x54] (READ)
// 00420c05: MOV dword ptr [EDX + 0x8],EAX
// 00420c08: JMP 0x00420ba2
//   XREF to: 00420ba2 (UNCONDITIONAL_JUMP)
// 00420c0a: MOV dword ptr [EDX + 0x8],0x0
//   Label: LAB_00420c0a
// 00420c11: MOV EAX,dword ptr [EDX + 0x8]
// 00420c14: MOV dword ptr [EDX + 0x4],EAX
// 00420c17: MOV EAX,dword ptr [EDX + 0x4]
// 00420c1a: MOV dword ptr [EDX],EAX
// 00420c1c: XOR EDX,EDX
// 00420c1e: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00420c22: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00420c26: MOV ESP,EBP
// 00420c28: POP EBP
// 00420c29: POP EDI
// 00420c2a: POP ESI
// 00420c2b: POP EBX
// 00420c2c: RET
// 00420c2d: FLD float ptr [EBX + 0x4]
//   Label: LAB_00420c2d
// 00420c30: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00420c34: FADD float ptr [ESI + 0x4]
// 00420c37: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (WRITE)
// 00420c3b: FCOMP float ptr [ECX + 0x4]
// 00420c3e: FNSTSW AX
// 00420c40: SAHF
// 00420c41: JC 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420c47: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00420c4b: FCOMP float ptr [ECX + 0x10]
// 00420c4e: FNSTSW AX
// 00420c50: SAHF
// 00420c51: JA 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420c57: FLD float ptr [EBX + 0x8]
// 00420c5a: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00420c5e: FADD float ptr [ESI + 0x8]
// 00420c61: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (WRITE)
// 00420c65: FCOMP float ptr [ECX + 0x8]
// 00420c68: FNSTSW AX
// 00420c6a: SAHF
// 00420c6b: JC 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420c71: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 00420c75: FCOMP float ptr [ECX + 0x14]
// 00420c78: FNSTSW AX
// 00420c7a: SAHF
// 00420c7b: JA 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420c81: TEST EDX,EDX
// 00420c83: JZ 0x00420aae
//   XREF to: 00420aae (CONDITIONAL_JUMP)
// 00420c89: MOV dword ptr [EDX + 0x4],EDI
// 00420c8c: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 00420c90: MOV dword ptr [EDX + 0x8],EDI
// 00420c93: MOV dword ptr [EDX],EAX
// 00420c95: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00420c99: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00420c9d: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00420ca1: MOV ESP,EBP
// 00420ca3: POP EBP
// 00420ca4: POP EDI
// 00420ca5: POP ESI
// 00420ca6: POP EBX
// 00420ca7: RET
// 00420ca8: FLD float ptr [EBX]
//   Label: LAB_00420ca8
// 00420caa: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00420cae: FADD float ptr [ESI]
// 00420cb0: FST float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (WRITE)
// 00420cb4: FCOMP float ptr [ECX]
// 00420cb6: FNSTSW AX
// 00420cb8: SAHF
// 00420cb9: JC 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420cbf: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (READ)
// 00420cc3: FCOMP float ptr [ECX + 0xc]
// 00420cc6: FNSTSW AX
// 00420cc8: SAHF
// 00420cc9: JA 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420ccf: FLD float ptr [EBX + 0x8]
// 00420cd2: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00420cd6: FADD float ptr [ESI + 0x8]
// 00420cd9: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (WRITE)
// 00420cdd: FCOMP float ptr [ECX + 0x8]
// 00420ce0: FNSTSW AX
// 00420ce2: SAHF
// 00420ce3: JC 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420ce9: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 00420ced: FCOMP float ptr [ECX + 0x14]
// 00420cf0: FNSTSW AX
// 00420cf2: SAHF
// 00420cf3: JA 0x00420ae0
//   XREF to: 00420ae0 (CONDITIONAL_JUMP)
// 00420cf9: TEST EDX,EDX
// 00420cfb: JZ 0x00420aae
//   XREF to: 00420aae (CONDITIONAL_JUMP)
// 00420d01: MOV dword ptr [EDX + 0x8],0x0
// 00420d08: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (READ)
// 00420d0c: MOV dword ptr [EDX],0x0
// 00420d12: MOV dword ptr [EDX + 0x4],EAX
// 00420d15: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00420d19: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00420d1d: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00420d21: MOV ESP,EBP
// 00420d23: POP EBP
// 00420d24: POP EDI
// 00420d25: POP ESI
// 00420d26: POP EBX
// 00420d27: RET
// 00420d28: CMP EDI,0x1
//   Label: LAB_00420d28
// 00420d2b: JNC 0x00420d48
//   XREF to: 00420d48 (CONDITIONAL_JUMP)
// 00420d2d: TEST EDI,EDI
// 00420d2f: JZ 0x00420c2d
//   XREF to: 00420c2d (CONDITIONAL_JUMP)
// 00420d35: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00420d39: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00420d3d: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00420d41: MOV ESP,EBP
// 00420d43: POP EBP
// 00420d44: POP EDI
// 00420d45: POP ESI
// 00420d46: POP EBX
// 00420d47: RET
// 00420d48: JBE 0x00420ca8
//   Label: LAB_00420d48
//   XREF to: 00420ca8 (CONDITIONAL_JUMP)
// 00420d4e: CMP EDI,0x2
// 00420d51: JZ 0x00420a51
//   XREF to: 00420a51 (CONDITIONAL_JUMP)
// 00420d57: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00420d5b: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00420d5f: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00420d63: MOV ESP,EBP
// 00420d65: POP EBP
// 00420d66: POP EDI
// 00420d67: POP ESI
// 00420d68: POP EBX
// 00420d69: RET

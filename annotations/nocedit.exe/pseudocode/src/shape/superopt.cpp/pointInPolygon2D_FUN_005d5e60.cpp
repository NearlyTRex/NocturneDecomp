// Name: shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60
// Address: 005d5e60
// Address Range: [[005d5e60, 005d6019]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60(CVector2d * vertices, uint vertex_count, CVector2d * test_point)
// Cross-references:
//   shape_superopt.cpp_segmentIntersectsPolygon2D_FUN_005d5de0 (005d5de0) at 005d5df7 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
shape_superopt_cpp_pointInPolygon2D_FUN_005d5e60
          (CVector2d *vertices,uint vertex_count,CVector2d *test_point)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  CVector2d *pCVar6;
  byte bVar7;
  CVector2d *pCVar8;
  double local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  int local_30;
  uint local_18;
  
  bVar7 = 0;
  local_18 = 0;
  pCVar8 = vertices + (vertex_count - 1);
  if (vertex_count != 0) {
    do {
      pCVar6 = vertices;
      uVar1 = *(undefined4 *)((int)&pCVar8->x + 4);
      uVar2 = *(undefined4 *)&pCVar8->y;
      uVar3 = *(undefined4 *)((int)&pCVar8->y + 4);
      uStack_44 = *(undefined4 *)((int)&pCVar6->x + 4);
      local_40 = *(undefined4 *)&pCVar6->y;
      uStack_3c = *(undefined4 *)((int)&pCVar6->y + 4);
      local_58 = *(undefined4 *)&pCVar8->x;
      uStack_54 = uVar1;
      local_50 = uVar2;
      uStack_4c = uVar3;
      local_48 = *(undefined4 *)&pCVar6->x;
      if (pCVar6->y < pCVar8->y) {
        local_58 = *(undefined4 *)&pCVar6->x;
        uStack_54 = uStack_44;
        local_50 = local_40;
        uStack_4c = uStack_3c;
        local_48 = *(undefined4 *)&pCVar8->x;
        uStack_44 = uVar1;
        local_40 = uVar2;
        uStack_3c = uVar3;
      }
      if ((((double)CONCAT44(uStack_4c,local_50) <= test_point->y) &&
          (test_point->y <= (double)CONCAT44(uStack_3c,local_40))) &&
         ((test_point->y != (double)CONCAT44(uStack_4c,local_50) ||
          (test_point->y != (double)CONCAT44(uStack_3c,local_40))))) {
        if ((test_point->x < (double)CONCAT44(uStack_54,local_58)) ||
           (test_point->x < (double)CONCAT44(uStack_44,local_48))) {
          dVar4 = (double)CONCAT44(uStack_44,local_48) - (double)CONCAT44(uStack_54,local_58);
          dVar5 = (double)CONCAT44(uStack_3c,local_40) - (double)CONCAT44(uStack_4c,local_50);
          local_38 = SUB84(dVar4,0);
          local_30 = SUB84(dVar5,0);
          local_60 = 0.0;
          if (((((ulonglong)dVar4 & 0x7fffffff00000000) != 0) || (local_38 != 0)) &&
             ((((ulonglong)dVar5 & 0x7fffffff00000000) != 0 || (local_30 != 0)))) {
            local_60 = dVar4 / dVar5;
          }
          if (test_point->x <=
              (test_point->y - (double)CONCAT44(uStack_4c,local_50)) * local_60 +
              (double)CONCAT44(uStack_54,local_58)) goto LAB_005d5ef4;
        }
        bVar7 = bVar7 ^ 1;
      }
LAB_005d5ef4:
      local_18 = local_18 + 1;
      vertices = pCVar6 + 1;
      pCVar8 = pCVar6;
    } while (local_18 < vertex_count);
  }
  return (uint)bVar7;
}


// Assembly code:
// 005d5e60: PUSH EBX
//   Label: shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60
// 005d5e61: PUSH ESI
// 005d5e62: PUSH EDI
// 005d5e63: PUSH EBP
// 005d5e64: MOV EBP,ESP
// 005d5e66: SUB ESP,0x5c
// 005d5e69: AND ESP,0xfffffff8
// 005d5e6c: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d5e6f: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d5e72: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d5e75: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d5e78: SHL ESI,0x4
// 005d5e7b: XOR EBX,EBX
// 005d5e7d: SUB ESI,0x10
// 005d5e80: MOV dword ptr [ESP + 0x58],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005d5e84: ADD ESI,ECX
// 005d5e86: TEST EAX,EAX
// 005d5e88: JBE 0x005d5f0b
//   XREF to: 005d5f0b (CONDITIONAL_JUMP)
// 005d5e8e: LEA EDI,[ESP + 0x18]
//   Label: LAB_005d5e8e
//   XREF to: Stack[-0x58] (DATA)
// 005d5e92: MOVSD ES:EDI,ESI
// 005d5e93: MOVSD ES:EDI,ESI
// 005d5e94: MOVSD ES:EDI,ESI
// 005d5e95: MOVSD ES:EDI,ESI
// 005d5e96: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x48] (DATA)
// 005d5e9a: MOV ESI,ECX
// 005d5e9c: MOVSD ES:EDI,ESI
// 005d5e9d: MOVSD ES:EDI,ESI
// 005d5e9e: MOVSD ES:EDI,ESI
// 005d5e9f: MOVSD ES:EDI,ESI
// 005d5ea0: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x50] (READ)
// 005d5ea4: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x40] (READ)
// 005d5ea8: FNSTSW AX
// 005d5eaa: SAHF
// 005d5eab: JA 0x005d5f1d
//   XREF to: 005d5f1d (CONDITIONAL_JUMP)
// 005d5ead: FLD double ptr [ESP + 0x20]
//   Label: LAB_005d5ead
//   XREF to: Stack[-0x50] (READ)
// 005d5eb1: FCOMP double ptr [EDX + 0x8]
// 005d5eb4: FNSTSW AX
// 005d5eb6: SAHF
// 005d5eb7: JA 0x005d5ef4
//   XREF to: 005d5ef4 (CONDITIONAL_JUMP)
// 005d5eb9: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x40] (READ)
// 005d5ebd: FCOMP double ptr [EDX + 0x8]
// 005d5ec0: FNSTSW AX
// 005d5ec2: SAHF
// 005d5ec3: JC 0x005d5ef4
//   XREF to: 005d5ef4 (CONDITIONAL_JUMP)
// 005d5ec5: FLD double ptr [EDX + 0x8]
// 005d5ec8: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x50] (READ)
// 005d5ecc: FNSTSW AX
// 005d5ece: SAHF
// 005d5ecf: JZ 0x005d5f80
//   XREF to: 005d5f80 (CONDITIONAL_JUMP)
// 005d5ed5: FLD double ptr [ESP + 0x18]
//   Label: LAB_005d5ed5
//   XREF to: Stack[-0x58] (READ)
// 005d5ed9: FCOMP double ptr [EDX]
// 005d5edb: FNSTSW AX
// 005d5edd: SAHF
// 005d5ede: JA 0x005d5f95
//   XREF to: 005d5f95 (CONDITIONAL_JUMP)
// 005d5ee4: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x48] (READ)
// 005d5ee8: FCOMP double ptr [EDX]
// 005d5eea: FNSTSW AX
// 005d5eec: SAHF
// 005d5eed: JA 0x005d5f95
//   XREF to: 005d5f95 (CONDITIONAL_JUMP)
// 005d5ef3: INC EBX
//   Label: LAB_005d5ef3
// 005d5ef4: MOV EDI,dword ptr [ESP + 0x58]
//   Label: LAB_005d5ef4
//   XREF to: Stack[-0x18] (READ)
// 005d5ef8: INC EDI
// 005d5ef9: MOV ESI,ECX
// 005d5efb: MOV dword ptr [ESP + 0x58],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005d5eff: MOV EAX,EDI
// 005d5f01: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d5f04: ADD ECX,0x10
// 005d5f07: CMP EAX,EDI
// 005d5f09: JC 0x005d5e8e
//   XREF to: 005d5e8e (CONDITIONAL_JUMP)
// 005d5f0b: TEST BL,0x1
//   Label: LAB_005d5f0b
// 005d5f0e: SETNZ AL
// 005d5f11: AND EAX,0xff
// 005d5f16: MOV ESP,EBP
// 005d5f18: POP EBP
// 005d5f19: POP EDI
// 005d5f1a: POP ESI
// 005d5f1b: POP EBX
// 005d5f1c: RET
// 005d5f1d: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005d5f1d
//   XREF to: Stack[-0x58] (READ)
// 005d5f21: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x70] (DATA)
// 005d5f24: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x54] (READ)
// 005d5f28: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005d5f2c: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x50] (READ)
// 005d5f30: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005d5f34: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x4c] (READ)
// 005d5f38: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005d5f3c: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x48] (READ)
// 005d5f40: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005d5f44: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x44] (READ)
// 005d5f48: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005d5f4c: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x40] (READ)
// 005d5f50: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005d5f54: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x3c] (READ)
// 005d5f58: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005d5f5c: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 005d5f5f: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005d5f63: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x6c] (READ)
// 005d5f67: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005d5f6b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 005d5f6f: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005d5f73: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x64] (READ)
// 005d5f77: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005d5f7b: JMP 0x005d5ead
//   XREF to: 005d5ead (UNCONDITIONAL_JUMP)
// 005d5f80: FLD double ptr [EDX + 0x8]
//   Label: LAB_005d5f80
// 005d5f83: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0x40] (READ)
// 005d5f87: FNSTSW AX
// 005d5f89: SAHF
// 005d5f8a: JNZ 0x005d5ed5
//   XREF to: 005d5ed5 (CONDITIONAL_JUMP)
// 005d5f90: JMP 0x005d5ef4
//   XREF to: 005d5ef4 (UNCONDITIONAL_JUMP)
// 005d5f95: FLD double ptr [ESP + 0x28]
//   Label: LAB_005d5f95
//   XREF to: Stack[-0x48] (READ)
// 005d5f99: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x40] (READ)
// 005d5f9d: LEA EDI,[ESP + 0x48]
//   XREF to: Stack[-0x28] (DATA)
// 005d5fa1: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x38] (DATA)
// 005d5fa5: XOR EAX,EAX
// 005d5fa7: FXCH
// 005d5fa9: FSUB double ptr [ESP + 0x18]
//   XREF to: Stack[-0x58] (READ)
// 005d5fad: FXCH
// 005d5faf: FSUB double ptr [ESP + 0x20]
//   XREF to: Stack[-0x50] (READ)
// 005d5fb3: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005d5fb7: FSTP double ptr [ESP + 0x40]
//   XREF to: Stack[-0x30] (WRITE)
// 005d5fbb: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x38] (WRITE)
// 005d5fbf: MOVSD ES:EDI,ESI
// 005d5fc0: MOVSD ES:EDI,ESI
// 005d5fc1: MOVSD ES:EDI,ESI
// 005d5fc2: MOVSD ES:EDI,ESI
// 005d5fc3: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005d5fc7: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x24] (READ)
// 005d5fcb: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x28] (READ)
// 005d5fcf: TEST EDI,0x7fffffff
// 005d5fd5: JNZ 0x005d5fdb
//   XREF to: 005d5fdb (CONDITIONAL_JUMP)
// 005d5fd7: TEST EAX,EAX
// 005d5fd9: JZ 0x005d5ffb
//   XREF to: 005d5ffb (CONDITIONAL_JUMP)
// 005d5fdb: MOV ESI,dword ptr [ESP + 0x54]
//   Label: LAB_005d5fdb
//   XREF to: Stack[-0x1c] (READ)
// 005d5fdf: MOV EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x20] (READ)
// 005d5fe3: TEST ESI,0x7fffffff
// 005d5fe9: JNZ 0x005d5fef
//   XREF to: 005d5fef (CONDITIONAL_JUMP)
// 005d5feb: TEST EDI,EDI
// 005d5fed: JZ 0x005d5ffb
//   XREF to: 005d5ffb (CONDITIONAL_JUMP)
// 005d5fef: FLD double ptr [ESP + 0x48]
//   Label: LAB_005d5fef
//   XREF to: Stack[-0x28] (READ)
// 005d5ff3: FDIV double ptr [ESP + 0x50]
//   XREF to: Stack[-0x20] (READ)
// 005d5ff7: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x60] (WRITE)
// 005d5ffb: FLD double ptr [EDX + 0x8]
//   Label: LAB_005d5ffb
// 005d5ffe: FSUB double ptr [ESP + 0x20]
//   XREF to: Stack[-0x50] (READ)
// 005d6002: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x60] (READ)
// 005d6006: FADD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x58] (READ)
// 005d600a: FCOMP double ptr [EDX]
// 005d600c: FNSTSW AX
// 005d600e: SAHF
// 005d600f: JNC 0x005d5ef4
//   XREF to: 005d5ef4 (CONDITIONAL_JUMP)
// 005d6015: JMP 0x005d5ef3
//   XREF to: 005d5ef3 (UNCONDITIONAL_JUMP)

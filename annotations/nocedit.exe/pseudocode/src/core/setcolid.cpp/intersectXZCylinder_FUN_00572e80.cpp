// Name: core_setcolid.cpp_intersectXZCylinder_FUN_00572e80
// Address: 00572e80
// Address Range: [[00572e80, 005730ca]]
// Convention: __cdecl
// Signature: int core_setcolid.cpp_intersectXZCylinder_FUN_00572e80(SIntersectXZCylinder * cylinder, float ray_x, float ray_z, void * bounds_struct)
// Globals:
//   double g_CylinderMinPenetrationThreshold = -0.00100000000000000

#include "nocturne.h"

int __cdecl
core_setcolid_cpp_intersectXZCylinder_FUN_00572e80
          (SIntersectXZCylinder *cylinder,float ray_x,float ray_z,void *bounds_struct)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((*(float *)((int)bounds_struct + 0x14) < cylinder->bottom_y) &&
     (cylinder->top_y < *(float *)((int)bounds_struct + 0x18))) {
    fVar3 = ray_x - cylinder->center_x;
    fVar4 = ray_z - cylinder->center_z;
    fVar2 = *(float *)((int)bounds_struct + 0x1c) + cylinder->radius;
    fVar5 = fVar2 * fVar2;
    fVar1 = fVar4 * fVar4 + fVar3 * fVar3;
    if (fVar5 <= fVar1) {
      fVar1 = cylinder->axis_direction_x;
      fVar2 = cylinder->axis_direction_z;
      fVar3 = fVar4 * fVar2 + fVar3 * fVar1;
      if (0.0 < fVar3) {
        fVar7 = fVar1 * fVar3 + cylinder->center_x;
        fVar4 = ray_x - fVar7;
        fVar6 = fVar2 * fVar3 + cylinder->center_z;
        fVar3 = ray_z - fVar6;
        fVar3 = fVar3 * fVar3 + fVar4 * fVar4;
        if (fVar3 < fVar5) {
          fVar3 = SQRT(fVar5 - fVar3);
          fVar7 = fVar7 - fVar1 * fVar3;
          fVar6 = fVar6 - fVar2 * fVar3;
          if (ABS(cylinder->normal_x) <= ABS(cylinder->normal_z)) {
            fVar3 = (fVar6 - cylinder->center_z) / cylinder->normal_z;
          }
          else {
            fVar3 = (fVar7 - cylinder->center_x) / cylinder->normal_x;
          }
          if ((0.0 <= fVar3) && (fVar3 < cylinder->max_distance)) {
            if (1.0 < fVar3) {
              return 0;
            }
            cylinder->flags = 0;
            cylinder->max_distance = fVar3;
            cylinder->push_z = fVar7 - ray_x;
            cylinder->push_x = fVar6 - ray_z;
            return 1;
          }
        }
      }
    }
    else {
      fVar2 = SQRT(fVar1) - fVar2;
      if ((float)g_CylinderMinPenetrationThreshold < fVar2) {
        fVar2 = -0.001;
      }
      if (fVar2 < cylinder->max_distance) {
        cylinder->flags = 0;
        cylinder->max_distance = fVar2;
        cylinder->push_z = -fVar3;
        cylinder->push_x = -fVar4;
        return 1;
      }
    }
  }
  return 0;
}


// Assembly code:
// 00572e80: PUSH EBX
//   Label: core_setcolid.cpp_intersectXZCylinder_FUN_00572e80
// 00572e81: PUSH EBP
// 00572e82: MOV EBP,ESP
// 00572e84: SUB ESP,0xc0
// 00572e8a: AND ESP,0xfffffff8
// 00572e8d: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00572e90: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 00572e93: FLD float ptr [EDX + 0x24]
// 00572e96: FCOMP float ptr [ECX + 0x14]
// 00572e99: FNSTSW AX
// 00572e9b: SAHF
// 00572e9c: JBE 0x00572f2c
//   XREF to: 00572f2c (CONDITIONAL_JUMP)
// 00572ea2: FLD float ptr [EDX + 0x28]
// 00572ea5: FCOMP float ptr [ECX + 0x18]
// 00572ea8: FNSTSW AX
// 00572eaa: SAHF
// 00572eab: JNC 0x00572f2c
//   XREF to: 00572f2c (CONDITIONAL_JUMP)
// 00572eb1: FLD float ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00572eb4: FSUB float ptr [EDX + 0x10]
// 00572eb7: FST double ptr [ESP + 0x78]
//   XREF to: Stack[-0x50] (WRITE)
// 00572ebb: FMUL double ptr [ESP + 0x78]
//   XREF to: Stack[-0x50] (READ)
// 00572ebf: FLD float ptr [ECX + 0x1c]
// 00572ec2: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00572ec5: FSUB float ptr [EDX + 0x14]
// 00572ec8: FXCH
// 00572eca: FADD float ptr [EDX + 0x20]
// 00572ecd: FXCH
// 00572ecf: FST double ptr [ESP + 0x30]
//   XREF to: Stack[-0x98] (WRITE)
// 00572ed3: FMUL double ptr [ESP + 0x30]
//   XREF to: Stack[-0x98] (READ)
// 00572ed7: FXCH
// 00572ed9: FST double ptr [ESP + 0x48]
//   XREF to: Stack[-0x80] (WRITE)
// 00572edd: FMUL double ptr [ESP + 0x48]
//   XREF to: Stack[-0x80] (READ)
// 00572ee1: FXCH
// 00572ee3: FADDP ST2,ST0
// 00572ee5: FSTP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x70] (WRITE)
// 00572ee9: FST double ptr [ESP + 0x20]
//   XREF to: Stack[-0xa8] (WRITE)
// 00572eed: FCOMP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x70] (READ)
// 00572ef1: FNSTSW AX
// 00572ef3: SAHF
// 00572ef4: JNC 0x00572f62
//   XREF to: 00572f62 (CONDITIONAL_JUMP)
// 00572ef6: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0xa8] (READ)
// 00572efa: FSQRT
// 00572efc: FSUB double ptr [ESP + 0x48]
//   XREF to: Stack[-0x80] (READ)
// 00572f00: FST double ptr [ESP + 0x70]
//   XREF to: Stack[-0x58] (WRITE)
// 00572f04: FCOMP double ptr [0x0064625e]
//   XREF to: 0064625e (READ)
// 00572f0a: FNSTSW AX
// 00572f0c: SAHF
// 00572f0d: JBE 0x00572f21
//   XREF to: 00572f21 (CONDITIONAL_JUMP)
// 00572f0f: MOV ECX,0xd2f1a9fc
// 00572f14: MOV EBX,0xbf50624d
// 00572f19: MOV dword ptr [ESP + 0x70],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 00572f1d: MOV dword ptr [ESP + 0x74],EBX
//   XREF to: Stack[-0x54] (WRITE)
// 00572f21: FLD float ptr [EDX]
//   Label: LAB_00572f21
// 00572f23: FCOMP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x58] (READ)
// 00572f27: FNSTSW AX
// 00572f29: SAHF
// 00572f2a: JA 0x00572f33
//   XREF to: 00572f33 (CONDITIONAL_JUMP)
// 00572f2c: XOR EAX,EAX
//   Label: LAB_00572f2c
// 00572f2e: MOV ESP,EBP
// 00572f30: POP EBP
// 00572f31: POP EBX
// 00572f32: RET
// 00572f33: FLD double ptr [ESP + 0x70]
//   Label: LAB_00572f33
//   XREF to: Stack[-0x58] (READ)
// 00572f37: FLD double ptr [ESP + 0x78]
//   XREF to: Stack[-0x50] (READ)
// 00572f3b: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x98] (READ)
// 00572f3f: MOV EAX,0x1
// 00572f44: FXCH
// 00572f46: FCHS
// 00572f48: MOV dword ptr [EDX + 0x8],0x0
// 00572f4f: FXCH
// 00572f51: FCHS
// 00572f53: FXCH ST2
// 00572f55: FSTP float ptr [EDX]
// 00572f57: FSTP float ptr [EDX + 0x4]
// 00572f5a: FSTP float ptr [EDX + 0xc]
// 00572f5d: MOV ESP,EBP
// 00572f5f: POP EBP
// 00572f60: POP EBX
// 00572f61: RET
// 00572f62: FLD double ptr [ESP + 0x78]
//   Label: LAB_00572f62
//   XREF to: Stack[-0x50] (READ)
// 00572f66: FLD float ptr [EDX + 0x34]
// 00572f69: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0x90] (WRITE)
// 00572f6d: FMUL double ptr [ESP + 0x38]
//   XREF to: Stack[-0x90] (READ)
// 00572f71: FLD float ptr [EDX + 0x38]
// 00572f74: FSTP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x60] (WRITE)
// 00572f78: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[-0x98] (READ)
// 00572f7c: FMUL double ptr [ESP + 0x68]
//   XREF to: Stack[-0x60] (READ)
// 00572f80: FADDP
// 00572f82: FLDZ
// 00572f84: FXCH
// 00572f86: FSTP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x68] (WRITE)
// 00572f8a: FCOMP double ptr [ESP + 0x60]
//   XREF to: Stack[-0x68] (READ)
// 00572f8e: FNSTSW AX
// 00572f90: SAHF
// 00572f91: JNC 0x00572f2c
//   XREF to: 00572f2c (CONDITIONAL_JUMP)
// 00572f93: FLD double ptr [ESP + 0x60]
//   XREF to: Stack[-0x68] (READ)
// 00572f97: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x90] (READ)
// 00572f9b: FMUL ST1
// 00572f9d: FLD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x60] (READ)
// 00572fa1: FMULP ST2
// 00572fa3: FLD float ptr [EDX + 0x10]
// 00572fa6: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xb8] (WRITE)
// 00572faa: FADD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xb8] (READ)
// 00572fae: FLD float ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00572fb1: FXCH
// 00572fb3: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0xb0] (WRITE)
// 00572fb7: FSUB double ptr [ESP + 0x18]
//   XREF to: Stack[-0xb0] (READ)
// 00572fbb: FMUL ST0
// 00572fbd: FLD float ptr [EDX + 0x14]
// 00572fc0: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xc0] (WRITE)
// 00572fc4: FXCH
// 00572fc6: FADD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xc0] (READ)
// 00572fca: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00572fcd: FXCH
// 00572fcf: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc8] (DATA)
// 00572fd2: FSUB double ptr [ESP]
//   XREF to: Stack[-0xc8] (DATA)
// 00572fd5: FMUL ST0
// 00572fd7: FADDP
// 00572fd9: FST double ptr [ESP + 0x28]
//   XREF to: Stack[-0xa0] (WRITE)
// 00572fdd: FCOMP double ptr [ESP + 0x58]
//   XREF to: Stack[-0x70] (READ)
// 00572fe1: FNSTSW AX
// 00572fe3: SAHF
// 00572fe4: JNC 0x00572f2c
//   XREF to: 00572f2c (CONDITIONAL_JUMP)
// 00572fea: FLD float ptr [EDX + 0x18]
// 00572fed: FST double ptr [ESP + 0x40]
//   XREF to: Stack[-0x88] (WRITE)
// 00572ff1: FABS
// 00572ff3: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0x70] (READ)
// 00572ff7: FSUB double ptr [ESP + 0x28]
//   XREF to: Stack[-0xa0] (READ)
// 00572ffb: FSQRT
// 00572ffd: FLD float ptr [EDX + 0x1c]
// 00573000: FST double ptr [ESP + 0x80]
//   XREF to: Stack[-0x48] (WRITE)
// 00573007: FABS
// 00573009: FLD double ptr [ESP + 0x38]
//   XREF to: Stack[-0x90] (READ)
// 0057300d: FMUL ST2
// 0057300f: FLD double ptr [ESP + 0x68]
//   XREF to: Stack[-0x60] (READ)
// 00573013: FMULP ST3
// 00573015: FLD double ptr [ESP]
//   XREF to: Stack[-0xc8] (DATA)
// 00573018: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xb0] (READ)
// 0057301c: FSUBRP ST2,ST0
// 0057301e: FSUBRP ST3,ST0
// 00573020: FSTP double ptr [ESP + 0x90]
//   XREF to: Stack[-0x38] (WRITE)
// 00573027: FXCH
// 00573029: FSTP double ptr [ESP + 0x50]
//   XREF to: Stack[-0x78] (WRITE)
// 0057302d: FCOMPP
// 0057302f: FNSTSW AX
// 00573031: SAHF
// 00573032: JNC 0x00573083
//   XREF to: 00573083 (CONDITIONAL_JUMP)
// 00573034: FLD double ptr [ESP + 0x90]
//   XREF to: Stack[-0x38] (READ)
// 0057303b: FSUB double ptr [ESP + 0x10]
//   XREF to: Stack[-0xb8] (READ)
// 0057303f: FDIV double ptr [ESP + 0x40]
//   XREF to: Stack[-0x88] (READ)
// 00573043: FSTP double ptr [ESP + 0x88]
//   Label: LAB_00573043
//   XREF to: Stack[-0x40] (WRITE)
// 0057304a: FLDZ
// 0057304c: FCOMP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x40] (READ)
// 00573053: FNSTSW AX
// 00573055: SAHF
// 00573056: JA 0x00572f2c
//   XREF to: 00572f2c (CONDITIONAL_JUMP)
// 0057305c: FLD float ptr [EDX]
// 0057305e: FCOMP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x40] (READ)
// 00573065: FNSTSW AX
// 00573067: SAHF
// 00573068: JBE 0x00572f2c
//   XREF to: 00572f2c (CONDITIONAL_JUMP)
// 0057306e: FLD1
// 00573070: FCOMP double ptr [ESP + 0x88]
//   XREF to: Stack[-0x40] (READ)
// 00573077: FNSTSW AX
// 00573079: SAHF
// 0057307a: JNC 0x00573094
//   XREF to: 00573094 (CONDITIONAL_JUMP)
// 0057307c: XOR EAX,EAX
// 0057307e: MOV ESP,EBP
// 00573080: POP EBP
// 00573081: POP EBX
// 00573082: RET
// 00573083: FLD double ptr [ESP + 0x50]
//   Label: LAB_00573083
//   XREF to: Stack[-0x78] (READ)
// 00573087: FSUB double ptr [ESP + 0x8]
//   XREF to: Stack[-0xc0] (READ)
// 0057308b: FDIV double ptr [ESP + 0x80]
//   XREF to: Stack[-0x48] (READ)
// 00573092: JMP 0x00573043
//   XREF to: 00573043 (UNCONDITIONAL_JUMP)
// 00573094: FLD double ptr [ESP + 0x88]
//   Label: LAB_00573094
//   XREF to: Stack[-0x40] (READ)
// 0057309b: FLD float ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0057309e: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005730a1: MOV dword ptr [EDX + 0x8],0x0
// 005730a8: MOV EAX,0x1
// 005730ad: FXCH ST2
// 005730af: FSTP float ptr [EDX]
// 005730b1: FSUBR double ptr [ESP + 0x90]
//   XREF to: Stack[-0x38] (READ)
// 005730b8: FXCH
// 005730ba: FSUBR double ptr [ESP + 0x50]
//   XREF to: Stack[-0x78] (READ)
// 005730be: FXCH
// 005730c0: FSTP float ptr [EDX + 0x4]
// 005730c3: FSTP float ptr [EDX + 0xc]
// 005730c6: MOV ESP,EBP
// 005730c8: POP EBP
// 005730c9: POP EBX
// 005730ca: RET

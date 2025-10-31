// Name: shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50
// Address: 0048fa50
// Address Range: [[0048fa50, 0048fcb5]]
// Convention: __cdecl
// Signature: void shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50(CDSEModel * this_ptr)
// Cross-references:
//   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 (0048fed0) at 0048ffb3 [UNCONDITIONAL_CALL]
// Globals:
//   double g_CDSECenteringFactor = 0.5

#include "nocturne.h"

void __cdecl shape_dsemodel_cpp_CDSEModel_centerModel_FUN_0048fa50(CDSEModel *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_14;
  
  dVar7 = 999999.9;
  dVar8 = 999999.9;
  local_4c = 0xcccccccd;
  uStack_48 = 0x412e847f;
  dVar4 = -999999.9;
  dVar5 = -999999.9;
  dVar6 = -999999.9;
  for (local_14 = 0; local_14 < this_ptr->vertex_count; local_14 = local_14 + 1) {
    dVar1 = (double)this_ptr->vertices[local_14].vertex.x;
    dVar2 = (double)this_ptr->vertices[local_14].vertex.y;
    dVar3 = (double)this_ptr->vertices[local_14].vertex.z;
    if (dVar4 < dVar1) {
      dVar4 = dVar1;
    }
    if (dVar1 < dVar7) {
      dVar7 = dVar1;
    }
    if (dVar5 < dVar2) {
      dVar5 = dVar2;
    }
    if (dVar2 < dVar8) {
      dVar8 = dVar2;
    }
    local_34 = SUB84(dVar3,0);
    uStack_30 = (undefined4)((ulonglong)dVar3 >> 0x20);
    if (dVar6 < dVar3) {
      dVar6 = dVar3;
    }
    if (dVar3 < (double)CONCAT44(uStack_48,local_4c)) {
      local_4c = local_34;
      uStack_48 = uStack_30;
    }
  }
  for (local_14 = 0; local_14 < this_ptr->vertex_count; local_14 = local_14 + 1) {
  }
  for (local_14 = 0; local_14 < this_ptr->vertex_count; local_14 = local_14 + 1) {
    this_ptr->vertices[local_14].vertex.x =
         (float)((double)this_ptr->vertices[local_14].vertex.x -
                ((dVar4 - dVar7) * g_CDSECenteringFactor + dVar7));
    this_ptr->vertices[local_14].vertex.y =
         (float)((double)this_ptr->vertices[local_14].vertex.y -
                ((dVar5 - dVar8) * g_CDSECenteringFactor + dVar8));
    this_ptr->vertices[local_14].vertex.z =
         (float)((double)this_ptr->vertices[local_14].vertex.z -
                ((dVar6 - (double)CONCAT44(uStack_48,local_4c)) * g_CDSECenteringFactor +
                (double)CONCAT44(uStack_48,local_4c)));
  }
  return;
}


// Assembly code:
// 0048fa50: PUSH EBX
//   Label: shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50
// 0048fa51: PUSH ESI
// 0048fa52: PUSH EDI
// 0048fa53: PUSH EBP
// 0048fa54: MOV EBP,ESP
// 0048fa56: SUB ESP,0x54
// 0048fa5c: MOV dword ptr [EBP + -0x4c],0xcccccccd
//   XREF to: Stack[-0x5c] (WRITE)
// 0048fa63: MOV dword ptr [EBP + -0x48],0x412e847f
//   XREF to: Stack[-0x58] (WRITE)
// 0048fa6a: MOV dword ptr [EBP + -0x44],0xcccccccd
//   XREF to: Stack[-0x54] (WRITE)
// 0048fa71: MOV dword ptr [EBP + -0x40],0x412e847f
//   XREF to: Stack[-0x50] (WRITE)
// 0048fa78: MOV dword ptr [EBP + -0x3c],0xcccccccd
//   XREF to: Stack[-0x4c] (WRITE)
// 0048fa7f: MOV dword ptr [EBP + -0x38],0x412e847f
//   XREF to: Stack[-0x48] (WRITE)
// 0048fa86: MOV dword ptr [EBP + -0xc],0xcccccccd
//   XREF to: Stack[-0x1c] (WRITE)
// 0048fa8d: MOV dword ptr [EBP + -0x8],0xc12e847f
//   XREF to: Stack[-0x18] (WRITE)
// 0048fa94: MOV dword ptr [EBP + -0x1c],0xcccccccd
//   XREF to: Stack[-0x2c] (WRITE)
// 0048fa9b: MOV dword ptr [EBP + -0x18],0xc12e847f
//   XREF to: Stack[-0x28] (WRITE)
// 0048faa2: MOV dword ptr [EBP + -0x14],0xcccccccd
//   XREF to: Stack[-0x24] (WRITE)
// 0048faa9: MOV dword ptr [EBP + -0x10],0xc12e847f
//   XREF to: Stack[-0x20] (WRITE)
// 0048fab0: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0048fab7: JMP 0x0048fabf
//   XREF to: 0048fabf (UNCONDITIONAL_JUMP)
// 0048fab9: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048fab9
//   XREF to: Stack[-0x14] (READ)
// 0048fabc: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0048fabf: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048fabf
//   XREF to: Stack[-0x14] (READ)
// 0048fac2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fac5: CMP EAX,dword ptr [EDX]
// 0048fac7: JGE 0x0048fb83
//   XREF to: 0048fb83 (CONDITIONAL_JUMP)
// 0048facd: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0048fad1: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fad4: FLD float ptr [EAX + 0x4]
// 0048fad7: FSTP double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 0048fada: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0048fade: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fae1: FLD float ptr [EAX + 0x8]
// 0048fae4: FSTP double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0048fae7: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0048faeb: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048faee: FLD float ptr [EAX + 0xc]
// 0048faf1: FSTP double ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 0048faf4: FLD double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0048faf7: FCOMP double ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0048fafa: FNSTSW AX
// 0048fafc: SAHF
// 0048fafd: JBE 0x0048fb0b
//   XREF to: 0048fb0b (CONDITIONAL_JUMP)
// 0048faff: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0048fb02: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0048fb05: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0048fb08: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0048fb0b: FLD double ptr [EBP + -0x34]
//   Label: LAB_0048fb0b
//   XREF to: Stack[-0x44] (READ)
// 0048fb0e: FCOMP double ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0048fb11: FNSTSW AX
// 0048fb13: SAHF
// 0048fb14: JNC 0x0048fb22
//   XREF to: 0048fb22 (CONDITIONAL_JUMP)
// 0048fb16: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0048fb19: MOV dword ptr [EBP + -0x4c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0048fb1c: MOV EAX,dword ptr [EBP + -0x30]
//   XREF to: Stack[-0x40] (READ)
// 0048fb1f: MOV dword ptr [EBP + -0x48],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0048fb22: FLD double ptr [EBP + -0x2c]
//   Label: LAB_0048fb22
//   XREF to: Stack[-0x3c] (READ)
// 0048fb25: FCOMP double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0048fb28: FNSTSW AX
// 0048fb2a: SAHF
// 0048fb2b: JBE 0x0048fb39
//   XREF to: 0048fb39 (CONDITIONAL_JUMP)
// 0048fb2d: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0048fb30: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0048fb33: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0048fb36: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0048fb39: FLD double ptr [EBP + -0x2c]
//   Label: LAB_0048fb39
//   XREF to: Stack[-0x3c] (READ)
// 0048fb3c: FCOMP double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0048fb3f: FNSTSW AX
// 0048fb41: SAHF
// 0048fb42: JNC 0x0048fb50
//   XREF to: 0048fb50 (CONDITIONAL_JUMP)
// 0048fb44: MOV EAX,dword ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0048fb47: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0048fb4a: MOV EAX,dword ptr [EBP + -0x28]
//   XREF to: Stack[-0x38] (READ)
// 0048fb4d: MOV dword ptr [EBP + -0x40],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0048fb50: FLD double ptr [EBP + -0x24]
//   Label: LAB_0048fb50
//   XREF to: Stack[-0x34] (READ)
// 0048fb53: FCOMP double ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0048fb56: FNSTSW AX
// 0048fb58: SAHF
// 0048fb59: JBE 0x0048fb67
//   XREF to: 0048fb67 (CONDITIONAL_JUMP)
// 0048fb5b: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0048fb5e: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0048fb61: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0048fb64: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0048fb67: FLD double ptr [EBP + -0x24]
//   Label: LAB_0048fb67
//   XREF to: Stack[-0x34] (READ)
// 0048fb6a: FCOMP double ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0048fb6d: FNSTSW AX
// 0048fb6f: SAHF
// 0048fb70: JNC 0x0048fb7e
//   XREF to: 0048fb7e (CONDITIONAL_JUMP)
// 0048fb72: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0048fb75: MOV dword ptr [EBP + -0x3c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0048fb78: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0048fb7b: MOV dword ptr [EBP + -0x38],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0048fb7e: JMP 0x0048fab9
//   Label: LAB_0048fb7e
//   XREF to: 0048fab9 (UNCONDITIONAL_JUMP)
// 0048fb83: MOV dword ptr [EBP + -0x34],0x0
//   Label: LAB_0048fb83
//   XREF to: Stack[-0x44] (WRITE)
// 0048fb8a: MOV dword ptr [EBP + -0x30],0x0
//   XREF to: Stack[-0x40] (WRITE)
// 0048fb91: MOV dword ptr [EBP + -0x2c],0x0
//   XREF to: Stack[-0x3c] (WRITE)
// 0048fb98: MOV dword ptr [EBP + -0x28],0x0
//   XREF to: Stack[-0x38] (WRITE)
// 0048fb9f: MOV dword ptr [EBP + -0x24],0x0
//   XREF to: Stack[-0x34] (WRITE)
// 0048fba6: MOV dword ptr [EBP + -0x20],0x0
//   XREF to: Stack[-0x30] (WRITE)
// 0048fbad: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0048fbb4: JMP 0x0048fbbc
//   XREF to: 0048fbbc (UNCONDITIONAL_JUMP)
// 0048fbb6: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048fbb6
//   XREF to: Stack[-0x14] (READ)
// 0048fbb9: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0048fbbc: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048fbbc
//   XREF to: Stack[-0x14] (READ)
// 0048fbbf: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fbc2: CMP EAX,dword ptr [EDX]
// 0048fbc4: JGE 0x0048fbf8
//   XREF to: 0048fbf8 (CONDITIONAL_JUMP)
// 0048fbc6: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0048fbca: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fbcd: FLD float ptr [EAX + 0x4]
// 0048fbd0: FADD double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0048fbd3: FSTP double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 0048fbd6: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0048fbda: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fbdd: FLD float ptr [EAX + 0x8]
// 0048fbe0: FADD double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0048fbe3: FSTP double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0048fbe6: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0048fbea: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fbed: FLD float ptr [EAX + 0xc]
// 0048fbf0: FADD double ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0048fbf3: FSTP double ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 0048fbf6: JMP 0x0048fbb6
//   XREF to: 0048fbb6 (UNCONDITIONAL_JUMP)
// 0048fbf8: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0048fbf8
//   XREF to: Stack[0x4] (READ)
// 0048fbfb: FILD dword ptr [EAX]
// 0048fbfd: FDIVR double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0048fc00: FSTP double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 0048fc03: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fc06: FILD dword ptr [EAX]
// 0048fc08: FDIVR double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0048fc0b: FSTP double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0048fc0e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fc11: FILD dword ptr [EAX]
// 0048fc13: FDIVR double ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0048fc16: FSTP double ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 0048fc19: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0048fc20: JMP 0x0048fc28
//   XREF to: 0048fc28 (UNCONDITIONAL_JUMP)
// 0048fc22: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048fc22
//   XREF to: Stack[-0x14] (READ)
// 0048fc25: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0048fc28: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0048fc28
//   XREF to: Stack[-0x14] (READ)
// 0048fc2b: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fc2e: CMP EAX,dword ptr [EDX]
// 0048fc30: JGE 0x0048fcaf
//   XREF to: 0048fcaf (CONDITIONAL_JUMP)
// 0048fc32: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0048fc36: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fc39: FLD double ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0048fc3c: FSUB double ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0048fc3f: FMUL double ptr [0x00622502]
//   XREF to: 00622502 (READ)
// 0048fc45: FADD double ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0048fc48: FLD float ptr [EAX + 0x4]
// 0048fc4b: FSTP double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 0048fc4e: FSUBR double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 0048fc51: FSTP double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 0048fc54: FLD double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 0048fc57: FSTP float ptr [EAX + 0x4]
// 0048fc5a: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0048fc5e: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fc61: FLD double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0048fc64: FSUB double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0048fc67: FMUL double ptr [0x00622502]
//   XREF to: 00622502 (READ)
// 0048fc6d: FADD double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0048fc70: FLD float ptr [EAX + 0x8]
// 0048fc73: FSTP double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 0048fc76: FSUBR double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 0048fc79: FSTP double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 0048fc7c: FLD double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 0048fc7f: FSTP float ptr [EAX + 0x8]
// 0048fc82: IMUL EAX,dword ptr [EBP + -0x4],0x14
//   XREF to: Stack[-0x14] (READ)
// 0048fc86: ADD EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048fc89: FLD double ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0048fc8c: FSUB double ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0048fc8f: FMUL double ptr [0x00622502]
//   XREF to: 00622502 (READ)
// 0048fc95: FADD double ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0048fc98: FLD float ptr [EAX + 0xc]
// 0048fc9b: FSTP double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 0048fc9e: FSUBR double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 0048fca1: FSTP double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (WRITE)
// 0048fca4: FLD double ptr [EBP + -0x54]
//   XREF to: Stack[-0x64] (READ)
// 0048fca7: FSTP float ptr [EAX + 0xc]
// 0048fcaa: JMP 0x0048fc22
//   XREF to: 0048fc22 (UNCONDITIONAL_JUMP)
// 0048fcaf: MOV ESP,EBP
//   Label: LAB_0048fcaf
// 0048fcb1: POP EBP
// 0048fcb2: POP EDI
// 0048fcb3: POP ESI
// 0048fcb4: POP EBX
// 0048fcb5: RET

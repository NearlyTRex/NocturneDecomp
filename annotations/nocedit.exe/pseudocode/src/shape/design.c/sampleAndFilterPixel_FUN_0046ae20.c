// Name: shape_design.c_sampleAndFilterPixel_FUN_0046ae20
// Address: 0046ae20
// Address Range: [[0046ae20, 0046b051]]
// Convention: __cdecl
// Signature: void shape_design.c_sampleAndFilterPixel_FUN_0046ae20(void * rgb_buffer, void * alpha_buffer, int col_coord, int row_coord, double coord_x1, double coord_y1, double coord_x2, double coord_y2, int atlas_width, int atlas_height, byte * red_out, byte * green_out, byte * blue_out, byte * alpha_out)
// Cross-references:
//   shape_design.c_loadTextureData_FUN_0046b060 (0046b060) at 0046b5f2 [UNCONDITIONAL_CALL]
// Globals:
//   double g_RoundingOffset = 0.5
// Function calls:
//   crt_math.c_ceil_FUN_006001b2
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0
//   shape_design.c_calculateSamplingWeight_FUN_0046adc0
//   shape_design.c_samplePixelAndAccumulate_FUN_0046ad00

#include "nocturne.h"

void __cdecl
shape_design_c_sampleAndFilterPixel_FUN_0046ae20
          (void *rgb_buffer,void *alpha_buffer,int col_coord,int row_coord,double coord_x1,
          double coord_y1,double coord_x2,double coord_y2,int atlas_width,int atlas_height,
          byte *red_out,byte *green_out,byte *blue_out,byte *alpha_out)

{
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EAX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar1;
  undefined4 extraout_EDX_03;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double *in_stack_ffffff98;
  undefined4 uStack_64;
  int local_60;
  undefined8 local_54;
  double local_4c;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_4c = 0.0;
  local_44 = 0.0;
  local_3c = 0.0;
  local_34 = 0.0;
  local_2c = 0.0;
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  local_54 = (double)CONCAT44(extraout_EDX,extraout_EAX);
  fVar2 = (float10)local_54;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  local_24 = (int)ROUND(fVar2);
  dVar5 = crt_math_c_ceil_FUN_006001b2(coord_y2);
  fVar2 = (float10)dVar5;
  local_54 = (double)CONCAT44(extraout_EDX_00,extraout_EAX_00);
  fVar3 = (float10)local_54;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,extraout_EAX_00));
  local_20 = (int)ROUND(fVar3);
  crt_math_c_floor_FUN_005feb90((double)fVar2);
  local_54 = (double)CONCAT44(extraout_EDX_01,extraout_EAX_01);
  fVar2 = (float10)local_54;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_01,extraout_EAX_01));
  local_1c = (int)ROUND(fVar2);
  crt_math_c_ceil_FUN_006001b2(coord_x2);
  local_54 = (double)CONCAT44(extraout_EDX_02,extraout_EAX_02);
  fVar2 = (float10)local_54;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_02,extraout_EAX_02));
  uVar1 = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_18 = (int)ROUND(fVar2);
  for (local_14 = local_24; local_14 < local_20; local_14 = local_14 + 1) {
    dVar5 = shape_design_c_calculateSamplingWeight_FUN_0046adc0
                      ((double)CONCAT44(SUB84(coord_y1,0),(int)((ulonglong)(double)local_14 >> 0x20)
                                       ),
                       (double)CONCAT44(SUB84(coord_y2,0),(int)((ulonglong)coord_y1 >> 0x20)),
                       (double)CONCAT44(in_stack_ffffff98,(int)((ulonglong)coord_y2 >> 0x20)));
    uVar1 = (undefined4)((ulonglong)dVar5 >> 0x20);
    for (local_60 = local_1c; local_60 < local_18; local_60 = local_60 + 1) {
      dVar4 = shape_design_c_calculateSamplingWeight_FUN_0046adc0
                        ((double)CONCAT44(SUB84(coord_x1,0),
                                          (int)((ulonglong)(double)local_60 >> 0x20)),
                         (double)CONCAT44(SUB84(coord_x2,0),(int)((ulonglong)coord_x1 >> 0x20)),
                         (double)CONCAT44(in_stack_ffffff98,(int)((ulonglong)coord_x2 >> 0x20)));
      uStack_64 = (undefined4)((ulonglong)(dVar4 * dVar5) >> 0x20);
      in_stack_ffffff98 = &local_34;
      shape_design_c_samplePixelAndAccumulate_FUN_0046ad00
                (rgb_buffer,alpha_buffer,col_coord,row_coord,local_60,local_14,
                 (double)CONCAT44(uStack_64,in_stack_ffffff98),&local_4c,&local_44,&local_3c,
                 in_stack_ffffff98);
      local_2c = local_2c + (double)CONCAT44(uStack_64,in_stack_ffffff98);
      uVar1 = extraout_EDX_03;
    }
  }
  if (0.0 < local_2c) {
    local_4c = local_4c / local_2c;
    local_44 = local_44 / local_2c;
    local_3c = local_3c / local_2c;
    local_34 = local_34 / local_2c;
  }
  fVar2 = (float10)local_4c + (float10)g_RoundingOffset;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar1,atlas_width));
  *SUB84(dVar5,0) = (int)ROUND(fVar2);
  fVar2 = (float10)local_44 + (float10)g_RoundingOffset;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),atlas_height));
  *SUB84(dVar5,0) = (int)ROUND(fVar2);
  fVar2 = (float10)local_3c + (float10)g_RoundingOffset;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),red_out));
  *SUB84(dVar5,0) = (int)ROUND(fVar2);
  fVar2 = (float10)local_34 + (float10)g_RoundingOffset;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),green_out))
  ;
  *SUB84(dVar5,0) = (int)ROUND(fVar2);
  return;
}


// Assembly code:
// 0046ae20: PUSH EBX
//   Label: shape_design.c_sampleAndFilterPixel_FUN_0046ae20
// 0046ae21: PUSH ESI
// 0046ae22: PUSH EDI
// 0046ae23: PUSH EBP
// 0046ae24: MOV EBP,ESP
// 0046ae26: SUB ESP,0x58
// 0046ae2c: MOV dword ptr [EBP + -0x3c],0x0
//   XREF to: Stack[-0x4c] (WRITE)
// 0046ae33: MOV dword ptr [EBP + -0x38],0x0
//   XREF to: Stack[-0x48] (WRITE)
// 0046ae3a: MOV dword ptr [EBP + -0x34],0x0
//   XREF to: Stack[-0x44] (WRITE)
// 0046ae41: MOV dword ptr [EBP + -0x30],0x0
//   XREF to: Stack[-0x40] (WRITE)
// 0046ae48: MOV dword ptr [EBP + -0x2c],0x0
//   XREF to: Stack[-0x3c] (WRITE)
// 0046ae4f: MOV dword ptr [EBP + -0x28],0x0
//   XREF to: Stack[-0x38] (WRITE)
// 0046ae56: MOV dword ptr [EBP + -0x24],0x0
//   XREF to: Stack[-0x34] (WRITE)
// 0046ae5d: MOV dword ptr [EBP + -0x20],0x0
//   XREF to: Stack[-0x30] (WRITE)
// 0046ae64: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 0046ae6b: MOV dword ptr [EBP + -0x18],0x0
//   XREF to: Stack[-0x28] (WRITE)
// 0046ae72: FLD double ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 0046ae75: SUB ESP,0x8
// 0046ae78: FSTP double ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 0046ae7b: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0046ae80: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0046ae83: MOV dword ptr [EBP + -0x40],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0046ae86: FLD double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0046ae89: ADD ESP,0x8
// 0046ae8c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046ae91: FISTP dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0046ae94: FLD double ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 0046ae97: SUB ESP,0x8
// 0046ae9a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 0046ae9d: CALL crt_math.c_ceil_FUN_006001b2
//   XREF to: 006001b2 (UNCONDITIONAL_CALL)
// 0046aea2: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0046aea5: MOV dword ptr [EBP + -0x40],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0046aea8: FLD double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0046aeab: ADD ESP,0x8
// 0046aeae: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046aeb3: FISTP dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0046aeb6: FLD double ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046aeb9: SUB ESP,0x8
// 0046aebc: FSTP double ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 0046aebf: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0046aec4: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0046aec7: MOV dword ptr [EBP + -0x40],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0046aeca: FLD double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0046aecd: ADD ESP,0x8
// 0046aed0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046aed5: FISTP dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0046aed8: FLD double ptr [EBP + 0x34]
//   XREF to: Stack[0x24] (READ)
// 0046aedb: SUB ESP,0x8
// 0046aede: FSTP double ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 0046aee1: CALL crt_math.c_ceil_FUN_006001b2
//   XREF to: 006001b2 (UNCONDITIONAL_CALL)
// 0046aee6: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0046aee9: MOV dword ptr [EBP + -0x40],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0046aeec: FLD double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0046aeef: ADD ESP,0x8
// 0046aef2: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046aef7: FISTP dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0046aefa: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0046aefd: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0046af00: JMP 0x0046af05
//   XREF to: 0046af05 (UNCONDITIONAL_JUMP)
// 0046af02: INC dword ptr [EBP + -0x4]
//   Label: LAB_0046af02
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046af05: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046af05
//   XREF to: Stack[-0x14] (READ)
// 0046af08: CMP EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046af0b: JGE 0x0046afd1
//   XREF to: 0046afd1 (CONDITIONAL_JUMP)
// 0046af11: FLD double ptr [EBP + 0x3c]
//   XREF to: Stack[0x2c] (READ)
// 0046af14: SUB ESP,0x8
// 0046af17: FSTP double ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 0046af1a: FLD double ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 0046af1d: SUB ESP,0x8
// 0046af20: FSTP double ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 0046af23: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046af26: SUB ESP,0x8
// 0046af29: FSTP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 0046af2c: CALL shape_design.c_calculateSamplingWeight_FUN_0046adc0
//   XREF to: 0046adc0 (UNCONDITIONAL_CALL)
// 0046af31: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0046af34: MOV dword ptr [EBP + -0x40],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0046af37: FLD double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0046af3a: ADD ESP,0x18
// 0046af3d: FSTP double ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (WRITE)
// 0046af40: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046af43: MOV dword ptr [EBP + -0x50],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0046af46: JMP 0x0046af4b
//   XREF to: 0046af4b (UNCONDITIONAL_JUMP)
// 0046af48: INC dword ptr [EBP + -0x50]
//   Label: LAB_0046af48
//   XREF to: Stack[-0x60] (READ_WRITE)
// 0046af4b: MOV EAX,dword ptr [EBP + -0x50]
//   Label: LAB_0046af4b
//   XREF to: Stack[-0x60] (READ)
// 0046af4e: CMP EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0046af51: JGE 0x0046afcc
//   XREF to: 0046afcc (CONDITIONAL_JUMP)
// 0046af53: FLD double ptr [EBP + 0x34]
//   XREF to: Stack[0x24] (READ)
// 0046af56: SUB ESP,0x8
// 0046af59: FSTP double ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 0046af5c: FLD double ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0046af5f: SUB ESP,0x8
// 0046af62: FSTP double ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 0046af65: FILD dword ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 0046af68: SUB ESP,0x8
// 0046af6b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 0046af6e: CALL shape_design.c_calculateSamplingWeight_FUN_0046adc0
//   XREF to: 0046adc0 (UNCONDITIONAL_CALL)
// 0046af73: MOV dword ptr [EBP + -0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0046af76: MOV dword ptr [EBP + -0x40],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0046af79: FLD double ptr [EBP + -0x44]
//   XREF to: Stack[-0x54] (READ)
// 0046af7c: ADD ESP,0x18
// 0046af7f: FMUL double ptr [EBP + -0x4c]
//   XREF to: Stack[-0x5c] (READ)
// 0046af82: FSTP double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (WRITE)
// 0046af85: LEA EAX,[EBP + -0x24]
//   XREF to: Stack[-0x34] (DATA)
// 0046af88: PUSH EAX
// 0046af89: LEA EAX,[EBP + -0x2c]
//   XREF to: Stack[-0x3c] (DATA)
// 0046af8c: PUSH EAX
// 0046af8d: LEA EAX,[EBP + -0x34]
//   XREF to: Stack[-0x44] (DATA)
// 0046af90: PUSH EAX
// 0046af91: LEA EAX,[EBP + -0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 0046af94: PUSH EAX
// 0046af95: FLD double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 0046af98: SUB ESP,0x8
// 0046af9b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 0046af9e: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046afa1: PUSH EAX
// 0046afa2: MOV EAX,dword ptr [EBP + -0x50]
//   XREF to: Stack[-0x60] (READ)
// 0046afa5: PUSH EAX
// 0046afa6: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0046afa9: PUSH EAX
// 0046afaa: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0046afad: PUSH EAX
// 0046afae: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046afb1: PUSH EAX
// 0046afb2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046afb5: PUSH EAX
// 0046afb6: CALL shape_design.c_samplePixelAndAccumulate_FUN_0046ad00
//   XREF to: 0046ad00 (UNCONDITIONAL_CALL)
// 0046afbb: ADD ESP,0x30
// 0046afbe: FLD double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046afc1: FADD double ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 0046afc4: FSTP double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0046afc7: JMP 0x0046af48
//   XREF to: 0046af48 (UNCONDITIONAL_JUMP)
// 0046afcc: JMP 0x0046af02
//   Label: LAB_0046afcc
//   XREF to: 0046af02 (UNCONDITIONAL_JUMP)
// 0046afd1: FLDZ
//   Label: LAB_0046afd1
// 0046afd3: FCOMP double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046afd6: FNSTSW AX
// 0046afd8: SAHF
// 0046afd9: JNC 0x0046afff
//   XREF to: 0046afff (CONDITIONAL_JUMP)
// 0046afdb: FLD double ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0046afde: FDIV double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046afe1: FSTP double ptr [EBP + -0x3c]
//   XREF to: Stack[-0x4c] (WRITE)
// 0046afe4: FLD double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0046afe7: FDIV double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046afea: FSTP double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (WRITE)
// 0046afed: FLD double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046aff0: FDIV double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046aff3: FSTP double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0046aff6: FLD double ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0046aff9: FDIV double ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046affc: FSTP double ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 0046afff: FLD double ptr [EBP + -0x3c]
//   Label: LAB_0046afff
//   XREF to: Stack[-0x4c] (READ)
// 0046b002: FADD double ptr [0x0061d296]
//   XREF to: 0061d296 (READ)
// 0046b008: MOV EAX,dword ptr [EBP + 0x44]
//   XREF to: Stack[0x34] (READ)
// 0046b00b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046b010: FISTP dword ptr [EAX]
// 0046b012: FLD double ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0046b015: FADD double ptr [0x0061d296]
//   XREF to: 0061d296 (READ)
// 0046b01b: MOV EAX,dword ptr [EBP + 0x48]
//   XREF to: Stack[0x38] (READ)
// 0046b01e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046b023: FISTP dword ptr [EAX]
// 0046b025: FLD double ptr [EBP + -0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 0046b028: FADD double ptr [0x0061d296]
//   XREF to: 0061d296 (READ)
// 0046b02e: MOV EAX,dword ptr [EBP + 0x4c]
//   XREF to: Stack[0x3c] (READ)
// 0046b031: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046b036: FISTP dword ptr [EAX]
// 0046b038: FLD double ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 0046b03b: FADD double ptr [0x0061d296]
//   XREF to: 0061d296 (READ)
// 0046b041: MOV EAX,dword ptr [EBP + 0x50]
//   XREF to: Stack[0x40] (READ)
// 0046b044: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0046b049: FISTP dword ptr [EAX]
// 0046b04b: MOV ESP,EBP
// 0046b04d: POP EBP
// 0046b04e: POP EDI
// 0046b04f: POP ESI
// 0046b050: POP EBX
// 0046b051: RET

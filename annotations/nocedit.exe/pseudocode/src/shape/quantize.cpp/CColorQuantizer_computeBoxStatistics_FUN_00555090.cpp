// Name: shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
// Address: 00555090
// Address Range: [[00555090, 005554f9]]
// Convention: __cdecl
// Signature: void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)
// Cross-references:
//   shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0 (00554cc0) at 00554cd1 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40 (00555a40) at 00555c44 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70 (00554e70) at 00554fe0 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00640c4b = 0.300000000000000
//   double DOUBLE_00640c53 = 0.590000000000000
//   double DOUBLE_00640c5b = 0.110000000000000
//   double DOUBLE_00640c63 = 0.700000000000000
//   double DOUBLE_00640c6b = 0.330000000000000
// Function calls:
//   core_bugs.cpp_FUN_00427ba0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
shape_quantize_cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
          (CColorQuantizer *this_ptr,int box_index)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  undefined4 extraout_ECX;
  float extraout_ECX_00;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  byte *pbVar19;
  float10 fVar20;
  double dVar21;
  float local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_1c;
  
  local_44 = 0.0;
  local_30 = 0.0;
  iVar18 = this_ptr->boxes[box_index].start_index;
  iVar10 = this_ptr->boxes[box_index].start_index + this_ptr->boxes[box_index].pixel_count;
  local_38 = 0.0;
  if (iVar18 < iVar10) {
    local_38 = 0.0;
    local_44 = 0.0;
    pbVar19 = (byte *)(iVar18 * 4 + (int)this_ptr->pixel_data);
    do {
      iVar18 = iVar18 + 1;
      local_44 = (float)*pbVar19 + local_44;
      local_30 = (float)pbVar19[1] + local_30;
      local_38 = (float)pbVar19[3] + local_38;
      pbVar19 = pbVar19 + 4;
    } while (iVar18 < iVar10);
  }
  uVar8 = this_ptr->boxes[box_index].pixel_count;
  fVar20 = (float10)local_44 / (float10)uVar8;
  dVar21 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar10,uVar8));
  this_ptr->boxes[box_index].avg_red = (short)(int)ROUND(fVar20);
  uVar8 = this_ptr->boxes[box_index].pixel_count;
  fVar20 = (float10)local_2c / (float10)uVar8;
  dVar21 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),uVar8));
  this_ptr->boxes[box_index].avg_green = (short)(int)ROUND(fVar20);
  iVar18 = this_ptr->boxes[box_index].pixel_count;
  fVar20 = (float10)local_34 / (float10)CONCAT44(extraout_ECX,iVar18);
  dVar21 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),iVar18));
  this_ptr->boxes[box_index].avg_blue = (short)(int)ROUND(fVar20);
  iVar18 = this_ptr->boxes[box_index].pixel_count;
  fVar20 = (float10)local_2c / (float10)CONCAT44(extraout_ECX_00,iVar18);
  this_ptr->boxes[box_index].red_variance = extraout_ECX_00;
  this_ptr->boxes[box_index].green_variance = extraout_ECX_00;
  this_ptr->boxes[box_index].blue_variance = extraout_ECX_00;
  this_ptr->boxes[box_index].intensity_variance = extraout_ECX_00;
  this_ptr->boxes[box_index].weighted_variance = extraout_ECX_00;
  dVar21 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44((int)((ulonglong)dVar21 >> 0x20) << 2,iVar18));
  this_ptr->boxes[box_index].avg_intensity = (short)(int)ROUND(fVar20);
  for (iVar18 = this_ptr->boxes[box_index].start_index * 4;
      iVar18 < (int)((ulonglong)dVar21 >> 0x20); iVar18 = iVar18 + 4) {
    uVar11 = (*(int *)((int)&this_ptr->boxes[box_index + -1].pixel_count + 2) >> 0x10) -
             (uint)*(byte *)(iVar18 + (int)this_ptr->pixel_data);
    uVar12 = (int)uVar11 >> 0x1f;
    iVar10._0_2_ = this_ptr->boxes[box_index].avg_red;
    iVar10._2_2_ = this_ptr->boxes[box_index].avg_green;
    uVar13 = (iVar10 >> 0x10) - (uint)*(byte *)(iVar18 + 1 + (int)this_ptr->pixel_data);
    uVar14 = (int)uVar13 >> 0x1f;
    iVar3._0_2_ = this_ptr->boxes[box_index].avg_green;
    iVar3._2_2_ = this_ptr->boxes[box_index].avg_blue;
    uVar8 = (iVar3 >> 0x10) - (uint)*(byte *)(iVar18 + 2 + (int)this_ptr->pixel_data);
    uVar15 = (int)uVar8 >> 0x1f;
    iVar4._0_2_ = this_ptr->boxes[box_index].avg_blue;
    iVar4._2_2_ = this_ptr->boxes[box_index].avg_intensity;
    uVar16 = (iVar4 >> 0x10) - (uint)*(byte *)(iVar18 + 3 + (int)this_ptr->pixel_data);
    uVar17 = (int)uVar16 >> 0x1f;
    fVar9 = (float)((uVar16 ^ uVar17) - uVar17);
    fVar7 = this_ptr->boxes[box_index].green_variance;
    fVar1 = this_ptr->boxes[box_index].blue_variance;
    fVar2 = this_ptr->boxes[box_index].intensity_variance;
    this_ptr->boxes[box_index].red_variance =
         this_ptr->boxes[box_index].red_variance + (float)(int)((uVar11 ^ uVar12) - uVar12);
    this_ptr->boxes[box_index].green_variance = fVar7 + (float)(int)((uVar13 ^ uVar14) - uVar14);
    this_ptr->boxes[box_index].blue_variance = fVar1 + (float)(int)((uVar8 ^ uVar15) - uVar15);
    this_ptr->boxes[box_index].intensity_variance = fVar2 + (float)(int)fVar9;
    fVar7 = (float)core_bugs_cpp_FUN_00427ba0();
    local_1c = (float)core_bugs_cpp_FUN_00427ba0();
    local_24 = (float)core_bugs_cpp_FUN_00427ba0();
    core_bugs_cpp_FUN_00427ba0();
    this_ptr->boxes[box_index].weighted_variance =
         local_1c * local_1c * (float)DOUBLE_00640c63 +
         fVar9 * fVar9 * (float)DOUBLE_00640c5b +
         local_24 * local_24 * (float)DOUBLE_00640c53 + fVar7 * fVar7 * (float)DOUBLE_00640c4b +
         this_ptr->boxes[box_index].weighted_variance;
  }
  fVar7 = this_ptr->boxes[box_index].green_variance;
  fVar9 = (float)DOUBLE_00640c53;
  fVar1 = this_ptr->boxes[box_index].blue_variance;
  fVar5 = (float)DOUBLE_00640c5b;
  fVar2 = this_ptr->boxes[box_index].intensity_variance;
  fVar6 = (float)DOUBLE_00640c63;
  this_ptr->boxes[box_index].red_variance =
       this_ptr->boxes[box_index].red_variance * (float)DOUBLE_00640c6b * local_38;
  this_ptr->boxes[box_index].green_variance = fVar7 * fVar9 * local_24;
  this_ptr->boxes[box_index].blue_variance = fVar1 * fVar5 * local_30;
  this_ptr->boxes[box_index].intensity_variance = fVar2 * fVar6 * local_1c;
  fVar7 = (float)core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar7;
  fVar7 = (float)core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar7;
  fVar7 = (float)core_bugs_cpp_FUN_00427ba0();
  this_ptr->boxes[box_index].final_metric = fVar7;
  return;
}


// Assembly code:
// 00555090: PUSH EBX
//   Label: shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
// 00555091: PUSH ESI
// 00555092: PUSH EDI
// 00555093: PUSH EBP
// 00555094: SUB ESP,0x58
// 00555097: MOV EDI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 0055509b: MOV EBP,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 0055509f: LEA EAX,[EBP*0x4 + 0x0]
// 005550a6: ADD EAX,EBP
// 005550a8: XOR ESI,ESI
// 005550aa: SHL EAX,0x3
// 005550ad: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 005550b1: LEA EBX,[EDI + EAX*0x1]
// 005550b4: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 005550b8: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 005550bc: MOV EDX,dword ptr [EBX + 0x2050]
// 005550c2: MOV ECX,dword ptr [EBX + 0x2054]
// 005550c8: MOV EBX,dword ptr [EBX + 0x2050]
// 005550ce: ADD EDX,ECX
// 005550d0: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 005550d4: CMP EBX,EDX
// 005550d6: JGE 0x0055514f
//   XREF to: 0055514f (CONDITIONAL_JUMP)
// 005550d8: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 005550dc: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 005550e0: LEA ESI,[EBX*0x4 + 0x0]
// 005550e7: MOV EAX,dword ptr [EDI + 0x4]
// 005550ea: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 005550ee: ADD ESI,EAX
// 005550f0: XOR EAX,EAX
//   Label: LAB_005550f0
// 005550f2: MOV AL,byte ptr [ESI]
// 005550f4: ADD ESI,0x4
// 005550f7: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005550fb: XOR EAX,EAX
// 005550fd: INC EBX
// 005550fe: MOV AL,byte ptr [ESI + -0x3]
// 00555101: FILD word ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 00555105: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00555109: XOR EAX,EAX
// 0055510b: FADD ST0,ST1
// 0055510d: MOV AL,byte ptr [ESI + -0x2]
// 00555110: FILD word ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 00555114: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00555118: XOR EAX,EAX
// 0055511a: FADD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (READ)
// 0055511e: MOV AL,byte ptr [ESI + -0x1]
// 00555121: FILD word ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 00555125: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00555129: FADD ST0,ST4
// 0055512b: FILD word ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 0055512f: FADD ST0,ST6
// 00555131: FXCH ST3
// 00555133: FSTP ST4
// 00555135: FXCH
// 00555137: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (WRITE)
// 0055513b: FSTP ST3
// 0055513d: FSTP ST3
// 0055513f: CMP EBX,EDX
// 00555141: JL 0x005550f0
//   XREF to: 005550f0 (CONDITIONAL_JUMP)
// 00555143: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (WRITE)
// 00555147: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0055514b: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (WRITE)
// 0055514f: LEA EAX,[EBP*0x4 + 0x0]
//   Label: LAB_0055514f
// 00555156: LEA EBX,[EAX + EBP*0x1]
// 00555159: SHL EBX,0x3
// 0055515c: XOR EAX,EAX
// 0055515e: LEA EBP,[EDI + EBX*0x1]
// 00555161: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00555165: MOV EAX,dword ptr [EBP + 0x2054]
// 0055516b: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0055516f: FILD qword ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 00555173: FDIVR float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00555177: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0055517c: FISTP dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (WRITE)
// 00555180: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 00555184: XOR ECX,ECX
// 00555186: MOV word ptr [EBP + 0x2030],AX
// 0055518d: MOV EAX,dword ptr [EBP + 0x2054]
// 00555193: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 00555197: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0055519b: FILD qword ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 0055519f: FDIVR float ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (READ)
// 005551a3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005551a8: FISTP dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (WRITE)
// 005551ac: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 005551b0: MOV word ptr [EBP + 0x2032],AX
// 005551b7: MOV EAX,dword ptr [EBP + 0x2054]
// 005551bd: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 005551c1: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005551c5: FILD qword ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 005551c9: FDIVR float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 005551cd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005551d2: FISTP dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (WRITE)
// 005551d6: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 005551da: MOV word ptr [EBP + 0x2034],AX
// 005551e1: MOV EAX,dword ptr [EBP + 0x2054]
// 005551e7: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 005551eb: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005551ef: FILD qword ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 005551f3: FDIVR float ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 005551f7: SHL EDX,0x2
// 005551fa: MOV dword ptr [EBP + 0x203c],ECX
// 00555200: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 00555204: MOV dword ptr [EBP + 0x2040],ECX
// 0055520a: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 0055520e: MOV dword ptr [EBP + 0x2044],ECX
// 00555214: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 00555218: MOV dword ptr [EBP + 0x2048],ECX
// 0055521e: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00555222: MOV dword ptr [EBP + 0x2038],ECX
// 00555228: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0055522d: FISTP dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (WRITE)
// 00555231: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 00555235: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 00555239: MOV word ptr [EBP + 0x2036],AX
// 00555240: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x50] (WRITE)
// 00555244: MOV EBP,dword ptr [EBP + 0x2050]
// 0055524a: LEA ESI,[EBP*0x4 + 0x0]
// 00555251: MOV EBX,dword ptr [ESP + 0x18]
//   Label: LAB_00555251
//   XREF to: Stack[-0x50] (READ)
// 00555255: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 00555259: ADD EBX,EDI
// 0055525b: CMP ESI,EAX
// 0055525d: JL 0x00555347
//   XREF to: 00555347 (CONDITIONAL_JUMP)
// 00555263: FLD float ptr [EBX + 0x203c]
// 00555269: FLD ST0
// 0055526b: FMUL double ptr [0x00640c6b]
//   XREF to: 00640c6b (READ)
// 00555271: FLD float ptr [EBX + 0x2040]
// 00555277: FMUL double ptr [0x00640c53]
//   XREF to: 00640c53 (READ)
// 0055527d: FLD float ptr [EBX + 0x2044]
// 00555283: FLD ST0
// 00555285: FMUL double ptr [0x00640c5b]
//   XREF to: 00640c5b (READ)
// 0055528b: FLD float ptr [EBX + 0x2048]
// 00555291: FLD ST0
// 00555293: FMUL double ptr [0x00640c63]
//   XREF to: 00640c63 (READ)
// 00555299: FXCH ST5
// 0055529b: FSTP ST6
// 0055529d: FXCH ST5
// 0055529f: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 005552a3: FXCH ST3
// 005552a5: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (READ)
// 005552a9: FXCH
// 005552ab: FSTP ST2
// 005552ad: FXCH
// 005552af: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 005552b3: FXCH ST3
// 005552b5: FSTP ST4
// 005552b7: FXCH ST3
// 005552b9: FMUL float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2c] (READ)
// 005552bd: FXCH
// 005552bf: FSTP float ptr [EBX + 0x203c]
// 005552c5: FXCH ST2
// 005552c7: FSTP float ptr [EBX + 0x2040]
// 005552cd: PUSH dword ptr [EBX + 0x2040]
// 005552d3: FSTP float ptr [EBX + 0x2044]
// 005552d9: PUSH dword ptr [EBX + 0x203c]
// 005552df: FSTP float ptr [EBX + 0x2048]
// 005552e5: CALL core_bugs.cpp_FUN_00427ba0
//   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
// 005552ea: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005552ee: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 005552f2: ADD ESP,0x8
// 005552f5: PUSH dword ptr [EBX + 0x2044]
// 005552fb: FSTP float ptr [EBX + 0x204c]
// 00555301: PUSH dword ptr [EBX + 0x204c]
// 00555307: CALL core_bugs.cpp_FUN_00427ba0
//   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
// 0055530c: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00555310: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 00555314: ADD ESP,0x8
// 00555317: PUSH dword ptr [EBX + 0x2048]
// 0055531d: FSTP float ptr [EBX + 0x204c]
// 00555323: PUSH dword ptr [EBX + 0x204c]
// 00555329: CALL core_bugs.cpp_FUN_00427ba0
//   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
// 0055532e: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00555332: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 00555336: MOV dword ptr [EBX + 0x204c],EAX
// 0055533c: ADD ESP,0x8
// 0055533f: ADD ESP,0x58
// 00555342: POP EBP
// 00555343: POP EDI
// 00555344: POP ESI
// 00555345: POP EBX
// 00555346: RET
// 00555347: MOV EAX,dword ptr [EDI + 0x4]
//   Label: LAB_00555347
// 0055534a: MOV AL,byte ptr [ESI + EAX*0x1]
// 0055534d: MOV EDX,dword ptr [EBX + 0x202e]
// 00555353: AND EAX,0xff
// 00555358: SAR EDX,0x10
// 0055535b: SUB EDX,EAX
// 0055535d: MOV EAX,EDX
// 0055535f: CDQ
// 00555360: XOR EAX,EDX
// 00555362: SUB EAX,EDX
// 00555364: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00555368: FILD dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 0055536c: MOV EAX,dword ptr [EDI + 0x4]
// 0055536f: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (WRITE)
// 00555373: MOV AL,byte ptr [ESI + EAX*0x1 + 0x1]
// 00555377: MOV EDX,dword ptr [EBX + 0x2030]
// 0055537d: AND EAX,0xff
// 00555382: SAR EDX,0x10
// 00555385: SUB EDX,EAX
// 00555387: MOV EAX,EDX
// 00555389: CDQ
// 0055538a: XOR EAX,EDX
// 0055538c: SUB EAX,EDX
// 0055538e: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00555392: MOV EAX,dword ptr [EDI + 0x4]
// 00555395: XOR EDX,EDX
// 00555397: MOV DL,byte ptr [ESI + EAX*0x1 + 0x2]
// 0055539b: MOV EAX,dword ptr [EBX + 0x2032]
// 005553a1: SAR EAX,0x10
// 005553a4: FILD dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 005553a8: SUB EAX,EDX
// 005553aa: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (WRITE)
// 005553ae: CDQ
// 005553af: XOR EAX,EDX
// 005553b1: SUB EAX,EDX
// 005553b3: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005553b7: FILD dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 005553bb: MOV EAX,dword ptr [EDI + 0x4]
// 005553be: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (WRITE)
// 005553c2: MOV AL,byte ptr [ESI + EAX*0x1 + 0x3]
// 005553c6: MOV EDX,dword ptr [EBX + 0x2034]
// 005553cc: AND EAX,0xff
// 005553d1: SAR EDX,0x10
// 005553d4: SUB EDX,EAX
// 005553d6: MOV EAX,EDX
// 005553d8: CDQ
// 005553d9: XOR EAX,EDX
// 005553db: SUB EAX,EDX
// 005553dd: PUSH dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 005553e1: FLD float ptr [EBX + 0x203c]
// 005553e7: FLD float ptr [EBX + 0x2040]
// 005553ed: FLD float ptr [EBX + 0x2044]
// 005553f3: FLD float ptr [EBX + 0x2048]
// 005553f9: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005553fd: PUSH dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x48] (READ)
// 00555401: FILD dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 00555405: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x20] (WRITE)
// 00555409: FXCH ST3
// 0055540b: FADD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x24] (READ)
// 0055540f: FXCH ST2
// 00555411: FADD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 00555415: FXCH
// 00555417: FADD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x28] (READ)
// 0055541b: FXCH ST2
// 0055541d: FSTP float ptr [EBX + 0x203c]
// 00555423: FSTP float ptr [EBX + 0x2040]
// 00555429: FXCH
// 0055542b: FADD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x20] (READ)
// 0055542f: FXCH
// 00555431: FSTP float ptr [EBX + 0x2044]
// 00555437: FSTP float ptr [EBX + 0x2048]
// 0055543d: CALL core_bugs.cpp_FUN_00427ba0
//   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
// 00555442: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00555446: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 0055544a: ADD ESP,0x8
// 0055544d: PUSH dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (READ)
// 00555451: PUSH dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x34] (READ)
// 00555455: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x48] (WRITE)
// 00555459: CALL core_bugs.cpp_FUN_00427ba0
//   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
// 0055545e: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00555462: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 00555466: ADD ESP,0x8
// 00555469: PUSH dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 0055546d: PUSH dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x40] (READ)
// 00555471: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x34] (WRITE)
// 00555475: CALL core_bugs.cpp_FUN_00427ba0
//   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
// 0055547a: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0055547e: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 00555482: ADD ESP,0x8
// 00555485: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (WRITE)
// 00555489: PUSH dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 0055548d: PUSH dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x2c] (READ)
// 00555491: CALL core_bugs.cpp_FUN_00427ba0
//   XREF to: 00427ba0 (UNCONDITIONAL_CALL)
// 00555496: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0055549a: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 0055549e: ADD ESP,0x8
// 005554a1: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 005554a5: FMUL ST0
// 005554a7: FMUL double ptr [0x00640c4b]
//   XREF to: 00640c4b (READ)
// 005554ad: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (READ)
// 005554b1: FMUL ST0
// 005554b3: FMUL double ptr [0x00640c53]
//   XREF to: 00640c53 (READ)
// 005554b9: FADDP
// 005554bb: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 005554bf: FMUL ST0
// 005554c1: FMUL double ptr [0x00640c5b]
//   XREF to: 00640c5b (READ)
// 005554c7: FADDP
// 005554c9: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 005554cd: FMUL ST0
// 005554cf: FMUL double ptr [0x00640c63]
//   XREF to: 00640c63 (READ)
// 005554d5: ADD ESI,0x4
// 005554d8: FADDP
// 005554da: INC EBP
// 005554db: FLD float ptr [EBX + 0x2038]
// 005554e1: FXCH
// 005554e3: FADD ST0,ST1
// 005554e5: FXCH ST2
// 005554e7: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2c] (WRITE)
// 005554eb: FXCH
// 005554ed: FSTP ST1
// 005554ef: FSTP float ptr [EBX + 0x2038]
// 005554f5: JMP 0x00555251
//   XREF to: 00555251 (UNCONDITIONAL_JUMP)

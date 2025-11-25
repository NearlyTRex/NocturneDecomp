// Name: shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
// Address: 00554ff0
// Address Range: [[00554ff0, 0055508c]]
// Convention: __cdecl
// Signature: float shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0(CColorQuantizer * this_ptr, SColorBox * box_ptr, uchar * pixel_ptr)
// Cross-references:
//   shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70 (00554e70) at 00554f04 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00640c2b = 0.300000000000000
//   double DOUBLE_00640c33 = 0.590000000000000
//   double DOUBLE_00640c3b = 0.110000000000000
//   double DOUBLE_00640c43 = 0.700000000000000

#include "nocturne.h"

float __cdecl
shape_quantize_cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
          (CColorQuantizer *this_ptr,SColorBox *box_ptr,uchar *pixel_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1._0_2_ = box_ptr->avg_red;
  iVar1._2_2_ = box_ptr->avg_green;
  iVar2._0_2_ = box_ptr->avg_green;
  iVar2._2_2_ = box_ptr->avg_blue;
  fVar4 = (float)(int)((uint)*pixel_ptr - (int)box_ptr->avg_red);
  fVar5 = (float)(int)((uint)pixel_ptr[1] - (iVar1 >> 0x10));
  fVar6 = (float)(int)((uint)pixel_ptr[2] - (iVar2 >> 0x10));
  iVar3._0_2_ = box_ptr->avg_blue;
  iVar3._2_2_ = box_ptr->avg_intensity;
  fVar7 = (float)(int)((uint)pixel_ptr[3] - (iVar3 >> 0x10));
  return fVar7 * fVar7 * (float)DOUBLE_00640c43 +
         fVar6 * fVar6 * (float)DOUBLE_00640c3b +
         fVar5 * fVar5 * (float)DOUBLE_00640c33 + fVar4 * fVar4 * (float)DOUBLE_00640c2b;
}


// Assembly code:
// 00554ff0: PUSH EBX
//   Label: shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
// 00554ff1: SUB ESP,0x1c
// 00554ff4: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00554ff8: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 00554ffc: XOR ECX,ECX
// 00554ffe: MOVSX EBX,word ptr [EDX]
// 00555001: MOV CL,byte ptr [EAX]
// 00555003: SUB ECX,EBX
// 00555005: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 00555009: XOR EBX,EBX
// 0055500b: MOV ECX,dword ptr [EDX]
// 0055500d: MOV BL,byte ptr [EAX + 0x1]
// 00555010: SAR ECX,0x10
// 00555013: SUB EBX,ECX
// 00555015: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x8] (WRITE)
// 00555019: MOV ECX,dword ptr [EDX + 0x2]
// 0055501c: XOR EBX,EBX
// 0055501e: SAR ECX,0x10
// 00555021: MOV BL,byte ptr [EAX + 0x2]
// 00555024: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc] (READ)
// 00555028: SUB EBX,ECX
// 0055502a: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x8] (READ)
// 0055502e: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x8] (WRITE)
// 00555032: MOV AL,byte ptr [EAX + 0x3]
// 00555035: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x8] (READ)
// 00555039: FLD ST2
// 0055503b: FMULP ST3
// 0055503d: FXCH ST2
// 0055503f: FMUL double ptr [0x00640c2b]
//   XREF to: 00640c2b (READ)
// 00555045: FLD ST1
// 00555047: FMULP ST2
// 00555049: FXCH
// 0055504b: FMUL double ptr [0x00640c33]
//   XREF to: 00640c33 (READ)
// 00555051: AND EAX,0xff
// 00555056: MOV EDX,dword ptr [EDX + 0x4]
// 00555059: FADDP
// 0055505b: SAR EDX,0x10
// 0055505e: FLD ST1
// 00555060: FMULP ST2
// 00555062: SUB EAX,EDX
// 00555064: FXCH
// 00555066: FMUL double ptr [0x00640c3b]
//   XREF to: 00640c3b (READ)
// 0055506c: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00555070: FADDP
// 00555072: FILD dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x8] (READ)
// 00555076: FMUL ST0
// 00555078: FMUL double ptr [0x00640c43]
//   XREF to: 00640c43 (READ)
// 0055507e: FADDP
// 00555080: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (WRITE)
// 00555084: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 00555088: ADD ESP,0x1c
// 0055508b: POP EBX
// 0055508c: RET

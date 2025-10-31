// Name: core_dcamera.cpp_log2Custom_FUN_00450a90
// Address: 00450a90
// Address Range: [[00450a90, 00450ab0]]
// Convention: __watcallRegister
// Signature: double core_dcamera.cpp_log2Custom_FUN_00450a90(void)
// Globals:
//   double g_Log2CustomMultiplier = 3.32192809489000

#include "nocturne.h"

double core_dcamera_cpp_log2Custom_FUN_00450a90(void)

{
  double in_stack_00000004;
  
  return in_stack_00000004 * 0.3010299956639812 * g_Log2CustomMultiplier;
}


// Assembly code:
// 00450a90: SUB ESP,0x8
//   Label: core_dcamera.cpp_log2Custom_FUN_00450a90
// 00450a93: FLD double ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00450a97: FLDLG2
// 00450a99: FXCH
// 00450a9b: FYL2X
// 00450a9d: FMUL double ptr [0x0061a2ba]
//   XREF to: 0061a2ba (READ)
// 00450aa3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00450aa6: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00450aa9: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 00450aad: ADD ESP,0x8
// 00450ab0: RET

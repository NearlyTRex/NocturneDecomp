// Name: crt_unknown.c_staticInit_FUN_006047e0
// Address: 006047e0
// Address Range: [[006047e0, 00604823]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticInit_FUN_006047e0()
// Globals:
//   undefined1 DAT_00684acc
//   undefined1 DAT_00684acd
//   undefined1 DAT_0068500c
// Function calls:
//   crt_unknown.c_FUN_006047a4

#include "nocturne.h"

void crt_unknown_c_staticInit_FUN_006047e0(void)

{
  char cVar1;
  
  if (DAT_00684acc == '\0') {
    DAT_00684acd = DAT_00684acc;
    cVar1 = crt_unknown_c_FUN_006047a4();
    if (DAT_0068500c == '\0') {
      DAT_00684acc = cVar1;
      DAT_00684acd = cVar1;
    }
  }
  return;
}


// Assembly code:
// 006047e0: PUSH EBX
//   Label: crt_unknown.c_staticInit_FUN_006047e0
// 006047e1: MOV AH,byte ptr [0x00684acc]
//   XREF to: 00684acc (READ)
// 006047e7: TEST AH,AH
// 006047e9: JNZ 0x00604822
//   XREF to: 00604822 (CONDITIONAL_JUMP)
// 006047eb: MOV byte ptr [0x00684acd],AH
//   XREF to: 00684acd (WRITE)
// 006047f1: XOR BH,BH
// 006047f3: SUB EAX,EAX
// 006047f5: PUSH EAX
// 006047f6: FNINIT
// 006047f8: FNSTCW word ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 006047fb: POP EAX
// 006047fc: MOV AL,AH
// 006047fe: XOR BL,BL
// 00604800: CMP AL,0x3
// 00604802: JNZ 0x0060480d
//   XREF to: 0060480d (CONDITIONAL_JUMP)
// 00604804: CALL crt_unknown.c_FUN_006047a4
//   XREF to: 006047a4 (UNCONDITIONAL_CALL)
// 00604809: MOV BH,AL
// 0060480b: MOV BL,AL
// 0060480d: CMP byte ptr [0x0068500c],0x0
//   Label: LAB_0060480d
//   XREF to: 0068500c (READ)
// 00604814: JNZ 0x00604822
//   XREF to: 00604822 (CONDITIONAL_JUMP)
// 00604816: MOV byte ptr [0x00684acc],BH
//   XREF to: 00684acc (WRITE)
// 0060481c: MOV byte ptr [0x00684acd],BL
//   XREF to: 00684acd (WRITE)
// 00604822: POP EBX
//   Label: LAB_00604822
// 00604823: RET

// Name: crt_unknown.c_staticFinal_FUN_00605b62
// Address: 00605b62
// Address Range: [[00605b62, 00605b88]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticFinal_FUN_00605b62()
// Globals:
//   WatcomStaticDestructorNode* g_AtexitListHead = 00000000

#include "nocturne.h"

void crt_unknown_c_staticFinal_FUN_00605b62(void)

{
  WatcomDestructorCall **ppWVar1;
  
  while (g_AtexitListHead != (WatcomStaticDestructorNode *)0x0) {
    ppWVar1 = &g_AtexitListHead->destructor_info;
    g_AtexitListHead = g_AtexitListHead->next;
    (*(code *)(*ppWVar1)->destructor_func)();
  }
  return;
}


// Assembly code:
// 00605b62: MOV EAX,[0x0068527c]
//   Label: crt_unknown.c_staticFinal_FUN_00605b62
//   XREF to: 0068527c (READ)
// 00605b67: TEST EAX,EAX
// 00605b69: JNZ 0x00605b6e
//   XREF to: 00605b6e (CONDITIONAL_JUMP)
// 00605b6b: JNZ 0x00605b78
//   Label: LAB_00605b6b
//   XREF to: 00605b78 (CONDITIONAL_JUMP)
// 00605b6d: RET
// 00605b6e: MOV EDX,dword ptr [EAX]
//   Label: LAB_00605b6e
// 00605b70: MOV dword ptr [0x0068527c],EDX
//   XREF to: 0068527c (WRITE)
// 00605b76: JMP 0x00605b6b
//   XREF to: 00605b6b (UNCONDITIONAL_JUMP)
// 00605b78: MOV EAX,dword ptr [EAX + 0x4]
//   Label: LAB_00605b78
// 00605b7b: PUSH 0x0
// 00605b7d: MOV EDX,dword ptr [EAX + 0x8]
// 00605b80: PUSH EDX
// 00605b81: CALL dword ptr [EAX + 0x4]
// 00605b84: ADD ESP,0x8
// 00605b87: JMP 0x00605b62
//   XREF to: 00605b62 (UNCONDITIONAL_JUMP)

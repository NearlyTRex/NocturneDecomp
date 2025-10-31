// Name: core_fire.cpp_CFireEffect_FUN_004c9240
// Address: 004c9240
// Address Range: [[004c9240, 004c928e]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c9240(CFireEffect * this_ptr)
// Cross-references:
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a8540 [UNCONDITIONAL_CALL]
// Globals:
//   CShell* g_CFireEffectShellsEnd
//   CPopcorn[256] g_CFireEffectPopcorns
//   undefined4 DAT_02d736f4

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c9240(CFireEffect *this_ptr)

{
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  
  (*(g_CFireEffectPopcorns[(int)g_CFireEffectShellsEnd].base.vtable)->setup)
            (&g_CFireEffectPopcorns[(int)g_CFireEffectShellsEnd].base,in_stack_00000008,
             in_stack_0000000c);
  g_CFireEffectShellsEnd = (CShell *)((int)&(g_CFireEffectShellsEnd->base).position.x + 1);
  if ((int)g_CFireEffectShellsEnd < 0x100) {
    return;
  }
  g_CFireEffectShellsEnd = (CShell *)0x0;
  return;
}


// Assembly code:
// 004c9240: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c9240
// 004c9241: PUSH ESI
// 004c9242: PUSH EBP
// 004c9243: MOV EAX,[0x02d736bc]
//   XREF to: 02d736bc (READ)
// 004c9248: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004c924c: SHL EAX,0x3
// 004c924f: PUSH ECX
// 004c9250: MOV EDX,EAX
// 004c9252: SHL EAX,0x3
// 004c9255: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004c9259: SUB EAX,EDX
// 004c925b: PUSH EBX
// 004c925c: ADD EAX,0x2d736c0
//   XREF to: 02d736c0 (DATA)
// 004c9261: PUSH EAX
// 004c9262: MOV EDX,dword ptr [EAX + 0x34]
//   XREF to: 02d736f4 (DATA)
// 004c9265: CALL dword ptr [EDX]
// 004c9267: MOV ESI,dword ptr [0x02d736bc]
//   XREF to: 02d736bc (READ)
// 004c926d: INC ESI
// 004c926e: ADD ESP,0xc
// 004c9271: MOV dword ptr [0x02d736bc],ESI
//   XREF to: 02d736bc (WRITE)
// 004c9277: CMP ESI,0x100
// 004c927d: JGE 0x004c9283
//   XREF to: 004c9283 (CONDITIONAL_JUMP)
// 004c927f: POP EBP
// 004c9280: POP ESI
// 004c9281: POP EBX
// 004c9282: RET
// 004c9283: XOR EBP,EBP
//   Label: LAB_004c9283
// 004c9285: MOV dword ptr [0x02d736bc],EBP
//   XREF to: 02d736bc (WRITE)
// 004c928b: POP EBP
// 004c928c: POP ESI
// 004c928d: POP EBX
// 004c928e: RET

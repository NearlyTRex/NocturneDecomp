// Name: support_newmsg.cpp_FUN_005445c0
// Address: 005445c0
// Address Range: [[005445c0, 00544725]]
// Convention: unknown
// Signature: undefined support_newmsg.cpp_FUN_005445c0()
// Globals:
//   int g_GlobalDeltaTimeInt
//   int g_MouseX
//   int g_MouseY
// Function calls:
//   engine_3d.c_setBlendMode_FUN_00406dd0
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950

#include "nocturne.h"

void support_newmsg_cpp_FUN_005445c0(void)

{
  int iVar1;
  CAlphaBitmap *in_stack_00000004;
  CAlphaBitmap *this_ptr;
  
  if (in_stack_00000004[0x1e].ptrOpa == &DAT_00000001) {
    iVar1 = (int)in_stack_00000004[0x1e].ptrRaw >> 0x1f;
    this_ptr = in_stack_00000004 +
               ((int)(in_stack_00000004[0x1e].ptrRaw + (iVar1 * -0x10000 - (uint)(iVar1 << 0xf < 0))
                     ) >> 0x10) + 1;
  }
  else {
    this_ptr = in_stack_00000004;
    if (in_stack_00000004[0x1e].ptrOpa == &DAT_00000002) {
      iVar1 = (int)in_stack_00000004[0x1e].ptrRaw >> 0x1f;
      this_ptr = in_stack_00000004 +
                 ((int)(in_stack_00000004[0x1e].ptrRaw +
                       (iVar1 * -0x10000 - (uint)(iVar1 << 0xf < 0))) >> 0x10) + 0xf;
    }
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
            (this_ptr,g_MouseX + -0xd,g_MouseY + -0xc,0xffff);
  if (in_stack_00000004[0x1e].ptrOpa != (char *)0x0) {
    if (in_stack_00000004[0x1e].ptrOpa != &DAT_00000002) {
      engine_3d_c_setBlendMode_FUN_00406dd0(1);
      iVar1 = (int)in_stack_00000004[0x1e].ptrRaw >> 0x1f;
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
                (in_stack_00000004 +
                 ((int)(in_stack_00000004[0x1e].ptrRaw +
                       (iVar1 * -0x10000 - (uint)(iVar1 << 0xf < 0))) >> 0x10) + 8,g_MouseX + -0xd,
                 g_MouseY + -0xc,0x8000);
      engine_3d_c_setBlendMode_FUN_00406dd0(0);
    }
    iVar1 = 7;
    in_stack_00000004[0x1e].ptrRaw = in_stack_00000004[0x1e].ptrRaw + g_GlobalDeltaTimeInt * 0x20;
    if (in_stack_00000004[0x1e].ptrOpa == &DAT_00000002) {
      iVar1 = 0xf;
    }
    if (iVar1 * 0x10000 <= (int)in_stack_00000004[0x1e].ptrRaw) {
      in_stack_00000004[0x1e].ptrOpa = (char *)0x0;
      in_stack_00000004[0x1e].ptrRaw = (char *)0x0;
      return;
    }
  }
  return;
}


// Assembly code:
// 005445c0: PUSH EBX
//   Label: support_newmsg.cpp_FUN_005445c0
// 005445c1: PUSH EDI
// 005445c2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005445c6: MOV EDX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 005445cc: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 005445d1: MOV ECX,dword ptr [EBX + 0x25c]
// 005445d7: SUB EDX,0xc
// 005445da: SUB EAX,0xd
// 005445dd: CMP ECX,0x1
// 005445e0: JZ 0x00544674
//   XREF to: 00544674 (CONDITIONAL_JUMP)
// 005445e6: CMP ECX,0x2
// 005445e9: JNZ 0x005446a4
//   XREF to: 005446a4 (CONDITIONAL_JUMP)
// 005445ef: PUSH 0xffff
// 005445f4: PUSH EDX
// 005445f5: PUSH EAX
// 005445f6: MOV EAX,dword ptr [EBX + 0x258]
// 005445fc: MOV EDX,EAX
// 005445fe: SAR EDX,0x1f
// 00544601: SHL EDX,0x10
// 00544604: SBB EAX,EDX
// 00544606: SAR EAX,0x10
// 00544609: MOV EDX,EAX
// 0054460b: SHL EAX,0x2
// 0054460e: ADD EDX,EAX
// 00544610: SHL EDX,0x2
// 00544613: LEA EAX,[EBX + 0x12c]
// 00544619: ADD EAX,EDX
// 0054461b: PUSH EAX
//   Label: LAB_0054461b
// 0054461c: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   Label: LAB_0054461c
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 00544621: ADD ESP,0x10
// 00544624: MOV EDI,dword ptr [EBX + 0x25c]
// 0054462a: TEST EDI,EDI
// 0054462c: JZ 0x00544671
//   XREF to: 00544671 (CONDITIONAL_JUMP)
// 0054462e: CMP EDI,0x2
// 00544631: JNZ 0x005446b1
//   XREF to: 005446b1 (CONDITIONAL_JUMP)
// 00544637: MOV EAX,[0x02cf6a80]
//   Label: LAB_00544637
//   XREF to: 02cf6a80 (READ)
// 0054463c: MOV EDX,dword ptr [EBX + 0x258]
// 00544642: SHL EAX,0x5
// 00544645: MOV ECX,dword ptr [EBX + 0x25c]
// 0054464b: ADD EDX,EAX
// 0054464d: MOV EAX,0x7
// 00544652: MOV dword ptr [EBX + 0x258],EDX
// 00544658: CMP ECX,0x2
// 0054465b: JNZ 0x00544662
//   XREF to: 00544662 (CONDITIONAL_JUMP)
// 0054465d: MOV EAX,0xf
// 00544662: SHL EAX,0x10
//   Label: LAB_00544662
// 00544665: CMP EAX,dword ptr [EBX + 0x258]
// 0054466b: JLE 0x0054470f
//   XREF to: 0054470f (CONDITIONAL_JUMP)
// 00544671: POP EDI
//   Label: LAB_00544671
// 00544672: POP EBX
// 00544673: RET
// 00544674: PUSH 0xffff
//   Label: LAB_00544674
// 00544679: PUSH EDX
// 0054467a: PUSH EAX
// 0054467b: MOV EAX,dword ptr [EBX + 0x258]
// 00544681: MOV EDX,EAX
// 00544683: SAR EDX,0x1f
// 00544686: SHL EDX,0x10
// 00544689: SBB EAX,EDX
// 0054468b: SAR EAX,0x10
// 0054468e: LEA EDX,[EAX + ECX*0x1]
// 00544691: LEA EAX,[EDX*0x4 + 0x0]
// 00544698: ADD EAX,EDX
// 0054469a: SHL EAX,0x2
// 0054469d: ADD EAX,EBX
// 0054469f: JMP 0x0054461b
//   XREF to: 0054461b (UNCONDITIONAL_JUMP)
// 005446a4: PUSH 0xffff
//   Label: LAB_005446a4
// 005446a9: PUSH EDX
// 005446aa: PUSH EAX
// 005446ab: PUSH EBX
// 005446ac: JMP 0x0054461c
//   XREF to: 0054461c (UNCONDITIONAL_JUMP)
// 005446b1: PUSH 0x1
//   Label: LAB_005446b1
// 005446b3: CALL engine_3d.c_setBlendMode_FUN_00406dd0
//   XREF to: 00406dd0 (UNCONDITIONAL_CALL)
// 005446b8: ADD ESP,0x4
// 005446bb: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 005446c0: PUSH 0x8000
// 005446c5: SUB EAX,0xc
// 005446c8: PUSH EAX
// 005446c9: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 005446ce: SUB EAX,0xd
// 005446d1: PUSH EAX
// 005446d2: MOV EAX,dword ptr [EBX + 0x258]
// 005446d8: MOV EDX,EAX
// 005446da: SAR EDX,0x1f
// 005446dd: SHL EDX,0x10
// 005446e0: SBB EAX,EDX
// 005446e2: SAR EAX,0x10
// 005446e5: MOV EDX,EAX
// 005446e7: SHL EAX,0x2
// 005446ea: ADD EDX,EAX
// 005446ec: SHL EDX,0x2
// 005446ef: LEA EAX,[EBX + 0xa0]
// 005446f5: ADD EAX,EDX
// 005446f7: PUSH EAX
// 005446f8: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 005446fd: ADD ESP,0x10
// 00544700: PUSH 0x0
// 00544702: CALL engine_3d.c_setBlendMode_FUN_00406dd0
//   XREF to: 00406dd0 (UNCONDITIONAL_CALL)
// 00544707: ADD ESP,0x4
// 0054470a: JMP 0x00544637
//   XREF to: 00544637 (UNCONDITIONAL_JUMP)
// 0054470f: MOV dword ptr [EBX + 0x25c],0x0
//   Label: LAB_0054470f
// 00544719: MOV dword ptr [EBX + 0x258],0x0
// 00544723: POP EDI
// 00544724: POP EBX
// 00544725: RET

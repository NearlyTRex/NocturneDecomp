// Name: core_actor.cpp_CActorPropertyList_FUN_0040e850
// Address: 0040e850
// Address Range: [[0040e850, 0040e9b9]]
// Convention: unknown
// Signature: undefined core_actor.cpp_CActorPropertyList_FUN_0040e850()
// Cross-references:
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c662 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_006144bf
// Function calls:
//   core_actor.cpp_CActorProperty_FUN_0040ea50
//   core_actor.cpp_FUN_0040ee30
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_fillRectWithBorder_FUN_00403200
//   engine_2d.c_getTextWrapEnabled_FUN_004027f0
//   engine_2d.c_setTextWrapEnabled_FUN_00402800

#include "nocturne.h"

void core_actor_cpp_CActorPropertyList_FUN_0040e850(void)

{
  int y1;
  int border_color;
  BADSPACEBASE *in_ESP;
  int iVar1;
  int iVar2;
  int y_pos;
  int unaff_retaddr;
  int in_stack_00000004;
  int local_24;
  int local_1c;
  
  y1 = engine_2d_c_getTextWrapEnabled_FUN_004027f0();
  engine_2d_c_setTextWrapEnabled_FUN_00402800(0);
  iVar1 = 0;
  if (0 < *(int *)(in_stack_00000004 + 4)) {
    iVar2 = in_stack_00000004 + 8;
    y_pos = *(int *)(in_stack_00000004 + 0x2500) + 2;
    do {
      core_actor_cpp_CActorProperty_FUN_0040ea50();
      core_actor_cpp_FUN_0040ee30();
      if (iVar1 == unaff_retaddr) {
        border_color = 0xfa;
        if (*(int *)(iVar2 + 0x54) == 0) {
          border_color = 7;
        }
        engine_2d_c_fillRectWithBorder_FUN_00403200
                  (*(int *)(in_stack_00000004 + 0x24f8) + 1,y1,
                   *(int *)(in_stack_00000004 + 0x24fc) + -1,local_1c,0,border_color);
      }
      engine_2d_c_drawText_FUN_00401fd0((char *)(y1 + 4),local_24,y_pos);
      engine_2d_c_drawText_FUN_00401fd0(": ",*(int *)(in_stack_00000004 + 0x24f0),y_pos);
      iVar2 = iVar2 + 0xec;
      iVar1 = iVar1 + 1;
      engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff18,*(int *)(in_stack_00000004 + 0x24f4),y_pos)
      ;
      y_pos = y_pos + 0xe;
    } while (iVar1 < *(int *)(in_stack_00000004 + 4));
  }
  engine_2d_c_setTextWrapEnabled_FUN_00402800(local_1c);
  return;
}


// Assembly code:
// 0040e850: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e850
// 0040e851: PUSH ESI
// 0040e852: PUSH EDI
// 0040e853: PUSH EBP
// 0040e854: SUB ESP,0xdc
// 0040e85a: MOV EBX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[0x4] (READ)
// 0040e861: CALL engine_2d.c_getTextWrapEnabled_FUN_004027f0
//   XREF to: 004027f0 (UNCONDITIONAL_CALL)
// 0040e866: PUSH 0x0
// 0040e868: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0040e86f: CALL engine_2d.c_setTextWrapEnabled_FUN_00402800
//   XREF to: 00402800 (UNCONDITIONAL_CALL)
// 0040e874: XOR EBP,EBP
// 0040e876: ADD ESP,0x4
// 0040e879: MOV EDI,dword ptr [EBX + 0x2500]
// 0040e87f: MOV EDX,dword ptr [EBX + 0x4]
// 0040e882: ADD EDI,0x2
// 0040e885: TEST EDX,EDX
// 0040e887: JLE 0x0040e995
//   XREF to: 0040e995 (CONDITIONAL_JUMP)
// 0040e88d: LEA EAX,[EDI + -0x2]
// 0040e890: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0040e897: LEA EAX,[EDI + 0xb]
// 0040e89a: LEA ESI,[EBX + 0x8]
// 0040e89d: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0040e8a4: MOV EAX,ESP
//   Label: LAB_0040e8a4
// 0040e8a6: PUSH EAX
// 0040e8a7: MOV ECX,dword ptr [EBX]
// 0040e8a9: PUSH ECX
// 0040e8aa: PUSH ESI
// 0040e8ab: MOV dword ptr [ESP + 0xdc],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0040e8b2: CALL core_actor.cpp_CActorProperty_FUN_0040ea50
//   XREF to: 0040ea50 (UNCONDITIONAL_CALL)
// 0040e8b7: ADD ESP,0xc
// 0040e8ba: PUSH ESI
// 0040e8bb: CALL core_actor.cpp_FUN_0040ee30
//   XREF to: 0040ee30 (UNCONDITIONAL_CALL)
// 0040e8c0: MOV EDX,dword ptr [EBX + 0x24f0]
// 0040e8c6: ADD ESP,0x4
// 0040e8c9: SUB EDX,EAX
// 0040e8cb: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[0x8] (READ)
// 0040e8d2: MOV dword ptr [ESP + 0xcc],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0040e8d9: CMP EBP,EAX
// 0040e8db: JNZ 0x0040e918
//   XREF to: 0040e918 (CONDITIONAL_JUMP)
// 0040e8dd: MOV EDX,dword ptr [ESI + 0x54]
// 0040e8e0: MOV EAX,0xfa
// 0040e8e5: TEST EDX,EDX
// 0040e8e7: JZ 0x0040e9b0
//   XREF to: 0040e9b0 (CONDITIONAL_JUMP)
// 0040e8ed: PUSH EAX
//   Label: LAB_0040e8ed
// 0040e8ee: PUSH 0x0
// 0040e8f0: MOV ECX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x14] (READ)
// 0040e8f7: MOV EAX,dword ptr [EBX + 0x24fc]
// 0040e8fd: PUSH ECX
// 0040e8fe: DEC EAX
// 0040e8ff: PUSH EAX
// 0040e900: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x18] (READ)
// 0040e907: PUSH EAX
// 0040e908: MOV EAX,dword ptr [EBX + 0x24f8]
// 0040e90e: INC EAX
// 0040e90f: PUSH EAX
// 0040e910: CALL engine_2d.c_fillRectWithBorder_FUN_00403200
//   XREF to: 00403200 (UNCONDITIONAL_CALL)
// 0040e915: ADD ESP,0x18
// 0040e918: PUSH EDI
//   Label: LAB_0040e918
// 0040e919: MOV ECX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x20] (READ)
// 0040e920: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 0040e927: PUSH ECX
// 0040e928: ADD EAX,0x4
// 0040e92b: PUSH EAX
// 0040e92c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0040e931: ADD ESP,0xc
// 0040e934: PUSH EDI
// 0040e935: MOV EAX,dword ptr [EBX + 0x24f0]
// 0040e93b: PUSH EAX
// 0040e93c: PUSH 0x6144bf
//   XREF to: 006144bf (DATA)
// 0040e941: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0040e946: ADD ESP,0xc
// 0040e949: PUSH EDI
// 0040e94a: MOV EDX,dword ptr [EBX + 0x24f4]
// 0040e950: PUSH EDX
// 0040e951: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xec] (DATA)
// 0040e955: ADD ESI,0xec
// 0040e95b: PUSH EAX
// 0040e95c: INC EBP
// 0040e95d: ADD EDI,0xe
// 0040e960: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0040e965: ADD ESP,0xc
// 0040e968: MOV EDX,dword ptr [EBX + 0x4]
// 0040e96b: MOV ECX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x18] (READ)
// 0040e972: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x14] (READ)
// 0040e979: ADD ECX,0xe
// 0040e97c: ADD EAX,0xe
// 0040e97f: MOV dword ptr [ESP + 0xd4],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0040e986: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0040e98d: CMP EBP,EDX
// 0040e98f: JL 0x0040e8a4
//   XREF to: 0040e8a4 (CONDITIONAL_JUMP)
// 0040e995: MOV EDX,dword ptr [ESP + 0xc8]
//   Label: LAB_0040e995
//   XREF to: Stack[-0x24] (READ)
// 0040e99c: PUSH EDX
// 0040e99d: CALL engine_2d.c_setTextWrapEnabled_FUN_00402800
//   XREF to: 00402800 (UNCONDITIONAL_CALL)
// 0040e9a2: ADD ESP,0x4
// 0040e9a5: ADD ESP,0xdc
// 0040e9ab: POP EBP
// 0040e9ac: POP EDI
// 0040e9ad: POP ESI
// 0040e9ae: POP EBX
// 0040e9af: RET
// 0040e9b0: MOV EAX,0x7
//   Label: LAB_0040e9b0
// 0040e9b5: JMP 0x0040e8ed
//   XREF to: 0040e8ed (UNCONDITIONAL_JUMP)

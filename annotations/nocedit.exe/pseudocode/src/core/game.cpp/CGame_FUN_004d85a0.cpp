// Name: core_game.cpp_CGame_FUN_004d85a0
// Address: 004d85a0
// Address Range: [[004d85a0, 004d8721]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_FUN_004d85a0(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db386 [UNCONDITIONAL_CALL]
// Globals:
//   float g_OverlayDisplayTimer
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004d85a0(CGame *this_ptr)

{
  float fVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  int unaff_EDI;
  CGame *pCVar4;
  char *local_1c;
  char *local_18;
  
  fVar1 = this_ptr->message_timer - this_ptr->delta_time_float;
  this_ptr->message_timer = fVar1;
  if (fVar1 < 0.0) {
    this_ptr->message_timer = 0.0;
  }
  g_OverlayDisplayTimer = g_OverlayDisplayTimer - this_ptr->delta_time_float;
  if (g_OverlayDisplayTimer < 0.0) {
    g_OverlayDisplayTimer = 0.0;
  }
  iVar3 = 0;
  if (0 < this_ptr->status_display_count) {
    local_18 = this_ptr->field101_0x38c;
    local_1c = this_ptr->field101_0x38c + 0x100;
    pCVar4 = this_ptr;
    do {
      while( true ) {
        fVar1 = *(float *)(pCVar4->field101_0x38c + 0x514) - this_ptr->delta_time_float;
        *(float *)(pCVar4->field101_0x38c + 0x514) = fVar1;
        if (0.0 < fVar1) break;
        iVar2 = this_ptr->status_display_count + -1;
        this_ptr->status_display_count = iVar2;
        crt_string_c_memmove_FUN_005fe5e0(local_18,local_1c,(iVar2 - iVar3) * 0x100);
        crt_string_c_memmove_FUN_005fe5e0
                  (local_1c + unaff_EBP,local_1c + unaff_EBP + 4,
                   (this_ptr->status_display_count - iVar3) * 4);
        crt_string_c_memmove_FUN_005fe5e0
                  (local_1c + unaff_EDI,local_1c + (int)(this_ptr->field101_0x38c + 0x500),
                   (this_ptr->status_display_count - iVar3) * 4);
        if (this_ptr->status_display_count <= iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      pCVar4 = (CGame *)&pCVar4->game_pixy;
      local_18 = local_18 + 0x100;
      local_1c = local_1c + 0x100;
    } while (iVar3 < this_ptr->status_display_count);
  }
  return;
}


// Assembly code:
// 004d85a0: PUSH EBX
//   Label: core_game.cpp_CGame_FUN_004d85a0
// 004d85a1: PUSH ESI
// 004d85a2: PUSH EDI
// 004d85a3: PUSH EBP
// 004d85a4: MOV EBP,ESP
// 004d85a6: SUB ESP,0x18
// 004d85a9: AND ESP,0xfffffff8
// 004d85ac: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d85af: FLD float ptr [EBX + 0x264]
// 004d85b5: FSUBR float ptr [EBX + 0x384]
// 004d85bb: FST float ptr [EBX + 0x384]
// 004d85c1: FLDZ
// 004d85c3: FCOMPP
// 004d85c5: FNSTSW AX
// 004d85c7: SAHF
// 004d85c8: JA 0x004d867f
//   XREF to: 004d867f (CONDITIONAL_JUMP)
// 004d85ce: FLD float ptr [EBX + 0x264]
//   Label: LAB_004d85ce
// 004d85d4: FSUBR float ptr [0x02d831ac]
//   XREF to: 02d831ac (READ)
// 004d85da: FST float ptr [0x02d831ac]
//   XREF to: 02d831ac (WRITE)
// 004d85e0: FLDZ
// 004d85e2: FCOMPP
// 004d85e4: FNSTSW AX
// 004d85e6: SAHF
// 004d85e7: JBE 0x004d85f1
//   XREF to: 004d85f1 (CONDITIONAL_JUMP)
// 004d85e9: XOR EDX,EDX
// 004d85eb: MOV dword ptr [0x02d831ac],EDX
//   XREF to: 02d831ac (WRITE)
// 004d85f1: MOV ECX,dword ptr [EBX + 0x388]
//   Label: LAB_004d85f1
// 004d85f7: XOR ESI,ESI
// 004d85f9: TEST ECX,ECX
// 004d85fb: JLE 0x004d8678
//   XREF to: 004d8678 (CONDITIONAL_JUMP)
// 004d8601: LEA EAX,[EBX + 0x38c]
// 004d8607: LEA EDI,[EBX + 0x88c]
// 004d860d: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004d8611: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 004d8615: ADD EAX,0x100
// 004d861a: LEA EDI,[EBX + 0x8a0]
// 004d8620: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d8624: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 004d8628: MOV EDI,EBX
// 004d862a: FLD float ptr [EBX + 0x264]
//   Label: LAB_004d862a
// 004d8630: LEA EAX,[ESI*0x4 + 0x0]
// 004d8637: FSUBR float ptr [EDI + 0x8a0]
// 004d863d: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004d8641: FST float ptr [EDI + 0x8a0]
// 004d8647: FLDZ
// 004d8649: FCOMPP
// 004d864b: FNSTSW AX
// 004d864d: SAHF
// 004d864e: JNC 0x004d868e
//   XREF to: 004d868e (CONDITIONAL_JUMP)
// 004d8650: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 004d8654: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004d8658: INC ESI
// 004d8659: ADD EDI,0x4
// 004d865c: ADD EDX,0x100
// 004d8662: ADD ECX,0x100
// 004d8668: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004d866c: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d8670: CMP ESI,dword ptr [EBX + 0x388]
// 004d8676: JL 0x004d862a
//   XREF to: 004d862a (CONDITIONAL_JUMP)
// 004d8678: MOV ESP,EBP
//   Label: LAB_004d8678
// 004d867a: POP EBP
// 004d867b: POP EDI
// 004d867c: POP ESI
// 004d867d: POP EBX
// 004d867e: RET
// 004d867f: MOV dword ptr [EBX + 0x384],0x0
//   Label: LAB_004d867f
// 004d8689: JMP 0x004d85ce
//   XREF to: 004d85ce (UNCONDITIONAL_JUMP)
// 004d868e: MOV EAX,dword ptr [EBX + 0x388]
//   Label: LAB_004d868e
// 004d8694: DEC EAX
// 004d8695: MOV dword ptr [EBX + 0x388],EAX
// 004d869b: SUB EAX,ESI
// 004d869d: SHL EAX,0x8
// 004d86a0: PUSH EAX
// 004d86a1: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 004d86a5: PUSH EDX
// 004d86a6: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 004d86aa: PUSH ECX
// 004d86ab: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004d86b0: MOV EAX,dword ptr [EBX + 0x388]
// 004d86b6: SUB EAX,ESI
// 004d86b8: ADD ESP,0xc
// 004d86bb: SHL EAX,0x2
// 004d86be: PUSH EAX
// 004d86bf: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 004d86c3: ADD EAX,0x4
// 004d86c6: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004d86ca: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 004d86ce: ADD EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 004d86d2: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 004d86d6: PUSH EAX
// 004d86d7: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 004d86db: ADD EAX,ECX
// 004d86dd: PUSH EAX
// 004d86de: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004d86e3: MOV EAX,dword ptr [EBX + 0x388]
// 004d86e9: SUB EAX,ESI
// 004d86eb: ADD ESP,0xc
// 004d86ee: SHL EAX,0x2
// 004d86f1: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004d86f4: PUSH EAX
// 004d86f5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 004d86f9: ADD EAX,EDX
// 004d86fb: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 004d86ff: PUSH EAX
// 004d8700: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 004d8704: ADD EAX,ECX
// 004d8706: PUSH EAX
// 004d8707: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004d870c: ADD ESP,0xc
// 004d870f: CMP ESI,dword ptr [EBX + 0x388]
// 004d8715: JL 0x004d862a
//   XREF to: 004d862a (CONDITIONAL_JUMP)
// 004d871b: MOV ESP,EBP
// 004d871d: POP EBP
// 004d871e: POP EDI
// 004d871f: POP ESI
// 004d8720: POP EBX
// 004d8721: RET

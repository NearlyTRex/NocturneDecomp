// Name: wincore_winvideo.cpp_positionMovieWindow_FUN_005f4500
// Address: 005f4500
// Address Range: [[005f4500, 005f46ab]]
// Convention: __cdecl
// Signature: void wincore_winvideo.cpp_positionMovieWindow_FUN_005f4500(HWND parent_window)
// Globals:
//   mciSendStringA* mciSendStringA = 00211850
//   GetClientRect* GetClientRect = 00211ac0
//   MoveWindow* MoveWindow = 00211b52
//   SetRectEmpty* SetRectEmpty = 00211bf6
//   TerminatedCString s_where_mov_source_006581dd
//   HWND g_MovieWindowHandle
//   int g_MoviePlaying

#include "nocturne.h"

void __cdecl wincore_winvideo_cpp_positionMovieWindow_FUN_005f4500(HWND parent_window)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  BADSPACEBASE *in_ESP;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000020;
  byte bStack_7c;
  byte abStack_7b [87];
  tagRECT local_24 [2];
  
  if (g_MoviePlaying == 0) {
    return;
  }
  (*GetClientRect)(parent_window,local_24);
  (*mciSendStringA)("where mov source",&stack0xffffff68,0x80,(HWND)0x0);
  (*SetRectEmpty)((LPRECT)&stack0x0000000c);
  pbVar3 = &bStack_7c;
  while (bStack_7c == 0x20) {
    pbVar1 = pbVar3 + 1;
    pbVar3 = pbVar3 + 1;
    bStack_7c = *pbVar1;
  }
  for (; *pbVar3 != 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; *pbVar3 != 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; (0x2f < *pbVar3 && (*pbVar3 < 0x3a)); pbVar3 = pbVar3 + 1) {
    in_stack_0000001c = in_stack_0000001c * 10 + (*pbVar3 - 0x30);
  }
  for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; (bVar2 = *pbVar3, 0x2f < bVar2 && (bVar2 < 0x3a)); pbVar3 = pbVar3 + 1) {
    in_stack_00000020 = in_stack_00000020 * 10 + (bVar2 - 0x30);
  }
  if ((400 < in_stack_0000000c) || (300 < in_stack_00000010)) {
    in_stack_0000001c = in_stack_0000001c * 2;
    in_stack_00000020 = in_stack_00000020 * 2;
  }
  (*MoveWindow)(g_MovieWindowHandle,in_stack_0000000c / 2 - in_stack_0000001c / 2,
                in_stack_00000010 / 2 - in_stack_00000020 / 2,in_stack_0000001c,in_stack_00000020,1)
  ;
  return;
}


// Assembly code:
// 005f4500: PUSH EBP
//   Label: wincore_winvideo.cpp_positionMovieWindow_FUN_005f4500
// 005f4501: SUB ESP,0xa0
// 005f4507: CMP dword ptr [0x03f99504],0x0
//   XREF to: 03f99504 (READ)
// 005f450e: JNZ 0x005f4518
//   XREF to: 005f4518 (CONDITIONAL_JUMP)
// 005f4510: ADD ESP,0xa0
// 005f4516: POP EBP
// 005f4517: RET
// 005f4518: LEA EAX,[ESP + 0x80]
//   Label: LAB_005f4518
//   XREF to: Stack[-0x24] (DATA)
// 005f451f: PUSH EAX
// 005f4520: MOV ECX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x4] (READ)
// 005f4527: PUSH ECX
// 005f4528: CALL dword ptr CS:[0x6114a4]
//   XREF to: 006114a4 (READ)
// 005f452f: PUSH 0x0
// 005f4531: PUSH 0x80
// 005f4536: LEA EAX,[ESP + 0x8]
// 005f453a: PUSH EAX
// 005f453b: PUSH 0x6581dd
//   XREF to: 006581dd (DATA)
// 005f4540: CALL dword ptr CS:[0x611410]
//   XREF to: 00611410 (READ)
// 005f4547: LEA EAX,[ESP + 0x90]
// 005f454e: PUSH EAX
// 005f454f: CALL dword ptr CS:[0x6114f0]
//   XREF to: 006114f0 (READ)
// 005f4556: MOV DL,byte ptr [ESP]
// 005f4559: MOV EAX,ESP
// 005f455b: CMP DL,0x20
// 005f455e: JNZ 0x005f4570
//   XREF to: 005f4570 (CONDITIONAL_JUMP)
// 005f4560: MOV DH,byte ptr [EAX + 0x1]
//   Label: LAB_005f4560
// 005f4563: INC EAX
// 005f4564: CMP DH,0x20
// 005f4567: JZ 0x005f4560
//   XREF to: 005f4560 (CONDITIONAL_JUMP)
// 005f4569: LEA EAX,[EAX]
// 005f456f: NOP
// 005f4570: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4570
// 005f4573: JZ 0x005f4578
//   XREF to: 005f4578 (CONDITIONAL_JUMP)
// 005f4575: INC EAX
// 005f4576: JMP 0x005f4570
//   XREF to: 005f4570 (UNCONDITIONAL_JUMP)
// 005f4578: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4578
// 005f457b: JNZ 0x005f4580
//   XREF to: 005f4580 (CONDITIONAL_JUMP)
// 005f457d: INC EAX
// 005f457e: JMP 0x005f4578
//   XREF to: 005f4578 (UNCONDITIONAL_JUMP)
// 005f4580: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4580
// 005f4583: JZ 0x005f4588
//   XREF to: 005f4588 (CONDITIONAL_JUMP)
// 005f4585: INC EAX
// 005f4586: JMP 0x005f4580
//   XREF to: 005f4580 (UNCONDITIONAL_JUMP)
// 005f4588: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4588
// 005f458b: JNZ 0x005f45a9
//   XREF to: 005f45a9 (CONDITIONAL_JUMP)
// 005f458d: INC EAX
// 005f458e: JMP 0x005f4588
//   XREF to: 005f4588 (UNCONDITIONAL_JUMP)
// 005f4590: IMUL ECX,dword ptr [ESP + 0x98],0xa
//   Label: LAB_005f4590
// 005f4598: XOR EDX,EDX
// 005f459a: MOV DL,byte ptr [EAX]
// 005f459c: SUB EDX,0x30
// 005f459f: ADD ECX,EDX
// 005f45a1: INC EAX
// 005f45a2: MOV dword ptr [ESP + 0x98],ECX
// 005f45a9: MOV DL,byte ptr [EAX]
//   Label: LAB_005f45a9
// 005f45ab: CMP DL,0x30
// 005f45ae: JNC 0x005f45bc
//   XREF to: 005f45bc (CONDITIONAL_JUMP)
// 005f45b0: CMP byte ptr [EAX],0x20
//   Label: LAB_005f45b0
// 005f45b3: JNZ 0x005f468e
//   XREF to: 005f468e (CONDITIONAL_JUMP)
// 005f45b9: INC EAX
// 005f45ba: JMP 0x005f45b0
//   XREF to: 005f45b0 (UNCONDITIONAL_JUMP)
// 005f45bc: CMP DL,0x39
//   Label: LAB_005f45bc
// 005f45bf: JBE 0x005f4590
//   XREF to: 005f4590 (CONDITIONAL_JUMP)
// 005f45c1: JMP 0x005f45b0
//   XREF to: 005f45b0 (UNCONDITIONAL_JUMP)
// 005f45c3: IMUL ECX,dword ptr [ESP + 0xa8],0xa
//   Label: LAB_005f45c3
// 005f45cb: XOR EDX,EDX
// 005f45cd: MOV DL,BH
// 005f45cf: SUB EDX,0x30
// 005f45d2: ADD ECX,EDX
// 005f45d4: INC EAX
// 005f45d5: MOV dword ptr [ESP + 0xa8],ECX
// 005f45dc: MOV BH,byte ptr [EAX]
//   Label: LAB_005f45dc
// 005f45de: CMP BH,0x30
// 005f45e1: JC 0x005f45e8
//   XREF to: 005f45e8 (CONDITIONAL_JUMP)
// 005f45e3: CMP BH,0x39
// 005f45e6: JBE 0x005f45c3
//   XREF to: 005f45c3 (CONDITIONAL_JUMP)
// 005f45e8: CMP dword ptr [ESP + 0x94],0x190
//   Label: LAB_005f45e8
// 005f45f3: JLE 0x005f4696
//   XREF to: 005f4696 (CONDITIONAL_JUMP)
// 005f45f9: MOV EAX,dword ptr [ESP + 0xa4]
//   Label: LAB_005f45f9
// 005f4600: MOV EBP,dword ptr [ESP + 0xa8]
// 005f4607: ADD EAX,EAX
// 005f4609: ADD EBP,EBP
// 005f460b: MOV dword ptr [ESP + 0xa4],EAX
// 005f4612: MOV dword ptr [ESP + 0xa8],EBP
// 005f4619: MOV EAX,dword ptr [ESP + 0x94]
//   Label: LAB_005f4619
// 005f4620: MOV EDX,EAX
// 005f4622: SAR EDX,0x1f
// 005f4625: SUB EAX,EDX
// 005f4627: SAR EAX,0x1
// 005f4629: MOV EBX,EAX
// 005f462b: MOV EAX,dword ptr [ESP + 0xa4]
// 005f4632: MOV EDX,EAX
// 005f4634: SAR EDX,0x1f
// 005f4637: SUB EAX,EDX
// 005f4639: SAR EAX,0x1
// 005f463b: SUB EBX,EAX
// 005f463d: MOV EAX,dword ptr [ESP + 0x98]
// 005f4644: MOV EDX,EAX
// 005f4646: SAR EDX,0x1f
// 005f4649: SUB EAX,EDX
// 005f464b: SAR EAX,0x1
// 005f464d: MOV ECX,EAX
// 005f464f: MOV EAX,dword ptr [ESP + 0xa8]
// 005f4656: MOV EDX,EAX
// 005f4658: SAR EDX,0x1f
// 005f465b: SUB EAX,EDX
// 005f465d: SAR EAX,0x1
// 005f465f: PUSH 0x1
// 005f4661: MOV EDX,dword ptr [ESP + 0xac]
// 005f4668: PUSH EDX
// 005f4669: MOV ESI,dword ptr [ESP + 0xac]
// 005f4670: PUSH ESI
// 005f4671: SUB ECX,EAX
// 005f4673: PUSH ECX
// 005f4674: PUSH EBX
// 005f4675: MOV EDI,dword ptr [0x03f994fc]
//   XREF to: 03f994fc (READ)
// 005f467b: PUSH EDI
// 005f467c: CALL dword ptr CS:[0x6114c8]
//   XREF to: 006114c8 (READ)
// 005f4683: POP EBX
// 005f4684: POP ESI
// 005f4685: POP EDI
// 005f4686: ADD ESP,0xa0
// 005f468c: POP EBP
// 005f468d: RET
// 005f468e: PUSH EDI
//   Label: LAB_005f468e
// 005f468f: PUSH ESI
// 005f4690: PUSH EBX
// 005f4691: JMP 0x005f45dc
//   XREF to: 005f45dc (UNCONDITIONAL_JUMP)
// 005f4696: CMP dword ptr [ESP + 0x98],0x12c
//   Label: LAB_005f4696
// 005f46a1: JG 0x005f45f9
//   XREF to: 005f45f9 (CONDITIONAL_JUMP)
// 005f46a7: JMP 0x005f4619
//   XREF to: 005f4619 (UNCONDITIONAL_JUMP)

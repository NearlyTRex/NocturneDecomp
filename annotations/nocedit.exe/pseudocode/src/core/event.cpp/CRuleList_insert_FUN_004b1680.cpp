// Name: core_event.cpp_CRuleList_insert_FUN_004b1680
// Address: 004b1680
// Address Range: [[004b1680, 004b17ba]]
// Convention: __cdecl
// Signature: void core_event.cpp_CRuleList_insert_FUN_004b1680(CRuleList * this_ptr)
// Cross-references:
//   core_actor.cpp_FUN_0040fffe (0040fffe) at 00410038 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_event_cpp_00625f5d
//   TerminatedCString s_CRuleList_insert_invalid_00625f6f
//   TerminatedCString s_core_event_cpp_00625f91
//   TerminatedCString s_CRuleList_insert_list_fu_00625fa3
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl core_event_cpp_CRuleList_insert_FUN_004b1680(CRuleList *this_ptr)

{
  char cVar1;
  int unaff_EDI;
  CRuleList *src;
  CRuleList *src_00;
  int in_stack_00000008;
  char *in_stack_00000018;
  char *in_stack_0000001c;
  
  if ((in_stack_00000008 < 0) || (this_ptr->list_size < in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xcd9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CRuleList::insert - invalid index");
  }
  if (4 < this_ptr->list_size) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xcda;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CRuleList::insert - list full");
  }
  src = this_ptr + in_stack_00000008 * 0x19 + 1;
  crt_string_c_memmove_FUN_005fe5e0
            (this_ptr + (in_stack_00000008 + 1) * 0x19 + 1,src,
             (this_ptr->list_size - in_stack_00000008) * 100);
  src_00 = this_ptr + (in_stack_00000008 + 1) * 0x19 + 0x7e;
  crt_string_c_memmove_FUN_005fe5e0
            ((void *)((int)&this_ptr[0x7e].list_size + unaff_EDI),src_00,
             (this_ptr->list_size - in_stack_00000008) * 100);
  this_ptr->list_size = this_ptr->list_size + 1;
  do {
    cVar1 = *in_stack_00000018;
    *(char *)&src->list_size = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000018[1];
    in_stack_00000018 = in_stack_00000018 + 2;
    *(char *)((int)&src->list_size + 1) = cVar1;
    src = (CRuleList *)((int)&src->list_size + 2);
  } while (cVar1 != '\0');
  do {
    cVar1 = *in_stack_0000001c;
    *(char *)&src_00->list_size = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = in_stack_0000001c[1];
    in_stack_0000001c = in_stack_0000001c + 2;
    *(char *)((int)&src_00->list_size + 1) = cVar1;
    src_00 = (CRuleList *)((int)&src_00->list_size + 2);
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004b1680: PUSH EBX
//   Label: core_event.cpp_CRuleList_insert_FUN_004b1680
// 004b1681: PUSH ESI
// 004b1682: PUSH EDI
// 004b1683: PUSH EBP
// 004b1684: SUB ESP,0x8
// 004b1687: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004b168b: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004b168f: TEST ESI,ESI
// 004b1691: JL 0x004b1697
//   XREF to: 004b1697 (CONDITIONAL_JUMP)
// 004b1693: CMP ESI,dword ptr [EBX]
// 004b1695: JLE 0x004b16ba
//   XREF to: 004b16ba (CONDITIONAL_JUMP)
// 004b1697: MOV ECX,0x625f5d
//   Label: LAB_004b1697
//   XREF to: 00625f5d (PARAM)
// 004b169c: MOV EDI,0xcd9
// 004b16a1: PUSH 0x625f6f
//   XREF to: 00625f6f (DATA)
// 004b16a6: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b16ac: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004b16b2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b16b7: ADD ESP,0x4
// 004b16ba: CMP dword ptr [EBX],0x5
//   Label: LAB_004b16ba
// 004b16bd: JGE 0x004b1794
//   XREF to: 004b1794 (CONDITIONAL_JUMP)
// 004b16c3: MOV EDX,dword ptr [EBX]
//   Label: LAB_004b16c3
// 004b16c5: SUB EDX,ESI
// 004b16c7: LEA EAX,[EDX*0x4 + 0x0]
// 004b16ce: SUB EAX,EDX
// 004b16d0: SHL EAX,0x3
// 004b16d3: ADD EAX,EDX
// 004b16d5: SHL EAX,0x2
// 004b16d8: PUSH EAX
// 004b16d9: LEA EAX,[ESI*0x4 + 0x0]
// 004b16e0: SUB EAX,ESI
// 004b16e2: SHL EAX,0x3
// 004b16e5: ADD EAX,ESI
// 004b16e7: LEA EBP,[EBX + 0x4]
// 004b16ea: SHL EAX,0x2
// 004b16ed: LEA EDX,[ESI + 0x1]
// 004b16f0: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004b16f4: LEA EDI,[EAX + EBP*0x1]
// 004b16f7: LEA EAX,[EDX*0x4 + 0x0]
// 004b16fe: SUB EAX,EDX
// 004b1700: SHL EAX,0x3
// 004b1703: ADD EAX,EDX
// 004b1705: SHL EAX,0x2
// 004b1708: PUSH EDI
// 004b1709: ADD EBP,EAX
// 004b170b: PUSH EBP
// 004b170c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004b1710: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b1715: MOV EDX,dword ptr [EBX]
// 004b1717: SUB EDX,ESI
// 004b1719: LEA EAX,[EDX*0x4 + 0x0]
// 004b1720: SUB EAX,EDX
// 004b1722: SHL EAX,0x3
// 004b1725: ADD EAX,EDX
// 004b1727: ADD ESP,0xc
// 004b172a: SHL EAX,0x2
// 004b172d: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004b1730: PUSH EAX
// 004b1731: LEA EAX,[EBX + 0x1f8]
// 004b1737: ADD EBP,EAX
// 004b1739: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 004b173d: PUSH EBP
// 004b173e: ADD EAX,ESI
// 004b1740: PUSH EAX
// 004b1741: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b1746: MOV EAX,dword ptr [EBX]
// 004b1748: ADD ESP,0xc
// 004b174b: INC EAX
// 004b174c: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004b1750: MOV dword ptr [EBX],EAX
// 004b1752: PUSH EDI
// 004b1753: MOV AL,byte ptr [ESI]
//   Label: LAB_004b1753
// 004b1755: MOV byte ptr [EDI],AL
// 004b1757: CMP AL,0x0
// 004b1759: JZ 0x004b176b
//   XREF to: 004b176b (CONDITIONAL_JUMP)
// 004b175b: MOV AL,byte ptr [ESI + 0x1]
// 004b175e: ADD ESI,0x2
// 004b1761: MOV byte ptr [EDI + 0x1],AL
// 004b1764: ADD EDI,0x2
// 004b1767: CMP AL,0x0
// 004b1769: JNZ 0x004b1753
//   XREF to: 004b1753 (CONDITIONAL_JUMP)
// 004b176b: POP EDI
//   Label: LAB_004b176b
// 004b176c: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 004b1770: MOV EDI,EBP
// 004b1772: PUSH EDI
// 004b1773: MOV AL,byte ptr [ESI]
//   Label: LAB_004b1773
// 004b1775: MOV byte ptr [EDI],AL
// 004b1777: CMP AL,0x0
// 004b1779: JZ 0x004b178b
//   XREF to: 004b178b (CONDITIONAL_JUMP)
// 004b177b: MOV AL,byte ptr [ESI + 0x1]
// 004b177e: ADD ESI,0x2
// 004b1781: MOV byte ptr [EDI + 0x1],AL
// 004b1784: ADD EDI,0x2
// 004b1787: CMP AL,0x0
// 004b1789: JNZ 0x004b1773
//   XREF to: 004b1773 (CONDITIONAL_JUMP)
// 004b178b: POP EDI
//   Label: LAB_004b178b
// 004b178c: ADD ESP,0x8
// 004b178f: POP EBP
// 004b1790: POP EDI
// 004b1791: POP ESI
// 004b1792: POP EBX
// 004b1793: RET
// 004b1794: MOV EAX,0x625f91
//   Label: LAB_004b1794
//   XREF to: 00625f91 (PARAM)
// 004b1799: MOV EDX,0xcda
// 004b179e: PUSH 0x625fa3
//   XREF to: 00625fa3 (DATA)
// 004b17a3: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004b17a8: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004b17ae: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b17b3: ADD ESP,0x4
// 004b17b6: JMP 0x004b16c3
//   XREF to: 004b16c3 (UNCONDITIONAL_JUMP)

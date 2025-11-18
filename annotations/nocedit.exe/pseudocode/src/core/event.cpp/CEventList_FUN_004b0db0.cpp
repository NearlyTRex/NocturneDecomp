// Name: core_event.cpp_CEventList_FUN_004b0db0
// Address: 004b0db0
// Address Range: [[004b0db0, 004b0ef5]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_FUN_004b0db0(CEventList * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ac223 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004addf0 (004addf0) at 004ae061 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004b0c40 (004b0c40) at 004b0c46 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004b0f00 (004b0f00) at 004b0f7c [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80 (004b0c80) at 004b0d2a [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0
//   sound_sndmain.cpp_FUN_005a8480
//   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
//   sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004b0db0(CEventList *this_ptr)

{
  CEvent CVar1;
  int iVar2;
  CEvent *dest;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  CEvent *pCVar3;
  void *unaff_EDI;
  CEvent *pCVar4;
  double dVar5;
  CEvent *in_stack_fffffe90;
  CEvent aCStack_164 [328];
  undefined8 local_1c;
  int local_14;
  
  local_14 = 0;
  if (0 < this_ptr[1].event_count) {
    dest = this_ptr[1].event_list;
    local_1c = (double)CONCAT44(this_ptr[1].field2_0x68 + 0xbc,(uint)local_1c);
    do {
      dVar5 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(1,(uint)in_stack_fffffe90);
      local_1c._0_4_ = SUB84(dVar5,0);
      *(uint *)(dest + 0x118) = (uint)local_1c;
      local_1c._4_4_ = (uint)((ulonglong)dVar5 >> 0x20);
      *(uint *)(dest + 0x11c) = local_1c._4_4_;
      local_1c = dVar5;
      if (0.0 <= *(double *)(dest + 0x118)) {
        sound_sndmain_cpp_FUN_005a8480();
        in_stack_fffffe90 = *(CEvent **)dest;
        iVar2 = sound_sndmain_cpp_getSfxSampleInfo_FUN_005a96e0
                          ((uint)in_stack_fffffe90,(CSfxSample *)&stack0xfffffe98);
        pCVar3 = aCStack_164;
        if (iVar2 == 0) goto LAB_004b0e30;
        pCVar4 = dest + 0x18;
        do {
          CVar1 = *pCVar3;
          *pCVar4 = CVar1;
          if (CVar1 == (CEvent)0x0) break;
          CVar1 = pCVar3[1];
          pCVar3 = pCVar3 + 2;
          pCVar4[1] = CVar1;
          pCVar4 = pCVar4 + 2;
        } while (CVar1 != (CEvent)0x0);
        dest = dest + 0x120;
        unaff_EDI = (void *)((int)unaff_EDI + 0x120);
        unaff_ESI = unaff_ESI + 1;
      }
      else {
LAB_004b0e30:
        iVar2 = this_ptr[1].event_count + -1;
        this_ptr[1].event_count = iVar2;
        in_stack_fffffe90 = dest;
        crt_string_c_memmove_FUN_005fe5e0(dest,unaff_EDI,(iVar2 - unaff_ESI) * 0x120);
      }
    } while (local_14 < this_ptr[1].event_count);
  }
  return;
}


// Assembly code:
// 004b0db0: PUSH EBX
//   Label: core_event.cpp_CEventList_FUN_004b0db0
// 004b0db1: PUSH ESI
// 004b0db2: PUSH EDI
// 004b0db3: PUSH EBP
// 004b0db4: MOV EBP,ESP
// 004b0db6: SUB ESP,0x160
// 004b0dbc: AND ESP,0xfffffff8
// 004b0dbf: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b0dc2: XOR EDX,EDX
// 004b0dc4: MOV ECX,dword ptr [EAX + 0x3ac8]
// 004b0dca: MOV dword ptr [ESP + 0x15c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004b0dd1: TEST ECX,ECX
// 004b0dd3: JLE 0x004b0e76
//   XREF to: 004b0e76 (CONDITIONAL_JUMP)
// 004b0dd9: ADD EAX,0x3acc
// 004b0dde: MOV EBX,EAX
// 004b0de0: ADD EAX,0x120
// 004b0de5: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004b0dec: PUSH 0x1
//   Label: LAB_004b0dec
// 004b0dee: MOV EAX,dword ptr [EBX]
// 004b0df0: PUSH EAX
// 004b0df1: XOR ESI,ESI
// 004b0df3: CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
//   XREF to: 005a9720 (UNCONDITIONAL_CALL)
// 004b0df8: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004b0dff: MOV dword ptr [ESP + 0x15c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004b0e06: FLDZ
// 004b0e08: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x20] (READ)
// 004b0e0f: MOV dword ptr [EBX + 0x118],EAX
// 004b0e15: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x1c] (READ)
// 004b0e1c: MOV dword ptr [EBX + 0x11c],EAX
// 004b0e22: ADD ESP,0x8
// 004b0e25: FCOMP double ptr [EBX + 0x118]
// 004b0e2b: FNSTSW AX
// 004b0e2d: SAHF
// 004b0e2e: JBE 0x004b0e7d
//   XREF to: 004b0e7d (CONDITIONAL_JUMP)
// 004b0e30: TEST ESI,ESI
//   Label: LAB_004b0e30
// 004b0e32: JZ 0x004b0ebe
//   XREF to: 004b0ebe (CONDITIONAL_JUMP)
// 004b0e38: MOV EAX,dword ptr [ESP + 0x158]
//   Label: LAB_004b0e38
//   XREF to: Stack[-0x18] (READ)
// 004b0e3f: MOV EDX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x14] (READ)
// 004b0e46: ADD EBX,0x120
// 004b0e4c: ADD EAX,0x120
// 004b0e51: INC EDX
// 004b0e52: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004b0e59: MOV dword ptr [ESP + 0x15c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004b0e60: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_004b0e60
//   XREF to: Stack[0x4] (READ)
// 004b0e63: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x14] (READ)
// 004b0e6a: CMP EAX,dword ptr [ESI + 0x3ac8]
// 004b0e70: JL 0x004b0dec
//   XREF to: 004b0dec (CONDITIONAL_JUMP)
// 004b0e76: MOV ESP,EBP
//   Label: LAB_004b0e76
// 004b0e78: POP EBP
// 004b0e79: POP EDI
// 004b0e7a: POP ESI
// 004b0e7b: POP EBX
// 004b0e7c: RET
// 004b0e7d: MOV EAX,ESP
//   Label: LAB_004b0e7d
// 004b0e7f: PUSH EAX
// 004b0e80: CALL sound_sndmain.cpp_FUN_005a8480
//   XREF to: 005a8480 (UNCONDITIONAL_CALL)
// 004b0e85: ADD ESP,0x4
// 004b0e88: MOV EAX,ESP
// 004b0e8a: PUSH EAX
// 004b0e8b: MOV EDX,dword ptr [EBX]
// 004b0e8d: PUSH EDX
// 004b0e8e: CALL sound_sndmain.cpp_getSfxSampleInfo_FUN_005a96e0
//   XREF to: 005a96e0 (UNCONDITIONAL_CALL)
// 004b0e93: ADD ESP,0x8
// 004b0e96: TEST EAX,EAX
// 004b0e98: JZ 0x004b0e30
//   XREF to: 004b0e30 (CONDITIONAL_JUMP)
// 004b0e9a: MOV ESI,ESP
// 004b0e9c: LEA EDI,[EBX + 0x18]
// 004b0e9f: PUSH EDI
// 004b0ea0: MOV AL,byte ptr [ESI]
//   Label: LAB_004b0ea0
//   XREF to: Stack[-0x170] (DATA)
// 004b0ea2: MOV byte ptr [EDI],AL
// 004b0ea4: CMP AL,0x0
// 004b0ea6: JZ 0x004b0eb8
//   XREF to: 004b0eb8 (CONDITIONAL_JUMP)
// 004b0ea8: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x16f] (READ)
// 004b0eab: ADD ESI,0x2
// 004b0eae: MOV byte ptr [EDI + 0x1],AL
// 004b0eb1: ADD EDI,0x2
// 004b0eb4: CMP AL,0x0
// 004b0eb6: JNZ 0x004b0ea0
//   XREF to: 004b0ea0 (CONDITIONAL_JUMP)
// 004b0eb8: POP EDI
//   Label: LAB_004b0eb8
// 004b0eb9: JMP 0x004b0e38
//   XREF to: 004b0e38 (UNCONDITIONAL_JUMP)
// 004b0ebe: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004b0ebe
//   XREF to: Stack[0x4] (READ)
// 004b0ec1: MOV ECX,dword ptr [EAX + 0x3ac8]
// 004b0ec7: DEC ECX
// 004b0ec8: MOV ESI,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x14] (READ)
// 004b0ecf: MOV dword ptr [EAX + 0x3ac8],ECX
// 004b0ed5: MOV EAX,ECX
// 004b0ed7: SUB EAX,ESI
// 004b0ed9: IMUL EAX,EAX,0x120
// 004b0edf: PUSH EAX
// 004b0ee0: MOV EDI,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x18] (READ)
// 004b0ee7: PUSH EDI
// 004b0ee8: PUSH EBX
// 004b0ee9: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b0eee: ADD ESP,0xc
// 004b0ef1: JMP 0x004b0e60
//   XREF to: 004b0e60 (UNCONDITIONAL_JUMP)

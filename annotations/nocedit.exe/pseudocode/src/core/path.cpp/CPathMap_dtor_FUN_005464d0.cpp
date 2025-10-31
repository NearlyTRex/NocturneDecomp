// Name: core_path.cpp_CPathMap_dtor_FUN_005464d0
// Address: 005464d0
// Address Range: [[005464d0, 00546551]]
// Convention: __cdecl
// Signature: CPathMap * core_path.cpp_CPathMap_dtor_FUN_005464d0(CPathMap * this_ptr)
// Cross-references:
//   core_hero.cpp_CHero_dtor_FUN_004f2470 (004f2470) at 004f24ae [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4450 (004f4450) at 004f4473 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f6b60 (004f6b60) at 004f6b79 [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_FUN_004f7cb0 (004f7cb0) at 004f7cc9 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_dtor_FUN_004f4700 (004f4700) at 004f4719 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_dtor_FUN_00545c10 (00545c10) at 00545c7a [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CBassPlayer_dtor_FUN_005da610 (005da610) at 005da629 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CDrummer_dtor_FUN_005da540 (005da540) at 005da559 [UNCONDITIONAL_CALL]
// Globals:
//   int g_PathMapCount
//   CPathMap*[200] g_PathMapList
//   undefined4 DAT_030c3ac0
//   undefined4 DAT_030c3ac4
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_005464d0(CPathMap *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_PathMapCount) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (this_ptr == *(CPathMap **)((int)g_PathMapList + iVar2)) {
        g_PathMapCount = g_PathMapCount + -1;
        crt_string_c_memmove_FUN_005fe5e0
                  ((void *)((int)g_PathMapList + iVar2),(void *)((int)g_PathMapList + iVar2 + 4),
                   (g_PathMapCount - iVar3) * 4);
        g_PathMapList[g_PathMapCount] = (CPathMap *)0x0;
        return this_ptr;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (SBORROW4(iVar1,g_PathMapCount * 4) != iVar1 + g_PathMapCount * -4 < 0);
  }
  return this_ptr;
}


// Assembly code:
// 005464d0: PUSH EBX
//   Label: core_path.cpp_CPathMap_dtor_FUN_005464d0
// 005464d1: PUSH ESI
// 005464d2: PUSH EDI
// 005464d3: PUSH EBP
// 005464d4: MOV EDI,dword ptr [0x030c3ab8]
//   XREF to: 030c3ab8 (READ)
// 005464da: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005464de: XOR ECX,ECX
// 005464e0: TEST EDI,EDI
// 005464e2: JLE 0x00546501
//   XREF to: 00546501 (CONDITIONAL_JUMP)
// 005464e4: LEA EBX,[EDI*0x4 + 0x0]
// 005464eb: XOR EAX,EAX
// 005464ed: MOV EBP,dword ptr [EAX + 0x30c3abc]
//   Label: LAB_005464ed
//   XREF to: 030c3abc (READ)
//   XREF to: 030c3ac0 (READ)
// 005464f3: LEA EDX,[EAX + 0x4]
// 005464f6: CMP ESI,EBP
// 005464f8: JZ 0x0054650e
//   XREF to: 0054650e (CONDITIONAL_JUMP)
// 005464fa: MOV EAX,EDX
// 005464fc: INC ECX
// 005464fd: CMP EDX,EBX
// 005464ff: JL 0x005464ed
//   XREF to: 005464ed (CONDITIONAL_JUMP)
// 00546501: MOV EAX,ESI
//   Label: LAB_00546501
// 00546503: MOV dword ptr [0x030c3ab8],EDI
//   XREF to: 030c3ab8 (WRITE)
// 00546509: POP EBP
// 0054650a: POP EDI
// 0054650b: POP ESI
// 0054650c: POP EBX
// 0054650d: RET
// 0054650e: DEC EDI
//   Label: LAB_0054650e
// 0054650f: MOV EBX,EDI
// 00546511: SUB EBX,ECX
// 00546513: LEA ECX,[EBX*0x4 + 0x0]
// 0054651a: PUSH ECX
// 0054651b: ADD EDX,0x30c3abc
//   XREF to: 030c3abc (DATA)
// 00546521: PUSH EDX
//   XREF to: 030c3ac4 (DATA)
// 00546522: ADD EAX,0x30c3abc
//   XREF to: 030c3abc (DATA)
// 00546527: PUSH EAX
//   XREF to: 030c3ac0 (DATA)
// 00546528: MOV dword ptr [0x030c3ab8],EDI
//   XREF to: 030c3ab8 (WRITE)
// 0054652e: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00546533: MOV EDI,dword ptr [0x030c3ab8]
//   XREF to: 030c3ab8 (READ)
// 00546539: XOR EAX,EAX
// 0054653b: ADD ESP,0xc
// 0054653e: MOV dword ptr [EDI*0x4 + 0x30c3abc],EAX
//   XREF to: 030c3abc (DATA)
// 00546545: MOV EAX,ESI
// 00546547: MOV dword ptr [0x030c3ab8],EDI
//   XREF to: 030c3ab8 (WRITE)
// 0054654d: POP EBP
// 0054654e: POP EDI
// 0054654f: POP ESI
// 00546550: POP EBX
// 00546551: RET

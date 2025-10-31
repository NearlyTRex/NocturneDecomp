// Name: core_script.cpp_FUN_00564500
// Address: 00564500
// Address Range: [[00564500, 0056455d]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00564500()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565a55 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564bd0 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005645d0 (005645d0) at 005645e1 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd48
//   undefined4 DAT_0310fd4c
//   undefined4 DAT_0310fd50
//   undefined4 DAT_031141c0
//   undefined4 DAT_031141c4
//   undefined4 DAT_031141c8
//   undefined4 DAT_031141cc

#include "nocturne.h"

void core_script_cpp_FUN_00564500(void)

{
  if ((DAT_0310fd4c < 0) || (DAT_0310fd50 < 0)) {
    DAT_031141cc = -1;
    DAT_031141c8 = -1;
    DAT_031141c0 = -1;
    DAT_031141c4 = -1;
  }
  else {
    DAT_031141cc = DAT_0310fd48;
    DAT_031141c8 = DAT_0310fd44;
    DAT_031141c0 = DAT_0310fd4c;
    DAT_031141c4 = DAT_0310fd50;
    if (((DAT_0310fd48 <= DAT_0310fd50) &&
        (DAT_031141cc = DAT_0310fd50, DAT_031141c8 = DAT_0310fd4c, DAT_031141c0 = DAT_0310fd44,
        DAT_031141c4 = DAT_0310fd48, DAT_0310fd50 <= DAT_0310fd48)) &&
       (DAT_031141c4 = DAT_0310fd50, DAT_0310fd4c < DAT_0310fd44)) {
      DAT_031141c8 = DAT_0310fd44;
      DAT_031141c0 = DAT_0310fd4c;
    }
  }
  return;
}


// Assembly code:
// 00564500: PUSH EBX
//   Label: core_script.cpp_FUN_00564500
// 00564501: PUSH ESI
// 00564502: PUSH EDI
// 00564503: PUSH EBP
// 00564504: MOV ESI,dword ptr [0x0310fd50]
//   XREF to: 0310fd50 (READ)
// 0056450a: MOV EDI,dword ptr [0x0310fd4c]
//   XREF to: 0310fd4c (READ)
// 00564510: TEST EDI,EDI
// 00564512: JL 0x0056449b
//   XREF to: 0056449b (CONDITIONAL_JUMP)
// 00564514: TEST ESI,ESI
// 00564516: JL 0x0056449b
//   XREF to: 0056449b (CONDITIONAL_JUMP)
// 00564518: MOV ECX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 0056451e: CMP ESI,ECX
// 00564520: JL 0x005644ab
//   XREF to: 005644ab (CONDITIONAL_JUMP)
// 00564522: JG 0x005644ba
//   XREF to: 005644ba (CONDITIONAL_JUMP)
// 00564524: MOV EAX,[0x0310fd44]
//   XREF to: 0310fd44 (READ)
// 00564529: MOV EBP,ESI
// 0056452b: MOV ECX,ESI
// 0056452d: CMP EDI,EAX
// 0056452f: JGE 0x005644cb
//   XREF to: 005644cb (CONDITIONAL_JUMP)
// 00564531: MOV EDX,EAX
// 00564533: MOV EBX,EDI
// 00564535: MOV dword ptr [0x031141c4],EBP
//   Label: LAB_00564535
//   XREF to: 031141c4 (WRITE)
// 0056453b: MOV dword ptr [0x0310fd4c],EDI
//   XREF to: 0310fd4c (WRITE)
// 00564541: MOV dword ptr [0x0310fd50],ESI
//   XREF to: 0310fd50 (WRITE)
// 00564547: MOV dword ptr [0x031141c0],EBX
//   XREF to: 031141c0 (WRITE)
// 0056454d: MOV dword ptr [0x031141cc],ECX
//   XREF to: 031141cc (WRITE)
// 00564553: MOV dword ptr [0x031141c8],EDX
//   XREF to: 031141c8 (WRITE)
// 00564559: POP EBP
// 0056455a: POP EDI
// 0056455b: POP ESI
// 0056455c: POP EBX
// 0056455d: RET

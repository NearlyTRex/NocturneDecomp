// Name: core_lever.cpp_FUN_00505080
// Address: 00505080
// Address Range: [[00505080, 005050f6]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00505080()
// Cross-references:
//   core_hero.cpp_FUN_004f2f50 (004f2f50) at 004f3055 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10

#include "nocturne.h"

/* Signature: undefined1 actors_other_lever.cpp_FUN_00505080(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_lever_cpp_FUN_00505080(void)

{
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_20;
  float fStack_14;
  
  if (in_stack_00000004[5].vtable != (CDemonActor_vtable *)&DAT_00000002) {
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              (in_stack_00000004,&local_20,in_stack_00000008);
    if ((in_stack_00000004[5].vtable != (CDemonActor_vtable *)0x0) || (fStack_14 <= 0.0)) {
      if ((in_stack_00000004[5].vtable == (CDemonActor_vtable *)&DAT_00000001) && (fStack_14 < 0.0))
      {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 00505080: PUSH EBX
//   Label: core_lever.cpp_FUN_00505080
// 00505081: PUSH ESI
// 00505082: PUSH EDI
// 00505083: PUSH EBP
// 00505084: MOV EBP,ESP
// 00505086: SUB ESP,0xc
// 00505089: AND ESP,0xfffffff8
// 0050508c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050508f: CMP dword ptr [EBX + 0x80c],0x2
// 00505096: JNZ 0x005050a4
//   XREF to: 005050a4 (CONDITIONAL_JUMP)
// 00505098: MOV EAX,0x1
//   Label: LAB_00505098
// 0050509d: MOV ESP,EBP
// 0050509f: POP EBP
// 005050a0: POP EDI
// 005050a1: POP ESI
// 005050a2: POP EBX
// 005050a3: RET
// 005050a4: MOV ECX,dword ptr [EBP + 0x18]
//   Label: LAB_005050a4
//   XREF to: Stack[0x8] (READ)
// 005050a7: PUSH ECX
// 005050a8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x20] (DATA)
// 005050ac: PUSH EAX
// 005050ad: PUSH EBX
// 005050ae: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005050b3: MOV ESI,dword ptr [EBX + 0x80c]
// 005050b9: ADD ESP,0xc
// 005050bc: TEST ESI,ESI
// 005050be: JNZ 0x005050cd
//   XREF to: 005050cd (CONDITIONAL_JUMP)
// 005050c0: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005050c4: FLDZ
// 005050c6: FCOMPP
// 005050c8: FNSTSW AX
// 005050ca: SAHF
// 005050cb: JC 0x00505098
//   XREF to: 00505098 (CONDITIONAL_JUMP)
// 005050cd: MOV EDI,dword ptr [EBX + 0x80c]
//   Label: LAB_005050cd
// 005050d3: CMP EDI,0x1
// 005050d6: JNZ 0x005050ee
//   XREF to: 005050ee (CONDITIONAL_JUMP)
// 005050d8: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005050dc: FLDZ
// 005050de: FCOMPP
// 005050e0: FNSTSW AX
// 005050e2: SAHF
// 005050e3: JBE 0x005050ee
//   XREF to: 005050ee (CONDITIONAL_JUMP)
// 005050e5: MOV EAX,EDI
// 005050e7: MOV ESP,EBP
// 005050e9: POP EBP
// 005050ea: POP EDI
// 005050eb: POP ESI
// 005050ec: POP EBX
// 005050ed: RET
// 005050ee: XOR EAX,EAX
//   Label: LAB_005050ee
// 005050f0: MOV ESP,EBP
// 005050f2: POP EBP
// 005050f3: POP EDI
// 005050f4: POP ESI
// 005050f5: POP EBX
// 005050f6: RET

// Name: core_conveyor.cpp_FUN_00441df0
// Address: 00441df0
// Address Range: [[00441df0, 00441f3a]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_00441df0()
// Globals:
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_02d05310
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
//   undefined4 DAT_032613d8
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0

#include "nocturne.h"

/* Signature: undefined1 actors_other_conveyor.cpp_FUN_00441df0(undefined4 param_1, undefined4
   param_2) */

void core_conveyor_cpp_FUN_00441df0(void)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CDemonActor *in_stack_00000004;
  float in_stack_00000014;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar1 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                    (g_CEventListPtr,in_stack_00000004[5].create_event + 0x14);
  if (iVar1 != 0) {
    in_stack_00000004[5].metadata.vtable = (CDemonActor_vtable *)&DAT_00000001;
  }
  iVar1 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                    (g_CEventListPtr,(char *)&in_stack_00000004[5].field_236.y);
  if (iVar1 == 0) {
    if (in_stack_00000004[5].metadata.vtable != (CDemonActor_vtable *)0x0) {
      iVar3 = 0;
      iVar1 = 0;
      while (iVar3 < (int)g_CDemonSetPtr->actor_list_ptr) {
        actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar1);
        if (in_stack_00000004 == (CDemonActor *)actor_ptr->field11_0xdc) {
          if (((CDemonActor *)actor_ptr->field11_0xdc)[6].actor_name[0] == '\0') {
LAB_00441e9d:
            core_actor_cpp_CDemonActor_FUN_00408e80(in_stack_00000004);
            local_18 = local_28 * in_stack_00000014;
            local_14 = local_20 * in_stack_00000014;
            if (&actor_ptr->field_224 != (CVector3f *)&local_18) {
              (actor_ptr->field_224).x = local_18;
              (actor_ptr->field_224).y = local_14;
              (actor_ptr->field_224).z = local_1c * in_stack_00000014;
            }
            (actor_ptr->field_236).z = 0.0;
            (actor_ptr->field_236).y = 0.0;
            (actor_ptr->field_236).x = 0.0;
            iVar3 = iVar3 + 1;
            iVar1 = iVar1 + 4;
          }
          else {
            iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,in_stack_00000004[6].actor_name)
            ;
            if (iVar2 != 0) goto LAB_00441e9d;
            iVar3 = iVar3 + 1;
            iVar1 = iVar1 + 4;
          }
        }
        else {
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 4;
        }
      }
    }
  }
  else {
    in_stack_00000004[5].metadata.vtable = (CDemonActor_vtable *)0x0;
  }
  return;
}


// Assembly code:
// 00441df0: PUSH EBX
//   Label: core_conveyor.cpp_FUN_00441df0
// 00441df1: PUSH ESI
// 00441df2: PUSH EDI
// 00441df3: PUSH EBP
// 00441df4: SUB ESP,0x20
// 00441df7: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00441dfb: LEA EAX,[ESI + 0x744]
// 00441e01: PUSH EAX
// 00441e02: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00441e08: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 00441e09: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00441e0e: ADD ESP,0x8
// 00441e11: TEST EAX,EAX
// 00441e13: JZ 0x00441e1f
//   XREF to: 00441e1f (CONDITIONAL_JUMP)
// 00441e15: MOV dword ptr [ESI + 0x80c],0x1
// 00441e1f: LEA EAX,[ESI + 0x7a8]
//   Label: LAB_00441e1f
// 00441e25: PUSH EAX
// 00441e26: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00441e2c: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 00441e2d: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00441e32: ADD ESP,0x8
// 00441e35: TEST EAX,EAX
// 00441e37: JNZ 0x00441e7e
//   XREF to: 00441e7e (CONDITIONAL_JUMP)
// 00441e39: CMP dword ptr [ESI + 0x80c],0x0
// 00441e40: JZ 0x00441e88
//   XREF to: 00441e88 (CONDITIONAL_JUMP)
// 00441e42: LEA EAX,[ESI + 0x738]
// 00441e48: XOR EDI,EDI
// 00441e4a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00441e4e: LEA EAX,[ESI + 0x810]
// 00441e54: XOR EBP,EBP
// 00441e56: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00441e5a: MOV EAX,[0x006810c8]
//   Label: LAB_00441e5a
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 00441e5f: CMP EDI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 00441e65: JGE 0x00441e88
//   XREF to: 00441e88 (CONDITIONAL_JUMP)
// 00441e67: MOV EBX,dword ptr [EAX + EBP*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
//   XREF to: 032613d4 (READ)
//   XREF to: 032613d8 (READ)
// 00441e6e: MOV ECX,dword ptr [EBX + 0xdc]
// 00441e74: CMP ESI,ECX
// 00441e76: JZ 0x00441e90
//   XREF to: 00441e90 (CONDITIONAL_JUMP)
// 00441e78: INC EDI
// 00441e79: ADD EBP,0x4
// 00441e7c: JMP 0x00441e5a
//   XREF to: 00441e5a (UNCONDITIONAL_JUMP)
// 00441e7e: MOV dword ptr [ESI + 0x80c],0x0
//   Label: LAB_00441e7e
// 00441e88: ADD ESP,0x20
//   Label: LAB_00441e88
// 00441e8b: POP EBP
// 00441e8c: POP EDI
// 00441e8d: POP ESI
// 00441e8e: POP EBX
// 00441e8f: RET
// 00441e90: CMP byte ptr [ECX + 0x810],0x0
//   Label: LAB_00441e90
// 00441e97: JNZ 0x00441f1c
//   XREF to: 00441f1c (CONDITIONAL_JUMP)
// 00441e9d: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_00441e9d
//   XREF to: Stack[-0x18] (READ)
// 00441ea1: PUSH EDX
// 00441ea2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 00441ea6: PUSH EAX
// 00441ea7: PUSH ESI
// 00441ea8: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 00441ead: ADD ESP,0xc
// 00441eb0: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 00441eb4: FLD float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00441eb7: FMUL ST1
// 00441eb9: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 00441ebd: FMUL ST2
// 00441ebf: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 00441ec3: FMULP ST3
// 00441ec5: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 00441ec9: LEA EDX,[EBX + 0xe0]
// 00441ecf: FXCH
// 00441ed1: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 00441ed5: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00441ed9: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (WRITE)
// 00441edd: CMP EDX,EAX
// 00441edf: JZ 0x00441ef5
//   XREF to: 00441ef5 (CONDITIONAL_JUMP)
// 00441ee1: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 00441ee5: MOV dword ptr [EDX],EAX
// 00441ee7: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 00441eeb: MOV dword ptr [EDX + 0x4],EAX
// 00441eee: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 00441ef2: MOV dword ptr [EDX + 0x8],EAX
// 00441ef5: MOV dword ptr [EBX + 0xf4],0x0
//   Label: LAB_00441ef5
// 00441eff: MOV dword ptr [EBX + 0xf0],0x0
// 00441f09: MOV dword ptr [EBX + 0xec],0x0
// 00441f13: INC EDI
// 00441f14: ADD EBP,0x4
// 00441f17: JMP 0x00441e5a
//   XREF to: 00441e5a (UNCONDITIONAL_JUMP)
// 00441f1c: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_00441f1c
//   XREF to: Stack[-0x14] (READ)
// 00441f20: PUSH EAX
// 00441f21: PUSH EBX
// 00441f22: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00441f27: ADD ESP,0x8
// 00441f2a: TEST EAX,EAX
// 00441f2c: JNZ 0x00441e9d
//   XREF to: 00441e9d (CONDITIONAL_JUMP)
// 00441f32: INC EDI
// 00441f33: ADD EBP,0x4
// 00441f36: JMP 0x00441e5a
//   XREF to: 00441e5a (UNCONDITIONAL_JUMP)

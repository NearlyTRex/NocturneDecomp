// Name: engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
// Address: 004b2f90
// Address Range: [[004b2f90, 004b3118]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90(int * user_choice_ptr, char * dialog_message)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3c0b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004baad1 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9ade [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_checkFileOverwriteCondition_FUN_004b3120 (004b3120) at 004b31c1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Y_es_006264d7
//   TerminatedCString s_Yes_to_A_ll_006264dd
//   TerminatedCString s_N_o_006264ea
//   TerminatedCString s_N_o_to_all_006264ef
//   TerminatedCString s_Cancel_006264fb
// Function calls:
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
          (int *user_choice_ptr,char *dialog_message)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_0000002c;
  CStrList_vtable *in_stack_fffffc78;
  CStrList_vtable *in_stack_fffffc7c;
  CStrList_vtable *in_stack_fffffc80;
  CStrList_vtable *in_stack_fffffc84;
  uint in_stack_fffffc88;
  
  iVar1 = *(int *)dialog_message;
  if (iVar1 == 1) {
    iVar1 = 1;
  }
  else if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    if (iVar1 != 3) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc4c);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc50,"[Y]es");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffffc54,"Yes to [A]ll");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc58,"[N]o");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffffc5c,"N[o] to all");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc60,"Cancel");
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540((CPickList *)&stack0xfffffc64,0,0x15);
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540((CPickList *)&stack0xfffffc68,1,0x1e);
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540((CPickList *)&stack0xfffffc6c,2,0x31);
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540((CPickList *)&stack0xfffffc70,3,0x18);
      iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffffc74,in_stack_0000002c,*(int *)dialog_message,0);
      *(int *)dialog_message = iVar1;
      if (iVar1 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffffc78,0,(uint)in_stack_fffffc78,(uint)in_stack_fffffc7c,
                   (uint)in_stack_fffffc80,(uint)in_stack_fffffc84,in_stack_fffffc88);
        return 1;
      }
      if (iVar1 != 1) {
        if ((iVar1 != 2) && (iVar1 != 3)) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)&stack0xfffffc78,0,(uint)in_stack_fffffc78,(uint)in_stack_fffffc7c
                     ,(uint)in_stack_fffffc80,(uint)in_stack_fffffc84,in_stack_fffffc88);
          return -1;
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffffc78,0,(uint)in_stack_fffffc78,(uint)in_stack_fffffc7c,
                   (uint)in_stack_fffffc80,(uint)in_stack_fffffc84,in_stack_fffffc88);
        return 0;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffc78,0,(uint)in_stack_fffffc78,(uint)in_stack_fffffc7c,
                 (uint)in_stack_fffffc80,(uint)in_stack_fffffc84,in_stack_fffffc88);
      return 1;
    }
    iVar1 = 0;
  }
  return iVar1;
}


// Assembly code:
// 004b2f90: PUSH EBX
//   Label: engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
// 004b2f91: PUSH EDI
// 004b2f92: PUSH EBP
// 004b2f93: SUB ESP,0x3a8
// 004b2f99: MOV EBX,dword ptr [ESP + 0x3bc]
//   XREF to: Stack[0x8] (READ)
// 004b2fa0: MOV EDX,dword ptr [EBX]
// 004b2fa2: CMP EDX,0x1
// 004b2fa5: JZ 0x004b2fbe
//   XREF to: 004b2fbe (CONDITIONAL_JUMP)
// 004b2fa7: TEST EDX,EDX
// 004b2fa9: JL 0x004b2fc2
//   XREF to: 004b2fc2 (CONDITIONAL_JUMP)
// 004b2fab: CMP EDX,0x3
// 004b2fae: JNZ 0x004b2fc9
//   XREF to: 004b2fc9 (CONDITIONAL_JUMP)
// 004b2fb0: XOR EBX,EBX
// 004b2fb2: MOV EAX,EBX
//   Label: LAB_004b2fb2
// 004b2fb4: ADD ESP,0x3a8
// 004b2fba: POP EBP
// 004b2fbb: POP EDI
// 004b2fbc: POP EBX
// 004b2fbd: RET
// 004b2fbe: MOV EBX,EDX
//   Label: LAB_004b2fbe
// 004b2fc0: JMP 0x004b2fb2
//   XREF to: 004b2fb2 (UNCONDITIONAL_JUMP)
// 004b2fc2: MOV EBX,0xffffffff
//   Label: LAB_004b2fc2
// 004b2fc7: JMP 0x004b2fb2
//   XREF to: 004b2fb2 (UNCONDITIONAL_JUMP)
// 004b2fc9: MOV EAX,ESP
//   Label: LAB_004b2fc9
// 004b2fcb: PUSH EAX
// 004b2fcc: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004b2fd1: ADD ESP,0x4
// 004b2fd4: PUSH 0x6264d7
//   XREF to: 006264d7 (DATA)
// 004b2fd9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b2fdd: PUSH EAX
// 004b2fde: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b2fe3: ADD ESP,0x8
// 004b2fe6: PUSH 0x6264dd
//   XREF to: 006264dd (DATA)
// 004b2feb: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b2fef: PUSH EAX
// 004b2ff0: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b2ff5: ADD ESP,0x8
// 004b2ff8: PUSH 0x6264ea
//   XREF to: 006264ea (DATA)
// 004b2ffd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b3001: PUSH EAX
// 004b3002: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b3007: ADD ESP,0x8
// 004b300a: PUSH 0x6264ef
//   XREF to: 006264ef (DATA)
// 004b300f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b3013: PUSH EAX
// 004b3014: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b3019: ADD ESP,0x8
// 004b301c: PUSH 0x6264fb
//   XREF to: 006264fb (DATA)
// 004b3021: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b3025: PUSH EAX
// 004b3026: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b302b: ADD ESP,0x8
// 004b302e: PUSH 0x15
// 004b3030: PUSH 0x0
// 004b3032: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b3036: PUSH EAX
// 004b3037: CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
//   XREF to: 004a5540 (UNCONDITIONAL_CALL)
// 004b303c: ADD ESP,0xc
// 004b303f: PUSH 0x1e
// 004b3041: PUSH 0x1
// 004b3043: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b3047: PUSH EAX
// 004b3048: CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
//   XREF to: 004a5540 (UNCONDITIONAL_CALL)
// 004b304d: ADD ESP,0xc
// 004b3050: PUSH 0x31
// 004b3052: PUSH 0x2
// 004b3054: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b3058: PUSH EAX
// 004b3059: CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
//   XREF to: 004a5540 (UNCONDITIONAL_CALL)
// 004b305e: ADD ESP,0xc
// 004b3061: PUSH 0x18
// 004b3063: PUSH 0x3
// 004b3065: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b3069: PUSH EAX
// 004b306a: CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
//   XREF to: 004a5540 (UNCONDITIONAL_CALL)
// 004b306f: ADD ESP,0xc
// 004b3072: PUSH 0x0
// 004b3074: MOV EDI,dword ptr [EBX]
// 004b3076: PUSH EDI
// 004b3077: MOV EBP,dword ptr [ESP + 0x3c0]
//   XREF to: Stack[0x4] (READ)
// 004b307e: PUSH EBP
// 004b307f: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b3083: PUSH EAX
// 004b3084: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004b3089: ADD ESP,0x10
// 004b308c: MOV dword ptr [EBX],EAX
// 004b308e: TEST EAX,EAX
// 004b3090: JZ 0x004b30bd
//   XREF to: 004b30bd (CONDITIONAL_JUMP)
// 004b3092: CMP EAX,0x1
// 004b3095: JZ 0x004b30dc
//   XREF to: 004b30dc (CONDITIONAL_JUMP)
// 004b3097: CMP EAX,0x2
// 004b309a: JZ 0x004b30a1
//   XREF to: 004b30a1 (CONDITIONAL_JUMP)
// 004b309c: CMP EAX,0x3
// 004b309f: JNZ 0x004b30f9
//   XREF to: 004b30f9 (CONDITIONAL_JUMP)
// 004b30a1: XOR EBX,EBX
//   Label: LAB_004b30a1
// 004b30a3: PUSH EBX
// 004b30a4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b30a8: PUSH EAX
// 004b30a9: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b30ae: ADD ESP,0x8
// 004b30b1: MOV EAX,EBX
// 004b30b3: ADD ESP,0x3a8
// 004b30b9: POP EBP
// 004b30ba: POP EDI
// 004b30bb: POP EBX
// 004b30bc: RET
// 004b30bd: PUSH EAX
//   Label: LAB_004b30bd
// 004b30be: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b30c2: PUSH EAX
// 004b30c3: MOV EBX,0x1
// 004b30c8: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b30cd: ADD ESP,0x8
// 004b30d0: MOV EAX,EBX
// 004b30d2: ADD ESP,0x3a8
// 004b30d8: POP EBP
// 004b30d9: POP EDI
// 004b30da: POP EBX
// 004b30db: RET
// 004b30dc: PUSH 0x0
//   Label: LAB_004b30dc
// 004b30de: MOV EBX,EAX
// 004b30e0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b30e4: PUSH EAX
// 004b30e5: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b30ea: ADD ESP,0x8
// 004b30ed: MOV EAX,EBX
// 004b30ef: ADD ESP,0x3a8
// 004b30f5: POP EBP
// 004b30f6: POP EDI
// 004b30f7: POP EBX
// 004b30f8: RET
// 004b30f9: PUSH 0x0
//   Label: LAB_004b30f9
// 004b30fb: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 004b30ff: PUSH EAX
// 004b3100: MOV EBX,0xffffffff
// 004b3105: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b310a: ADD ESP,0x8
// 004b310d: MOV EAX,EBX
// 004b310f: ADD ESP,0x3a8
// 004b3115: POP EBP
// 004b3116: POP EDI
// 004b3117: POP EBX
// 004b3118: RET

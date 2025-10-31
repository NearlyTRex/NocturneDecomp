// Name: engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
// Address: 004b3f50
// Address Range: [[004b3f50, 004b41b3]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem * this_ptr, char * filename_out, char * out_buffer, char * wildcard_pattern, char * dialog_title)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4273 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0 (004b41c0) at 004b41e6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004baf44 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc2fb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_You_do_not_currently_hav_00626a04
//   TerminatedCString s_You_currently_don_t_have_00626a2d
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   SVersionControlSession g_VersionControlSession
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
//   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
          (CCheckOutItem *this_ptr,char *filename_out,char *out_buffer,char *wildcard_pattern,
          char *dialog_title)

{
  char cVar1;
  char *pattern;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char *pcVar4;
  int unaff_EDI;
  char *pcVar5;
  int unaff_retaddr;
  char *in_stack_0000001c;
  int in_stack_fffffc4c;
  char **in_stack_fffffc50;
  CStrList_vtable *in_stack_fffffc54;
  CStrList_vtable *in_stack_fffffc58;
  CStrList_vtable *in_stack_fffffc5c;
  CStrList_vtable *in_stack_fffffc60;
  uint in_stack_fffffc64;
  int local_14;
  
  pattern = dialog_title;
  pcVar5 = out_buffer;
  pcVar4 = filename_out;
  iVar2 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar2 == 0) {
    return 0;
  }
  local_14 = 0;
  iVar2 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890((CCheckOutList *)&local_14);
  if (iVar2 == 0) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0xfffffff0);
    return 0;
  }
  if (pcVar4 != (char *)0x0) {
    iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                      ((CCheckOutList *)&stack0xfffffff0,pcVar4);
    if (((-1 < iVar2) &&
        (iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                           ((char *)(iVar2 * 0x168 + unaff_retaddr + 0x104),
                            g_VersionControlSession.primary_username), iVar3 != 0)) || (iVar2 < 0))
    {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You do not currently have %s checked out");
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&this_ptr);
      return 0;
    }
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
LAB_004b3ff0:
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000000);
    return 1;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc48);
  if (0 < unaff_EDI) {
    pcVar4 = (char *)0x0;
    iVar2 = 0;
    do {
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                        (pcVar4 + unaff_ESI + 0x104,g_VersionControlSession.primary_username);
      if (iVar3 == 0) {
        iVar3 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20(pattern,pcVar4,0);
        if (iVar3 != 0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)&stack0xfffffc4c,pcVar4 + unaff_EDI);
        }
      }
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 0x168;
    } while (iVar2 < unaff_EDI);
  }
  if (in_stack_fffffc4c < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"You currently don't have any files checked out.");
  }
  else {
    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffffc4c,in_stack_0000001c,-1,0);
    if (-1 < iVar2) {
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)&stack0xfffffc50,iVar2);
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffc54,0,(uint)in_stack_fffffc54,(uint)in_stack_fffffc58,
                 (uint)in_stack_fffffc5c,(uint)in_stack_fffffc60,in_stack_fffffc64);
      goto LAB_004b3ff0;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc50,0,(uint)in_stack_fffffc50,(uint)in_stack_fffffc54,
             (uint)in_stack_fffffc58,(uint)in_stack_fffffc5c,(uint)in_stack_fffffc60);
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0xfffffffc);
  return 0;
}


// Assembly code:
// 004b3f50: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
// 004b3f51: PUSH ESI
// 004b3f52: PUSH EDI
// 004b3f53: PUSH EBP
// 004b3f54: SUB ESP,0x3b0
// 004b3f5a: MOV EDI,dword ptr [ESP + 0x3c8]
//   XREF to: Stack[0x8] (READ)
// 004b3f61: MOV EBP,dword ptr [ESP + 0x3cc]
//   XREF to: Stack[0xc] (READ)
// 004b3f68: MOV EBX,dword ptr [ESP + 0x3d4]
//   XREF to: Stack[0x14] (READ)
// 004b3f6f: CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
//   XREF to: 004b1c00 (UNCONDITIONAL_CALL)
// 004b3f74: TEST EAX,EAX
// 004b3f76: JNZ 0x004b3f87
//   XREF to: 004b3f87 (CONDITIONAL_JUMP)
// 004b3f78: XOR EDI,EDI
// 004b3f7a: MOV EAX,EDI
// 004b3f7c: ADD ESP,0x3b0
// 004b3f82: POP EBP
// 004b3f83: POP EDI
// 004b3f84: POP ESI
// 004b3f85: POP EBX
// 004b3f86: RET
// 004b3f87: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_004b3f87
//   XREF to: Stack[-0x18] (DATA)
// 004b3f8e: XOR EDX,EDX
// 004b3f90: PUSH EAX
// 004b3f91: MOV dword ptr [ESP + 0x3ac],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004b3f98: MOV dword ptr [ESP + 0x3b0],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004b3f9f: CALL engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
//   XREF to: 004b2890 (UNCONDITIONAL_CALL)
// 004b3fa4: ADD ESP,0x4
// 004b3fa7: TEST EAX,EAX
// 004b3fa9: JZ 0x004b4012
//   XREF to: 004b4012 (CONDITIONAL_JUMP)
// 004b3fab: TEST EDI,EDI
// 004b3fad: JZ 0x004b4098
//   XREF to: 004b4098 (CONDITIONAL_JUMP)
// 004b3fb3: PUSH EDI
// 004b3fb4: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x18] (DATA)
// 004b3fbb: PUSH EAX
// 004b3fbc: CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
// 004b3fc1: ADD ESP,0x8
// 004b3fc4: MOV ESI,EAX
// 004b3fc6: TEST EAX,EAX
// 004b3fc8: JGE 0x004b4031
//   XREF to: 004b4031 (CONDITIONAL_JUMP)
// 004b3fca: TEST ESI,ESI
//   Label: LAB_004b3fca
// 004b3fcc: JL 0x004b4064
//   XREF to: 004b4064 (CONDITIONAL_JUMP)
// 004b3fd2: MOV ESI,EDI
// 004b3fd4: MOV EDI,EBP
// 004b3fd6: PUSH EDI
// 004b3fd7: MOV AL,byte ptr [ESI]
//   Label: LAB_004b3fd7
// 004b3fd9: MOV byte ptr [EDI],AL
// 004b3fdb: CMP AL,0x0
// 004b3fdd: JZ 0x004b3fef
//   XREF to: 004b3fef (CONDITIONAL_JUMP)
// 004b3fdf: MOV AL,byte ptr [ESI + 0x1]
// 004b3fe2: ADD ESI,0x2
// 004b3fe5: MOV byte ptr [EDI + 0x1],AL
// 004b3fe8: ADD EDI,0x2
// 004b3feb: CMP AL,0x0
// 004b3fed: JNZ 0x004b3fd7
//   XREF to: 004b3fd7 (CONDITIONAL_JUMP)
// 004b3fef: POP EDI
//   Label: LAB_004b3fef
// 004b3ff0: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_004b3ff0
//   XREF to: Stack[-0x18] (DATA)
// 004b3ff7: PUSH EAX
// 004b3ff8: MOV EDI,0x1
// 004b3ffd: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b4002: ADD ESP,0x4
// 004b4005: MOV EAX,EDI
// 004b4007: ADD ESP,0x3b0
// 004b400d: POP EBP
// 004b400e: POP EDI
// 004b400f: POP ESI
// 004b4010: POP EBX
// 004b4011: RET
// 004b4012: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_004b4012
//   XREF to: Stack[-0x18] (DATA)
// 004b4019: PUSH EAX
// 004b401a: XOR EDI,EDI
// 004b401c: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b4021: ADD ESP,0x4
// 004b4024: MOV EAX,EDI
// 004b4026: ADD ESP,0x3b0
// 004b402c: POP EBP
// 004b402d: POP EDI
// 004b402e: POP ESI
// 004b402f: POP EBX
// 004b4030: RET
// 004b4031: SHL EAX,0x2
//   Label: LAB_004b4031
// 004b4034: SUB EAX,ESI
// 004b4036: SHL EAX,0x3
// 004b4039: MOV EBX,EAX
// 004b403b: SHL EAX,0x4
// 004b403e: MOV EDX,dword ptr [ESP + 0x3ac]
//   XREF to: Stack[-0x14] (READ)
// 004b4045: SUB EAX,EBX
// 004b4047: ADD EAX,EDX
// 004b4049: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b404e: ADD EAX,0x104
// 004b4053: PUSH EAX
// 004b4054: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b4059: ADD ESP,0x8
// 004b405c: TEST EAX,EAX
// 004b405e: JZ 0x004b3fca
//   XREF to: 004b3fca (CONDITIONAL_JUMP)
// 004b4064: PUSH EDI
//   Label: LAB_004b4064
// 004b4065: PUSH 0x626a04
//   XREF to: 00626a04 (DATA)
// 004b406a: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4070: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b4071: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b4076: ADD ESP,0xc
// 004b4079: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x18] (DATA)
// 004b4080: PUSH EAX
// 004b4081: XOR EDI,EDI
// 004b4083: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b4088: ADD ESP,0x4
// 004b408b: MOV EAX,EDI
// 004b408d: ADD ESP,0x3b0
// 004b4093: POP EBP
// 004b4094: POP EDI
// 004b4095: POP ESI
// 004b4096: POP EBX
// 004b4097: RET
// 004b4098: MOV EAX,ESP
//   Label: LAB_004b4098
// 004b409a: PUSH EAX
// 004b409b: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004b40a0: ADD ESP,0x4
// 004b40a3: CMP dword ptr [ESP + 0x3a8],0x0
//   XREF to: Stack[-0x18] (READ)
// 004b40ab: JLE 0x004b4110
//   XREF to: 004b4110 (CONDITIONAL_JUMP)
// 004b40ad: XOR ESI,ESI
// 004b40af: MOV EAX,dword ptr [ESP + 0x3ac]
//   Label: LAB_004b40af
//   XREF to: Stack[-0x14] (READ)
// 004b40b6: ADD EAX,ESI
// 004b40b8: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b40bd: ADD EAX,0x104
// 004b40c2: PUSH EAX
// 004b40c3: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b40c8: ADD ESP,0x8
// 004b40cb: TEST EAX,EAX
// 004b40cd: JNZ 0x004b40fe
//   XREF to: 004b40fe (CONDITIONAL_JUMP)
// 004b40cf: PUSH EAX
// 004b40d0: MOV EAX,dword ptr [ESP + 0x3b0]
//   XREF to: Stack[-0x14] (READ)
// 004b40d7: ADD EAX,ESI
// 004b40d9: PUSH EAX
// 004b40da: PUSH EBX
// 004b40db: CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
//   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
// 004b40e0: ADD ESP,0xc
// 004b40e3: TEST EAX,EAX
// 004b40e5: JZ 0x004b40fe
//   XREF to: 004b40fe (CONDITIONAL_JUMP)
// 004b40e7: MOV EAX,dword ptr [ESP + 0x3ac]
//   XREF to: Stack[-0x14] (READ)
// 004b40ee: ADD EAX,ESI
// 004b40f0: PUSH EAX
// 004b40f1: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3c0] (DATA)
// 004b40f5: PUSH EAX
// 004b40f6: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b40fb: ADD ESP,0x8
// 004b40fe: MOV EAX,dword ptr [ESP + 0x3a8]
//   Label: LAB_004b40fe
//   XREF to: Stack[-0x18] (READ)
// 004b4105: INC EDI
// 004b4106: ADD ESI,0x168
// 004b410c: CMP EDI,EAX
// 004b410e: JL 0x004b40af
//   XREF to: 004b40af (CONDITIONAL_JUMP)
// 004b4110: CMP dword ptr [ESP],0x1
//   Label: LAB_004b4110
//   XREF to: Stack[-0x3c0] (DATA)
// 004b4114: JL 0x004b4173
//   XREF to: 004b4173 (CONDITIONAL_JUMP)
// 004b4116: PUSH 0x0
// 004b4118: PUSH -0x1
// 004b411a: MOV ECX,dword ptr [ESP + 0x3d8]
//   XREF to: Stack[0x10] (READ)
// 004b4121: PUSH ECX
// 004b4122: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x3c0] (DATA)
// 004b4126: PUSH EAX
// 004b4127: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004b412c: ADD ESP,0x10
// 004b412f: TEST EAX,EAX
// 004b4131: JL 0x004b4187
//   XREF to: 004b4187 (CONDITIONAL_JUMP)
// 004b4133: PUSH EAX
// 004b4134: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3c0] (DATA)
// 004b4138: PUSH EAX
// 004b4139: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004b413e: ADD ESP,0x8
// 004b4141: MOV EDI,EBP
// 004b4143: MOV ESI,EAX
// 004b4145: PUSH EDI
// 004b4146: MOV AL,byte ptr [ESI]
//   Label: LAB_004b4146
// 004b4148: MOV byte ptr [EDI],AL
// 004b414a: CMP AL,0x0
// 004b414c: JZ 0x004b415e
//   XREF to: 004b415e (CONDITIONAL_JUMP)
// 004b414e: MOV AL,byte ptr [ESI + 0x1]
// 004b4151: ADD ESI,0x2
// 004b4154: MOV byte ptr [EDI + 0x1],AL
// 004b4157: ADD EDI,0x2
// 004b415a: CMP AL,0x0
// 004b415c: JNZ 0x004b4146
//   XREF to: 004b4146 (CONDITIONAL_JUMP)
// 004b415e: POP EDI
//   Label: LAB_004b415e
// 004b415f: PUSH 0x0
// 004b4161: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3c0] (DATA)
// 004b4165: PUSH EAX
// 004b4166: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b416b: ADD ESP,0x8
// 004b416e: JMP 0x004b3ff0
//   XREF to: 004b3ff0 (UNCONDITIONAL_JUMP)
// 004b4173: PUSH 0x626a2d
//   Label: LAB_004b4173
//   XREF to: 00626a2d (DATA)
// 004b4178: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b417e: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b417f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b4184: ADD ESP,0x8
// 004b4187: XOR EDI,EDI
//   Label: LAB_004b4187
// 004b4189: PUSH EDI
// 004b418a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3c0] (DATA)
// 004b418e: PUSH EAX
// 004b418f: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b4194: ADD ESP,0x8
// 004b4197: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x18] (DATA)
// 004b419e: PUSH EAX
// 004b419f: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b41a4: ADD ESP,0x4
// 004b41a7: MOV EAX,EDI
// 004b41a9: ADD ESP,0x3b0
// 004b41af: POP EBP
// 004b41b0: POP EDI
// 004b41b1: POP ESI
// 004b41b2: POP EBX
// 004b41b3: RET

// Name: shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20
// Address: 004a3f20
// Address Range: [[004a3f20, 004a433a]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20(CPickList * this_ptr)
// Globals:
//   CKeys* g_CKeysPtr = 02dcd7d4
//   char[256] g_CharacterClassificationTable
//   void* g_CKeysPtr
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0
//   shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_004a3f20(CPickList *this_ptr)

{
  char *str1;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined4 uStack00000010;
  undefined4 uStack00000054;
  undefined4 uStack0000007c;
  undefined4 uStack000000bc;
  undefined4 uStack000000d0;
  undefined4 uStack000000e4;
  undefined4 uStack000000f8;
  undefined4 uStack0000010c;
  undefined4 uStack00000120;
  undefined4 uStack00000134;
  
  bVar8 = 0;
  iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1c);
  if (iVar3 != 0) {
    if (this_ptr->selection_state == 1) {
      return -1;
    }
    iVar3 = shape_edittool_cpp_CPickList_isItemEnabled_FUN_004a54e0
                      (this_ptr,this_ptr->current_index);
    if (iVar3 != 0) {
      this_ptr->confirmed_flag = 1;
      return 0;
    }
  }
  iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
  if (iVar3 != 0) {
    return -1;
  }
  uStack00000010 = 0x4a3f94;
  iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar3 != 0) {
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x52);
    if (iVar3 != 0) {
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_004a3270(&this_ptr->base_strlist);
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e);
    if (iVar3 != 0) {
      uStack00000054 = 0x4a3fd2;
      shape_edittool_cpp_CStrList_copyToClipboard_FUN_004a3270(&this_ptr->base_strlist);
    }
  }
  iVar6 = 0;
  uStack00000054 = 0x4a3fe3;
  iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
  if ((iVar3 == 0) && (iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf), iVar3 != 0)) {
    iVar6 = 1;
  }
  uStack0000007c = 0x4a3ffa;
  iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
  if ((iVar3 != 0) && (iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf), iVar3 != 0)) {
    iVar6 = -1;
  }
  iVar3 = 0;
  do {
    iVar7 = this_ptr->selection_state + iVar6;
    this_ptr->selection_state = iVar7;
    if (1 < iVar7) {
      this_ptr->selection_state = -1;
      goto LAB_004a402a;
    }
    if (iVar7 < -1) {
      this_ptr->selection_state = 1;
LAB_004a4167:
      if (this_ptr->cancel_button_text[0] != '\0') {
        if (this_ptr->selection_state != -1) {
          return 0;
        }
        goto LAB_004a402a;
      }
    }
    else if ((iVar7 != 0) || (this_ptr->ok_button_text[0] != '\0')) {
      if (this_ptr->selection_state == 1) goto LAB_004a4167;
      if (this_ptr->selection_state != -1) {
        return 0;
      }
      goto LAB_004a402a;
    }
    iVar3 = iVar3 + 1;
    if (9 < iVar3) {
      if (this_ptr->selection_state != -1) {
        return 0;
      }
LAB_004a402a:
      str1 = this_ptr->search_text_buffer;
      do {
        do {
          do {
            bVar2 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
            if (CONCAT31(extraout_var,bVar2) == 0) {
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x48);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + -1;
              }
              uStack000000bc = 0x4a41ed;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x50);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + 1;
              }
              uStack000000d0 = 0x4a4215;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x47);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = 0;
              }
              uStack000000e4 = 0x4a423a;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4f);
              if (iVar3 != 0) {
                iVar3 = (this_ptr->base_strlist).item_count;
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = iVar3;
              }
              uStack000000f8 = 0x4a425d;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x49);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index - this_ptr->page_size;
                this_ptr->scroll_top = this_ptr->scroll_top - this_ptr->page_size;
              }
              uStack0000010c = 0x4a42a0;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x51);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + this_ptr->page_size;
                this_ptr->scroll_top = this_ptr->scroll_top + this_ptr->page_size;
              }
              uStack00000120 = 0x4a42e3;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4b);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index - this_ptr->vertical_page_size;
              }
              uStack00000134 = 0x4a4312;
              iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4d);
              if (iVar3 != 0) {
                this_ptr->search_text_buffer[0] = '\0';
                this_ptr->current_index = this_ptr->current_index + this_ptr->vertical_page_size;
              }
              return 0;
            }
            iVar3 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
            if (iVar3 == 8) {
              this_ptr->search_text_buffer[0] = '\0';
            }
          } while (this_ptr->hotkey_capacity != 0);
          if ((g_CharacterClassificationTable[(byte)((char)iVar3 + 1)] & 0xe0U) != 0) {
            uVar5 = 0xffffffff;
            pcVar4 = str1;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
            } while (cVar1 != '\0');
            uVar5 = ~uVar5;
            if (uVar5 - 1 < 99) {
              this_ptr->cancel_button_text[uVar5 + 99] = (char)iVar3;
              this_ptr->search_text_buffer[uVar5] = '\0';
            }
          }
        } while (this_ptr->search_text_buffer[0] == '\0');
        pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           (&this_ptr->base_strlist,this_ptr->current_index);
        iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,pcVar4);
        if (iVar3 < 1) {
          this_ptr->current_index = 0;
        }
        while (this_ptr->current_index < (this_ptr->base_strlist).item_count) {
          pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             (&this_ptr->base_strlist,this_ptr->current_index);
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,pcVar4);
          if (iVar3 < 1) break;
          this_ptr->current_index = this_ptr->current_index + 1;
        }
      } while( true );
    }
  } while( true );
}


// Assembly code:
// 004a3f20: PUSH EBX
//   Label: shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20
// 004a3f21: PUSH ESI
// 004a3f22: PUSH EDI
// 004a3f23: PUSH EBP
// 004a3f24: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a3f28: PUSH 0x1c
// 004a3f2a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a3f2f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a3f30: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a3f32: CALL dword ptr [EDX + 0x4]
// 004a3f35: ADD ESP,0x8
// 004a3f38: TEST EAX,EAX
// 004a3f3a: JZ 0x004a3f74
//   XREF to: 004a3f74 (CONDITIONAL_JUMP)
// 004a3f3c: CMP dword ptr [EBX + 0x3a4],0x1
// 004a3f43: JNZ 0x004a3f4f
//   XREF to: 004a3f4f (CONDITIONAL_JUMP)
// 004a3f45: MOV EAX,0xffffffff
//   Label: LAB_004a3f45
// 004a3f4a: POP EBP
// 004a3f4b: POP EDI
// 004a3f4c: POP ESI
// 004a3f4d: POP EBX
// 004a3f4e: RET
// 004a3f4f: MOV ECX,dword ptr [EBX + 0x17c]
//   Label: LAB_004a3f4f
// 004a3f55: PUSH ECX
// 004a3f56: PUSH EBX
// 004a3f57: CALL shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0
//   XREF to: 004a54e0 (UNCONDITIONAL_CALL)
// 004a3f5c: ADD ESP,0x8
// 004a3f5f: TEST EAX,EAX
// 004a3f61: JZ 0x004a3f74
//   XREF to: 004a3f74 (CONDITIONAL_JUMP)
// 004a3f63: MOV dword ptr [EBX + 0x170],0x1
// 004a3f6d: XOR EAX,EAX
// 004a3f6f: POP EBP
// 004a3f70: POP EDI
// 004a3f71: POP ESI
// 004a3f72: POP EBX
// 004a3f73: RET
// 004a3f74: PUSH 0x1
//   Label: LAB_004a3f74
// 004a3f76: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a3f7b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a3f7c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a3f7e: CALL dword ptr [EDX + 0x4]
// 004a3f81: ADD ESP,0x8
// 004a3f84: TEST EAX,EAX
// 004a3f86: JNZ 0x004a3f45
//   XREF to: 004a3f45 (CONDITIONAL_JUMP)
// 004a3f88: PUSH 0x1d
// 004a3f8a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a3f8f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a3f90: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a3f92: CALL dword ptr [EDX]
// 004a3f94: ADD ESP,0x8
// 004a3f97: TEST EAX,EAX
// 004a3f99: JZ 0x004a3fd5
//   XREF to: 004a3fd5 (CONDITIONAL_JUMP)
// 004a3f9b: PUSH 0x52
// 004a3f9d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a3fa2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a3fa3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a3fa5: CALL dword ptr [EDX + 0x4]
// 004a3fa8: ADD ESP,0x8
// 004a3fab: TEST EAX,EAX
// 004a3fad: JZ 0x004a3fb8
//   XREF to: 004a3fb8 (CONDITIONAL_JUMP)
// 004a3faf: PUSH EBX
// 004a3fb0: CALL shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270
//   XREF to: 004a3270 (UNCONDITIONAL_CALL)
// 004a3fb5: ADD ESP,0x4
// 004a3fb8: PUSH 0x2e
//   Label: LAB_004a3fb8
// 004a3fba: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a3fbf: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a3fc0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a3fc2: CALL dword ptr [EDX + 0x4]
// 004a3fc5: ADD ESP,0x8
// 004a3fc8: TEST EAX,EAX
// 004a3fca: JZ 0x004a3fd5
//   XREF to: 004a3fd5 (CONDITIONAL_JUMP)
// 004a3fcc: PUSH EBX
// 004a3fcd: CALL shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270
//   XREF to: 004a3270 (UNCONDITIONAL_CALL)
// 004a3fd2: ADD ESP,0x4
// 004a3fd5: PUSH 0x2a
//   Label: LAB_004a3fd5
// 004a3fd7: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a3fdc: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a3fdd: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a3fdf: XOR ESI,ESI
// 004a3fe1: CALL dword ptr [EDX]
// 004a3fe3: ADD ESP,0x8
// 004a3fe6: TEST EAX,EAX
// 004a3fe8: JZ 0x004a40f6
//   XREF to: 004a40f6 (CONDITIONAL_JUMP)
// 004a3fee: PUSH 0x2a
//   Label: LAB_004a3fee
// 004a3ff0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a3ff5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a3ff6: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a3ff8: CALL dword ptr [EDX]
// 004a3ffa: ADD ESP,0x8
// 004a3ffd: TEST EAX,EAX
// 004a3fff: JNZ 0x004a4118
//   XREF to: 004a4118 (CONDITIONAL_JUMP)
// 004a4005: XOR EAX,EAX
//   Label: LAB_004a4005
// 004a4007: XOR EDX,EDX
// 004a4009: MOV EDI,dword ptr [EBX + 0x3a4]
//   Label: LAB_004a4009
// 004a400f: ADD EDI,ESI
// 004a4011: MOV dword ptr [EBX + 0x3a4],EDI
// 004a4017: CMP EDI,0x2
// 004a401a: JL 0x004a4158
//   XREF to: 004a4158 (CONDITIONAL_JUMP)
// 004a4020: MOV dword ptr [EBX + 0x3a4],0xffffffff
// 004a402a: LEA ESI,[EBX + 0x10c]
//   Label: LAB_004a402a
// 004a4030: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   Label: LAB_004a4030
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 004a4035: TEST EAX,EAX
// 004a4037: JZ 0x004a41b8
//   XREF to: 004a41b8 (CONDITIONAL_JUMP)
// 004a403d: MOV EDI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a4043: PUSH EDI
//   XREF to: 02dcd7d4 (DATA)
// 004a4044: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 004a4049: ADD ESP,0x4
// 004a404c: MOV EDX,EAX
// 004a404e: CMP EAX,0x8
// 004a4051: JNZ 0x004a405a
//   XREF to: 004a405a (CONDITIONAL_JUMP)
// 004a4053: MOV byte ptr [EBX + 0x10c],0x0
// 004a405a: CMP dword ptr [EBX + 0x19c],0x0
//   Label: LAB_004a405a
// 004a4061: JNZ 0x004a4030
//   XREF to: 004a4030 (CONDITIONAL_JUMP)
// 004a4063: MOV AL,DL
// 004a4065: INC AL
// 004a4067: AND EAX,0xff
// 004a406c: TEST byte ptr [EAX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 004a4073: JZ 0x004a4097
//   XREF to: 004a4097 (CONDITIONAL_JUMP)
// 004a4075: MOV EDI,ESI
// 004a4077: SUB ECX,ECX
// 004a4079: DEC ECX
// 004a407a: XOR EAX,EAX
// 004a407c: SCASB.REPNE ES:EDI
// 004a407e: NOT ECX
// 004a4080: DEC ECX
// 004a4081: CMP ECX,0x63
// 004a4084: JNC 0x004a4097
//   XREF to: 004a4097 (CONDITIONAL_JUMP)
// 004a4086: LEA EAX,[EBX + ECX*0x1]
// 004a4089: MOV byte ptr [EAX + 0x10c],DL
// 004a408f: MOV byte ptr [ECX + EBX*0x1 + 0x10d],0x0
// 004a4097: CMP byte ptr [EBX + 0x10c],0x0
//   Label: LAB_004a4097
// 004a409e: JZ 0x004a4030
//   XREF to: 004a4030 (CONDITIONAL_JUMP)
// 004a40a0: MOV EAX,dword ptr [EBX + 0x17c]
// 004a40a6: PUSH EAX
// 004a40a7: PUSH EBX
// 004a40a8: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004a40ad: ADD ESP,0x8
// 004a40b0: PUSH EAX
// 004a40b1: PUSH ESI
// 004a40b2: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004a40b7: ADD ESP,0x8
// 004a40ba: TEST EAX,EAX
// 004a40bc: JLE 0x004a41a9
//   XREF to: 004a41a9 (CONDITIONAL_JUMP)
// 004a40c2: MOV EDX,dword ptr [EBX]
//   Label: LAB_004a40c2
// 004a40c4: MOV EAX,dword ptr [EBX + 0x17c]
// 004a40ca: CMP EAX,EDX
// 004a40cc: JGE 0x004a4030
//   XREF to: 004a4030 (CONDITIONAL_JUMP)
// 004a40d2: PUSH EAX
// 004a40d3: PUSH EBX
// 004a40d4: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004a40d9: ADD ESP,0x8
// 004a40dc: PUSH EAX
// 004a40dd: PUSH ESI
// 004a40de: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004a40e3: ADD ESP,0x8
// 004a40e6: TEST EAX,EAX
// 004a40e8: JLE 0x004a4030
//   XREF to: 004a4030 (CONDITIONAL_JUMP)
// 004a40ee: INC dword ptr [EBX + 0x17c]
// 004a40f4: JMP 0x004a40c2
//   XREF to: 004a40c2 (UNCONDITIONAL_JUMP)
// 004a40f6: PUSH 0xf
//   Label: LAB_004a40f6
// 004a40f8: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a40fd: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a40fe: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a4100: CALL dword ptr [EDX + 0x4]
// 004a4103: ADD ESP,0x8
// 004a4106: TEST EAX,EAX
// 004a4108: JZ 0x004a3fee
//   XREF to: 004a3fee (CONDITIONAL_JUMP)
// 004a410e: MOV ESI,0x1
// 004a4113: JMP 0x004a3fee
//   XREF to: 004a3fee (UNCONDITIONAL_JUMP)
// 004a4118: PUSH 0xf
//   Label: LAB_004a4118
// 004a411a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a411f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a4120: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a4122: CALL dword ptr [EDX + 0x4]
// 004a4125: ADD ESP,0x8
// 004a4128: TEST EAX,EAX
// 004a412a: JZ 0x004a4005
//   XREF to: 004a4005 (CONDITIONAL_JUMP)
// 004a4130: MOV ESI,0xffffffff
// 004a4135: JMP 0x004a4005
//   XREF to: 004a4005 (UNCONDITIONAL_JUMP)
// 004a413a: INC EAX
//   Label: LAB_004a413a
// 004a413b: CMP EAX,0xa
// 004a413e: JL 0x004a4009
//   XREF to: 004a4009 (CONDITIONAL_JUMP)
// 004a4144: CMP dword ptr [EBX + 0x3a4],-0x1
// 004a414b: JZ 0x004a402a
//   XREF to: 004a402a (CONDITIONAL_JUMP)
// 004a4151: XOR EAX,EAX
// 004a4153: POP EBP
// 004a4154: POP EDI
// 004a4155: POP ESI
// 004a4156: POP EBX
// 004a4157: RET
// 004a4158: CMP EDI,-0x1
//   Label: LAB_004a4158
// 004a415b: JGE 0x004a4183
//   XREF to: 004a4183 (CONDITIONAL_JUMP)
// 004a415d: MOV dword ptr [EBX + 0x3a4],0x1
// 004a4167: CMP DL,byte ptr [EBX + 0xa8]
//   Label: LAB_004a4167
// 004a416d: JZ 0x004a413a
//   XREF to: 004a413a (CONDITIONAL_JUMP)
// 004a416f: CMP dword ptr [EBX + 0x3a4],-0x1
// 004a4176: JZ 0x004a402a
//   XREF to: 004a402a (CONDITIONAL_JUMP)
// 004a417c: XOR EAX,EAX
// 004a417e: POP EBP
// 004a417f: POP EDI
// 004a4180: POP ESI
// 004a4181: POP EBX
// 004a4182: RET
// 004a4183: CMP EDX,EDI
//   Label: LAB_004a4183
// 004a4185: JNZ 0x004a418c
//   XREF to: 004a418c (CONDITIONAL_JUMP)
// 004a4187: CMP DL,byte ptr [EBX + 0x44]
// 004a418a: JZ 0x004a413a
//   XREF to: 004a413a (CONDITIONAL_JUMP)
// 004a418c: CMP dword ptr [EBX + 0x3a4],0x1
//   Label: LAB_004a418c
// 004a4193: JZ 0x004a4167
//   XREF to: 004a4167 (CONDITIONAL_JUMP)
// 004a4195: CMP dword ptr [EBX + 0x3a4],-0x1
// 004a419c: JZ 0x004a402a
//   XREF to: 004a402a (CONDITIONAL_JUMP)
// 004a41a2: XOR EAX,EAX
// 004a41a4: POP EBP
// 004a41a5: POP EDI
// 004a41a6: POP ESI
// 004a41a7: POP EBX
// 004a41a8: RET
// 004a41a9: MOV dword ptr [EBX + 0x17c],0x0
//   Label: LAB_004a41a9
// 004a41b3: JMP 0x004a40c2
//   XREF to: 004a40c2 (UNCONDITIONAL_JUMP)
// 004a41b8: PUSH 0x48
//   Label: LAB_004a41b8
// 004a41ba: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a41bf: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a41c0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a41c2: CALL dword ptr [EDX + 0x4]
// 004a41c5: ADD ESP,0x8
// 004a41c8: TEST EAX,EAX
// 004a41ca: JZ 0x004a41e0
//   XREF to: 004a41e0 (CONDITIONAL_JUMP)
// 004a41cc: MOV EDX,dword ptr [EBX + 0x17c]
// 004a41d2: MOV byte ptr [EBX + 0x10c],0x0
// 004a41d9: DEC EDX
// 004a41da: MOV dword ptr [EBX + 0x17c],EDX
// 004a41e0: PUSH 0x50
//   Label: LAB_004a41e0
// 004a41e2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a41e7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a41e8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a41ea: CALL dword ptr [EDX + 0x4]
// 004a41ed: ADD ESP,0x8
// 004a41f0: TEST EAX,EAX
// 004a41f2: JZ 0x004a4208
//   XREF to: 004a4208 (CONDITIONAL_JUMP)
// 004a41f4: MOV ECX,dword ptr [EBX + 0x17c]
// 004a41fa: MOV byte ptr [EBX + 0x10c],0x0
// 004a4201: INC ECX
// 004a4202: MOV dword ptr [EBX + 0x17c],ECX
// 004a4208: PUSH 0x47
//   Label: LAB_004a4208
// 004a420a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a420f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a4210: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a4212: CALL dword ptr [EDX + 0x4]
// 004a4215: ADD ESP,0x8
// 004a4218: TEST EAX,EAX
// 004a421a: JZ 0x004a422d
//   XREF to: 004a422d (CONDITIONAL_JUMP)
// 004a421c: MOV byte ptr [EBX + 0x10c],0x0
// 004a4223: MOV dword ptr [EBX + 0x17c],0x0
// 004a422d: PUSH 0x4f
//   Label: LAB_004a422d
// 004a422f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a4234: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a4235: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a4237: CALL dword ptr [EDX + 0x4]
// 004a423a: ADD ESP,0x8
// 004a423d: TEST EAX,EAX
// 004a423f: JZ 0x004a4250
//   XREF to: 004a4250 (CONDITIONAL_JUMP)
// 004a4241: MOV EAX,dword ptr [EBX]
// 004a4243: MOV byte ptr [EBX + 0x10c],0x0
// 004a424a: MOV dword ptr [EBX + 0x17c],EAX
// 004a4250: PUSH 0x49
//   Label: LAB_004a4250
// 004a4252: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a4257: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a4258: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a425a: CALL dword ptr [EDX + 0x4]
// 004a425d: ADD ESP,0x8
// 004a4260: TEST EAX,EAX
// 004a4262: JZ 0x004a4293
//   XREF to: 004a4293 (CONDITIONAL_JUMP)
// 004a4264: MOV ESI,dword ptr [EBX + 0x17c]
// 004a426a: MOV EAX,dword ptr [EBX + 0x184]
// 004a4270: MOV EDI,dword ptr [EBX + 0x180]
// 004a4276: MOV byte ptr [EBX + 0x10c],0x0
// 004a427d: SUB ESI,EAX
// 004a427f: MOV EAX,dword ptr [EBX + 0x184]
// 004a4285: MOV dword ptr [EBX + 0x17c],ESI
// 004a428b: SUB EDI,EAX
// 004a428d: MOV dword ptr [EBX + 0x180],EDI
// 004a4293: PUSH 0x51
//   Label: LAB_004a4293
// 004a4295: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a429a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a429b: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a429d: CALL dword ptr [EDX + 0x4]
// 004a42a0: ADD ESP,0x8
// 004a42a3: TEST EAX,EAX
// 004a42a5: JZ 0x004a42d6
//   XREF to: 004a42d6 (CONDITIONAL_JUMP)
// 004a42a7: MOV EBP,dword ptr [EBX + 0x17c]
// 004a42ad: MOV EAX,dword ptr [EBX + 0x184]
// 004a42b3: MOV EDX,dword ptr [EBX + 0x180]
// 004a42b9: MOV byte ptr [EBX + 0x10c],0x0
// 004a42c0: ADD EBP,EAX
// 004a42c2: MOV EAX,dword ptr [EBX + 0x184]
// 004a42c8: MOV dword ptr [EBX + 0x17c],EBP
// 004a42ce: ADD EDX,EAX
// 004a42d0: MOV dword ptr [EBX + 0x180],EDX
// 004a42d6: PUSH 0x4b
//   Label: LAB_004a42d6
// 004a42d8: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a42dd: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a42de: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a42e0: CALL dword ptr [EDX + 0x4]
// 004a42e3: ADD ESP,0x8
// 004a42e6: TEST EAX,EAX
// 004a42e8: JZ 0x004a4305
//   XREF to: 004a4305 (CONDITIONAL_JUMP)
// 004a42ea: MOV ECX,dword ptr [EBX + 0x17c]
// 004a42f0: MOV EAX,dword ptr [EBX + 0x188]
// 004a42f6: MOV byte ptr [EBX + 0x10c],0x0
// 004a42fd: SUB ECX,EAX
// 004a42ff: MOV dword ptr [EBX + 0x17c],ECX
// 004a4305: PUSH 0x4d
//   Label: LAB_004a4305
// 004a4307: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a430c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a430d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a430f: CALL dword ptr [EDX + 0x4]
// 004a4312: ADD ESP,0x8
// 004a4315: TEST EAX,EAX
// 004a4317: JZ 0x004a4334
//   XREF to: 004a4334 (CONDITIONAL_JUMP)
// 004a4319: MOV ESI,dword ptr [EBX + 0x17c]
// 004a431f: MOV EAX,dword ptr [EBX + 0x188]
// 004a4325: MOV byte ptr [EBX + 0x10c],0x0
// 004a432c: ADD ESI,EAX
// 004a432e: MOV dword ptr [EBX + 0x17c],ESI
// 004a4334: XOR EAX,EAX
//   Label: LAB_004a4334
// 004a4336: POP EBP
// 004a4337: POP EDI
// 004a4338: POP ESI
// 004a4339: POP EBX
// 004a433a: RET

; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180(CEditorTools * this_ptr, char * format, ...)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b70a0
;
; Referenced Globals:
;   TerminatedCString s_Yes_006230c5
;   TerminatedCString s_Yes_to_All_006230ca
;   TerminatedCString s_No_006230d6
;   TerminatedCString s_Cancel_006230da
;   char[1024] g_DialogMessageBuffer
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f180
        ;   Label: shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180
    SUB ESP,0x14                        ; 0049f181
    LEA EAX,[ESP + 0x24]                ; 0049f184
    MOV dword ptr [ESP + 0x10],EAX      ; 0049f188
    LEA EAX,[ESP + 0x10]                ; 0049f18c
    PUSH EAX                            ; 0049f190
    MOV EDX,dword ptr [ESP + 0x24]      ; 0049f191
    PUSH EDX                            ; 0049f195
    PUSH 0x2cf0930                      ; 0049f196 | char[1024] g_DialogMessageBuffer
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 0049f19b | int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0049f1a0
    MOV EAX,ESP                         ; 0049f1a3
    XOR ECX,ECX                         ; 0049f1a5
    PUSH EAX                            ; 0049f1a7
    MOV dword ptr [ESP + 0x14],ECX      ; 0049f1a8
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 0049f1ac | CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049f1b1
    PUSH 0x6230c5                       ; 0049f1b4 | = "^Yes" | s_Yes_006230c5 = ^Yes
    LEA EAX,[ESP + 0x4]                 ; 0049f1b9
    PUSH EAX                            ; 0049f1bd
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0049f1be | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049f1c3
    PUSH 0x6230ca                       ; 0049f1c6 | = "Yes to ^All" | s_Yes_to_All_006230ca = Yes to ^All
    LEA EAX,[ESP + 0x4]                 ; 0049f1cb
    PUSH EAX                            ; 0049f1cf
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0049f1d0 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049f1d5
    PUSH 0x6230d6                       ; 0049f1d8 | = "^No" | s_No_006230d6 = ^No
    LEA EAX,[ESP + 0x4]                 ; 0049f1dd
    PUSH EAX                            ; 0049f1e1
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0049f1e2 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049f1e7
    PUSH 0x6230da                       ; 0049f1ea | = "^Cancel" | s_Cancel_006230da = ^Cancel
    LEA EAX,[ESP + 0x4]                 ; 0049f1ef
    PUSH EAX                            ; 0049f1f3
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0049f1f4 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049f1f9
    PUSH 0x0                            ; 0049f1fc
    LEA EAX,[ESP + 0x4]                 ; 0049f1fe
    PUSH EAX                            ; 0049f202
    PUSH 0x2cf0930                      ; 0049f203 | char[1024] g_DialogMessageBuffer
    CALL shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 ; 0049f208 | int shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0(CStrList * str_list, char * dialog_title, int dialog_mode)
        ;   XREF to: 0049e9d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0049f20d
    TEST EAX,EAX                        ; 0049f210
    JZ 0x0049f235                       ; 0049f212 | LAB_0049f235
        ;   XREF to: 0049f235 (CONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 0049f214
    JZ 0x0049f242                       ; 0049f217 | LAB_0049f242
        ;   XREF to: 0049f242 (CONDITIONAL_JUMP)
    CMP EAX,0x2                         ; 0049f219
    JNZ 0x0049f250                      ; 0049f21c | LAB_0049f250
        ;   XREF to: 0049f250 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 0049f21e
    PUSH EBX                            ; 0049f220
    LEA EAX,[ESP + 0x4]                 ; 0049f221
    PUSH EAX                            ; 0049f225
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 0049f226 | CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
        ;   Label: LAB_0049f226
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049f22b
    MOV EAX,EBX                         ; 0049f22e
    ADD ESP,0x14                        ; 0049f230
    POP EBX                             ; 0049f233
    RET                                 ; 0049f234
    PUSH EAX                            ; 0049f235
        ;   Label: LAB_0049f235
    LEA EAX,[ESP + 0x4]                 ; 0049f236
    PUSH EAX                            ; 0049f23a
    MOV EBX,0x1                         ; 0049f23b
    JMP 0x0049f226                      ; 0049f240 | LAB_0049f226
        ;   XREF to: 0049f226 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0049f242
        ;   Label: LAB_0049f242
    LEA EAX,[ESP + 0x4]                 ; 0049f244
    PUSH EAX                            ; 0049f248
    MOV EBX,0x2                         ; 0049f249
    JMP 0x0049f226                      ; 0049f24e | LAB_0049f226
        ;   XREF to: 0049f226 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0049f250
        ;   Label: LAB_0049f250
    LEA EAX,[ESP + 0x4]                 ; 0049f252
    PUSH EAX                            ; 0049f256
    MOV EBX,0xffffffff                  ; 0049f257
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 0049f25c | CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049f261
    MOV EAX,EBX                         ; 0049f264
    ADD ESP,0x14                        ; 0049f266
    POP EBX                             ; 0049f269
    RET                                 ; 0049f26a


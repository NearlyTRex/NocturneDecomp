; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_fileio.cpp_establishUserIdentity_FUN_004b1c00(void)
;
; Local Variables:
; undefined1       Stack[-0x204]:1  local_204
; undefined1       Stack[-0x203]:1  local_203
;
; XREF[6]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b393a
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 at 004b5048
;   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 at 004b3f6f
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004ba77b
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b8784
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b5bb3
;
; Referenced Globals:
;   TerminatedCString s_USERNAME_00625ff5
;   TerminatedCString s_Enter_user_name_00625ffe
;   TerminatedCString s_You_must_enter_a_user_na_0062600e
;   TerminatedCString s_Name_contains_invalid_ch_0062602a
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char[256] g_CharacterClassificationTable
;   CEditorTools g_CEditorToolsPtr
;   SVersionControlSession g_VersionControlSession
;   undefined4 DAT_02d12bd1
;   undefined4 DAT_02d12bd2
;   undefined4 DAT_02d12bd3
;
; Called Functions:
;   crt_env.c_getenv_FUN_006013f0
;   crt_string.c_strncpy_FUN_00600f40
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;   wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1c00
        ;   Label: engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
    SUB ESP,0x200                       ; 004b1c01
    CMP byte ptr [0x02d12bd0],0x0       ; 004b1c07 | SVersionControlSession g_VersionControlSession
    JZ 0x004b1c1d                       ; 004b1c0e | LAB_004b1c1d
        ;   XREF to: 004b1c1d (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004b1c10
        ;   Label: LAB_004b1c10
    ADD ESP,0x200                       ; 004b1c15
    POP EBX                             ; 004b1c1b
    RET                                 ; 004b1c1c
    MOV EAX,ESP                         ; 004b1c1d
        ;   Label: LAB_004b1c1d
    PUSH EAX                            ; 004b1c1f
    CALL wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140 ; 004b1c20 | void wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140(char * buffer)
        ;   XREF to: 005f4140 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b1c25
    CMP byte ptr [ESP],0x0              ; 004b1c28
    JNZ 0x004b1cc6                      ; 004b1c2c | LAB_004b1cc6
        ;   XREF to: 004b1cc6 (CONDITIONAL_JUMP)
    PUSH 0x625ff5                       ; 004b1c32 | = "USERNAME" | s_USERNAME_00625ff5 = USERNAME
    CALL crt_env.c_getenv_FUN_006013f0  ; 004b1c37 | char * crt_env.c_getenv_FUN_006013f0(char * name)
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b1c3c
    TEST EAX,EAX                        ; 004b1c3f
    JNZ 0x004b1cfa                      ; 004b1c41 | LAB_004b1cfa
        ;   XREF to: 004b1cfa (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004b1c47
        ;   Label: LAB_004b1c47
    PUSH 0x20                           ; 004b1c49
    PUSH 0x2d12bd0                      ; 004b1c4b | SVersionControlSession g_VersionControlSession
    PUSH 0x625ffe                       ; 004b1c50 | = "Enter user name" | s_Enter_user_name_00625ffe = Enter user name
    MOV EDX,dword ptr [0x00678a60]      ; 004b1c55 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004b1c5b | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004b1c5c | int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b1c61
    TEST EAX,EAX                        ; 004b1c64
    JZ 0x004b1d17                       ; 004b1c66 | LAB_004b1d17
        ;   XREF to: 004b1d17 (CONDITIONAL_JUMP)
    MOV BL,byte ptr [0x02d12bd0]        ; 004b1c6c | SVersionControlSession g_VersionControlSession
    TEST BL,BL                          ; 004b1c72
    JZ 0x004b1d27                       ; 004b1c74 | LAB_004b1d27
        ;   XREF to: 004b1d27 (CONDITIONAL_JUMP)
    MOV EAX,0x2d12bd0                   ; 004b1c7a | SVersionControlSession g_VersionControlSession
    MOV ECX,0x1                         ; 004b1c7f
    JZ 0x004b1ca8                       ; 004b1c84 | LAB_004b1ca8
        ;   XREF to: 004b1ca8 (CONDITIONAL_JUMP)
    MOV DH,byte ptr [EAX]               ; 004b1c86 | SVersionControlSession g_VersionControlSession
        ;   Label: LAB_004b1c86
    CMP DH,0x5f                         ; 004b1c88
    JZ 0x004b1ca0                       ; 004b1c8b | LAB_004b1ca0
        ;   XREF to: 004b1ca0 (CONDITIONAL_JUMP)
    MOV DL,DH                           ; 004b1c8d
    INC DL                              ; 004b1c8f
    AND EDX,0xff                        ; 004b1c91
    TEST byte ptr [EDX + 0x6849c4],0xe0 ; 004b1c97 | char[256] g_CharacterClassificationTable
    JZ 0x004b1cb0                       ; 004b1c9e | LAB_004b1cb0
        ;   XREF to: 004b1cb0 (CONDITIONAL_JUMP)
    MOV DL,byte ptr [EAX + 0x1]         ; 004b1ca0 | DAT_02d12bd1
        ;   Label: LAB_004b1ca0
    INC EAX                             ; 004b1ca3 | DAT_02d12bd1
    TEST DL,DL                          ; 004b1ca4
    JNZ 0x004b1c86                      ; 004b1ca6 | LAB_004b1c86
        ;   XREF to: 004b1c86 (CONDITIONAL_JUMP)
    TEST ECX,ECX                        ; 004b1ca8
        ;   Label: LAB_004b1ca8
    JNZ 0x004b1c10                      ; 004b1caa | LAB_004b1c10
        ;   XREF to: 004b1c10 (CONDITIONAL_JUMP)
    PUSH 0x62602a                       ; 004b1cb0 | = "Name contains invalid characters" | s_Name_contains_invalid_ch_0062602a = Name contains invalid characters
        ;   Label: LAB_004b1cb0
    MOV EBX,dword ptr [0x00678a60]      ; 004b1cb5 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 004b1cbb | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b1cbc | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b1cc1
    JMP 0x004b1c47                      ; 004b1cc4 | LAB_004b1c47
        ;   XREF to: 004b1c47 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 004b1cc6
        ;   Label: LAB_004b1cc6
    PUSH ESI                            ; 004b1cc7
    LEA ESI,[ESP + 0x8]                 ; 004b1cc8
    MOV EDI,0x2d12bd0                   ; 004b1ccc | SVersionControlSession g_VersionControlSession
    PUSH EDI                            ; 004b1cd1 | SVersionControlSession g_VersionControlSession
    MOV AL,byte ptr [ESI]               ; 004b1cd2
        ;   Label: LAB_004b1cd2
    MOV byte ptr [EDI],AL               ; 004b1cd4 | SVersionControlSession g_VersionControlSession
    CMP AL,0x0                          ; 004b1cd6
    JZ 0x004b1cea                       ; 004b1cd8 | LAB_004b1cea
        ;   XREF to: 004b1cea (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b1cda
    ADD ESI,0x2                         ; 004b1cdd
    MOV byte ptr [EDI + 0x1],AL         ; 004b1ce0 | DAT_02d12bd1
    ADD EDI,0x2                         ; 004b1ce3
    CMP AL,0x0                          ; 004b1ce6
    JNZ 0x004b1cd2                      ; 004b1ce8 | LAB_004b1cd2
        ;   XREF to: 004b1cd2 (CONDITIONAL_JUMP)
    POP EDI                             ; 004b1cea
        ;   Label: LAB_004b1cea
    MOV EAX,0x1                         ; 004b1ceb
    POP ESI                             ; 004b1cf0
    POP EDI                             ; 004b1cf1
    ADD ESP,0x200                       ; 004b1cf2
    POP EBX                             ; 004b1cf8
    RET                                 ; 004b1cf9
    PUSH 0x1f                           ; 004b1cfa
        ;   Label: LAB_004b1cfa
    PUSH EAX                            ; 004b1cfc
    PUSH 0x2d12bd0                      ; 004b1cfd | SVersionControlSession g_VersionControlSession
    CALL crt_string.c_strncpy_FUN_00600f40 ; 004b1d02 | char * crt_string.c_strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)
        ;   XREF to: 00600f40 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 004b1d07
    ADD ESP,0xc                         ; 004b1d0c
    ADD ESP,0x200                       ; 004b1d0f
    POP EBX                             ; 004b1d15
    RET                                 ; 004b1d16
    XOR DH,DH                           ; 004b1d17
        ;   Label: LAB_004b1d17
    MOV byte ptr [0x02d12bd0],DH        ; 004b1d19 | SVersionControlSession g_VersionControlSession
    ADD ESP,0x200                       ; 004b1d1f
    POP EBX                             ; 004b1d25
    RET                                 ; 004b1d26
    PUSH 0x62600e                       ; 004b1d27 | = "You must enter a user name." | s_You_must_enter_a_user_na_0062600e = You must enter a user name.
        ;   Label: LAB_004b1d27
    MOV ECX,dword ptr [0x00678a60]      ; 004b1d2c | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 004b1d32 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b1d33 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b1d38
    JMP 0x004b1c47                      ; 004b1d3b | LAB_004b1c47
        ;   XREF to: 004b1c47 (UNCONDITIONAL_JUMP)


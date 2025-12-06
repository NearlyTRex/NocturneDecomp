; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70(CFileManager * this_ptr, char * default_wildcard)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   default_wildcard
; Local Variables:
; undefined4       Stack[-0x9cc]:4  local_9cc
; undefined1       Stack[-0x624]:1  local_624
; undefined1       Stack[-0x524]:1  local_524
; undefined1       Stack[-0x308]:1  local_308
; undefined1       Stack[-0x108]:1  local_108
; undefined1       Stack[-0x107]:1  local_107
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be4be
;
; Referenced Globals:
;   TerminatedCString s_DefaultWildcard_0062920f
;   undefined4 DAT_00629210
;   TerminatedCString s_Enter_filename_wildcard_00629211
;   TerminatedCString s_s_s_00629229
;   TerminatedCString s_No_files_found_matching__0062922f
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   CEditorTools g_CEditorToolsPtr
;   CDemonPod g_CDemonPodInstance
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
;   engine_pod.cpp_CPod_initSearch_FUN_00550ea0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004bcb70
        ;   Label: engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70
    PUSH EDI                            ; 004bcb71
    SUB ESP,0x9c4                       ; 004bcb72
    MOV ESI,dword ptr [ESP + 0x9d4]     ; 004bcb78
    TEST ESI,ESI                        ; 004bcb7f
    JZ 0x004bcbd4                       ; 004bcb81 | LAB_004bcbd4
        ;   XREF to: 004bcbd4 (CONDITIONAL_JUMP)
    LEA EDI,[ESP + 0x8c4]               ; 004bcb83
        ;   Label: LAB_004bcb83
    PUSH EDI                            ; 004bcb8a
    MOV AL,byte ptr [ESI]               ; 004bcb8b | = "*" | s_DefaultWildcard_0062920f = *
        ;   Label: LAB_004bcb8b
    MOV byte ptr [EDI],AL               ; 004bcb8d
    CMP AL,0x0                          ; 004bcb8f
    JZ 0x004bcba3                       ; 004bcb91 | LAB_004bcba3
        ;   XREF to: 004bcba3 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004bcb93 | DAT_00629210
    ADD ESI,0x2                         ; 004bcb96
    MOV byte ptr [EDI + 0x1],AL         ; 004bcb99
    ADD EDI,0x2                         ; 004bcb9c
    CMP AL,0x0                          ; 004bcb9f
    JNZ 0x004bcb8b                      ; 004bcba1 | LAB_004bcb8b
        ;   XREF to: 004bcb8b (CONDITIONAL_JUMP)
    POP EDI                             ; 004bcba3
        ;   Label: LAB_004bcba3
    PUSH 0x1                            ; 004bcba4
    PUSH 0x100                          ; 004bcba6
    LEA EAX,[ESP + 0x8cc]               ; 004bcbab
    PUSH EAX                            ; 004bcbb2
    PUSH 0x629211                       ; 004bcbb3 | = "Enter filename wildcard" | s_Enter_filename_wildcard_00629211 = Enter filename wildcard
    MOV EDX,dword ptr [0x00678a60]      ; 004bcbb8 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 004bcbbe | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004bcbbf | int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004bcbc4
    TEST EAX,EAX                        ; 004bcbc7
    JNZ 0x004bcbdb                      ; 004bcbc9 | LAB_004bcbdb
        ;   XREF to: 004bcbdb (CONDITIONAL_JUMP)
    ADD ESP,0x9c4                       ; 004bcbcb
    POP EDI                             ; 004bcbd1
    POP ESI                             ; 004bcbd2
    RET                                 ; 004bcbd3
    MOV ESI,0x62920f                    ; 004bcbd4 | = "*" | s_DefaultWildcard_0062920f = *
        ;   Label: LAB_004bcbd4
    JMP 0x004bcb83                      ; 004bcbd9 | LAB_004bcb83
        ;   XREF to: 004bcb83 (UNCONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 004bcbdb
        ;   Label: LAB_004bcbdb
    PUSH EAX                            ; 004bcbdd
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004bcbde | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bcbe3
    LEA EAX,[ESP + 0x3a8]               ; 004bcbe6
    PUSH EAX                            ; 004bcbed
    LEA EAX,[ESP + 0x8c8]               ; 004bcbee
    PUSH EAX                            ; 004bcbf5
    MOV ECX,dword ptr [0x00680cdc]      ; 004bcbf6 | CDemonPod g_CDemonPodInstance | CDemonPod * g_CDemonPodPtr
    PUSH ECX                            ; 004bcbfc | CDemonPod g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_initSearch_FUN_00550ea0 ; 004bcbfd | void engine_pod.cpp_CPod_initSearch_FUN_00550ea0(CPod * this_ptr, char * search_pattern, CPodSearchContext * search_context)
        ;   XREF to: 00550ea0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bcc02
    CMP byte ptr [ESP + 0x3a8],0x0      ; 004bcc05
    JZ 0x004bcc6c                       ; 004bcc0d | LAB_004bcc6c
        ;   XREF to: 004bcc6c (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004bcc0f
    LEA EAX,[ESP + 0x4ac]               ; 004bcc10
        ;   Label: LAB_004bcc10
    PUSH EAX                            ; 004bcc17
    LEA EAX,[ESP + 0x3b0]               ; 004bcc18
    PUSH EAX                            ; 004bcc1f
    PUSH 0x629229                       ; 004bcc20 | = "%s\t%s" | s_s_s_00629229 = %s	%s
    LEA EAX,[ESP + 0x6d4]               ; 004bcc25
    PUSH EAX                            ; 004bcc2c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004bcc2d | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004bcc32
    LEA EAX,[ESP + 0x6c8]               ; 004bcc35
    PUSH EAX                            ; 004bcc3c
    LEA EAX,[ESP + 0x8]                 ; 004bcc3d
    PUSH EAX                            ; 004bcc41
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bcc42 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004bcc47
    LEA EAX,[ESP + 0x3ac]               ; 004bcc4a
    PUSH EAX                            ; 004bcc51
    MOV EBX,dword ptr [0x00680cdc]      ; 004bcc52 | CDemonPod g_CDemonPodInstance | CDemonPod * g_CDemonPodPtr
    PUSH EBX                            ; 004bcc58 | CDemonPod g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0 ; 004bcc59 | int engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0(CPod * this_ptr, CPodSearchContext * search_context)
        ;   XREF to: 00550ef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004bcc5e
    CMP byte ptr [ESP + 0x3ac],0x0      ; 004bcc61
    JNZ 0x004bcc10                      ; 004bcc69 | LAB_004bcc10
        ;   XREF to: 004bcc10 (CONDITIONAL_JUMP)
    POP EBX                             ; 004bcc6b
    CMP dword ptr [ESP],0x1             ; 004bcc6c
        ;   Label: LAB_004bcc6c
    JGE 0x004bcca6                      ; 004bcc70 | LAB_004bcca6
        ;   XREF to: 004bcca6 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x8c4]               ; 004bcc72
    PUSH EAX                            ; 004bcc79
    PUSH 0x62922f                       ; 004bcc7a | = "No files found matching %s" | s_No_files_found_matching__0062922f = No files found matching %s
    MOV EDI,dword ptr [0x00678a60]      ; 004bcc7f | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 004bcc85 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bcc86 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bcc8b
    PUSH 0x0                            ; 004bcc8e
    LEA EAX,[ESP + 0x4]                 ; 004bcc90
    PUSH EAX                            ; 004bcc94
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bcc95 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004bcc9a
    ADD ESP,0x9c4                       ; 004bcc9d
    POP EDI                             ; 004bcca3
    POP ESI                             ; 004bcca4
    RET                                 ; 004bcca5
    MOV EAX,ESP                         ; 004bcca6
        ;   Label: LAB_004bcca6
    PUSH EAX                            ; 004bcca8
    CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0 ; 004bcca9 | void shape_edittool.cpp_CStrList_sort_FUN_004a2ec0(CStrList * this_ptr)
        ;   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bccae
    PUSH 0x0                            ; 004bccb1
    PUSH -0x1                           ; 004bccb3
    LEA EAX,[ESP + 0x8cc]               ; 004bccb5
    PUSH EAX                            ; 004bccbc
    LEA EAX,[ESP + 0xc]                 ; 004bccbd
    PUSH EAX                            ; 004bccc1
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004bccc2 | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004bccc7
    PUSH 0x0                            ; 004bccca
    LEA EAX,[ESP + 0x4]                 ; 004bcccc
    PUSH EAX                            ; 004bccd0
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bccd1 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004bccd6
    ADD ESP,0x9c4                       ; 004bccd9
    POP EDI                             ; 004bccdf
    POP ESI                             ; 004bcce0
    RET                                 ; 004bcce1


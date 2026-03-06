; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90(char *dialog_title,int *overwrite_state)
;
; Parameters:
; char *           Stack[0x4]:4   dialog_title
; int *            Stack[0x8]:4   overwrite_state
; Local Variables:
; undefined1       Stack[-0x3b4]:1  local_3b4
;
; XREF[4]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3c0b
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004baad1
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b9ade
;   engine_fileio.cpp_checkFileOverwriteCondition_FUN_004b3120 at 004b31c1
;
; Referenced Globals:
;   TerminatedCString s_Y_es_006264d7
;   TerminatedCString s_Yes_to_A_ll_006264dd
;   TerminatedCString s_N_o_006264ea
;   TerminatedCString s_N_o_to_all_006264ef
;   TerminatedCString s_Cancel_006264fb
;
; Called Functions:
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2f90
        ;   Label: engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
    PUSH EDI                            ; 004b2f91
    PUSH EBP                            ; 004b2f92
    SUB ESP,0x3a8                       ; 004b2f93
    MOV EBX,dword ptr [ESP + 0x3bc]     ; 004b2f99
    MOV EDX,dword ptr [EBX]             ; 004b2fa0
    CMP EDX,0x1                         ; 004b2fa2
    JZ 0x004b2fbe                       ; 004b2fa5
        ;   XREF to: 004b2fbe (CONDITIONAL_JUMP)  ; LAB_004b2fbe
    TEST EDX,EDX                        ; 004b2fa7
    JL 0x004b2fc2                       ; 004b2fa9
        ;   XREF to: 004b2fc2 (CONDITIONAL_JUMP)  ; LAB_004b2fc2
    CMP EDX,0x3                         ; 004b2fab
    JNZ 0x004b2fc9                      ; 004b2fae
        ;   XREF to: 004b2fc9 (CONDITIONAL_JUMP)  ; LAB_004b2fc9
    XOR EBX,EBX                         ; 004b2fb0
    MOV EAX,EBX                         ; 004b2fb2
        ;   Label: LAB_004b2fb2
    ADD ESP,0x3a8                       ; 004b2fb4
    POP EBP                             ; 004b2fba
    POP EDI                             ; 004b2fbb
    POP EBX                             ; 004b2fbc
    RET                                 ; 004b2fbd
    MOV EBX,EDX                         ; 004b2fbe
        ;   Label: LAB_004b2fbe
    JMP 0x004b2fb2                      ; 004b2fc0
        ;   XREF to: 004b2fb2 (UNCONDITIONAL_JUMP)  ; LAB_004b2fb2
    MOV EBX,0xffffffff                  ; 004b2fc2
        ;   Label: LAB_004b2fc2
    JMP 0x004b2fb2                      ; 004b2fc7
        ;   XREF to: 004b2fb2 (UNCONDITIONAL_JUMP)  ; LAB_004b2fb2
    MOV EAX,ESP                         ; 004b2fc9
        ;   Label: LAB_004b2fc9
    PUSH EAX                            ; 004b2fcb
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b2fcc
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b2fd1
    PUSH 0x6264d7                       ; 004b2fd4 | = "[Y]es"
    LEA EAX,[ESP + 0x4]                 ; 004b2fd9
    PUSH EAX                            ; 004b2fdd
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b2fde
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b2fe3
    PUSH 0x6264dd                       ; 004b2fe6 | = "Yes to [A]ll"
    LEA EAX,[ESP + 0x4]                 ; 004b2feb
    PUSH EAX                            ; 004b2fef
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b2ff0
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b2ff5
    PUSH 0x6264ea                       ; 004b2ff8 | = "[N]o"
    LEA EAX,[ESP + 0x4]                 ; 004b2ffd
    PUSH EAX                            ; 004b3001
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b3002
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b3007
    PUSH 0x6264ef                       ; 004b300a | = "N[o] to all"
    LEA EAX,[ESP + 0x4]                 ; 004b300f
    PUSH EAX                            ; 004b3013
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b3014
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b3019
    PUSH 0x6264fb                       ; 004b301c | = "Cancel"
    LEA EAX,[ESP + 0x4]                 ; 004b3021
    PUSH EAX                            ; 004b3025
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b3026
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b302b
    PUSH 0x15                           ; 004b302e
    PUSH 0x0                            ; 004b3030
    LEA EAX,[ESP + 0x8]                 ; 004b3032
    PUSH EAX                            ; 004b3036
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540 ; 004b3037
        ;   XREF to: 004a5540 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 004b303c
    PUSH 0x1e                           ; 004b303f
    PUSH 0x1                            ; 004b3041
    LEA EAX,[ESP + 0x8]                 ; 004b3043
    PUSH EAX                            ; 004b3047
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540 ; 004b3048
        ;   XREF to: 004a5540 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 004b304d
    PUSH 0x31                           ; 004b3050
    PUSH 0x2                            ; 004b3052
    LEA EAX,[ESP + 0x8]                 ; 004b3054
    PUSH EAX                            ; 004b3058
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540 ; 004b3059
        ;   XREF to: 004a5540 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 004b305e
    PUSH 0x18                           ; 004b3061
    PUSH 0x3                            ; 004b3063
    LEA EAX,[ESP + 0x8]                 ; 004b3065
    PUSH EAX                            ; 004b3069
    CALL shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540 ; 004b306a
        ;   XREF to: 004a5540 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540(CPickList * this_ptr, int item_index, int hotkey_code)
    ADD ESP,0xc                         ; 004b306f
    PUSH 0x0                            ; 004b3072
    MOV EDI,dword ptr [EBX]             ; 004b3074
    PUSH EDI                            ; 004b3076
    MOV EBP,dword ptr [ESP + 0x3c0]     ; 004b3077
    PUSH EBP                            ; 004b307e
    LEA EAX,[ESP + 0xc]                 ; 004b307f
    PUSH EAX                            ; 004b3083
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b3084
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004b3089
    MOV dword ptr [EBX],EAX             ; 004b308c
    TEST EAX,EAX                        ; 004b308e
    JZ 0x004b30bd                       ; 004b3090
        ;   XREF to: 004b30bd (CONDITIONAL_JUMP)  ; LAB_004b30bd
    CMP EAX,0x1                         ; 004b3092
    JZ 0x004b30dc                       ; 004b3095
        ;   XREF to: 004b30dc (CONDITIONAL_JUMP)  ; LAB_004b30dc
    CMP EAX,0x2                         ; 004b3097
    JZ 0x004b30a1                       ; 004b309a
        ;   XREF to: 004b30a1 (CONDITIONAL_JUMP)  ; LAB_004b30a1
    CMP EAX,0x3                         ; 004b309c
    JNZ 0x004b30f9                      ; 004b309f
        ;   XREF to: 004b30f9 (CONDITIONAL_JUMP)  ; LAB_004b30f9
    XOR EBX,EBX                         ; 004b30a1
        ;   Label: LAB_004b30a1
    PUSH EBX                            ; 004b30a3
    LEA EAX,[ESP + 0x4]                 ; 004b30a4
    PUSH EAX                            ; 004b30a8
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b30a9
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b30ae
    MOV EAX,EBX                         ; 004b30b1
    ADD ESP,0x3a8                       ; 004b30b3
    POP EBP                             ; 004b30b9
    POP EDI                             ; 004b30ba
    POP EBX                             ; 004b30bb
    RET                                 ; 004b30bc
    PUSH EAX                            ; 004b30bd
        ;   Label: LAB_004b30bd
    LEA EAX,[ESP + 0x4]                 ; 004b30be
    PUSH EAX                            ; 004b30c2
    MOV EBX,0x1                         ; 004b30c3
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b30c8
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b30cd
    MOV EAX,EBX                         ; 004b30d0
    ADD ESP,0x3a8                       ; 004b30d2
    POP EBP                             ; 004b30d8
    POP EDI                             ; 004b30d9
    POP EBX                             ; 004b30da
    RET                                 ; 004b30db
    PUSH 0x0                            ; 004b30dc
        ;   Label: LAB_004b30dc
    MOV EBX,EAX                         ; 004b30de
    LEA EAX,[ESP + 0x4]                 ; 004b30e0
    PUSH EAX                            ; 004b30e4
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b30e5
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b30ea
    MOV EAX,EBX                         ; 004b30ed
    ADD ESP,0x3a8                       ; 004b30ef
    POP EBP                             ; 004b30f5
    POP EDI                             ; 004b30f6
    POP EBX                             ; 004b30f7
    RET                                 ; 004b30f8
    PUSH 0x0                            ; 004b30f9
        ;   Label: LAB_004b30f9
    LEA EAX,[ESP + 0x4]                 ; 004b30fb
    PUSH EAX                            ; 004b30ff
    MOV EBX,0xffffffff                  ; 004b3100
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b3105
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b310a
    MOV EAX,EBX                         ; 004b310d
    ADD ESP,0x3a8                       ; 004b310f
    POP EBP                             ; 004b3115
    POP EDI                             ; 004b3116
    POP EBX                             ; 004b3117
    RET                                 ; 004b3118


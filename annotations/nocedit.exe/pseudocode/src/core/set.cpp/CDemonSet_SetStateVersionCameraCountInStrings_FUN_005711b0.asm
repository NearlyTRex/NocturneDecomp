; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e0f3a
;
; Referenced Globals:
;   TerminatedCString s_Set_state_version_0064607b
;   TerminatedCString s_s_1_00646091
;   TerminatedCString s_Camera_count_enabled_lis_00646094
;   TerminatedCString s_d_006460b3
;   TerminatedCString s_d_006460b7
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005711b0
        ;   Label: core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0
    PUSH EDI                            ; 005711b1
    PUSH EBP                            ; 005711b2
    MOV EBP,dword ptr [ESP + 0x10]      ; 005711b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005711b7
    PUSH 0x64607b                       ; 005711bb | = "// Set state version\n" | s_Set_state_version_0064607b = // Set state version

    PUSH EDI                            ; 005711c0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005711c1 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005711c6
    PUSH 0x646091                       ; 005711c9 | = "1\n" | s_s_1_00646091 = 1

    PUSH EDI                            ; 005711ce
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005711cf | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005711d4
    PUSH 0x646094                       ; 005711d7 | = "// Camera count, enabled list\n" | s_Camera_count_enabled_lis_00646094 = // Camera count, enabled list

    PUSH EDI                            ; 005711dc
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005711dd | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005711e2
    MOV EDX,dword ptr [EBP]             ; 005711e5
    PUSH EDX                            ; 005711e8
    PUSH 0x6460b3                       ; 005711e9 | = "%d\n" | s_d_006460b3 = %d

    PUSH EDI                            ; 005711ee
    XOR EBX,EBX                         ; 005711ef
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005711f1 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBP]             ; 005711f6
    ADD ESP,0xc                         ; 005711f9
    TEST ECX,ECX                        ; 005711fc
    JLE 0x00571227                      ; 005711fe | LAB_00571227
        ;   XREF to: 00571227 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00571200
    MOV ESI,EBP                         ; 00571201
    MOV EAX,dword ptr [ESI + 0x1a4]     ; 00571203
        ;   Label: LAB_00571203
    PUSH EAX                            ; 00571209
    PUSH 0x6460b7                       ; 0057120a | = "%d\n" | s_d_006460b7 = %d

    PUSH EDI                            ; 0057120f
    ADD ESI,0x1a4                       ; 00571210
    INC EBX                             ; 00571216
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00571217 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBP]             ; 0057121c
    ADD ESP,0xc                         ; 0057121f
    CMP EBX,EDX                         ; 00571222
    JL 0x00571203                       ; 00571224 | LAB_00571203
        ;   XREF to: 00571203 (CONDITIONAL_JUMP)
    POP ESI                             ; 00571226
    POP EBP                             ; 00571227
        ;   Label: LAB_00571227
    POP EDI                             ; 00571228
    POP EBX                             ; 00571229
    RET                                 ; 0057122a


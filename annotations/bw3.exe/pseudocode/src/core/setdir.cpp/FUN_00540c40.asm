; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setdir_cpp_FUN_00540c40(undefined4 *param_1,char *param_2)
;
;
; XREF[1]:
;   core_setdir.cpp_FUN_00540be0 at 00540c12
;
; Referenced Globals:
;   undefined4 DAT_005d0cc6
;   undefined4 DAT_005d0cc9
;   TerminatedCString s_core_setdir_cpp_005d0cce
;   TerminatedCString s_Can_t_create_s_005d0ce1
;   TerminatedCString s_core_setdir_cpp_005d0cf1
;   TerminatedCString s_Error_writing_s_005d0d04
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fwrite_FUN_005a48e0
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540c40
        ;   Label: core_setdir.cpp_FUN_00540c40
    PUSH ESI                            ; 00540c41
    PUSH EDI                            ; 00540c42
    PUSH EBP                            ; 00540c43
    MOV ESI,dword ptr [ESP + 0x18]      ; 00540c44
    PUSH 0x5d0cc6                       ; 00540c48 | DAT_005d0cc6
    PUSH ESI                            ; 00540c4d
    PUSH 0x5d0cc9                       ; 00540c4e | DAT_005d0cc9
    CALL engine_dosio.cpp_FUN_004659c0  ; 00540c53
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00540c58
    MOV EBX,EAX                         ; 00540c5b
    TEST EAX,EAX                        ; 00540c5d
    JNZ 0x00540c85                      ; 00540c5f
        ;   XREF to: 00540c85 (CONDITIONAL_JUMP)  ; LAB_00540c85
    PUSH ESI                            ; 00540c61
    MOV EDX,0x5d0cce                    ; 00540c62 | = "..\\core\\setdir.cpp"
    MOV ECX,0x2b5                       ; 00540c67
    PUSH 0x5d0ce1                       ; 00540c6c | = "Can't create %s"
    MOV dword ptr [0x01d71de0],EDX      ; 00540c71 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00540c77 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00540c7d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00540c82
    MOV EAX,dword ptr [ESP + 0x14]      ; 00540c85
        ;   Label: LAB_00540c85
    PUSH EBX                            ; 00540c89
    MOV EDI,dword ptr [EAX]             ; 00540c8a
    PUSH EDI                            ; 00540c8c
    PUSH 0x3000                         ; 00540c8d
    PUSH 0x212551c                      ; 00540c92
    CALL crt_stdio.c_fwrite_FUN_005a48e0 ; 00540c97
        ;   XREF to: 005a48e0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fwrite_FUN_005a48e0()
    MOV AH,byte ptr [EBX + 0xc]         ; 00540c9c
    ADD ESP,0x10                        ; 00540c9f
    TEST AH,0x20                        ; 00540ca2
    JNZ 0x00540cb5                      ; 00540ca5
        ;   XREF to: 00540cb5 (CONDITIONAL_JUMP)  ; LAB_00540cb5
    PUSH EBX                            ; 00540ca7
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00540ca8
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00540cad
    POP EBP                             ; 00540cb0
    POP EDI                             ; 00540cb1
    POP ESI                             ; 00540cb2
    POP EBX                             ; 00540cb3
    RET                                 ; 00540cb4
    PUSH ESI                            ; 00540cb5
        ;   Label: LAB_00540cb5
    MOV EBP,0x5d0cf1                    ; 00540cb6 | = "..\\core\\setdir.cpp"
    MOV EAX,0x2b7                       ; 00540cbb
    PUSH 0x5d0d04                       ; 00540cc0 | = "Error writing %s"
    MOV dword ptr [0x01d71de0],EBP      ; 00540cc5 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00540ccb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00540cd0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00540cd5
    PUSH EBX                            ; 00540cd8
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00540cd9
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00540cde
    POP EBP                             ; 00540ce1
    POP EDI                             ; 00540ce2
    POP ESI                             ; 00540ce3
    POP EBX                             ; 00540ce4
    RET                                 ; 00540ce5


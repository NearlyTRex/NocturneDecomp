; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dmodel_cpp_skipLines_FUN_00476c80(FILE *file_handle,int line_count)
;
; Parameters:
; FILE *           Stack[0x4]:4   file_handle
; int              Stack[0x8]:4   line_count
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476c80
        ;   Label: core_dmodel.cpp_skipLines_FUN_00476c80
    PUSH ESI                            ; 00476c81
    MOV ESI,dword ptr [ESP + 0x10]      ; 00476c82
    MOV EBX,dword ptr [ESP + 0xc]       ; 00476c86
    TEST ESI,ESI                        ; 00476c8a
    JLE 0x00476ca5                      ; 00476c8c
        ;   XREF to: 00476ca5 (CONDITIONAL_JUMP)  ; LAB_00476ca5
    PUSH EBX                            ; 00476c8e
        ;   Label: LAB_00476c8e
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00476c8f
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 00476c94
    TEST EAX,EAX                        ; 00476c97
    JL 0x00476ca5                       ; 00476c99
        ;   XREF to: 00476ca5 (CONDITIONAL_JUMP)  ; LAB_00476ca5
    CMP EAX,0xa                         ; 00476c9b
    JNZ 0x00476c8e                      ; 00476c9e
        ;   XREF to: 00476c8e (CONDITIONAL_JUMP)  ; LAB_00476c8e
    DEC ESI                             ; 00476ca0
    TEST ESI,ESI                        ; 00476ca1
    JG 0x00476c8e                       ; 00476ca3
        ;   XREF to: 00476c8e (CONDITIONAL_JUMP)  ; LAB_00476c8e
    POP ESI                             ; 00476ca5
        ;   Label: LAB_00476ca5
    POP EBX                             ; 00476ca6
    RET                                 ; 00476ca7


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_setedit.cpp_FUN_00578a00()
;
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578a00
        ;   Label: core_setedit.cpp_FUN_00578a00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00578a01
    PUSH EBX                            ; 00578a05
        ;   Label: LAB_00578a05
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00578a06
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 00578a0b
    TEST EAX,EAX                        ; 00578a0e
    JL 0x00578a17                       ; 00578a10
        ;   XREF to: 00578a17 (CONDITIONAL_JUMP)  ; LAB_00578a17
    CMP EAX,0xa                         ; 00578a12
    JNZ 0x00578a05                      ; 00578a15
        ;   XREF to: 00578a05 (CONDITIONAL_JUMP)  ; LAB_00578a05
    POP EBX                             ; 00578a17
        ;   Label: LAB_00578a17
    RET                                 ; 00578a18


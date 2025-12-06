; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_morph.cpp_FUN_0052cd30()
;
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052cd30
        ;   Label: core_morph.cpp_FUN_0052cd30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052cd31
    PUSH EBX                            ; 0052cd35
        ;   Label: LAB_0052cd35
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0052cd36 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052cd3b
    TEST EAX,EAX                        ; 0052cd3e
    JL 0x0052cd47                       ; 0052cd40 | LAB_0052cd47
        ;   XREF to: 0052cd47 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 0052cd42
    JNZ 0x0052cd35                      ; 0052cd45 | LAB_0052cd35
        ;   XREF to: 0052cd35 (CONDITIONAL_JUMP)
    POP EBX                             ; 0052cd47
        ;   Label: LAB_0052cd47
    RET                                 ; 0052cd48


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeledit_cpp_FUN_00589740(void)
;
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH 0x10                           ; 00589740
        ;   Label: core_skeledit.cpp_FUN_00589740
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00589745
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058974a
    PUSH ESI                            ; 0058974b
    MOV ESI,dword ptr [ESP + 0xc]       ; 0058974c
    MOV EBX,dword ptr [ESP + 0x10]      ; 00589750
    MOV byte ptr [EBX],0x0              ; 00589754
    PUSH ESI                            ; 00589757
        ;   Label: LAB_00589757
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00589758
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058975d
    TEST EAX,EAX                        ; 00589760
    JL 0x005897a3                       ; 00589762
        ;   XREF to: 005897a3 (CONDITIONAL_JUMP)  ; LAB_005897a3
    CMP EAX,0xa                         ; 00589764
    JZ 0x005897a3                       ; 00589767
        ;   XREF to: 005897a3 (CONDITIONAL_JUMP)  ; LAB_005897a3
    CMP EAX,0x22                        ; 00589769
    JNZ 0x00589757                      ; 0058976c
        ;   XREF to: 00589757 (CONDITIONAL_JUMP)  ; LAB_00589757
    PUSH ESI                            ; 0058976e
        ;   Label: LAB_0058976e
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058976f
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00589774
    MOV EDX,EAX                         ; 00589777
    TEST EAX,EAX                        ; 00589779
    JL 0x005897a3                       ; 0058977b
        ;   XREF to: 005897a3 (CONDITIONAL_JUMP)  ; LAB_005897a3
    CMP EAX,0xa                         ; 0058977d
    JZ 0x005897a3                       ; 00589780
        ;   XREF to: 005897a3 (CONDITIONAL_JUMP)  ; LAB_005897a3
    CMP EAX,0x22                        ; 00589782
    JNZ 0x005897a6                      ; 00589785
        ;   XREF to: 005897a6 (CONDITIONAL_JUMP)  ; LAB_005897a6
    MOV EBX,0x1                         ; 00589787
    PUSH ESI                            ; 0058978c
        ;   Label: LAB_0058978c
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058978d
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00589792
    TEST EAX,EAX                        ; 00589795
    JL 0x005897a3                       ; 00589797
        ;   XREF to: 005897a3 (CONDITIONAL_JUMP)  ; LAB_005897a3
    CMP EAX,0xa                         ; 00589799
    JNZ 0x0058978c                      ; 0058979c
        ;   XREF to: 0058978c (CONDITIONAL_JUMP)  ; LAB_0058978c
    DEC EBX                             ; 0058979e
    TEST EBX,EBX                        ; 0058979f
    JG 0x0058978c                       ; 005897a1
        ;   XREF to: 0058978c (CONDITIONAL_JUMP)  ; LAB_0058978c
    POP ESI                             ; 005897a3
        ;   Label: LAB_005897a3
    POP EBX                             ; 005897a4
    RET                                 ; 005897a5
    INC EBX                             ; 005897a6
        ;   Label: LAB_005897a6
    MOV byte ptr [EBX + -0x1],DL        ; 005897a7
    MOV byte ptr [EBX],0x0              ; 005897aa
    JMP 0x0058976e                      ; 005897ad
        ;   XREF to: 0058976e (UNCONDITIONAL_JUMP)  ; LAB_0058976e


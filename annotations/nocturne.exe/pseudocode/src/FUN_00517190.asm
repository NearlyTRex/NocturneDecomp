; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00517190(undefined4 param_1)
;
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_00564570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517190
        ;   Label: FUN_00517190
    MOV EBX,dword ptr [ESP + 0x8]       ; 00517191
    PUSH EBX                            ; 00517195
        ;   Label: LAB_00517195
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00517196
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0051719b
    TEST EAX,EAX                        ; 0051719e
    JL 0x005171a7                       ; 005171a0
        ;   XREF to: 005171a7 (CONDITIONAL_JUMP)  ; LAB_005171a7
    CMP EAX,0xa                         ; 005171a2
    JNZ 0x00517195                      ; 005171a5
        ;   XREF to: 00517195 (CONDITIONAL_JUMP)  ; LAB_00517195
    POP EBX                             ; 005171a7
        ;   Label: LAB_005171a7
    RET                                 ; 005171a8


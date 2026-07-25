; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043b5b0(void)
;
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_00564570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b5b0
        ;   Label: FUN_0043b5b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043b5b1
    PUSH EBX                            ; 0043b5b5
        ;   Label: LAB_0043b5b5
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0043b5b6
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0043b5bb
    TEST EAX,EAX                        ; 0043b5be
    JL 0x0043b5c7                       ; 0043b5c0
        ;   XREF to: 0043b5c7 (CONDITIONAL_JUMP)  ; LAB_0043b5c7
    CMP EAX,0xa                         ; 0043b5c2
    JNZ 0x0043b5b5                      ; 0043b5c5
        ;   XREF to: 0043b5b5 (CONDITIONAL_JUMP)  ; LAB_0043b5b5
    POP EBX                             ; 0043b5c7
        ;   Label: LAB_0043b5c7
    RET                                 ; 0043b5c8


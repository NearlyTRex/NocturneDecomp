; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d7de0(void)
;
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_00564570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7de0
        ;   Label: FUN_004d7de0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d7de1
    PUSH EBX                            ; 004d7de5
        ;   Label: LAB_004d7de5
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 004d7de6
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 004d7deb
    TEST EAX,EAX                        ; 004d7dee
    JL 0x004d7df7                       ; 004d7df0
        ;   XREF to: 004d7df7 (CONDITIONAL_JUMP)  ; LAB_004d7df7
    CMP EAX,0xa                         ; 004d7df2
    JNZ 0x004d7de5                      ; 004d7df5
        ;   XREF to: 004d7de5 (CONDITIONAL_JUMP)  ; LAB_004d7de5
    POP EBX                             ; 004d7df7
        ;   Label: LAB_004d7df7
    RET                                 ; 004d7df8


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00543810(void)
;
;
; Called Functions:
;   FUN_00543840
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x150                          ; 00543810
        ;   Label: FUN_00543810
    CALL FUN_0056497c                   ; 00543815
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0054381a
    TEST EAX,EAX                        ; 0054381d
    JNZ 0x00543822                      ; 0054381f
        ;   XREF to: 00543822 (CONDITIONAL_JUMP)  ; LAB_00543822
    RET                                 ; 00543821
    PUSH EAX                            ; 00543822
        ;   Label: LAB_00543822
    CALL FUN_00543840                   ; 00543823
        ;   XREF to: 00543840 (UNCONDITIONAL_CALL)  ; undefined FUN_00543840()
    ADD ESP,0x4                         ; 00543828
    RET                                 ; 0054382b


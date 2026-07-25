; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534780(void)
;
;
; Called Functions:
;   FUN_005347b0
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xa2c                          ; 00534780
        ;   Label: FUN_00534780
    CALL FUN_0056497c                   ; 00534785
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0053478a
    TEST EAX,EAX                        ; 0053478d
    JNZ 0x00534792                      ; 0053478f
        ;   XREF to: 00534792 (CONDITIONAL_JUMP)  ; LAB_00534792
    RET                                 ; 00534791
    PUSH EAX                            ; 00534792
        ;   Label: LAB_00534792
    CALL FUN_005347b0                   ; 00534793
        ;   XREF to: 005347b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005347b0()
    ADD ESP,0x4                         ; 00534798
    RET                                 ; 0053479b


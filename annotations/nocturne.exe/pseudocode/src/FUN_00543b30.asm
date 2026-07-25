; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00543b30(void)
;
;
; Called Functions:
;   FUN_00543b60
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd94                         ; 00543b30
        ;   Label: FUN_00543b30
    CALL FUN_0056497c                   ; 00543b35
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 00543b3a
    TEST EAX,EAX                        ; 00543b3d
    JNZ 0x00543b42                      ; 00543b3f
        ;   XREF to: 00543b42 (CONDITIONAL_JUMP)  ; LAB_00543b42
    RET                                 ; 00543b41
    PUSH EAX                            ; 00543b42
        ;   Label: LAB_00543b42
    CALL FUN_00543b60                   ; 00543b43
        ;   XREF to: 00543b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00543b60()
    ADD ESP,0x4                         ; 00543b48
    RET                                 ; 00543b4b


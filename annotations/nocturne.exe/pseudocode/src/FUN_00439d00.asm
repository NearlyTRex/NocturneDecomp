; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00439d00(void)
;
;
; Called Functions:
;   FUN_00439d30
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1fa54                        ; 00439d00
        ;   Label: FUN_00439d00
    CALL FUN_0056497c                   ; 00439d05
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 00439d0a
    TEST EAX,EAX                        ; 00439d0d
    JNZ 0x00439d12                      ; 00439d0f
        ;   XREF to: 00439d12 (CONDITIONAL_JUMP)  ; LAB_00439d12
    RET                                 ; 00439d11
    PUSH EAX                            ; 00439d12
        ;   Label: LAB_00439d12
    CALL FUN_00439d30                   ; 00439d13
        ;   XREF to: 00439d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00439d30()
    ADD ESP,0x4                         ; 00439d18
    RET                                 ; 00439d1b


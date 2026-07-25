; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043bbb0(void)
;
;
; Called Functions:
;   FUN_0043bbe0
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd58                         ; 0043bbb0
        ;   Label: FUN_0043bbb0
    CALL FUN_0056497c                   ; 0043bbb5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0043bbba
    TEST EAX,EAX                        ; 0043bbbd
    JNZ 0x0043bbc2                      ; 0043bbbf
        ;   XREF to: 0043bbc2 (CONDITIONAL_JUMP)  ; LAB_0043bbc2
    RET                                 ; 0043bbc1
    PUSH EAX                            ; 0043bbc2
        ;   Label: LAB_0043bbc2
    CALL FUN_0043bbe0                   ; 0043bbc3
        ;   XREF to: 0043bbe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043bbe0()
    ADD ESP,0x4                         ; 0043bbc8
    RET                                 ; 0043bbcb


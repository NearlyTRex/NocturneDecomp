; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048eec0(void)
;
;
; Called Functions:
;   FUN_0048eef0
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x2a18                         ; 0048eec0
        ;   Label: FUN_0048eec0
    CALL FUN_0056497c                   ; 0048eec5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0048eeca
    TEST EAX,EAX                        ; 0048eecd
    JNZ 0x0048eed2                      ; 0048eecf
        ;   XREF to: 0048eed2 (CONDITIONAL_JUMP)  ; LAB_0048eed2
    RET                                 ; 0048eed1
    PUSH EAX                            ; 0048eed2
        ;   Label: LAB_0048eed2
    CALL FUN_0048eef0                   ; 0048eed3
        ;   XREF to: 0048eef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048eef0()
    ADD ESP,0x4                         ; 0048eed8
    RET                                 ; 0048eedb


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043c7e0(void)
;
;
; Called Functions:
;   FUN_0043c810
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x2f4                          ; 0043c7e0
        ;   Label: FUN_0043c7e0
    CALL FUN_0056497c                   ; 0043c7e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0043c7ea
    TEST EAX,EAX                        ; 0043c7ed
    JNZ 0x0043c7f2                      ; 0043c7ef
        ;   XREF to: 0043c7f2 (CONDITIONAL_JUMP)  ; LAB_0043c7f2
    RET                                 ; 0043c7f1
    PUSH EAX                            ; 0043c7f2
        ;   Label: LAB_0043c7f2
    CALL FUN_0043c810                   ; 0043c7f3
        ;   XREF to: 0043c810 (UNCONDITIONAL_CALL)  ; undefined FUN_0043c810()
    ADD ESP,0x4                         ; 0043c7f8
    RET                                 ; 0043c7fb


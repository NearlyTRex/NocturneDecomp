; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041fb80(void)
;
;
; Called Functions:
;   FUN_0041fbb0
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd54                         ; 0041fb80
        ;   Label: FUN_0041fb80
    CALL FUN_0056497c                   ; 0041fb85
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 0041fb8a
    TEST EAX,EAX                        ; 0041fb8d
    JNZ 0x0041fb92                      ; 0041fb8f
        ;   XREF to: 0041fb92 (CONDITIONAL_JUMP)  ; LAB_0041fb92
    RET                                 ; 0041fb91
    PUSH EAX                            ; 0041fb92
        ;   Label: LAB_0041fb92
    CALL FUN_0041fbb0                   ; 0041fb93
        ;   XREF to: 0041fbb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041fbb0()
    ADD ESP,0x4                         ; 0041fb98
    RET                                 ; 0041fb9b


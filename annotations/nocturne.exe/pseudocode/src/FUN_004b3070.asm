; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b3070(void)
;
;
; Called Functions:
;   FUN_004b30a0
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1fa54                        ; 004b3070
        ;   Label: FUN_004b3070
    CALL FUN_0056497c                   ; 004b3075
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004b307a
    TEST EAX,EAX                        ; 004b307d
    JNZ 0x004b3082                      ; 004b307f
        ;   XREF to: 004b3082 (CONDITIONAL_JUMP)  ; LAB_004b3082
    RET                                 ; 004b3081
    PUSH EAX                            ; 004b3082
        ;   Label: LAB_004b3082
    CALL FUN_004b30a0                   ; 004b3083
        ;   XREF to: 004b30a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b30a0()
    ADD ESP,0x4                         ; 004b3088
    RET                                 ; 004b308b


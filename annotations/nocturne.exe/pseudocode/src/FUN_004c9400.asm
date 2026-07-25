; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c9400(void)
;
;
; Called Functions:
;   FUN_004c9430
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x150c                         ; 004c9400
        ;   Label: FUN_004c9400
    CALL FUN_0056497c                   ; 004c9405
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004c940a
    TEST EAX,EAX                        ; 004c940d
    JNZ 0x004c9412                      ; 004c940f
        ;   XREF to: 004c9412 (CONDITIONAL_JUMP)  ; LAB_004c9412
    RET                                 ; 004c9411
    PUSH EAX                            ; 004c9412
        ;   Label: LAB_004c9412
    CALL FUN_004c9430                   ; 004c9413
        ;   XREF to: 004c9430 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9430()
    ADD ESP,0x4                         ; 004c9418
    RET                                 ; 004c941b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004120d0(void)
;
;
; XREF[1]:
;   FUN_004120a0 at 004120ac
;
; Called Functions:
;   FUN_00412100
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd6c                         ; 004120d0
        ;   Label: FUN_004120d0
    CALL FUN_0056497c                   ; 004120d5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004120da
    TEST EAX,EAX                        ; 004120dd
    JNZ 0x004120e2                      ; 004120df
        ;   XREF to: 004120e2 (CONDITIONAL_JUMP)  ; LAB_004120e2
    RET                                 ; 004120e1
    PUSH EAX                            ; 004120e2
        ;   Label: LAB_004120e2
    CALL FUN_00412100                   ; 004120e3
        ;   XREF to: 00412100 (UNCONDITIONAL_CALL)  ; undefined FUN_00412100()
    ADD ESP,0x4                         ; 004120e8
    RET                                 ; 004120eb


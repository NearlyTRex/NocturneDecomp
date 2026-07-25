; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a89e0(void)
;
;
; Called Functions:
;   FUN_004a8a10
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x2d0                          ; 004a89e0
        ;   Label: FUN_004a89e0
    CALL FUN_0056497c                   ; 004a89e5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004a89ea
    TEST EAX,EAX                        ; 004a89ed
    JNZ 0x004a89f2                      ; 004a89ef
        ;   XREF to: 004a89f2 (CONDITIONAL_JUMP)  ; LAB_004a89f2
    RET                                 ; 004a89f1
    PUSH EAX                            ; 004a89f2
        ;   Label: LAB_004a89f2
    CALL FUN_004a8a10                   ; 004a89f3
        ;   XREF to: 004a8a10 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8a10()
    ADD ESP,0x4                         ; 004a89f8
    RET                                 ; 004a89fb


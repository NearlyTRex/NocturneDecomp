; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b46c0(void)
;
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x7bbff8                       ; 005b46c0
        ;   Label: FUN_005b46c0
    PUSH 0x4                            ; 005b46c5
    PUSH 0x61ed58                       ; 005b46c7
    PUSH 0x5b46f0                       ; 005b46cc
    PUSH 0x5f1400                       ; 005b46d1
    PUSH 0x267a350                      ; 005b46d6
    CALL FUN_0040c450                   ; 005b46db
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 005b46e0
    RET                                 ; 005b46e3


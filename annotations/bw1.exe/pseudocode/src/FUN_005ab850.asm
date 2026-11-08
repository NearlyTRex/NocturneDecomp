; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ab850(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c8ae0c                      ; 005ab850
        ;   Label: FUN_005ab850
    PUSH 0x2                            ; 005ab855
    PUSH 0x626020                       ; 005ab857
    PUSH 0x5ab990                       ; 005ab85c
    PUSH 0x5f93eb                       ; 005ab861
    PUSH 0x2c992c4                      ; 005ab866
    CALL FUN_0040c160                   ; 005ab86b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 005ab870
    RET                                 ; 005ab873


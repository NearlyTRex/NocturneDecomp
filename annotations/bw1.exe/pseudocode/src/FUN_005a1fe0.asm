; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1fe0(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 005a1fe0
        ;   Label: FUN_005a1fe0
    PUSH 0x2                            ; 005a1fe5
    PUSH 0x625c04                       ; 005a1fe7
    PUSH 0x5a2010                       ; 005a1fec
    PUSH 0x5f89a8                       ; 005a1ff1
    PUSH 0x2c8ae74                      ; 005a1ff6
    CALL FUN_0040c160                   ; 005a1ffb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 005a2000
    RET                                 ; 005a2003


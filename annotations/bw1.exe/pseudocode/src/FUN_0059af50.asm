; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059af50(void)
;
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x7c2ff8                       ; 0059af50
        ;   Label: FUN_0059af50
    PUSH 0xd                            ; 0059af55
    PUSH 0x625a84                       ; 0059af57
    PUSH 0x59af80                       ; 0059af5c
    PUSH 0x5f8074                       ; 0059af61
    PUSH 0x2c8ae0c                      ; 0059af66
    CALL FUN_0040c160                   ; 0059af6b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 0059af70
    RET                                 ; 0059af73


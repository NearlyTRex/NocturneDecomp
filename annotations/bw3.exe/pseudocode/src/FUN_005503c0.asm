; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005503c0(void)
;
;
; XREF[1]:
;   FUN_004f6a80 at 004f6aaa
;
; Referenced Globals:
;   undefined4 DAT_02802f5c
;   undefined4 DAT_02cd28bc
;
; Called Functions:
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH 0xa0                           ; 005503c0
        ;   Label: FUN_005503c0
    PUSH 0x0                            ; 005503c5
    PUSH 0x2cd28bc                      ; 005503c7 | DAT_02cd28bc
    CALL FUN_005a28f0                   ; 005503cc
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 005503d1
    PUSH 0x100                          ; 005503d4
    PUSH 0x0                            ; 005503d9
    PUSH 0x2802f5c                      ; 005503db | DAT_02802f5c
    CALL FUN_005a28f0                   ; 005503e0
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 005503e5
    RET                                 ; 005503e8


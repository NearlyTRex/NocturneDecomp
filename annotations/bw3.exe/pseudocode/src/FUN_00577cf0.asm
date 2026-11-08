; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00577cf0(void)
;
;
; Called Functions:
;   FUN_0040c3a0
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH 0x5db0f0                       ; 00577cf0
        ;   Label: FUN_00577cf0
    PUSH 0x64                           ; 00577cf5
    PUSH 0x2d059b8                      ; 00577cf7
    CALL FUN_005a30d7                   ; 00577cfc
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 00577d01
    PUSH 0x5ddf50                       ; 00577d04
    PUSH 0x64                           ; 00577d09
    PUSH 0x2d05e68                      ; 00577d0b
    CALL FUN_005a30d7                   ; 00577d10
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 00577d15
    PUSH 0x7df978                       ; 00577d18
    PUSH 0x7                            ; 00577d1d
    PUSH 0x607184                       ; 00577d1f
    PUSH 0x577d60                       ; 00577d24
    PUSH 0x5d71db                       ; 00577d29
    PUSH 0x2d09ce8                      ; 00577d2e
    CALL FUN_0040c3a0                   ; 00577d33
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 00577d38
    PUSH 0x2d09ce8                      ; 00577d3b
    PUSH 0x1                            ; 00577d40
    PUSH 0x607188                       ; 00577d42
    PUSH 0x578ff0                       ; 00577d47
    PUSH 0x5d71e7                       ; 00577d4c
    PUSH 0x2d09d24                      ; 00577d51
    CALL FUN_0040c3a0                   ; 00577d56
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 00577d5b
    RET                                 ; 00577d5e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00549180(void)
;
;
; XREF[1]:
;   FUN_004fc350 at 004fc37a
;
; Called Functions:
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH 0xa0                           ; 00549180
        ;   Label: FUN_00549180
    PUSH 0x0                            ; 00549185
    PUSH 0x2628554                      ; 00549187
    CALL FUN_005b77c0                   ; 0054918c
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 00549191
    PUSH 0x100                          ; 00549194
    PUSH 0x0                            ; 00549199
    PUSH 0x2177ff4                      ; 0054919b
    CALL FUN_005b77c0                   ; 005491a0
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 005491a5
    RET                                 ; 005491a8


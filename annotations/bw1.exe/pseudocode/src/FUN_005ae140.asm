; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ae140(void)
;
;
; Called Functions:
;   FUN_005ae170
;   FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH 0x2c997c0                      ; 005ae140
        ;   Label: FUN_005ae140
    CALL FUN_005ae170                   ; 005ae145
        ;   XREF to: 005ae170 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae170()
    ADD ESP,0x4                         ; 005ae14a
    PUSH 0x5fb430                       ; 005ae14d
    PUSH 0xc8                           ; 005ae152
    PUSH 0x2c997f8                      ; 005ae157
    CALL FUN_005c0357                   ; 005ae15c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 005ae161
    RET                                 ; 005ae164


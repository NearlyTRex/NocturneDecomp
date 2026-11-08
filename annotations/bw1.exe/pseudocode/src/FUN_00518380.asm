; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00518380(void)
;
;
; Called Functions:
;   FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH 0x5fb430                       ; 00518380
        ;   Label: FUN_00518380
    PUSH 0x20                           ; 00518385
    PUSH 0x1d2c5d4                      ; 00518387
    CALL FUN_005c0357                   ; 0051838c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00518391
    PUSH 0x5fb430                       ; 00518394
    PUSH 0x20                           ; 00518399
    PUSH 0x1d2c758                      ; 0051839b
    CALL FUN_005c0357                   ; 005183a0
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 005183a5
    RET                                 ; 005183a8


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054ae20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fbc24
;   undefined4 DAT_005fbc28
;   undefined4 DAT_0263cf10
;
; Called Functions:
;   FUN_005b7f5f
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    FLD float ptr [0x005fbc28]          ; 0054ae20 | DAT_005fbc28
        ;   Label: FUN_0054ae20
    FDIV float ptr [0x005fbc24]         ; 0054ae26 | DAT_005fbc24
    PUSH 0x5fbc40                       ; 0054ae2c
    PUSH 0x40                           ; 0054ae31
    PUSH 0x263cf1c                      ; 0054ae33
    FSTP float ptr [0x0263cf10]         ; 0054ae38 | DAT_0263cf10
    CALL FUN_005b7f5f                   ; 0054ae3e
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 0054ae43
    PUSH 0x5fbc60                       ; 0054ae46
    PUSH 0x8                            ; 0054ae4b
    PUSH 0x2641620                      ; 0054ae4d
    CALL FUN_005b7f5f                   ; 0054ae52
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 0054ae57
    PUSH 0x5fbc80                       ; 0054ae5a
    PUSH 0x40                           ; 0054ae5f
    PUSH 0x2641924                      ; 0054ae61
    CALL FUN_005b7f5f                   ; 0054ae66
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 0054ae6b
    PUSH 0x61bc60                       ; 0054ae6e
    CALL FUN_005b8d8c                   ; 0054ae73
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 0054ae78
    RET                                 ; 0054ae7b


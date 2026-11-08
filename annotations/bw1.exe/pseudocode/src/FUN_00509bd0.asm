; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00509bd0(void)
;
;
; Called Functions:
;   FUN_0040d0a0
;   FUN_00521bc0
;   FUN_005c0357
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 00509bd0
        ;   Label: FUN_00509bd0
    PUSH 0x8                            ; 00509bd5
    PUSH 0x1d1e2e0                      ; 00509bd7
    CALL FUN_005c0357                   ; 00509bdc
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00509be1
    PUSH 0x61f450                       ; 00509be4
    CALL FUN_005c1093                   ; 00509be9
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00509bee
    PUSH 0x1d1e380                      ; 00509bf1
    CALL FUN_00521bc0                   ; 00509bf6
        ;   XREF to: 00521bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00521bc0()
    ADD ESP,0x4                         ; 00509bfb
    PUSH 0x61f460                       ; 00509bfe
    CALL FUN_005c1093                   ; 00509c03
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00509c08
    PUSH 0x1d1ee50                      ; 00509c0b
    CALL FUN_0040d0a0                   ; 00509c10
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 00509c15
    PUSH 0x61f470                       ; 00509c18
    CALL FUN_005c1093                   ; 00509c1d
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00509c22
    PUSH 0x1d1ee64                      ; 00509c25
    CALL FUN_0040d0a0                   ; 00509c2a
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 00509c2f
    PUSH 0x61f480                       ; 00509c32
    CALL FUN_005c1093                   ; 00509c37
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00509c3c
    PUSH 0x1d1ee78                      ; 00509c3f
    CALL FUN_0040d0a0                   ; 00509c44
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 00509c49
    PUSH 0x61f490                       ; 00509c4c
    CALL FUN_005c1093                   ; 00509c51
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00509c56
    PUSH 0x1d1eea0                      ; 00509c59
    CALL FUN_0040d0a0                   ; 00509c5e
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 00509c63
    PUSH 0x61f4a0                       ; 00509c66
    CALL FUN_005c1093                   ; 00509c6b
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00509c70
    RET                                 ; 00509c73


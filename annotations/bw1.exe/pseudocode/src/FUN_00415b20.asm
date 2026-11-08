; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00415b20(void)
;
;
; Called Functions:
;   FUN_00415d90
;   FUN_004175f0
;   FUN_005c0357
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 00415b20
        ;   Label: FUN_00415b20
    PUSH 0x4                            ; 00415b25
    PUSH 0x7c3984                       ; 00415b27
    CALL FUN_005c0357                   ; 00415b2c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00415b31
    PUSH 0x610a05                       ; 00415b34
    CALL FUN_005c1093                   ; 00415b39
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00415b3e
    PUSH 0x5fca10                       ; 00415b41
    PUSH 0x5                            ; 00415b46
    PUSH 0x7c39d4                       ; 00415b48
    CALL FUN_005c0357                   ; 00415b4d
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00415b52
    PUSH 0x610a15                       ; 00415b55
    CALL FUN_005c1093                   ; 00415b5a
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00415b5f
    PUSH 0x7c3a38                       ; 00415b62
    CALL FUN_00415d90                   ; 00415b67
        ;   XREF to: 00415d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00415d90()
    ADD ESP,0x4                         ; 00415b6c
    PUSH 0x610a25                       ; 00415b6f
    CALL FUN_005c1093                   ; 00415b74
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00415b79
    PUSH 0x7c4670                       ; 00415b7c
    CALL FUN_004175f0                   ; 00415b81
        ;   XREF to: 004175f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004175f0()
    ADD ESP,0x4                         ; 00415b86
    PUSH 0x610a35                       ; 00415b89
    CALL FUN_005c1093                   ; 00415b8e
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00415b93
    RET                                 ; 00415b96


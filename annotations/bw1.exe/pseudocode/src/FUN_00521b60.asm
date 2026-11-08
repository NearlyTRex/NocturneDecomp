; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00521b60(void)
;
;
; Called Functions:
;   FUN_0040d0a0
;   FUN_005c0357
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1d33ce4                      ; 00521b60
        ;   Label: FUN_00521b60
    CALL FUN_0040d0a0                   ; 00521b65
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 00521b6a
    PUSH 0x61f800                       ; 00521b6d
    CALL FUN_005c1093                   ; 00521b72
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00521b77
    PUSH 0x5fca10                       ; 00521b7a
    PUSH 0x1e                           ; 00521b7f
    PUSH 0x1d33cf8                      ; 00521b81
    CALL FUN_005c0357                   ; 00521b86
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00521b8b
    PUSH 0x61f810                       ; 00521b8e
    CALL FUN_005c1093                   ; 00521b93
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00521b98
    PUSH 0x1d33f50                      ; 00521b9b
    CALL FUN_0040d0a0                   ; 00521ba0
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 00521ba5
    PUSH 0x61f820                       ; 00521ba8
    CALL FUN_005c1093                   ; 00521bad
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 00521bb2
    RET                                 ; 00521bb5


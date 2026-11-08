; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574e00(void)
;
;
; XREF[1]:
;   FUN_0057cb10 at 0057cb25
;
; Called Functions:
;   FUN_00573b30
;   FUN_00573c50
;   FUN_00573ec0
;   FUN_00573f20
;   FUN_00573fa0
;   FUN_00573fe0
;   FUN_005754d0
;   FUN_005756d0
;   FUN_00575870
;   FUN_005759a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574e00
        ;   Label: FUN_00574e00
    XOR EBX,EBX                         ; 00574e01
    PUSH 0x3f800000                     ; 00574e03
        ;   Label: LAB_00574e03
    PUSH EBX                            ; 00574e08
    CALL FUN_00573b30                   ; 00574e09
        ;   XREF to: 00573b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00573b30()
    ADD ESP,0x8                         ; 00574e0e
    PUSH 0x1                            ; 00574e11
    PUSH EBX                            ; 00574e13
    CALL FUN_00573c50                   ; 00574e14
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00573c50()
    INC EBX                             ; 00574e19
    ADD ESP,0x8                         ; 00574e1a
    CMP EBX,0x20                        ; 00574e1d
    JL 0x00574e03                       ; 00574e20
        ;   XREF to: 00574e03 (CONDITIONAL_JUMP)  ; LAB_00574e03
    PUSH 0x3f800000                     ; 00574e22
    CALL FUN_00573fe0                   ; 00574e27
        ;   XREF to: 00573fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573fe0()
    ADD ESP,0x4                         ; 00574e2c
    PUSH 0x0                            ; 00574e2f
    PUSH 0x0                            ; 00574e31
    PUSH 0x0                            ; 00574e33
    PUSH 0x0                            ; 00574e35
    PUSH 0x0                            ; 00574e37
    PUSH 0x0                            ; 00574e39
    CALL FUN_00573ec0                   ; 00574e3b
        ;   XREF to: 00573ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573ec0()
    ADD ESP,0x18                        ; 00574e40
    PUSH 0x3f800000                     ; 00574e43
    PUSH 0x0                            ; 00574e48
    PUSH 0x0                            ; 00574e4a
    PUSH 0x0                            ; 00574e4c
    PUSH 0x3f800000                     ; 00574e4e
    PUSH 0x0                            ; 00574e53
    PUSH 0x0                            ; 00574e55
    PUSH 0x0                            ; 00574e57
    PUSH 0x3f800000                     ; 00574e59
    CALL FUN_00573f20                   ; 00574e5e
        ;   XREF to: 00573f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00573f20()
    ADD ESP,0x24                        ; 00574e63
    PUSH 0x0                            ; 00574e66
    PUSH 0x0                            ; 00574e68
    PUSH 0x0                            ; 00574e6a
    CALL FUN_00573fa0                   ; 00574e6c
        ;   XREF to: 00573fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573fa0()
    ADD ESP,0xc                         ; 00574e71
    CALL FUN_005756d0                   ; 00574e74
        ;   XREF to: 005756d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005756d0()
    PUSH EAX                            ; 00574e79
    CALL FUN_005754d0                   ; 00574e7a
        ;   XREF to: 005754d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005754d0()
    ADD ESP,0x4                         ; 00574e7f
    CALL FUN_005759a0                   ; 00574e82
        ;   XREF to: 005759a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005759a0()
    PUSH EAX                            ; 00574e87
    CALL FUN_00575870                   ; 00574e88
        ;   XREF to: 00575870 (UNCONDITIONAL_CALL)  ; undefined FUN_00575870()
    ADD ESP,0x4                         ; 00574e8d
    POP EBX                             ; 00574e90
    RET                                 ; 00574e91


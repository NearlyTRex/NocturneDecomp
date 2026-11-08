; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00548f80(void)
;
;
; XREF[3]:
;   FUN_004e4e20 at 004e4e69
;   FUN_004fcf50 at 004fcf5a
;   FUN_00549090 at 00549097
;
; Called Functions:
;   FUN_00541160
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548f80
        ;   Label: FUN_00548f80
    PUSH ESI                            ; 00548f81
    MOV EBX,0x20ccff4                   ; 00548f82
    LEA ESI,[EBX + 0xab000]             ; 00548f87
    PUSH EBX                            ; 00548f8d
        ;   Label: LAB_00548f8d
    CALL FUN_00541160                   ; 00548f8e
        ;   XREF to: 00541160 (UNCONDITIONAL_CALL)  ; undefined FUN_00541160()
    ADD EBX,0x2ac0                      ; 00548f93
    ADD ESP,0x4                         ; 00548f99
    CMP EBX,ESI                         ; 00548f9c
    JNZ 0x00548f8d                      ; 00548f9e
        ;   XREF to: 00548f8d (CONDITIONAL_JUMP)  ; LAB_00548f8d
    PUSH 0x100                          ; 00548fa0
    PUSH 0x0                            ; 00548fa5
    PUSH 0x2177ff4                      ; 00548fa7
    CALL FUN_005b77c0                   ; 00548fac
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 00548fb1
    POP ESI                             ; 00548fb4
    POP EBX                             ; 00548fb5
    RET                                 ; 00548fb6


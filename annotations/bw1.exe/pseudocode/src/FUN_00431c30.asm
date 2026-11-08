; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00431c30(int param_1)
;
;
; XREF[2]:
;   FUN_00476430 at 00476450
;   FUN_00591d50 at 00591d70
;
; Referenced Globals:
;   undefined4 DAT_005d5a90
;   undefined4 DAT_005d5a94
;   TerminatedCString s_DEAD_POSSUM_005d5a99
;
; Called Functions:
;   FUN_00524a10
;   FUN_005c04e0
;   FUN_005c1210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431c30
        ;   Label: FUN_00431c30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00431c31
    MOV EDX,dword ptr [EBX + 0x70]      ; 00431c35
    CMP EDX,0x2                         ; 00431c38
    JNZ 0x00431c41                      ; 00431c3b
        ;   XREF to: 00431c41 (CONDITIONAL_JUMP)  ; LAB_00431c41
    MOV EAX,EDX                         ; 00431c3d
    POP EBX                             ; 00431c3f
    RET                                 ; 00431c40
    PUSH 0x3                            ; 00431c41
        ;   Label: LAB_00431c41
    PUSH 0x5d5a90                       ; 00431c43 | DAT_005d5a90
    ADD EBX,0x158                       ; 00431c48
    PUSH EBX                            ; 00431c4e
    CALL FUN_00524a10                   ; 00431c4f
        ;   XREF to: 00524a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a10()
    ADD ESP,0x4                         ; 00431c54
    PUSH EAX                            ; 00431c57
    CALL FUN_005c1210                   ; 00431c58
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1210()
    ADD ESP,0xc                         ; 00431c5d
    TEST EAX,EAX                        ; 00431c60
    JNZ 0x00431c6b                      ; 00431c62
        ;   XREF to: 00431c6b (CONDITIONAL_JUMP)  ; LAB_00431c6b
    MOV EAX,0x1                         ; 00431c64
    POP EBX                             ; 00431c69
    RET                                 ; 00431c6a
    PUSH 0x4                            ; 00431c6b
        ;   Label: LAB_00431c6b
    PUSH 0x5d5a94                       ; 00431c6d | DAT_005d5a94
    PUSH EBX                            ; 00431c72
    CALL FUN_00524a10                   ; 00431c73
        ;   XREF to: 00524a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a10()
    ADD ESP,0x4                         ; 00431c78
    PUSH EAX                            ; 00431c7b
    CALL FUN_005c1210                   ; 00431c7c
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1210()
    ADD ESP,0xc                         ; 00431c81
    TEST EAX,EAX                        ; 00431c84
    JNZ 0x00431c8f                      ; 00431c86
        ;   XREF to: 00431c8f (CONDITIONAL_JUMP)  ; LAB_00431c8f
    MOV EAX,0x2                         ; 00431c88
    POP EBX                             ; 00431c8d
    RET                                 ; 00431c8e
    PUSH 0x5d5a99                       ; 00431c8f | = "DEAD_POSSUM"
        ;   Label: LAB_00431c8f
    PUSH EBX                            ; 00431c94
    CALL FUN_00524a10                   ; 00431c95
        ;   XREF to: 00524a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a10()
    ADD ESP,0x4                         ; 00431c9a
    PUSH EAX                            ; 00431c9d
    CALL FUN_005c04e0                   ; 00431c9e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00431ca3
    TEST EAX,EAX                        ; 00431ca6
    JNZ 0x00431cb1                      ; 00431ca8
        ;   XREF to: 00431cb1 (CONDITIONAL_JUMP)  ; LAB_00431cb1
    MOV EAX,0xfffffffe                  ; 00431caa
    POP EBX                             ; 00431caf
    RET                                 ; 00431cb0
    XOR EAX,EAX                         ; 00431cb1
        ;   Label: LAB_00431cb1
    POP EBX                             ; 00431cb3
    RET                                 ; 00431cb4


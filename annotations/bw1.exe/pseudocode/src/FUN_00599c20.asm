; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00599c20(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00606f50
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599c20
        ;   Label: FUN_00599c20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599c21
    TEST byte ptr [ESP + 0xc],0x4       ; 00599c25
    JNZ 0x00599c7d                      ; 00599c2a
        ;   XREF to: 00599c7d (CONDITIONAL_JUMP)  ; LAB_00599c7d
    PUSH 0x0                            ; 00599c2c
    ADD EBX,0x35dc                      ; 00599c2e
    PUSH EBX                            ; 00599c34
    CALL FUN_0040ee30                   ; 00599c35
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 00599c3a
    PUSH 0x0                            ; 00599c3d
    SUB EAX,0x93c                       ; 00599c3f
    PUSH EAX                            ; 00599c44
    CALL FUN_00441ca0                   ; 00599c45
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 00599c4a
    PUSH 0x0                            ; 00599c4d
    SUB EAX,0x2b48                      ; 00599c4f
    PUSH EAX                            ; 00599c54
    CALL FUN_005673f0                   ; 00599c55
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 00599c5a
    PUSH 0x1                            ; 00599c5d
    LEA EBX,[EAX + 0xfffffea8]          ; 00599c5f
    PUSH EBX                            ; 00599c65
    CALL FUN_00408730                   ; 00599c66
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00599c6b
    MOV DL,byte ptr [ESP + 0xc]         ; 00599c6e
    MOV EBX,EAX                         ; 00599c72
    TEST DL,0x2                         ; 00599c74
    JNZ 0x00599c98                      ; 00599c77
        ;   XREF to: 00599c98 (CONDITIONAL_JUMP)  ; LAB_00599c98
    MOV EAX,EBX                         ; 00599c79
    POP EBX                             ; 00599c7b
    RET                                 ; 00599c7c
    PUSH 0x606f50                       ; 00599c7d | DAT_00606f50
        ;   Label: LAB_00599c7d
    PUSH EBX                            ; 00599c82
    CALL FUN_005c030f                   ; 00599c83
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00599c88
    PUSH EAX                            ; 00599c8b
    CALL FUN_005c0336                   ; 00599c8c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00599c91
    MOV EAX,EBX                         ; 00599c94
    POP EBX                             ; 00599c96
    RET                                 ; 00599c97
    PUSH EAX                            ; 00599c98
        ;   Label: LAB_00599c98
    CALL FUN_005c0344                   ; 00599c99
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00599c9e
    MOV EAX,EBX                         ; 00599ca1
    POP EBX                             ; 00599ca3
    RET                                 ; 00599ca4


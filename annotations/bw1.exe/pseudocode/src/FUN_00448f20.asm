; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00448f20(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe210
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

    PUSH EBX                            ; 00448f20
        ;   Label: FUN_00448f20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00448f21
    TEST byte ptr [ESP + 0xc],0x4       ; 00448f25
    JNZ 0x00448f7d                      ; 00448f2a
        ;   XREF to: 00448f7d (CONDITIONAL_JUMP)  ; LAB_00448f7d
    PUSH 0x0                            ; 00448f2c
    ADD EBX,0x35dc                      ; 00448f2e
    PUSH EBX                            ; 00448f34
    CALL FUN_0040ee30                   ; 00448f35
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 00448f3a
    PUSH 0x0                            ; 00448f3d
    SUB EAX,0x93c                       ; 00448f3f
    PUSH EAX                            ; 00448f44
    CALL FUN_00441ca0                   ; 00448f45
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 00448f4a
    PUSH 0x0                            ; 00448f4d
    SUB EAX,0x2b48                      ; 00448f4f
    PUSH EAX                            ; 00448f54
    CALL FUN_005673f0                   ; 00448f55
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 00448f5a
    PUSH 0x1                            ; 00448f5d
    LEA EBX,[EAX + 0xfffffea8]          ; 00448f5f
    PUSH EBX                            ; 00448f65
    CALL FUN_00408730                   ; 00448f66
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00448f6b
    MOV DL,byte ptr [ESP + 0xc]         ; 00448f6e
    MOV EBX,EAX                         ; 00448f72
    TEST DL,0x2                         ; 00448f74
    JNZ 0x00448f98                      ; 00448f77
        ;   XREF to: 00448f98 (CONDITIONAL_JUMP)  ; LAB_00448f98
    MOV EAX,EBX                         ; 00448f79
    POP EBX                             ; 00448f7b
    RET                                 ; 00448f7c
    PUSH 0x5fe210                       ; 00448f7d | DAT_005fe210
        ;   Label: LAB_00448f7d
    PUSH EBX                            ; 00448f82
    CALL FUN_005c030f                   ; 00448f83
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00448f88
    PUSH EAX                            ; 00448f8b
    CALL FUN_005c0336                   ; 00448f8c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00448f91
    MOV EAX,EBX                         ; 00448f94
    POP EBX                             ; 00448f96
    RET                                 ; 00448f97
    PUSH EAX                            ; 00448f98
        ;   Label: LAB_00448f98
    CALL FUN_005c0344                   ; 00448f99
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00448f9e
    MOV EAX,EBX                         ; 00448fa1
    POP EBX                             ; 00448fa3
    RET                                 ; 00448fa4


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e0f20(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00601430
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

    PUSH EBX                            ; 004e0f20
        ;   Label: FUN_004e0f20
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e0f21
    TEST byte ptr [ESP + 0xc],0x4       ; 004e0f25
    JNZ 0x004e0f7d                      ; 004e0f2a
        ;   XREF to: 004e0f7d (CONDITIONAL_JUMP)  ; LAB_004e0f7d
    PUSH 0x0                            ; 004e0f2c
    ADD EBX,0x35dc                      ; 004e0f2e
    PUSH EBX                            ; 004e0f34
    CALL FUN_0040ee30                   ; 004e0f35
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 004e0f3a
    PUSH 0x0                            ; 004e0f3d
    SUB EAX,0x93c                       ; 004e0f3f
    PUSH EAX                            ; 004e0f44
    CALL FUN_00441ca0                   ; 004e0f45
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 004e0f4a
    PUSH 0x0                            ; 004e0f4d
    SUB EAX,0x2b48                      ; 004e0f4f
    PUSH EAX                            ; 004e0f54
    CALL FUN_005673f0                   ; 004e0f55
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 004e0f5a
    PUSH 0x1                            ; 004e0f5d
    LEA EBX,[EAX + 0xfffffea8]          ; 004e0f5f
    PUSH EBX                            ; 004e0f65
    CALL FUN_00408730                   ; 004e0f66
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 004e0f6b
    MOV DL,byte ptr [ESP + 0xc]         ; 004e0f6e
    MOV EBX,EAX                         ; 004e0f72
    TEST DL,0x2                         ; 004e0f74
    JNZ 0x004e0f98                      ; 004e0f77
        ;   XREF to: 004e0f98 (CONDITIONAL_JUMP)  ; LAB_004e0f98
    MOV EAX,EBX                         ; 004e0f79
    POP EBX                             ; 004e0f7b
    RET                                 ; 004e0f7c
    PUSH 0x601430                       ; 004e0f7d | DAT_00601430
        ;   Label: LAB_004e0f7d
    PUSH EBX                            ; 004e0f82
    CALL FUN_005c030f                   ; 004e0f83
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 004e0f88
    PUSH EAX                            ; 004e0f8b
    CALL FUN_005c0336                   ; 004e0f8c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 004e0f91
    MOV EAX,EBX                         ; 004e0f94
    POP EBX                             ; 004e0f96
    RET                                 ; 004e0f97
    PUSH EAX                            ; 004e0f98
        ;   Label: LAB_004e0f98
    CALL FUN_005c0344                   ; 004e0f99
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004e0f9e
    MOV EAX,EBX                         ; 004e0fa1
    POP EBX                             ; 004e0fa3
    RET                                 ; 004e0fa4


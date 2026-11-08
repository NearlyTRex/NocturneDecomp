; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a8a10(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00607a60
;
; Called Functions:
;   FUN_00408730
;   FUN_00447d30
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8a10
        ;   Label: FUN_005a8a10
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a8a11
    TEST byte ptr [ESP + 0xc],0x4       ; 005a8a15
    JNZ 0x005a8a4d                      ; 005a8a1a
        ;   XREF to: 005a8a4d (CONDITIONAL_JUMP)  ; LAB_005a8a4d
    PUSH 0x0                            ; 005a8a1c
    ADD EBX,0x1020                      ; 005a8a1e
    PUSH EBX                            ; 005a8a24
    CALL FUN_00447d30                   ; 005a8a25
        ;   XREF to: 00447d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00447d30()
    ADD ESP,0x8                         ; 005a8a2a
    PUSH 0x1                            ; 005a8a2d
    LEA EBX,[EAX + 0xffffefe0]          ; 005a8a2f
    PUSH EBX                            ; 005a8a35
    CALL FUN_00408730                   ; 005a8a36
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 005a8a3b
    MOV DL,byte ptr [ESP + 0xc]         ; 005a8a3e
    MOV EBX,EAX                         ; 005a8a42
    TEST DL,0x2                         ; 005a8a44
    JNZ 0x005a8a68                      ; 005a8a47
        ;   XREF to: 005a8a68 (CONDITIONAL_JUMP)  ; LAB_005a8a68
    MOV EAX,EBX                         ; 005a8a49
    POP EBX                             ; 005a8a4b
    RET                                 ; 005a8a4c
    PUSH 0x607a60                       ; 005a8a4d | DAT_00607a60
        ;   Label: LAB_005a8a4d
    PUSH EBX                            ; 005a8a52
    CALL FUN_005c030f                   ; 005a8a53
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 005a8a58
    PUSH EAX                            ; 005a8a5b
    CALL FUN_005c0336                   ; 005a8a5c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 005a8a61
    MOV EAX,EBX                         ; 005a8a64
    POP EBX                             ; 005a8a66
    RET                                 ; 005a8a67
    PUSH EAX                            ; 005a8a68
        ;   Label: LAB_005a8a68
    CALL FUN_005c0344                   ; 005a8a69
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005a8a6e
    MOV EAX,EBX                         ; 005a8a71
    POP EBX                             ; 005a8a73
    RET                                 ; 005a8a74


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00412a20(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f3050
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412a20
        ;   Label: FUN_00412a20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00412a21
    TEST byte ptr [ESP + 0xc],0x4       ; 00412a25
    JNZ 0x00412a8d                      ; 00412a2a
        ;   XREF to: 00412a8d (CONDITIONAL_JUMP)  ; LAB_00412a8d
    PUSH 0x0                            ; 00412a2c
    ADD EBX,0x3a20                      ; 00412a2e
    PUSH EBX                            ; 00412a34
    CALL FUN_0040f2b0                   ; 00412a35
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 00412a3a
    PUSH 0x0                            ; 00412a3d
    SUB EAX,0x9c8                       ; 00412a3f
    PUSH EAX                            ; 00412a44
    CALL FUN_0059df70                   ; 00412a45
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 00412a4a
    PUSH 0x0                            ; 00412a4d
    SUB EAX,0x34c                       ; 00412a4f
    PUSH EAX                            ; 00412a54
    CALL FUN_005b1480                   ; 00412a55
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 00412a5a
    PUSH 0x0                            ; 00412a5d
    SUB EAX,0x2a58                      ; 00412a5f
    PUSH EAX                            ; 00412a64
    CALL FUN_00544d50                   ; 00412a65
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 00412a6a
    PUSH 0x1                            ; 00412a6d
    LEA EBX,[EAX + 0xfffffd4c]          ; 00412a6f
    PUSH EBX                            ; 00412a75
    CALL FUN_00408930                   ; 00412a76
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 00412a7b
    MOV DL,byte ptr [ESP + 0xc]         ; 00412a7e
    MOV EBX,EAX                         ; 00412a82
    TEST DL,0x2                         ; 00412a84
    JNZ 0x00412aa8                      ; 00412a87
        ;   XREF to: 00412aa8 (CONDITIONAL_JUMP)  ; LAB_00412aa8
    MOV EAX,EBX                         ; 00412a89
    POP EBX                             ; 00412a8b
    RET                                 ; 00412a8c
    PUSH 0x5f3050                       ; 00412a8d | DAT_005f3050
        ;   Label: LAB_00412a8d
    PUSH EBX                            ; 00412a92
    CALL FUN_005b7fa7                   ; 00412a93
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00412a98
    PUSH EAX                            ; 00412a9b
    CALL FUN_005b7fce                   ; 00412a9c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00412aa1
    MOV EAX,EBX                         ; 00412aa4
    POP EBX                             ; 00412aa6
    RET                                 ; 00412aa7
    PUSH EAX                            ; 00412aa8
        ;   Label: LAB_00412aa8
    CALL FUN_005b7fdc                   ; 00412aa9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00412aae
    MOV EAX,EBX                         ; 00412ab1
    POP EBX                             ; 00412ab3
    RET                                 ; 00412ab4


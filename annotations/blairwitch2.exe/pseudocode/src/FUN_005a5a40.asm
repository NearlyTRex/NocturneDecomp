; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a5a40(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ffa90
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

    PUSH EBX                            ; 005a5a40
        ;   Label: FUN_005a5a40
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a5a41
    TEST byte ptr [ESP + 0xc],0x4       ; 005a5a45
    JNZ 0x005a5aad                      ; 005a5a4a
        ;   XREF to: 005a5aad (CONDITIONAL_JUMP)  ; LAB_005a5aad
    PUSH 0x0                            ; 005a5a4c
    ADD EBX,0x3a20                      ; 005a5a4e
    PUSH EBX                            ; 005a5a54
    CALL FUN_0040f2b0                   ; 005a5a55
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a5a5a
    PUSH 0x0                            ; 005a5a5d
    SUB EAX,0x9c8                       ; 005a5a5f
    PUSH EAX                            ; 005a5a64
    CALL FUN_0059df70                   ; 005a5a65
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 005a5a6a
    PUSH 0x0                            ; 005a5a6d
    SUB EAX,0x34c                       ; 005a5a6f
    PUSH EAX                            ; 005a5a74
    CALL FUN_005b1480                   ; 005a5a75
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 005a5a7a
    PUSH 0x0                            ; 005a5a7d
    SUB EAX,0x2a58                      ; 005a5a7f
    PUSH EAX                            ; 005a5a84
    CALL FUN_00544d50                   ; 005a5a85
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 005a5a8a
    PUSH 0x1                            ; 005a5a8d
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a5a8f
    PUSH EBX                            ; 005a5a95
    CALL FUN_00408930                   ; 005a5a96
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 005a5a9b
    MOV DL,byte ptr [ESP + 0xc]         ; 005a5a9e
    MOV EBX,EAX                         ; 005a5aa2
    TEST DL,0x2                         ; 005a5aa4
    JNZ 0x005a5ac8                      ; 005a5aa7
        ;   XREF to: 005a5ac8 (CONDITIONAL_JUMP)  ; LAB_005a5ac8
    MOV EAX,EBX                         ; 005a5aa9
    POP EBX                             ; 005a5aab
    RET                                 ; 005a5aac
    PUSH 0x5ffa90                       ; 005a5aad | DAT_005ffa90
        ;   Label: LAB_005a5aad
    PUSH EBX                            ; 005a5ab2
    CALL FUN_005b7fa7                   ; 005a5ab3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a5ab8
    PUSH EAX                            ; 005a5abb
    CALL FUN_005b7fce                   ; 005a5abc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005a5ac1
    MOV EAX,EBX                         ; 005a5ac4
    POP EBX                             ; 005a5ac6
    RET                                 ; 005a5ac7
    PUSH EAX                            ; 005a5ac8
        ;   Label: LAB_005a5ac8
    CALL FUN_005b7fdc                   ; 005a5ac9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a5ace
    MOV EAX,EBX                         ; 005a5ad1
    POP EBX                             ; 005a5ad3
    RET                                 ; 005a5ad4


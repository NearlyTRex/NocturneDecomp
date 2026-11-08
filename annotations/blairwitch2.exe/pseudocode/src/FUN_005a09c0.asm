; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a09c0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fedc4
;   undefined4 DAT_005fef50
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005a8100
;   FUN_005a8220
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a09c0
        ;   Label: FUN_005a09c0
    PUSH ESI                            ; 005a09c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a09c2
    TEST byte ptr [ESP + 0x10],0x4      ; 005a09c6
    JNZ 0x005a0a57                      ; 005a09cb
        ;   XREF to: 005a0a57 (CONDITIONAL_JUMP)  ; LAB_005a0a57
    PUSH 0x0                            ; 005a09d1
    LEA ESI,[EBX + 0x154]               ; 005a09d3
    PUSH ESI                            ; 005a09d9
    MOV dword ptr [EBX + 0x2b0],0x5fedc4 ; 005a09da | DAT_005fedc4
    CALL FUN_005a8100                   ; 005a09e4
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8100()
    ADD ESP,0x8                         ; 005a09e9
    PUSH ESI                            ; 005a09ec
    CALL FUN_005a8220                   ; 005a09ed
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8220()
    ADD ESP,0x4                         ; 005a09f2
    PUSH 0x0                            ; 005a09f5
    ADD EBX,0x3a20                      ; 005a09f7
    PUSH EBX                            ; 005a09fd
    CALL FUN_0040f2b0                   ; 005a09fe
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a0a03
    PUSH 0x0                            ; 005a0a06
    SUB EAX,0x9c8                       ; 005a0a08
    PUSH EAX                            ; 005a0a0d
    CALL FUN_0059df70                   ; 005a0a0e
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 005a0a13
    PUSH 0x0                            ; 005a0a16
    SUB EAX,0x34c                       ; 005a0a18
    PUSH EAX                            ; 005a0a1d
    CALL FUN_005b1480                   ; 005a0a1e
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 005a0a23
    PUSH 0x0                            ; 005a0a26
    SUB EAX,0x2a58                      ; 005a0a28
    PUSH EAX                            ; 005a0a2d
    CALL FUN_00544d50                   ; 005a0a2e
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 005a0a33
    PUSH 0x1                            ; 005a0a36
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a0a38
    PUSH EBX                            ; 005a0a3e
    CALL FUN_00408930                   ; 005a0a3f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 005a0a44
    MOV DL,byte ptr [ESP + 0x10]        ; 005a0a47
    MOV EBX,EAX                         ; 005a0a4b
    TEST DL,0x2                         ; 005a0a4d
    JNZ 0x005a0a73                      ; 005a0a50
        ;   XREF to: 005a0a73 (CONDITIONAL_JUMP)  ; LAB_005a0a73
    MOV EAX,EBX                         ; 005a0a52
    POP ESI                             ; 005a0a54
    POP EBX                             ; 005a0a55
    RET                                 ; 005a0a56
    PUSH 0x5fef50                       ; 005a0a57 | DAT_005fef50
        ;   Label: LAB_005a0a57
    PUSH EBX                            ; 005a0a5c
    CALL FUN_005b7fa7                   ; 005a0a5d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a0a62
    PUSH EAX                            ; 005a0a65
    CALL FUN_005b7fce                   ; 005a0a66
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005a0a6b
    MOV EAX,EBX                         ; 005a0a6e
    POP ESI                             ; 005a0a70
    POP EBX                             ; 005a0a71
    RET                                 ; 005a0a72
    PUSH EAX                            ; 005a0a73
        ;   Label: LAB_005a0a73
    CALL FUN_005b7fdc                   ; 005a0a74
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a0a79
    MOV EAX,EBX                         ; 005a0a7c
    POP ESI                             ; 005a0a7e
    POP EBX                             ; 005a0a7f
    RET                                 ; 005a0a80


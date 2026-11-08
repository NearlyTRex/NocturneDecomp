; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a5f50(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ffca4
;   undefined4 DAT_005ffe30
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

    PUSH EBX                            ; 005a5f50
        ;   Label: FUN_005a5f50
    PUSH ESI                            ; 005a5f51
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a5f52
    TEST byte ptr [ESP + 0x10],0x4      ; 005a5f56
    JNZ 0x005a6001                      ; 005a5f5b
        ;   XREF to: 005a6001 (CONDITIONAL_JUMP)  ; LAB_005a6001
    PUSH 0x0                            ; 005a5f61
    LEA ESI,[EBX + 0x198]               ; 005a5f63
    PUSH ESI                            ; 005a5f69
    MOV dword ptr [EBX + 0x2b0],0x5ffca4 ; 005a5f6a | DAT_005ffca4
    CALL FUN_005a8100                   ; 005a5f74
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8100()
    ADD ESP,0x8                         ; 005a5f79
    PUSH ESI                            ; 005a5f7c
    CALL FUN_005a8220                   ; 005a5f7d
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8220()
    ADD ESP,0x4                         ; 005a5f82
    PUSH 0x0                            ; 005a5f85
    LEA ESI,[EBX + 0x154]               ; 005a5f87
    PUSH ESI                            ; 005a5f8d
    CALL FUN_005a8100                   ; 005a5f8e
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8100()
    ADD ESP,0x8                         ; 005a5f93
    PUSH ESI                            ; 005a5f96
    CALL FUN_005a8220                   ; 005a5f97
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8220()
    ADD ESP,0x4                         ; 005a5f9c
    PUSH 0x0                            ; 005a5f9f
    ADD EBX,0x3a20                      ; 005a5fa1
    PUSH EBX                            ; 005a5fa7
    CALL FUN_0040f2b0                   ; 005a5fa8
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a5fad
    PUSH 0x0                            ; 005a5fb0
    SUB EAX,0x9c8                       ; 005a5fb2
    PUSH EAX                            ; 005a5fb7
    CALL FUN_0059df70                   ; 005a5fb8
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 005a5fbd
    PUSH 0x0                            ; 005a5fc0
    SUB EAX,0x34c                       ; 005a5fc2
    PUSH EAX                            ; 005a5fc7
    CALL FUN_005b1480                   ; 005a5fc8
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 005a5fcd
    PUSH 0x0                            ; 005a5fd0
    SUB EAX,0x2a58                      ; 005a5fd2
    PUSH EAX                            ; 005a5fd7
    CALL FUN_00544d50                   ; 005a5fd8
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 005a5fdd
    PUSH 0x1                            ; 005a5fe0
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a5fe2
    PUSH EBX                            ; 005a5fe8
    CALL FUN_00408930                   ; 005a5fe9
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 005a5fee
    MOV DL,byte ptr [ESP + 0x10]        ; 005a5ff1
    MOV EBX,EAX                         ; 005a5ff5
    TEST DL,0x2                         ; 005a5ff7
    JNZ 0x005a601d                      ; 005a5ffa
        ;   XREF to: 005a601d (CONDITIONAL_JUMP)  ; LAB_005a601d
    MOV EAX,EBX                         ; 005a5ffc
    POP ESI                             ; 005a5ffe
    POP EBX                             ; 005a5fff
    RET                                 ; 005a6000
    PUSH 0x5ffe30                       ; 005a6001 | DAT_005ffe30
        ;   Label: LAB_005a6001
    PUSH EBX                            ; 005a6006
    CALL FUN_005b7fa7                   ; 005a6007
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a600c
    PUSH EAX                            ; 005a600f
    CALL FUN_005b7fce                   ; 005a6010
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005a6015
    MOV EAX,EBX                         ; 005a6018
    POP ESI                             ; 005a601a
    POP EBX                             ; 005a601b
    RET                                 ; 005a601c
    PUSH EAX                            ; 005a601d
        ;   Label: LAB_005a601d
    CALL FUN_005b7fdc                   ; 005a601e
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a6023
    MOV EAX,EBX                         ; 005a6026
    POP ESI                             ; 005a6028
    POP EBX                             ; 005a6029
    RET                                 ; 005a602a


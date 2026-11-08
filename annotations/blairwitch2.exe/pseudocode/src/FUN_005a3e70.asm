; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a3e70(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ff554
;   undefined4 DAT_005ff6e0
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

    PUSH EBX                            ; 005a3e70
        ;   Label: FUN_005a3e70
    PUSH ESI                            ; 005a3e71
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3e72
    TEST byte ptr [ESP + 0x10],0x4      ; 005a3e76
    JNZ 0x005a3f07                      ; 005a3e7b
        ;   XREF to: 005a3f07 (CONDITIONAL_JUMP)  ; LAB_005a3f07
    PUSH 0x0                            ; 005a3e81
    LEA ESI,[EBX + 0x264]               ; 005a3e83
    PUSH ESI                            ; 005a3e89
    MOV dword ptr [EBX + 0x2b0],0x5ff554 ; 005a3e8a | DAT_005ff554
    CALL FUN_005a8100                   ; 005a3e94
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8100()
    ADD ESP,0x8                         ; 005a3e99
    PUSH ESI                            ; 005a3e9c
    CALL FUN_005a8220                   ; 005a3e9d
        ;   XREF to: 005a8220 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8220()
    ADD ESP,0x4                         ; 005a3ea2
    PUSH 0x0                            ; 005a3ea5
    ADD EBX,0x3a20                      ; 005a3ea7
    PUSH EBX                            ; 005a3ead
    CALL FUN_0040f2b0                   ; 005a3eae
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a3eb3
    PUSH 0x0                            ; 005a3eb6
    SUB EAX,0x9c8                       ; 005a3eb8
    PUSH EAX                            ; 005a3ebd
    CALL FUN_0059df70                   ; 005a3ebe
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 005a3ec3
    PUSH 0x0                            ; 005a3ec6
    SUB EAX,0x34c                       ; 005a3ec8
    PUSH EAX                            ; 005a3ecd
    CALL FUN_005b1480                   ; 005a3ece
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 005a3ed3
    PUSH 0x0                            ; 005a3ed6
    SUB EAX,0x2a58                      ; 005a3ed8
    PUSH EAX                            ; 005a3edd
    CALL FUN_00544d50                   ; 005a3ede
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 005a3ee3
    PUSH 0x1                            ; 005a3ee6
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a3ee8
    PUSH EBX                            ; 005a3eee
    CALL FUN_00408930                   ; 005a3eef
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 005a3ef4
    MOV DL,byte ptr [ESP + 0x10]        ; 005a3ef7
    MOV EBX,EAX                         ; 005a3efb
    TEST DL,0x2                         ; 005a3efd
    JNZ 0x005a3f23                      ; 005a3f00
        ;   XREF to: 005a3f23 (CONDITIONAL_JUMP)  ; LAB_005a3f23
    MOV EAX,EBX                         ; 005a3f02
    POP ESI                             ; 005a3f04
    POP EBX                             ; 005a3f05
    RET                                 ; 005a3f06
    PUSH 0x5ff6e0                       ; 005a3f07 | DAT_005ff6e0
        ;   Label: LAB_005a3f07
    PUSH EBX                            ; 005a3f0c
    CALL FUN_005b7fa7                   ; 005a3f0d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a3f12
    PUSH EAX                            ; 005a3f15
    CALL FUN_005b7fce                   ; 005a3f16
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005a3f1b
    MOV EAX,EBX                         ; 005a3f1e
    POP ESI                             ; 005a3f20
    POP EBX                             ; 005a3f21
    RET                                 ; 005a3f22
    PUSH EAX                            ; 005a3f23
        ;   Label: LAB_005a3f23
    CALL FUN_005b7fdc                   ; 005a3f24
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a3f29
    MOV EAX,EBX                         ; 005a3f2c
    POP ESI                             ; 005a3f2e
    POP EBX                             ; 005a3f2f
    RET                                 ; 005a3f30


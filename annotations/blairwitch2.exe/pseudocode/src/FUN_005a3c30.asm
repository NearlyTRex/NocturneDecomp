; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a3c30(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ff500
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

    PUSH EBX                            ; 005a3c30
        ;   Label: FUN_005a3c30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a3c31
    TEST byte ptr [ESP + 0xc],0x4       ; 005a3c35
    JNZ 0x005a3c9d                      ; 005a3c3a
        ;   XREF to: 005a3c9d (CONDITIONAL_JUMP)  ; LAB_005a3c9d
    PUSH 0x0                            ; 005a3c3c
    ADD EBX,0x3a20                      ; 005a3c3e
    PUSH EBX                            ; 005a3c44
    CALL FUN_0040f2b0                   ; 005a3c45
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a3c4a
    PUSH 0x0                            ; 005a3c4d
    SUB EAX,0x9c8                       ; 005a3c4f
    PUSH EAX                            ; 005a3c54
    CALL FUN_0059df70                   ; 005a3c55
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 005a3c5a
    PUSH 0x0                            ; 005a3c5d
    SUB EAX,0x34c                       ; 005a3c5f
    PUSH EAX                            ; 005a3c64
    CALL FUN_005b1480                   ; 005a3c65
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 005a3c6a
    PUSH 0x0                            ; 005a3c6d
    SUB EAX,0x2a58                      ; 005a3c6f
    PUSH EAX                            ; 005a3c74
    CALL FUN_00544d50                   ; 005a3c75
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 005a3c7a
    PUSH 0x1                            ; 005a3c7d
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a3c7f
    PUSH EBX                            ; 005a3c85
    CALL FUN_00408930                   ; 005a3c86
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 005a3c8b
    MOV DL,byte ptr [ESP + 0xc]         ; 005a3c8e
    MOV EBX,EAX                         ; 005a3c92
    TEST DL,0x2                         ; 005a3c94
    JNZ 0x005a3cb8                      ; 005a3c97
        ;   XREF to: 005a3cb8 (CONDITIONAL_JUMP)  ; LAB_005a3cb8
    MOV EAX,EBX                         ; 005a3c99
    POP EBX                             ; 005a3c9b
    RET                                 ; 005a3c9c
    PUSH 0x5ff500                       ; 005a3c9d | DAT_005ff500
        ;   Label: LAB_005a3c9d
    PUSH EBX                            ; 005a3ca2
    CALL FUN_005b7fa7                   ; 005a3ca3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a3ca8
    PUSH EAX                            ; 005a3cab
    CALL FUN_005b7fce                   ; 005a3cac
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005a3cb1
    MOV EAX,EBX                         ; 005a3cb4
    POP EBX                             ; 005a3cb6
    RET                                 ; 005a3cb7
    PUSH EAX                            ; 005a3cb8
        ;   Label: LAB_005a3cb8
    CALL FUN_005b7fdc                   ; 005a3cb9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a3cbe
    MOV EAX,EBX                         ; 005a3cc1
    POP EBX                             ; 005a3cc3
    RET                                 ; 005a3cc4


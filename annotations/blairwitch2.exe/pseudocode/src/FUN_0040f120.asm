; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040f120(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f27e0
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

    PUSH EBX                            ; 0040f120
        ;   Label: FUN_0040f120
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f121
    TEST byte ptr [ESP + 0xc],0x4       ; 0040f125
    JNZ 0x0040f18d                      ; 0040f12a
        ;   XREF to: 0040f18d (CONDITIONAL_JUMP)  ; LAB_0040f18d
    PUSH 0x0                            ; 0040f12c
    ADD EBX,0x3a20                      ; 0040f12e
    PUSH EBX                            ; 0040f134
    CALL FUN_0040f2b0                   ; 0040f135
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 0040f13a
    PUSH 0x0                            ; 0040f13d
    SUB EAX,0x9c8                       ; 0040f13f
    PUSH EAX                            ; 0040f144
    CALL FUN_0059df70                   ; 0040f145
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 0040f14a
    PUSH 0x0                            ; 0040f14d
    SUB EAX,0x34c                       ; 0040f14f
    PUSH EAX                            ; 0040f154
    CALL FUN_005b1480                   ; 0040f155
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 0040f15a
    PUSH 0x0                            ; 0040f15d
    SUB EAX,0x2a58                      ; 0040f15f
    PUSH EAX                            ; 0040f164
    CALL FUN_00544d50                   ; 0040f165
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 0040f16a
    PUSH 0x1                            ; 0040f16d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0040f16f
    PUSH EBX                            ; 0040f175
    CALL FUN_00408930                   ; 0040f176
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0040f17b
    MOV DL,byte ptr [ESP + 0xc]         ; 0040f17e
    MOV EBX,EAX                         ; 0040f182
    TEST DL,0x2                         ; 0040f184
    JNZ 0x0040f1a8                      ; 0040f187
        ;   XREF to: 0040f1a8 (CONDITIONAL_JUMP)  ; LAB_0040f1a8
    MOV EAX,EBX                         ; 0040f189
    POP EBX                             ; 0040f18b
    RET                                 ; 0040f18c
    PUSH 0x5f27e0                       ; 0040f18d | DAT_005f27e0
        ;   Label: LAB_0040f18d
    PUSH EBX                            ; 0040f192
    CALL FUN_005b7fa7                   ; 0040f193
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0040f198
    PUSH EAX                            ; 0040f19b
    CALL FUN_005b7fce                   ; 0040f19c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0040f1a1
    MOV EAX,EBX                         ; 0040f1a4
    POP EBX                             ; 0040f1a6
    RET                                 ; 0040f1a7
    PUSH EAX                            ; 0040f1a8
        ;   Label: LAB_0040f1a8
    CALL FUN_005b7fdc                   ; 0040f1a9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0040f1ae
    MOV EAX,EBX                         ; 0040f1b1
    POP EBX                             ; 0040f1b3
    RET                                 ; 0040f1b4


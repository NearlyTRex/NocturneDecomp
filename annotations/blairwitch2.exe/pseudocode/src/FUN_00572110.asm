; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00572110(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fca00
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00511d10
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572110
        ;   Label: FUN_00572110
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572111
    TEST byte ptr [ESP + 0xc],0x4       ; 00572115
    JNZ 0x0057218d                      ; 0057211a
        ;   XREF to: 0057218d (CONDITIONAL_JUMP)  ; LAB_0057218d
    PUSH 0x0                            ; 0057211c
    ADD EBX,0x10a60                     ; 0057211e
    PUSH EBX                            ; 00572124
    CALL FUN_00511d10                   ; 00572125
        ;   XREF to: 00511d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00511d10()
    ADD ESP,0x8                         ; 0057212a
    PUSH 0x0                            ; 0057212d
    SUB EAX,0xd040                      ; 0057212f
    PUSH EAX                            ; 00572134
    CALL FUN_0040f2b0                   ; 00572135
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 0057213a
    PUSH 0x0                            ; 0057213d
    SUB EAX,0x9c8                       ; 0057213f
    PUSH EAX                            ; 00572144
    CALL FUN_0059df70                   ; 00572145
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 0057214a
    PUSH 0x0                            ; 0057214d
    SUB EAX,0x34c                       ; 0057214f
    PUSH EAX                            ; 00572154
    CALL FUN_005b1480                   ; 00572155
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 0057215a
    PUSH 0x0                            ; 0057215d
    SUB EAX,0x2a58                      ; 0057215f
    PUSH EAX                            ; 00572164
    CALL FUN_00544d50                   ; 00572165
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 0057216a
    PUSH 0x1                            ; 0057216d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0057216f
    PUSH EBX                            ; 00572175
    CALL FUN_00408930                   ; 00572176
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0057217b
    MOV DL,byte ptr [ESP + 0xc]         ; 0057217e
    MOV EBX,EAX                         ; 00572182
    TEST DL,0x2                         ; 00572184
    JNZ 0x005721a8                      ; 00572187
        ;   XREF to: 005721a8 (CONDITIONAL_JUMP)  ; LAB_005721a8
    MOV EAX,EBX                         ; 00572189
    POP EBX                             ; 0057218b
    RET                                 ; 0057218c
    PUSH 0x5fca00                       ; 0057218d | DAT_005fca00
        ;   Label: LAB_0057218d
    PUSH EBX                            ; 00572192
    CALL FUN_005b7fa7                   ; 00572193
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00572198
    PUSH EAX                            ; 0057219b
    CALL FUN_005b7fce                   ; 0057219c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005721a1
    MOV EAX,EBX                         ; 005721a4
    POP EBX                             ; 005721a6
    RET                                 ; 005721a7
    PUSH EAX                            ; 005721a8
        ;   Label: LAB_005721a8
    CALL FUN_005b7fdc                   ; 005721a9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005721ae
    MOV EAX,EBX                         ; 005721b1
    POP EBX                             ; 005721b3
    RET                                 ; 005721b4


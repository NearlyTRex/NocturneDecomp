; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00581430(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fd7f0
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

    PUSH EBX                            ; 00581430
        ;   Label: FUN_00581430
    MOV EBX,dword ptr [ESP + 0x8]       ; 00581431
    TEST byte ptr [ESP + 0xc],0x4       ; 00581435
    JNZ 0x0058149d                      ; 0058143a
        ;   XREF to: 0058149d (CONDITIONAL_JUMP)  ; LAB_0058149d
    PUSH 0x0                            ; 0058143c
    ADD EBX,0x3a20                      ; 0058143e
    PUSH EBX                            ; 00581444
    CALL FUN_0040f2b0                   ; 00581445
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 0058144a
    PUSH 0x0                            ; 0058144d
    SUB EAX,0x9c8                       ; 0058144f
    PUSH EAX                            ; 00581454
    CALL FUN_0059df70                   ; 00581455
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 0058145a
    PUSH 0x0                            ; 0058145d
    SUB EAX,0x34c                       ; 0058145f
    PUSH EAX                            ; 00581464
    CALL FUN_005b1480                   ; 00581465
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 0058146a
    PUSH 0x0                            ; 0058146d
    SUB EAX,0x2a58                      ; 0058146f
    PUSH EAX                            ; 00581474
    CALL FUN_00544d50                   ; 00581475
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 0058147a
    PUSH 0x1                            ; 0058147d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0058147f
    PUSH EBX                            ; 00581485
    CALL FUN_00408930                   ; 00581486
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0058148b
    MOV DL,byte ptr [ESP + 0xc]         ; 0058148e
    MOV EBX,EAX                         ; 00581492
    TEST DL,0x2                         ; 00581494
    JNZ 0x005814b8                      ; 00581497
        ;   XREF to: 005814b8 (CONDITIONAL_JUMP)  ; LAB_005814b8
    MOV EAX,EBX                         ; 00581499
    POP EBX                             ; 0058149b
    RET                                 ; 0058149c
    PUSH 0x5fd7f0                       ; 0058149d | DAT_005fd7f0
        ;   Label: LAB_0058149d
    PUSH EBX                            ; 005814a2
    CALL FUN_005b7fa7                   ; 005814a3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005814a8
    PUSH EAX                            ; 005814ab
    CALL FUN_005b7fce                   ; 005814ac
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005814b1
    MOV EAX,EBX                         ; 005814b4
    POP EBX                             ; 005814b6
    RET                                 ; 005814b7
    PUSH EAX                            ; 005814b8
        ;   Label: LAB_005814b8
    CALL FUN_005b7fdc                   ; 005814b9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005814be
    MOV EAX,EBX                         ; 005814c1
    POP EBX                             ; 005814c3
    RET                                 ; 005814c4


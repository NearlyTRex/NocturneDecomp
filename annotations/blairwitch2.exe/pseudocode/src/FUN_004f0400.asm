; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f0400(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9e94
;   undefined4 DAT_005f9ff0
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005ade00
;   FUN_005b1480
;   FUN_005b6e80
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0400
        ;   Label: FUN_004f0400
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f0401
    TEST byte ptr [ESP + 0xc],0x4       ; 004f0405
    JNZ 0x004f04c1                      ; 004f040a
        ;   XREF to: 004f04c1 (CONDITIONAL_JUMP)  ; LAB_004f04c1
    MOV EAX,dword ptr [EBX + 0x4c350]   ; 004f0410
    MOV dword ptr [EBX + 0x2b0],0x5f9e94 ; 004f0416 | DAT_005f9e94
    TEST EAX,EAX                        ; 004f0420
    JZ 0x004f0436                       ; 004f0422
        ;   XREF to: 004f0436 (CONDITIONAL_JUMP)  ; LAB_004f0436
    PUSH 0x2                            ; 004f0424
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004f0426
    PUSH EAX                            ; 004f042c
    CALL dword ptr [EDX + 0xd8]         ; 004f042d
    ADD ESP,0x8                         ; 004f0433
    PUSH 0x0                            ; 004f0436
        ;   Label: LAB_004f0436
    ADD EBX,0x4b720                     ; 004f0438
    PUSH EBX                            ; 004f043e
    MOV dword ptr [EBX + 0xc30],0x0     ; 004f043f
    CALL FUN_005b6e80                   ; 004f0449
        ;   XREF to: 005b6e80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6e80()
    ADD ESP,0x8                         ; 004f044e
    PUSH 0x0                            ; 004f0451
    SUB EAX,0x3ab60                     ; 004f0453
    PUSH EAX                            ; 004f0458
    CALL FUN_005ade00                   ; 004f0459
        ;   XREF to: 005ade00 (UNCONDITIONAL_CALL)  ; undefined FUN_005ade00()
    ADD ESP,0x8                         ; 004f045e
    PUSH 0x0                            ; 004f0461
    SUB EAX,0xd1a0                      ; 004f0463
    PUSH EAX                            ; 004f0468
    CALL FUN_0040f2b0                   ; 004f0469
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 004f046e
    PUSH 0x0                            ; 004f0471
    SUB EAX,0x9c8                       ; 004f0473
    PUSH EAX                            ; 004f0478
    CALL FUN_0059df70                   ; 004f0479
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 004f047e
    PUSH 0x0                            ; 004f0481
    SUB EAX,0x34c                       ; 004f0483
    PUSH EAX                            ; 004f0488
    CALL FUN_005b1480                   ; 004f0489
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 004f048e
    PUSH 0x0                            ; 004f0491
    SUB EAX,0x2a58                      ; 004f0493
    PUSH EAX                            ; 004f0498
    CALL FUN_00544d50                   ; 004f0499
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 004f049e
    PUSH 0x1                            ; 004f04a1
    LEA EBX,[EAX + 0xfffffd4c]          ; 004f04a3
    PUSH EBX                            ; 004f04a9
    CALL FUN_00408930                   ; 004f04aa
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004f04af
    MOV DL,byte ptr [ESP + 0xc]         ; 004f04b2
    MOV EBX,EAX                         ; 004f04b6
    TEST DL,0x2                         ; 004f04b8
    JNZ 0x004f04dc                      ; 004f04bb
        ;   XREF to: 004f04dc (CONDITIONAL_JUMP)  ; LAB_004f04dc
    MOV EAX,EBX                         ; 004f04bd
    POP EBX                             ; 004f04bf
    RET                                 ; 004f04c0
    PUSH 0x5f9ff0                       ; 004f04c1 | DAT_005f9ff0
        ;   Label: LAB_004f04c1
    PUSH EBX                            ; 004f04c6
    CALL FUN_005b7fa7                   ; 004f04c7
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004f04cc
    PUSH EAX                            ; 004f04cf
    CALL FUN_005b7fce                   ; 004f04d0
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004f04d5
    MOV EAX,EBX                         ; 004f04d8
    POP EBX                             ; 004f04da
    RET                                 ; 004f04db
    PUSH EAX                            ; 004f04dc
        ;   Label: LAB_004f04dc
    CALL FUN_005b7fdc                   ; 004f04dd
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004f04e2
    MOV EAX,EBX                         ; 004f04e5
    POP EBX                             ; 004f04e7
    RET                                 ; 004f04e8


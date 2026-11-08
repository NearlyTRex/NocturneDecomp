; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00501400(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa3e4
;   undefined4 DAT_005fa560
;
; Called Functions:
;   FUN_004ce3d0
;   FUN_00544d50
;   FUN_005b6e80
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501400
        ;   Label: FUN_00501400
    MOV EBX,dword ptr [ESP + 0x8]       ; 00501401
    TEST byte ptr [ESP + 0xc],0x4       ; 00501405
    JNZ 0x00501457                      ; 0050140a
        ;   XREF to: 00501457 (CONDITIONAL_JUMP)  ; LAB_00501457
    PUSH 0x0                            ; 0050140c
    ADD EBX,0x279c8                     ; 0050140e
    PUSH EBX                            ; 00501414
    MOV dword ptr [EBX + 0xfffd88e8],0x5fa3e4 ; 00501415 | DAT_005fa3e4
    CALL FUN_005b6e80                   ; 0050141f
        ;   XREF to: 005b6e80 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6e80()
    ADD ESP,0x8                         ; 00501424
    PUSH 0x0                            ; 00501427
    SUB EAX,0x2388                      ; 00501429
    PUSH EAX                            ; 0050142e
    CALL FUN_00544d50                   ; 0050142f
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 00501434
    PUSH 0x1                            ; 00501437
    LEA EBX,[EAX + 0xfffda9c0]          ; 00501439
    PUSH EBX                            ; 0050143f
    CALL FUN_004ce3d0                   ; 00501440
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce3d0()
    ADD ESP,0x8                         ; 00501445
    MOV DL,byte ptr [ESP + 0xc]         ; 00501448
    MOV EBX,EAX                         ; 0050144c
    TEST DL,0x2                         ; 0050144e
    JNZ 0x00501472                      ; 00501451
        ;   XREF to: 00501472 (CONDITIONAL_JUMP)  ; LAB_00501472
    MOV EAX,EBX                         ; 00501453
    POP EBX                             ; 00501455
    RET                                 ; 00501456
    PUSH 0x5fa560                       ; 00501457 | DAT_005fa560
        ;   Label: LAB_00501457
    PUSH EBX                            ; 0050145c
    CALL FUN_005b7fa7                   ; 0050145d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00501462
    PUSH EAX                            ; 00501465
    CALL FUN_005b7fce                   ; 00501466
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0050146b
    MOV EAX,EBX                         ; 0050146e
    POP EBX                             ; 00501470
    RET                                 ; 00501471
    PUSH EAX                            ; 00501472
        ;   Label: LAB_00501472
    CALL FUN_005b7fdc                   ; 00501473
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00501478
    MOV EAX,EBX                         ; 0050147b
    POP EBX                             ; 0050147d
    RET                                 ; 0050147e


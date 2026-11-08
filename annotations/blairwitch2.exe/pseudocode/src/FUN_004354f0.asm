; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004354f0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f4450
;
; Called Functions:
;   FUN_00433e90
;   FUN_00434270
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004354f0
        ;   Label: FUN_004354f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004354f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004354f5
    JNZ 0x00435527                      ; 004354fa
        ;   XREF to: 00435527 (CONDITIONAL_JUMP)  ; LAB_00435527
    PUSH 0x0                            ; 004354fc
    ADD EBX,0x4                         ; 004354fe
    PUSH EBX                            ; 00435501
    CALL FUN_00434270                   ; 00435502
        ;   XREF to: 00434270 (UNCONDITIONAL_CALL)  ; undefined FUN_00434270()
    ADD ESP,0x8                         ; 00435507
    PUSH 0x1                            ; 0043550a
    LEA EBX,[EAX + -0x4]                ; 0043550c
    PUSH EBX                            ; 0043550f
    CALL FUN_00433e90                   ; 00435510
        ;   XREF to: 00433e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00433e90()
    ADD ESP,0x8                         ; 00435515
    MOV DL,byte ptr [ESP + 0xc]         ; 00435518
    MOV EBX,EAX                         ; 0043551c
    TEST DL,0x2                         ; 0043551e
    JNZ 0x00435542                      ; 00435521
        ;   XREF to: 00435542 (CONDITIONAL_JUMP)  ; LAB_00435542
    MOV EAX,EBX                         ; 00435523
    POP EBX                             ; 00435525
    RET                                 ; 00435526
    PUSH 0x5f4450                       ; 00435527 | DAT_005f4450
        ;   Label: LAB_00435527
    PUSH EBX                            ; 0043552c
    CALL FUN_005b7fa7                   ; 0043552d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00435532
    PUSH EAX                            ; 00435535
    CALL FUN_005b7fce                   ; 00435536
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0043553b
    MOV EAX,EBX                         ; 0043553e
    POP EBX                             ; 00435540
    RET                                 ; 00435541
    PUSH EAX                            ; 00435542
        ;   Label: LAB_00435542
    CALL FUN_005b7fdc                   ; 00435543
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00435548
    MOV EAX,EBX                         ; 0043554b
    POP EBX                             ; 0043554d
    RET                                 ; 0043554e


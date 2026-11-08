; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c1500(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f7880
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1500
        ;   Label: FUN_004c1500
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c1501
    TEST byte ptr [ESP + 0xc],0x4       ; 004c1505
    JNZ 0x004c1526                      ; 004c150a
        ;   XREF to: 004c1526 (CONDITIONAL_JUMP)  ; LAB_004c1526
    PUSH 0x1                            ; 004c150c
    PUSH EBX                            ; 004c150e
    CALL FUN_00408930                   ; 004c150f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004c1514
    MOV DL,byte ptr [ESP + 0xc]         ; 004c1517
    MOV EBX,EAX                         ; 004c151b
    TEST DL,0x2                         ; 004c151d
    JNZ 0x004c1541                      ; 004c1520
        ;   XREF to: 004c1541 (CONDITIONAL_JUMP)  ; LAB_004c1541
    MOV EAX,EBX                         ; 004c1522
    POP EBX                             ; 004c1524
    RET                                 ; 004c1525
    PUSH 0x5f7880                       ; 004c1526 | DAT_005f7880
        ;   Label: LAB_004c1526
    PUSH EBX                            ; 004c152b
    CALL FUN_005b7fa7                   ; 004c152c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004c1531
    PUSH EAX                            ; 004c1534
    CALL FUN_005b7fce                   ; 004c1535
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004c153a
    MOV EAX,EBX                         ; 004c153d
    POP EBX                             ; 004c153f
    RET                                 ; 004c1540
    PUSH EAX                            ; 004c1541
        ;   Label: LAB_004c1541
    CALL FUN_005b7fdc                   ; 004c1542
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004c1547
    MOV EAX,EBX                         ; 004c154a
    POP EBX                             ; 004c154c
    RET                                 ; 004c154d


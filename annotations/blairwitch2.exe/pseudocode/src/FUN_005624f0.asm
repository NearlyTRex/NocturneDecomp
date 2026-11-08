; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005624f0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc180
;
; Called Functions:
;   FUN_00408930
;   FUN_005b1c70
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005624f0
        ;   Label: FUN_005624f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005624f1
    TEST byte ptr [ESP + 0xc],0x4       ; 005624f5
    JNZ 0x0056252d                      ; 005624fa
        ;   XREF to: 0056252d (CONDITIONAL_JUMP)  ; LAB_0056252d
    PUSH 0x0                            ; 005624fc
    ADD EBX,0x4f0                       ; 005624fe
    PUSH EBX                            ; 00562504
    CALL FUN_005b1c70                   ; 00562505
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1c70()
    ADD ESP,0x8                         ; 0056250a
    PUSH 0x1                            ; 0056250d
    LEA EBX,[EAX + 0xfffffb10]          ; 0056250f
    PUSH EBX                            ; 00562515
    CALL FUN_00408930                   ; 00562516
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0056251b
    MOV DL,byte ptr [ESP + 0xc]         ; 0056251e
    MOV EBX,EAX                         ; 00562522
    TEST DL,0x2                         ; 00562524
    JNZ 0x00562548                      ; 00562527
        ;   XREF to: 00562548 (CONDITIONAL_JUMP)  ; LAB_00562548
    MOV EAX,EBX                         ; 00562529
    POP EBX                             ; 0056252b
    RET                                 ; 0056252c
    PUSH 0x5fc180                       ; 0056252d | DAT_005fc180
        ;   Label: LAB_0056252d
    PUSH EBX                            ; 00562532
    CALL FUN_005b7fa7                   ; 00562533
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00562538
    PUSH EAX                            ; 0056253b
    CALL FUN_005b7fce                   ; 0056253c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00562541
    MOV EAX,EBX                         ; 00562544
    POP EBX                             ; 00562546
    RET                                 ; 00562547
    PUSH EAX                            ; 00562548
        ;   Label: LAB_00562548
    CALL FUN_005b7fdc                   ; 00562549
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0056254e
    MOV EAX,EBX                         ; 00562551
    POP EBX                             ; 00562553
    RET                                 ; 00562554


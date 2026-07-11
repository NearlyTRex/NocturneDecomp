; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004e1500(int param_1)
;
;
; XREF[2]:
;   FUN_004e11c0 at 004e1224
;   FUN_004e16b0 at 004e172d
;
; Referenced Globals:
;   void* switchdataD_004e14e8 = 004e157d
;
; Called Functions:
;   FUN_004e1660
;   FUN_004e1770
;   FUN_004e1990
;   FUN_004e19f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1500
        ;   Label: FUN_004e1500
    PUSH ESI                            ; 004e1501
    PUSH EDI                            ; 004e1502
    PUSH EBP                            ; 004e1503
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e1504
    PUSH EBX                            ; 004e1508
    CALL FUN_004e1660                   ; 004e1509
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    ADD ESP,0x4                         ; 004e150e
    MOV EDX,dword ptr [EBX + 0x28]      ; 004e1511
    MOV ESI,EAX                         ; 004e1514
    TEST EDX,EDX                        ; 004e1516
    JL 0x004e15e7                       ; 004e1518
        ;   XREF to: 004e15e7 (CONDITIONAL_JUMP)  ; LAB_004e15e7
    CMP EDX,dword ptr [EAX + 0x24]      ; 004e151e
    JZ 0x004e15e7                       ; 004e1521
        ;   XREF to: 004e15e7 (CONDITIONAL_JUMP)  ; LAB_004e15e7
    MOV EDI,dword ptr [EBX + 0x2c]      ; 004e1527
    TEST EDI,EDI                        ; 004e152a
    JNZ 0x004e15ad                      ; 004e152c
        ;   XREF to: 004e15ad (CONDITIONAL_JUMP)  ; LAB_004e15ad
    MOV EDX,dword ptr [ESI + 0x68]      ; 004e1532
        ;   Label: LAB_004e1532
    XOR EAX,EAX                         ; 004e1535
    XOR EBP,EBP                         ; 004e1537
    TEST EDX,EDX                        ; 004e1539
    JLE 0x004e1554                      ; 004e153b
        ;   XREF to: 004e1554 (CONDITIONAL_JUMP)  ; LAB_004e1554
    MOV EDX,ESI                         ; 004e153d
    IMUL EDI,EAX,0x18                   ; 004e153f
        ;   Label: LAB_004e153f
    MOV ECX,dword ptr [EDX + 0x6c]      ; 004e1542
    CMP ECX,dword ptr [EBX + 0x28]      ; 004e1545
    JNZ 0x004e15b8                      ; 004e1548
        ;   XREF to: 004e15b8 (CONDITIONAL_JUMP)  ; LAB_004e15b8
    ADD ESI,0x6c                        ; 004e154e
    LEA EBP,[ESI + EDI*0x1]             ; 004e1551
    TEST EBP,EBP                        ; 004e1554
        ;   Label: LAB_004e1554
    JZ 0x004e15b1                       ; 004e1556
        ;   XREF to: 004e15b1 (CONDITIONAL_JUMP)  ; default
    CMP EBP,dword ptr [EBX + 0x2c]      ; 004e1558
    JZ 0x004e15b1                       ; 004e155b
        ;   XREF to: 004e15b1 (CONDITIONAL_JUMP)  ; default
    PUSH EBX                            ; 004e155d
    MOV dword ptr [EBX + 0x2c],0x0      ; 004e155e
    CALL FUN_004e19f0                   ; 004e1565
        ;   XREF to: 004e19f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e19f0()
    MOV EAX,dword ptr [EBP + 0x4]       ; 004e156a
    DEC EAX                             ; 004e156d
    ADD ESP,0x4                         ; 004e156e
    CMP EAX,0x5                         ; 004e1571
    JA 0x004e15b1                       ; 004e1574
        ;   XREF to: 004e15b1 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4e14e8]  ; 004e1576 | caseD_1 | caseD_2 | caseD_6
        ;   Label: switchD
    MOV EDI,dword ptr [EBP + 0x8]       ; 004e157d
        ;   Label: caseD_1
    PUSH dword ptr [EBP + 0xc]          ; 004e1580
    PUSH EDI                            ; 004e1583
    PUSH EBX                            ; 004e1584
    CALL FUN_004e1990                   ; 004e1585
        ;   XREF to: 004e1990 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1990()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e158a
    ADD ESP,0xc                         ; 004e158d
    TEST EAX,EAX                        ; 004e1590
    JZ 0x004e15a3                       ; 004e1592
        ;   XREF to: 004e15a3 (CONDITIONAL_JUMP)  ; LAB_004e15a3
    PUSH EBX                            ; 004e1594
    CALL FUN_004e1660                   ; 004e1595
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e159a
    ADD ESP,0x4                         ; 004e159d
    MOV dword ptr [EBX + 0x28],EAX      ; 004e15a0
    MOV EAX,0x1                         ; 004e15a3
        ;   Label: LAB_004e15a3
    POP EBP                             ; 004e15a8
    POP EDI                             ; 004e15a9
    POP ESI                             ; 004e15aa
    POP EBX                             ; 004e15ab
    RET                                 ; 004e15ac
    CMP EDX,dword ptr [EDI]             ; 004e15ad
        ;   Label: LAB_004e15ad
    JNZ 0x004e1532                      ; 004e15af
        ;   XREF to: 004e1532 (CONDITIONAL_JUMP)  ; LAB_004e1532
    XOR EAX,EAX                         ; 004e15b1
        ;   Label: default
    POP EBP                             ; 004e15b3
    POP EDI                             ; 004e15b4
    POP ESI                             ; 004e15b5
    POP EBX                             ; 004e15b6
    RET                                 ; 004e15b7
    INC EAX                             ; 004e15b8
        ;   Label: LAB_004e15b8
    MOV ECX,dword ptr [ESI + 0x68]      ; 004e15b9
    ADD EDX,0x18                        ; 004e15bc
    CMP EAX,ECX                         ; 004e15bf
    JL 0x004e153f                       ; 004e15c1
        ;   XREF to: 004e153f (CONDITIONAL_JUMP)  ; LAB_004e153f
    JMP 0x004e1554                      ; 004e15c7
        ;   XREF to: 004e1554 (UNCONDITIONAL_JUMP)  ; LAB_004e1554
    MOV dword ptr [EBX + 0x2c],EBP      ; 004e15c9
        ;   Label: caseD_2
    XOR EAX,EAX                         ; 004e15cc
    POP EBP                             ; 004e15ce
    POP EDI                             ; 004e15cf
    POP ESI                             ; 004e15d0
    POP EBX                             ; 004e15d1
    RET                                 ; 004e15d2
    PUSH EBP                            ; 004e15d3
        ;   Label: caseD_3
    PUSH EBX                            ; 004e15d4
    MOV dword ptr [EBX + 0x2c],EBP      ; 004e15d5
    CALL FUN_004e1770                   ; 004e15d8
        ;   XREF to: 004e1770 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1770()
    ADD ESP,0x8                         ; 004e15dd
    XOR EAX,EAX                         ; 004e15e0
    POP EBP                             ; 004e15e2
    POP EDI                             ; 004e15e3
    POP ESI                             ; 004e15e4
    POP EBX                             ; 004e15e5
    RET                                 ; 004e15e6
    MOV dword ptr [EBX + 0x2c],0x0      ; 004e15e7
        ;   Label: LAB_004e15e7
    XOR EAX,EAX                         ; 004e15ee
    POP EBP                             ; 004e15f0
    POP EDI                             ; 004e15f1
    POP ESI                             ; 004e15f2
    POP EBX                             ; 004e15f3
    RET                                 ; 004e15f4


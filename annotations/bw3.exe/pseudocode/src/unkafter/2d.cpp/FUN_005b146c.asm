; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_2d_cpp_FUN_005b146c(char *param_1)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005b12a0 at 005b13d6
;
; Referenced Globals:
;   undefined4 DAT_02d25920
;   undefined4 DAT_02d25924
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_memory.c_realloc_FUN_005a3e50
;   crt_string.c_memmove_FUN_005a54c0
;   crt_unknown.c_FUN_005a3650
;   unkafter_2d.cpp_FUN_005b1610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b146c
        ;   Label: unkafter_2d.cpp_FUN_005b146c
    PUSH ESI                            ; 005b146d
    PUSH EDI                            ; 005b146e
    PUSH EBP                            ; 005b146f
    SUB ESP,0x8                         ; 005b1470
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005b1473
    TEST EDX,EDX                        ; 005b1477
    JNZ 0x005b1485                      ; 005b1479
        ;   XREF to: 005b1485 (CONDITIONAL_JUMP)  ; LAB_005b1485
    MOV EAX,0xffffffff                  ; 005b147b
    JMP 0x005b1607                      ; 005b1480
        ;   XREF to: 005b1607 (UNCONDITIONAL_JUMP)  ; LAB_005b1607
    CMP byte ptr [EDX],0x0              ; 005b1485
        ;   Label: LAB_005b1485
    JZ 0x005b149f                       ; 005b1488
        ;   XREF to: 005b149f (CONDITIONAL_JUMP)  ; LAB_005b149f
    LEA EAX,[EDX + 0x1]                 ; 005b148a
    CMP byte ptr [EAX],0x0              ; 005b148d
    JZ 0x005b149f                       ; 005b1490
        ;   XREF to: 005b149f (CONDITIONAL_JUMP)  ; LAB_005b149f
    CMP byte ptr [EAX],0x3d             ; 005b1492
        ;   Label: LAB_005b1492
    JZ 0x005b149f                       ; 005b1495
        ;   XREF to: 005b149f (CONDITIONAL_JUMP)  ; LAB_005b149f
    MOV CL,byte ptr [EAX + 0x1]         ; 005b1497
    INC EAX                             ; 005b149a
    TEST CL,CL                          ; 005b149b
    JNZ 0x005b1492                      ; 005b149d
        ;   XREF to: 005b1492 (CONDITIONAL_JUMP)  ; LAB_005b1492
    CMP byte ptr [EAX],0x0              ; 005b149f
        ;   Label: LAB_005b149f
    JNZ 0x005b14b1                      ; 005b14a2
        ;   XREF to: 005b14b1 (CONDITIONAL_JUMP)  ; LAB_005b14b1
    MOV EAX,0xffffffff                  ; 005b14a4
    ADD ESP,0x8                         ; 005b14a9
    POP EBP                             ; 005b14ac
    POP EDI                             ; 005b14ad
    POP ESI                             ; 005b14ae
    POP EBX                             ; 005b14af
    RET                                 ; 005b14b0
    CMP byte ptr [EAX + 0x1],0x0        ; 005b14b1
        ;   Label: LAB_005b14b1
    SETZ AL                             ; 005b14b5
    MOV EBX,dword ptr [0x02d25924]      ; 005b14b8 | DAT_02d25924
    MOVZX EBP,AL                        ; 005b14be
    TEST EBX,EBX                        ; 005b14c1
    JNZ 0x005b1502                      ; 005b14c3
        ;   XREF to: 005b1502 (CONDITIONAL_JUMP)  ; LAB_005b1502
    TEST EBP,EBP                        ; 005b14c5
    JNZ 0x005b1605                      ; 005b14c7
        ;   XREF to: 005b1605 (CONDITIONAL_JUMP)  ; LAB_005b1605
    PUSH 0x9                            ; 005b14cd
    CALL crt_unknown.c_FUN_005a3650     ; 005b14cf
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005b14d4
    MOV EBX,EAX                         ; 005b14d7
    TEST EAX,EAX                        ; 005b14d9
    JNZ 0x005b14ea                      ; 005b14db
        ;   XREF to: 005b14ea (CONDITIONAL_JUMP)  ; LAB_005b14ea
    MOV EAX,0xffffffff                  ; 005b14dd
    ADD ESP,0x8                         ; 005b14e2
    POP EBP                             ; 005b14e5
    POP EDI                             ; 005b14e6
    POP ESI                             ; 005b14e7
    POP EBX                             ; 005b14e8
    RET                                 ; 005b14e9
    MOV [0x02d25924],EAX                ; 005b14ea | DAT_02d25924
        ;   Label: LAB_005b14ea
    ADD EAX,0x8                         ; 005b14ef
    MOV dword ptr [EAX + -0x8],EBP      ; 005b14f2
    MOV dword ptr [EAX + -0x4],EBP      ; 005b14f5
    MOV [0x02d25920],EAX                ; 005b14f8 | DAT_02d25920
    JMP 0x005b15ed                      ; 005b14fd
        ;   XREF to: 005b15ed (UNCONDITIONAL_JUMP)  ; LAB_005b15ed
    PUSH EBP                            ; 005b1502
        ;   Label: LAB_005b1502
    MOV ECX,dword ptr [ESP + 0x20]      ; 005b1503
    PUSH ECX                            ; 005b1507
    CALL unkafter_2d.cpp_FUN_005b1610   ; 005b1508
        ;   XREF to: 005b1610 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005b1610()
    ADD ESP,0x8                         ; 005b150d
    TEST EBP,EBP                        ; 005b1510
    JNZ 0x005b1605                      ; 005b1512
        ;   XREF to: 005b1605 (CONDITIONAL_JUMP)  ; LAB_005b1605
    TEST EAX,EAX                        ; 005b1518
    JG 0x005b15ea                       ; 005b151a
        ;   XREF to: 005b15ea (CONDITIONAL_JUMP)  ; LAB_005b15ea
    NEG EAX                             ; 005b1520
    MOV EDX,dword ptr [0x02d25920]      ; 005b1522 | DAT_02d25920
    MOV EBP,EAX                         ; 005b1528
    INC EAX                             ; 005b152a
    LEA ESI,[EBP*0x4 + 0x0]             ; 005b152b
    MOV dword ptr [ESP],EAX             ; 005b1532
    LEA EAX,[ESI + 0x8]                 ; 005b1535
    MOV EDI,dword ptr [ESP]             ; 005b1538
    MOV dword ptr [ESP + 0x4],EAX       ; 005b153b
    ADD EAX,EDI                         ; 005b153f
    TEST EDX,EDX                        ; 005b1541
    JNZ 0x005b15a0                      ; 005b1543
        ;   XREF to: 005b15a0 (CONDITIONAL_JUMP)  ; LAB_005b15a0
    PUSH EAX                            ; 005b1545
    CALL crt_unknown.c_FUN_005a3650     ; 005b1546
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    MOV EDX,EAX                         ; 005b154b
    ADD ESP,0x4                         ; 005b154d
    MOV EBX,EAX                         ; 005b1550
    TEST EAX,EAX                        ; 005b1552
    JNZ 0x005b1563                      ; 005b1554
        ;   XREF to: 005b1563 (CONDITIONAL_JUMP)  ; LAB_005b1563
    MOV EAX,0xffffffff                  ; 005b1556
    ADD ESP,0x8                         ; 005b155b
    POP EBP                             ; 005b155e
    POP EDI                             ; 005b155f
    POP ESI                             ; 005b1560
    POP EBX                             ; 005b1561
    RET                                 ; 005b1562
    MOV EAX,[0x02d25924]                ; 005b1563 | DAT_02d25924
        ;   Label: LAB_005b1563
    MOV ECX,ESI                         ; 005b1568
    MOV EDI,EDX                         ; 005b156a
    MOV ESI,EAX                         ; 005b156c
    PUSH ES                             ; 005b156e
    MOV AX,DS                           ; 005b156f
    MOV ES,AX                           ; 005b1571
    PUSH EDI                            ; 005b1573
    MOV EAX,ECX                         ; 005b1574
    SHR ECX,0x2                         ; 005b1576
    MOVSD.REP ES:EDI,ESI                ; 005b1579
    MOV CL,AL                           ; 005b157b
    AND CL,0x3                          ; 005b157d
    MOVSB.REP ES:EDI,ESI                ; 005b1580
    POP EDI                             ; 005b1582
    POP ES                              ; 005b1583
    MOV ESI,dword ptr [ESP]             ; 005b1584
    PUSH ESI                            ; 005b1587
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b1588
    PUSH 0x0                            ; 005b158c
    ADD EAX,EDX                         ; 005b158e
    PUSH EAX                            ; 005b1590
    MOV [0x02d25920],EAX                ; 005b1591 | DAT_02d25920
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005b1596
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b159b
    JMP 0x005b15da                      ; 005b159e
        ;   XREF to: 005b15da (UNCONDITIONAL_JUMP)  ; LAB_005b15da
    PUSH EAX                            ; 005b15a0
        ;   Label: LAB_005b15a0
    PUSH EBX                            ; 005b15a1
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 005b15a2
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005b15a7
    MOV EBX,EAX                         ; 005b15aa
    TEST EAX,EAX                        ; 005b15ac
    JNZ 0x005b15bd                      ; 005b15ae
        ;   XREF to: 005b15bd (CONDITIONAL_JUMP)  ; LAB_005b15bd
    MOV EAX,0xffffffff                  ; 005b15b0
    ADD ESP,0x8                         ; 005b15b5
    POP EBP                             ; 005b15b8
    POP EDI                             ; 005b15b9
    POP ESI                             ; 005b15ba
    POP EBX                             ; 005b15bb
    RET                                 ; 005b15bc
    PUSH EBP                            ; 005b15bd
        ;   Label: LAB_005b15bd
    MOV ECX,dword ptr [0x02d25920]      ; 005b15be | DAT_02d25920
    MOV ESI,dword ptr [ESP + 0x8]       ; 005b15c4
    PUSH ECX                            ; 005b15c8
    ADD ESI,EAX                         ; 005b15c9
    PUSH ESI                            ; 005b15cb
    CALL crt_string.c_memmove_FUN_005a54c0 ; 005b15cc
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005b15d1
    MOV dword ptr [0x02d25920],ESI      ; 005b15d4 | DAT_02d25920
    MOV dword ptr [EBX + EBP*0x4 + 0x4],0x0 ; 005b15da
        ;   Label: LAB_005b15da
    MOV dword ptr [0x02d25924],EBX      ; 005b15e2 | DAT_02d25924
    JMP 0x005b15ed                      ; 005b15e8
        ;   XREF to: 005b15ed (UNCONDITIONAL_JUMP)  ; LAB_005b15ed
    LEA EBP,[EAX + -0x1]                ; 005b15ea
        ;   Label: LAB_005b15ea
    LEA EAX,[EBP*0x4 + 0x0]             ; 005b15ed
        ;   Label: LAB_005b15ed
    ADD EBX,EAX                         ; 005b15f4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005b15f6
    MOV dword ptr [EBX],EAX             ; 005b15fa
    MOV EAX,[0x02d25920]                ; 005b15fc | DAT_02d25920
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 005b1601
    XOR EAX,EAX                         ; 005b1605
        ;   Label: LAB_005b1605
    ADD ESP,0x8                         ; 005b1607
        ;   Label: LAB_005b1607
    POP EBP                             ; 005b160a
    POP EDI                             ; 005b160b
    POP ESI                             ; 005b160c
    POP EBX                             ; 005b160d
    RET                                 ; 005b160e


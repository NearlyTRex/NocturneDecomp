; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c140c(undefined4 param_1,byte param_2,uint param_3,undefined4 param_4,undefined4 param_5,int param_6)
;
;
; XREF[2]:
;   crt_stdio.c_freopen_FUN_005c1614 at 005c1688
;   crt_unknown.c_FUN_005c1520 at 005c1566
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005c0820
;   crt_stdio.c_fseek_FUN_005c170c
;   crt_unknown.c_FUN_005c6ae0
;   crt_unknown.c_FUN_005c7254
;   crt_unknown.c_FUN_005c74d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c140c
        ;   Label: crt_unknown.c_FUN_005c140c
    PUSH ESI                            ; 005c140d
    PUSH EDI                            ; 005c140e
    PUSH EBP                            ; 005c140f
    MOV EBX,dword ptr [ESP + 0x28]      ; 005c1410
    AND byte ptr [EBX + 0xc],0xfc       ; 005c1414
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005c1418
    MOV EDX,dword ptr [EBX + 0xc]       ; 005c141c
    OR EDX,EAX                          ; 005c141f
    XOR EAX,EAX                         ; 005c1421
    MOV AL,byte ptr [ESP + 0x18]        ; 005c1423
    PUSH EAX                            ; 005c1427
    MOV dword ptr [EBX + 0xc],EDX       ; 005c1428
    CALL crt_ctype.c_tolower_FUN_005c0820 ; 005c142b
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005c0820(int character)
    ADD ESP,0x4                         ; 005c1430
    CMP AL,0x72                         ; 005c1433
    JNZ 0x005c1465                      ; 005c1435
        ;   XREF to: 005c1465 (CONDITIONAL_JUMP)  ; LAB_005c1465
    MOV CH,byte ptr [ESP + 0x1c]        ; 005c1437
    XOR EAX,EAX                         ; 005c143b
    TEST CH,0x2                         ; 005c143d
    JZ 0x005c1447                       ; 005c1440
        ;   XREF to: 005c1447 (CONDITIONAL_JUMP)  ; LAB_005c1447
    MOV EAX,0x2                         ; 005c1442
    TEST byte ptr [ESP + 0x1c],0x40     ; 005c1447
        ;   Label: LAB_005c1447
    JZ 0x005c1453                       ; 005c144c
        ;   XREF to: 005c1453 (CONDITIONAL_JUMP)  ; LAB_005c1453
    OR AH,0x2                           ; 005c144e
    JMP 0x005c1456                      ; 005c1451
        ;   XREF to: 005c1456 (UNCONDITIONAL_JUMP)  ; LAB_005c1456
    OR AH,0x1                           ; 005c1453
        ;   Label: LAB_005c1453
    PUSH 0x0                            ; 005c1456
        ;   Label: LAB_005c1456
    MOV EDI,dword ptr [ESP + 0x28]      ; 005c1458
    PUSH EDI                            ; 005c145c
    PUSH EAX                            ; 005c145d
    MOV EBP,dword ptr [ESP + 0x20]      ; 005c145e
    PUSH EBP                            ; 005c1462
    JMP 0x005c14a1                      ; 005c1463
        ;   XREF to: 005c14a1 (UNCONDITIONAL_JUMP)  ; LAB_005c14a1
    MOV DL,byte ptr [ESP + 0x1c]        ; 005c1465
        ;   Label: LAB_005c1465
    TEST DL,0x1                         ; 005c1469
    SETNZ AL                            ; 005c146c
    AND EAX,0xff                        ; 005c146f
    ADD EAX,0x21                        ; 005c1474
    TEST DL,0x80                        ; 005c1477
    JZ 0x005c1480                       ; 005c147a
        ;   XREF to: 005c1480 (CONDITIONAL_JUMP)  ; LAB_005c1480
    OR AL,0x10                          ; 005c147c
    JMP 0x005c1482                      ; 005c147e
        ;   XREF to: 005c1482 (UNCONDITIONAL_JUMP)  ; LAB_005c1482
    OR AL,0x40                          ; 005c1480
        ;   Label: LAB_005c1480
    TEST byte ptr [ESP + 0x1c],0x40     ; 005c1482
        ;   Label: LAB_005c1482
    JZ 0x005c148e                       ; 005c1487
        ;   XREF to: 005c148e (CONDITIONAL_JUMP)  ; LAB_005c148e
    OR AH,0x2                           ; 005c1489
    JMP 0x005c1491                      ; 005c148c
        ;   XREF to: 005c1491 (UNCONDITIONAL_JUMP)  ; LAB_005c1491
    OR AH,0x1                           ; 005c148e
        ;   Label: LAB_005c148e
    PUSH 0x180                          ; 005c1491
        ;   Label: LAB_005c1491
    MOV ECX,dword ptr [ESP + 0x28]      ; 005c1496
    PUSH ECX                            ; 005c149a
    PUSH EAX                            ; 005c149b
    MOV ESI,dword ptr [ESP + 0x20]      ; 005c149c
    PUSH ESI                            ; 005c14a0
    CALL crt_unknown.c_FUN_005c7254     ; 005c14a1
        ;   XREF to: 005c7254 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7254()
        ;   Label: LAB_005c14a1
    ADD ESP,0x10                        ; 005c14a6
    MOV dword ptr [EBX + 0x10],EAX      ; 005c14a9
    CMP dword ptr [EBX + 0x10],-0x1     ; 005c14ac
    JNZ 0x005c14c2                      ; 005c14b0
        ;   XREF to: 005c14c2 (CONDITIONAL_JUMP)  ; LAB_005c14c2
    PUSH EBX                            ; 005c14b2
    CALL crt_unknown.c_FUN_005c6ae0     ; 005c14b3
        ;   XREF to: 005c6ae0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6ae0()
    ADD ESP,0x4                         ; 005c14b8
    XOR EAX,EAX                         ; 005c14bb
    POP EBP                             ; 005c14bd
    POP EDI                             ; 005c14be
    POP ESI                             ; 005c14bf
    POP EBX                             ; 005c14c0
    RET                                 ; 005c14c1
    MOV dword ptr [EBX + 0x4],0x0       ; 005c14c2
        ;   Label: LAB_005c14c2
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c14c9
    MOV dword ptr [EBX + 0x14],0x0      ; 005c14cc
    MOV dword ptr [EAX + 0xc],0x0       ; 005c14d3
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c14da
    MOV EDX,dword ptr [ESP + 0x20]      ; 005c14dd
    MOV dword ptr [EAX + 0x10],EDX      ; 005c14e1
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c14e4
    MOV dword ptr [EAX + 0x15],0x0      ; 005c14e7
    MOV EAX,dword ptr [EBX + 0x8]       ; 005c14ee
    MOV DH,byte ptr [ESP + 0x1c]        ; 005c14f1
    MOV dword ptr [EAX + 0x8],0x0       ; 005c14f5
    TEST DH,0x80                        ; 005c14fc
    JZ 0x005c150e                       ; 005c14ff
        ;   XREF to: 005c150e (CONDITIONAL_JUMP)  ; LAB_005c150e
    PUSH 0x2                            ; 005c1501
    PUSH 0x0                            ; 005c1503
    PUSH EBX                            ; 005c1505
    CALL crt_stdio.c_fseek_FUN_005c170c ; 005c1506
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005c170c()
    ADD ESP,0xc                         ; 005c150b
    PUSH EBX                            ; 005c150e
        ;   Label: LAB_005c150e
    CALL crt_unknown.c_FUN_005c74d0     ; 005c150f
        ;   XREF to: 005c74d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c74d0()
    ADD ESP,0x4                         ; 005c1514
    MOV EAX,EBX                         ; 005c1517
    POP EBP                             ; 005c1519
    POP EDI                             ; 005c151a
    POP ESI                             ; 005c151b
    POP EBX                             ; 005c151c
    RET                                 ; 005c151d


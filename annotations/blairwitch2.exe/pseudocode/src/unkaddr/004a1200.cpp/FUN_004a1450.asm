; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkaddr_004a1200_cpp_FUN_004a1450(byte *param_1,byte *param_2,byte *param_3)
;
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005b8e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1450
        ;   Label: unkaddr_004a1200.cpp_FUN_004a1450
    PUSH ESI                            ; 004a1451
    PUSH EDI                            ; 004a1452
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a1453
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a1457
    MOV AL,byte ptr [ESI]               ; 004a145b
        ;   Label: LAB_004a145b
    INC AL                              ; 004a145d
    AND EAX,0xff                        ; 004a145f
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004a1464
    JZ 0x004a1470                       ; 004a146b
        ;   XREF to: 004a1470 (CONDITIONAL_JUMP)  ; LAB_004a1470
    INC ESI                             ; 004a146d
    JMP 0x004a145b                      ; 004a146e
        ;   XREF to: 004a145b (UNCONDITIONAL_JUMP)  ; LAB_004a145b
    CMP byte ptr [ESI],0x5c             ; 004a1470
        ;   Label: LAB_004a1470
    JNZ 0x004a14ba                      ; 004a1473
        ;   XREF to: 004a14ba (CONDITIONAL_JUMP)  ; LAB_004a14ba
    MOV CL,byte ptr [EBX]               ; 004a1475
    INC ESI                             ; 004a1477
    TEST CL,CL                          ; 004a1478
    JZ 0x004a14a5                       ; 004a147a
        ;   XREF to: 004a14a5 (CONDITIONAL_JUMP)  ; LAB_004a14a5
    XOR EAX,EAX                         ; 004a147c
        ;   Label: LAB_004a147c
    MOV AL,byte ptr [ESI]               ; 004a147e
    PUSH EAX                            ; 004a1480
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a1481
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    MOV EDI,EAX                         ; 004a1486
    XOR EAX,EAX                         ; 004a1488
    ADD ESP,0x4                         ; 004a148a
    MOV AL,byte ptr [EBX]               ; 004a148d
    PUSH EAX                            ; 004a148f
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004a1490
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004a1495
    CMP EDI,EAX                         ; 004a1498
    JNZ 0x004a14ba                      ; 004a149a
        ;   XREF to: 004a14ba (CONDITIONAL_JUMP)  ; LAB_004a14ba
    INC ESI                             ; 004a149c
    MOV CH,byte ptr [EBX + 0x1]         ; 004a149d
    INC EBX                             ; 004a14a0
    TEST CH,CH                          ; 004a14a1
    JNZ 0x004a147c                      ; 004a14a3
        ;   XREF to: 004a147c (CONDITIONAL_JUMP)  ; LAB_004a147c
    MOV AL,byte ptr [ESI]               ; 004a14a5
        ;   Label: LAB_004a14a5
    INC AL                              ; 004a14a7
    AND EAX,0xff                        ; 004a14a9
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 004a14ae
    JZ 0x004a14c0                       ; 004a14b5
        ;   XREF to: 004a14c0 (CONDITIONAL_JUMP)  ; LAB_004a14c0
    INC ESI                             ; 004a14b7
    JMP 0x004a14a5                      ; 004a14b8
        ;   XREF to: 004a14a5 (UNCONDITIONAL_JUMP)  ; LAB_004a14a5
    XOR EAX,EAX                         ; 004a14ba
        ;   Label: LAB_004a14ba
    POP EDI                             ; 004a14bc
    POP ESI                             ; 004a14bd
    POP EBX                             ; 004a14be
    RET                                 ; 004a14bf
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a14c0
        ;   Label: LAB_004a14c0
    PUSH EDI                            ; 004a14c4
    MOV AL,byte ptr [ESI]               ; 004a14c5
        ;   Label: LAB_004a14c5
    MOV byte ptr [EDI],AL               ; 004a14c7
    CMP AL,0x0                          ; 004a14c9
    JZ 0x004a14dd                       ; 004a14cb
        ;   XREF to: 004a14dd (CONDITIONAL_JUMP)  ; LAB_004a14dd
    MOV AL,byte ptr [ESI + 0x1]         ; 004a14cd
    ADD ESI,0x2                         ; 004a14d0
    MOV byte ptr [EDI + 0x1],AL         ; 004a14d3
    ADD EDI,0x2                         ; 004a14d6
    CMP AL,0x0                          ; 004a14d9
    JNZ 0x004a14c5                      ; 004a14db
        ;   XREF to: 004a14c5 (CONDITIONAL_JUMP)  ; LAB_004a14c5
    POP EDI                             ; 004a14dd
        ;   Label: LAB_004a14dd
    MOV EAX,0x1                         ; 004a14de
    POP EDI                             ; 004a14e3
    POP ESI                             ; 004a14e4
    POP EBX                             ; 004a14e5
    RET                                 ; 004a14e6


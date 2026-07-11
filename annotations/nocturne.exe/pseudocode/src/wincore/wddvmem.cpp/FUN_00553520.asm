; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00553520(void)
;
;
; XREF[4]:
;   FUN_0049cc10 at 0049d5ba
;   FUN_004a57c0 at 004a5993
;   FUN_00532ba0 at 00532c45
;   FUN_00553910 at 005539a1
;
; Referenced Globals:
;   string s_..\\wincore\\wddvmem.cpp_00597995
;   string s_closeScreenDevice_-_Unable_to_un_005979ac
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_005c5010
;   undefined4 DAT_006af62c
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;   undefined4 DAT_01bd4260
;   undefined4 DAT_01c02594
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02ddf558
;   undefined4 DAT_02ddf564
;   ... and 1 more
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00553520
        ;   Label: FUN_00553520
    CMP dword ptr [0x02ddf56c],0x0      ; 00553521 | DAT_02ddf56c
    JNZ 0x005535ea                      ; 00553528
        ;   XREF to: 005535ea (CONDITIONAL_JUMP)  ; LAB_005535ea
    MOV ECX,dword ptr [0x01c02594]      ; 0055352e | DAT_01c02594
    TEST ECX,ECX                        ; 00553534
    JNZ 0x005535ec                      ; 00553536
        ;   XREF to: 005535ec (CONDITIONAL_JUMP)  ; LAB_005535ec
    PUSH EDI                            ; 0055353c
    PUSH ESI                            ; 0055353d
    CMP dword ptr [0x005b7620],0x0      ; 0055353e | DAT_005b7620
    JLE 0x005535a7                      ; 00553545
        ;   XREF to: 005535a7 (CONDITIONAL_JUMP)  ; LAB_005535a7
    PUSH EBX                            ; 00553547
    MOV EAX,[0x005b7624]                ; 00553548 | DAT_005b7624
    MOV EDX,EAX                         ; 0055354d
    SAR EDX,0x1f                        ; 0055354f
    SHL EDX,0x3                         ; 00553552
    SBB EAX,EDX                         ; 00553555
    SAR EAX,0x3                         ; 00553557
    MOV EDI,EAX                         ; 0055355a
    IMUL EDX,dword ptr [0x005b761c],0x0 ; 0055355c | DAT_005b761c
    MOV EBP,dword ptr [0x005b761c]      ; 00553563 | DAT_005b761c
    SHL EBP,0x2                         ; 00553569
    XOR EAX,EAX                         ; 0055356c
    MOV ESI,dword ptr [0x005b761c]      ; 0055356e | DAT_005b761c
        ;   Label: LAB_0055356e
    IMUL ESI,ECX                        ; 00553574
    IMUL ESI,EDI                        ; 00553577
    MOV EBX,dword ptr [0x005c5010]      ; 0055357a | DAT_005c5010
    ADD EBX,ESI                         ; 00553580
    MOV dword ptr [EAX + 0x1bd2fa0],EBX ; 00553582 | DAT_01bd2fa0 | DAT_01bd2fa4
    MOV EBX,dword ptr [0x006af62c]      ; 00553588 | DAT_006af62c
    ADD EAX,0x4                         ; 0055358e
    ADD EBX,EDX                         ; 00553591
    INC ECX                             ; 00553593
    MOV dword ptr [EAX + 0x1bd425c],EBX ; 00553594 | DAT_01bd4260
    MOV EBX,dword ptr [0x005b7620]      ; 0055359a | DAT_005b7620
    ADD EDX,EBP                         ; 005535a0
    CMP ECX,EBX                         ; 005535a2
    JL 0x0055356e                       ; 005535a4
        ;   XREF to: 0055356e (CONDITIONAL_JUMP)  ; LAB_0055356e
    POP EBX                             ; 005535a6
    PUSH 0x0                            ; 005535a7
        ;   Label: LAB_005535a7
    MOV EAX,[0x02ddf558]                ; 005535a9 | DAT_02ddf558
    PUSH EAX                            ; 005535ae
    MOV EDX,dword ptr [EAX]             ; 005535af
    CALL dword ptr [EDX + 0x80]         ; 005535b1
    TEST EAX,EAX                        ; 005535b7
    JZ 0x005535de                       ; 005535b9
        ;   XREF to: 005535de (CONDITIONAL_JUMP)  ; LAB_005535de
    MOV ESI,0x597995                    ; 005535bb | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x27f                       ; 005535c0
    PUSH 0x5979ac                       ; 005535c5 | = "closeScreenDevice - Unable to unlock"
    MOV dword ptr [0x01cc4800],ESI      ; 005535ca | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 005535d0 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005535d6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005535db
    MOV dword ptr [0x02ddf564],0x1      ; 005535de | DAT_02ddf564
        ;   Label: LAB_005535de
    POP ESI                             ; 005535e8
    POP EDI                             ; 005535e9
    POP EBP                             ; 005535ea
        ;   Label: LAB_005535ea
    RET                                 ; 005535eb
    MOV dword ptr [0x02ddf564],0x1      ; 005535ec | DAT_02ddf564
        ;   Label: LAB_005535ec
    POP EBP                             ; 005535f6
    RET                                 ; 005535f7


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00574404(short *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00574264 at 00574310
;
; Referenced Globals:
;   undefined4 DAT_02de54a0
;   undefined4 DAT_02de54a8
;
; Called Functions:
;   FUN_005638d0
;   FUN_00566170
;   FUN_005746f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574404
        ;   Label: FUN_00574404
    PUSH ESI                            ; 00574405
    PUSH EDI                            ; 00574406
    PUSH EBP                            ; 00574407
    MOV EBP,dword ptr [0x02de54a8]      ; 00574408 | DAT_02de54a8
    JMP 0x005744f8                      ; 0057440e
        ;   XREF to: 005744f8 (UNCONDITIONAL_JUMP)  ; LAB_005744f8
    MOV ESI,dword ptr [ESP + 0x14]      ; 00574413
        ;   Label: LAB_00574413
    CMP word ptr [ESI],0x0              ; 00574417
    JZ 0x005744f5                       ; 0057441b
        ;   XREF to: 005744f5 (CONDITIONAL_JUMP)  ; LAB_005744f5
    XOR EAX,EAX                         ; 00574421
        ;   Label: LAB_00574421
    MOV AX,word ptr [EBX]               ; 00574423
    PUSH EAX                            ; 00574426
    CALL FUN_005746f0                   ; 00574427
        ;   XREF to: 005746f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005746f0()
    MOV EDI,EAX                         ; 0057442c
    XOR EAX,EAX                         ; 0057442e
    ADD ESP,0x4                         ; 00574430
    MOV AX,word ptr [ESI]               ; 00574433
    PUSH EAX                            ; 00574436
    CALL FUN_005746f0                   ; 00574437
        ;   XREF to: 005746f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005746f0()
    ADD ESP,0x4                         ; 0057443c
    CMP DI,AX                           ; 0057443f
    JNZ 0x005744f5                      ; 00574442
        ;   XREF to: 005744f5 (CONDITIONAL_JUMP)  ; LAB_005744f5
    CMP word ptr [EBX],0x3d             ; 00574448
    JNZ 0x005744e2                      ; 0057444c
        ;   XREF to: 005744e2 (CONDITIONAL_JUMP)  ; LAB_005744e2
    MOV EDX,dword ptr [0x02de54a8]      ; 00574452 | DAT_02de54a8
    MOV ESI,EBP                         ; 00574458
    SUB ESI,EDX                         ; 0057445a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0057445c
    SAR ESI,0x2                         ; 00574460
    TEST EBX,EBX                        ; 00574463
    JZ 0x005744da                       ; 00574465
        ;   XREF to: 005744da (CONDITIONAL_JUMP)  ; LAB_005744da
    MOV EDX,dword ptr [EBP]             ; 0057446b
    MOV EBX,EBP                         ; 0057446e
    TEST EDX,EDX                        ; 00574470
    JZ 0x00574483                       ; 00574472
        ;   XREF to: 00574483 (CONDITIONAL_JUMP)  ; LAB_00574483
    MOV EAX,dword ptr [EBX + 0x4]       ; 00574474
        ;   Label: LAB_00574474
    MOV dword ptr [EBX],EAX             ; 00574477
    MOV ECX,dword ptr [EBX + 0x4]       ; 00574479
    ADD EBX,0x4                         ; 0057447c
    TEST ECX,ECX                        ; 0057447f
    JNZ 0x00574474                      ; 00574481
        ;   XREF to: 00574474 (CONDITIONAL_JUMP)  ; LAB_00574474
    MOV EDI,dword ptr [0x02de54a0]      ; 00574483 | DAT_02de54a0
        ;   Label: LAB_00574483
    TEST EDI,EDI                        ; 00574489
    JZ 0x005744d3                       ; 0057448b
        ;   XREF to: 005744d3 (CONDITIONAL_JUMP)  ; LAB_005744d3
    MOV EAX,EDI                         ; 0057448d
    CMP byte ptr [ESI + EAX*0x1],0x0    ; 0057448f
    JZ 0x0057449e                       ; 00574493
        ;   XREF to: 0057449e (CONDITIONAL_JUMP)  ; LAB_0057449e
    PUSH EDX                            ; 00574495
    CALL FUN_005638d0                   ; 00574496
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 0057449b
    MOV EAX,[0x02de54a8]                ; 0057449e | DAT_02de54a8
        ;   Label: LAB_0057449e
    MOV EBP,EBX                         ; 005744a3
    SUB EBP,EAX                         ; 005744a5
    SAR EBP,0x2                         ; 005744a7
    PUSH EBP                            ; 005744aa
    MOV EDX,dword ptr [0x02de54a0]      ; 005744ab | DAT_02de54a0
    PUSH EDX                            ; 005744b1
    PUSH EBX                            ; 005744b2
    CALL FUN_00566170                   ; 005744b3
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined FUN_00566170()
    ADD ESP,0xc                         ; 005744b8
    MOV dword ptr [0x02de54a0],EBX      ; 005744bb | DAT_02de54a0
    CMP ESI,EBP                         ; 005744c1
    JGE 0x005744d3                      ; 005744c3
        ;   XREF to: 005744d3 (CONDITIONAL_JUMP)  ; LAB_005744d3
    LEA EAX,[ESI + EBX*0x1]             ; 005744c5
    INC EAX                             ; 005744c8
        ;   Label: LAB_005744c8
    MOV BL,byte ptr [EAX]               ; 005744c9
    INC ESI                             ; 005744cb
    MOV byte ptr [EAX + -0x1],BL        ; 005744cc
    CMP ESI,EBP                         ; 005744cf
    JL 0x005744c8                       ; 005744d1
        ;   XREF to: 005744c8 (CONDITIONAL_JUMP)  ; LAB_005744c8
    XOR EAX,EAX                         ; 005744d3
        ;   Label: LAB_005744d3
    POP EBP                             ; 005744d5
    POP EDI                             ; 005744d6
    POP ESI                             ; 005744d7
    POP EBX                             ; 005744d8
    RET                                 ; 005744d9
    LEA EAX,[ESI + 0x1]                 ; 005744da
        ;   Label: LAB_005744da
    POP EBP                             ; 005744dd
    POP EDI                             ; 005744de
    POP ESI                             ; 005744df
    POP EBX                             ; 005744e0
    RET                                 ; 005744e1
    ADD EBX,0x2                         ; 005744e2
        ;   Label: LAB_005744e2
    MOV CX,word ptr [ESI + 0x2]         ; 005744e5
    ADD ESI,0x2                         ; 005744e9
    TEST CX,CX                          ; 005744ec
    JNZ 0x00574421                      ; 005744ef
        ;   XREF to: 00574421 (CONDITIONAL_JUMP)  ; LAB_00574421
    ADD EBP,0x4                         ; 005744f5
        ;   Label: LAB_005744f5
    MOV EBX,dword ptr [EBP]             ; 005744f8
        ;   Label: LAB_005744f8
    TEST EBX,EBX                        ; 005744fb
    JNZ 0x00574413                      ; 005744fd
        ;   XREF to: 00574413 (CONDITIONAL_JUMP)  ; LAB_00574413
    MOV EAX,[0x02de54a8]                ; 00574503 | DAT_02de54a8
    SUB EAX,EBP                         ; 00574508
    SAR EAX,0x2                         ; 0057450a
    POP EBP                             ; 0057450d
    POP EDI                             ; 0057450e
    POP ESI                             ; 0057450f
    POP EBX                             ; 00574510
    RET                                 ; 00574511


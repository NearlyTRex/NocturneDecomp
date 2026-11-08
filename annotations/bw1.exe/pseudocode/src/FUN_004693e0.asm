; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004693e0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004693a8 = 00469465
;   undefined4 DAT_005d9be4
;   undefined4 DAT_005d9bec
;   undefined4 DAT_005fecb4
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01ccf5ec
;   undefined4 DAT_01ccf624
;
; Called Functions:
;   FUN_0042e1a0
;   FUN_00432f10
;   FUN_00433d50
;   FUN_00469550
;   FUN_004d7f50
;   FUN_00524770
;   FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004693e0
        ;   Label: FUN_004693e0
    PUSH EBP                            ; 004693e1
    SUB ESP,0x8                         ; 004693e2
    MOV EBX,dword ptr [ESP + 0x14]      ; 004693e5
    PUSH dword ptr [ESP + 0x18]         ; 004693e9
    PUSH EBX                            ; 004693ed
    CALL FUN_0042e1a0                   ; 004693ee
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e1a0()
    ADD ESP,0x8                         ; 004693f3
    TEST EAX,EAX                        ; 004693f6
    JZ 0x004694cd                       ; 004693f8
        ;   XREF to: 004694cd (CONDITIONAL_JUMP)  ; LAB_004694cd
    PUSH ESI                            ; 004693fe
    MOV EAX,[0x0061d95c]                ; 004693ff | DAT_0061d95c
    CMP dword ptr [EAX + 0x25c],0x0     ; 00469404 | DAT_01ccf5ec
    SETNZ AL                            ; 0046940b
    MOV ESI,EAX                         ; 0046940e
    MOV ECX,dword ptr [EBX + 0x200d8]   ; 00469410
    AND ESI,0xff                        ; 00469416
    CMP ECX,0x1                         ; 0046941c
    JZ 0x004694d3                       ; 0046941f
        ;   XREF to: 004694d3 (CONDITIONAL_JUMP)  ; LAB_004694d3
    PUSH ESI                            ; 00469425
        ;   Label: LAB_00469425
    PUSH dword ptr [ESP + 0x20]         ; 00469426
    PUSH EBX                            ; 0046942a
    CALL FUN_00432f10                   ; 0046942b
        ;   XREF to: 00432f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00432f10()
    MOV EAX,[0x0061d95c]                ; 00469430 | DAT_0061d95c
    ADD ESP,0xc                         ; 00469435
    FLD float ptr [EAX + 0x294]         ; 00469438 | DAT_01ccf624
    LEA EAX,[EBX + 0x158]               ; 0046943e
    PUSH EAX                            ; 00469444
    FSTP float ptr [ESP + 0xc]          ; 00469445
    CALL FUN_00524770                   ; 00469449
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0046944e
    XOR ESI,ESI                         ; 00469451
    SUB EAX,0x12                        ; 00469453
    ADD ESP,0x4                         ; 00469456
    CMP EAX,0xc                         ; 00469459
    JA 0x0046946a                       ; 0046945c
        ;   XREF to: 0046946a (CONDITIONAL_JUMP)  ; caseD_1d
    JMP dword ptr [EAX*0x4 + 0x4693a8]  ; 0046945e | caseD_1e | caseD_1d | switchdataD_004693a8
        ;   Label: switchD
    MOV ESI,0x1                         ; 00469465
        ;   Label: caseD_12
    CMP dword ptr [EBX + 0x1ff5c],0x7   ; 0046946a
        ;   Label: caseD_1b
    JNZ 0x00469537                      ; 00469471
        ;   XREF to: 00469537 (CONDITIONAL_JUMP)  ; LAB_00469537
    FLD float ptr [ESP + 0x1c]          ; 00469477
        ;   Label: LAB_00469477
    FMUL double ptr [0x005d9bec]        ; 0046947b | DAT_005d9bec
    FSTP float ptr [ESP + 0x4]          ; 00469481
    PUSH dword ptr [ESP + 0x4]          ; 00469485
    PUSH EBX                            ; 00469489
    CALL FUN_00469550                   ; 0046948a
        ;   XREF to: 00469550 (UNCONDITIONAL_CALL)  ; undefined FUN_00469550()
    ADD ESP,0x8                         ; 0046948f
    PUSH dword ptr [ESP + 0x4]          ; 00469492
    PUSH EBX                            ; 00469496
    CALL FUN_00469550                   ; 00469497
        ;   XREF to: 00469550 (UNCONDITIONAL_CALL)  ; undefined FUN_00469550()
    ADD ESP,0x8                         ; 0046949c
    PUSH dword ptr [ESP + 0x4]          ; 0046949f
    PUSH EBX                            ; 004694a3
    CALL FUN_00469550                   ; 004694a4
        ;   XREF to: 00469550 (UNCONDITIONAL_CALL)  ; undefined FUN_00469550()
    ADD ESP,0x8                         ; 004694a9
    PUSH dword ptr [ESP + 0x4]          ; 004694ac
    PUSH EBX                            ; 004694b0
        ;   Label: LAB_004694b0
    CALL FUN_00469550                   ; 004694b1
        ;   XREF to: 00469550 (UNCONDITIONAL_CALL)  ; undefined FUN_00469550()
    ADD ESP,0x8                         ; 004694b6
    MOV EBP,dword ptr [0x0061d95c]      ; 004694b9 | DAT_0061d95c
    PUSH dword ptr [ESP + 0x8]          ; 004694bf
    PUSH EBP                            ; 004694c3 | DAT_01ccf390
    CALL FUN_004d7f50                   ; 004694c4
        ;   XREF to: 004d7f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004d7f50()
    ADD ESP,0x8                         ; 004694c9
    POP ESI                             ; 004694cc
    ADD ESP,0x8                         ; 004694cd
        ;   Label: LAB_004694cd
    POP EBP                             ; 004694d0
    POP EBX                             ; 004694d1
    RET                                 ; 004694d2
    PUSH ECX                            ; 004694d3
        ;   Label: LAB_004694d3
    FLD float ptr [0x005fecb4]          ; 004694d4 | DAT_005fecb4
    LEA EAX,[EBX + 0x158]               ; 004694da
    PUSH 0x75                           ; 004694e0
    FSUBR float ptr [EBX + 0x200dc]     ; 004694e2
    PUSH EAX                            ; 004694e8
    FSTP float ptr [EBX + 0x200dc]      ; 004694e9
    CALL FUN_005247c0                   ; 004694ef
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    FLD float ptr [EBX + 0x200dc]       ; 004694f4
    FABS                                ; 004694fa
    ADD ESP,0xc                         ; 004694fc
    FCOMP double ptr [0x005d9be4]       ; 004694ff | DAT_005d9be4
    FNSTSW AX                           ; 00469505
    SAHF                                ; 00469507
    JBE 0x00469519                      ; 00469508
        ;   XREF to: 00469519 (CONDITIONAL_JUMP)  ; LAB_00469519
    MOV dword ptr [EBX + 0x200d8],0x0   ; 0046950a
    JMP 0x00469425                      ; 00469514
        ;   XREF to: 00469425 (UNCONDITIONAL_JUMP)  ; LAB_00469425
    LEA EAX,[EBX + 0x30]                ; 00469519
        ;   Label: LAB_00469519
    FLD float ptr [0x005fecb4]          ; 0046951c | DAT_005fecb4
    PUSH EAX                            ; 00469522
    FADD float ptr [EBX + 0x34]         ; 00469523
    PUSH EBX                            ; 00469526
    FSTP float ptr [EBX + 0x34]         ; 00469527
    CALL FUN_00433d50                   ; 0046952a
        ;   XREF to: 00433d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00433d50()
    ADD ESP,0x8                         ; 0046952f
    JMP 0x00469425                      ; 00469532
        ;   XREF to: 00469425 (UNCONDITIONAL_JUMP)  ; LAB_00469425
    TEST ESI,ESI                        ; 00469537
        ;   Label: LAB_00469537
    JNZ 0x00469477                      ; 00469539
        ;   XREF to: 00469477 (CONDITIONAL_JUMP)  ; LAB_00469477
    PUSH dword ptr [ESP + 0x1c]         ; 0046953f
    JMP 0x004694b0                      ; 00469543
        ;   XREF to: 004694b0 (UNCONDITIONAL_JUMP)  ; LAB_004694b0


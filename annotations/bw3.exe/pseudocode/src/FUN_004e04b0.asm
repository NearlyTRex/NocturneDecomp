; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e04b0(int param_1,float param_2,int param_3)
;
;
; XREF[2]:
;   FUN_0048c2e0 at 004902ad
;   FUN_004e0250 at 004e045c
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;   undefined4 DAT_00600530
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d70c34
;   undefined4 DAT_01d82088
;   undefined4 DAT_01ed78c8
;   undefined4 DAT_02024a2c
;   undefined4 DAT_02024a30
;
; Called Functions:
;   FUN_0040c840
;   FUN_0048c150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e04b0
        ;   Label: FUN_004e04b0
    PUSH ESI                            ; 004e04b1
    PUSH EDI                            ; 004e04b2
    PUSH EBP                            ; 004e04b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004e04b4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004e04b8
    FLD float ptr [EDI + 0x2dc]         ; 004e04bc
    FCOMP float ptr [ESP + 0x18]        ; 004e04c2
    FNSTSW AX                           ; 004e04c6
    SAHF                                ; 004e04c8
    JZ 0x004e050e                       ; 004e04c9
        ;   XREF to: 004e050e (CONDITIONAL_JUMP)  ; LAB_004e050e
    MOV EAX,[0x00600530]                ; 004e04cb | DAT_00600530
    CMP dword ptr [EAX + 0x1008],0x0    ; 004e04d0 | DAT_01d82088
    JZ 0x004e0513                       ; 004e04d7
        ;   XREF to: 004e0513 (CONDITIONAL_JUMP)  ; LAB_004e0513
    TEST EBP,EBP                        ; 004e04d9
        ;   Label: LAB_004e04d9
    JZ 0x004e0580                       ; 004e04db
        ;   XREF to: 004e0580 (CONDITIONAL_JUMP)  ; LAB_004e0580
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e04e1
        ;   Label: LAB_004e04e1
    MOV dword ptr [EDI + 0x2dc],EAX     ; 004e04e5
    MOV EAX,dword ptr [EDI + 0x410]     ; 004e04eb
    TEST EAX,EAX                        ; 004e04f1
    JNZ 0x004e05d4                      ; 004e04f3
        ;   XREF to: 004e05d4 (CONDITIONAL_JUMP)  ; LAB_004e05d4
    XOR ESI,ESI                         ; 004e04f9
        ;   Label: LAB_004e04f9
    XOR EBX,EBX                         ; 004e04fb
    MOV EAX,[0x00603b28]                ; 004e04fd | DAT_00603b28 | DAT_01ed78c8
        ;   Label: LAB_004e04fd
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004e0502 | DAT_02024a2c
    JL 0x004e05e7                       ; 004e0508
        ;   XREF to: 004e05e7 (CONDITIONAL_JUMP)  ; LAB_004e05e7
    POP EBP                             ; 004e050e
        ;   Label: LAB_004e050e
    POP EDI                             ; 004e050f
    POP ESI                             ; 004e0510
    POP EBX                             ; 004e0511
    RET                                 ; 004e0512
    FLD float ptr [ESP + 0x18]          ; 004e0513
        ;   Label: LAB_004e0513
    FLDZ                                ; 004e0517
    FCOMPP                              ; 004e0519
    FNSTSW AX                           ; 004e051b
    SAHF                                ; 004e051d
    JC 0x004e0545                       ; 004e051e
        ;   XREF to: 004e0545 (CONDITIONAL_JUMP)  ; LAB_004e0545
    FLD float ptr [EDI + 0x2dc]         ; 004e0520
    FLDZ                                ; 004e0526
    FCOMPP                              ; 004e0528
    FNSTSW AX                           ; 004e052a
    SAHF                                ; 004e052c
    JNC 0x004e0545                      ; 004e052d
        ;   XREF to: 004e0545 (CONDITIONAL_JUMP)  ; LAB_004e0545
    LEA EAX,[EDI + 0x344]               ; 004e052f
    PUSH EAX                            ; 004e0535
    MOV ECX,dword ptr [0x005fba60]      ; 004e0536 | DAT_005fba60
    PUSH ECX                            ; 004e053c
    CALL FUN_0048c150                   ; 004e053d
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c150()
    ADD ESP,0x8                         ; 004e0542
    FLD float ptr [ESP + 0x18]          ; 004e0545
        ;   Label: LAB_004e0545
    FLD1                                ; 004e0549
    FCOMPP                              ; 004e054b
    FNSTSW AX                           ; 004e054d
    SAHF                                ; 004e054f
    JA 0x004e04d9                       ; 004e0550
        ;   XREF to: 004e04d9 (CONDITIONAL_JUMP)  ; LAB_004e04d9
    FLD float ptr [EDI + 0x2dc]         ; 004e0552
    FLD1                                ; 004e0558
    FCOMPP                              ; 004e055a
    FNSTSW AX                           ; 004e055c
    SAHF                                ; 004e055e
    JBE 0x004e04d9                      ; 004e055f
        ;   XREF to: 004e04d9 (CONDITIONAL_JUMP)  ; LAB_004e04d9
    LEA EAX,[EDI + 0x2e0]               ; 004e0565
    PUSH EAX                            ; 004e056b
    MOV EBX,dword ptr [0x005fba60]      ; 004e056c | DAT_005fba60
    PUSH EBX                            ; 004e0572
    CALL FUN_0048c150                   ; 004e0573
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c150()
    ADD ESP,0x8                         ; 004e0578
    JMP 0x004e04d9                      ; 004e057b
        ;   XREF to: 004e04d9 (UNCONDITIONAL_JUMP)  ; LAB_004e04d9
    FLDZ                                ; 004e0580
        ;   Label: LAB_004e0580
    FCOMP float ptr [ESP + 0x18]        ; 004e0582
    FNSTSW AX                           ; 004e0586
    SAHF                                ; 004e0588
    JNC 0x004e059a                      ; 004e0589
        ;   XREF to: 004e059a (CONDITIONAL_JUMP)  ; LAB_004e059a
    FLD float ptr [EDI + 0x2dc]         ; 004e058b
    FLDZ                                ; 004e0591
    FCOMPP                              ; 004e0593
    FNSTSW AX                           ; 004e0595
    SAHF                                ; 004e0597
    JNC 0x004e05bb                      ; 004e0598
        ;   XREF to: 004e05bb (CONDITIONAL_JUMP)  ; LAB_004e05bb
    CMP dword ptr [ESP + 0x18],0x3f800000 ; 004e059a
        ;   Label: LAB_004e059a
    JGE 0x004e04e1                      ; 004e05a2
        ;   XREF to: 004e04e1 (CONDITIONAL_JUMP)  ; LAB_004e04e1
    FLD float ptr [EDI + 0x2dc]         ; 004e05a8
    FLD1                                ; 004e05ae
    FCOMPP                              ; 004e05b0
    FNSTSW AX                           ; 004e05b2
    SAHF                                ; 004e05b4
    JA 0x004e04e1                       ; 004e05b5
        ;   XREF to: 004e04e1 (CONDITIONAL_JUMP)  ; LAB_004e04e1
    LEA EAX,[EDI + 0x3a8]               ; 004e05bb
        ;   Label: LAB_004e05bb
    PUSH EAX                            ; 004e05c1
    MOV EBX,dword ptr [EDI + 0x154]     ; 004e05c2
    PUSH EDI                            ; 004e05c8
    CALL dword ptr [EBX + 0x2c]         ; 004e05c9
    ADD ESP,0x8                         ; 004e05cc
    JMP 0x004e04e1                      ; 004e05cf
        ;   XREF to: 004e04e1 (UNCONDITIONAL_JUMP)  ; LAB_004e04e1
    PUSH EBP                            ; 004e05d4
        ;   Label: LAB_004e05d4
    PUSH dword ptr [ESP + 0x1c]         ; 004e05d5
    PUSH EAX                            ; 004e05d9
    CALL FUN_004e04b0                   ; 004e05da
        ;   XREF to: 004e04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e04b0()
    ADD ESP,0xc                         ; 004e05df
    JMP 0x004e04f9                      ; 004e05e2
        ;   XREF to: 004e04f9 (UNCONDITIONAL_JUMP)  ; LAB_004e04f9
    MOV EDX,dword ptr [0x01d70c34]      ; 004e05e7 | DAT_01d70c34
        ;   Label: LAB_004e05e7
    PUSH EDX                            ; 004e05ed
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004e05ee | DAT_02024a30
    PUSH ECX                            ; 004e05f5
    CALL FUN_0040c840                   ; 004e05f6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004e05fb
    TEST EAX,EAX                        ; 004e05fe
    JZ 0x004e0618                       ; 004e0600
        ;   XREF to: 004e0618 (CONDITIONAL_JUMP)  ; LAB_004e0618
    CMP EDI,dword ptr [EAX + 0x410]     ; 004e0602
    JNZ 0x004e0618                      ; 004e0608
        ;   XREF to: 004e0618 (CONDITIONAL_JUMP)  ; LAB_004e0618
    PUSH EBP                            ; 004e060a
    PUSH dword ptr [ESP + 0x1c]         ; 004e060b
    PUSH EAX                            ; 004e060f
    CALL FUN_004e04b0                   ; 004e0610
        ;   XREF to: 004e04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e04b0()
    ADD ESP,0xc                         ; 004e0615
    INC EBX                             ; 004e0618
        ;   Label: LAB_004e0618
    ADD ESI,0x4                         ; 004e0619
    JMP 0x004e04fd                      ; 004e061c
        ;   XREF to: 004e04fd (UNCONDITIONAL_JUMP)  ; LAB_004e04fd


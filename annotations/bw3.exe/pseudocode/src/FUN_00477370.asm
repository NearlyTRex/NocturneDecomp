; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00477370(int param_1,float *param_2)
;
;
; XREF[1]:
;   FUN_0053cc70 at 0053cc7d
;
; Referenced Globals:
;   undefined4 DAT_005bcbd9
;
; Called Functions:
;   FUN_00473b60
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477370
        ;   Label: FUN_00477370
    PUSH ESI                            ; 00477371
    PUSH EDI                            ; 00477372
    PUSH EBP                            ; 00477373
    SUB ESP,0x20                        ; 00477374
    MOV EBX,dword ptr [ESP + 0x34]      ; 00477377
    MOV EDX,dword ptr [ESP + 0x38]      ; 0047737b
    FLD float ptr [EDX]                 ; 0047737f
    FSUB float ptr [EBX + 0x10]         ; 00477381
    FDIV float ptr [EBX + 0x28]         ; 00477384
    FLD float ptr [EDX + 0x4]           ; 00477387
    FSUB float ptr [EBX + 0x14]         ; 0047738a
    FDIV float ptr [EBX + 0x2c]         ; 0047738d
    FLD float ptr [EDX + 0x8]           ; 00477390
    FSUB float ptr [EBX + 0x18]         ; 00477393
    FDIV float ptr [EBX + 0x30]         ; 00477396
    FXCH ST2                            ; 00477399
    CALL FUN_005a3120                   ; 0047739b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0xc]         ; 004773a0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004773a4
    MOV dword ptr [ESP + 0x1c],EAX      ; 004773a8
    FILD dword ptr [ESP + 0x1c]         ; 004773ac
    FMUL float ptr [EBX + 0x28]         ; 004773b0
    FADD float ptr [EBX + 0x10]         ; 004773b3
    FSUBR float ptr [EDX]               ; 004773b6
    FLD float ptr [0x005bcbd9]          ; 004773b8 | DAT_005bcbd9
    FLD float ptr [EBX + 0x28]          ; 004773be
    FMUL ST1                            ; 004773c1
    FDIVP ST2,ST0                       ; 004773c3
    FXCH ST2                            ; 004773c5
    CALL FUN_005a3120                   ; 004773c7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x14]        ; 004773cc
    MOV EAX,dword ptr [ESP + 0x14]      ; 004773d0
    MOV dword ptr [ESP + 0x1c],EAX      ; 004773d4
    FILD dword ptr [ESP + 0x1c]         ; 004773d8
    FMUL float ptr [EBX + 0x2c]         ; 004773dc
    FADD float ptr [EBX + 0x14]         ; 004773df
    FSUBR float ptr [EDX + 0x4]         ; 004773e2
    FLD float ptr [EBX + 0x2c]          ; 004773e5
    FMUL ST3                            ; 004773e8
    FDIVP                               ; 004773ea
    FXCH ST3                            ; 004773ec
    CALL FUN_005a3120                   ; 004773ee
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x8]         ; 004773f3
    MOV EAX,dword ptr [ESP + 0x8]       ; 004773f7
    MOV dword ptr [ESP + 0x1c],EAX      ; 004773fb
    FILD dword ptr [ESP + 0x1c]         ; 004773ff
    FMUL float ptr [EBX + 0x30]         ; 00477403
    FADD float ptr [EBX + 0x18]         ; 00477406
    FSUBR float ptr [EDX + 0x8]         ; 00477409
    FLD float ptr [EBX + 0x30]          ; 0047740c
    FMULP ST3                           ; 0047740f
    FDIVRP ST2,ST0                      ; 00477411
    CALL FUN_005a3120                   ; 00477413
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x10]        ; 00477418
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047741c
    FXCH                                ; 00477420
    CALL FUN_005a3120                   ; 00477422
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x18]        ; 00477427
    CALL FUN_005a3120                   ; 0047742b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP]               ; 00477430
    TEST EDX,EDX                        ; 00477433
    JL 0x004774d3                       ; 00477435
        ;   XREF to: 004774d3 (CONDITIONAL_JUMP)  ; LAB_004774d3
    MOV ECX,dword ptr [ESP + 0x18]      ; 0047743b
    TEST ECX,ECX                        ; 0047743f
    JL 0x004774d3                       ; 00477441
        ;   XREF to: 004774d3 (CONDITIONAL_JUMP)  ; LAB_004774d3
    MOV ESI,dword ptr [ESP]             ; 00477447
    TEST ESI,ESI                        ; 0047744a
    JL 0x004774d3                       ; 0047744c
        ;   XREF to: 004774d3 (CONDITIONAL_JUMP)  ; LAB_004774d3
    CMP EDX,0x8                         ; 00477452
    JGE 0x004774d3                      ; 00477455
        ;   XREF to: 004774d3 (CONDITIONAL_JUMP)  ; LAB_004774d3
    CMP ECX,0x8                         ; 0047745b
    JGE 0x004774d3                      ; 0047745e
        ;   XREF to: 004774d3 (CONDITIONAL_JUMP)  ; LAB_004774d3
    CMP ESI,0x8                         ; 00477464
    JGE 0x004774d3                      ; 00477467
        ;   XREF to: 004774d3 (CONDITIONAL_JUMP)  ; LAB_004774d3
    SHL ESI,0x3                         ; 00477469
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047746c
        ;   Label: LAB_0047746c
    PUSH EAX                            ; 00477470
    MOV EDX,dword ptr [ESP + 0x18]      ; 00477471
    PUSH EDX                            ; 00477475
    MOV ECX,dword ptr [ESP + 0x14]      ; 00477476
    PUSH ECX                            ; 0047747a
    PUSH EBX                            ; 0047747b
    CALL FUN_00473b60                   ; 0047747c
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00473b60()
    ADD ESP,0x10                        ; 00477481
    TEST EAX,EAX                        ; 00477484
    JZ 0x004774e7                       ; 00477486
        ;   XREF to: 004774e7 (CONDITIONAL_JUMP)  ; LAB_004774e7
    MOV EDI,dword ptr [EAX]             ; 00477488
    TEST EDI,EDI                        ; 0047748a
    JZ 0x004774b2                       ; 0047748c
        ;   XREF to: 004774b2 (CONDITIONAL_JUMP)  ; LAB_004774b2
    MOV EDX,dword ptr [ESP + 0x18]      ; 0047748e
    MOV EAX,EDI                         ; 00477492
    ADD EDX,ESI                         ; 00477494
    MOV DL,byte ptr [EDX + EAX*0x1]     ; 00477496
    MOV EAX,dword ptr [ESP + 0x10]      ; 00477499
    AND EDX,0xff                        ; 0047749d
    MOV AL,byte ptr [EAX + 0x5fb0e8]    ; 004774a3
    AND EAX,0xff                        ; 004774a9
    TEST EDX,EAX                        ; 004774ae
    JNZ 0x004774f1                      ; 004774b0
        ;   XREF to: 004774f1 (CONDITIONAL_JUMP)  ; LAB_004774f1
    MOV EBP,dword ptr [ESP + 0x18]      ; 004774b2
        ;   Label: LAB_004774b2
    DEC EBP                             ; 004774b6
    MOV dword ptr [ESP + 0x18],EBP      ; 004774b7
    TEST EBP,EBP                        ; 004774bb
    JGE 0x0047746c                      ; 004774bd
        ;   XREF to: 0047746c (CONDITIONAL_JUMP)  ; LAB_0047746c
    MOV ECX,dword ptr [ESP + 0x14]      ; 004774bf
    MOV EDX,0x7                         ; 004774c3
    DEC ECX                             ; 004774c8
    MOV dword ptr [ESP + 0x18],EDX      ; 004774c9
    MOV dword ptr [ESP + 0x14],ECX      ; 004774cd
    JMP 0x0047746c                      ; 004774d1
        ;   XREF to: 0047746c (UNCONDITIONAL_JUMP)  ; LAB_0047746c
    MOV dword ptr [ESP + 0x4],0xc479c000 ; 004774d3
        ;   Label: LAB_004774d3
    MOV EAX,dword ptr [ESP + 0x4]       ; 004774db
        ;   Label: LAB_004774db
    ADD ESP,0x20                        ; 004774df
    POP EBP                             ; 004774e2
    POP EDI                             ; 004774e3
    POP ESI                             ; 004774e4
    POP EBX                             ; 004774e5
    RET                                 ; 004774e6
    MOV dword ptr [ESP + 0x4],0xc479f99a ; 004774e7
        ;   Label: LAB_004774e7
    JMP 0x004774db                      ; 004774ef
        ;   XREF to: 004774db (UNCONDITIONAL_JUMP)  ; LAB_004774db
    MOV EAX,dword ptr [ESP + 0x14]      ; 004774f1
        ;   Label: LAB_004774f1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004774f5
    FILD dword ptr [ESP + 0x1c]         ; 004774f9
    FMUL float ptr [EBX + 0x2c]         ; 004774fd
    MOV EAX,dword ptr [ESP + 0x18]      ; 00477500
    FADD float ptr [EBX + 0x14]         ; 00477504
    MOV dword ptr [ESP + 0x1c],EAX      ; 00477507
    FILD dword ptr [ESP + 0x1c]         ; 0047750b
    FMUL float ptr [EBX + 0x2c]         ; 0047750f
    FMUL float ptr [0x005bcbd9]         ; 00477512 | DAT_005bcbd9
    FADDP                               ; 00477518
    FSTP float ptr [ESP + 0x4]          ; 0047751a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047751e
    ADD ESP,0x20                        ; 00477522
    POP EBP                             ; 00477525
    POP EDI                             ; 00477526
    POP ESI                             ; 00477527
    POP EBX                             ; 00477528
    RET                                 ; 00477529


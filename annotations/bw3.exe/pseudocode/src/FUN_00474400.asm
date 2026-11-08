; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00474400(int param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined8       Stack[-0x80]:8  local_80
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0053cbf0 at 0053cc09
;
; Referenced Globals:
;   undefined4 DAT_005bca0d
;
; Called Functions:
;   FUN_00454360
;   FUN_00473b60
;   FUN_005a3120
;   FUN_005a3600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474400
        ;   Label: FUN_00474400
    PUSH ESI                            ; 00474401
    PUSH EDI                            ; 00474402
    PUSH EBP                            ; 00474403
    MOV EBP,ESP                         ; 00474404
    SUB ESP,0x9c                        ; 00474406
    AND ESP,0xfffffff8                  ; 0047440c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0047440f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00474412
    FLD float ptr [EAX]                 ; 00474415
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474417
    FSUB float ptr [EAX + 0x10]         ; 0047441a
    FLD1                                ; 0047441d
    FDIV float ptr [EAX + 0x28]         ; 0047441f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00474422
    FLD float ptr [EAX + 0x4]           ; 00474425
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474428
    FSUB float ptr [EAX + 0x14]         ; 0047442b
    FDIV float ptr [EAX + 0x2c]         ; 0047442e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00474431
    FLD float ptr [EAX + 0x8]           ; 00474434
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474437
    FSUB float ptr [EAX + 0x18]         ; 0047443a
    FDIV float ptr [EAX + 0x30]         ; 0047443d
    FLD float ptr [ESI]                 ; 00474440
    FSUB float ptr [EAX + 0x10]         ; 00474442
    FXCH ST4                            ; 00474445
    FMUL ST3                            ; 00474447
    FXCH ST4                            ; 00474449
    FMULP ST3                           ; 0047444b
    FXCH ST3                            ; 0047444d
    FST float ptr [ESP + 0x44]          ; 0047444f
    CALL FUN_005a3120                   ; 00474453
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x7c]        ; 00474458
    FST float ptr [ESP + 0x60]          ; 0047445c
    CALL FUN_005a3120                   ; 00474460
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x80]        ; 00474465
    FXCH                                ; 0047446c
    FST float ptr [ESP + 0x58]          ; 0047446e
    CALL FUN_005a3120                   ; 00474472
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x84]        ; 00474477
    SUB ESP,0x8                         ; 0047447e
    FSTP double ptr [ESP]               ; 00474481
    CALL FUN_005a3600                   ; 00474484
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3600()
    MOV dword ptr [ESP + 0x38],EAX      ; 00474489
    MOV dword ptr [ESP + 0x3c],EDX      ; 0047448d
    FLD double ptr [ESP + 0x38]         ; 00474491
    ADD ESP,0x8                         ; 00474495
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474498
    FLD float ptr [ESI + 0x4]           ; 0047449b
    FSUB float ptr [EAX + 0x14]         ; 0047449e
    FDIV float ptr [EAX + 0x2c]         ; 004744a1
    FXCH                                ; 004744a4
    CALL FUN_005a3120                   ; 004744a6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x4c]        ; 004744ab
    SUB ESP,0x8                         ; 004744af
    FSTP double ptr [ESP]               ; 004744b2
    CALL FUN_005a3600                   ; 004744b5
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3600()
    MOV dword ptr [ESP + 0x38],EAX      ; 004744ba
    MOV dword ptr [ESP + 0x3c],EDX      ; 004744be
    FLD double ptr [ESP + 0x38]         ; 004744c2
    ADD ESP,0x8                         ; 004744c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004744c9
    FLD float ptr [ESI + 0x8]           ; 004744cc
    FSUB float ptr [EAX + 0x18]         ; 004744cf
    FDIV float ptr [EAX + 0x30]         ; 004744d2
    FXCH                                ; 004744d5
    CALL FUN_005a3120                   ; 004744d7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x50]        ; 004744dc
    SUB ESP,0x8                         ; 004744e0
    MOV EBX,0x1                         ; 004744e3
    FSTP double ptr [ESP]               ; 004744e8
    LEA EDI,[ESP + 0x2c]                ; 004744eb
    CALL FUN_005a3600                   ; 004744ef
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3600()
    FLD float ptr [ESI]                 ; 004744f4
    FLD float ptr [ESI + 0x4]           ; 004744f6
    MOV dword ptr [ESP + 0x38],EAX      ; 004744f9
    MOV dword ptr [ESP + 0x3c],EDX      ; 004744fd
    FLD float ptr [ESI + 0x8]           ; 00474501
    FLD double ptr [ESP + 0x38]         ; 00474504
    LEA ESI,[ESP + 0x20]                ; 00474508
    ADD ESP,0x8                         ; 0047450c
    CALL FUN_005a3120                   ; 0047450f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    MOV EAX,dword ptr [EBP + 0x18]      ; 00474514
    FISTP dword ptr [ESP + 0x54]        ; 00474517
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0047451b
    FXCH ST2                            ; 0047451f
    FSUB float ptr [EAX]                ; 00474521
    FXCH                                ; 00474523
    FSUB float ptr [EAX + 0x4]          ; 00474525
    FXCH ST2                            ; 00474528
    FSUB float ptr [EAX + 0x8]          ; 0047452a
    FXCH                                ; 0047452d
    FSTP float ptr [ESP + 0x18]         ; 0047452f
    FXCH                                ; 00474533
    FSTP float ptr [ESP + 0x1c]         ; 00474535
    FSTP float ptr [ESP + 0x20]         ; 00474539
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047453d
    MOVSD ES:EDI,ESI                    ; 00474541
    MOVSD ES:EDI,ESI                    ; 00474542
    MOVSD ES:EDI,ESI                    ; 00474543
    CMP EAX,EDX                         ; 00474544
    JNZ 0x00474559                      ; 00474546
        ;   XREF to: 00474559 (CONDITIONAL_JUMP)  ; LAB_00474559
    MOV EAX,dword ptr [ESP + 0x80]      ; 00474548
    CMP EAX,dword ptr [ESP + 0x50]      ; 0047454f
    JZ 0x004747d6                       ; 00474553
        ;   XREF to: 004747d6 (CONDITIONAL_JUMP)  ; LAB_004747d6
    FLD float ptr [ESP + 0x28]          ; 00474559
        ;   Label: LAB_00474559
    FMUL ST0                            ; 0047455d
    FLD float ptr [ESP + 0x24]          ; 0047455f
    FMUL ST0                            ; 00474563
    FADDP                               ; 00474565
    FLD float ptr [ESP + 0x2c]          ; 00474567
    FMUL ST0                            ; 0047456b
    FADDP                               ; 0047456d
    FSQRT                               ; 0047456f
    FST float ptr [ESP + 0x8]           ; 00474571
    FLDZ                                ; 00474575
    FCOMPP                              ; 00474577
    FNSTSW AX                           ; 00474579
    SAHF                                ; 0047457b
    JNC 0x004747ec                      ; 0047457c
        ;   XREF to: 004747ec (CONDITIONAL_JUMP)  ; LAB_004747ec
    FLD float ptr [ESP + 0x28]          ; 00474582
    FABS                                ; 00474586
    FLD float ptr [ESP + 0x2c]          ; 00474588
    FABS                                ; 0047458c
    FLD float ptr [ESP + 0x24]          ; 0047458e
    FLD ST0                             ; 00474592
    FABS                                ; 00474594
    FLD float ptr [0x005bca0d]          ; 00474596 | DAT_005bca0d
    FDIV float ptr [ESP + 0x8]          ; 0047459c
    FXCH                                ; 004745a0
    FMUL ST1                            ; 004745a2
    FXCH ST4                            ; 004745a4
    FMUL ST1                            ; 004745a6
    FXCH ST3                            ; 004745a8
    FMULP                               ; 004745aa
    FXCH ST3                            ; 004745ac
    CALL FUN_005a3120                   ; 004745ae
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x74]        ; 004745b3
    FLDZ                                ; 004745b7
    FXCH ST2                            ; 004745b9
    CALL FUN_005a3120                   ; 004745bb
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST3                            ; 004745c0
    CALL FUN_005a3120                   ; 004745c2
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST3                            ; 004745c7
    FISTP dword ptr [ESP + 0x70]        ; 004745c9
    FXCH ST2                            ; 004745cd
    FISTP dword ptr [ESP + 0x78]        ; 004745cf
    FCOMPP                              ; 004745d3
    FNSTSW AX                           ; 004745d5
    SAHF                                ; 004745d7
    JA 0x004747f5                       ; 004745d8
        ;   XREF to: 004747f5 (CONDITIONAL_JUMP)  ; LAB_004747f5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004745de
    MOV ESI,dword ptr [ESP + 0x7c]      ; 004745e2
    SUB EAX,ESI                         ; 004745e6
    MOV ECX,0x1                         ; 004745e8
    ADD EBX,EAX                         ; 004745ed
    LEA EAX,[ESI + ECX*0x1]             ; 004745ef
    MOV dword ptr [ESP + 0x98],EAX      ; 004745f2
    FILD dword ptr [ESP + 0x98]         ; 004745f9
    FSUB float ptr [ESP + 0x44]         ; 00474600
    MOV dword ptr [ESP + 0x68],ECX      ; 00474604
    FSTP float ptr [ESP + 0x5c]         ; 00474608
        ;   Label: LAB_00474608
    FLD float ptr [ESP + 0x28]          ; 0047460c
    FLDZ                                ; 00474610
    FCOMPP                              ; 00474612
    FNSTSW AX                           ; 00474614
    SAHF                                ; 00474616
    JA 0x00474823                       ; 00474617
        ;   XREF to: 00474823 (CONDITIONAL_JUMP)  ; LAB_00474823
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047461d
    MOV ESI,dword ptr [ESP + 0x80]      ; 00474621
    SUB EAX,ESI                         ; 00474628
    MOV ECX,0x1                         ; 0047462a
    ADD EBX,EAX                         ; 0047462f
    LEA EAX,[ESI + ECX*0x1]             ; 00474631
    MOV dword ptr [ESP + 0x98],EAX      ; 00474634
    FILD dword ptr [ESP + 0x98]         ; 0047463b
    FSUB float ptr [ESP + 0x60]         ; 00474642
    MOV dword ptr [ESP + 0x64],ECX      ; 00474646
    FSTP float ptr [ESP + 0x40]         ; 0047464a
        ;   Label: LAB_0047464a
    FLD float ptr [ESP + 0x2c]          ; 0047464e
    FLDZ                                ; 00474652
    FCOMPP                              ; 00474654
    FNSTSW AX                           ; 00474656
    SAHF                                ; 00474658
    JA 0x00474857                       ; 00474659
        ;   XREF to: 00474857 (CONDITIONAL_JUMP)  ; LAB_00474857
    MOV EAX,dword ptr [ESP + 0x54]      ; 0047465f
    MOV ESI,dword ptr [ESP + 0x84]      ; 00474663
    SUB EAX,ESI                         ; 0047466a
    MOV ECX,0x1                         ; 0047466c
    ADD EBX,EAX                         ; 00474671
    LEA EAX,[ESI + ECX*0x1]             ; 00474673
    MOV dword ptr [ESP + 0x98],EAX      ; 00474676
    FILD dword ptr [ESP + 0x98]         ; 0047467d
    FSUB float ptr [ESP + 0x58]         ; 00474684
    MOV dword ptr [ESP + 0x6c],ECX      ; 00474688
    FSTP float ptr [ESP + 0x48]         ; 0047468c
        ;   Label: LAB_0047468c
    MOV EAX,dword ptr [ESP + 0x70]      ; 00474690
    MOV dword ptr [ESP + 0x98],EAX      ; 00474694
    FILD dword ptr [ESP + 0x98]         ; 0047469b
    FLD ST0                             ; 004746a2
    FMUL float ptr [ESP + 0x5c]         ; 004746a4
    MOV EAX,dword ptr [ESP + 0x74]      ; 004746a8
    FXCH                                ; 004746ac
    FLD float ptr [ESP + 0x48]          ; 004746ae
    FXCH                                ; 004746b2
    FMUL ST1                            ; 004746b4
    MOV dword ptr [ESP + 0x98],EAX      ; 004746b6
    MOV EAX,dword ptr [ESP + 0x78]      ; 004746bd
    FILD dword ptr [ESP + 0x98]         ; 004746c1
    MOV dword ptr [ESP + 0x98],EAX      ; 004746c8
    FLD ST0                             ; 004746cf
    FMUL float ptr [ESP + 0x40]         ; 004746d1
    FILD dword ptr [ESP + 0x98]         ; 004746d5
    FLD ST0                             ; 004746dc
    FMUL float ptr [ESP + 0x5c]         ; 004746de
    FXCH                                ; 004746e2
    FMUL float ptr [ESP + 0x40]         ; 004746e4
    FXCH ST2                            ; 004746e8
    FSUBP ST6,ST0                       ; 004746ea
    FXCH ST2                            ; 004746ec
    FMULP ST4                           ; 004746ee
    FXCH ST4                            ; 004746f0
    CALL FUN_005a3120                   ; 004746f2
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST4                            ; 004746f7
    FSUBP ST2,ST0                       ; 004746f9
    FXCH ST3                            ; 004746fb
    FISTP dword ptr [ESP + 0x88]        ; 004746fd
    CALL FUN_005a3120                   ; 00474704
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00474709
    FSUBP ST2,ST0                       ; 0047470b
    FISTP dword ptr [ESP + 0x8c]        ; 0047470d
    CALL FUN_005a3120                   ; 00474714
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x90]        ; 00474719
    MOV EDI,dword ptr [ESP + 0x84]      ; 00474720
        ;   Label: LAB_00474720
    PUSH EDI                            ; 00474727
    MOV EAX,dword ptr [ESP + 0x84]      ; 00474728
    PUSH EAX                            ; 0047472f
    MOV EDX,dword ptr [ESP + 0x84]      ; 00474730
    PUSH EDX                            ; 00474737
    MOV ECX,dword ptr [EBP + 0x14]      ; 00474738
    PUSH ECX                            ; 0047473b
    CALL FUN_00473b60                   ; 0047473c
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00473b60()
    ADD ESP,0x10                        ; 00474741
    TEST EAX,EAX                        ; 00474744
    JNZ 0x0047488b                      ; 00474746
        ;   XREF to: 0047488b (CONDITIONAL_JUMP)  ; LAB_0047488b
    DEC EBX                             ; 0047474c
        ;   Label: LAB_0047474c
    TEST EBX,EBX                        ; 0047474d
    JLE 0x004747ec                      ; 0047474f
        ;   XREF to: 004747ec (CONDITIONAL_JUMP)  ; LAB_004747ec
    MOV EAX,dword ptr [ESP + 0x84]      ; 00474755
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0047475c
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00474760
    MOV EDI,dword ptr [ESP + 0x70]      ; 00474767
    MOV ESI,dword ptr [ESP + 0x74]      ; 0047476b
    ADD EAX,ECX                         ; 0047476f
    ADD EDX,EDI                         ; 00474771
    MOV ECX,dword ptr [ESP + 0x90]      ; 00474773
    MOV EDI,dword ptr [ESP + 0x88]      ; 0047477a
    SUB ECX,ESI                         ; 00474781
    TEST EDI,EDI                        ; 00474783
    JL 0x004748e2                       ; 00474785
        ;   XREF to: 004748e2 (CONDITIONAL_JUMP)  ; LAB_004748e2
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0047478b
    TEST ESI,ESI                        ; 00474792
    JL 0x004748ed                       ; 00474794
        ;   XREF to: 004748ed (CONDITIONAL_JUMP)  ; LAB_004748ed
    MOV EAX,dword ptr [ESP + 0x64]      ; 0047479a
    MOV EDI,dword ptr [ESP + 0x80]      ; 0047479e
    MOV EDX,dword ptr [ESP + 0x88]      ; 004747a5
    ADD EDI,EAX                         ; 004747ac
    MOV EAX,dword ptr [ESP + 0x74]      ; 004747ae
    MOV ECX,ESI                         ; 004747b2
    SUB EDX,EAX                         ; 004747b4
    MOV EAX,dword ptr [ESP + 0x78]      ; 004747b6
    MOV dword ptr [ESP + 0x80],EDI      ; 004747ba
    SUB ECX,EAX                         ; 004747c1
    MOV dword ptr [ESP + 0x88],EDX      ; 004747c3
    MOV dword ptr [ESP + 0x8c],ECX      ; 004747ca
    JMP 0x00474720                      ; 004747d1
        ;   XREF to: 00474720 (UNCONDITIONAL_JUMP)  ; LAB_00474720
    MOV EAX,dword ptr [ESP + 0x84]      ; 004747d6
        ;   Label: LAB_004747d6
    CMP EAX,dword ptr [ESP + 0x54]      ; 004747dd
    JNZ 0x00474559                      ; 004747e1
        ;   XREF to: 00474559 (CONDITIONAL_JUMP)  ; LAB_00474559
    JMP 0x00474720                      ; 004747e7
        ;   XREF to: 00474720 (UNCONDITIONAL_JUMP)  ; LAB_00474720
    XOR EAX,EAX                         ; 004747ec
        ;   Label: LAB_004747ec
    MOV ESP,EBP                         ; 004747ee
    POP EBP                             ; 004747f0
    POP EDI                             ; 004747f1
    POP ESI                             ; 004747f2
    POP EBX                             ; 004747f3
    RET                                 ; 004747f4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004747f5
        ;   Label: LAB_004747f5
    SUB EAX,dword ptr [ESP + 0x4c]      ; 004747f9
    ADD EBX,EAX                         ; 004747fd
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004747ff
    MOV dword ptr [ESP + 0x98],EAX      ; 00474803
    MOV EDI,0xffffffff                  ; 0047480a
    FILD dword ptr [ESP + 0x98]         ; 0047480f
    FSUBR float ptr [ESP + 0x44]        ; 00474816
    MOV dword ptr [ESP + 0x68],EDI      ; 0047481a
    JMP 0x00474608                      ; 0047481e
        ;   XREF to: 00474608 (UNCONDITIONAL_JUMP)  ; LAB_00474608
    MOV EAX,dword ptr [ESP + 0x80]      ; 00474823
        ;   Label: LAB_00474823
    SUB EAX,dword ptr [ESP + 0x50]      ; 0047482a
    ADD EBX,EAX                         ; 0047482e
    MOV EAX,dword ptr [ESP + 0x80]      ; 00474830
    MOV dword ptr [ESP + 0x98],EAX      ; 00474837
    MOV EDI,0xffffffff                  ; 0047483e
    FILD dword ptr [ESP + 0x98]         ; 00474843
    FSUBR float ptr [ESP + 0x60]        ; 0047484a
    MOV dword ptr [ESP + 0x64],EDI      ; 0047484e
    JMP 0x0047464a                      ; 00474852
        ;   XREF to: 0047464a (UNCONDITIONAL_JUMP)  ; LAB_0047464a
    MOV EAX,dword ptr [ESP + 0x84]      ; 00474857
        ;   Label: LAB_00474857
    SUB EAX,dword ptr [ESP + 0x54]      ; 0047485e
    ADD EBX,EAX                         ; 00474862
    MOV EAX,dword ptr [ESP + 0x84]      ; 00474864
    MOV dword ptr [ESP + 0x98],EAX      ; 0047486b
    MOV EDI,0xffffffff                  ; 00474872
    FILD dword ptr [ESP + 0x98]         ; 00474877
    FSUBR float ptr [ESP + 0x58]        ; 0047487e
    MOV dword ptr [ESP + 0x6c],EDI      ; 00474882
    JMP 0x0047468c                      ; 00474886
        ;   XREF to: 0047468c (UNCONDITIONAL_JUMP)  ; LAB_0047468c
    LEA EDX,[ESP + 0x38]                ; 0047488b
        ;   Label: LAB_0047488b
    PUSH EDX                            ; 0047488f
    LEA EDX,[ESP + 0x10]                ; 00474890
    PUSH EDX                            ; 00474894
    LEA EDX,[ESP + 0x2c]                ; 00474895
    PUSH EDX                            ; 00474899
    MOV ESI,dword ptr [EBP + 0x18]      ; 0047489a
    PUSH ESI                            ; 0047489d
    PUSH EAX                            ; 0047489e
    CALL FUN_00454360                   ; 0047489f
        ;   XREF to: 00454360 (UNCONDITIONAL_CALL)  ; undefined FUN_00454360()
    MOV dword ptr [ESP + 0xac],EAX      ; 004748a4
    FLD float ptr [ESP + 0xac]          ; 004748ab
    ADD ESP,0x14                        ; 004748b2
    FLDZ                                ; 004748b5
    FXCH                                ; 004748b7
    FSTP double ptr [ESP]               ; 004748b9
    FCOMP double ptr [ESP]              ; 004748bc
    FNSTSW AX                           ; 004748bf
    SAHF                                ; 004748c1
    JA 0x0047474c                       ; 004748c2
        ;   XREF to: 0047474c (CONDITIONAL_JUMP)  ; LAB_0047474c
    FLD1                                ; 004748c8
    FCOMP double ptr [ESP]              ; 004748ca
    FNSTSW AX                           ; 004748cd
    SAHF                                ; 004748cf
    JC 0x0047474c                       ; 004748d0
        ;   XREF to: 0047474c (CONDITIONAL_JUMP)  ; LAB_0047474c
    MOV EAX,0x1                         ; 004748d6
    MOV ESP,EBP                         ; 004748db
    POP EBP                             ; 004748dd
    POP EDI                             ; 004748de
    POP ESI                             ; 004748df
    POP EBX                             ; 004748e0
    RET                                 ; 004748e1
    MOV ESI,dword ptr [ESP + 0x90]      ; 004748e2
        ;   Label: LAB_004748e2
    TEST ESI,ESI                        ; 004748e9
    JL 0x00474907                       ; 004748eb
        ;   XREF to: 00474907 (CONDITIONAL_JUMP)  ; LAB_00474907
    MOV dword ptr [ESP + 0x90],ECX      ; 004748ed
        ;   Label: LAB_004748ed
    MOV dword ptr [ESP + 0x8c],EDX      ; 004748f4
    MOV dword ptr [ESP + 0x84],EAX      ; 004748fb
    JMP 0x00474720                      ; 00474902
        ;   XREF to: 00474720 (UNCONDITIONAL_JUMP)  ; LAB_00474720
    MOV EAX,dword ptr [ESP + 0x68]      ; 00474907
        ;   Label: LAB_00474907
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0047490b
    MOV EDX,dword ptr [ESP + 0x88]      ; 0047490f
    ADD EDI,EAX                         ; 00474916
    ADD EDX,dword ptr [ESP + 0x70]      ; 00474918
    MOV EAX,dword ptr [ESP + 0x78]      ; 0047491c
    MOV dword ptr [ESP + 0x7c],EDI      ; 00474920
    LEA ECX,[ESI + EAX*0x1]             ; 00474924
    MOV dword ptr [ESP + 0x88],EDX      ; 00474927
    MOV dword ptr [ESP + 0x90],ECX      ; 0047492e
    JMP 0x00474720                      ; 00474935
        ;   XREF to: 00474720 (UNCONDITIONAL_JUMP)  ; LAB_00474720


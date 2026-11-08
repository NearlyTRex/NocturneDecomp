; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005952f0(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_CNPC_005f7701
;   TerminatedCString s_CEnemy_CHero_CNPC_005f770c
;   undefined4 DAT_005f771e
;   undefined4 DAT_005f7726
;   undefined4 DAT_005f772e
;   undefined4 DAT_005f7736
;   undefined4 DAT_005f773e
;   undefined4 DAT_005f7746
;   undefined4 DAT_005f774e
;   undefined4 DAT_005f7756
;   undefined4 DAT_005f775e
;   undefined4 DAT_005f7766
;   undefined4 DAT_00606ad8
;   undefined4 DAT_0061dca4
;
; Called Functions:
;   FUN_00408b40
;   FUN_0040cc00
;   FUN_0040cd60
;   FUN_0042e160
;   FUN_0042e1a0
;   FUN_00433e80
;   FUN_004e5f40
;   FUN_004e6bf0
;   FUN_00524270
;   FUN_00524770
;   FUN_005247c0
;   FUN_005675a0
;   FUN_00569180
;   FUN_00595c40
;   FUN_00595f10
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005952f0
        ;   Label: FUN_005952f0
    PUSH ESI                            ; 005952f1
    PUSH EDI                            ; 005952f2
    PUSH EBP                            ; 005952f3
    MOV EBP,ESP                         ; 005952f4
    SUB ESP,0x2a0                       ; 005952f6
    AND ESP,0xfffffff8                  ; 005952fc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005952ff
    PUSH dword ptr [EBP + 0x18]         ; 00595302
    PUSH EBX                            ; 00595305
    CALL FUN_0042e1a0                   ; 00595306
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e1a0()
    ADD ESP,0x8                         ; 0059530b
    TEST EAX,EAX                        ; 0059530e
    JZ 0x0059545b                       ; 00595310
        ;   XREF to: 0059545b (CONDITIONAL_JUMP)  ; LAB_0059545b
    FLD float ptr [EBP + 0x18]          ; 00595316
    LEA EAX,[EBX + 0x30]                ; 00595319
    FMUL float ptr [EBX + 0xc1d0]       ; 0059531c
    MOV dword ptr [ESP + 0x28c],EAX     ; 00595322
    LEA EAX,[EBX + 0xc2a8]              ; 00595329
    MOV dword ptr [ESP + 0x290],EAX     ; 0059532f
    LEA EAX,[EBX + 0x20]                ; 00595336
    MOV dword ptr [ESP + 0x294],EAX     ; 00595339
    LEA EAX,[EBX + 0x158]               ; 00595340
    FSTP float ptr [ESP + 0x8]          ; 00595346
    MOV dword ptr [ESP + 0x298],EAX     ; 0059534a
    FLD float ptr [ESP + 0x8]           ; 00595351
        ;   Label: LAB_00595351
    FLDZ                                ; 00595355
    FCOMPP                              ; 00595357
    FNSTSW AX                           ; 00595359
    SAHF                                ; 0059535b
    JC 0x0059578f                       ; 0059535c
        ;   XREF to: 0059578f (CONDITIONAL_JUMP)  ; LAB_0059578f
    MOV EDX,dword ptr [ESP + 0x298]     ; 00595362
    PUSH EDX                            ; 00595369
    CALL FUN_00524770                   ; 0059536a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0059536f
    ADD ESP,0x4                         ; 00595372
    CMP EAX,0x2                         ; 00595375
    JNC 0x00595b63                      ; 00595378
        ;   XREF to: 00595b63 (CONDITIONAL_JUMP)  ; LAB_00595b63
    TEST EAX,EAX                        ; 0059537e
    JNZ 0x0059540f                      ; 00595380
        ;   XREF to: 0059540f (CONDITIONAL_JUMP)  ; LAB_0059540f
    FLD float ptr [EBX + 0xc268]        ; 00595386
    FLDZ                                ; 0059538c
    MOV dword ptr [EBX + 0xc26c],EAX    ; 0059538e
    FCOMPP                              ; 00595394
    FNSTSW AX                           ; 00595396
    SAHF                                ; 00595398
    JNC 0x005953aa                      ; 00595399
        ;   XREF to: 005953aa (CONDITIONAL_JUMP)  ; LAB_005953aa
    FLD float ptr [EBX + 0xc268]        ; 0059539b
    FSUB float ptr [EBP + 0x18]         ; 005953a1
    FSTP float ptr [EBX + 0xc268]       ; 005953a4
    FLD float ptr [EBX + 0xc268]        ; 005953aa
        ;   Label: LAB_005953aa
    FLDZ                                ; 005953b0
    FCOMPP                              ; 005953b2
    FNSTSW AX                           ; 005953b4
    SAHF                                ; 005953b6
    JC 0x0059540f                       ; 005953b7
        ;   XREF to: 0059540f (CONDITIONAL_JUMP)  ; LAB_0059540f
    MOV EAX,dword ptr [EBX + 0xc270]    ; 005953b9
    LEA ESI,[EBX + 0x158]               ; 005953bf
    TEST EAX,EAX                        ; 005953c5
    JZ 0x005957bd                       ; 005953c7
        ;   XREF to: 005957bd (CONDITIONAL_JUMP)  ; LAB_005957bd
    PUSH 0x5f7701                       ; 005953cd | = "CHero CNPC"
    PUSH EBX                            ; 005953d2
    CALL FUN_00595c40                   ; 005953d3
        ;   XREF to: 00595c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00595c40()
    ADD ESP,0x8                         ; 005953d8
    TEST EAX,EAX                        ; 005953db
    JZ 0x0059540f                       ; 005953dd
        ;   XREF to: 0059540f (CONDITIONAL_JUMP)  ; LAB_0059540f
    PUSH 0x1                            ; 005953df
    PUSH 0x2                            ; 005953e1
    PUSH ESI                            ; 005953e3
    CALL FUN_005247c0                   ; 005953e4
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005953e9
    MOV EDX,dword ptr [EBX + 0xc270]    ; 005953ec
    PUSH EDX                            ; 005953f2
    MOV dword ptr [EBX + 0xc268],0x0    ; 005953f3
    CALL FUN_004e6bf0                   ; 005953fd
        ;   XREF to: 004e6bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6bf0()
    ADD ESP,0x4                         ; 00595402
    MOV dword ptr [EBX + 0xc270],0x0    ; 00595405
    FLD float ptr [EBP + 0x18]          ; 0059540f
        ;   Label: LAB_0059540f
    FDIV float ptr [0x00606ad8]         ; 00595412 | DAT_00606ad8
    FADD float ptr [EBX + 0xc274]       ; 00595418
    FST float ptr [EBX + 0xc274]        ; 0059541e
    FLD1                                ; 00595424
    FCOMPP                              ; 00595426
    FNSTSW AX                           ; 00595428
    SAHF                                ; 0059542a
    JNC 0x00595437                      ; 0059542b
        ;   XREF to: 00595437 (CONDITIONAL_JUMP)  ; LAB_00595437
    MOV dword ptr [EBX + 0xc274],0x3f800000 ; 0059542d
    PUSH EBX                            ; 00595437
        ;   Label: LAB_00595437
    CALL FUN_0042e160                   ; 00595438
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e160()
    ADD ESP,0x4                         ; 0059543d
    LEA EAX,[EBX + 0x158]               ; 00595440
    PUSH EAX                            ; 00595446
    CALL FUN_005675a0                   ; 00595447
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005675a0()
    ADD ESP,0x4                         ; 0059544c
    PUSH dword ptr [EBP + 0x18]         ; 0059544f
    PUSH EBX                            ; 00595452
    CALL FUN_00433e80                   ; 00595453
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00433e80()
    ADD ESP,0x8                         ; 00595458
    MOV ESP,EBP                         ; 0059545b
        ;   Label: LAB_0059545b
    POP EBP                             ; 0059545d
    POP EDI                             ; 0059545e
    POP ESI                             ; 0059545f
    POP EBX                             ; 00595460
    RET                                 ; 00595461
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 00595462
        ;   Label: LAB_00595462
    TEST EDI,EDI                        ; 00595468
    JZ 0x00595351                       ; 0059546a
        ;   XREF to: 00595351 (CONDITIONAL_JUMP)  ; LAB_00595351
    PUSH EDI                            ; 00595470
    MOV EDX,dword ptr [EDI + 0x154]     ; 00595471
    CALL dword ptr [EDX + 0xf4]         ; 00595477
    ADD ESP,0x4                         ; 0059547d
    TEST EAX,EAX                        ; 00595480
    JNZ 0x00595351                      ; 00595482
        ;   XREF to: 00595351 (CONDITIONAL_JUMP)  ; LAB_00595351
    MOV EAX,dword ptr [ESP + 0x298]     ; 00595488
    PUSH EAX                            ; 0059548f
    CALL FUN_00569180                   ; 00595490
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; undefined FUN_00569180()
    ADD ESP,0x4                         ; 00595495
    PUSH EBX                            ; 00595498
    LEA ESI,[ESP + 0x10]                ; 00595499
    LEA EDI,[ESP + 0x190]               ; 0059549d
    CALL FUN_00595f10                   ; 005954a4
        ;   XREF to: 00595f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00595f10()
    MOV ECX,0xc                         ; 005954a9
    LEA ESI,[ESP + 0x10]                ; 005954ae
    ADD ESP,0x4                         ; 005954b2
    LEA EAX,[ESP + 0x18c]               ; 005954b5
    MOVSD.REP ES:EDI,ESI                ; 005954bc
    PUSH EAX                            ; 005954be
    LEA ESI,[ESP + 0x1f0]               ; 005954bf
    LEA EDI,[ESP + 0x1c0]               ; 005954c6
    CALL FUN_005b6270                   ; 005954cd
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6270()
    ADD ESP,0x4                         ; 005954d2
    LEA EAX,[ESP + 0x1bc]               ; 005954d5
    LEA ESI,[ESP + 0x1ec]               ; 005954dc
    PUSH EAX                            ; 005954e3
    MOVSD ES:EDI,ESI                    ; 005954e4
    MOVSD ES:EDI,ESI                    ; 005954e5
    MOVSD ES:EDI,ESI                    ; 005954e6
    PUSH EBX                            ; 005954e7
    LEA ESI,[ESP + 0x248]               ; 005954e8
    LEA EDI,[ESP + 0x26c]               ; 005954ef
    CALL FUN_00408b40                   ; 005954f6
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x248]               ; 005954fb
    ADD ESP,0x8                         ; 00595502
    MOVSD ES:EDI,ESI                    ; 00595505
    MOVSD ES:EDI,ESI                    ; 00595506
    MOVSD ES:EDI,ESI                    ; 00595507
    FLD float ptr [ESP + 0x264]         ; 00595508
    FLD float ptr [ESP + 0x268]         ; 0059550f
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00595516
    FLD float ptr [ESP + 0x26c]         ; 0059551c
    LEA EAX,[EDX + 0x20]                ; 00595523
    LEA EDI,[ESP + 0x1e0]               ; 00595526
    LEA ESI,[ESP + 0x258]               ; 0059552d
    FXCH ST2                            ; 00595534
    FSUB float ptr [EAX]                ; 00595536
    FXCH                                ; 00595538
    FSUB float ptr [EAX + 0x4]          ; 0059553a
    FXCH ST2                            ; 0059553d
    FSUB float ptr [EAX + 0x8]          ; 0059553f
    FXCH                                ; 00595542
    FSTP float ptr [ESP + 0x258]        ; 00595544
    FXCH                                ; 0059554b
    FSTP float ptr [ESP + 0x25c]        ; 0059554d
    FSTP float ptr [ESP + 0x260]        ; 00595554
    MOVSD ES:EDI,ESI                    ; 0059555b
    MOVSD ES:EDI,ESI                    ; 0059555c
    MOVSD ES:EDI,ESI                    ; 0059555d
    FLD float ptr [ESP + 0x1e4]         ; 0059555e
    FABS                                ; 00595565
    FCOMP double ptr [0x005f775e]       ; 00595567 | DAT_005f775e
    FNSTSW AX                           ; 0059556d
    SAHF                                ; 0059556f
    JA 0x00595351                       ; 00595570
        ;   XREF to: 00595351 (CONDITIONAL_JUMP)  ; LAB_00595351
    FLD float ptr [ESP + 0x1e8]         ; 00595576
    FMUL ST0                            ; 0059557d
    FLD float ptr [ESP + 0x1e0]         ; 0059557f
    FMUL ST0                            ; 00595586
    FADDP                               ; 00595588
    FCOMP double ptr [0x005f7766]       ; 0059558a | DAT_005f7766
    FNSTSW AX                           ; 00595590
    SAHF                                ; 00595592
    JA 0x00595351                       ; 00595593
        ;   XREF to: 00595351 (CONDITIONAL_JUMP)  ; LAB_00595351
    PUSH 0x1                            ; 00595599
    PUSH EBX                            ; 0059559b
    MOV EAX,dword ptr [EDX + 0x154]     ; 0059559c
    PUSH EDX                            ; 005955a2
    CALL dword ptr [EAX + 0xec]         ; 005955a3
    ADD ESP,0xc                         ; 005955a9
    TEST EAX,EAX                        ; 005955ac
    JZ 0x00595351                       ; 005955ae
        ;   XREF to: 00595351 (CONDITIONAL_JUMP)  ; LAB_00595351
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005955b4
    LEA EDX,[EAX + 0x30]                ; 005955ba
    PUSH EDX                            ; 005955bd
    ADD EAX,0x20                        ; 005955be
    PUSH EAX                            ; 005955c1
    LEA EAX,[ESP + 0x134]               ; 005955c2
    PUSH EAX                            ; 005955c9
    MOV dword ptr [EBX + 0xc274],0x0    ; 005955ca
    CALL FUN_005b5760                   ; 005955d4
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5760()
    ADD ESP,0xc                         ; 005955d9
    MOV EDX,dword ptr [ESP + 0x28c]     ; 005955dc
    PUSH EDX                            ; 005955e3
    MOV ECX,dword ptr [ESP + 0x298]     ; 005955e4
    PUSH ECX                            ; 005955eb
    LEA EAX,[ESP + 0x74]                ; 005955ec
    PUSH EAX                            ; 005955f0
    CALL FUN_005b5620                   ; 005955f1
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5620()
    ADD ESP,0xc                         ; 005955f6
    LEA EAX,[ESP + 0x18c]               ; 005955f9
    PUSH EAX                            ; 00595600
    LEA ESI,[ESP + 0x100]               ; 00595601
    LEA EDI,[ESP + 0x160]               ; 00595608
    CALL FUN_005b6380                   ; 0059560f
        ;   XREF to: 005b6380 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6380()
    ADD ESP,0x4                         ; 00595614
    LEA EAX,[ESP + 0x15c]               ; 00595617
    MOV ECX,0xc                         ; 0059561e
    PUSH EAX                            ; 00595623
    LEA EAX,[ESP + 0x70]                ; 00595624
    LEA ESI,[ESP + 0x100]               ; 00595628
    PUSH EAX                            ; 0059562f
    LEA EAX,[ESP + 0x134]               ; 00595630
    MOVSD.REP ES:EDI,ESI                ; 00595637
    PUSH EAX                            ; 00595639
    LEA ESI,[ESP + 0xa8]                ; 0059563a
    LEA EDI,[ESP + 0xd8]                ; 00595641
    CALL FUN_005b5200                   ; 00595648
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 0059564d
    LEA ESI,[ESP + 0xa8]                ; 00595652
    ADD ESP,0x8                         ; 00595659
    LEA EAX,[ESP + 0xd0]                ; 0059565c
    MOVSD.REP ES:EDI,ESI                ; 00595663
    PUSH EAX                            ; 00595665
    LEA ESI,[ESP + 0x44]                ; 00595666
    CALL FUN_005b5200                   ; 0059566a
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 0059566f
    LEA ESI,[ESP + 0x44]                ; 00595674
    LEA EDI,[EBX + 0xc278]              ; 00595678
    ADD ESP,0x8                         ; 0059567e
    MOVSD.REP ES:EDI,ESI                ; 00595681
    MOV ECX,0xc                         ; 00595683
    LEA EDI,[EBX + 0xc2a8]              ; 00595688
    LEA ESI,[EBX + 0xc278]              ; 0059568e
    MOVSD.REP ES:EDI,ESI                ; 00595694
    MOV ESI,dword ptr [ESP + 0x290]     ; 00595696
    PUSH ESI                            ; 0059569d
    CALL FUN_005b5600                   ; 0059569e
        ;   XREF to: 005b5600 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5600()
    ADD ESP,0x4                         ; 005956a3
    XOR ESI,ESI                         ; 005956a6
    PUSH 0x40e00000                     ; 005956a8
        ;   Label: LAB_005956a8
    PUSH 0xc0e00000                     ; 005956ad
    CALL FUN_0040cc00                   ; 005956b2
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x2a4],EAX     ; 005956b7
    FLD float ptr [ESP + 0x2a4]         ; 005956be
    ADD ESP,0x8                         ; 005956c5
    PUSH 0x40e00000                     ; 005956c8
    PUSH 0xc0e00000                     ; 005956cd
    FSTP float ptr [ESP + 0x20c]        ; 005956d2
    CALL FUN_0040cc00                   ; 005956d9
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x2a4],EAX     ; 005956de
    FLD float ptr [ESP + 0x2a4]         ; 005956e5
    ADD ESP,0x8                         ; 005956ec
    PUSH 0x41700000                     ; 005956ef
    PUSH 0xbf800000                     ; 005956f4
    FSTP float ptr [ESP + 0x214]        ; 005956f9
    CALL FUN_0040cc00                   ; 00595700
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x2a4],EAX     ; 00595705
    FLD float ptr [ESP + 0x2a4]         ; 0059570c
    ADD ESP,0x8                         ; 00595713
    FSTP float ptr [ESP + 0x208]        ; 00595716
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0059571d
    MOV EDI,dword ptr [EAX + 0x27a0]    ; 00595723
    PUSH EDI                            ; 00595729
    LEA EAX,[ESP + 0x208]               ; 0059572a
    PUSH EAX                            ; 00595731
    LEA EAX,[ESP + 0x26c]               ; 00595732
    PUSH EAX                            ; 00595739
    MOV EAX,[0x0061dca4]                ; 0059573a | DAT_0061dca4
    PUSH EAX                            ; 0059573f
    INC ESI                             ; 00595740
    CALL FUN_004e5f40                   ; 00595741
        ;   XREF to: 004e5f40 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5f40()
    ADD ESP,0x10                        ; 00595746
    CMP ESI,0x46                        ; 00595749
    JGE 0x00595351                      ; 0059574c
        ;   XREF to: 00595351 (CONDITIONAL_JUMP)  ; LAB_00595351
    JMP 0x005956a8                      ; 00595752
        ;   XREF to: 005956a8 (UNCONDITIONAL_JUMP)  ; LAB_005956a8
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 00595757
        ;   Label: LAB_00595757
    TEST ESI,ESI                        ; 0059575d
    JZ 0x00595351                       ; 0059575f
        ;   XREF to: 00595351 (CONDITIONAL_JUMP)  ; LAB_00595351
    PUSH ESI                            ; 00595765
    MOV EDX,dword ptr [ESI + 0x154]     ; 00595766
    CALL dword ptr [EDX + 0xf4]         ; 0059576c
    ADD ESP,0x4                         ; 00595772
    CMP EAX,EBX                         ; 00595775
    JNZ 0x00595351                      ; 00595777
        ;   XREF to: 00595351 (CONDITIONAL_JUMP)  ; LAB_00595351
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0059577d
    MOV dword ptr [EAX + 0x70],0x2      ; 00595783
    JMP 0x00595351                      ; 0059578a
        ;   XREF to: 00595351 (UNCONDITIONAL_JUMP)  ; LAB_00595351
    LEA EAX,[ESP + 0x8]                 ; 0059578f
        ;   Label: LAB_0059578f
    PUSH EAX                            ; 00595793
    MOV ECX,dword ptr [ESP + 0x29c]     ; 00595794
    PUSH ECX                            ; 0059579b
    CALL FUN_00524270                   ; 0059579c
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; undefined FUN_00524270()
    ADD ESP,0x8                         ; 005957a1
    CMP EAX,0x64                        ; 005957a4
    JC 0x00595351                       ; 005957a7
        ;   XREF to: 00595351 (CONDITIONAL_JUMP)  ; LAB_00595351
    JBE 0x00595462                      ; 005957ad
        ;   XREF to: 00595462 (CONDITIONAL_JUMP)  ; LAB_00595462
    CMP EAX,0x65                        ; 005957b3
    JZ 0x00595757                       ; 005957b6
        ;   XREF to: 00595757 (CONDITIONAL_JUMP)  ; LAB_00595757
    JMP 0x00595351                      ; 005957b8
        ;   XREF to: 00595351 (UNCONDITIONAL_JUMP)  ; LAB_00595351
    PUSH 0x5f770c                       ; 005957bd | = "CEnemy CHero CNPC"
        ;   Label: LAB_005957bd
    PUSH EBX                            ; 005957c2
    CALL FUN_00595c40                   ; 005957c3
        ;   XREF to: 00595c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00595c40()
    ADD ESP,0x8                         ; 005957c8
    TEST EAX,EAX                        ; 005957cb
    JZ 0x0059540f                       ; 005957cd
        ;   XREF to: 0059540f (CONDITIONAL_JUMP)  ; LAB_0059540f
    PUSH 0x1                            ; 005957d3
    PUSH 0x2                            ; 005957d5
    PUSH ESI                            ; 005957d7
    CALL FUN_005247c0                   ; 005957d8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005957dd
    MOV dword ptr [EBX + 0xc268],0x0    ; 005957e0
    JMP 0x0059540f                      ; 005957ea
        ;   XREF to: 0059540f (UNCONDITIONAL_JUMP)  ; LAB_0059540f
    FLD float ptr [EBX + 0xc26c]        ; 005957ef
        ;   Label: LAB_005957ef
    FADD float ptr [EBP + 0x18]         ; 005957f5
    FST float ptr [EBX + 0xc26c]        ; 005957f8
    FCOMP double ptr [0x005f7726]       ; 005957fe | DAT_005f7726
    FNSTSW AX                           ; 00595804
    SAHF                                ; 00595806
    JC 0x0059582c                       ; 00595807
        ;   XREF to: 0059582c (CONDITIONAL_JUMP)  ; LAB_0059582c
    PUSH 0x1                            ; 00595809
    PUSH 0x0                            ; 0059580b
    MOV EDI,dword ptr [ESP + 0x2a0]     ; 0059580d
    PUSH EDI                            ; 00595814
    CALL FUN_005247c0                   ; 00595815
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0059581a
    MOV dword ptr [EBX + 0xc268],0x41c80000 ; 0059581d
    JMP 0x0059540f                      ; 00595827
        ;   XREF to: 0059540f (UNCONDITIONAL_JUMP)  ; LAB_0059540f
    PUSH dword ptr [EBP + 0x18]         ; 0059582c
        ;   Label: LAB_0059582c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059582f
    PUSH EBX                            ; 00595835
    CALL dword ptr [EAX + 0x144]        ; 00595836
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 0059583c
    ADD ESP,0x8                         ; 00595842
    TEST ESI,ESI                        ; 00595845
    JZ 0x0059540f                       ; 00595847
        ;   XREF to: 0059540f (CONDITIONAL_JUMP)  ; LAB_0059540f
    MOV EAX,ESI                         ; 0059584d
    MOV EDX,dword ptr [ESP + 0x294]     ; 0059584f
    LEA EDI,[ESP + 0x234]               ; 00595856
    FLD float ptr [EAX + 0x24]          ; 0059585d
    FLD float ptr [EAX + 0x28]          ; 00595860
    FLD float ptr [EAX + 0x20]          ; 00595863
    LEA ESI,[ESP + 0x1f8]               ; 00595866
    LEA EAX,[ESP + 0x234]               ; 0059586d
    FSUB float ptr [EDX]                ; 00595874
    FXCH ST2                            ; 00595876
    FSUB float ptr [EDX + 0x4]          ; 00595878
    FXCH                                ; 0059587b
    FSUB float ptr [EDX + 0x8]          ; 0059587d
    FXCH ST2                            ; 00595880
    FSTP float ptr [ESP + 0x1f8]        ; 00595882
    FSTP float ptr [ESP + 0x1fc]        ; 00595889
    FSTP float ptr [ESP + 0x200]        ; 00595890
    MOVSD ES:EDI,ESI                    ; 00595897
    MOVSD ES:EDI,ESI                    ; 00595898
    MOVSD ES:EDI,ESI                    ; 00595899
    PUSH EAX                            ; 0059589a
    LEA ESI,[ESP + 0x1d8]               ; 0059589b
    LEA EDI,[ESP + 0x250]               ; 005958a2
    CALL FUN_005a7520                   ; 005958a9
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x1d8]               ; 005958ae
    ADD ESP,0x4                         ; 005958b5
    MOVSD ES:EDI,ESI                    ; 005958b8
    MOVSD ES:EDI,ESI                    ; 005958b9
    MOVSD ES:EDI,ESI                    ; 005958ba
    FLD float ptr [ESP + 0x250]         ; 005958bb
    FSUB float ptr [EBX + 0x34]         ; 005958c2
    SUB ESP,0x4                         ; 005958c5
    FSTP float ptr [ESP]                ; 005958c8
    CALL FUN_0040cd60                   ; 005958cb
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0x2a0],EAX     ; 005958d0
    FLD float ptr [ESP + 0x2a0]         ; 005958d7
    ADD ESP,0x4                         ; 005958de
    FLD float ptr [EBP + 0x18]          ; 005958e1
    FMUL float ptr [0x005f772e]         ; 005958e4 | DAT_005f772e
    FXCH                                ; 005958ea
    FSTP float ptr [ESP + 0x274]        ; 005958ec
    MOV EAX,dword ptr [ESP + 0x274]     ; 005958f3
    FSTP float ptr [ESP + 0x284]        ; 005958fa
    MOV dword ptr [EBX + 0x2508],EAX    ; 00595901
    FLD float ptr [EBX + 0x2508]        ; 00595907
    FLD float ptr [ESP + 0x284]         ; 0059590d
    FCHS                                ; 00595914
    FSTP float ptr [ESP + 0x27c]        ; 00595916
    FCOMP float ptr [ESP + 0x27c]       ; 0059591d
    FNSTSW AX                           ; 00595924
    SAHF                                ; 00595926
    JC 0x00595a07                       ; 00595927
        ;   XREF to: 00595a07 (CONDITIONAL_JUMP)  ; LAB_00595a07
    FLD float ptr [EBX + 0x2508]        ; 0059592d
        ;   Label: LAB_0059592d
    FCOMP float ptr [ESP + 0x284]       ; 00595933
    FNSTSW AX                           ; 0059593a
    SAHF                                ; 0059593c
    JBE 0x0059594c                      ; 0059593d
        ;   XREF to: 0059594c (CONDITIONAL_JUMP)  ; LAB_0059594c
    MOV EAX,dword ptr [ESP + 0x284]     ; 0059593f
    MOV dword ptr [EBX + 0x2508],EAX    ; 00595946
    FLD float ptr [EBX + 0xc26c]        ; 0059594c
        ;   Label: LAB_0059594c
    FCOMP double ptr [0x005f7736]       ; 00595952 | DAT_005f7736
    FNSTSW AX                           ; 00595958
    SAHF                                ; 0059595a
    JBE 0x0059540f                      ; 0059595b
        ;   XREF to: 0059540f (CONDITIONAL_JUMP)  ; LAB_0059540f
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 00595961
    LEA EDX,[EBX + 0x20]                ; 00595967
    LEA EAX,[ESI + 0x20]                ; 0059596a
    FLD float ptr [EDX]                 ; 0059596d
    FSUB float ptr [EAX]                ; 0059596f
    FMUL ST0                            ; 00595971
    FLD float ptr [EDX + 0x8]           ; 00595973
    FSUB float ptr [EAX + 0x8]          ; 00595976
    FMUL ST0                            ; 00595979
    FADDP                               ; 0059597b
    FSQRT                               ; 0059597d
    FSTP float ptr [ESP]                ; 0059597f
    MOV EAX,dword ptr [ESP]             ; 00595982
    FLD float ptr [ESP + 0x274]         ; 00595985
    MOV dword ptr [ESP + 0x4],EAX       ; 0059598c
    FCOMP float ptr [0x005f773e]        ; 00595990 | DAT_005f773e
    FNSTSW AX                           ; 00595996
    SAHF                                ; 00595998
    JNC 0x0059540f                      ; 00595999
        ;   XREF to: 0059540f (CONDITIONAL_JUMP)  ; LAB_0059540f
    FLD float ptr [EBX + 0x24]          ; 0059599f
    FSUB float ptr [ESI + 0x24]         ; 005959a2
    FABS                                ; 005959a5
    FCOMP double ptr [0x005f7746]       ; 005959a7 | DAT_005f7746
    FNSTSW AX                           ; 005959ad
    SAHF                                ; 005959af
    JNC 0x0059540f                      ; 005959b0
        ;   XREF to: 0059540f (CONDITIONAL_JUMP)  ; LAB_0059540f
    FLD float ptr [ESP]                 ; 005959b6
    FCOMP double ptr [0x005f774e]       ; 005959b9 | DAT_005f774e
    FNSTSW AX                           ; 005959bf
    SAHF                                ; 005959c1
    JBE 0x00595a19                      ; 005959c2
        ;   XREF to: 00595a19 (CONDITIONAL_JUMP)  ; LAB_00595a19
    MOV EDX,0x1                         ; 005959c4
    FLD float ptr [ESP + 0x4]           ; 005959c9
        ;   Label: LAB_005959c9
    FCOMP double ptr [0x005f7756]       ; 005959cd | DAT_005f7756
    FNSTSW AX                           ; 005959d3
    SAHF                                ; 005959d5
    JNC 0x00595a1d                      ; 005959d6
        ;   XREF to: 00595a1d (CONDITIONAL_JUMP)  ; LAB_00595a1d
    MOV EAX,0x1                         ; 005959d8
    TEST EDX,EAX                        ; 005959dd
        ;   Label: LAB_005959dd
    JZ 0x0059540f                       ; 005959df
        ;   XREF to: 0059540f (CONDITIONAL_JUMP)  ; LAB_0059540f
    PUSH 0x1                            ; 005959e5
    PUSH 0x6                            ; 005959e7
    LEA EAX,[EBX + 0x158]               ; 005959e9
    PUSH EAX                            ; 005959ef
    CALL FUN_005247c0                   ; 005959f0
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005959f5
    MOV dword ptr [EBX + 0xc268],0x41c80000 ; 005959f8
    JMP 0x0059540f                      ; 00595a02
        ;   XREF to: 0059540f (UNCONDITIONAL_JUMP)  ; LAB_0059540f
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00595a07
        ;   Label: LAB_00595a07
    MOV dword ptr [EBX + 0x2508],EAX    ; 00595a0e
    JMP 0x0059592d                      ; 00595a14
        ;   XREF to: 0059592d (UNCONDITIONAL_JUMP)  ; LAB_0059592d
    XOR EDX,EDX                         ; 00595a19
        ;   Label: LAB_00595a19
    JMP 0x005959c9                      ; 00595a1b
        ;   XREF to: 005959c9 (UNCONDITIONAL_JUMP)  ; LAB_005959c9
    XOR EAX,EAX                         ; 00595a1d
        ;   Label: LAB_00595a1d
    JMP 0x005959dd                      ; 00595a1f
        ;   XREF to: 005959dd (UNCONDITIONAL_JUMP)  ; LAB_005959dd
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 00595a21
        ;   Label: LAB_00595a21
    TEST ECX,ECX                        ; 00595a27
    JZ 0x0059540f                       ; 00595a29
        ;   XREF to: 0059540f (CONDITIONAL_JUMP)  ; LAB_0059540f
    PUSH ECX                            ; 00595a2f
    MOV EDX,dword ptr [ECX + 0x154]     ; 00595a30
    CALL dword ptr [EDX + 0x10c]        ; 00595a36
    ADD ESP,0x4                         ; 00595a3c
    TEST EAX,EAX                        ; 00595a3f
    JG 0x0059540f                       ; 00595a41
        ;   XREF to: 0059540f (CONDITIONAL_JUMP)  ; LAB_0059540f
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00595a47
    PUSH EAX                            ; 00595a4d
    MOV EDX,dword ptr [EAX + 0x154]     ; 00595a4e
    CALL dword ptr [EDX + 0xf4]         ; 00595a54
    ADD ESP,0x4                         ; 00595a5a
    TEST EAX,EAX                        ; 00595a5d
    JNZ 0x0059540f                      ; 00595a5f
        ;   XREF to: 0059540f (CONDITIONAL_JUMP)  ; LAB_0059540f
    MOV EDX,dword ptr [ESP + 0x294]     ; 00595a65
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00595a6c
    LEA EDI,[ESP + 0x228]               ; 00595a72
    LEA ESI,[ESP + 0x210]               ; 00595a79
    FLD float ptr [EAX + 0x24]          ; 00595a80
    FLD float ptr [EAX + 0x28]          ; 00595a83
    FLD float ptr [EAX + 0x20]          ; 00595a86
    LEA EAX,[ESP + 0x228]               ; 00595a89
    FSUB float ptr [EDX]                ; 00595a90
    FXCH ST2                            ; 00595a92
    FSUB float ptr [EDX + 0x4]          ; 00595a94
    FXCH                                ; 00595a97
    FSUB float ptr [EDX + 0x8]          ; 00595a99
    FXCH ST2                            ; 00595a9c
    FSTP float ptr [ESP + 0x210]        ; 00595a9e
    FSTP float ptr [ESP + 0x214]        ; 00595aa5
    FSTP float ptr [ESP + 0x218]        ; 00595aac
    MOVSD ES:EDI,ESI                    ; 00595ab3
    MOVSD ES:EDI,ESI                    ; 00595ab4
    MOVSD ES:EDI,ESI                    ; 00595ab5
    PUSH EAX                            ; 00595ab6
    LEA ESI,[ESP + 0x1cc]               ; 00595ab7
    LEA EDI,[ESP + 0x220]               ; 00595abe
    CALL FUN_005a7520                   ; 00595ac5
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x1cc]               ; 00595aca
    ADD ESP,0x4                         ; 00595ad1
    MOVSD ES:EDI,ESI                    ; 00595ad4
    MOVSD ES:EDI,ESI                    ; 00595ad5
    MOVSD ES:EDI,ESI                    ; 00595ad6
    FLD float ptr [ESP + 0x220]         ; 00595ad7
    FSUB float ptr [EBX + 0x34]         ; 00595ade
    SUB ESP,0x4                         ; 00595ae1
    FSTP float ptr [ESP]                ; 00595ae4
    CALL FUN_0040cd60                   ; 00595ae7
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0x2a0],EAX     ; 00595aec
    FLD float ptr [ESP + 0x2a0]         ; 00595af3
    ADD ESP,0x4                         ; 00595afa
    FLD float ptr [EBP + 0x18]          ; 00595afd
    FMUL float ptr [0x005f771e]         ; 00595b00 | DAT_005f771e
    FXCH                                ; 00595b06
    FST float ptr [EBX + 0x2508]        ; 00595b08
    FXCH                                ; 00595b0e
    FST float ptr [ESP + 0x288]         ; 00595b10
    FCHS                                ; 00595b17
    FSTP float ptr [ESP + 0x280]        ; 00595b19
    FCOMP float ptr [ESP + 0x280]       ; 00595b20
    FNSTSW AX                           ; 00595b27
    SAHF                                ; 00595b29
    JC 0x00595b54                       ; 00595b2a
        ;   XREF to: 00595b54 (CONDITIONAL_JUMP)  ; LAB_00595b54
    FLD float ptr [EBX + 0x2508]        ; 00595b2c
        ;   Label: LAB_00595b2c
    FCOMP float ptr [ESP + 0x288]       ; 00595b32
    FNSTSW AX                           ; 00595b39
    SAHF                                ; 00595b3b
    JBE 0x0059540f                      ; 00595b3c
        ;   XREF to: 0059540f (CONDITIONAL_JUMP)  ; LAB_0059540f
    MOV EAX,dword ptr [ESP + 0x288]     ; 00595b42
    MOV dword ptr [EBX + 0x2508],EAX    ; 00595b49
    JMP 0x0059540f                      ; 00595b4f
        ;   XREF to: 0059540f (UNCONDITIONAL_JUMP)  ; LAB_0059540f
    MOV EAX,dword ptr [ESP + 0x280]     ; 00595b54
        ;   Label: LAB_00595b54
    MOV dword ptr [EBX + 0x2508],EAX    ; 00595b5b
    JMP 0x00595b2c                      ; 00595b61
        ;   XREF to: 00595b2c (UNCONDITIONAL_JUMP)  ; LAB_00595b2c
    JBE 0x005957ef                      ; 00595b63
        ;   XREF to: 005957ef (CONDITIONAL_JUMP)  ; LAB_005957ef
        ;   Label: LAB_00595b63
    CMP EAX,0x6                         ; 00595b69
    JZ 0x00595a21                       ; 00595b6c
        ;   XREF to: 00595a21 (CONDITIONAL_JUMP)  ; LAB_00595a21
    JMP 0x0059540f                      ; 00595b72
        ;   XREF to: 0059540f (UNCONDITIONAL_JUMP)  ; LAB_0059540f


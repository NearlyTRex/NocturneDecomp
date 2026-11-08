; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a0380(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_005efb6c
;   TerminatedCString s_BurnComplete_005efb72
;   undefined4 DAT_005efb7f
;   undefined4 DAT_005efb87
;   undefined4 DAT_006167e0
;   undefined4 DAT_01cedef4
;   undefined4 DAT_0265370c
;
; Called Functions:
;   FUN_00408cf0
;   FUN_00408d70
;   FUN_0040cf60
;   FUN_0040cfc0
;   FUN_004222d0
;   FUN_004c9850
;   FUN_00591530
;   FUN_0059d880
;   FUN_005a7ed0
;   FUN_005a8300
;   FUN_005ba9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0380
        ;   Label: FUN_005a0380
    PUSH ESI                            ; 005a0381
    PUSH EDI                            ; 005a0382
    PUSH EBP                            ; 005a0383
    MOV EBP,ESP                         ; 005a0384
    SUB ESP,0x100                       ; 005a0386
    AND ESP,0xfffffff8                  ; 005a038c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a038f
    FLD float ptr [EAX + 0x11430]       ; 005a0392
    FLDZ                                ; 005a0398
    FCOMPP                              ; 005a039a
    FNSTSW AX                           ; 005a039c
    SAHF                                ; 005a039e
    JNC 0x005a074c                      ; 005a039f
        ;   XREF to: 005a074c (CONDITIONAL_JUMP)  ; LAB_005a074c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a03a5
    FLD float ptr [EAX + 0x11430]       ; 005a03a8
    FSUB float ptr [EBP + 0x18]         ; 005a03ae
    FSTP float ptr [EAX + 0x11430]      ; 005a03b1
    MOV EAX,ESP                         ; 005a03b7
    PUSH EAX                            ; 005a03b9
    CALL FUN_004222d0                   ; 005a03ba
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 005a03bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a03c2
    FLD float ptr [EAX + 0x11440]       ; 005a03c5
    MOV EAX,[0x01cedef4]                ; 005a03cb | DAT_01cedef4
    FMUL float ptr [EBP + 0x18]         ; 005a03d0
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005a03d3
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a03da
    MOV dword ptr [ESP + 0x34],EAX      ; 005a03dd
    MOV dword ptr [ESP + 0x38],EAX      ; 005a03e1
    MOV EAX,ESP                         ; 005a03e5
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a03e7
    PUSH EAX                            ; 005a03ea
    FSTP float ptr [ESP + 0x8]          ; 005a03eb
    MOV EBX,dword ptr [EBX + 0x2b0]     ; 005a03ef
    PUSH EDX                            ; 005a03f5
    CALL dword ptr [EBX + 0x110]        ; 005a03f6
    ADD ESP,0x8                         ; 005a03fc
    XOR ECX,ECX                         ; 005a03ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0401
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a0404
    MOV ESI,dword ptr [EBP + 0x14]      ; 005a0407
    MOV dword ptr [ESP + 0xf0],ECX      ; 005a040a
    MOV dword ptr [ESP + 0xec],ECX      ; 005a0411
    ADD EAX,0x1134                      ; 005a0418
    ADD EBX,0x11434                     ; 005a041d
    ADD ESI,0x264                       ; 005a0423
    MOV dword ptr [EAX + 0x1029c],0x0   ; 005a0429
    MOV dword ptr [ESP + 0xf8],EBX      ; 005a0433
    MOV dword ptr [ESP + 0xe8],ESI      ; 005a043a
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a0441
    MOV dword ptr [ESP + 0xf4],EAX      ; 005a0444
    ADD EBX,0x11430                     ; 005a044b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a0451
        ;   Label: LAB_005a0451
    MOV EAX,dword ptr [EAX + 0x113b0]   ; 005a0454
    MOV ESI,dword ptr [ESP + 0xf0]      ; 005a045a
    CMP ESI,dword ptr [EAX + 0x1d1f8]   ; 005a0461
    JL 0x005a0470                       ; 005a0467
        ;   XREF to: 005a0470 (CONDITIONAL_JUMP)  ; LAB_005a0470
    MOV ESP,EBP                         ; 005a0469
    POP EBP                             ; 005a046b
    POP EDI                             ; 005a046c
    POP ESI                             ; 005a046d
    POP EBX                             ; 005a046e
    RET                                 ; 005a046f
    CALL FUN_005a7ed0                   ; 005a0470
        ;   XREF to: 005a7ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7ed0()
        ;   Label: LAB_005a0470
    TEST EAX,EAX                        ; 005a0475
    JZ 0x005a0716                       ; 005a0477
        ;   XREF to: 005a0716 (CONDITIONAL_JUMP)  ; LAB_005a0716
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a047d
    MOV EAX,dword ptr [EAX + 0x113b0]   ; 005a0480
    MOV EDX,dword ptr [ESP + 0xec]      ; 005a0486
    ADD EAX,0x1d1fc                     ; 005a048d
    PUSH 0x5efb6c                       ; 005a0492 | = "Bip01"
    ADD EAX,EDX                         ; 005a0497
    PUSH EAX                            ; 005a0499
    CALL FUN_005ba9e0                   ; 005a049a
        ;   XREF to: 005ba9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba9e0()
    ADD ESP,0x8                         ; 005a049f
    TEST EAX,EAX                        ; 005a04a2
    JZ 0x005a0716                       ; 005a04a4
        ;   XREF to: 005a0716 (CONDITIONAL_JUMP)  ; LAB_005a0716
    PUSH 0x3f800000                     ; 005a04aa
    PUSH 0x0                            ; 005a04af
    CALL FUN_0040cf60                   ; 005a04b1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x104],EAX     ; 005a04b6
    FLD float ptr [ESP + 0x104]         ; 005a04bd
    ADD ESP,0x8                         ; 005a04c4
    FCOMP double ptr [0x005efb87]       ; 005a04c7 | DAT_005efb87
    FNSTSW AX                           ; 005a04cd
    SAHF                                ; 005a04cf
    JBE 0x005a0716                      ; 005a04d0
        ;   XREF to: 005a0716 (CONDITIONAL_JUMP)  ; LAB_005a0716
    MOV ECX,dword ptr [ESP + 0xf4]      ; 005a04d6
    PUSH ECX                            ; 005a04dd
    PUSH 0x265370c                      ; 005a04de | DAT_0265370c
    LEA ESI,[ESP + 0xbc]                ; 005a04e3
    LEA EDI,[ESP + 0xa4]                ; 005a04ea
    CALL FUN_00591530                   ; 005a04f1
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[ESP + 0xbc]                ; 005a04f6
    ADD ESP,0x8                         ; 005a04fd
    LEA EAX,[ESP + 0x9c]                ; 005a0500
    MOVSD ES:EDI,ESI                    ; 005a0507
    MOVSD ES:EDI,ESI                    ; 005a0508
    MOVSD ES:EDI,ESI                    ; 005a0509
    PUSH EAX                            ; 005a050a
    MOV ESI,dword ptr [EBP + 0x14]      ; 005a050b
    PUSH ESI                            ; 005a050e
    LEA ESI,[ESP + 0xd4]                ; 005a050f
    LEA EDI,[ESP + 0x98]                ; 005a0516
    CALL FUN_00408cf0                   ; 005a051d
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    ADD ESP,0x8                         ; 005a0522
    LEA ESI,[ESP + 0xcc]                ; 005a0525
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005a052c
    MOVSD ES:EDI,ESI                    ; 005a0533
    MOVSD ES:EDI,ESI                    ; 005a0534
    MOVSD ES:EDI,ESI                    ; 005a0535
    FLD float ptr [EAX]                 ; 005a0536
    FMUL float ptr [EBX]                ; 005a0538
    FLD float ptr [EAX + 0x4]           ; 005a053a
    FMUL float ptr [EBX]                ; 005a053d
    FLD float ptr [EAX + 0x8]           ; 005a053f
    FMUL float ptr [EBX]                ; 005a0542
    LEA EDI,[ESP + 0x48]                ; 005a0544
    LEA ESI,[ESP + 0xc0]                ; 005a0548
    FXCH ST2                            ; 005a054f
    FSTP float ptr [ESP + 0xc0]         ; 005a0551
    FSTP float ptr [ESP + 0xc4]         ; 005a0558
    FSTP float ptr [ESP + 0xc8]         ; 005a055f
    MOVSD ES:EDI,ESI                    ; 005a0566
    MOVSD ES:EDI,ESI                    ; 005a0567
    MOVSD ES:EDI,ESI                    ; 005a0568
    FLD float ptr [0x005efb7f]          ; 005a0569 | DAT_005efb7f
    FLD float ptr [ESP + 0x48]          ; 005a056f
    FMUL ST1                            ; 005a0573
    FLD float ptr [ESP + 0x4c]          ; 005a0575
    FMUL ST2                            ; 005a0579
    FLD float ptr [ESP + 0x50]          ; 005a057b
    FMULP ST3                           ; 005a057f
    PUSH 0x3fc00000                     ; 005a0581
    PUSH 0x3f4ccccd                     ; 005a0586
    LEA EDI,[ESP + 0x5c]                ; 005a058b
    LEA ESI,[ESP + 0x68]                ; 005a058f
    FXCH                                ; 005a0593
    FSTP float ptr [ESP + 0x68]         ; 005a0595
    FSTP float ptr [ESP + 0x6c]         ; 005a0599
    FSTP float ptr [ESP + 0x70]         ; 005a059d
    CALL FUN_0040cf60                   ; 005a05a1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x104],EAX     ; 005a05a6
    MOVSD ES:EDI,ESI                    ; 005a05ad
    MOVSD ES:EDI,ESI                    ; 005a05ae
    MOVSD ES:EDI,ESI                    ; 005a05af
    FLD float ptr [ESP + 0x104]         ; 005a05b0
    ADD ESP,0x8                         ; 005a05b7
    MOV EAX,dword ptr [ESP + 0x54]      ; 005a05ba
    PUSH 0x2                            ; 005a05be
    MOV dword ptr [ESP + 0xac],EAX      ; 005a05c0
    MOV EAX,dword ptr [ESP + 0x60]      ; 005a05c7
    PUSH 0x265370c                      ; 005a05cb | DAT_0265370c
    MOV dword ptr [ESP + 0xb8],EAX      ; 005a05d0
    LEA EAX,[ESP + 0x74]                ; 005a05d7
    PUSH EAX                            ; 005a05db
    LEA EAX,[ESP + 0x9c]                ; 005a05dc
    PUSH EAX                            ; 005a05e3
    PUSH 0x3f800000                     ; 005a05e4
    PUSH 0x3f800000                     ; 005a05e9
    LEA EDI,[ESP + 0x84]                ; 005a05ee
    PUSH 0x3f800000                     ; 005a05f5
    LEA ESI,[ESP + 0xc4]                ; 005a05fa
    PUSH 0x0                            ; 005a0601
    FADD float ptr [ESP + 0x78]         ; 005a0603
    PUSH 0x3f800000                     ; 005a0607
    FSTP float ptr [ESP + 0xd0]         ; 005a060c
    PUSH 0x3f000000                     ; 005a0613
    MOVSD ES:EDI,ESI                    ; 005a0618
    MOVSD ES:EDI,ESI                    ; 005a0619
    MOVSD ES:EDI,ESI                    ; 005a061a
    CALL FUN_0040cf60                   ; 005a061b
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x124],EAX     ; 005a0620
    FLD float ptr [ESP + 0x124]         ; 005a0627
    ADD ESP,0x8                         ; 005a062e
    SUB ESP,0x4                         ; 005a0631
    FSTP float ptr [ESP]                ; 005a0634
    PUSH 0x0                            ; 005a0637
    PUSH 0x3f000000                     ; 005a0639
    PUSH 0x3f800000                     ; 005a063e
    PUSH 0x3f4ccccd                     ; 005a0643
    CALL FUN_0040cf60                   ; 005a0648
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x130],EAX     ; 005a064d
    FLD float ptr [ESP + 0x130]         ; 005a0654
    ADD ESP,0x8                         ; 005a065b
    SUB ESP,0x4                         ; 005a065e
    MOV EDI,dword ptr [ESP + 0x118]     ; 005a0661
    FSTP float ptr [ESP]                ; 005a0668
    PUSH EDI                            ; 005a066b
    CALL FUN_005a8300                   ; 005a066c
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8300()
    ADD ESP,0x34                        ; 005a0671
    PUSH 0x32                           ; 005a0674
    PUSH 0x0                            ; 005a0676
    CALL FUN_0040cfc0                   ; 005a0678
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    ADD ESP,0x8                         ; 005a067d
    TEST EAX,EAX                        ; 005a0680
    JNZ 0x005a0716                      ; 005a0682
        ;   XREF to: 005a0716 (CONDITIONAL_JUMP)  ; LAB_005a0716
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005a0688
    FLD float ptr [EAX]                 ; 005a068f
    FMUL float ptr [EBX]                ; 005a0691
    FLD float ptr [EAX + 0x4]           ; 005a0693
    FMUL float ptr [EBX]                ; 005a0696
    FLD float ptr [EAX + 0x8]           ; 005a0698
    FMUL float ptr [EBX]                ; 005a069b
    LEA EDI,[ESP + 0x3c]                ; 005a069d
    LEA ESI,[ESP + 0x84]                ; 005a06a1
    LEA EAX,[ESP + 0x90]                ; 005a06a8
    FXCH ST2                            ; 005a06af
    FSTP float ptr [ESP + 0x84]         ; 005a06b1
    FSTP float ptr [ESP + 0x88]         ; 005a06b8
    FSTP float ptr [ESP + 0x8c]         ; 005a06bf
    PUSH EAX                            ; 005a06c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a06c7
    MOVSD ES:EDI,ESI                    ; 005a06ca
    MOVSD ES:EDI,ESI                    ; 005a06cb
    MOVSD ES:EDI,ESI                    ; 005a06cc
    PUSH EAX                            ; 005a06cd
    LEA ESI,[ESP + 0xe0]                ; 005a06ce
    LEA EDI,[ESP + 0x80]                ; 005a06d5
    CALL FUN_00408d70                   ; 005a06dc
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 005a06e1
    LEA ESI,[ESP + 0xd8]                ; 005a06e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a06eb
    MOVSD ES:EDI,ESI                    ; 005a06ee
    MOVSD ES:EDI,ESI                    ; 005a06ef
    MOVSD ES:EDI,ESI                    ; 005a06f0
    MOV EDX,dword ptr [EAX + 0x280c]    ; 005a06f1
    PUSH EDX                            ; 005a06f7
    PUSH 0x1                            ; 005a06f8
    LEA EAX,[ESP + 0x44]                ; 005a06fa
    PUSH EAX                            ; 005a06fe
    LEA EAX,[ESP + 0x84]                ; 005a06ff
    PUSH EAX                            ; 005a0706
    MOV ECX,dword ptr [0x006167e0]      ; 005a0707 | DAT_006167e0
    PUSH ECX                            ; 005a070d
    CALL FUN_004c9850                   ; 005a070e
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9850()
    ADD ESP,0x14                        ; 005a0713
    MOV EDI,dword ptr [ESP + 0xf4]      ; 005a0716
        ;   Label: LAB_005a0716
    MOV EAX,dword ptr [ESP + 0xf0]      ; 005a071d
    MOV ESI,dword ptr [ESP + 0xec]      ; 005a0724
    ADD EDI,0x30                        ; 005a072b
    INC EAX                             ; 005a072e
    ADD ESI,0x24                        ; 005a072f
    MOV dword ptr [ESP + 0xf4],EDI      ; 005a0732
    MOV dword ptr [ESP + 0xf0],EAX      ; 005a0739
    MOV dword ptr [ESP + 0xec],ESI      ; 005a0740
    JMP 0x005a0451                      ; 005a0747
        ;   XREF to: 005a0451 (UNCONDITIONAL_JUMP)  ; LAB_005a0451
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a074c
        ;   Label: LAB_005a074c
    PUSH 0x5efb72                       ; 005a074f | = "BurnComplete"
    ADD EAX,0x10af8                     ; 005a0754
    PUSH EAX                            ; 005a0759
    MOV dword ptr [EAX + 0x938],0x0     ; 005a075a
    CALL FUN_0059d880                   ; 005a0764
        ;   XREF to: 0059d880 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d880()
    ADD ESP,0x8                         ; 005a0769
    MOV ESP,EBP                         ; 005a076c
    POP EBP                             ; 005a076e
    POP EDI                             ; 005a076f
    POP ESI                             ; 005a0770
    POP EBX                             ; 005a0771
    RET                                 ; 005a0772


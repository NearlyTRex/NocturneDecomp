; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042e4b0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_0042b0e0 at 0042b203
;   FUN_0042e8c0 at 0042eea6
;   FUN_0042fbd0 at 0042fc76
;
; Referenced Globals:
;   undefined4 DAT_005b82f6
;
; Called Functions:
;   FUN_00408b80
;   FUN_0054a3a0
;   FUN_0054ea40
;   FUN_00583260
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e4b0
        ;   Label: FUN_0042e4b0
    PUSH ESI                            ; 0042e4b1
    PUSH EDI                            ; 0042e4b2
    PUSH EBP                            ; 0042e4b3
    MOV EBP,ESP                         ; 0042e4b4
    SUB ESP,0xb8                        ; 0042e4b6
    AND ESP,0xfffffff8                  ; 0042e4bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042e4bf
    CMP dword ptr [EBP + 0x1c],0x0      ; 0042e4c2
    JL 0x0042e60e                       ; 0042e4c6
        ;   XREF to: 0042e60e (CONDITIONAL_JUMP)  ; LAB_0042e60e
    MOV EDX,dword ptr [EBP + 0x18]      ; 0042e4cc
    MOV ECX,0xffffffff                  ; 0042e4cf
    LEA EAX,[EBX + 0x1b0]               ; 0042e4d4
    XOR ESI,ESI                         ; 0042e4da
    XOR EDI,EDI                         ; 0042e4dc
    MOV dword ptr [ESP + 0x9c],ESI      ; 0042e4de
    MOV dword ptr [ESP + 0x7c],EAX      ; 0042e4e5
    MOV ESI,EAX                         ; 0042e4e9
    CMP dword ptr [EDX + 0x1de78],0x0   ; 0042e4eb
    JLE 0x0042e515                      ; 0042e4f2
        ;   XREF to: 0042e515 (CONDITIONAL_JUMP)  ; LAB_0042e515
    MOV EAX,dword ptr [EDX + 0x1de9c]   ; 0042e4f4
        ;   Label: LAB_0042e4f4
    CMP EAX,dword ptr [EBP + 0x1c]      ; 0042e4fa
    JZ 0x0042e615                       ; 0042e4fd
        ;   XREF to: 0042e615 (CONDITIONAL_JUMP)  ; LAB_0042e615
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042e503
        ;   Label: LAB_0042e503
    ADD EDX,0x24                        ; 0042e506
    INC EDI                             ; 0042e509
    ADD ESI,0xc                         ; 0042e50a
    CMP EDI,dword ptr [EAX + 0x1de78]   ; 0042e50d
    JL 0x0042e4f4                       ; 0042e513
        ;   XREF to: 0042e4f4 (CONDITIONAL_JUMP)  ; LAB_0042e4f4
    CMP ECX,-0x1                        ; 0042e515
        ;   Label: LAB_0042e515
    JZ 0x0042e60e                       ; 0042e518
        ;   XREF to: 0042e60e (CONDITIONAL_JUMP)  ; LAB_0042e60e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0042e51e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042e521
    SUB EAX,EDX                         ; 0042e528
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0042e52a
    SHL EAX,0x2                         ; 0042e52e
    ADD EDX,EAX                         ; 0042e531
    LEA EAX,[ECX*0x4 + 0x0]             ; 0042e533
    SUB EAX,ECX                         ; 0042e53a
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0042e53c
    SHL EAX,0x2                         ; 0042e540
    ADD EAX,EDI                         ; 0042e543
    LEA ESI,[ESP + 0x18]                ; 0042e545
    FLD float ptr [EAX]                 ; 0042e549
    FLD float ptr [EAX + 0x4]           ; 0042e54b
    FLD float ptr [EAX + 0x8]           ; 0042e54e
    LEA EDI,[ESP + 0x48]                ; 0042e551
    FXCH ST2                            ; 0042e555
    FSUB float ptr [EDX]                ; 0042e557
    FXCH                                ; 0042e559
    FSUB float ptr [EDX + 0x4]          ; 0042e55b
    FXCH ST2                            ; 0042e55e
    FSUB float ptr [EDX + 0x8]          ; 0042e560
    FXCH                                ; 0042e563
    FSTP float ptr [ESP + 0x18]         ; 0042e565
    FXCH                                ; 0042e569
    FSTP float ptr [ESP + 0x1c]         ; 0042e56b
    FSTP float ptr [ESP + 0x20]         ; 0042e56f
    MOVSD ES:EDI,ESI                    ; 0042e573
    MOVSD ES:EDI,ESI                    ; 0042e574
    MOVSD ES:EDI,ESI                    ; 0042e575
    FLD float ptr [ESP + 0x4c]          ; 0042e576
    FMUL ST0                            ; 0042e57a
    FLD float ptr [ESP + 0x48]          ; 0042e57c
    FMUL ST0                            ; 0042e580
    FADDP                               ; 0042e582
    FLD float ptr [ESP + 0x50]          ; 0042e584
    FMUL ST0                            ; 0042e588
    FADDP                               ; 0042e58a
    FSQRT                               ; 0042e58c
    FMUL double ptr [0x005b82f6]        ; 0042e58e | DAT_005b82f6
    CALL FUN_005a3120                   ; 0042e594
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0xb0]        ; 0042e599
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0042e5a0
    INC EAX                             ; 0042e5a7
    MOV dword ptr [ESP + 0x94],EAX      ; 0042e5a8
    XOR EAX,EAX                         ; 0042e5af
    MOV EDX,dword ptr [ESP + 0x94]      ; 0042e5b1
    MOV dword ptr [ESP + 0xa8],EAX      ; 0042e5b8
    TEST EDX,EDX                        ; 0042e5bf
    JLE 0x0042e60e                      ; 0042e5c1
        ;   XREF to: 0042e60e (CONDITIONAL_JUMP)  ; LAB_0042e60e
    LEA EAX,[EBX + 0xfd8]               ; 0042e5c3
    MOV dword ptr [ESP + 0x8c],EAX      ; 0042e5c9
    LEA EAX,[EBX + 0x385c]              ; 0042e5d0
    MOV dword ptr [ESP + 0x84],EAX      ; 0042e5d6
    LEA EAX,[EBX + 0x33ac]              ; 0042e5dd
    MOV dword ptr [ESP + 0x88],EAX      ; 0042e5e3
    LEA EAX,[EBX + 0x158]               ; 0042e5ea
    MOV dword ptr [ESP + 0x80],EAX      ; 0042e5f0
    LEA EAX,[EDX + 0x1]                 ; 0042e5f7
    MOV dword ptr [ESP + 0x90],EAX      ; 0042e5fa
    CMP dword ptr [EBX + 0x33a0],0x32   ; 0042e601
        ;   Label: LAB_0042e601
    JL 0x0042e655                       ; 0042e608
        ;   XREF to: 0042e655 (CONDITIONAL_JUMP)  ; LAB_0042e655
    MOV ESP,EBP                         ; 0042e60e
        ;   Label: LAB_0042e60e
    POP EBP                             ; 0042e610
    POP EDI                             ; 0042e611
    POP ESI                             ; 0042e612
    POP EBX                             ; 0042e613
    RET                                 ; 0042e614
    FLD float ptr [ESI + 0x4]           ; 0042e615
        ;   Label: LAB_0042e615
    FMUL ST0                            ; 0042e618
    FLD float ptr [ESI]                 ; 0042e61a
    FMUL ST0                            ; 0042e61c
    FADDP                               ; 0042e61e
    FLD float ptr [ESI + 0x8]           ; 0042e620
    FMUL ST0                            ; 0042e623
    FADDP                               ; 0042e625
    FSQRT                               ; 0042e627
    FST float ptr [ESP + 0xa0]          ; 0042e629
    FCOMP float ptr [ESP + 0x9c]        ; 0042e630
    FNSTSW AX                           ; 0042e637
    SAHF                                ; 0042e639
    JBE 0x0042e503                      ; 0042e63a
        ;   XREF to: 0042e503 (CONDITIONAL_JUMP)  ; LAB_0042e503
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0042e640
    MOV ECX,EDI                         ; 0042e647
    MOV dword ptr [ESP + 0x9c],EAX      ; 0042e649
    JMP 0x0042e503                      ; 0042e650
        ;   XREF to: 0042e503 (UNCONDITIONAL_JUMP)  ; LAB_0042e503
    MOV ESI,dword ptr [EBX + 0x33a0]    ; 0042e655
        ;   Label: LAB_0042e655
    IMUL EAX,ESI,0x18                   ; 0042e65b
    MOV EDX,dword ptr [ESP + 0x88]      ; 0042e65e
    MOV dword ptr [EBX + 0xfc],0x1      ; 0042e665
    ADD EDX,EAX                         ; 0042e66f
    MOV EAX,dword ptr [ESP + 0x80]      ; 0042e671
    LEA EDI,[ESI + 0x1]                 ; 0042e678
    PUSH EAX                            ; 0042e67b
    MOV dword ptr [ESP + 0xb0],EDX      ; 0042e67c
    MOV dword ptr [EBX + 0x33a0],EDI    ; 0042e683
    CALL FUN_0054ea40                   ; 0042e689
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0054ea40()
    ADD ESP,0x4                         ; 0042e68e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0042e691
    PUSH EDX                            ; 0042e694
    PUSH EAX                            ; 0042e695
    CALL FUN_0054a3a0                   ; 0042e696
        ;   XREF to: 0054a3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054a3a0()
    ADD ESP,0x8                         ; 0042e69b
    MOV EDX,dword ptr [ESP + 0xac]      ; 0042e69e
    MOV dword ptr [EDX],EAX             ; 0042e6a5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0042e6a7
    MOV dword ptr [EDX + 0x4],EAX       ; 0042e6aa
    MOV EAX,dword ptr [ESP + 0x90]      ; 0042e6ad
    MOV dword ptr [ESP + 0xb0],EAX      ; 0042e6b4
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0042e6bb
    INC EAX                             ; 0042e6c2
    MOV dword ptr [ESP + 0xb4],EAX      ; 0042e6c3
    FLD float ptr [ESP + 0x48]          ; 0042e6ca
    FILD dword ptr [ESP + 0xb4]         ; 0042e6ce
    FSTP float ptr [ESP + 0xa4]         ; 0042e6d5
    FMUL float ptr [ESP + 0xa4]         ; 0042e6dc
    FLD float ptr [ESP + 0x4c]          ; 0042e6e3
    FMUL float ptr [ESP + 0xa4]         ; 0042e6e7
    FLD float ptr [ESP + 0x50]          ; 0042e6ee
    FMUL float ptr [ESP + 0xa4]         ; 0042e6f2
    LEA ESI,[ESP + 0xc]                 ; 0042e6f9
    LEA EDI,[ESP + 0x3c]                ; 0042e6fd
    FLD1                                ; 0042e701
    FILD dword ptr [ESP + 0xb0]         ; 0042e703
    FXCH ST4                            ; 0042e70a
    FSTP float ptr [ESP + 0xc]          ; 0042e70c
    FXCH ST2                            ; 0042e710
    FSTP float ptr [ESP + 0x10]         ; 0042e712
    FSTP float ptr [ESP + 0x14]         ; 0042e716
    MOVSD ES:EDI,ESI                    ; 0042e71a
    MOVSD ES:EDI,ESI                    ; 0042e71b
    MOVSD ES:EDI,ESI                    ; 0042e71c
    FXCH                                ; 0042e71d
    FSTP float ptr [ESP + 0x98]         ; 0042e71f
    FLD float ptr [ESP + 0x3c]          ; 0042e726
    FXCH                                ; 0042e72a
    FDIV float ptr [ESP + 0x98]         ; 0042e72c
    FXCH                                ; 0042e733
    FMUL ST1                            ; 0042e735
    FLD float ptr [ESP + 0x40]          ; 0042e737
    FMUL ST2                            ; 0042e73b
    FLD float ptr [ESP + 0x44]          ; 0042e73d
    FMULP ST3                           ; 0042e741
    LEA EDI,[ESP + 0x60]                ; 0042e743
    LEA ESI,[ESP + 0x30]                ; 0042e747
    FXCH                                ; 0042e74b
    FSTP float ptr [ESP + 0x30]         ; 0042e74d
    FSTP float ptr [ESP + 0x34]         ; 0042e751
    FSTP float ptr [ESP + 0x38]         ; 0042e755
    MOVSD ES:EDI,ESI                    ; 0042e759
    MOVSD ES:EDI,ESI                    ; 0042e75a
    MOVSD ES:EDI,ESI                    ; 0042e75b
    LEA EAX,[ESP + 0x60]                ; 0042e75c
    LEA ESI,[EDX + 0x8]                 ; 0042e760
    CMP ESI,EAX                         ; 0042e763
    JZ 0x0042e77b                       ; 0042e765
        ;   XREF to: 0042e77b (CONDITIONAL_JUMP)  ; LAB_0042e77b
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042e767
    MOV dword ptr [ESI],EAX             ; 0042e76b
    MOV EAX,dword ptr [ESP + 0x64]      ; 0042e76d
    MOV dword ptr [ESI + 0x4],EAX       ; 0042e771
    MOV EAX,dword ptr [ESP + 0x68]      ; 0042e774
    MOV dword ptr [ESI + 0x8],EAX       ; 0042e778
    MOV EAX,dword ptr [ESP + 0xac]      ; 0042e77b
        ;   Label: LAB_0042e77b
    IMUL EAX,dword ptr [EAX + 0x4],0x30 ; 0042e782
    ADD EAX,dword ptr [ESP + 0x8c]      ; 0042e786
    PUSH EAX                            ; 0042e78d
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0042e78e
    ADD EAX,0x8                         ; 0042e795
    PUSH EAX                            ; 0042e798
    LEA ESI,[ESP + 0x74]                ; 0042e799
    LEA EDI,[ESP + 0x2c]                ; 0042e79d
    CALL FUN_00583260                   ; 0042e7a1
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined FUN_00583260()
    ADD ESP,0x8                         ; 0042e7a6
    LEA EAX,[ESP + 0x24]                ; 0042e7a9
    LEA ESI,[ESP + 0x6c]                ; 0042e7ad
    PUSH EAX                            ; 0042e7b1
    MOVSD ES:EDI,ESI                    ; 0042e7b2
    MOVSD ES:EDI,ESI                    ; 0042e7b3
    MOVSD ES:EDI,ESI                    ; 0042e7b4
    PUSH EBX                            ; 0042e7b5
    LEA ESI,[ESP + 0x8]                 ; 0042e7b6
    LEA EDI,[ESP + 0x5c]                ; 0042e7ba
    CALL FUN_00408b80                   ; 0042e7be
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x8]                 ; 0042e7c3
    ADD ESP,0x8                         ; 0042e7c7
    MOVSD ES:EDI,ESI                    ; 0042e7ca
    MOVSD ES:EDI,ESI                    ; 0042e7cb
    MOVSD ES:EDI,ESI                    ; 0042e7cc
    MOV EAX,dword ptr [EBX + 0x33a0]    ; 0042e7cd
    DEC EAX                             ; 0042e7d3
    IMUL EAX,EAX,0x2a4                  ; 0042e7d4
    ADD EAX,dword ptr [ESP + 0x84]      ; 0042e7da
    LEA ESI,[EAX + 0x20]                ; 0042e7e1
    MOV EAX,dword ptr [ESP + 0x54]      ; 0042e7e4
    MOV dword ptr [ESI],EAX             ; 0042e7e8
    MOV EAX,dword ptr [ESP + 0x58]      ; 0042e7ea
    MOV dword ptr [ESI + 0x4],EAX       ; 0042e7ee
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0042e7f1
    MOV dword ptr [ESI + 0x8],EAX       ; 0042e7f5
    MOV EAX,dword ptr [EBX + 0x33a0]    ; 0042e7f8
    DEC EAX                             ; 0042e7fe
    IMUL EAX,EAX,0x2a4                  ; 0042e7ff
    MOV dword ptr [EBX + EAX*0x1 + 0x3a08],0x0 ; 0042e805
    MOV EAX,dword ptr [ESP + 0xac]      ; 0042e810
    MOV dword ptr [EAX + 0x14],0x3f000000 ; 0042e817
    FLD float ptr [EAX + 0x14]          ; 0042e81e
    MOV EAX,dword ptr [EBX + 0x33a0]    ; 0042e821
    DEC EAX                             ; 0042e827
    IMUL EAX,EAX,0x2a4                  ; 0042e828
    FLD double ptr [0x005b82f6]         ; 0042e82e | DAT_005b82f6
    FXCH                                ; 0042e834
    FMUL ST1                            ; 0042e836
    FSTP float ptr [EBX + EAX*0x1 + 0x39b4] ; 0042e838
    MOV EAX,dword ptr [EBX + 0x33a0]    ; 0042e83f
    DEC EAX                             ; 0042e845
    IMUL EAX,EAX,0x2a4                  ; 0042e846
    MOV EDX,dword ptr [ESP + 0xac]      ; 0042e84c
    MOV ECX,dword ptr [EDX + 0x14]      ; 0042e853
    MOV dword ptr [EBX + EAX*0x1 + 0x39b8],ECX ; 0042e856
    MOV EAX,dword ptr [EBX + 0x33a0]    ; 0042e85d
    DEC EAX                             ; 0042e863
    IMUL EAX,EAX,0x2a4                  ; 0042e864
    FMUL float ptr [EDX + 0x14]         ; 0042e86a
    FSTP float ptr [EBX + EAX*0x1 + 0x39bc] ; 0042e86d
    MOV EAX,dword ptr [EBX + 0x33a0]    ; 0042e874
    DEC EAX                             ; 0042e87a
    IMUL EAX,EAX,0x2a4                  ; 0042e87b
    MOV EDX,dword ptr [EBX + 0x33a4]    ; 0042e881
    MOV dword ptr [EBX + EAX*0x1 + 0x3a04],EDX ; 0042e887
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0042e88e
    INC EAX                             ; 0042e895
    MOV EDX,dword ptr [ESP + 0x94]      ; 0042e896
    MOV dword ptr [ESP + 0xa8],EAX      ; 0042e89d
    CMP EAX,EDX                         ; 0042e8a4
    JL 0x0042e601                       ; 0042e8a6
        ;   XREF to: 0042e601 (CONDITIONAL_JUMP)  ; LAB_0042e601
    MOV ESP,EBP                         ; 0042e8ac
    POP EBP                             ; 0042e8ae
    POP EDI                             ; 0042e8af
    POP ESI                             ; 0042e8b0
    POP EBX                             ; 0042e8b1
    RET                                 ; 0042e8b2


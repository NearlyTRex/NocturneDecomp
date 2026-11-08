; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004764c0(int param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
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
;
; XREF[1]:
;   FUN_00535ec0 at 00535ecf
;
; Referenced Globals:
;   undefined4 DAT_005d1d27
;   undefined4 DAT_005d1d2b
;   undefined4 DAT_00613888
;
; Called Functions:
;   FUN_00472af0
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004764c0
        ;   Label: FUN_004764c0
    PUSH ESI                            ; 004764c1
    PUSH EDI                            ; 004764c2
    PUSH EBP                            ; 004764c3
    MOV EBP,ESP                         ; 004764c4
    SUB ESP,0x84                        ; 004764c6
    AND ESP,0xfffffff8                  ; 004764cc
    MOV EDX,dword ptr [EBP + 0x18]      ; 004764cf
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004764d2
    MOV ECX,dword ptr [EBP + 0x14]      ; 004764d5
    FLD float ptr [EDX]                 ; 004764d8
    FSUB float ptr [ECX + 0x10]         ; 004764da
    FLD float ptr [0x005d1d27]          ; 004764dd | DAT_005d1d27
    FLD float ptr [ECX + 0x28]          ; 004764e3
    FMUL ST1                            ; 004764e6
    FLD1                                ; 004764e8
    FDIVRP                              ; 004764ea
    FLD float ptr [EDX + 0x4]           ; 004764ec
    FSUB float ptr [ECX + 0x14]         ; 004764ef
    FLD float ptr [ECX + 0x2c]          ; 004764f2
    FMUL ST3                            ; 004764f5
    FLD1                                ; 004764f7
    FDIVRP                              ; 004764f9
    FXCH ST4                            ; 004764fb
    FMUL ST2                            ; 004764fd
    FLD float ptr [EDX + 0x8]           ; 004764ff
    FSUB float ptr [ECX + 0x18]         ; 00476502
    FXCH                                ; 00476505
    FSTP float ptr [ESP + 0x28]         ; 00476507
    FLD float ptr [ECX + 0x30]          ; 0047650b
    FMULP ST4                           ; 0047650e
    FLD1                                ; 00476510
    FDIVRP ST4,ST0                      ; 00476512
    FXCH                                ; 00476514
    FMUL ST4                            ; 00476516
    FLD float ptr [EAX]                 ; 00476518
    FSUB float ptr [ECX + 0x10]         ; 0047651a
    FXCH ST2                            ; 0047651d
    FMUL ST4                            ; 0047651f
    FXCH ST2                            ; 00476521
    FMULP ST3                           ; 00476523
    FSTP float ptr [ESP + 0x78]         ; 00476525
    FLD float ptr [EAX + 0x8]           ; 00476529
    FLD float ptr [EAX + 0x4]           ; 0047652c
    FSUB float ptr [ECX + 0x14]         ; 0047652f
    FXCH                                ; 00476532
    FSUB float ptr [ECX + 0x18]         ; 00476534
    FXCH                                ; 00476537
    FMULP ST5                           ; 00476539
    FMULP ST3                           ; 0047653b
    FLD float ptr [EAX]                 ; 0047653d
    FLD float ptr [EAX + 0x4]           ; 0047653f
    FLD float ptr [EAX + 0x8]           ; 00476542
    MOV EBX,0x1                         ; 00476545
    LEA EDI,[ESP + 0x10]                ; 0047654a
    LEA ESI,[ESP + 0x4]                 ; 0047654e
    FXCH ST2                            ; 00476552
    FSUB float ptr [EDX]                ; 00476554
    FXCH                                ; 00476556
    FSUB float ptr [EDX + 0x4]          ; 00476558
    FXCH ST2                            ; 0047655b
    FSUB float ptr [EDX + 0x8]          ; 0047655d
    FXCH                                ; 00476560
    FSTP float ptr [ESP + 0x4]          ; 00476562
    FXCH                                ; 00476566
    FSTP float ptr [ESP + 0x8]          ; 00476568
    FSTP float ptr [ESP + 0xc]          ; 0047656c
    MOVSD ES:EDI,ESI                    ; 00476570
    MOVSD ES:EDI,ESI                    ; 00476571
    MOVSD ES:EDI,ESI                    ; 00476572
    FSTP float ptr [ESP + 0x2c]         ; 00476573
    CALL FUN_005b7ff0                   ; 00476577
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST2                            ; 0047657c
    CALL FUN_005b7ff0                   ; 0047657e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 00476583
    CALL FUN_005b7ff0                   ; 00476585
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FLD float ptr [ESP + 0x28]          ; 0047658a
    FLD float ptr [ESP + 0x78]          ; 0047658e
    FLD float ptr [ESP + 0x2c]          ; 00476592
    FXCH ST5                            ; 00476596
    FISTP dword ptr [ESP + 0x34]        ; 00476598
    FXCH ST3                            ; 0047659c
    FISTP dword ptr [ESP + 0x38]        ; 0047659e
    FXCH                                ; 004765a2
    FISTP dword ptr [ESP + 0x30]        ; 004765a4
    CALL FUN_005b7ff0                   ; 004765a8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 004765ad
    CALL FUN_005b7ff0                   ; 004765af
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST2                            ; 004765b4
    CALL FUN_005b7ff0                   ; 004765b6
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    MOV EDX,dword ptr [ESP + 0x34]      ; 004765bb
    FXCH                                ; 004765bf
    FISTP dword ptr [ESP + 0x60]        ; 004765c1
    FXCH                                ; 004765c5
    FISTP dword ptr [ESP + 0x64]        ; 004765c7
    MOV EAX,dword ptr [ESP + 0x60]      ; 004765cb
    FISTP dword ptr [ESP + 0x6c]        ; 004765cf
    CMP EAX,EDX                         ; 004765d3
    JNZ 0x004765e5                      ; 004765d5
        ;   XREF to: 004765e5 (CONDITIONAL_JUMP)  ; LAB_004765e5
    MOV EAX,dword ptr [ESP + 0x64]      ; 004765d7
    CMP EAX,dword ptr [ESP + 0x38]      ; 004765db
    JZ 0x004768a6                       ; 004765df
        ;   XREF to: 004768a6 (CONDITIONAL_JUMP)  ; LAB_004768a6
    FLD float ptr [ESP + 0x14]          ; 004765e5
        ;   Label: LAB_004765e5
    FMUL ST0                            ; 004765e9
    FLD float ptr [ESP + 0x10]          ; 004765eb
    FMUL ST0                            ; 004765ef
    FADDP                               ; 004765f1
    FLD float ptr [ESP + 0x18]          ; 004765f3
    FMUL ST0                            ; 004765f7
    FADDP                               ; 004765f9
    FSQRT                               ; 004765fb
    FST float ptr [ESP]                 ; 004765fd
    FLDZ                                ; 00476600
    FCOMPP                              ; 00476602
    FNSTSW AX                           ; 00476604
    SAHF                                ; 00476606
    JNC 0x004768b9                      ; 00476607
        ;   XREF to: 004768b9 (CONDITIONAL_JUMP)  ; LAB_004768b9
    FLD float ptr [ESP + 0x14]          ; 0047660d
    FABS                                ; 00476611
    FLD float ptr [ESP + 0x18]          ; 00476613
    FABS                                ; 00476617
    FLD float ptr [ESP + 0x10]          ; 00476619
    FLD ST0                             ; 0047661d
    FABS                                ; 0047661f
    FLD float ptr [0x005d1d2b]          ; 00476621 | DAT_005d1d2b
    FDIV float ptr [ESP]                ; 00476627
    FXCH                                ; 0047662a
    FMUL ST1                            ; 0047662c
    FXCH ST4                            ; 0047662e
    FMUL ST1                            ; 00476630
    FXCH ST3                            ; 00476632
    FMULP                               ; 00476634
    FXCH ST3                            ; 00476636
    CALL FUN_005b7ff0                   ; 00476638
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x58]        ; 0047663d
    FLDZ                                ; 00476641
    FXCH ST2                            ; 00476643
    CALL FUN_005b7ff0                   ; 00476645
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST3                            ; 0047664a
    CALL FUN_005b7ff0                   ; 0047664c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST3                            ; 00476651
    FISTP dword ptr [ESP + 0x5c]        ; 00476653
    FXCH ST2                            ; 00476657
    FISTP dword ptr [ESP + 0x54]        ; 00476659
    FCOMPP                              ; 0047665d
    FNSTSW AX                           ; 0047665f
    SAHF                                ; 00476661
    JA 0x004768c4                       ; 00476662
        ;   XREF to: 004768c4 (CONDITIONAL_JUMP)  ; LAB_004768c4
    MOV EAX,dword ptr [ESP + 0x34]      ; 00476668
    MOV ESI,dword ptr [ESP + 0x60]      ; 0047666c
    SUB EAX,ESI                         ; 00476670
    MOV ECX,0x1                         ; 00476672
    ADD EBX,EAX                         ; 00476677
    LEA EAX,[ESI + ECX*0x1]             ; 00476679
    MOV dword ptr [ESP + 0x80],EAX      ; 0047667c
    FILD dword ptr [ESP + 0x80]         ; 00476683
    FSUB float ptr [ESP + 0x28]         ; 0047668a
    MOV dword ptr [ESP + 0x4c],ECX      ; 0047668e
    FSTP float ptr [ESP + 0x3c]         ; 00476692
        ;   Label: LAB_00476692
    FLD float ptr [ESP + 0x14]          ; 00476696
    FLDZ                                ; 0047669a
    FCOMPP                              ; 0047669c
    FNSTSW AX                           ; 0047669e
    SAHF                                ; 004766a0
    JA 0x004768f2                       ; 004766a1
        ;   XREF to: 004768f2 (CONDITIONAL_JUMP)  ; LAB_004768f2
    MOV EAX,dword ptr [ESP + 0x38]      ; 004766a7
    MOV ESI,dword ptr [ESP + 0x64]      ; 004766ab
    SUB EAX,ESI                         ; 004766af
    MOV ECX,0x1                         ; 004766b1
    ADD EBX,EAX                         ; 004766b6
    LEA EAX,[ESI + ECX*0x1]             ; 004766b8
    MOV dword ptr [ESP + 0x80],EAX      ; 004766bb
    FILD dword ptr [ESP + 0x80]         ; 004766c2
    FSUB float ptr [ESP + 0x78]         ; 004766c9
    MOV dword ptr [ESP + 0x44],ECX      ; 004766cd
    FSTP float ptr [ESP + 0x40]         ; 004766d1
        ;   Label: LAB_004766d1
    FLD float ptr [ESP + 0x18]          ; 004766d5
    FLDZ                                ; 004766d9
    FCOMPP                              ; 004766db
    FNSTSW AX                           ; 004766dd
    SAHF                                ; 004766df
    JA 0x00476920                       ; 004766e0
        ;   XREF to: 00476920 (CONDITIONAL_JUMP)  ; LAB_00476920
    MOV EAX,dword ptr [ESP + 0x30]      ; 004766e6
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004766ea
    SUB EAX,ESI                         ; 004766ee
    MOV ECX,0x1                         ; 004766f0
    ADD EBX,EAX                         ; 004766f5
    LEA EAX,[ESI + ECX*0x1]             ; 004766f7
    MOV dword ptr [ESP + 0x80],EAX      ; 004766fa
    FILD dword ptr [ESP + 0x80]         ; 00476701
    FSUB float ptr [ESP + 0x2c]         ; 00476708
    MOV dword ptr [ESP + 0x48],ECX      ; 0047670c
    FSTP float ptr [ESP + 0x7c]         ; 00476710
        ;   Label: LAB_00476710
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00476714
    MOV dword ptr [ESP + 0x80],EAX      ; 00476718
    FILD dword ptr [ESP + 0x80]         ; 0047671f
    FLD ST0                             ; 00476726
    FMUL float ptr [ESP + 0x3c]         ; 00476728
    MOV EAX,dword ptr [ESP + 0x58]      ; 0047672c
    FXCH                                ; 00476730
    FLD float ptr [ESP + 0x7c]          ; 00476732
    FXCH                                ; 00476736
    FMUL ST1                            ; 00476738
    MOV dword ptr [ESP + 0x80],EAX      ; 0047673a
    MOV EAX,dword ptr [ESP + 0x54]      ; 00476741
    FILD dword ptr [ESP + 0x80]         ; 00476745
    MOV dword ptr [ESP + 0x80],EAX      ; 0047674c
    FLD ST0                             ; 00476753
    FMUL float ptr [ESP + 0x40]         ; 00476755
    FILD dword ptr [ESP + 0x80]         ; 00476759
    FLD ST0                             ; 00476760
    FMUL float ptr [ESP + 0x3c]         ; 00476762
    FXCH                                ; 00476766
    FMUL float ptr [ESP + 0x40]         ; 00476768
    FXCH ST2                            ; 0047676c
    FSUBP ST6,ST0                       ; 0047676e
    FXCH ST2                            ; 00476770
    FMULP ST4                           ; 00476772
    FXCH ST4                            ; 00476774
    CALL FUN_005b7ff0                   ; 00476776
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST4                            ; 0047677b
    FSUBP ST2,ST0                       ; 0047677d
    FXCH ST3                            ; 0047677f
    FISTP dword ptr [ESP + 0x68]        ; 00476781
    CALL FUN_005b7ff0                   ; 00476785
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0047678a
    FSUBP ST2,ST0                       ; 0047678c
    FISTP dword ptr [ESP + 0x70]        ; 0047678e
    CALL FUN_005b7ff0                   ; 00476792
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x74]        ; 00476797
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0047679b
        ;   Label: LAB_0047679b
    MOV EDX,EAX                         ; 0047679f
    SAR EDX,0x1f                        ; 004767a1
    SHL EDX,0x3                         ; 004767a4
    SBB EAX,EDX                         ; 004767a7
    SAR EAX,0x3                         ; 004767a9
    PUSH EAX                            ; 004767ac
    MOV EAX,dword ptr [ESP + 0x68]      ; 004767ad
    MOV EDX,EAX                         ; 004767b1
    SAR EDX,0x1f                        ; 004767b3
    SHL EDX,0x3                         ; 004767b6
    SBB EAX,EDX                         ; 004767b9
    SAR EAX,0x3                         ; 004767bb
    PUSH EAX                            ; 004767be
    MOV EAX,dword ptr [ESP + 0x68]      ; 004767bf
    MOV EDX,EAX                         ; 004767c3
    SAR EDX,0x1f                        ; 004767c5
    SHL EDX,0x3                         ; 004767c8
    SBB EAX,EDX                         ; 004767cb
    SAR EAX,0x3                         ; 004767cd
    PUSH EAX                            ; 004767d0
    MOV EDI,dword ptr [EBP + 0x14]      ; 004767d1
    PUSH EDI                            ; 004767d4
    CALL FUN_00472af0                   ; 004767d5
        ;   XREF to: 00472af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00472af0()
    MOV ECX,EAX                         ; 004767da
    ADD ESP,0x10                        ; 004767dc
    TEST EAX,EAX                        ; 004767df
    JZ 0x0047683e                       ; 004767e1
        ;   XREF to: 0047683e (CONDITIONAL_JUMP)  ; LAB_0047683e
    MOV EAX,dword ptr [ESP + 0x60]      ; 004767e3
    MOV EDX,EAX                         ; 004767e7
    MOV ESI,0x8                         ; 004767e9
    SAR EDX,0x1f                        ; 004767ee
    IDIV ESI                            ; 004767f1
    MOV EAX,dword ptr [ESP + 0x64]      ; 004767f3
    MOV EDI,EDX                         ; 004767f7
    MOV EDX,EAX                         ; 004767f9
    SAR EDX,0x1f                        ; 004767fb
    IDIV ESI                            ; 004767fe
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00476800
    MOV ESI,EDX                         ; 00476804
    MOV EDX,EAX                         ; 00476806
    MOV dword ptr [ESP + 0x80],0x8      ; 00476808
    SAR EDX,0x1f                        ; 00476813
    IDIV dword ptr [ESP + 0x80]         ; 00476816
    MOV EAX,dword ptr [ECX]             ; 0047681d
    TEST EAX,EAX                        ; 0047681f
    JZ 0x0047683e                       ; 00476821
        ;   XREF to: 0047683e (CONDITIONAL_JUMP)  ; LAB_0047683e
    SHL EDX,0x3                         ; 00476823
    ADD EDX,ESI                         ; 00476826
    ADD EAX,EDX                         ; 00476828
    XOR EDX,EDX                         ; 0047682a
    MOV DL,byte ptr [EAX]               ; 0047682c
    XOR EAX,EAX                         ; 0047682e
    MOV AL,byte ptr [EDI + 0x613888]    ; 00476830 | DAT_00613888
    TEST EDX,EAX                        ; 00476836
    JNZ 0x0047694e                      ; 00476838
        ;   XREF to: 0047694e (CONDITIONAL_JUMP)  ; LAB_0047694e
    DEC EBX                             ; 0047683e
        ;   Label: LAB_0047683e
    TEST EBX,EBX                        ; 0047683f
    JLE 0x004768b9                      ; 00476841
        ;   XREF to: 004768b9 (CONDITIONAL_JUMP)  ; LAB_004768b9
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00476843
    MOV ECX,dword ptr [ESP + 0x48]      ; 00476847
    MOV EAX,dword ptr [ESP + 0x70]      ; 0047684b
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0047684f
    MOV EDI,dword ptr [ESP + 0x58]      ; 00476853
    ADD ESI,ECX                         ; 00476857
    ADD EAX,EDX                         ; 00476859
    MOV ECX,dword ptr [ESP + 0x74]      ; 0047685b
    MOV EDX,dword ptr [ESP + 0x68]      ; 0047685f
    SUB ECX,EDI                         ; 00476863
    TEST EDX,EDX                        ; 00476865
    JL 0x0047695c                       ; 00476867
        ;   XREF to: 0047695c (CONDITIONAL_JUMP)  ; LAB_0047695c
    MOV EDI,dword ptr [ESP + 0x70]      ; 0047686d
    TEST EDI,EDI                        ; 00476871
    JL 0x00476964                       ; 00476873
        ;   XREF to: 00476964 (CONDITIONAL_JUMP)  ; LAB_00476964
    MOV EAX,dword ptr [ESP + 0x44]      ; 00476879
    MOV EDX,dword ptr [ESP + 0x64]      ; 0047687d
    MOV ECX,dword ptr [ESP + 0x68]      ; 00476881
    ADD EDX,EAX                         ; 00476885
    MOV EAX,dword ptr [ESP + 0x58]      ; 00476887
    MOV ESI,EDI                         ; 0047688b
    SUB ECX,EAX                         ; 0047688d
    MOV EAX,dword ptr [ESP + 0x54]      ; 0047688f
    MOV dword ptr [ESP + 0x64],EDX      ; 00476893
    SUB ESI,EAX                         ; 00476897
    MOV dword ptr [ESP + 0x68],ECX      ; 00476899
    MOV dword ptr [ESP + 0x70],ESI      ; 0047689d
    JMP 0x0047679b                      ; 004768a1
        ;   XREF to: 0047679b (UNCONDITIONAL_JUMP)  ; LAB_0047679b
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004768a6
        ;   Label: LAB_004768a6
    CMP EAX,dword ptr [ESP + 0x30]      ; 004768aa
    JNZ 0x004765e5                      ; 004768ae
        ;   XREF to: 004765e5 (CONDITIONAL_JUMP)  ; LAB_004765e5
    JMP 0x0047679b                      ; 004768b4
        ;   XREF to: 0047679b (UNCONDITIONAL_JUMP)  ; LAB_0047679b
    XOR EDX,EDX                         ; 004768b9
        ;   Label: LAB_004768b9
    MOV EAX,EDX                         ; 004768bb
    MOV ESP,EBP                         ; 004768bd
    POP EBP                             ; 004768bf
    POP EDI                             ; 004768c0
    POP ESI                             ; 004768c1
    POP EBX                             ; 004768c2
    RET                                 ; 004768c3
    MOV EAX,dword ptr [ESP + 0x60]      ; 004768c4
        ;   Label: LAB_004768c4
    SUB EAX,dword ptr [ESP + 0x34]      ; 004768c8
    ADD EBX,EAX                         ; 004768cc
    MOV EAX,dword ptr [ESP + 0x60]      ; 004768ce
    MOV dword ptr [ESP + 0x80],EAX      ; 004768d2
    MOV EDI,0xffffffff                  ; 004768d9
    FILD dword ptr [ESP + 0x80]         ; 004768de
    FSUBR float ptr [ESP + 0x28]        ; 004768e5
    MOV dword ptr [ESP + 0x4c],EDI      ; 004768e9
    JMP 0x00476692                      ; 004768ed
        ;   XREF to: 00476692 (UNCONDITIONAL_JUMP)  ; LAB_00476692
    MOV EAX,dword ptr [ESP + 0x64]      ; 004768f2
        ;   Label: LAB_004768f2
    SUB EAX,dword ptr [ESP + 0x38]      ; 004768f6
    ADD EBX,EAX                         ; 004768fa
    MOV EAX,dword ptr [ESP + 0x64]      ; 004768fc
    MOV dword ptr [ESP + 0x80],EAX      ; 00476900
    MOV EDI,0xffffffff                  ; 00476907
    FILD dword ptr [ESP + 0x80]         ; 0047690c
    FSUBR float ptr [ESP + 0x78]        ; 00476913
    MOV dword ptr [ESP + 0x44],EDI      ; 00476917
    JMP 0x004766d1                      ; 0047691b
        ;   XREF to: 004766d1 (UNCONDITIONAL_JUMP)  ; LAB_004766d1
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00476920
        ;   Label: LAB_00476920
    SUB EAX,dword ptr [ESP + 0x30]      ; 00476924
    ADD EBX,EAX                         ; 00476928
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0047692a
    MOV dword ptr [ESP + 0x80],EAX      ; 0047692e
    MOV EDI,0xffffffff                  ; 00476935
    FILD dword ptr [ESP + 0x80]         ; 0047693a
    FSUBR float ptr [ESP + 0x2c]        ; 00476941
    MOV dword ptr [ESP + 0x48],EDI      ; 00476945
    JMP 0x00476710                      ; 00476949
        ;   XREF to: 00476710 (UNCONDITIONAL_JUMP)  ; LAB_00476710
    MOV EDX,0x1                         ; 0047694e
        ;   Label: LAB_0047694e
    MOV EAX,EDX                         ; 00476953
    MOV ESP,EBP                         ; 00476955
    POP EBP                             ; 00476957
    POP EDI                             ; 00476958
    POP ESI                             ; 00476959
    POP EBX                             ; 0047695a
    RET                                 ; 0047695b
    MOV EDI,dword ptr [ESP + 0x74]      ; 0047695c
        ;   Label: LAB_0047695c
    TEST EDI,EDI                        ; 00476960
    JL 0x00476975                       ; 00476962
        ;   XREF to: 00476975 (CONDITIONAL_JUMP)  ; LAB_00476975
    MOV dword ptr [ESP + 0x74],ECX      ; 00476964
        ;   Label: LAB_00476964
    MOV dword ptr [ESP + 0x70],EAX      ; 00476968
    MOV dword ptr [ESP + 0x6c],ESI      ; 0047696c
    JMP 0x0047679b                      ; 00476970
        ;   XREF to: 0047679b (UNCONDITIONAL_JUMP)  ; LAB_0047679b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00476975
        ;   Label: LAB_00476975
    MOV EDX,dword ptr [ESP + 0x60]      ; 00476979
    MOV ECX,dword ptr [ESP + 0x68]      ; 0047697d
    ADD EDX,EAX                         ; 00476981
    ADD ECX,dword ptr [ESP + 0x5c]      ; 00476983
    MOV EAX,dword ptr [ESP + 0x54]      ; 00476987
    MOV dword ptr [ESP + 0x60],EDX      ; 0047698b
    LEA ESI,[EDI + EAX*0x1]             ; 0047698f
    MOV dword ptr [ESP + 0x68],ECX      ; 00476992
    MOV dword ptr [ESP + 0x74],ESI      ; 00476996
    JMP 0x0047679b                      ; 0047699a
        ;   XREF to: 0047679b (UNCONDITIONAL_JUMP)  ; LAB_0047679b


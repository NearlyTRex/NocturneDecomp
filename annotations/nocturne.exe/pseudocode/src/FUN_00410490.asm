; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410490(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_00410478 = 004109d2
;   string s_%s_confused_while_walking_to_scr_0057862e
;   undefined4 DAT_00578658
;   undefined4 DAT_00578660
;   undefined4 DAT_00578668
;   undefined4 DAT_005acf40
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005b7650
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005b9354
;   undefined4 DAT_007642e8
;   undefined4 DAT_0076431c
;   undefined4 DAT_00764320
;   undefined4 DAT_0076432c
;   undefined4 DAT_0077ad0c
;   ... and 2 more
;
; Called Functions:
;   FUN_0040a240
;   FUN_0040dda0
;   FUN_00410bf0
;   FUN_00411010
;   FUN_004259a0
;   FUN_004259f0
;   FUN_00428c00
;   FUN_0042a150
;   FUN_0043ac60
;   FUN_0047dc30
;   FUN_0048afe0
;   FUN_0048c590
;   FUN_004e1660
;   FUN_004e16b0
;   FUN_0051b8a0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410490
        ;   Label: FUN_00410490
    PUSH ESI                            ; 00410491
    PUSH EBP                            ; 00410492
    SUB ESP,0x98                        ; 00410493
    MOV EBP,dword ptr [ESP + 0xa8]      ; 00410499
    MOV EDX,dword ptr [EBP + 0x1fb34]   ; 004104a0
    LEA EBX,[EBP + 0x150]               ; 004104a6
    TEST EDX,EDX                        ; 004104ac
    JZ 0x004104f3                       ; 004104ae
        ;   XREF to: 004104f3 (CONDITIONAL_JUMP)  ; LAB_004104f3
    LEA EAX,[EBP + 0x1faa0]             ; 004104b0
    PUSH EAX                            ; 004104b6
    MOV ECX,dword ptr [0x005b7650]      ; 004104b7 | DAT_005b7650
    PUSH ECX                            ; 004104bd
    CALL FUN_0047dc30                   ; 004104be
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0047dc30()
    ADD ESP,0x8                         ; 004104c3
    TEST EAX,EAX                        ; 004104c6
    JZ 0x004104d7                       ; 004104c8
        ;   XREF to: 004104d7 (CONDITIONAL_JUMP)  ; LAB_004104d7
    PUSH 0x1                            ; 004104ca
    PUSH 0x7                            ; 004104cc
    PUSH EBX                            ; 004104ce
    CALL FUN_004e16b0                   ; 004104cf
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 004104d4
    CMP dword ptr [EBP + 0x1fb34],0x0   ; 004104d7
        ;   Label: LAB_004104d7
    JNZ 0x00410530                      ; 004104de
        ;   XREF to: 00410530 (CONDITIONAL_JUMP)  ; LAB_00410530
    CMP dword ptr [EBP + 0xbc90],0x2    ; 004104e0
    JNZ 0x00410530                      ; 004104e7
        ;   XREF to: 00410530 (CONDITIONAL_JUMP)  ; LAB_00410530
    ADD ESP,0x98                        ; 004104e9
        ;   Label: LAB_004104e9
    POP EBP                             ; 004104ef
    POP ESI                             ; 004104f0
    POP EBX                             ; 004104f1
    RET                                 ; 004104f2
    LEA EAX,[EBP + 0x1fa3c]             ; 004104f3
        ;   Label: LAB_004104f3
    PUSH EAX                            ; 004104f9
    MOV ESI,dword ptr [0x005b7650]      ; 004104fa | DAT_005b7650
    PUSH ESI                            ; 00410500
    CALL FUN_0047dc30                   ; 00410501
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0047dc30()
    ADD ESP,0x8                         ; 00410506
    TEST EAX,EAX                        ; 00410509
    JZ 0x004104d7                       ; 0041050b
        ;   XREF to: 004104d7 (CONDITIONAL_JUMP)  ; LAB_004104d7
    PUSH 0x1                            ; 0041050d
    PUSH 0x6                            ; 0041050f
    PUSH EBX                            ; 00410511
    MOV dword ptr [EBP + 0x1fb34],0x1   ; 00410512
    CALL FUN_004e16b0                   ; 0041051c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 00410521
    MOV dword ptr [EBP + 0x1fb38],0x1   ; 00410524
    JMP 0x004104d7                      ; 0041052e
        ;   XREF to: 004104d7 (UNCONDITIONAL_JUMP)  ; LAB_004104d7
    PUSH dword ptr [ESP + 0xac]         ; 00410530
        ;   Label: LAB_00410530
    PUSH EBP                            ; 00410537
    CALL FUN_004259f0                   ; 00410538
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004259f0()
    ADD ESP,0x8                         ; 0041053d
    TEST EAX,EAX                        ; 00410540
    JZ 0x004104e9                       ; 00410542
        ;   XREF to: 004104e9 (CONDITIONAL_JUMP)  ; LAB_004104e9
    CMP dword ptr [EBP + 0xbc90],0x2    ; 00410544
    JZ 0x004107ff                       ; 0041054b
        ;   XREF to: 004107ff (CONDITIONAL_JUMP)  ; LAB_004107ff
    FLD float ptr [ESP + 0xac]          ; 00410551
        ;   Label: LAB_00410551
    FMUL double ptr [0x00578658]        ; 00410558 | DAT_00578658
    MOV EAX,[0x005b9354]                ; 0041055e | DAT_005b9354
    FSTP float ptr [EBP + 0x2430]       ; 00410563
    CMP dword ptr [EAX + 0x228],0x0     ; 00410569 | DAT_01c77814
    JZ 0x00410584                       ; 00410570
        ;   XREF to: 00410584 (CONDITIONAL_JUMP)  ; LAB_00410584
    FLD float ptr [EBP + 0x2430]        ; 00410572
    FMUL double ptr [0x00578660]        ; 00410578 | DAT_00578660
    FSTP float ptr [EBP + 0x2430]       ; 0041057e
    FLD float ptr [EBP + 0xbc8c]        ; 00410584
        ;   Label: LAB_00410584
    FSUB float ptr [ESP + 0xac]         ; 0041058a
    FST float ptr [EBP + 0xbc8c]        ; 00410591
    FLDZ                                ; 00410597
    FCOMPP                              ; 00410599
    FNSTSW AX                           ; 0041059b
    SAHF                                ; 0041059d
    JBE 0x004105aa                      ; 0041059e
        ;   XREF to: 004105aa (CONDITIONAL_JUMP)  ; LAB_004105aa
    MOV dword ptr [EBP + 0xbc8c],0x0    ; 004105a0
    LEA EAX,[EBP + 0x23a4]              ; 004105aa
        ;   Label: LAB_004105aa
    PUSH dword ptr [ESP + 0xac]         ; 004105b0
    MOV dword ptr [EAX + 0x8],0x0       ; 004105b7
    PUSH EBP                            ; 004105be
    MOV EDX,dword ptr [EAX + 0x8]       ; 004105bf
    MOV dword ptr [EAX + 0x4],EDX       ; 004105c2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004105c5
    MOV dword ptr [EAX],EDX             ; 004105c8
    CALL FUN_00411010                   ; 004105ca
        ;   XREF to: 00411010 (UNCONDITIONAL_CALL)  ; undefined FUN_00411010()
    MOV EBX,dword ptr [EBP + 0x1fb34]   ; 004105cf
    ADD ESP,0x8                         ; 004105d5
    TEST EBX,EBX                        ; 004105d8
    JZ 0x004104e9                       ; 004105da
        ;   XREF to: 004104e9 (CONDITIONAL_JUMP)  ; LAB_004104e9
    PUSH EDI                            ; 004105e0
    PUSH dword ptr [ESP + 0xb0]         ; 004105e1
    PUSH EBP                            ; 004105e8
    CALL FUN_00428c00                   ; 004105e9
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined FUN_00428c00()
    MOV EBX,EAX                         ; 004105ee
    ADD ESP,0x8                         ; 004105f0
    LEA EAX,[EBP + 0x150]               ; 004105f3
    TEST EBX,EBX                        ; 004105f9
    JZ 0x00410a58                       ; 004105fb
        ;   XREF to: 00410a58 (CONDITIONAL_JUMP)  ; LAB_00410a58
    MOV EBX,dword ptr [EBP + 0x25a8]    ; 00410601
    CMP EBX,0x2                         ; 00410607
    JNC 0x00410840                      ; 0041060a
        ;   XREF to: 00410840 (CONDITIONAL_JUMP)  ; LAB_00410840
    CMP EBX,0x1                         ; 00410610
    JNZ 0x00410847                      ; 00410613
        ;   XREF to: 00410847 (CONDITIONAL_JUMP)  ; LAB_00410847
    PUSH EBX                            ; 00410619
    PUSH EBX                            ; 0041061a
    PUSH EAX                            ; 0041061b
        ;   Label: LAB_0041061b
    CALL FUN_004e16b0                   ; 0041061c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
        ;   Label: LAB_0041061c
    ADD ESP,0xc                         ; 00410621
        ;   Label: LAB_00410621
    FLD float ptr [ESP + 0xb0]          ; 00410624
        ;   Label: default
    XOR EDX,EDX                         ; 0041062b
    LEA EBX,[EBP + 0x23a4]              ; 0041062d
    MOV dword ptr [ESP + 0x3c],EDX      ; 00410633
    MOV dword ptr [ESP + 0x40],EDX      ; 00410637
    MOV dword ptr [ESP + 0x44],EDX      ; 0041063b
    FMUL double ptr [0x00578668]        ; 0041063f | DAT_00578668
    MOV EAX,dword ptr [EBX]             ; 00410645
    MOV dword ptr [ESP + 0x3c],EAX      ; 00410647
    MOV EAX,dword ptr [EBX + 0x4]       ; 0041064b
    MOV dword ptr [ESP + 0x40],EAX      ; 0041064e
    MOV EAX,dword ptr [EBX + 0x8]       ; 00410652
    MOV dword ptr [ESP + 0x44],EAX      ; 00410655
    MOV dword ptr [EBX + 0x8],EDX       ; 00410659
    MOV EAX,dword ptr [EBX + 0x8]       ; 0041065c
    MOV dword ptr [EBX + 0x4],EAX       ; 0041065f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00410662
    MOV dword ptr [EBX],EAX             ; 00410665
    FLD float ptr [EBP + 0x2424]        ; 00410667
    FXCH                                ; 0041066d
    FSUBR ST0,ST1                       ; 0041066f
    LEA EAX,[EBP + 0x2420]              ; 00410671
    FSTP ST1                            ; 00410677
    FSTP float ptr [EBP + 0x2424]       ; 00410679
    FLD float ptr [EAX]                 ; 0041067f
    FMUL float ptr [ESP + 0xb0]         ; 00410681
    FSTP float ptr [ESP + 0x6c]         ; 00410688
    FLD float ptr [EAX + 0x4]           ; 0041068c
    FMUL float ptr [ESP + 0xb0]         ; 0041068f
    FSTP float ptr [ESP + 0x70]         ; 00410696
    FLD float ptr [EAX + 0x8]           ; 0041069a
    FMUL float ptr [ESP + 0xb0]         ; 0041069d
    PUSH EBP                            ; 004106a4
    FLD float ptr [ESP + 0x44]          ; 004106a5
    FLD float ptr [ESP + 0x40]          ; 004106a9
    FADD float ptr [ESP + 0x70]         ; 004106ad
    FLD float ptr [ESP + 0x48]          ; 004106b1
    FXCH                                ; 004106b5
    FSTP float ptr [ESP + 0x40]         ; 004106b7
    FXCH                                ; 004106bb
    FADD float ptr [ESP + 0x74]         ; 004106bd
    FXCH ST2                            ; 004106c1
    FSTP float ptr [ESP + 0x78]         ; 004106c3
    FADD float ptr [ESP + 0x78]         ; 004106c7
    FXCH                                ; 004106cb
    FSTP float ptr [ESP + 0x44]         ; 004106cd
    FSTP float ptr [ESP + 0x48]         ; 004106d1
    CALL FUN_004259a0                   ; 004106d5
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004259a0()
    ADD ESP,0x4                         ; 004106da
    LEA EBX,[EBP + 0x150]               ; 004106dd
    PUSH EBX                            ; 004106e3
    CALL FUN_0051b8a0                   ; 004106e4
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b8a0()
    ADD ESP,0x4                         ; 004106e9
    PUSH 0x51b650                       ; 004106ec | LAB_0051b650
    MOV ESI,dword ptr [0x007642e8]      ; 004106f1 | DAT_007642e8
    PUSH ESI                            ; 004106f7
    LEA EAX,[EBP + 0x1fb04]             ; 004106f8
    PUSH dword ptr [EBP + 0x1fb10]      ; 004106fe
    PUSH EAX                            ; 00410704
    LEA ESI,[ESP + 0x14]                ; 00410705
    CALL FUN_0055d610                   ; 00410709
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d610()
    ADD ESP,0x4                         ; 0041070e
    LEA EAX,[ESP + 0x20]                ; 00410711
    PUSH EAX                            ; 00410715
    LEA EDI,[ESP + 0x24]                ; 00410716
    LEA ESI,[ESP + 0x14]                ; 0041071a
    PUSH EBX                            ; 0041071e
    MOVSD ES:EDI,ESI                    ; 0041071f
    MOVSD ES:EDI,ESI                    ; 00410720
    MOVSD ES:EDI,ESI                    ; 00410721
    MOVSD ES:EDI,ESI                    ; 00410722
    CALL FUN_0051cfd0                   ; 00410723
        ;   XREF to: 0051cfd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051cfd0()
    ADD ESP,0x14                        ; 00410728
    PUSH dword ptr [ESP + 0xb0]         ; 0041072b
    PUSH EBP                            ; 00410732
    MOV EDI,0x40000000                  ; 00410733
    XOR EBX,EBX                         ; 00410738
    CALL FUN_0042a150                   ; 0041073a
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a150()
    ADD ESP,0x8                         ; 0041073f
    LEA ESI,[EBP + 0x20]                ; 00410742
    PUSH 0x40000000                     ; 00410745
        ;   Label: LAB_00410745
    PUSH 0xc0000000                     ; 0041074a
    CALL FUN_0040dda0                   ; 0041074f
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0xa0],EAX      ; 00410754
    FLD float ptr [ESP + 0xa0]          ; 0041075b
    ADD ESP,0x8                         ; 00410762
    INC EBX                             ; 00410765
    PUSH 0x40000000                     ; 00410766
    FSTP float ptr [ESP + 0x4c]         ; 0041076b
    PUSH 0xc0000000                     ; 0041076f
    MOV dword ptr [ESP + 0x54],EDI      ; 00410774
    CALL FUN_0040dda0                   ; 00410778
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0xa0],EAX      ; 0041077d
    MOV EBP,dword ptr [0x005b80f0]      ; 00410784 | DAT_005b80f0
    FLD float ptr [ESP + 0xa0]          ; 0041078a
    ADD ESP,0x8                         ; 00410791
    LEA EAX,[ESP + 0x48]                ; 00410794
    FLD float ptr [ESP + 0x48]          ; 00410798
    FLD float ptr [ESP + 0x4c]          ; 0041079c
    FXCH ST2                            ; 004107a0
    FSTP float ptr [ESP + 0x50]         ; 004107a2
    PUSH 0xffff                         ; 004107a6
    FLD float ptr [ESP + 0x54]          ; 004107ab
    PUSH 0x0                            ; 004107af
    FXCH                                ; 004107b1
    FADD float ptr [ESI]                ; 004107b3
    PUSH 0x40000000                     ; 004107b5
    FSTP float ptr [ESP + 0x54]         ; 004107ba
    FXCH                                ; 004107be
    FADD float ptr [ESI + 0x4]          ; 004107c0
    PUSH EAX                            ; 004107c3
    FSTP float ptr [ESP + 0x5c]         ; 004107c4
    FADD float ptr [ESI + 0x8]          ; 004107c8
    PUSH EBP                            ; 004107cb
    FSTP float ptr [ESP + 0x64]         ; 004107cc
    CALL FUN_0048afe0                   ; 004107d0
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048afe0()
    ADD ESP,0x14                        ; 004107d5
    CMP EBX,0x2                         ; 004107d8
    JL 0x00410745                       ; 004107db
        ;   XREF to: 00410745 (CONDITIONAL_JUMP)  ; LAB_00410745
    FLD float ptr [0x0076432c]          ; 004107e1 | DAT_0076432c
    FADD float ptr [ESP + 0xb0]         ; 004107e7
    FSTP float ptr [0x0076432c]         ; 004107ee | DAT_0076432c
    POP EDI                             ; 004107f4
    ADD ESP,0x98                        ; 004107f5
    POP EBP                             ; 004107fb
    POP ESI                             ; 004107fc
    POP EBX                             ; 004107fd
    RET                                 ; 004107fe
    PUSH dword ptr [ESP + 0xac]         ; 004107ff
        ;   Label: LAB_004107ff
    PUSH EBP                            ; 00410806
    CALL FUN_00410bf0                   ; 00410807
        ;   XREF to: 00410bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00410bf0()
    ADD ESP,0x8                         ; 0041080c
    JMP 0x00410551                      ; 0041080f
        ;   XREF to: 00410551 (UNCONDITIONAL_JUMP)  ; LAB_00410551
    PUSH 0x1                            ; 00410814
        ;   Label: LAB_00410814
    PUSH 0x0                            ; 00410816
    PUSH EAX                            ; 00410818
    CALL FUN_004e16b0                   ; 00410819
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 0041081e
    PUSH EBP                            ; 00410821
    PUSH 0x57862e                       ; 00410822 | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x005ad350]                ; 00410827 | PTR_DAT_005ad350
    PUSH EAX                            ; 0041082c | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 0041082d
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    JMP 0x00410621                      ; 00410832
        ;   XREF to: 00410621 (UNCONDITIONAL_JUMP)  ; LAB_00410621
    PUSH 0x1                            ; 00410837
        ;   Label: LAB_00410837
    PUSH 0x3                            ; 00410839
    JMP 0x0041061b                      ; 0041083b
        ;   XREF to: 0041061b (UNCONDITIONAL_JUMP)  ; LAB_0041061b
    JBE 0x00410837                      ; 00410840
        ;   XREF to: 00410837 (CONDITIONAL_JUMP)  ; LAB_00410837
        ;   Label: LAB_00410840
    CMP EBX,0x3                         ; 00410842
    JZ 0x00410814                       ; 00410845
        ;   XREF to: 00410814 (CONDITIONAL_JUMP)  ; LAB_00410814
    PUSH 0x1                            ; 00410847
        ;   Label: LAB_00410847
    PUSH 0x0                            ; 00410849
    LEA EAX,[EBP + 0x150]               ; 0041084b
    JMP 0x0041061b                      ; 00410851
        ;   XREF to: 0041061b (UNCONDITIONAL_JUMP)  ; LAB_0041061b
    MOV EBX,dword ptr [0x0076431c]      ; 00410856 | DAT_0076431c
        ;   Label: caseD_4
    LEA EAX,[EBX*0x4 + 0x0]             ; 0041085c
    SUB EAX,EBX                         ; 00410863
    SHL EAX,0x4                         ; 00410865
    LEA EBX,[EBP + 0xfd0]               ; 00410868
    ADD EAX,EBX                         ; 0041086e
    PUSH EAX                            ; 00410870
    PUSH 0x2dd1184                      ; 00410871 | DAT_02dd1184
    LEA EAX,[ESP + 0x2c]                ; 00410876
    PUSH EAX                            ; 0041087a
    CALL FUN_0055a8b0                   ; 0041087b
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a8b0()
    ADD ESP,0xc                         ; 00410880
    PUSH EAX                            ; 00410883
    LEA EAX,[ESP + 0x64]                ; 00410884
    PUSH EAX                            ; 00410888
    PUSH EBP                            ; 00410889
    CALL FUN_0040a240                   ; 0041088a
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    MOV EBX,EAX                         ; 0041088f
    LEA EAX,[ESP + 0x84]                ; 00410891
    ADD ESP,0xc                         ; 00410898
    CMP EAX,EBX                         ; 0041089b
    JZ 0x004108b6                       ; 0041089d
        ;   XREF to: 004108b6 (CONDITIONAL_JUMP)  ; LAB_004108b6
    MOV EAX,dword ptr [EBX]             ; 0041089f
    MOV dword ptr [ESP + 0x78],EAX      ; 004108a1
    MOV EAX,dword ptr [EBX + 0x4]       ; 004108a5
    MOV dword ptr [ESP + 0x7c],EAX      ; 004108a8
    MOV EAX,dword ptr [EBX + 0x8]       ; 004108ac
    MOV dword ptr [ESP + 0x80],EAX      ; 004108af
    MOV EBX,dword ptr [0x00764320]      ; 004108b6 | DAT_00764320
        ;   Label: LAB_004108b6
    LEA EAX,[EBX*0x4 + 0x0]             ; 004108bc
    SUB EAX,EBX                         ; 004108c3
    SHL EAX,0x4                         ; 004108c5
    LEA EBX,[EBP + 0xfd0]               ; 004108c8
    ADD EAX,EBX                         ; 004108ce
    PUSH EAX                            ; 004108d0
    PUSH 0x2dd1184                      ; 004108d1 | DAT_02dd1184
    LEA EAX,[ESP + 0x8c]                ; 004108d6
    PUSH EAX                            ; 004108dd
    CALL FUN_0055a8b0                   ; 004108de
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a8b0()
    ADD ESP,0xc                         ; 004108e3
    PUSH EAX                            ; 004108e6
    LEA EAX,[ESP + 0x34]                ; 004108e7
    PUSH EAX                            ; 004108eb
    PUSH EBP                            ; 004108ec
    CALL FUN_0040a240                   ; 004108ed
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    MOV EBX,EAX                         ; 004108f2
    LEA EAX,[ESP + 0x60]                ; 004108f4
    ADD ESP,0xc                         ; 004108f8
    CMP EAX,EBX                         ; 004108fb
    JZ 0x00410913                       ; 004108fd
        ;   XREF to: 00410913 (CONDITIONAL_JUMP)  ; LAB_00410913
    MOV EAX,dword ptr [EBX]             ; 004108ff
    MOV dword ptr [ESP + 0x54],EAX      ; 00410901
    MOV EAX,dword ptr [EBX + 0x4]       ; 00410905
    MOV dword ptr [ESP + 0x58],EAX      ; 00410908
    MOV EAX,dword ptr [EBX + 0x8]       ; 0041090c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0041090f
    CMP dword ptr [EBP + 0x1fb18],0x0   ; 00410913
        ;   Label: LAB_00410913
    JNZ 0x0041097c                      ; 0041091a
        ;   XREF to: 0041097c (CONDITIONAL_JUMP)  ; LAB_0041097c
    PUSH 0x5acf40                       ; 0041091c | DAT_005acf40
    PUSH 0x3f000000                     ; 00410921
    PUSH 0x3f000000                     ; 00410926
    LEA EAX,[EBP + 0x1fb1c]             ; 0041092b
    PUSH 0x40000000                     ; 00410931
    PUSH EAX                            ; 00410936
    LEA EAX,[ESP + 0x8c]                ; 00410937
    PUSH EAX                            ; 0041093e
    MOV EDI,dword ptr [0x005b80f0]      ; 0041093f | DAT_005b80f0
    PUSH EDI                            ; 00410945
    CALL FUN_0048c590                   ; 00410946
        ;   XREF to: 0048c590 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c590()
    ADD ESP,0x1c                        ; 0041094b
    PUSH 0x5acf40                       ; 0041094e | DAT_005acf40
    PUSH 0x3f000000                     ; 00410953
    PUSH 0x3f000000                     ; 00410958
    LEA EAX,[EBP + 0x1fb28]             ; 0041095d
    PUSH 0x40000000                     ; 00410963
    PUSH EAX                            ; 00410968
    LEA EAX,[ESP + 0x68]                ; 00410969
    PUSH EAX                            ; 0041096d
    MOV EAX,[0x005b80f0]                ; 0041096e | DAT_005b80f0
    PUSH EAX                            ; 00410973
    CALL FUN_0048c590                   ; 00410974
        ;   XREF to: 0048c590 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c590()
    ADD ESP,0x1c                        ; 00410979
    LEA EAX,[ESP + 0x78]                ; 0041097c
        ;   Label: LAB_0041097c
    LEA EBX,[EBP + 0x1fb1c]             ; 00410980
    CMP EBX,EAX                         ; 00410986
    JZ 0x004109a1                       ; 00410988
        ;   XREF to: 004109a1 (CONDITIONAL_JUMP)  ; LAB_004109a1
    MOV EAX,dword ptr [ESP + 0x78]      ; 0041098a
    MOV dword ptr [EBX],EAX             ; 0041098e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00410990
    MOV dword ptr [EBX + 0x4],EAX       ; 00410994
    MOV EAX,dword ptr [ESP + 0x80]      ; 00410997
    MOV dword ptr [EBX + 0x8],EAX       ; 0041099e
    LEA EAX,[ESP + 0x54]                ; 004109a1
        ;   Label: LAB_004109a1
    LEA EBX,[EBP + 0x1fb28]             ; 004109a5
    CMP EBX,EAX                         ; 004109ab
    JZ 0x004109c3                       ; 004109ad
        ;   XREF to: 004109c3 (CONDITIONAL_JUMP)  ; LAB_004109c3
    MOV EAX,dword ptr [ESP + 0x54]      ; 004109af
    MOV dword ptr [EBX],EAX             ; 004109b3
    MOV EAX,dword ptr [ESP + 0x58]      ; 004109b5
    MOV dword ptr [EBX + 0x4],EAX       ; 004109b9
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004109bc
    MOV dword ptr [EBX + 0x8],EAX       ; 004109c0
    MOV dword ptr [EBP + 0x1fb18],0x0   ; 004109c3
        ;   Label: LAB_004109c3
    JMP 0x00410624                      ; 004109cd
        ;   XREF to: 00410624 (UNCONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [EBP + 0xbc94]    ; 004109d2
        ;   Label: caseD_0
    XOR EBX,EBX                         ; 004109d8
    TEST EDX,EDX                        ; 004109da
    JZ 0x004109ec                       ; 004109dc
        ;   XREF to: 004109ec (CONDITIONAL_JUMP)  ; LAB_004109ec
    CMP dword ptr [EBP + 0xbc9c],0x0    ; 004109de
    JZ 0x00410a51                       ; 004109e5
        ;   XREF to: 00410a51 (CONDITIONAL_JUMP)  ; LAB_00410a51
    MOV EBX,0x3                         ; 004109e7
    CMP dword ptr [EBP + 0xbc98],0x0    ; 004109ec
        ;   Label: LAB_004109ec
    JZ 0x004109fa                       ; 004109f3
        ;   XREF to: 004109fa (CONDITIONAL_JUMP)  ; LAB_004109fa
    MOV EBX,0x2                         ; 004109f5
    CMP dword ptr [EBP + 0xbca0],0x0    ; 004109fa
        ;   Label: LAB_004109fa
    JZ 0x00410a1c                       ; 00410a01
        ;   XREF to: 00410a1c (CONDITIONAL_JUMP)  ; LAB_00410a1c
    MOV dword ptr [EBP + 0x1fb18],0x1   ; 00410a03
    MOV EBX,0x4                         ; 00410a0d
    MOV dword ptr [EBP + 0xbca0],0x0    ; 00410a12
    FLD float ptr [EBP + 0xbcb8]        ; 00410a1c
        ;   Label: LAB_00410a1c
    LEA ESI,[EBP + 0x150]               ; 00410a22
    FMUL float ptr [EBP + 0x2430]       ; 00410a28
    PUSH ESI                            ; 00410a2e
    FSTP float ptr [EBP + 0x2410]       ; 00410a2f
    CALL FUN_004e1660                   ; 00410a35
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00410a3a
    ADD ESP,0x4                         ; 00410a3d
    CMP EBX,EAX                         ; 00410a40
    JZ 0x00410624                       ; 00410a42
        ;   XREF to: 00410624 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 00410a48
    PUSH EBX                            ; 00410a4a
    PUSH ESI                            ; 00410a4b
    JMP 0x0041061c                      ; 00410a4c
        ;   XREF to: 0041061c (UNCONDITIONAL_JUMP)  ; LAB_0041061c
    MOV EBX,0x1                         ; 00410a51
        ;   Label: LAB_00410a51
    JMP 0x004109ec                      ; 00410a56
        ;   XREF to: 004109ec (UNCONDITIONAL_JUMP)  ; LAB_004109ec
    PUSH EAX                            ; 00410a58
        ;   Label: LAB_00410a58
    CALL FUN_004e1660                   ; 00410a59
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00410a5e
    ADD ESP,0x4                         ; 00410a61
    CMP EAX,0x4                         ; 00410a64
    JA 0x00410624                       ; 00410a67
        ;   XREF to: 00410624 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x410478]  ; 00410a6d | caseD_3 | caseD_4 | switchdataD_00410478
        ;   Label: switchD


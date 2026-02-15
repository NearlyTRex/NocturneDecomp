; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00604478(int *param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 *param_5)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_0060411c at 00604254
;
; Referenced Globals:
;   void* switchdataD_00604468 = 00604643
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00604478
        ;   Label: crt_unknown.c_FUN_00604478
    MOV EBP,ESP                         ; 00604479
    PUSH EBX                            ; 0060447b
    PUSH ESI                            ; 0060447c
    PUSH EDI                            ; 0060447d
    SUB ESP,0x8                         ; 0060447e
    MOV EAX,dword ptr [EBP + 0x8]       ; 00604481
    MOV EAX,dword ptr [EAX]             ; 00604484
    MOV dword ptr [EBP + -0x14],EAX     ; 00604486
    MOV EAX,dword ptr [EBP + 0x8]       ; 00604489
    MOV EDX,dword ptr [EAX + 0x4]       ; 0060448c
    TEST EDX,EDX                        ; 0060448f
    JG 0x00604498                       ; 00604491
        ;   XREF to: 00604498 (CONDITIONAL_JUMP)  ; LAB_00604498
    ADD dword ptr [EBP + -0x14],EDX     ; 00604493
    JMP 0x006044a6                      ; 00604496
        ;   XREF to: 006044a6 (UNCONDITIONAL_JUMP)  ; LAB_006044a6
    MOV EBX,dword ptr [EBP + -0x14]     ; 00604498
        ;   Label: LAB_00604498
    SUB EBX,EDX                         ; 0060449b
    MOV dword ptr [EBP + -0x14],EBX     ; 0060449d
    LEA ECX,[EBX + 0x1]                 ; 006044a0
    MOV dword ptr [EBP + -0x14],ECX     ; 006044a3
    MOV EAX,dword ptr [EBP + 0x8]       ; 006044a6
        ;   Label: LAB_006044a6
    MOV DL,byte ptr [EAX + 0x8]         ; 006044a9
    XOR EBX,EBX                         ; 006044ac
    TEST DL,0x4                         ; 006044ae
    JZ 0x006044ce                       ; 006044b1
        ;   XREF to: 006044ce (CONDITIONAL_JUMP)  ; LAB_006044ce
    MOV EAX,dword ptr [EBP + 0x10]      ; 006044b3
    CMP EAX,dword ptr [EBP + -0x14]     ; 006044b6
    JGE 0x006044be                      ; 006044b9
        ;   XREF to: 006044be (CONDITIONAL_JUMP)  ; LAB_006044be
    MOV dword ptr [EBP + -0x14],EAX     ; 006044bb
    MOV EAX,dword ptr [EBP + -0x14]     ; 006044be
        ;   Label: LAB_006044be
    DEC EAX                             ; 006044c1
    MOV dword ptr [EBP + -0x14],EAX     ; 006044c2
    TEST EAX,EAX                        ; 006044c5
    JGE 0x006044ce                      ; 006044c7
        ;   XREF to: 006044ce (CONDITIONAL_JUMP)  ; LAB_006044ce
    XOR ECX,ECX                         ; 006044c9
    MOV dword ptr [EBP + -0x14],ECX     ; 006044cb
    MOV EAX,dword ptr [EBP + 0x8]       ; 006044ce
        ;   Label: LAB_006044ce
    MOV ESI,dword ptr [EAX + 0x4]       ; 006044d1
    TEST ESI,ESI                        ; 006044d4
    JG 0x006044e5                       ; 006044d6
        ;   XREF to: 006044e5 (CONDITIONAL_JUMP)  ; LAB_006044e5
    MOV ECX,dword ptr [EBP + 0x18]      ; 006044d8
    MOV EAX,EBX                         ; 006044db
    ADD EAX,ECX                         ; 006044dd
    INC EBX                             ; 006044df
    MOV byte ptr [EAX],0x30             ; 006044e0
    JMP 0x00604552                      ; 006044e3
        ;   XREF to: 00604552 (UNCONDITIONAL_JUMP)  ; LAB_00604552
    MOV EDI,dword ptr [EBP + 0x10]      ; 006044e5
        ;   Label: LAB_006044e5
    MOV dword ptr [EBP + -0x10],ESI     ; 006044e8
    CMP ESI,EDI                         ; 006044eb
    JLE 0x006044f2                      ; 006044ed
        ;   XREF to: 006044f2 (CONDITIONAL_JUMP)  ; LAB_006044f2
    MOV dword ptr [EBP + -0x10],EDI     ; 006044ef
    MOV EDI,dword ptr [EBP + 0x18]      ; 006044f2
        ;   Label: LAB_006044f2
    MOV ECX,dword ptr [EBP + -0x10]     ; 006044f5
    MOV ESI,dword ptr [EBP + 0xc]       ; 006044f8
    ADD EDI,EBX                         ; 006044fb
    MOV EDX,dword ptr [EBP + 0xc]       ; 006044fd
    PUSH ES                             ; 00604500
    MOV AX,DS                           ; 00604501
    MOV ES,AX                           ; 00604503
    PUSH EDI                            ; 00604505
    MOV EAX,ECX                         ; 00604506
    SHR ECX,0x2                         ; 00604508
    MOVSD.REP ES:EDI,ESI                ; 0060450b
    MOV CL,AL                           ; 0060450d
    AND CL,0x3                          ; 0060450f
    MOVSB.REP ES:EDI,ESI                ; 00604512
    POP EDI                             ; 00604514
    POP ES                              ; 00604515
    MOV EAX,dword ptr [EBP + -0x10]     ; 00604516
    ADD EDX,EAX                         ; 00604519
    MOV ECX,dword ptr [EBP + 0x10]      ; 0060451b
    MOV dword ptr [EBP + 0xc],EDX       ; 0060451e
    MOV EDX,dword ptr [EBP + 0x8]       ; 00604521
    ADD EBX,EAX                         ; 00604524
    SUB ECX,EAX                         ; 00604526
    MOV ESI,dword ptr [EDX + 0x4]       ; 00604528
    MOV dword ptr [EBP + 0x10],ECX      ; 0060452b
    CMP EAX,ESI                         ; 0060452e
    JGE 0x00604552                      ; 00604530
        ;   XREF to: 00604552 (CONDITIONAL_JUMP)  ; LAB_00604552
    MOV EDI,dword ptr [EBP + -0x10]     ; 00604532
    MOV EAX,ESI                         ; 00604535
    SUB EAX,EDI                         ; 00604537
    PUSH EAX                            ; 00604539
    MOV dword ptr [EBP + -0x10],EAX     ; 0060453a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0060453d
    PUSH 0x30                           ; 00604540
    ADD EAX,EBX                         ; 00604542
    PUSH EAX                            ; 00604544
    CALL crt_memory.c_memset_FUN_005fde40 ; 00604545
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EDX,dword ptr [EBP + -0x10]     ; 0060454a
    ADD ESP,0xc                         ; 0060454d
    ADD EBX,EDX                         ; 00604550
    MOV EAX,dword ptr [EBP + 0x8]       ; 00604552
        ;   Label: LAB_00604552
    MOV DH,byte ptr [EAX + 0x8]         ; 00604555
    MOV dword ptr [EAX + 0x18],EBX      ; 00604558
    TEST DH,0x8                         ; 0060455b
    JNZ 0x00604576                      ; 0060455e
        ;   XREF to: 00604576 (CONDITIONAL_JUMP)  ; LAB_00604576
    CMP dword ptr [EBP + -0x14],0x0     ; 00604560
    JG 0x0060456b                       ; 00604564
        ;   XREF to: 0060456b (CONDITIONAL_JUMP)  ; LAB_0060456b
    TEST DH,0x10                        ; 00604566
    JZ 0x00604576                       ; 00604569
        ;   XREF to: 00604576 (CONDITIONAL_JUMP)  ; LAB_00604576
    MOV EDI,dword ptr [EBP + 0x18]      ; 0060456b
        ;   Label: LAB_0060456b
    MOV EAX,EBX                         ; 0060456e
    ADD EAX,EDI                         ; 00604570
    INC EBX                             ; 00604572
    MOV byte ptr [EAX],0x2e             ; 00604573
    MOV EAX,dword ptr [EBP + 0x8]       ; 00604576
        ;   Label: LAB_00604576
    MOV EDX,dword ptr [EAX + 0x4]       ; 00604579
    TEST EDX,EDX                        ; 0060457c
    JGE 0x006045a1                      ; 0060457e
        ;   XREF to: 006045a1 (CONDITIONAL_JUMP)  ; LAB_006045a1
    MOV ECX,EDX                         ; 00604580
    NEG ECX                             ; 00604582
    PUSH ECX                            ; 00604584
    MOV EAX,dword ptr [EBP + 0x18]      ; 00604585
    MOV dword ptr [EBP + -0x10],EDX     ; 00604588
    PUSH 0x30                           ; 0060458b
    ADD EAX,EBX                         ; 0060458d
    MOV ESI,ECX                         ; 0060458f
    PUSH EAX                            ; 00604591
    MOV dword ptr [EBP + -0x10],ECX     ; 00604592
    MOV EDI,ESI                         ; 00604595
    CALL crt_memory.c_memset_FUN_005fde40 ; 00604597
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD EBX,EDI                         ; 0060459c
    ADD ESP,0xc                         ; 0060459e
    MOV EAX,dword ptr [EBP + -0x14]     ; 006045a1
        ;   Label: LAB_006045a1
    TEST EAX,EAX                        ; 006045a4
    JLE 0x006045ec                      ; 006045a6
        ;   XREF to: 006045ec (CONDITIONAL_JUMP)  ; LAB_006045ec
    CMP EAX,dword ptr [EBP + 0x10]      ; 006045a8
    JGE 0x006045b0                      ; 006045ab
        ;   XREF to: 006045b0 (CONDITIONAL_JUMP)  ; LAB_006045b0
    MOV dword ptr [EBP + 0x10],EAX      ; 006045ad
    MOV ECX,dword ptr [EBP + 0x10]      ; 006045b0
        ;   Label: LAB_006045b0
    TEST ECX,ECX                        ; 006045b3
    JZ 0x006045d8                       ; 006045b5
        ;   XREF to: 006045d8 (CONDITIONAL_JUMP)  ; LAB_006045d8
    MOV EDI,dword ptr [EBP + 0x18]      ; 006045b7
    MOV ESI,dword ptr [EBP + 0xc]       ; 006045ba
    ADD EDI,EBX                         ; 006045bd
    PUSH ES                             ; 006045bf
    MOV AX,DS                           ; 006045c0
    MOV ES,AX                           ; 006045c2
    PUSH EDI                            ; 006045c4
    MOV EAX,ECX                         ; 006045c5
    SHR ECX,0x2                         ; 006045c7
    MOVSD.REP ES:EDI,ESI                ; 006045ca
    MOV CL,AL                           ; 006045cc
    AND CL,0x3                          ; 006045ce
    MOVSB.REP ES:EDI,ESI                ; 006045d1
    POP EDI                             ; 006045d3
    POP ES                              ; 006045d4
    ADD EBX,dword ptr [EBP + 0x10]      ; 006045d5
    MOV EAX,dword ptr [EBP + 0x8]       ; 006045d8
        ;   Label: LAB_006045d8
    MOV EDI,dword ptr [EBP + 0x10]      ; 006045db
    MOV dword ptr [EAX + 0x1c],EBX      ; 006045de
    MOV EAX,dword ptr [EBP + -0x14]     ; 006045e1
    MOV EDX,dword ptr [EBP + 0x8]       ; 006045e4
    SUB EAX,EDI                         ; 006045e7
    MOV dword ptr [EDX + 0x20],EAX      ; 006045e9
    MOV EAX,dword ptr [EBP + 0x8]       ; 006045ec
        ;   Label: LAB_006045ec
    CMP dword ptr [EAX + 0xc],0x0       ; 006045ef
    JZ 0x00604605                       ; 006045f3
        ;   XREF to: 00604605 (CONDITIONAL_JUMP)  ; LAB_00604605
    MOV ECX,dword ptr [EBP + 0x18]      ; 006045f5
    MOV EAX,EBX                         ; 006045f8
    MOV EDX,dword ptr [EBP + 0x8]       ; 006045fa
    ADD EAX,ECX                         ; 006045fd
    MOV DL,byte ptr [EDX + 0xc]         ; 006045ff
    INC EBX                             ; 00604602
    MOV byte ptr [EAX],DL               ; 00604603
    MOV ESI,dword ptr [EBP + 0x14]      ; 00604605
        ;   Label: LAB_00604605
    LEA EAX,[EBX + 0x1]                 ; 00604608
    TEST ESI,ESI                        ; 0060460b
    JL 0x0060461c                       ; 0060460d
        ;   XREF to: 0060461c (CONDITIONAL_JUMP)  ; LAB_0060461c
    MOV EDX,EBX                         ; 0060460f
    MOV EBX,EAX                         ; 00604611
    MOV EAX,dword ptr [EBP + 0x18]      ; 00604613
    MOV byte ptr [EDX + EAX*0x1],0x2b   ; 00604616
    JMP 0x0060462e                      ; 0060461a
        ;   XREF to: 0060462e (UNCONDITIONAL_JUMP)  ; LAB_0060462e
    MOV EDX,EBX                         ; 0060461c
        ;   Label: LAB_0060461c
    MOV EDI,ESI                         ; 0060461e
    MOV EBX,EAX                         ; 00604620
    NEG EDI                             ; 00604622
    MOV EAX,dword ptr [EBP + 0x18]      ; 00604624
    MOV dword ptr [EBP + 0x14],EDI      ; 00604627
    MOV byte ptr [EDX + EAX*0x1],0x2d   ; 0060462a
    MOV ECX,dword ptr [EBP + 0x8]       ; 0060462e
        ;   Label: LAB_0060462e
    MOV ECX,dword ptr [ECX + 0x10]      ; 00604631
    CMP ECX,0x3                         ; 00604634
    JA 0x00604677                       ; 00604637
        ;   XREF to: 00604677 (CONDITIONAL_JUMP)  ; default
    MOV EAX,ECX                         ; 00604639
    JMP dword ptr CS:[EAX*0x4 + 0x604468] ; 0060463b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBP + 0x14],0x3e8    ; 00604643
        ;   Label: caseD_0
    JGE 0x00604672                      ; 0060464a
        ;   XREF to: 00604672 (CONDITIONAL_JUMP)  ; LAB_00604672
    MOV ECX,0x3                         ; 0060464c
    JMP 0x00604677                      ; 00604651
        ;   XREF to: 00604677 (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBP + 0x14],0xa      ; 00604653
        ;   Label: caseD_1
    JL 0x0060465e                       ; 00604657
        ;   XREF to: 0060465e (CONDITIONAL_JUMP)  ; caseD_2
    MOV ECX,0x2                         ; 00604659
    CMP dword ptr [EBP + 0x14],0x64     ; 0060465e
        ;   Label: caseD_2
    JL 0x00604669                       ; 00604662
        ;   XREF to: 00604669 (CONDITIONAL_JUMP)  ; caseD_3
    MOV ECX,0x3                         ; 00604664
    CMP dword ptr [EBP + 0x14],0x3e8    ; 00604669
        ;   Label: caseD_3
    JL 0x00604677                       ; 00604670
        ;   XREF to: 00604677 (CONDITIONAL_JUMP)  ; default
    MOV ECX,0x4                         ; 00604672
        ;   Label: LAB_00604672
    MOV EAX,dword ptr [EBP + 0x8]       ; 00604677
        ;   Label: default
    MOV dword ptr [EAX + 0x10],ECX      ; 0060467a
    CMP ECX,0x4                         ; 0060467d
    JL 0x006046c8                       ; 00604680
        ;   XREF to: 006046c8 (CONDITIONAL_JUMP)  ; LAB_006046c8
    XOR EAX,EAX                         ; 00604682
    MOV EDX,dword ptr [EBP + 0x14]      ; 00604684
    MOV dword ptr [EBP + -0x10],EAX     ; 00604687
    CMP EDX,0x3e8                       ; 0060468a
    JL 0x006046b8                       ; 00604690
        ;   XREF to: 006046b8 (CONDITIONAL_JUMP)  ; LAB_006046b8
    MOV EDI,0x3e8                       ; 00604692
    MOV EAX,EDX                         ; 00604697
    SAR EDX,0x1f                        ; 00604699
    IDIV EDI                            ; 0060469c
    MOV dword ptr [EBP + -0x10],EAX     ; 0060469e
    MOV EDX,EAX                         ; 006046a1
    SHL EAX,0x5                         ; 006046a3
    SUB EAX,EDX                         ; 006046a6
    SHL EAX,0x2                         ; 006046a8
    ADD EAX,EDX                         ; 006046ab
    MOV ESI,dword ptr [EBP + 0x14]      ; 006046ad
    SHL EAX,0x3                         ; 006046b0
    SUB ESI,EAX                         ; 006046b3
    MOV dword ptr [EBP + 0x14],ESI      ; 006046b5
    MOV EDI,dword ptr [EBP + 0x18]      ; 006046b8
        ;   Label: LAB_006046b8
    MOV EAX,EBX                         ; 006046bb
    MOV DL,byte ptr [EBP + -0x10]       ; 006046bd
    ADD EAX,EDI                         ; 006046c0
    ADD DL,0x30                         ; 006046c2
    INC EBX                             ; 006046c5
    MOV byte ptr [EAX],DL               ; 006046c6
    CMP ECX,0x3                         ; 006046c8
        ;   Label: LAB_006046c8
    JL 0x00604710                       ; 006046cb
        ;   XREF to: 00604710 (CONDITIONAL_JUMP)  ; LAB_00604710
    XOR EAX,EAX                         ; 006046cd
    MOV EDX,dword ptr [EBP + 0x14]      ; 006046cf
    MOV dword ptr [EBP + -0x10],EAX     ; 006046d2
    CMP EDX,0x64                        ; 006046d5
    JL 0x00604700                       ; 006046d8
        ;   XREF to: 00604700 (CONDITIONAL_JUMP)  ; LAB_00604700
    MOV EDI,0x64                        ; 006046da
    MOV EAX,EDX                         ; 006046df
    SAR EDX,0x1f                        ; 006046e1
    IDIV EDI                            ; 006046e4
    MOV dword ptr [EBP + -0x10],EAX     ; 006046e6
    MOV EDX,EAX                         ; 006046e9
    SHL EAX,0x2                         ; 006046eb
    SUB EAX,EDX                         ; 006046ee
    SHL EAX,0x3                         ; 006046f0
    ADD EAX,EDX                         ; 006046f3
    MOV ESI,dword ptr [EBP + 0x14]      ; 006046f5
    SHL EAX,0x2                         ; 006046f8
    SUB ESI,EAX                         ; 006046fb
    MOV dword ptr [EBP + 0x14],ESI      ; 006046fd
    MOV EDI,dword ptr [EBP + 0x18]      ; 00604700
        ;   Label: LAB_00604700
    MOV EAX,EBX                         ; 00604703
    MOV DL,byte ptr [EBP + -0x10]       ; 00604705
    ADD EAX,EDI                         ; 00604708
    ADD DL,0x30                         ; 0060470a
    INC EBX                             ; 0060470d
    MOV byte ptr [EAX],DL               ; 0060470e
    CMP ECX,0x2                         ; 00604710
        ;   Label: LAB_00604710
    JL 0x00604752                       ; 00604713
        ;   XREF to: 00604752 (CONDITIONAL_JUMP)  ; LAB_00604752
    XOR EAX,EAX                         ; 00604715
    MOV EDX,dword ptr [EBP + 0x14]      ; 00604717
    MOV dword ptr [EBP + -0x10],EAX     ; 0060471a
    CMP EDX,0xa                         ; 0060471d
    JL 0x00604742                       ; 00604720
        ;   XREF to: 00604742 (CONDITIONAL_JUMP)  ; LAB_00604742
    MOV ECX,0xa                         ; 00604722
    MOV EAX,EDX                         ; 00604727
    SAR EDX,0x1f                        ; 00604729
    IDIV ECX                            ; 0060472c
    MOV dword ptr [EBP + -0x10],EAX     ; 0060472e
    MOV EDX,EAX                         ; 00604731
    SHL EAX,0x2                         ; 00604733
    ADD EAX,EDX                         ; 00604736
    MOV ECX,dword ptr [EBP + 0x14]      ; 00604738
    ADD EAX,EAX                         ; 0060473b
    SUB ECX,EAX                         ; 0060473d
    MOV dword ptr [EBP + 0x14],ECX      ; 0060473f
    MOV ESI,dword ptr [EBP + 0x18]      ; 00604742
        ;   Label: LAB_00604742
    MOV EAX,EBX                         ; 00604745
    MOV DL,byte ptr [EBP + -0x10]       ; 00604747
    ADD EAX,ESI                         ; 0060474a
    ADD DL,0x30                         ; 0060474c
    INC EBX                             ; 0060474f
    MOV byte ptr [EAX],DL               ; 00604750
    MOV EDI,dword ptr [EBP + 0x18]      ; 00604752
        ;   Label: LAB_00604752
    MOV EAX,EBX                         ; 00604755
    MOV DL,byte ptr [EBP + 0x14]        ; 00604757
    ADD EAX,EDI                         ; 0060475a
    ADD DL,0x30                         ; 0060475c
    INC EBX                             ; 0060475f
    MOV byte ptr [EAX],DL               ; 00604760
    MOV EAX,dword ptr [EBP + 0x8]       ; 00604762
    MOV EDX,EBX                         ; 00604765
    MOV EAX,dword ptr [EAX + 0x1c]      ; 00604767
    SUB EDX,EAX                         ; 0060476a
    MOV EAX,dword ptr [EBP + 0x8]       ; 0060476c
    ADD EBX,EDI                         ; 0060476f
    MOV dword ptr [EAX + 0x24],EDX      ; 00604771
    JMP 0x0060445b                      ; 00604774
        ;   XREF to: 0060445b (UNCONDITIONAL_JUMP)  ; LAB_0060445b


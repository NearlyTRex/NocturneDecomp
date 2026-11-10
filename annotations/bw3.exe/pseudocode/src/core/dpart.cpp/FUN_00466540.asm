; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_00466540(CDemonPart *param_1,undefined4 param_2,undefined4 param_3,float *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005bc174
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_alloc_FUN_004662b0
;   crt_math.c_round_FUN_005a3120
;   crt_stdio.c_fread_FUN_005a3890
;   crt_string.c__strcmp_FUN_005a3d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466540
        ;   Label: core_dpart.cpp_FUN_00466540
    PUSH ESI                            ; 00466541
    PUSH EDI                            ; 00466542
    PUSH EBP                            ; 00466543
    SUB ESP,0xc                         ; 00466544
    MOV EBX,dword ptr [ESP + 0x20]      ; 00466547
    MOV EBP,dword ptr [ESP + 0x24]      ; 0046654b
    PUSH EBP                            ; 0046654f
    PUSH 0x1                            ; 00466550
    PUSH 0x20                           ; 00466552
    PUSH EBX                            ; 00466554
    CALL crt_stdio.c_fread_FUN_005a3890 ; 00466555
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 0046655a
    PUSH EBP                            ; 0046655d
    PUSH 0x1                            ; 0046655e
    PUSH 0x4                            ; 00466560
    LEA EAX,[EBX + 0x20]                ; 00466562
    PUSH EAX                            ; 00466565
    CALL crt_stdio.c_fread_FUN_005a3890 ; 00466566
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 0046656b
    PUSH EBP                            ; 0046656e
    PUSH 0x1                            ; 0046656f
    PUSH 0x4                            ; 00466571
    LEA EAX,[EBX + 0x24]                ; 00466573
    PUSH EAX                            ; 00466576
    CALL crt_stdio.c_fread_FUN_005a3890 ; 00466577
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 0046657c
    PUSH EBX                            ; 0046657f
    CALL core_dpart.cpp_CDemonPart_alloc_FUN_004662b0 ; 00466580
        ;   XREF to: 004662b0 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_alloc_FUN_004662b0(CDemonPart * this_ptr)
    ADD ESP,0x4                         ; 00466585
    PUSH EBP                            ; 00466588
    PUSH 0x1                            ; 00466589
    PUSH 0xc                            ; 0046658b
    LEA EAX,[EBX + 0x33c]               ; 0046658d
    PUSH EAX                            ; 00466593
    CALL crt_stdio.c_fread_FUN_005a3890 ; 00466594
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00466599
    PUSH EBP                            ; 0046659c
    PUSH 0x1                            ; 0046659d
    PUSH 0xc                            ; 0046659f
    LEA EAX,[EBX + 0x348]               ; 004665a1
    PUSH EAX                            ; 004665a7
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004665a8
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 004665ad
    PUSH EBP                            ; 004665b0
    PUSH 0x1                            ; 004665b1
    PUSH 0xc                            ; 004665b3
    LEA EAX,[EBX + 0x354]               ; 004665b5
    PUSH EAX                            ; 004665bb
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004665bc
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 004665c1
    PUSH EBP                            ; 004665c4
    PUSH 0x1                            ; 004665c5
    PUSH 0xc                            ; 004665c7
    LEA EAX,[EBX + 0x360]               ; 004665c9
    PUSH EAX                            ; 004665cf
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004665d0
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 004665d5
    PUSH EBP                            ; 004665d8
    PUSH 0x1                            ; 004665d9
    PUSH 0x4                            ; 004665db
    LEA EAX,[EBX + 0x38]                ; 004665dd
    PUSH EAX                            ; 004665e0
    XOR ESI,ESI                         ; 004665e1
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004665e3
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    MOV EDX,dword ptr [EBX + 0x38]      ; 004665e8
    ADD ESP,0x10                        ; 004665eb
    TEST EDX,EDX                        ; 004665ee
    JLE 0x00466610                      ; 004665f0
        ;   XREF to: 00466610 (CONDITIONAL_JUMP)  ; LAB_00466610
    LEA EDI,[EBX + 0x44]                ; 004665f2
    PUSH EBP                            ; 004665f5
        ;   Label: LAB_004665f5
    PUSH 0x1                            ; 004665f6
    PUSH 0x10                           ; 004665f8
    PUSH EDI                            ; 004665fa
    INC ESI                             ; 004665fb
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004665fc
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00466601
    MOV ECX,dword ptr [EBX + 0x38]      ; 00466604
    ADD EDI,0x18                        ; 00466607
    CMP ESI,ECX                         ; 0046660a
    JL 0x004665f5                       ; 0046660c
        ;   XREF to: 004665f5 (CONDITIONAL_JUMP)  ; LAB_004665f5
    MOV EAX,EAX                         ; 0046660e
    PUSH EBP                            ; 00466610
        ;   Label: LAB_00466610
    PUSH 0x1                            ; 00466611
    PUSH 0x4                            ; 00466613
    LEA EAX,[EBX + 0x28]                ; 00466615
    PUSH EAX                            ; 00466618
    CALL crt_stdio.c_fread_FUN_005a3890 ; 00466619
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 0046661e
    PUSH EBP                            ; 00466621
    MOV ESI,dword ptr [EBX + 0x20]      ; 00466622
    PUSH ESI                            ; 00466625
    PUSH 0xc                            ; 00466626
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00466628
    PUSH EDI                            ; 0046662b
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0046662c
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00466631
    PUSH EBP                            ; 00466634
    MOV EAX,dword ptr [EBX + 0x20]      ; 00466635
    PUSH EAX                            ; 00466638
    PUSH 0xc                            ; 00466639
    MOV EDX,dword ptr [EBX + 0x30]      ; 0046663b
    PUSH EDX                            ; 0046663e
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0046663f
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00466644
    PUSH 0x5bc167                       ; 00466647
    PUSH EBX                            ; 0046664c
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 0046664d
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 00466652
    TEST EAX,EAX                        ; 00466655
    JZ 0x00466813                       ; 00466657
        ;   XREF to: 00466813 (CONDITIONAL_JUMP)  ; LAB_00466813
    PUSH EBP                            ; 0046665d
    MOV EDI,dword ptr [EBX + 0x24]      ; 0046665e
    PUSH EDI                            ; 00466661
    PUSH 0x48                           ; 00466662
    PUSH 0x1b85194                      ; 00466664
    XOR EDI,EDI                         ; 00466669
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0046666b
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    MOV EBP,dword ptr [EBX + 0x24]      ; 00466670
    ADD ESP,0x10                        ; 00466673
    TEST EBP,EBP                        ; 00466676
    JLE 0x0046670a                      ; 00466678
        ;   XREF to: 0046670a (CONDITIONAL_JUMP)  ; LAB_0046670a
    XOR EDX,EDX                         ; 0046667e
    XOR EAX,EAX                         ; 00466680
    MOV ESI,dword ptr [EBX + 0x34]      ; 00466682
        ;   Label: LAB_00466682
    LEA ECX,[ESI + EAX*0x1]             ; 00466685
    MOV ESI,dword ptr [EDX + 0x1b8519c] ; 00466688
    MOV dword ptr [ECX],ESI             ; 0046668e
    MOV ESI,dword ptr [EBX + 0x34]      ; 00466690
    LEA ECX,[ESI + EAX*0x1]             ; 00466693
    MOV ESI,dword ptr [EDX + 0x1b851a0] ; 00466696
    MOV dword ptr [ECX + 0x4],ESI       ; 0046669c
    MOV ECX,dword ptr [EBX + 0x34]      ; 0046669f
    MOV ESI,dword ptr [EDX + 0x1b851a4] ; 004666a2
    MOV dword ptr [ECX + EAX*0x1 + 0x8],ESI ; 004666a8
    MOV ECX,dword ptr [EBX + 0x34]      ; 004666ac
    MOV ESI,dword ptr [EDX + 0x1b851a8] ; 004666af
    MOV dword ptr [ECX + EAX*0x1 + 0xc],ESI ; 004666b5
    MOV ECX,dword ptr [EBX + 0x34]      ; 004666b9
    MOV ESI,dword ptr [EDX + 0x1b851ac] ; 004666bc
    MOV dword ptr [ECX + EAX*0x1 + 0x10],ESI ; 004666c2
    MOV ECX,dword ptr [EBX + 0x34]      ; 004666c6
    MOV ESI,dword ptr [EDX + 0x1b851b8] ; 004666c9
    MOV dword ptr [ECX + EAX*0x1 + 0x14],ESI ; 004666cf
    MOV ECX,dword ptr [EBX + 0x34]      ; 004666d3
    MOV ESI,dword ptr [EDX + 0x1b851c4] ; 004666d6
    MOV dword ptr [ECX + EAX*0x1 + 0x18],ESI ; 004666dc
    CMP dword ptr [EDX + 0x1b85198],0x3 ; 004666e0
    JNZ 0x004667ff                      ; 004666e7
        ;   XREF to: 004667ff (CONDITIONAL_JUMP)  ; LAB_004667ff
    MOV ESI,dword ptr [EBX + 0x34]      ; 004666ed
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0xffffffff ; 004666f0
    ADD EAX,0x20                        ; 004666f8
        ;   Label: LAB_004666f8
    INC EDI                             ; 004666fb
    MOV ECX,dword ptr [EBX + 0x24]      ; 004666fc
    ADD EDX,0x48                        ; 004666ff
    CMP EDI,ECX                         ; 00466702
    JL 0x00466682                       ; 00466704
        ;   XREF to: 00466682 (CONDITIONAL_JUMP)  ; LAB_00466682
    MOV EDI,dword ptr [ESP + 0x28]      ; 0046670a
        ;   Label: LAB_0046670a
    TEST EDI,EDI                        ; 0046670e
    JZ 0x00466790                       ; 00466710
        ;   XREF to: 00466790 (CONDITIONAL_JUMP)
    FLD double ptr [0x005bc174]         ; 00466716 | DAT_005bc174
    FLD float ptr [EDI]                 ; 0046671c
    FMUL ST1                            ; 0046671e
    FLD float ptr [EDI + 0x4]           ; 00466720
    FMUL ST2                            ; 00466723
    FLD float ptr [EDI + 0x8]           ; 00466725
    FMULP ST3                           ; 00466728
    MOV EBP,dword ptr [EBX + 0x20]      ; 0046672a
    XOR ESI,ESI                         ; 0046672d
    FXCH                                ; 0046672f
    CALL crt_math.c_round_FUN_005a3120  ; 00466731
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00466736
    CALL crt_math.c_round_FUN_005a3120  ; 00466738
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 0046673d
    CALL crt_math.c_round_FUN_005a3120  ; 0046673f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 00466744
    FISTP dword ptr [ESP + 0x4]         ; 00466746
    FXCH                                ; 0046674a
    FISTP dword ptr [ESP + 0x8]         ; 0046674c
    FISTP dword ptr [ESP]               ; 00466750
    TEST EBP,EBP                        ; 00466753
    JLE 0x00466790                      ; 00466755
        ;   XREF to: 00466790 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00466757
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00466759
        ;   Label: LAB_00466759
    MOV EAX,dword ptr [ESP]             ; 0046675c
    SUB dword ptr [EDX + EDI*0x1],EAX   ; 0046675f
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00466762
    MOV EAX,dword ptr [ESP + 0x4]       ; 00466765
    SUB dword ptr [EDX + EDI*0x1 + 0x4],EAX ; 00466769
    MOV EDI,dword ptr [EBX + 0x2c]      ; 0046676d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00466770
    SUB dword ptr [EDX + EDI*0x1 + 0x8],EAX ; 00466774
    INC ESI                             ; 00466778
    MOV EDI,dword ptr [EBX + 0x20]      ; 00466779
    ADD EDX,0xc                         ; 0046677c
    CMP ESI,EDI                         ; 0046677f
    JL 0x00466759                       ; 00466781
        ;   XREF to: 00466759 (CONDITIONAL_JUMP)  ; LAB_00466759
    LEA EAX,[EAX]                       ; 00466783
    LEA EDX,[EDX]                       ; 00466789
    NOP                                 ; 0046678f
    MOV ESI,dword ptr [EBX + 0x34]      ; 004667ff
        ;   Label: LAB_004667ff
    LEA ECX,[ESI + EAX*0x1]             ; 00466802
    MOV ESI,dword ptr [EDX + 0x1b851d0] ; 00466805
    MOV dword ptr [ECX + 0x1c],ESI      ; 0046680b
    JMP 0x004666f8                      ; 0046680e
        ;   XREF to: 004666f8 (UNCONDITIONAL_JUMP)  ; LAB_004666f8
    PUSH EBP                            ; 00466813
        ;   Label: LAB_00466813
    MOV ECX,dword ptr [EBX + 0x24]      ; 00466814
    PUSH ECX                            ; 00466817
    PUSH 0x20                           ; 00466818
    MOV ESI,dword ptr [EBX + 0x34]      ; 0046681a
    PUSH ESI                            ; 0046681d
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0046681e
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00466823
    JMP 0x0046670a                      ; 00466826
        ;   XREF to: 0046670a (UNCONDITIONAL_JUMP)  ; LAB_0046670a


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_requantizeLayer3Samples_FUN_005003f0(SMpegSubbandQuantizedSamples *quantized_samples,SMpegSubbandSamples *output_samples,int *scalefactor_data,SMpegLayer3GranuleInfo *granule,int channel_index,SMpegFrame *frame)
;
; Parameters:
; SMpegSubbandQuantizedSamples * Stack[0x4]:4   quantized_samples
; SMpegSubbandSamples * Stack[0x8]:4   output_samples
; int *            Stack[0xc]:4   scalefactor_data
; SMpegLayer3GranuleInfo * Stack[0x10]:4   granule
; int              Stack[0x14]:4   channel_index
; SMpegFrame *     Stack[0x18]:4   frame
; Local Variables:
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 0050357f
;
; Referenced Globals:
;   undefined4 DAT_005ca27f
;   undefined4 DAT_005ca287
;   undefined4 DAT_005ca28f
;   undefined4 DAT_00601124
;   undefined4 DAT_0060166c
;   undefined4 DAT_00601670
;   undefined4 DAT_0060167c
;   undefined4 DAT_00601688
;   undefined4 DAT_006016c8
;   undefined4 DAT_006016cc
;   undefined4 DAT_006016d0
;   undefined4 DAT_006016d4
;   undefined4 DAT_006016d8
;   undefined4 DAT_01d90414
;
; Called Functions:
;   crt_math.c_pow_FUN_005a4764
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005003f0
        ;   Label: sound_mp3.cpp_requantizeLayer3Samples_FUN_005003f0
    PUSH ESI                            ; 005003f1
    PUSH EDI                            ; 005003f2
    PUSH EBP                            ; 005003f3
    MOV EBP,ESP                         ; 005003f4
    SUB ESP,0x68                        ; 005003f6
    AND ESP,0xfffffff8                  ; 005003f9
    MOV ECX,dword ptr [EBP + 0x20]      ; 005003fc
    MOV EBX,dword ptr [EBP + 0x28]      ; 005003ff
    MOV EBX,dword ptr [EBX]             ; 00500402
    MOV EDX,dword ptr [EBX]             ; 00500404
    XOR ESI,ESI                         ; 00500406
    LEA EAX,[EDX*0x4 + 0x0]             ; 00500408
    MOV EDI,dword ptr [EBX + 0x10]      ; 0050040f
    SUB EAX,EDX                         ; 00500412
    MOV EDX,dword ptr [ECX + 0x10]      ; 00500414
    ADD EDI,EAX                         ; 00500417
    TEST EDX,EDX                        ; 00500419
    JZ 0x0050064f                       ; 0050041b
        ;   XREF to: 0050064f (CONDITIONAL_JUMP)  ; LAB_0050064f
    CMP dword ptr [ECX + 0x14],0x2      ; 00500421
    JNZ 0x0050064f                      ; 00500425
        ;   XREF to: 0050064f (CONDITIONAL_JUMP)  ; LAB_0050064f
    LEA EAX,[EDI*0x8 + 0x0]             ; 0050042b
    ADD EAX,EDI                         ; 00500432
    SHL EAX,0x2                         ; 00500434
    LEA EDX,[EDI + EAX*0x1]             ; 00500437
    MOV EAX,dword ptr [ECX + 0x18]      ; 0050043a
    SHL EDX,0x2                         ; 0050043d
    TEST EAX,EAX                        ; 00500440
    JZ 0x00500625                       ; 00500442
        ;   XREF to: 00500625 (CONDITIONAL_JUMP)  ; LAB_00500625
    MOV EAX,dword ptr [EDX + 0x60166c]  ; 00500448 | DAT_0060166c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0050044e
        ;   Label: LAB_0050044e
    MOV EDX,dword ptr [0x01d90414]      ; 00500452 | DAT_01d90414
        ;   Label: LAB_00500452
    TEST EDX,EDX                        ; 00500458
    JZ 0x00500669                       ; 0050045a
        ;   XREF to: 00500669 (CONDITIONAL_JUMP)  ; LAB_00500669
    XOR EAX,EAX                         ; 00500460
        ;   Label: LAB_00500460
    MOV dword ptr [ESP + 0x34],EAX      ; 00500462
    MOV EAX,dword ptr [EBP + 0x24]      ; 00500466
    SHL EAX,0x3                         ; 00500469
    MOV EDX,EAX                         ; 0050046c
    SHL EAX,0x5                         ; 0050046e
    SUB EAX,EDX                         ; 00500471
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00500473
    ADD EDX,EAX                         ; 00500476
    LEA EAX,[EDI*0x8 + 0x0]             ; 00500478
    ADD EAX,EDI                         ; 0050047f
    SHL EAX,0x2                         ; 00500481
    ADD EAX,EDI                         ; 00500484
    SHL EAX,0x2                         ; 00500486
    MOV dword ptr [ESP + 0x20],EDX      ; 00500489
    MOV dword ptr [ESP + 0x54],EAX      ; 0050048d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00500491
    MOV EAX,dword ptr [EBP + 0x18]      ; 00500495
    MOV dword ptr [ESP + 0x18],EDX      ; 00500498
    MOV dword ptr [ESP + 0x14],EAX      ; 0050049c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005004a0
    XOR EDX,EDX                         ; 005004a3
    MOV dword ptr [ESP + 0x8],EAX       ; 005004a5
    MOV EAX,dword ptr [ESP + 0x54]      ; 005004a9
    MOV dword ptr [ESP + 0xc],EDX       ; 005004ad
    ADD EAX,0xc                         ; 005004b1
    MOV dword ptr [ESP + 0x10],EDX      ; 005004b4
    MOV dword ptr [ESP + 0x38],EAX      ; 005004b8
    MOV EAX,dword ptr [ESP + 0xc]       ; 005004bc
        ;   Label: LAB_005004bc
    MOV dword ptr [ESP + 0x58],EAX      ; 005004c0
    MOV dword ptr [ESP + 0x40],EAX      ; 005004c4
    MOV EAX,dword ptr [ESP + 0x14]      ; 005004c8
    MOV dword ptr [ESP + 0x3c],EAX      ; 005004cc
    MOV dword ptr [ESP + 0x44],EAX      ; 005004d0
    MOV dword ptr [ESP + 0x60],EAX      ; 005004d4
    MOV EAX,dword ptr [ESP + 0x8]       ; 005004d8
    MOV EDX,dword ptr [ESP + 0x10]      ; 005004dc
    MOV dword ptr [ESP + 0x48],EAX      ; 005004e0
    MOV EAX,dword ptr [EBP + 0x18]      ; 005004e4
    ADD EAX,EDX                         ; 005004e7
    MOV dword ptr [ESP + 0x30],EAX      ; 005004e9
    MOV dword ptr [ESP + 0x28],EAX      ; 005004ed
    MOV EAX,dword ptr [EBP + 0x14]      ; 005004f1
    ADD EAX,EDX                         ; 005004f4
    XOR EDI,EDI                         ; 005004f6
    MOV dword ptr [ESP + 0x2c],EAX      ; 005004f8
    MOV dword ptr [ESP + 0x24],EAX      ; 005004fc
    MOV EAX,dword ptr [ESP + 0x58]      ; 00500500
        ;   Label: LAB_00500500
    CMP EAX,dword ptr [ESP + 0x5c]      ; 00500504
    JNZ 0x00500580                      ; 00500508
        ;   XREF to: 00500580 (CONDITIONAL_JUMP)  ; LAB_00500580
    CMP dword ptr [ECX + 0x10],0x0      ; 0050050a
    JZ 0x00500717                       ; 0050050e
        ;   XREF to: 00500717 (CONDITIONAL_JUMP)  ; LAB_00500717
    CMP dword ptr [ECX + 0x14],0x2      ; 00500514
    JNZ 0x00500717                      ; 00500518
        ;   XREF to: 00500717 (CONDITIONAL_JUMP)  ; LAB_00500717
    INC ESI                             ; 0050051e
    MOV EAX,dword ptr [ESP + 0x54]      ; 0050051f
    LEA EBX,[ESI*0x4 + 0x0]             ; 00500523
    MOV EDX,dword ptr [ECX + 0x18]      ; 0050052a
    ADD EBX,EAX                         ; 0050052d
    TEST EDX,EDX                        ; 0050052f
    JZ 0x005006f0                       ; 00500531
        ;   XREF to: 005006f0 (CONDITIONAL_JUMP)  ; LAB_005006f0
    MOV EDX,dword ptr [ESP + 0x54]      ; 00500537
    MOV EAX,dword ptr [ESP + 0x58]      ; 0050053b
    CMP EAX,dword ptr [EDX + 0x601688]  ; 0050053f | DAT_00601688
    JNZ 0x005006df                      ; 00500545
        ;   XREF to: 005006df (CONDITIONAL_JUMP)  ; LAB_005006df
    MOV EAX,dword ptr [EDX + 0x6016d4]  ; 0050054b | DAT_006016d4
    LEA EAX,[EAX + EAX*0x2]             ; 00500551
    MOV EDX,dword ptr [ESP + 0x38]      ; 00500554
    MOV dword ptr [ESP + 0x5c],EAX      ; 00500558
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050055c
    MOV EBX,dword ptr [EDX + 0x6016c4]  ; 00500560 | DAT_006016d0
    MOV EAX,dword ptr [EAX + 0x6016c8]  ; 00500566 | DAT_006016d4
    SUB EAX,EBX                         ; 0050056c
    MOV ESI,0x3                         ; 0050056e
    MOV dword ptr [ESP + 0x50],EAX      ; 00500573
    MOV EAX,EBX                         ; 00500577
    IMUL EAX,ESI                        ; 00500579
    MOV dword ptr [ESP + 0x4c],EAX      ; 0050057c
        ;   Label: LAB_0050057c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00500580
        ;   Label: LAB_00500580
    MOV EDX,dword ptr [EDI + EAX*0x1]   ; 00500584
    TEST EDX,EDX                        ; 00500587
    JNZ 0x00500734                      ; 00500589
        ;   XREF to: 00500734 (CONDITIONAL_JUMP)  ; LAB_00500734
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050058f
    MOV dword ptr [EDI + EAX*0x1],EDX   ; 00500593
    MOV EAX,dword ptr [ESP + 0x58]      ; 00500596
        ;   Label: LAB_00500596
    MOV EDX,dword ptr [ESP + 0x40]      ; 0050059a
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0050059e
    ADD EDI,0x4                         ; 005005a2
    INC EAX                             ; 005005a5
    INC EDX                             ; 005005a6
    ADD EBX,0x4                         ; 005005a7
    MOV dword ptr [ESP + 0x58],EAX      ; 005005aa
    MOV dword ptr [ESP + 0x40],EDX      ; 005005ae
    MOV dword ptr [ESP + 0x3c],EBX      ; 005005b2
    MOV EAX,dword ptr [ESP + 0x44]      ; 005005b6
    MOV EDX,dword ptr [ESP + 0x60]      ; 005005ba
    MOV EBX,dword ptr [ESP + 0x48]      ; 005005be
    ADD EAX,0x4                         ; 005005c2
    ADD EDX,0x4                         ; 005005c5
    ADD EBX,0x4                         ; 005005c8
    MOV dword ptr [ESP + 0x44],EAX      ; 005005cb
    MOV dword ptr [ESP + 0x60],EDX      ; 005005cf
    MOV dword ptr [ESP + 0x48],EBX      ; 005005d3
    CMP EDI,0x48                        ; 005005d7
    JNZ 0x00500500                      ; 005005da
        ;   XREF to: 00500500 (CONDITIONAL_JUMP)  ; LAB_00500500
    MOV EDI,dword ptr [ESP + 0xc]       ; 005005e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005005e4
    MOV EDX,dword ptr [ESP + 0x14]      ; 005005e8
    MOV EBX,dword ptr [ESP + 0x8]       ; 005005ec
    ADD EDI,0x12                        ; 005005f0
    ADD EAX,0x48                        ; 005005f3
    ADD EDX,0x48                        ; 005005f6
    ADD EBX,0x48                        ; 005005f9
    MOV dword ptr [ESP + 0xc],EDI       ; 005005fc
    MOV dword ptr [ESP + 0x10],EAX      ; 00500600
    MOV EDI,dword ptr [ESP + 0x34]      ; 00500604
    MOV dword ptr [ESP + 0x14],EDX      ; 00500608
    INC EDI                             ; 0050060c
    MOV dword ptr [ESP + 0x8],EBX       ; 0050060d
    MOV dword ptr [ESP + 0x34],EDI      ; 00500611
    CMP EDI,0x20                        ; 00500615
    JL 0x005004bc                       ; 00500618
        ;   XREF to: 005004bc (CONDITIONAL_JUMP)  ; LAB_005004bc
    MOV ESP,EBP                         ; 0050061e
    POP EBP                             ; 00500620
    POP EDI                             ; 00500621
    POP ESI                             ; 00500622
    POP EBX                             ; 00500623
    RET                                 ; 00500624
    MOV EAX,dword ptr [EDX + 0x6016c8]  ; 00500625 | DAT_006016c8
        ;   Label: LAB_00500625
    MOV dword ptr [ESP + 0x64],EAX      ; 0050062b
    MOV EBX,dword ptr [ESP + 0x64]      ; 0050062f
    SHL EAX,0x2                         ; 00500633
    SUB EAX,EBX                         ; 00500636
    MOV dword ptr [ESP + 0x5c],EAX      ; 00500638
    MOV EAX,dword ptr [EDX + 0x6016c8]  ; 0050063c | DAT_006016c8
    MOV dword ptr [ESP + 0x4c],ESI      ; 00500642
    MOV dword ptr [ESP + 0x50],EAX      ; 00500646
    JMP 0x00500452                      ; 0050064a
        ;   XREF to: 00500452 (UNCONDITIONAL_JUMP)  ; LAB_00500452
    LEA EAX,[EDI*0x8 + 0x0]             ; 0050064f
        ;   Label: LAB_0050064f
    ADD EAX,EDI                         ; 00500656
    SHL EAX,0x2                         ; 00500658
    ADD EAX,EDI                         ; 0050065b
    MOV EAX,dword ptr [EAX*0x4 + 0x60166c] ; 0050065d | DAT_0060166c
    JMP 0x0050044e                      ; 00500664
        ;   XREF to: 0050044e (UNCONDITIONAL_JUMP)  ; LAB_0050044e
    XOR EBX,EBX                         ; 00500669
        ;   Label: LAB_00500669
    FLD double ptr [0x005ca287]         ; 0050066b | DAT_005ca287
    MOV dword ptr [ESP + 0x64],EDX      ; 00500671
        ;   Label: LAB_00500671
    FLD ST0                             ; 00500675
    FILD dword ptr [ESP + 0x64]         ; 00500677
    CALL crt_math.c_pow_FUN_005a4764    ; 0050067b
        ;   XREF to: 005a4764 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005a4764()
    ADD EBX,0x8                         ; 00500680
    INC EDX                             ; 00500683
    FSTP double ptr [EBX + 0x1d90410]   ; 00500684
    CMP EDX,0xc8                        ; 0050068a
    JL 0x00500671                       ; 00500690
        ;   XREF to: 00500671 (CONDITIONAL_JUMP)  ; LAB_00500671
    FSTP ST0                            ; 00500692
    XOR EDX,EDX                         ; 00500694
    XOR EBX,EBX                         ; 00500696
    FLD double ptr [0x005ca28f]         ; 00500698 | DAT_005ca28f
    FLD double ptr [0x005ca27f]         ; 0050069e | DAT_005ca27f
    MOV EAX,EDX                         ; 005006a4
        ;   Label: LAB_005006a4
    NEG EAX                             ; 005006a6
    MOV dword ptr [ESP + 0x64],EAX      ; 005006a8
    FILD dword ptr [ESP + 0x64]         ; 005006ac
    FMUL ST1                            ; 005006b0
    FLD ST2                             ; 005006b2
    CALL crt_math.c_pow_FUN_005a4764    ; 005006b4
        ;   XREF to: 005a4764 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005a4764()
    ADD EBX,0x8                         ; 005006b9
    INC EDX                             ; 005006bc
    FSTP double ptr [EBX + 0x1d90a50]   ; 005006bd
    CMP EDX,0xc8                        ; 005006c3
    JL 0x005006a4                       ; 005006c9
        ;   XREF to: 005006a4 (CONDITIONAL_JUMP)  ; LAB_005006a4
    FSTP ST0                            ; 005006cb
    MOV EBX,0x1                         ; 005006cd
    FSTP ST0                            ; 005006d2
    MOV dword ptr [0x01d90414],EBX      ; 005006d4 | DAT_01d90414
    JMP 0x00500460                      ; 005006da
        ;   XREF to: 00500460 (UNCONDITIONAL_JUMP)  ; LAB_00500460
    JGE 0x005006f0                      ; 005006df
        ;   XREF to: 005006f0 (CONDITIONAL_JUMP)  ; LAB_005006f0
        ;   Label: LAB_005006df
    MOV EAX,dword ptr [EBX + 0x60166c]  ; 005006e1 | DAT_00601670
    MOV dword ptr [ESP + 0x5c],EAX      ; 005006e7
    JMP 0x00500580                      ; 005006eb
        ;   XREF to: 00500580 (UNCONDITIONAL_JUMP)  ; LAB_00500580
    MOV EAX,dword ptr [EBX + 0x6016c8]  ; 005006f0 | DAT_006016d8 | DAT_006016cc
        ;   Label: LAB_005006f0
    LEA EAX,[EAX + EAX*0x2]             ; 005006f6
    MOV EDX,dword ptr [EBX + 0x6016c4]  ; 005006f9 | DAT_006016d4 | DAT_006016c8
    MOV dword ptr [ESP + 0x5c],EAX      ; 005006ff
    MOV EAX,dword ptr [EBX + 0x6016c8]  ; 00500703 | DAT_006016d8 | DAT_006016cc
    SUB EAX,EDX                         ; 00500709
    MOV dword ptr [ESP + 0x50],EAX      ; 0050070b
    LEA EAX,[EDX + EDX*0x2]             ; 0050070f
    JMP 0x0050057c                      ; 00500712
        ;   XREF to: 0050057c (UNCONDITIONAL_JUMP)  ; LAB_0050057c
    INC ESI                             ; 00500717
        ;   Label: LAB_00500717
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00500718
    LEA EAX,[ESI*0x4 + 0x0]             ; 0050071c
    ADD EAX,EDX                         ; 00500723
    MOV EAX,dword ptr [EAX + 0x60166c]  ; 00500725 | DAT_0060167c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0050072b
    JMP 0x00500580                      ; 0050072f
        ;   XREF to: 00500580 (UNCONDITIONAL_JUMP)  ; LAB_00500580
    MOV EBX,dword ptr [ECX + 0x8]       ; 00500734
        ;   Label: LAB_00500734
    MOV EAX,dword ptr [ECX + 0x10]      ; 00500737
    SUB EBX,0xd2                        ; 0050073a
    TEST EAX,EAX                        ; 00500740
    JZ 0x0050082e                       ; 00500742
        ;   XREF to: 0050082e (CONDITIONAL_JUMP)  ; LAB_0050082e
    CMP dword ptr [ECX + 0x14],0x2      ; 00500748
    JNZ 0x00500817                      ; 0050074c
        ;   XREF to: 00500817 (CONDITIONAL_JUMP)  ; LAB_00500817
    CMP dword ptr [ECX + 0x18],0x0      ; 00500752
    JNZ 0x00500817                      ; 00500756
        ;   XREF to: 00500817 (CONDITIONAL_JUMP)  ; LAB_00500817
    MOV EDX,dword ptr [ESP + 0x40]      ; 0050075c
        ;   Label: LAB_0050075c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00500760
    SUB EDX,EAX                         ; 00500764
    MOV EAX,EDX                         ; 00500766
    SAR EDX,0x1f                        ; 00500768
    IDIV dword ptr [ESP + 0x50]         ; 0050076b
    MOV dword ptr [ESP + 0x64],EAX      ; 0050076f
    MOV EAX,dword ptr [ECX + EAX*0x4 + 0x28] ; 00500773
    SHL EAX,0x3                         ; 00500777
    MOV EDX,dword ptr [ESP + 0x64]      ; 0050077a
    SUB EBX,EAX                         ; 0050077e
    IMUL EAX,EDX,0x34                   ; 00500780
    MOV EDX,dword ptr [ESP + 0x20]      ; 00500783
    ADD EDX,EAX                         ; 00500787
    LEA EAX,[ESI*0x4 + 0x0]             ; 00500789
    ADD EDX,EAX                         ; 00500790
    MOV EAX,dword ptr [ECX + 0x40]      ; 00500792
    INC EAX                             ; 00500795
    ADD EAX,EAX                         ; 00500796
    NEG EAX                             ; 00500798
    IMUL EAX,dword ptr [EDX + 0x5c]     ; 0050079a
    ADD EBX,EAX                         ; 0050079e
        ;   Label: LAB_0050079e
    TEST EBX,EBX                        ; 005007a0
    JLE 0x00500867                      ; 005007a2
        ;   XREF to: 00500867 (CONDITIONAL_JUMP)  ; LAB_00500867
    MOV dword ptr [ESP + 0x64],EBX      ; 005007a8
        ;   Label: LAB_005007a8
    FILD dword ptr [ESP + 0x64]         ; 005007ac
    FMUL double ptr [0x005ca27f]        ; 005007b0 | DAT_005ca27f
    FLD double ptr [0x005ca28f]         ; 005007b6 | DAT_005ca28f
    CALL crt_math.c_pow_FUN_005a4764    ; 005007bc
        ;   XREF to: 005a4764 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005a4764()
    MOV EAX,dword ptr [ESP + 0x44]      ; 005007c1
    FSTP float ptr [EAX]                ; 005007c5
        ;   Label: LAB_005007c5
    MOV EAX,dword ptr [ESP + 0x48]      ; 005007c7
    MOV EAX,dword ptr [EAX]             ; 005007cb
    CDQ                                 ; 005007cd
    XOR EAX,EDX                         ; 005007ce
    SUB EAX,EDX                         ; 005007d0
    CMP EAX,0xc8                        ; 005007d2
    JL 0x00500885                       ; 005007d7
        ;   XREF to: 00500885 (CONDITIONAL_JUMP)  ; LAB_00500885
    MOV dword ptr [ESP + 0x64],EAX      ; 005007dd
    FLD double ptr [0x005ca287]         ; 005007e1 | DAT_005ca287
    FILD dword ptr [ESP + 0x64]         ; 005007e7
    CALL crt_math.c_pow_FUN_005a4764    ; 005007eb
        ;   XREF to: 005a4764 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_005a4764()
    MOV EAX,dword ptr [ESP + 0x60]      ; 005007f0
    FMUL float ptr [EAX]                ; 005007f4
    FSTP float ptr [EAX]                ; 005007f6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005007f8
        ;   Label: LAB_005007f8
    CMP dword ptr [EDI + EAX*0x1],0x0   ; 005007fc
    JGE 0x00500596                      ; 00500800
        ;   XREF to: 00500596 (CONDITIONAL_JUMP)  ; LAB_00500596
    MOV EAX,dword ptr [ESP + 0x28]      ; 00500806
    FLD float ptr [EDI + EAX*0x1]       ; 0050080a
    FCHS                                ; 0050080d
    FSTP float ptr [EDI + EAX*0x1]      ; 0050080f
    JMP 0x00500596                      ; 00500812
        ;   XREF to: 00500596 (UNCONDITIONAL_JUMP)  ; LAB_00500596
    CMP dword ptr [ECX + 0x14],0x2      ; 00500817
        ;   Label: LAB_00500817
    JNZ 0x0050082e                      ; 0050081b
        ;   XREF to: 0050082e (CONDITIONAL_JUMP)  ; LAB_0050082e
    CMP dword ptr [ECX + 0x18],0x0      ; 0050081d
    JZ 0x0050082e                       ; 00500821
        ;   XREF to: 0050082e (CONDITIONAL_JUMP)  ; LAB_0050082e
    CMP dword ptr [ESP + 0x34],0x2      ; 00500823
    JGE 0x0050075c                      ; 00500828
        ;   XREF to: 0050075c (CONDITIONAL_JUMP)  ; LAB_0050075c
    MOV EDX,dword ptr [ECX + 0x3c]      ; 0050082e
        ;   Label: LAB_0050082e
    LEA EAX,[ESI*0x4 + 0x0]             ; 00500831
    IMUL EDX,dword ptr [EAX + 0x601114] ; 00500838 | DAT_00601124
    MOV dword ptr [ESP + 0x64],EDX      ; 0050083f
    ADD EAX,dword ptr [ESP + 0x18]      ; 00500843
    MOV EDX,dword ptr [ESP + 0x64]      ; 00500847
    MOV EAX,dword ptr [EAX]             ; 0050084b
    ADD EAX,EDX                         ; 0050084d
    MOV dword ptr [ESP + 0x64],EAX      ; 0050084f
    MOV EAX,dword ptr [ECX + 0x40]      ; 00500853
    INC EAX                             ; 00500856
    ADD EAX,EAX                         ; 00500857
    MOV EDX,dword ptr [ESP + 0x64]      ; 00500859
    NEG EAX                             ; 0050085d
    IMUL EAX,EDX                        ; 0050085f
    JMP 0x0050079e                      ; 00500862
        ;   XREF to: 0050079e (UNCONDITIONAL_JUMP)  ; LAB_0050079e
    CMP EBX,0xffffff38                  ; 00500867
        ;   Label: LAB_00500867
    JLE 0x005007a8                      ; 0050086d
        ;   XREF to: 005007a8 (CONDITIONAL_JUMP)  ; LAB_005007a8
    NEG EBX                             ; 00500873
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00500875
    FLD double ptr [EBX*0x8 + 0x1d90a58] ; 00500879
    JMP 0x005007c5                      ; 00500880
        ;   XREF to: 005007c5 (UNCONDITIONAL_JUMP)  ; LAB_005007c5
    MOV EDX,dword ptr [ESP + 0x60]      ; 00500885
        ;   Label: LAB_00500885
    FLD float ptr [EDX]                 ; 00500889
    FLD ST0                             ; 0050088b
    FMUL double ptr [EAX*0x8 + 0x1d90418] ; 0050088d
    FSTP ST1                            ; 00500894
    FSTP float ptr [EDX]                ; 00500896
    JMP 0x005007f8                      ; 00500898
        ;   XREF to: 005007f8 (UNCONDITIONAL_JUMP)  ; LAB_005007f8


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_00532200(SMpegSubbandSamples *input_samples,SMpegSubbandSamples *output_samples,SMpegFrame *frame_info,SMpegFrame *frame)
;
; Parameters:
; SMpegSubbandSamples * Stack[0x4]:4   input_samples
; SMpegSubbandSamples * Stack[0x8]:4   output_samples
; SMpegFrame *     Stack[0xc]:4   frame_info
; SMpegFrame *     Stack[0x10]:4   frame
; Local Variables:
; float[18] *      Stack[-0x5c]:4  local_5c
; float *          Stack[-0x58]:4  local_58
; float *          Stack[-0x54]:4  local_54
; int              Stack[-0x50]:4  local_50
; int              Stack[-0x4c]:4  local_4c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 00535953
;
; Referenced Globals:
;   undefined4 g_Layer3BandIndex[0].s[1]
;   undefined4 g_Layer3BandIndex[0].s[2]
;   undefined4 g_Layer3BandIndex[0].s[3]
;   undefined4 g_Layer3BandIndex[0].s[4]
;   undefined4 g_Layer3BandIndex[0].s[5]
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532200
        ;   Label: sound_mp3.cpp_reorderShortBlockSamples_FUN_00532200
    PUSH ESI                            ; 00532201
    PUSH EDI                            ; 00532202
    PUSH EBP                            ; 00532203
    SUB ESP,0x58                        ; 00532204
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00532207
    MOV EDI,dword ptr [ESP + 0x70]      ; 0053220b
    MOV ECX,dword ptr [ESP + 0x78]      ; 0053220f
    MOV ECX,dword ptr [ECX]             ; 00532213
    MOV EDX,dword ptr [ECX]             ; 00532215
    LEA EAX,[EDX*0x4 + 0x0]             ; 00532217
    SUB EAX,EDX                         ; 0053221e
    MOV EDX,dword ptr [ECX + 0x10]      ; 00532220
    LEA EBX,[EDI + 0x48]                ; 00532223
    ADD EDX,EAX                         ; 00532226
    XOR ECX,ECX                         ; 00532228
    MOV dword ptr [ESP],EDX             ; 0053222a
    IMUL EAX,ECX,0x48                   ; 0053222d
        ;   Label: LAB_0053222d
    MOV EDX,EBX                         ; 00532230
    ADD EAX,EDI                         ; 00532232
    MOV dword ptr [EAX],0x0             ; 00532234
        ;   Label: LAB_00532234
    ADD EAX,0x4                         ; 0053223a
    CMP EAX,EDX                         ; 0053223d
    JNZ 0x00532234                      ; 0053223f
        ;   XREF to: 00532234 (CONDITIONAL_JUMP)  ; LAB_00532234
    INC ECX                             ; 00532241
    ADD EBX,0x48                        ; 00532242
    CMP ECX,0x20                        ; 00532245
    JL 0x0053222d                       ; 00532248
        ;   XREF to: 0053222d (CONDITIONAL_JUMP)  ; LAB_0053222d
    MOV EAX,dword ptr [ESP + 0x74]      ; 0053224a
    CMP dword ptr [EAX + 0x10],0x0      ; 0053224e
    JZ 0x0053225a                       ; 00532252
        ;   XREF to: 0053225a (CONDITIONAL_JUMP)  ; LAB_0053225a
    CMP dword ptr [EAX + 0x14],0x2      ; 00532254
    JZ 0x0053229d                       ; 00532258
        ;   XREF to: 0053229d (CONDITIONAL_JUMP)  ; LAB_0053229d
    LEA EBP,[ESI + 0x48]                ; 0053225a
        ;   Label: LAB_0053225a
    MOV dword ptr [ESP + 0x10],EDI      ; 0053225d
    XOR EBX,EBX                         ; 00532261
    MOV EDI,0x48                        ; 00532263
    IMUL EAX,EBX,0x48                   ; 00532268
        ;   Label: LAB_00532268
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053226b
    MOV ECX,EBP                         ; 0053226f
    ADD EAX,ESI                         ; 00532271
    ADD EDX,0x4                         ; 00532273
        ;   Label: LAB_00532273
    FLD float ptr [EAX]                 ; 00532276
    ADD EAX,0x4                         ; 00532278
    FSTP float ptr [EDX + -0x4]         ; 0053227b
    CMP EAX,ECX                         ; 0053227e
    JNZ 0x00532273                      ; 00532280
        ;   XREF to: 00532273 (CONDITIONAL_JUMP)  ; LAB_00532273
    MOV EAX,dword ptr [ESP + 0x10]      ; 00532282
    INC EBX                             ; 00532286
    ADD EAX,EDI                         ; 00532287
    ADD EBP,0x48                        ; 00532289
    MOV dword ptr [ESP + 0x10],EAX      ; 0053228c
    CMP EBX,0x20                        ; 00532290
    JL 0x00532268                       ; 00532293
        ;   XREF to: 00532268 (CONDITIONAL_JUMP)  ; LAB_00532268
    ADD ESP,0x58                        ; 00532295
        ;   Label: LAB_00532295
    POP EBP                             ; 00532298
    POP EDI                             ; 00532299
    POP ESI                             ; 0053229a
    POP EBX                             ; 0053229b
    RET                                 ; 0053229c
    CMP dword ptr [EAX + 0x18],0x0      ; 0053229d
        ;   Label: LAB_0053229d
    JZ 0x0053241b                       ; 005322a1
        ;   XREF to: 0053241b (CONDITIONAL_JUMP)  ; LAB_0053241b
    MOV EBP,0x48                        ; 005322a7
    LEA EAX,[ESI + 0x48]                ; 005322ac
    MOV dword ptr [ESP + 0x14],EDI      ; 005322af
    XOR EBX,EBX                         ; 005322b3
    MOV dword ptr [ESP + 0xc],EAX       ; 005322b5
    IMUL EAX,EBX,0x48                   ; 005322b9
        ;   Label: LAB_005322b9
    MOV EDX,dword ptr [ESP + 0x14]      ; 005322bc
    MOV ECX,dword ptr [ESP + 0xc]       ; 005322c0
    ADD EAX,ESI                         ; 005322c4
    ADD EDX,0x4                         ; 005322c6
        ;   Label: LAB_005322c6
    FLD float ptr [EAX]                 ; 005322c9
    ADD EAX,0x4                         ; 005322cb
    FSTP float ptr [EDX + -0x4]         ; 005322ce
    CMP EAX,ECX                         ; 005322d1
    JNZ 0x005322c6                      ; 005322d3
        ;   XREF to: 005322c6 (CONDITIONAL_JUMP)  ; LAB_005322c6
    MOV ECX,dword ptr [ESP + 0x14]      ; 005322d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005322d9
    INC EBX                             ; 005322dd
    ADD ECX,EBP                         ; 005322de
    ADD EDX,EBP                         ; 005322e0
    MOV dword ptr [ESP + 0x14],ECX      ; 005322e2
    MOV dword ptr [ESP + 0xc],EDX       ; 005322e6
    CMP EBX,0x2                         ; 005322ea
    JL 0x005322b9                       ; 005322ed
        ;   XREF to: 005322b9 (CONDITIONAL_JUMP)  ; LAB_005322b9
    MOV EDX,dword ptr [ESP]             ; 005322ef
    LEA EAX,[EDX*0x8 + 0x0]             ; 005322f2
    ADD EAX,EDX                         ; 005322f9
    SHL EAX,0x2                         ; 005322fb
    ADD EAX,EDX                         ; 005322fe
    SHL EAX,0x2                         ; 00532300
    MOV EDX,dword ptr [EAX + 0x67e730]  ; 00532303 | g_Layer3BandIndex[0].s[3]
    MOV ECX,dword ptr [EAX + 0x67e734]  ; 00532309 | g_Layer3BandIndex[0].s[4]
    SUB ECX,EDX                         ; 0053230f
    MOV dword ptr [ESP + 0x34],ECX      ; 00532311
    LEA ECX,[EAX + 0xc]                 ; 00532315
    ADD EAX,0x34                        ; 00532318
    MOV dword ptr [ESP + 0x18],ECX      ; 0053231b
    MOV dword ptr [ESP + 0x4],EAX       ; 0053231f
    XOR EAX,EAX                         ; 00532323
        ;   Label: LAB_00532323
    LEA EDX,[EDX + EDX*0x2]             ; 00532325
    MOV dword ptr [ESP + 0x40],EAX      ; 00532328
    MOV dword ptr [ESP + 0x2c],EDX      ; 0053232c
    MOV EAX,dword ptr [ESP + 0x34]      ; 00532330
    MOV dword ptr [ESP + 0x38],EDX      ; 00532334
    MOV dword ptr [ESP + 0x24],EAX      ; 00532338
    MOV EDX,dword ptr [ESP + 0x34]      ; 0053233c
        ;   Label: LAB_0053233c
    TEST EDX,EDX                        ; 00532340
    JLE 0x005323d2                      ; 00532342
        ;   XREF to: 005323d2 (CONDITIONAL_JUMP)  ; LAB_005323d2
    MOV EAX,dword ptr [ESP + 0x40]      ; 00532348
    IMUL EAX,EDX                        ; 0053234c
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0053234f
    MOV EDX,dword ptr [ESP + 0x24]      ; 00532353
    ADD EAX,ECX                         ; 00532357
    MOV EBX,dword ptr [ESP + 0x38]      ; 00532359
    ADD EDX,EAX                         ; 0053235d
    MOV ECX,EAX                         ; 0053235f
    MOV dword ptr [ESP + 0x4c],EDX      ; 00532361
    MOV EBP,0x12                        ; 00532365
        ;   Label: LAB_00532365
    MOV EDX,ECX                         ; 0053236a
    MOV EAX,ECX                         ; 0053236c
    SAR EDX,0x1f                        ; 0053236e
    IDIV EBP                            ; 00532371
    IMUL EAX,EAX,0x48                   ; 00532373
    MOV EDX,ECX                         ; 00532376
    MOV dword ptr [ESP + 0x54],0x12     ; 00532378
    SAR EDX,0x1f                        ; 00532380
    LEA EBP,[ESI + EAX*0x1]             ; 00532383
    MOV EAX,ECX                         ; 00532386
    IDIV dword ptr [ESP + 0x54]         ; 00532388
    SHL EDX,0x2                         ; 0053238c
    ADD EBP,EDX                         ; 0053238f
    MOV EAX,EBX                         ; 00532391
    MOV dword ptr [ESP + 0x50],EBP      ; 00532393
    MOV EDX,EBX                         ; 00532397
    MOV EBP,0x12                        ; 00532399
    SAR EDX,0x1f                        ; 0053239e
    IDIV EBP                            ; 005323a1
    IMUL EAX,EAX,0x48                   ; 005323a3
    MOV EDX,EBX                         ; 005323a6
    MOV dword ptr [ESP + 0x54],0x12     ; 005323a8
    SAR EDX,0x1f                        ; 005323b0
    LEA EBP,[EDI + EAX*0x1]             ; 005323b3
    MOV EAX,EBX                         ; 005323b6
    IDIV dword ptr [ESP + 0x54]         ; 005323b8
    MOV EAX,dword ptr [ESP + 0x50]      ; 005323bc
    INC ECX                             ; 005323c0
    FLD float ptr [EAX]                 ; 005323c1
    FSTP float ptr [EBP + EDX*0x4]      ; 005323c3
    MOV EBP,dword ptr [ESP + 0x4c]      ; 005323c7
    ADD EBX,0x3                         ; 005323cb
    CMP ECX,EBP                         ; 005323ce
    JL 0x00532365                       ; 005323d0
        ;   XREF to: 00532365 (CONDITIONAL_JUMP)  ; LAB_00532365
    MOV EDX,dword ptr [ESP + 0x40]      ; 005323d2
        ;   Label: LAB_005323d2
    MOV EAX,dword ptr [ESP + 0x38]      ; 005323d6
    INC EDX                             ; 005323da
    INC EAX                             ; 005323db
    MOV dword ptr [ESP + 0x40],EDX      ; 005323dc
    MOV dword ptr [ESP + 0x38],EAX      ; 005323e0
    CMP EDX,0x3                         ; 005323e4
    JL 0x0053233c                       ; 005323e7
        ;   XREF to: 0053233c (CONDITIONAL_JUMP)  ; LAB_0053233c
    MOV EBX,dword ptr [ESP + 0x18]      ; 005323ed
    MOV EBP,dword ptr [ESP + 0x4]       ; 005323f1
    MOV EDX,dword ptr [EBX + 0x67e728]  ; 005323f5 | g_Layer3BandIndex[0].s[4]
    MOV EAX,dword ptr [EBX + 0x67e72c]  ; 005323fb | g_Layer3BandIndex[0].s[5]
    ADD EBX,0x4                         ; 00532401
    SUB EAX,EDX                         ; 00532404
    MOV dword ptr [ESP + 0x18],EBX      ; 00532406
    MOV dword ptr [ESP + 0x34],EAX      ; 0053240a
    CMP EBX,EBP                         ; 0053240e
    JZ 0x00532295                       ; 00532410
        ;   XREF to: 00532295 (CONDITIONAL_JUMP)  ; LAB_00532295
    JMP 0x00532323                      ; 00532416
        ;   XREF to: 00532323 (UNCONDITIONAL_JUMP)  ; LAB_00532323
    MOV ECX,dword ptr [ESP]             ; 0053241b
        ;   Label: LAB_0053241b
    LEA EAX,[ECX*0x8 + 0x0]             ; 0053241e
    ADD EAX,ECX                         ; 00532425
    SHL EAX,0x2                         ; 00532427
    ADD EAX,ECX                         ; 0053242a
    SHL EAX,0x2                         ; 0053242c
    XOR EDX,EDX                         ; 0053242f
    MOV dword ptr [ESP + 0x1c],EAX      ; 00532431
    MOV ECX,dword ptr [EAX + 0x67e728]  ; 00532435 | g_Layer3BandIndex[0].s[1]
    ADD EAX,0x34                        ; 0053243b
    MOV dword ptr [ESP + 0x30],ECX      ; 0053243e
    MOV dword ptr [ESP + 0x8],EAX       ; 00532442
    MOV EAX,dword ptr [ESP + 0x30]      ; 00532446
        ;   Label: LAB_00532446
    LEA EDX,[EDX + EDX*0x2]             ; 0053244a
    XOR EBX,EBX                         ; 0053244d
    MOV dword ptr [ESP + 0x28],EDX      ; 0053244f
    MOV dword ptr [ESP + 0x3c],EDX      ; 00532453
    MOV dword ptr [ESP + 0x20],EAX      ; 00532457
    MOV dword ptr [ESP + 0x44],EBX      ; 0053245b
    MOV EBP,dword ptr [ESP + 0x30]      ; 0053245f
        ;   Label: LAB_0053245f
    TEST EBP,EBP                        ; 00532463
    JLE 0x005324f5                      ; 00532465
        ;   XREF to: 005324f5 (CONDITIONAL_JUMP)  ; LAB_005324f5
    MOV EAX,dword ptr [ESP + 0x44]      ; 0053246b
    IMUL EAX,EBP                        ; 0053246f
    MOV EBP,dword ptr [ESP + 0x28]      ; 00532472
    MOV EDX,dword ptr [ESP + 0x20]      ; 00532476
    ADD EAX,EBP                         ; 0053247a
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0053247c
    ADD EDX,EAX                         ; 00532480
    MOV ECX,EAX                         ; 00532482
    MOV dword ptr [ESP + 0x48],EDX      ; 00532484
    MOV EBP,0x12                        ; 00532488
        ;   Label: LAB_00532488
    MOV EDX,ECX                         ; 0053248d
    MOV EAX,ECX                         ; 0053248f
    SAR EDX,0x1f                        ; 00532491
    IDIV EBP                            ; 00532494
    IMUL EAX,EAX,0x48                   ; 00532496
    MOV EDX,ECX                         ; 00532499
    MOV dword ptr [ESP + 0x54],0x12     ; 0053249b
    SAR EDX,0x1f                        ; 005324a3
    LEA EBP,[ESI + EAX*0x1]             ; 005324a6
    MOV EAX,ECX                         ; 005324a9
    IDIV dword ptr [ESP + 0x54]         ; 005324ab
    SHL EDX,0x2                         ; 005324af
    ADD EBP,EDX                         ; 005324b2
    MOV EAX,EBX                         ; 005324b4
    MOV dword ptr [ESP + 0x50],EBP      ; 005324b6
    MOV EDX,EBX                         ; 005324ba
    MOV EBP,0x12                        ; 005324bc
    SAR EDX,0x1f                        ; 005324c1
    IDIV EBP                            ; 005324c4
    IMUL EAX,EAX,0x48                   ; 005324c6
    MOV EDX,EBX                         ; 005324c9
    MOV dword ptr [ESP + 0x54],0x12     ; 005324cb
    SAR EDX,0x1f                        ; 005324d3
    LEA EBP,[EDI + EAX*0x1]             ; 005324d6
    MOV EAX,EBX                         ; 005324d9
    IDIV dword ptr [ESP + 0x54]         ; 005324db
    MOV EAX,dword ptr [ESP + 0x50]      ; 005324df
    INC ECX                             ; 005324e3
    ADD EBX,0x3                         ; 005324e4
    FLD float ptr [EAX]                 ; 005324e7
    MOV EAX,dword ptr [ESP + 0x48]      ; 005324e9
    FSTP float ptr [EBP + EDX*0x4]      ; 005324ed
    CMP ECX,EAX                         ; 005324f1
    JL 0x00532488                       ; 005324f3
        ;   XREF to: 00532488 (CONDITIONAL_JUMP)  ; LAB_00532488
    MOV ECX,dword ptr [ESP + 0x44]      ; 005324f5
        ;   Label: LAB_005324f5
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005324f9
    INC ECX                             ; 005324fd
    INC EDX                             ; 005324fe
    MOV dword ptr [ESP + 0x44],ECX      ; 005324ff
    MOV dword ptr [ESP + 0x3c],EDX      ; 00532503
    CMP ECX,0x3                         ; 00532507
    JL 0x0053245f                       ; 0053250a
        ;   XREF to: 0053245f (CONDITIONAL_JUMP)  ; LAB_0053245f
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00532510
    MOV ECX,dword ptr [ESP + 0x8]       ; 00532514
    MOV EDX,dword ptr [EBP + 0x67e728]  ; 00532518 | g_Layer3BandIndex[0].s[1]
    MOV EAX,dword ptr [EBP + 0x67e72c]  ; 0053251e | g_Layer3BandIndex[0].s[2]
    ADD EBP,0x4                         ; 00532524
    SUB EAX,EDX                         ; 00532527
    MOV dword ptr [ESP + 0x1c],EBP      ; 00532529
    MOV dword ptr [ESP + 0x30],EAX      ; 0053252d
    CMP EBP,ECX                         ; 00532531
    JZ 0x00532295                       ; 00532533
        ;   XREF to: 00532295 (CONDITIONAL_JUMP)  ; LAB_00532295
    JMP 0x00532446                      ; 00532539
        ;   XREF to: 00532446 (UNCONDITIONAL_JUMP)  ; LAB_00532446


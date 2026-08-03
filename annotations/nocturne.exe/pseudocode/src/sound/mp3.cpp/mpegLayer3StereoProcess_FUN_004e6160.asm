; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_mpegLayer3StereoProcess_FUN_004e6160(SMpegStereoSubbandSamples *input_lr_samples,SMpegStereoSubbandSamples *output_samples,SMpegScalefactorBandData *scalefactor_data,SMpegLayer3GranuleInfo *granule,SMpegFrame *frame)
;
; Parameters:
; SMpegStereoSubbandSamples * Stack[0x4]:4   input_lr_samples
; SMpegStereoSubbandSamples * Stack[0x8]:4   output_samples
; SMpegScalefactorBandData * Stack[0xc]:4   scalefactor_data
; SMpegLayer3GranuleInfo * Stack[0x10]:4   granule
; SMpegFrame *     Stack[0x14]:4   frame
; Local Variables:
; undefined4       Stack[-0x2080]:4  local_2080
; undefined4       Stack[-0x207c]:4  local_207c
; undefined        Stack[-0x2078]:1  local_2078
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
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
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0 at 004e9149
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0058b8b0
;   TerminatedCString s_Error_in_streo_processin_0058b8c1
;   double DOUBLE_0058b8e8 = 0.261799387799149
;   double DOUBLE_0058b8f0 = 0.707106782373095
;   undefined4 DAT_005bc0f8
;   undefined4 DAT_005bc0fc
;   undefined4 DAT_005bc100
;   undefined4 DAT_005bc104
;   undefined4 DAT_005bc128
;   undefined4 DAT_005bc12c
;   undefined4 DAT_005bc148
;   undefined4 DAT_005bc14c
;   undefined4 DAT_005bc180
;   undefined4 DAT_005bc184
;   undefined4 DAT_005bc188
;   ... and 4 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   sound_mp3.cpp_calculateIntensityStereoRatio_FUN_004e60c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6160
        ;   Label: sound_mp3.cpp_mpegLayer3StereoProcess_FUN_004e6160
    PUSH ESI                            ; 004e6161
    PUSH EDI                            ; 004e6162
    PUSH EBP                            ; 004e6163
    MOV EBP,ESP                         ; 004e6164
    SUB ESP,0x206c                      ; 004e6166
    AND ESP,0xfffffff8                  ; 004e616c
    MOV ECX,dword ptr [EBP + 0x20]      ; 004e616f
    MOV EAX,dword ptr [EBP + 0x24]      ; 004e6172
    MOV EDX,dword ptr [EAX + 0x10]      ; 004e6175
    MOV dword ptr [ESP + 0x1f90],EDX    ; 004e6178
    MOV EDX,dword ptr [EAX]             ; 004e617f
    CMP dword ptr [EDX + 0x1c],0x1      ; 004e6181
    JNZ 0x004e63ed                      ; 004e6185
        ;   XREF to: 004e63ed (CONDITIONAL_JUMP)  ; LAB_004e63ed
    TEST byte ptr [EDX + 0x20],0x2      ; 004e618b
    JZ 0x004e63ed                       ; 004e618f
        ;   XREF to: 004e63ed (CONDITIONAL_JUMP)  ; LAB_004e63ed
    MOV EDX,0x1                         ; 004e6195
    MOV dword ptr [ESP + 0x1f94],EDX    ; 004e619a
        ;   Label: LAB_004e619a
    MOV EDX,dword ptr [EAX]             ; 004e61a1
    MOV ESI,dword ptr [EDX + 0x1c]      ; 004e61a3
    CMP ESI,0x1                         ; 004e61a6
    JNZ 0x004e63f4                      ; 004e61a9
        ;   XREF to: 004e63f4 (CONDITIONAL_JUMP)  ; LAB_004e63f4
    TEST byte ptr [EDX + 0x20],0x1      ; 004e61af
    JZ 0x004e63f4                       ; 004e61b3
        ;   XREF to: 004e63f4 (CONDITIONAL_JUMP)  ; LAB_004e63f4
    MOV EDX,ESI                         ; 004e61b9
    MOV dword ptr [ESP + 0x1fd4],EDX    ; 004e61bb
        ;   Label: LAB_004e61bb
    MOV EDX,dword ptr [EAX]             ; 004e61c2
    CMP dword ptr [EDX],0x0             ; 004e61c4
    SETZ DL                             ; 004e61c7
    AND EDX,0xff                        ; 004e61ca
    MOV dword ptr [ESP + 0x1fa0],EDX    ; 004e61d0
    MOV EDX,dword ptr [ECX + 0xc]       ; 004e61d7
    AND EDX,0x1                         ; 004e61da
    CMP EDX,0x1                         ; 004e61dd
    JNZ 0x004e63fb                      ; 004e61e0
        ;   XREF to: 004e63fb (CONDITIONAL_JUMP)  ; LAB_004e63fb
    MOV ESI,0x667f6ee7                  ; 004e61e6
    MOV EDI,0x3fe6a09e                  ; 004e61eb
    MOV dword ptr [ESP],ESI             ; 004e61f0
    MOV dword ptr [ESP + 0x4],EDI       ; 004e61f3
    MOV EBX,dword ptr [EAX]             ; 004e61f7
        ;   Label: LAB_004e61f7
    MOV EDX,dword ptr [EBX]             ; 004e61f9
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e61fb
    SUB EAX,EDX                         ; 004e6202
    MOV EDX,dword ptr [EBX + 0x10]      ; 004e6204
    ADD EDX,EAX                         ; 004e6207
    MOV dword ptr [ESP + 0x1f8c],EDX    ; 004e6209
    XOR EAX,EAX                         ; 004e6210
    MOV EDX,0x7                         ; 004e6212
    ADD EAX,0x2                         ; 004e6217
        ;   Label: LAB_004e6217
    MOV word ptr [ESP + EAX*0x1 + 0x1b06],DX ; 004e621a
    CMP EAX,0x480                       ; 004e6222
    JNZ 0x004e6217                      ; 004e6227
        ;   XREF to: 004e6217 (CONDITIONAL_JUMP)  ; LAB_004e6217
    MOV EAX,dword ptr [ESP + 0x1f90]    ; 004e6229
    CMP EAX,0x2                         ; 004e6230
    JZ 0x004e6411                       ; 004e6233
        ;   XREF to: 004e6411 (CONDITIONAL_JUMP)  ; LAB_004e6411
    LEA EAX,[EAX]                       ; 004e6239
    NOP                                 ; 004e623f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e6240
        ;   Label: LAB_004e6240
    MOV dword ptr [ESP + 0x2024],EAX    ; 004e6243
    ADD EAX,0x1200                      ; 004e624a
    MOV dword ptr [ESP + 0x2028],EAX    ; 004e624f
    MOV ESI,dword ptr [ESP + 0x2024]    ; 004e6256
        ;   Label: LAB_004e6256
    XOR EDX,EDX                         ; 004e625d
    LEA EBX,[ESI + 0x48]                ; 004e625f
    IMUL EAX,EDX,0x48                   ; 004e6262
        ;   Label: LAB_004e6262
    LEA ECX,[ESI + EAX*0x1]             ; 004e6265
    MOV EAX,EBX                         ; 004e6268
    MOV dword ptr [ECX],0x0             ; 004e626a
        ;   Label: LAB_004e626a
    ADD ECX,0x4                         ; 004e6270
    CMP ECX,EAX                         ; 004e6273
    JNZ 0x004e626a                      ; 004e6275
        ;   XREF to: 004e626a (CONDITIONAL_JUMP)  ; LAB_004e626a
    INC EDX                             ; 004e6277
    ADD EBX,0x48                        ; 004e6278
    CMP EDX,0x20                        ; 004e627b
    JL 0x004e6262                       ; 004e627e
        ;   XREF to: 004e6262 (CONDITIONAL_JUMP)  ; LAB_004e6262
    MOV EDX,dword ptr [ESP + 0x2024]    ; 004e6280
    ADD EDX,0x900                       ; 004e6287
    MOV ECX,dword ptr [ESP + 0x2028]    ; 004e628d
    MOV dword ptr [ESP + 0x2024],EDX    ; 004e6294
    CMP EDX,ECX                         ; 004e629b
    JNZ 0x004e6256                      ; 004e629d
        ;   XREF to: 004e6256 (CONDITIONAL_JUMP)  ; LAB_004e6256
    CMP dword ptr [ESP + 0x1f90],0x2    ; 004e629f
    JNZ 0x004e6fd7                      ; 004e62a7
        ;   XREF to: 004e6fd7 (CONDITIONAL_JUMP)  ; LAB_004e6fd7
    XOR ESI,ESI                         ; 004e62ad
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e62af
    MOV dword ptr [ESP + 0x2060],ESI    ; 004e62b2
    MOV dword ptr [ESP + 0x203c],EAX    ; 004e62b9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e62c0
    MOV dword ptr [ESP + 0x2044],ESI    ; 004e62c3
    MOV dword ptr [ESP + 0x2040],EAX    ; 004e62ca
    MOV ESI,dword ptr [ESP + 0x2060]    ; 004e62d1
        ;   Label: LAB_004e62d1
    IMUL EAX,ESI,0x12                   ; 004e62d8
    MOV dword ptr [ESP + 0x1fe0],EAX    ; 004e62db
    MOV EAX,dword ptr [ESP + 0x2044]    ; 004e62e2
    MOV dword ptr [ESP + 0x2030],EAX    ; 004e62e9
    MOV EAX,dword ptr [ESP + 0x2040]    ; 004e62f0
    XOR EBX,EBX                         ; 004e62f7
    MOV dword ptr [ESP + 0x2034],EAX    ; 004e62f9
    MOV EAX,dword ptr [ESP + 0x203c]    ; 004e6300
    XOR ESI,ESI                         ; 004e6307
    MOV dword ptr [ESP + 0x2038],EAX    ; 004e6309
    MOV EAX,dword ptr [ESP + 0x1fe0]    ; 004e6310
        ;   Label: LAB_004e6310
    MOV ECX,dword ptr [ESP + 0x2030]    ; 004e6317
    MOV EDX,dword ptr [ESP + 0x2034]    ; 004e631e
    ADD EAX,EBX                         ; 004e6325
    MOV DI,word ptr [ESP + ECX*0x1 + 0x1b08] ; 004e6327
    MOV dword ptr [ESP + 0x1f88],EAX    ; 004e632f
    MOV EAX,dword ptr [ESP + 0x2038]    ; 004e6336
    ADD EDX,ESI                         ; 004e633d
    ADD EAX,ESI                         ; 004e633f
    CMP DI,0x7                          ; 004e6341
    JNZ 0x004e6f4c                      ; 004e6345
        ;   XREF to: 004e6f4c (CONDITIONAL_JUMP)  ; LAB_004e6f4c
    CMP dword ptr [ESP + 0x1f94],0x0    ; 004e634b
    JZ 0x004e6f37                       ; 004e6353
        ;   XREF to: 004e6f37 (CONDITIONAL_JUMP)  ; LAB_004e6f37
    FLD float ptr [EAX]                 ; 004e6359
    FADD float ptr [EAX + 0x900]        ; 004e635b
    FLD double ptr [0x0058b8f0]         ; 004e6361 | DOUBLE_0058b8f0
    FXCH                                ; 004e6367
    FMUL ST1                            ; 004e6369
    FSTP float ptr [EDX]                ; 004e636b
    FLD float ptr [EAX]                 ; 004e636d
    FSUB float ptr [EAX + 0x900]        ; 004e636f
    FMULP                               ; 004e6375
    FSTP float ptr [EDX + 0x900]        ; 004e6377
        ;   Label: LAB_004e6377
    MOV EDI,dword ptr [ESP + 0x2030]    ; 004e637d
        ;   Label: LAB_004e637d
    INC EBX                             ; 004e6384
    ADD EDI,0x2                         ; 004e6385
    ADD ESI,0x4                         ; 004e6388
    MOV dword ptr [ESP + 0x2030],EDI    ; 004e638b
    CMP EBX,0x12                        ; 004e6392
    JL 0x004e6310                       ; 004e6395
        ;   XREF to: 004e6310 (CONDITIONAL_JUMP)  ; LAB_004e6310
    MOV EDX,dword ptr [ESP + 0x2040]    ; 004e639b
    MOV ECX,dword ptr [ESP + 0x2044]    ; 004e63a2
    MOV EBX,dword ptr [ESP + 0x2060]    ; 004e63a9
    MOV EAX,dword ptr [ESP + 0x203c]    ; 004e63b0
    ADD EDX,0x48                        ; 004e63b7
    ADD ECX,0x24                        ; 004e63ba
    INC EBX                             ; 004e63bd
    ADD EAX,0x48                        ; 004e63be
    MOV dword ptr [ESP + 0x2040],EDX    ; 004e63c1
    MOV dword ptr [ESP + 0x2044],ECX    ; 004e63c8
    MOV dword ptr [ESP + 0x2060],EBX    ; 004e63cf
    MOV dword ptr [ESP + 0x203c],EAX    ; 004e63d6
    CMP EBX,0x20                        ; 004e63dd
    JL 0x004e62d1                       ; 004e63e0
        ;   XREF to: 004e62d1 (CONDITIONAL_JUMP)  ; LAB_004e62d1
    MOV ESP,EBP                         ; 004e63e6
        ;   Label: LAB_004e63e6
    POP EBP                             ; 004e63e8
    POP EDI                             ; 004e63e9
    POP ESI                             ; 004e63ea
    POP EBX                             ; 004e63eb
    RET                                 ; 004e63ec
    XOR EDX,EDX                         ; 004e63ed
        ;   Label: LAB_004e63ed
    JMP 0x004e619a                      ; 004e63ef
        ;   XREF to: 004e619a (UNCONDITIONAL_JUMP)  ; LAB_004e619a
    XOR EDX,EDX                         ; 004e63f4
        ;   Label: LAB_004e63f4
    JMP 0x004e61bb                      ; 004e63f6
        ;   XREF to: 004e61bb (UNCONDITIONAL_JUMP)  ; LAB_004e61bb
    MOV EDX,0x995b2417                  ; 004e63fb
        ;   Label: LAB_004e63fb
    MOV EBX,0x3feae89f                  ; 004e6400
    MOV dword ptr [ESP],EDX             ; 004e6405
    MOV dword ptr [ESP + 0x4],EBX       ; 004e6408
    JMP 0x004e61f7                      ; 004e640c
        ;   XREF to: 004e61f7 (UNCONDITIONAL_JUMP)  ; LAB_004e61f7
    CMP dword ptr [ESP + 0x1fd4],0x0    ; 004e6411
        ;   Label: LAB_004e6411
    JZ 0x004e6240                       ; 004e6419
        ;   XREF to: 004e6240 (CONDITIONAL_JUMP)  ; LAB_004e6240
    CMP dword ptr [ECX + 0x10],0x0      ; 004e641f
    JNZ 0x004e667c                      ; 004e6423
        ;   XREF to: 004e667c (CONDITIONAL_JUMP)  ; LAB_004e667c
    MOV ECX,0x1f                        ; 004e6429
        ;   Label: LAB_004e6429
    MOV EDX,0x11                        ; 004e642e
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e6433
    XOR EDI,EDI                         ; 004e6436
    ADD EBX,0x8b8                       ; 004e6438
    MOV ESI,EDX                         ; 004e643e
    TEST dword ptr [EBX + EDX*0x4 + 0x900],0x7fffffff ; 004e6440
        ;   Label: LAB_004e6440
    JZ 0x004e6efb                       ; 004e644b
        ;   XREF to: 004e6efb (CONDITIONAL_JUMP)  ; LAB_004e6efb
    LEA EAX,[ECX*0x8 + 0x0]             ; 004e6451
    ADD EAX,ECX                         ; 004e6458
    ADD EAX,EAX                         ; 004e645a
    LEA EDI,[EAX + EDX*0x1]             ; 004e645c
    MOV EDX,dword ptr [ESP + 0x1f8c]    ; 004e645f
        ;   Label: LAB_004e645f
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e6466
    ADD EAX,EDX                         ; 004e646d
    SHL EAX,0x2                         ; 004e646f
    ADD EDX,EAX                         ; 004e6472
    SHL EDX,0x2                         ; 004e6474
    XOR ESI,ESI                         ; 004e6477
    MOV ECX,dword ptr [EDX + 0x5bc0f8]  ; 004e6479 | DAT_005bc0f8
    MOV EAX,EDX                         ; 004e647f
    CMP EDI,ECX                         ; 004e6481
    JL 0x004e64a0                       ; 004e6483
        ;   XREF to: 004e64a0 (CONDITIONAL_JUMP)  ; LAB_004e64a0
    INC ESI                             ; 004e6485
        ;   Label: LAB_004e6485
    MOV EBX,dword ptr [EAX + 0x5bc0fc]  ; 004e6486 | DAT_005bc0fc | DAT_005bc100
    ADD EAX,0x4                         ; 004e648c
    CMP EDI,EBX                         ; 004e648f
    JGE 0x004e6485                      ; 004e6491
        ;   XREF to: 004e6485 (CONDITIONAL_JUMP)  ; LAB_004e6485
    LEA EAX,[EAX]                       ; 004e6493
    LEA EDX,[EDX]                       ; 004e6499
    NOP                                 ; 004e649f
    MOV EDX,dword ptr [ESP + 0x1f8c]    ; 004e64a0
        ;   Label: LAB_004e64a0
    MOV dword ptr [ESP + 0x1f98],ESI    ; 004e64a7
    MOV ESI,dword ptr [EAX + 0x5bc0f8]  ; 004e64ae | DAT_005bc0fc | DAT_005bc100 | DAT_005bc0f8
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e64b4
    ADD EAX,EDX                         ; 004e64bb
    SHL EAX,0x2                         ; 004e64bd
    ADD EAX,EDX                         ; 004e64c0
    MOV EDI,dword ptr [ESP + 0x1f98]    ; 004e64c2
    SHL EAX,0x2                         ; 004e64c9
    SHL EDI,0x2                         ; 004e64cc
    MOV dword ptr [ESP + 0x1fec],EAX    ; 004e64cf
    ADD EAX,EDI                         ; 004e64d6
    MOV dword ptr [ESP + 0x1ff4],EAX    ; 004e64d8
    CMP dword ptr [ESP + 0x1f98],0x15   ; 004e64df
    JGE 0x004e65db                      ; 004e64e7
        ;   XREF to: 004e65db (CONDITIONAL_JUMP)  ; LAB_004e65db
    MOV dword ptr [ESP + 0x1ff8],EDI    ; 004e64ed
    MOV EAX,dword ptr [ESP + 0x1ff4]    ; 004e64f4
        ;   Label: LAB_004e64f4
    MOV EDI,dword ptr [ESP + 0x1ff4]    ; 004e64fb
    MOV EBX,dword ptr [EAX + 0x5bc0f8]  ; 004e6502 | DAT_005bc0fc | DAT_005bc100
    MOV EDI,dword ptr [EDI + 0x5bc0fc]  ; 004e6508 | DAT_005bc100 | DAT_005bc104
    SUB EDI,EBX                         ; 004e650e
    TEST EDI,EDI                        ; 004e6510
    JLE 0x004e65a1                      ; 004e6512
        ;   XREF to: 004e65a1 (CONDITIONAL_JUMP)  ; LAB_004e65a1
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004e6518
    ADD EAX,dword ptr [ESP + 0x1ff8]    ; 004e651b
    LEA EBX,[ESI + ESI*0x1]             ; 004e6522
    MOV dword ptr [ESP + 0x1fd8],EAX    ; 004e6525
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e652c
    MOV dword ptr [ESP + 0x1ff0],EAX    ; 004e6533
    MOV EAX,dword ptr [ESP + 0x1fd8]    ; 004e653a
        ;   Label: LAB_004e653a
    MOV AX,word ptr [EAX + 0xf8]        ; 004e6541
    MOV word ptr [ESP + EBX*0x1 + 0x1b08],AX ; 004e6548
    CMP AX,0x7                          ; 004e6550
    JZ 0x004e6587                       ; 004e6554
        ;   XREF to: 004e6587 (CONDITIONAL_JUMP)  ; LAB_004e6587
    CMP dword ptr [ESP + 0x1fa0],0x0    ; 004e6556
    JZ 0x004e6f13                       ; 004e655e
        ;   XREF to: 004e6f13 (CONDITIONAL_JUMP)  ; LAB_004e6f13
    LEA EAX,[ESP + 0x8]                 ; 004e6564
    PUSH EAX                            ; 004e6568
    PUSH ESI                            ; 004e6569
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e656a
    PUSH EAX                            ; 004e656e
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e656f
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x1b12] ; 004e6573
    PUSH EDX                            ; 004e657a
    SAR EAX,0x10                        ; 004e657b
    PUSH EAX                            ; 004e657e
    CALL sound_mp3.cpp_calculateIntensityStereoRatio_FUN_004e60c0 ; 004e657f
        ;   XREF to: 004e60c0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_calculateIntensityStereoRatio_FUN_004e60c0(int intensity_position, double ratio, int sample_index, float * ratio_buffer)
    ADD ESP,0x14                        ; 004e6584
    MOV EAX,dword ptr [ESP + 0x1ff0]    ; 004e6587
        ;   Label: LAB_004e6587
    ADD EBX,0x2                         ; 004e658e
    INC ESI                             ; 004e6591
    ADD EAX,0x4                         ; 004e6592
    DEC EDI                             ; 004e6595
    MOV dword ptr [ESP + 0x1ff0],EAX    ; 004e6596
    TEST EDI,EDI                        ; 004e659d
    JG 0x004e653a                       ; 004e659f
        ;   XREF to: 004e653a (CONDITIONAL_JUMP)  ; LAB_004e653a
    MOV EDX,dword ptr [ESP + 0x1ff4]    ; 004e65a1
        ;   Label: LAB_004e65a1
    MOV ECX,dword ptr [ESP + 0x1ff8]    ; 004e65a8
    MOV EBX,dword ptr [ESP + 0x1f98]    ; 004e65af
    ADD EDX,0x4                         ; 004e65b6
    ADD ECX,0x4                         ; 004e65b9
    INC EBX                             ; 004e65bc
    MOV dword ptr [ESP + 0x1ff4],EDX    ; 004e65bd
    MOV dword ptr [ESP + 0x1ff8],ECX    ; 004e65c4
    MOV dword ptr [ESP + 0x1f98],EBX    ; 004e65cb
    CMP ECX,0x54                        ; 004e65d2
    JL 0x004e64f4                       ; 004e65d5
        ;   XREF to: 004e64f4 (CONDITIONAL_JUMP)  ; LAB_004e64f4
    MOV EAX,dword ptr [ESP + 0x1fec]    ; 004e65db
        ;   Label: LAB_004e65db
    MOV EDI,0x240                       ; 004e65e2
    MOV ECX,dword ptr [EAX + 0x5bc14c]  ; 004e65e7 | DAT_005bc14c
    MOV EDX,dword ptr [ESP + 0x1fec]    ; 004e65ed
    SUB EDI,ECX                         ; 004e65f4
    MOV EDX,dword ptr [EDX + 0x5bc148]  ; 004e65f6 | DAT_005bc148
    TEST EDI,EDI                        ; 004e65fc
    JLE 0x004e6240                      ; 004e65fe
        ;   XREF to: 004e6240 (CONDITIONAL_JUMP)  ; LAB_004e6240
    LEA EAX,[EDX + EDX*0x1]             ; 004e6604
    MOV dword ptr [ESP + 0x1fdc],EAX    ; 004e6607
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e660e
    LEA ECX,[ESI + ESI*0x1]             ; 004e6615
    SHL EDX,0x2                         ; 004e6618
    MOV dword ptr [ESP + 0x1ffc],ECX    ; 004e661b
    FLD float ptr [ESP + EDX*0x1 + 0x1208] ; 004e6622
        ;   Label: LAB_004e6622
    FLD float ptr [ESP + EDX*0x1 + 0x8] ; 004e6629
    MOV EBX,dword ptr [ESP + 0x1fdc]    ; 004e662d
    MOV ECX,dword ptr [ESP + 0x1ffc]    ; 004e6634
    ADD EAX,0x4                         ; 004e663b
    INC ESI                             ; 004e663e
    DEC EDI                             ; 004e663f
    FSTP float ptr [ESP + EAX*0x1 + 0x4] ; 004e6640
    FSTP float ptr [ESP + EAX*0x1 + 0x1204] ; 004e6644
    FLD float ptr [ESP + EDX*0x1 + 0x908] ; 004e664b
    ADD ECX,0x2                         ; 004e6652
    MOV BX,word ptr [ESP + EBX*0x1 + 0x1b08] ; 004e6655
    FSTP float ptr [ESP + EAX*0x1 + 0x904] ; 004e665d
    MOV dword ptr [ESP + 0x1ffc],ECX    ; 004e6664
    MOV word ptr [ESP + ECX*0x1 + 0x1b06],BX ; 004e666b
    TEST EDI,EDI                        ; 004e6673
    JG 0x004e6622                       ; 004e6675
        ;   XREF to: 004e6622 (CONDITIONAL_JUMP)  ; LAB_004e6622
    JMP 0x004e6240                      ; 004e6677
        ;   XREF to: 004e6240 (UNCONDITIONAL_JUMP)  ; LAB_004e6240
    CMP EAX,dword ptr [ECX + 0x14]      ; 004e667c
        ;   Label: LAB_004e667c
    JNZ 0x004e6429                      ; 004e667f
        ;   XREF to: 004e6429 (CONDITIONAL_JUMP)  ; LAB_004e6429
    MOV EDX,dword ptr [ESP + 0x1f8c]    ; 004e6685
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e668c
    ADD EAX,EDX                         ; 004e6693
    SHL EAX,0x2                         ; 004e6695
    ADD EAX,EDX                         ; 004e6698
    MOV EDI,dword ptr [ECX + 0x18]      ; 004e669a
    SHL EAX,0x2                         ; 004e669d
    TEST EDI,EDI                        ; 004e66a0
    JZ 0x004e6bd9                       ; 004e66a2
        ;   XREF to: 004e6bd9 (CONDITIONAL_JUMP)  ; LAB_004e6bd9
    MOV dword ptr [ESP + 0x1fe8],EAX    ; 004e66a8
    MOV dword ptr [ESP + 0x1fac],EAX    ; 004e66af
    XOR ECX,ECX                         ; 004e66b6
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004e66b8
    MOV dword ptr [ESP + 0x1fa4],ECX    ; 004e66bb
    MOV dword ptr [ESP + 0x205c],ECX    ; 004e66c2
    MOV dword ptr [ESP + 0x2018],EAX    ; 004e66c9
    MOV EBX,0x2                         ; 004e66d0
        ;   Label: LAB_004e66d0
    MOV EAX,dword ptr [ESP + 0x205c]    ; 004e66d5
    MOV ESI,0xc                         ; 004e66dc
    INC EAX                             ; 004e66e1
    MOV dword ptr [ESP + 0x1fa8],EBX    ; 004e66e2
    MOV dword ptr [ESP + 0x1fb0],EAX    ; 004e66e9
    MOV EDI,dword ptr [ESP + 0x1fac]    ; 004e66f0
        ;   Label: LAB_004e66f0
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e66f7
    ADD EAX,EDI                         ; 004e66fe
    MOV EBX,dword ptr [EAX + 0x5bc158]  ; 004e6700 | DAT_005bc188 | DAT_005bc12c
    MOV EDX,dword ptr [EAX + 0x5bc154]  ; 004e6706 | DAT_005bc184 | DAT_005bc128
    MOV EAX,dword ptr [ESP + 0x1fb0]    ; 004e670c
    SUB EBX,EDX                         ; 004e6713
    IMUL EAX,EBX                        ; 004e6715
    LEA EDX,[EDX + EDX*0x2]             ; 004e6718
    ADD EAX,EDX                         ; 004e671b
    LEA ECX,[EAX + -0x1]                ; 004e671d
    TEST EBX,EBX                        ; 004e6720
    JLE 0x004e6774                      ; 004e6722
        ;   XREF to: 004e6774 (CONDITIONAL_JUMP)  ; LAB_004e6774
    MOV EDI,0x12                        ; 004e6724
        ;   Label: LAB_004e6724
    MOV EDX,ECX                         ; 004e6729
    MOV EAX,ECX                         ; 004e672b
    SAR EDX,0x1f                        ; 004e672d
    IDIV EDI                            ; 004e6730
    IMUL EAX,EAX,0x48                   ; 004e6732
    MOV dword ptr [ESP + 0x2068],0x12   ; 004e6735
    MOV EDX,ECX                         ; 004e6740
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e6742
    SAR EDX,0x1f                        ; 004e6745
    ADD EDI,EAX                         ; 004e6748
    MOV EAX,ECX                         ; 004e674a
    IDIV dword ptr [ESP + 0x2068]       ; 004e674c
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 004e6753
    JZ 0x004e676e                       ; 004e675e
        ;   XREF to: 004e676e (CONDITIONAL_JUMP)  ; LAB_004e676e
    MOV dword ptr [ESP + 0x1fa8],ESI    ; 004e6760
    MOV ESI,0xfffffff6                  ; 004e6767
    MOV EBX,ESI                         ; 004e676c
    DEC EBX                             ; 004e676e
        ;   Label: LAB_004e676e
    DEC ECX                             ; 004e676f
    TEST EBX,EBX                        ; 004e6770
    JG 0x004e6724                       ; 004e6772
        ;   XREF to: 004e6724 (CONDITIONAL_JUMP)  ; LAB_004e6724
    DEC ESI                             ; 004e6774
        ;   Label: LAB_004e6774
    CMP ESI,0x3                         ; 004e6775
    JGE 0x004e66f0                      ; 004e6778
        ;   XREF to: 004e66f0 (CONDITIONAL_JUMP)  ; LAB_004e66f0
    MOV EAX,dword ptr [ESP + 0x1fa8]    ; 004e677e
    INC EAX                             ; 004e6785
    MOV ECX,dword ptr [ESP + 0x1fa4]    ; 004e6786
    MOV dword ptr [ESP + 0x204c],EAX    ; 004e678d
    CMP EAX,ECX                         ; 004e6794
    JG 0x004e6aa5                       ; 004e6796
        ;   XREF to: 004e6aa5 (CONDITIONAL_JUMP)  ; LAB_004e6aa5
    MOV EAX,dword ptr [ESP + 0x2018]    ; 004e679c
        ;   Label: LAB_004e679c
    MOV dword ptr [ESP + 0x1fb4],EAX    ; 004e67a3
    MOV EAX,dword ptr [ESP + 0x204c]    ; 004e67aa
    MOV EBX,dword ptr [ESP + 0x1fe8]    ; 004e67b1
    SHL EAX,0x2                         ; 004e67b8
    ADD EAX,EBX                         ; 004e67bb
    MOV dword ptr [ESP + 0x2014],EAX    ; 004e67bd
    MOV ESI,dword ptr [ESP + 0x204c]    ; 004e67c4
        ;   Label: LAB_004e67c4
    CMP ESI,0xc                         ; 004e67cb
    JGE 0x004e6ad5                      ; 004e67ce
        ;   XREF to: 004e6ad5 (CONDITIONAL_JUMP)  ; LAB_004e6ad5
    LEA EDX,[ESI*0x4 + 0x0]             ; 004e67d4
    MOV EAX,dword ptr [ESP + 0x2014]    ; 004e67db
    MOV ESI,dword ptr [ESP + 0x2014]    ; 004e67e2
    MOV EDI,dword ptr [EAX + 0x5bc154]  ; 004e67e9 | DAT_005bc188
    MOV ESI,dword ptr [ESI + 0x5bc158]  ; 004e67ef | DAT_005bc18c
    MOV EAX,dword ptr [ESP + 0x205c]    ; 004e67f5
    SUB ESI,EDI                         ; 004e67fc
    IMUL EAX,ESI                        ; 004e67fe
    LEA EDI,[EDI + EDI*0x2]             ; 004e6801
    ADD EDI,EAX                         ; 004e6804
    TEST ESI,ESI                        ; 004e6806
    JLE 0x004e6896                      ; 004e6808
        ;   XREF to: 004e6896 (CONDITIONAL_JUMP)  ; LAB_004e6896
    MOV EAX,dword ptr [ESP + 0x1fb4]    ; 004e680e
    ADD EAX,EDX                         ; 004e6815
    LEA EBX,[EDI + EDI*0x1]             ; 004e6817
    MOV dword ptr [ESP + 0x1fb8],EAX    ; 004e681a
    LEA EAX,[EDI*0x4 + 0x0]             ; 004e6821
    MOV dword ptr [ESP + 0x2010],EAX    ; 004e6828
    MOV EAX,dword ptr [ESP + 0x1fb8]    ; 004e682f
        ;   Label: LAB_004e682f
    MOV AX,word ptr [EAX + 0x154]       ; 004e6836
    MOV word ptr [ESP + EBX*0x1 + 0x1b08],AX ; 004e683d
    CMP AX,0x7                          ; 004e6845
    JZ 0x004e687c                       ; 004e6849
        ;   XREF to: 004e687c (CONDITIONAL_JUMP)  ; LAB_004e687c
    CMP dword ptr [ESP + 0x1fa0],0x0    ; 004e684b
    JZ 0x004e6ab1                       ; 004e6853
        ;   XREF to: 004e6ab1 (CONDITIONAL_JUMP)  ; LAB_004e6ab1
    LEA EAX,[ESP + 0x8]                 ; 004e6859
    PUSH EAX                            ; 004e685d
    PUSH EDI                            ; 004e685e
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e685f
    PUSH EDX                            ; 004e6863
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e6864
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x1b12] ; 004e6868
    PUSH ECX                            ; 004e686f
    SAR EAX,0x10                        ; 004e6870
    PUSH EAX                            ; 004e6873
    CALL sound_mp3.cpp_calculateIntensityStereoRatio_FUN_004e60c0 ; 004e6874
        ;   XREF to: 004e60c0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_calculateIntensityStereoRatio_FUN_004e60c0(int intensity_position, double ratio, int sample_index, float * ratio_buffer)
    ADD ESP,0x14                        ; 004e6879
    MOV EAX,dword ptr [ESP + 0x2010]    ; 004e687c
        ;   Label: LAB_004e687c
    ADD EBX,0x2                         ; 004e6883
    INC EDI                             ; 004e6886
    ADD EAX,0x4                         ; 004e6887
    DEC ESI                             ; 004e688a
    MOV dword ptr [ESP + 0x2010],EAX    ; 004e688b
    TEST ESI,ESI                        ; 004e6892
    JG 0x004e682f                       ; 004e6894
        ;   XREF to: 004e682f (CONDITIONAL_JUMP)  ; LAB_004e682f
    MOV ECX,dword ptr [ESP + 0x204c]    ; 004e6896
        ;   Label: LAB_004e6896
    MOV EDX,dword ptr [ESP + 0x2014]    ; 004e689d
    INC ECX                             ; 004e68a4
    ADD EDX,0x4                         ; 004e68a5
    MOV dword ptr [ESP + 0x204c],ECX    ; 004e68a8
    MOV dword ptr [ESP + 0x2014],EDX    ; 004e68af
    JMP 0x004e67c4                      ; 004e68b6
        ;   XREF to: 004e67c4 (UNCONDITIONAL_JUMP)  ; LAB_004e67c4
    MOV EDI,dword ptr [ESP + 0x205c]    ; 004e68bb
        ;   Label: LAB_004e68bb
    MOV ESI,dword ptr [ESP + 0x2018]    ; 004e68c2
    INC EDI                             ; 004e68c9
    ADD ESI,0x34                        ; 004e68ca
    MOV dword ptr [ESP + 0x205c],EDI    ; 004e68cd
    MOV dword ptr [ESP + 0x2018],ESI    ; 004e68d4
    CMP EDI,0x3                         ; 004e68db
    JL 0x004e66d0                       ; 004e68de
        ;   XREF to: 004e66d0 (CONDITIONAL_JUMP)  ; LAB_004e66d0
    CMP dword ptr [ESP + 0x1fa4],0x3    ; 004e68e4
    JG 0x004e6240                       ; 004e68ec
        ;   XREF to: 004e6240 (CONDITIONAL_JUMP)  ; LAB_004e6240
    MOV ECX,0x2                         ; 004e68f2
    MOV EDX,0x11                        ; 004e68f7
    MOV EBX,0xffffffff                  ; 004e68fc
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e6901
    MOV dword ptr [ESP + 0x2064],EBX    ; 004e6904
    ADD EDI,0x90                        ; 004e690b
    MOV EBX,EDX                         ; 004e6911
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 004e6913
        ;   Label: LAB_004e6913
    JZ 0x004e6b9d                       ; 004e691e
        ;   XREF to: 004e6b9d (CONDITIONAL_JUMP)  ; LAB_004e6b9d
    LEA EAX,[ECX*0x8 + 0x0]             ; 004e6924
    ADD EAX,ECX                         ; 004e692b
    ADD EAX,EAX                         ; 004e692d
    ADD EAX,EDX                         ; 004e692f
    MOV dword ptr [ESP + 0x2064],EAX    ; 004e6931
    MOV EDX,dword ptr [ESP + 0x1f8c]    ; 004e6938
        ;   Label: LAB_004e6938
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e693f
    ADD EAX,EDX                         ; 004e6946
    SHL EAX,0x2                         ; 004e6948
    ADD EDX,EAX                         ; 004e694b
    SHL EDX,0x2                         ; 004e694d
    MOV EDI,dword ptr [ESP + 0x2064]    ; 004e6950
    MOV EAX,EDX                         ; 004e6957
    MOV EDX,dword ptr [EDX + 0x5bc0f8]  ; 004e6959 | DAT_005bc0f8
    XOR ESI,ESI                         ; 004e695f
    CMP EDX,EDI                         ; 004e6961
    JG 0x004e6980                       ; 004e6963
        ;   XREF to: 004e6980 (CONDITIONAL_JUMP)  ; LAB_004e6980
    MOV ECX,dword ptr [ESP + 0x2064]    ; 004e6965
    INC ESI                             ; 004e696c
        ;   Label: LAB_004e696c
    MOV EDX,dword ptr [EAX + 0x5bc0fc]  ; 004e696d | DAT_005bc0fc | DAT_005bc100
    ADD EAX,0x4                         ; 004e6973
    CMP EDX,ECX                         ; 004e6976
    JLE 0x004e696c                      ; 004e6978
        ;   XREF to: 004e696c (CONDITIONAL_JUMP)  ; LAB_004e696c
    LEA EAX,[EAX]                       ; 004e697a
    MOV dword ptr [ESP + 0x2048],ESI    ; 004e6980
        ;   Label: LAB_004e6980
    MOV EBX,dword ptr [ESP + 0x2048]    ; 004e6987
    MOV ESI,dword ptr [EAX + 0x5bc0f8]  ; 004e698e | DAT_005bc0fc | DAT_005bc100 | DAT_005bc0f8
    CMP EBX,0x8                         ; 004e6994
    JGE 0x004e6240                      ; 004e6997
        ;   XREF to: 004e6240 (CONDITIONAL_JUMP)  ; LAB_004e6240
    MOV EDX,dword ptr [ESP + 0x1f8c]    ; 004e699d
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e69a4
    ADD EAX,EDX                         ; 004e69ab
    SHL EAX,0x2                         ; 004e69ad
    ADD EDX,EAX                         ; 004e69b0
    SHL EDX,0x2                         ; 004e69b2
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e69b5
    ADD EAX,EDX                         ; 004e69bc
    MOV dword ptr [ESP + 0x2020],EAX    ; 004e69be
    MOV EDI,dword ptr [ESP + 0x2020]    ; 004e69c5
        ;   Label: LAB_004e69c5
    MOV EDX,dword ptr [ESP + 0x2020]    ; 004e69cc
    MOV EDI,dword ptr [EDI + 0x5bc0fc]  ; 004e69d3 | DAT_005bc100 | DAT_005bc104 | DAT_005bc0fc
    MOV ECX,dword ptr [EDX + 0x5bc0f8]  ; 004e69d9 | DAT_005bc0fc | DAT_005bc100
    MOV EAX,dword ptr [ESP + 0x2048]    ; 004e69df
    SUB EDI,ECX                         ; 004e69e6
    SHL EAX,0x2                         ; 004e69e8
    TEST EDI,EDI                        ; 004e69eb
    JLE 0x004e6a77                      ; 004e69ed
        ;   XREF to: 004e6a77 (CONDITIONAL_JUMP)  ; LAB_004e6a77
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004e69f3
    LEA EBX,[ESI + ESI*0x1]             ; 004e69f6
    ADD EDX,EAX                         ; 004e69f9
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e69fb
    MOV dword ptr [ESP + 0x1fbc],EDX    ; 004e6a02
    MOV dword ptr [ESP + 0x201c],EAX    ; 004e6a09
    MOV EAX,dword ptr [ESP + 0x1fbc]    ; 004e6a10
        ;   Label: LAB_004e6a10
    MOV AX,word ptr [EAX + 0xf8]        ; 004e6a17
    MOV word ptr [ESP + EBX*0x1 + 0x1b08],AX ; 004e6a1e
    CMP AX,0x7                          ; 004e6a26
    JZ 0x004e6a5d                       ; 004e6a2a
        ;   XREF to: 004e6a5d (CONDITIONAL_JUMP)  ; LAB_004e6a5d
    CMP dword ptr [ESP + 0x1fa0],0x0    ; 004e6a2c
    JZ 0x004e6bb5                       ; 004e6a34
        ;   XREF to: 004e6bb5 (CONDITIONAL_JUMP)  ; LAB_004e6bb5
    LEA EAX,[ESP + 0x8]                 ; 004e6a3a
    PUSH EAX                            ; 004e6a3e
    PUSH ESI                            ; 004e6a3f
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e6a40
    PUSH ECX                            ; 004e6a44
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e6a45
    PUSH EAX                            ; 004e6a49
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x1b16] ; 004e6a4a
    SAR EAX,0x10                        ; 004e6a51
    PUSH EAX                            ; 004e6a54
    CALL sound_mp3.cpp_calculateIntensityStereoRatio_FUN_004e60c0 ; 004e6a55
        ;   XREF to: 004e60c0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_calculateIntensityStereoRatio_FUN_004e60c0(int intensity_position, double ratio, int sample_index, float * ratio_buffer)
    ADD ESP,0x14                        ; 004e6a5a
    MOV EAX,dword ptr [ESP + 0x201c]    ; 004e6a5d
        ;   Label: LAB_004e6a5d
    ADD EBX,0x2                         ; 004e6a64
    INC ESI                             ; 004e6a67
    ADD EAX,0x4                         ; 004e6a68
    DEC EDI                             ; 004e6a6b
    MOV dword ptr [ESP + 0x201c],EAX    ; 004e6a6c
    TEST EDI,EDI                        ; 004e6a73
    JG 0x004e6a10                       ; 004e6a75
        ;   XREF to: 004e6a10 (CONDITIONAL_JUMP)  ; LAB_004e6a10
    MOV EBX,dword ptr [ESP + 0x2020]    ; 004e6a77
        ;   Label: LAB_004e6a77
    MOV EDI,dword ptr [ESP + 0x2048]    ; 004e6a7e
    ADD EBX,0x4                         ; 004e6a85
    INC EDI                             ; 004e6a88
    MOV dword ptr [ESP + 0x2020],EBX    ; 004e6a89
    MOV dword ptr [ESP + 0x2048],EDI    ; 004e6a90
    CMP EDI,0x8                         ; 004e6a97
    JGE 0x004e6240                      ; 004e6a9a
        ;   XREF to: 004e6240 (CONDITIONAL_JUMP)  ; LAB_004e6240
    JMP 0x004e69c5                      ; 004e6aa0
        ;   XREF to: 004e69c5 (UNCONDITIONAL_JUMP)  ; LAB_004e69c5
    MOV dword ptr [ESP + 0x1fa4],EAX    ; 004e6aa5
        ;   Label: LAB_004e6aa5
    JMP 0x004e679c                      ; 004e6aac
        ;   XREF to: 004e679c (UNCONDITIONAL_JUMP)  ; LAB_004e679c
    FILD word ptr [ESP + EBX*0x1 + 0x1b08] ; 004e6ab1
        ;   Label: LAB_004e6ab1
    FMUL double ptr [0x0058b8e8]        ; 004e6ab8 | DOUBLE_0058b8e8
    FPTAN                               ; 004e6abe
    FSTP ST0                            ; 004e6ac0
    MOV EAX,dword ptr [ESP + 0x2010]    ; 004e6ac2
    FSTP float ptr [ESP + EAX*0x1 + 0x1208] ; 004e6ac9
    JMP 0x004e687c                      ; 004e6ad0
        ;   XREF to: 004e687c (UNCONDITIONAL_JUMP)  ; LAB_004e687c
    MOV EAX,dword ptr [ESP + 0x1fe8]    ; 004e6ad5
        ;   Label: LAB_004e6ad5
    MOV ESI,dword ptr [ESP + 0x1fe8]    ; 004e6adc
    MOV EDI,dword ptr [EAX + 0x5bc180]  ; 004e6ae3 | DAT_005bc180
    MOV ESI,dword ptr [ESI + 0x5bc184]  ; 004e6ae9 | DAT_005bc184
    MOV EDX,dword ptr [ESP + 0x205c]    ; 004e6aef
    SUB ESI,EDI                         ; 004e6af6
    IMUL EDX,ESI                        ; 004e6af8
    MOV ECX,dword ptr [ESP + 0x1fe8]    ; 004e6afb
    MOV ESI,dword ptr [ESP + 0x1fe8]    ; 004e6b02
    MOV EBX,dword ptr [ECX + 0x5bc184]  ; 004e6b09 | DAT_005bc184
    MOV ESI,dword ptr [ESI + 0x5bc188]  ; 004e6b0f | DAT_005bc188
    MOV ECX,dword ptr [ESP + 0x205c]    ; 004e6b15
    SUB ESI,EBX                         ; 004e6b1c
    IMUL ECX,ESI                        ; 004e6b1e
    LEA EAX,[EDI + EDI*0x2]             ; 004e6b21
    ADD EDX,EAX                         ; 004e6b24
    ADD EAX,ECX                         ; 004e6b26
    MOV dword ptr [ESP + 0x2054],EAX    ; 004e6b28
    TEST ESI,ESI                        ; 004e6b2f
    JLE 0x004e68bb                      ; 004e6b31
        ;   XREF to: 004e68bb (CONDITIONAL_JUMP)  ; LAB_004e68bb
    MOV ECX,dword ptr [ESP + 0x2054]    ; 004e6b37
    LEA EDI,[EDX + EDX*0x1]             ; 004e6b3e
    SHL EAX,0x2                         ; 004e6b41
    SHL EDX,0x2                         ; 004e6b44
    ADD ECX,ECX                         ; 004e6b47
    FLD float ptr [ESP + EDX*0x1 + 0x1208] ; 004e6b49
        ;   Label: LAB_004e6b49
    FLD float ptr [ESP + EDX*0x1 + 0x8] ; 004e6b50
    ADD EAX,0x4                         ; 004e6b54
    ADD ECX,0x2                         ; 004e6b57
    DEC ESI                             ; 004e6b5a
    MOV BX,word ptr [ESP + EDI*0x1 + 0x1b08] ; 004e6b5b
    FSTP float ptr [ESP + EAX*0x1 + 0x4] ; 004e6b63
    FSTP float ptr [ESP + EAX*0x1 + 0x1204] ; 004e6b67
    MOV word ptr [ESP + ECX*0x1 + 0x1b06],BX ; 004e6b6e
    MOV EBX,dword ptr [ESP + 0x2054]    ; 004e6b76
    FLD float ptr [ESP + EDX*0x1 + 0x908] ; 004e6b7d
    INC EBX                             ; 004e6b84
    FSTP float ptr [ESP + EAX*0x1 + 0x904] ; 004e6b85
    MOV dword ptr [ESP + 0x2054],EBX    ; 004e6b8c
    TEST ESI,ESI                        ; 004e6b93
    JLE 0x004e68bb                      ; 004e6b95
        ;   XREF to: 004e68bb (CONDITIONAL_JUMP)  ; LAB_004e68bb
    JMP 0x004e6b49                      ; 004e6b9b
        ;   XREF to: 004e6b49 (UNCONDITIONAL_JUMP)  ; LAB_004e6b49
    DEC EDX                             ; 004e6b9d
        ;   Label: LAB_004e6b9d
    TEST EDX,EDX                        ; 004e6b9e
    JGE 0x004e6ba8                      ; 004e6ba0
        ;   XREF to: 004e6ba8 (CONDITIONAL_JUMP)  ; LAB_004e6ba8
    SUB EDI,0x48                        ; 004e6ba2
    DEC ECX                             ; 004e6ba5
    MOV EDX,EBX                         ; 004e6ba6
    TEST ECX,ECX                        ; 004e6ba8
        ;   Label: LAB_004e6ba8
    JGE 0x004e6913                      ; 004e6baa
        ;   XREF to: 004e6913 (CONDITIONAL_JUMP)  ; LAB_004e6913
    JMP 0x004e6938                      ; 004e6bb0
        ;   XREF to: 004e6938 (UNCONDITIONAL_JUMP)  ; LAB_004e6938
    FILD word ptr [ESP + EBX*0x1 + 0x1b08] ; 004e6bb5
        ;   Label: LAB_004e6bb5
    FMUL double ptr [0x0058b8e8]        ; 004e6bbc | DOUBLE_0058b8e8
    FPTAN                               ; 004e6bc2
    FSTP ST0                            ; 004e6bc4
    MOV EAX,dword ptr [ESP + 0x201c]    ; 004e6bc6
    FSTP float ptr [ESP + EAX*0x1 + 0x1208] ; 004e6bcd
    JMP 0x004e6a5d                      ; 004e6bd4
        ;   XREF to: 004e6a5d (UNCONDITIONAL_JUMP)  ; LAB_004e6a5d
    MOV dword ptr [ESP + 0x1fe4],EAX    ; 004e6bd9
        ;   Label: LAB_004e6bd9
    MOV dword ptr [ESP + 0x1fc4],EAX    ; 004e6be0
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004e6be7
    MOV dword ptr [ESP + 0x1f9c],EDI    ; 004e6bea
    MOV dword ptr [ESP + 0x200c],EAX    ; 004e6bf1
    MOV ECX,0xffffffff                  ; 004e6bf8
        ;   Label: LAB_004e6bf8
    MOV EAX,dword ptr [ESP + 0x1f9c]    ; 004e6bfd
    MOV ESI,0xc                         ; 004e6c04
    INC EAX                             ; 004e6c09
    MOV dword ptr [ESP + 0x1fc0],ECX    ; 004e6c0a
    MOV dword ptr [ESP + 0x1fc8],EAX    ; 004e6c11
    MOV EBX,dword ptr [ESP + 0x1fc4]    ; 004e6c18
        ;   Label: LAB_004e6c18
    LEA EAX,[ESI*0x4 + 0x0]             ; 004e6c1f
    ADD EAX,EBX                         ; 004e6c26
    MOV EBX,dword ptr [EAX + 0x5bc158]  ; 004e6c28 | DAT_005bc188 | DAT_005bc12c
    MOV EDI,dword ptr [EAX + 0x5bc154]  ; 004e6c2e | DAT_005bc184 | DAT_005bc128
    MOV EDX,dword ptr [ESP + 0x1fc8]    ; 004e6c34
    SUB EBX,EDI                         ; 004e6c3b
    IMUL EDX,EBX                        ; 004e6c3d
    LEA EAX,[EDI + EDI*0x2]             ; 004e6c40
    ADD EAX,EDX                         ; 004e6c43
    LEA ECX,[EAX + -0x1]                ; 004e6c45
    TEST EBX,EBX                        ; 004e6c48
    JLE 0x004e6c9c                      ; 004e6c4a
        ;   XREF to: 004e6c9c (CONDITIONAL_JUMP)  ; LAB_004e6c9c
    MOV EDI,0x12                        ; 004e6c4c
        ;   Label: LAB_004e6c4c
    MOV EDX,ECX                         ; 004e6c51
    MOV EAX,ECX                         ; 004e6c53
    SAR EDX,0x1f                        ; 004e6c55
    IDIV EDI                            ; 004e6c58
    IMUL EAX,EAX,0x48                   ; 004e6c5a
    MOV dword ptr [ESP + 0x2068],0x12   ; 004e6c5d
    MOV EDX,ECX                         ; 004e6c68
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e6c6a
    SAR EDX,0x1f                        ; 004e6c6d
    ADD EDI,EAX                         ; 004e6c70
    MOV EAX,ECX                         ; 004e6c72
    IDIV dword ptr [ESP + 0x2068]       ; 004e6c74
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 004e6c7b
    JZ 0x004e6c96                       ; 004e6c86
        ;   XREF to: 004e6c96 (CONDITIONAL_JUMP)  ; LAB_004e6c96
    MOV dword ptr [ESP + 0x1fc0],ESI    ; 004e6c88
    MOV ESI,0xfffffff6                  ; 004e6c8f
    MOV EBX,ESI                         ; 004e6c94
    DEC EBX                             ; 004e6c96
        ;   Label: LAB_004e6c96
    DEC ECX                             ; 004e6c97
    TEST EBX,EBX                        ; 004e6c98
    JG 0x004e6c4c                       ; 004e6c9a
        ;   XREF to: 004e6c4c (CONDITIONAL_JUMP)  ; LAB_004e6c4c
    DEC ESI                             ; 004e6c9c
        ;   Label: LAB_004e6c9c
    TEST ESI,ESI                        ; 004e6c9d
    JGE 0x004e6c18                      ; 004e6c9f
        ;   XREF to: 004e6c18 (CONDITIONAL_JUMP)  ; LAB_004e6c18
    MOV EAX,dword ptr [ESP + 0x1fc0]    ; 004e6ca5
    INC EAX                             ; 004e6cac
    MOV dword ptr [ESP + 0x2050],EAX    ; 004e6cad
    MOV EAX,dword ptr [ESP + 0x200c]    ; 004e6cb4
    MOV ESI,dword ptr [ESP + 0x2050]    ; 004e6cbb
    MOV dword ptr [ESP + 0x1fcc],EAX    ; 004e6cc2
    SHL ESI,0x2                         ; 004e6cc9
    MOV EAX,dword ptr [ESP + 0x1fe4]    ; 004e6ccc
    ADD EAX,ESI                         ; 004e6cd3
    MOV dword ptr [ESP + 0x2004],EAX    ; 004e6cd5
    CMP dword ptr [ESP + 0x2050],0xc    ; 004e6cdc
    JGE 0x004e6deb                      ; 004e6ce4
        ;   XREF to: 004e6deb (CONDITIONAL_JUMP)  ; LAB_004e6deb
    MOV dword ptr [ESP + 0x2008],ESI    ; 004e6cea
    MOV EAX,dword ptr [ESP + 0x2004]    ; 004e6cf1
        ;   Label: LAB_004e6cf1
    MOV ESI,dword ptr [ESP + 0x2004]    ; 004e6cf8
    MOV EDI,dword ptr [EAX + 0x5bc154]  ; 004e6cff | DAT_005bc188 | DAT_005bc18c
    MOV ESI,dword ptr [ESI + 0x5bc158]  ; 004e6d05 | DAT_005bc18c | DAT_005bc190
    MOV EAX,dword ptr [ESP + 0x1f9c]    ; 004e6d0b
    SUB ESI,EDI                         ; 004e6d12
    IMUL EAX,ESI                        ; 004e6d14
    LEA EDI,[EDI + EDI*0x2]             ; 004e6d17
    ADD EDI,EAX                         ; 004e6d1a
    TEST ESI,ESI                        ; 004e6d1c
    JLE 0x004e6db1                      ; 004e6d1e
        ;   XREF to: 004e6db1 (CONDITIONAL_JUMP)  ; LAB_004e6db1
    MOV EAX,dword ptr [ESP + 0x1fcc]    ; 004e6d24
    ADD EAX,dword ptr [ESP + 0x2008]    ; 004e6d2b
    LEA EBX,[EDI + EDI*0x1]             ; 004e6d32
    MOV dword ptr [ESP + 0x1fd0],EAX    ; 004e6d35
    LEA EAX,[EDI*0x4 + 0x0]             ; 004e6d3c
    MOV dword ptr [ESP + 0x2000],EAX    ; 004e6d43
    MOV EAX,dword ptr [ESP + 0x1fd0]    ; 004e6d4a
        ;   Label: LAB_004e6d4a
    MOV AX,word ptr [EAX + 0x154]       ; 004e6d51
    MOV word ptr [ESP + EBX*0x1 + 0x1b08],AX ; 004e6d58
    CMP AX,0x7                          ; 004e6d60
    JZ 0x004e6d97                       ; 004e6d64
        ;   XREF to: 004e6d97 (CONDITIONAL_JUMP)  ; LAB_004e6d97
    CMP dword ptr [ESP + 0x1fa0],0x0    ; 004e6d66
    JZ 0x004e6ed7                       ; 004e6d6e
        ;   XREF to: 004e6ed7 (CONDITIONAL_JUMP)  ; LAB_004e6ed7
    LEA EAX,[ESP + 0x8]                 ; 004e6d74
    PUSH EAX                            ; 004e6d78
    PUSH EDI                            ; 004e6d79
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e6d7a
    PUSH EDX                            ; 004e6d7e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e6d7f
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x1b12] ; 004e6d83
    PUSH ECX                            ; 004e6d8a
    SAR EAX,0x10                        ; 004e6d8b
    PUSH EAX                            ; 004e6d8e
    CALL sound_mp3.cpp_calculateIntensityStereoRatio_FUN_004e60c0 ; 004e6d8f
        ;   XREF to: 004e60c0 (UNCONDITIONAL_CALL)  ; void sound_mp3.cpp_calculateIntensityStereoRatio_FUN_004e60c0(int intensity_position, double ratio, int sample_index, float * ratio_buffer)
    ADD ESP,0x14                        ; 004e6d94
    MOV EDX,dword ptr [ESP + 0x2000]    ; 004e6d97
        ;   Label: LAB_004e6d97
    ADD EBX,0x2                         ; 004e6d9e
    INC EDI                             ; 004e6da1
    ADD EDX,0x4                         ; 004e6da2
    DEC ESI                             ; 004e6da5
    MOV dword ptr [ESP + 0x2000],EDX    ; 004e6da6
    TEST ESI,ESI                        ; 004e6dad
    JG 0x004e6d4a                       ; 004e6daf
        ;   XREF to: 004e6d4a (CONDITIONAL_JUMP)  ; LAB_004e6d4a
    MOV EDX,dword ptr [ESP + 0x2004]    ; 004e6db1
        ;   Label: LAB_004e6db1
    MOV ECX,dword ptr [ESP + 0x2008]    ; 004e6db8
    MOV EBX,dword ptr [ESP + 0x2050]    ; 004e6dbf
    ADD EDX,0x4                         ; 004e6dc6
    ADD ECX,0x4                         ; 004e6dc9
    INC EBX                             ; 004e6dcc
    MOV dword ptr [ESP + 0x2004],EDX    ; 004e6dcd
    MOV dword ptr [ESP + 0x2008],ECX    ; 004e6dd4
    MOV dword ptr [ESP + 0x2050],EBX    ; 004e6ddb
    CMP ECX,0x30                        ; 004e6de2
    JL 0x004e6cf1                       ; 004e6de5
        ;   XREF to: 004e6cf1 (CONDITIONAL_JUMP)  ; LAB_004e6cf1
    MOV EAX,dword ptr [ESP + 0x1fe4]    ; 004e6deb
        ;   Label: LAB_004e6deb
    MOV ESI,dword ptr [ESP + 0x1fe4]    ; 004e6df2
    MOV EDI,dword ptr [EAX + 0x5bc180]  ; 004e6df9 | DAT_005bc180
    MOV ESI,dword ptr [ESI + 0x5bc184]  ; 004e6dff | DAT_005bc184
    MOV ECX,dword ptr [ESP + 0x1f9c]    ; 004e6e05
    SUB ESI,EDI                         ; 004e6e0c
    IMUL ECX,ESI                        ; 004e6e0e
    MOV EDX,dword ptr [ESP + 0x1fe4]    ; 004e6e11
    MOV ESI,dword ptr [ESP + 0x1fe4]    ; 004e6e18
    MOV EBX,dword ptr [EDX + 0x5bc184]  ; 004e6e1f | DAT_005bc184
    MOV ESI,dword ptr [ESI + 0x5bc188]  ; 004e6e25 | DAT_005bc188
    MOV EDX,dword ptr [ESP + 0x1f9c]    ; 004e6e2b
    SUB ESI,EBX                         ; 004e6e32
    IMUL EDX,ESI                        ; 004e6e34
    LEA EAX,[EDI + EDI*0x2]             ; 004e6e37
    ADD ECX,EAX                         ; 004e6e3a
    ADD EAX,EDX                         ; 004e6e3c
    MOV dword ptr [ESP + 0x2058],EAX    ; 004e6e3e
    TEST ESI,ESI                        ; 004e6e45
    JLE 0x004e6ea9                      ; 004e6e47
        ;   XREF to: 004e6ea9 (CONDITIONAL_JUMP)  ; LAB_004e6ea9
    MOV EDX,dword ptr [ESP + 0x2058]    ; 004e6e49
    LEA EDI,[ECX + ECX*0x1]             ; 004e6e50
    SHL EAX,0x2                         ; 004e6e53
    SHL ECX,0x2                         ; 004e6e56
    ADD EDX,EDX                         ; 004e6e59
    FLD float ptr [ESP + ECX*0x1 + 0x1208] ; 004e6e5b
        ;   Label: LAB_004e6e5b
    FLD float ptr [ESP + ECX*0x1 + 0x8] ; 004e6e62
    ADD EAX,0x4                         ; 004e6e66
    ADD EDX,0x2                         ; 004e6e69
    DEC ESI                             ; 004e6e6c
    MOV BX,word ptr [ESP + EDI*0x1 + 0x1b08] ; 004e6e6d
    FSTP float ptr [ESP + EAX*0x1 + 0x4] ; 004e6e75
    FSTP float ptr [ESP + EAX*0x1 + 0x1204] ; 004e6e79
    MOV word ptr [ESP + EDX*0x1 + 0x1b06],BX ; 004e6e80
    MOV EBX,dword ptr [ESP + 0x2058]    ; 004e6e88
    FLD float ptr [ESP + ECX*0x1 + 0x908] ; 004e6e8f
    INC EBX                             ; 004e6e96
    FSTP float ptr [ESP + EAX*0x1 + 0x904] ; 004e6e97
    MOV dword ptr [ESP + 0x2058],EBX    ; 004e6e9e
    TEST ESI,ESI                        ; 004e6ea5
    JG 0x004e6e5b                       ; 004e6ea7
        ;   XREF to: 004e6e5b (CONDITIONAL_JUMP)  ; LAB_004e6e5b
    MOV EDI,dword ptr [ESP + 0x1f9c]    ; 004e6ea9
        ;   Label: LAB_004e6ea9
    MOV ESI,dword ptr [ESP + 0x200c]    ; 004e6eb0
    INC EDI                             ; 004e6eb7
    ADD ESI,0x34                        ; 004e6eb8
    MOV dword ptr [ESP + 0x1f9c],EDI    ; 004e6ebb
    MOV dword ptr [ESP + 0x200c],ESI    ; 004e6ec2
    CMP EDI,0x3                         ; 004e6ec9
    JGE 0x004e6240                      ; 004e6ecc
        ;   XREF to: 004e6240 (CONDITIONAL_JUMP)  ; LAB_004e6240
    JMP 0x004e6bf8                      ; 004e6ed2
        ;   XREF to: 004e6bf8 (UNCONDITIONAL_JUMP)  ; LAB_004e6bf8
    FILD word ptr [ESP + EBX*0x1 + 0x1b08] ; 004e6ed7
        ;   Label: LAB_004e6ed7
    FMUL double ptr [0x0058b8e8]        ; 004e6ede | DOUBLE_0058b8e8
    FPTAN                               ; 004e6ee4
    FSTP ST0                            ; 004e6ee6
    MOV EAX,dword ptr [ESP + 0x2000]    ; 004e6ee8
    FSTP float ptr [ESP + EAX*0x1 + 0x1208] ; 004e6eef
    JMP 0x004e6d97                      ; 004e6ef6
        ;   XREF to: 004e6d97 (UNCONDITIONAL_JUMP)  ; LAB_004e6d97
    DEC EDX                             ; 004e6efb
        ;   Label: LAB_004e6efb
    TEST EDX,EDX                        ; 004e6efc
    JGE 0x004e6f06                      ; 004e6efe
        ;   XREF to: 004e6f06 (CONDITIONAL_JUMP)  ; LAB_004e6f06
    SUB EBX,0x48                        ; 004e6f00
    DEC ECX                             ; 004e6f03
    MOV EDX,ESI                         ; 004e6f04
    TEST ECX,ECX                        ; 004e6f06
        ;   Label: LAB_004e6f06
    JGE 0x004e6440                      ; 004e6f08
        ;   XREF to: 004e6440 (CONDITIONAL_JUMP)  ; LAB_004e6440
    JMP 0x004e645f                      ; 004e6f0e
        ;   XREF to: 004e645f (UNCONDITIONAL_JUMP)  ; LAB_004e645f
    FILD word ptr [ESP + EBX*0x1 + 0x1b08] ; 004e6f13
        ;   Label: LAB_004e6f13
    FMUL double ptr [0x0058b8e8]        ; 004e6f1a | DOUBLE_0058b8e8
    FPTAN                               ; 004e6f20
    FSTP ST0                            ; 004e6f22
    MOV EAX,dword ptr [ESP + 0x1ff0]    ; 004e6f24
    FSTP float ptr [ESP + EAX*0x1 + 0x1208] ; 004e6f2b
    JMP 0x004e6587                      ; 004e6f32
        ;   XREF to: 004e6587 (UNCONDITIONAL_JUMP)  ; LAB_004e6587
    MOV ECX,dword ptr [EAX]             ; 004e6f37
        ;   Label: LAB_004e6f37
    MOV dword ptr [EDX],ECX             ; 004e6f39
    MOV ECX,dword ptr [EAX + 0x900]     ; 004e6f3b
    MOV dword ptr [EDX + 0x900],ECX     ; 004e6f41
    JMP 0x004e637d                      ; 004e6f47
        ;   XREF to: 004e637d (UNCONDITIONAL_JUMP)  ; LAB_004e637d
    CMP dword ptr [ESP + 0x1fd4],0x0    ; 004e6f4c
        ;   Label: LAB_004e6f4c
    JZ 0x004e6fab                       ; 004e6f54
        ;   XREF to: 004e6fab (CONDITIONAL_JUMP)  ; LAB_004e6fab
    MOV ECX,dword ptr [ESP + 0x1f88]    ; 004e6f56
    MOV EDI,dword ptr [ESP + 0x1fa0]    ; 004e6f5d
    SHL ECX,0x2                         ; 004e6f64
    TEST EDI,EDI                        ; 004e6f67
    JZ 0x004e6f81                       ; 004e6f69
        ;   XREF to: 004e6f81 (CONDITIONAL_JUMP)  ; LAB_004e6f81
    FLD float ptr [EAX]                 ; 004e6f6b
    FMUL float ptr [ESP + ECX*0x1 + 0x8] ; 004e6f6d
    FSTP float ptr [EDX]                ; 004e6f71
    FLD float ptr [EAX]                 ; 004e6f73
    FMUL float ptr [ESP + ECX*0x1 + 0x908] ; 004e6f75
    JMP 0x004e6377                      ; 004e6f7c
        ;   XREF to: 004e6377 (UNCONDITIONAL_JUMP)  ; LAB_004e6377
    FLD1                                ; 004e6f81
        ;   Label: LAB_004e6f81
    FADD float ptr [ESP + ECX*0x1 + 0x1208] ; 004e6f83
    FDIVR float ptr [ESP + ECX*0x1 + 0x1208] ; 004e6f8a
    FMUL float ptr [EAX]                ; 004e6f91
    FLD1                                ; 004e6f93
    FXCH                                ; 004e6f95
    FSTP float ptr [EDX]                ; 004e6f97
    FADD float ptr [ESP + ECX*0x1 + 0x1208] ; 004e6f99
    FLD1                                ; 004e6fa0
    FDIVRP                              ; 004e6fa2
    FMUL float ptr [EAX]                ; 004e6fa4
    JMP 0x004e6377                      ; 004e6fa6
        ;   XREF to: 004e6377 (UNCONDITIONAL_JUMP)  ; LAB_004e6377
    PUSH 0x1cd8b28                      ; 004e6fab
        ;   Label: LAB_004e6fab
    MOV EAX,0x58b8b0                    ; 004e6fb0 | = "..\\sound\\mp3.cpp"
    MOV EDX,0x9b8                       ; 004e6fb5
    PUSH 0x58b8c1                       ; 004e6fba | = "Error in streo processing.  File: %s"
    MOV [0x01cc4800],EAX                ; 004e6fbf | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004e6fc4 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e6fca
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e6fcf
    JMP 0x004e637d                      ; 004e6fd2
        ;   XREF to: 004e637d (UNCONDITIONAL_JUMP)  ; LAB_004e637d
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e6fd7
        ;   Label: LAB_004e6fd7
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e6fda
    XOR EBX,EBX                         ; 004e6fdd
    ADD ESI,0x48                        ; 004e6fdf
    MOV dword ptr [ESP + 0x202c],EAX    ; 004e6fe2
    IMUL EAX,EBX,0x48                   ; 004e6fe9
        ;   Label: LAB_004e6fe9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e6fec
    MOV ECX,ESI                         ; 004e6fef
    ADD EAX,EDX                         ; 004e6ff1
    MOV EDX,dword ptr [ESP + 0x202c]    ; 004e6ff3
    ADD EDX,0x4                         ; 004e6ffa
        ;   Label: LAB_004e6ffa
    FLD float ptr [EAX]                 ; 004e6ffd
    ADD EAX,0x4                         ; 004e6fff
    FSTP float ptr [EDX + -0x4]         ; 004e7002
    CMP EAX,ECX                         ; 004e7005
    JNZ 0x004e6ffa                      ; 004e7007
        ;   XREF to: 004e6ffa (CONDITIONAL_JUMP)  ; LAB_004e6ffa
    MOV ECX,dword ptr [ESP + 0x202c]    ; 004e7009
    INC EBX                             ; 004e7010
    ADD ECX,0x48                        ; 004e7011
    ADD ESI,0x48                        ; 004e7014
    MOV dword ptr [ESP + 0x202c],ECX    ; 004e7017
    CMP EBX,0x20                        ; 004e701e
    JGE 0x004e63e6                      ; 004e7021
        ;   XREF to: 004e63e6 (CONDITIONAL_JUMP)  ; LAB_004e63e6
    JMP 0x004e6fe9                      ; 004e7027
        ;   XREF to: 004e6fe9 (UNCONDITIONAL_JUMP)  ; LAB_004e6fe9


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_004e7210(float *input_samples,float *output_samples,int mpeg_block_type)
;
; Parameters:
; float *          Stack[0x4]:4   input_samples
; float *          Stack[0x8]:4   output_samples
; int              Stack[0xc]:4   mpeg_block_type
; Local Variables:
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
;   sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_004e7720 at 004e775f
;
; Referenced Globals:
;   double DOUBLE_0058b8f8 = 0.0872664630000000
;   double DOUBLE_0058b900 = 0.261799388000000
;   double DOUBLE_0058b908 = 0.130899693899575
;   double DOUBLE_0058b910 = 0.0436332312998582
;   double DOUBLE_0058b918 = 0.5
;   double DOUBLE_0058b920 = -18
;   double DOUBLE_0058b928 = -6
;   double DOUBLE_0058b930 = 0.0000100000000000000
;   undefined4 DAT_005bbc40
;   undefined4 DAT_01cd71d8
;   undefined4 DAT_01cd71dc
;   undefined4 DAT_01cd71e0
;   undefined4 DAT_01cd71e4
;   undefined4 DAT_01cd71e8
;   undefined4 DAT_01cd71f0
;   ... and 14 more
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7210
        ;   Label: sound_mp3.cpp_applyPolyphaseWindow_FUN_004e7210
    PUSH ESI                            ; 004e7211
    PUSH EDI                            ; 004e7212
    PUSH EBP                            ; 004e7213
    MOV EBP,ESP                         ; 004e7214
    SUB ESP,0x8c                        ; 004e7216
    CMP dword ptr [0x005bbc40],0x1      ; 004e721c | DAT_005bbc40
    JNZ 0x004e74df                      ; 004e7223
        ;   XREF to: 004e74df (CONDITIONAL_JUMP)  ; LAB_004e74df
    XOR EDX,EDX                         ; 004e7229
    XOR ECX,ECX                         ; 004e722b
    FLD double ptr [0x0058b8f8]         ; 004e722d | DOUBLE_0058b8f8
    FLD double ptr [0x0058b918]         ; 004e7233 | DOUBLE_0058b918
    MOV dword ptr [EBP + -0x4],EDX      ; 004e7239
        ;   Label: LAB_004e7239
    FILD dword ptr [EBP + -0x4]         ; 004e723c
    FADD ST0,ST1                        ; 004e723f
    FMUL ST2                            ; 004e7241
    FSIN                                ; 004e7243
    ADD ECX,0x8                         ; 004e7245
    INC EDX                             ; 004e7248
    FSTP double ptr [ECX + 0x1cd7020]   ; 004e7249
    CMP EDX,0x24                        ; 004e724f
    JL 0x004e7239                       ; 004e7252
        ;   XREF to: 004e7239 (CONDITIONAL_JUMP)  ; LAB_004e7239
    FSTP ST0                            ; 004e7254
    FSTP ST0                            ; 004e7256
    XOR EDX,EDX                         ; 004e7258
    XOR ECX,ECX                         ; 004e725a
    FLD double ptr [0x0058b8f8]         ; 004e725c | DOUBLE_0058b8f8
    FLD double ptr [0x0058b918]         ; 004e7262 | DOUBLE_0058b918
    MOV dword ptr [EBP + -0x4],EDX      ; 004e7268
        ;   Label: LAB_004e7268
    FILD dword ptr [EBP + -0x4]         ; 004e726b
    FADD ST0,ST1                        ; 004e726e
    FMUL ST2                            ; 004e7270
    FSIN                                ; 004e7272
    ADD ECX,0x8                         ; 004e7274
    INC EDX                             ; 004e7277
    FSTP double ptr [ECX + 0x1cd7140]   ; 004e7278
    CMP EDX,0x12                        ; 004e727e
    JL 0x004e7268                       ; 004e7281
        ;   XREF to: 004e7268 (CONDITIONAL_JUMP)  ; LAB_004e7268
    FSTP ST0                            ; 004e7283
    MOV EAX,0x90                        ; 004e7285
    MOV EBX,0x3ff00000                  ; 004e728a
    FSTP ST0                            ; 004e728f
    ADD EAX,0x8                         ; 004e7291
        ;   Label: LAB_004e7291
    XOR ECX,ECX                         ; 004e7294
    MOV dword ptr [EAX + 0x1cd7144],EBX ; 004e7296 | DAT_01cd71dc | DAT_01cd71e4
    MOV dword ptr [EAX + 0x1cd7140],ECX ; 004e729c | DAT_01cd71d8 | DAT_01cd71e0
    CMP EAX,0xc0                        ; 004e72a2
    JNZ 0x004e7291                      ; 004e72a7
        ;   XREF to: 004e7291 (CONDITIONAL_JUMP)  ; LAB_004e7291
    MOV EDX,0x18                        ; 004e72a9
    MOV ECX,EAX                         ; 004e72ae
    FLD double ptr [0x0058b900]         ; 004e72b0 | DOUBLE_0058b900
    FLD double ptr [0x0058b920]         ; 004e72b6 | DOUBLE_0058b920
    FLD double ptr [0x0058b918]         ; 004e72bc | DOUBLE_0058b918
    MOV dword ptr [EBP + -0x4],EDX      ; 004e72c2
        ;   Label: LAB_004e72c2
    FILD dword ptr [EBP + -0x4]         ; 004e72c5
    FADD ST0,ST1                        ; 004e72c8
    FADD ST0,ST2                        ; 004e72ca
    FMUL ST3                            ; 004e72cc
    FSIN                                ; 004e72ce
    ADD ECX,0x8                         ; 004e72d0
    INC EDX                             ; 004e72d3
    FSTP double ptr [ECX + 0x1cd7140]   ; 004e72d4 | DAT_01cd71e8 | DAT_01cd71f0
    CMP EDX,0x1e                        ; 004e72da
    JL 0x004e72c2                       ; 004e72dd
        ;   XREF to: 004e72c2 (CONDITIONAL_JUMP)  ; LAB_004e72c2
    FSTP ST0                            ; 004e72df
    MOV EAX,0xf0                        ; 004e72e1
    FSTP ST0                            ; 004e72e6
    FSTP ST0                            ; 004e72e8
    ADD EAX,0x8                         ; 004e72ea
        ;   Label: LAB_004e72ea
    XOR ESI,ESI                         ; 004e72ed
    MOV dword ptr [EAX + 0x1cd7140],ESI ; 004e72ef | DAT_01cd7238 | DAT_01cd7240
    MOV dword ptr [EAX + 0x1cd7144],ESI ; 004e72f5 | DAT_01cd723c | DAT_01cd7244
    CMP EAX,0x120                       ; 004e72fb
    JNZ 0x004e72ea                      ; 004e7300
        ;   XREF to: 004e72ea (CONDITIONAL_JUMP)  ; LAB_004e72ea
    XOR EAX,EAX                         ; 004e7302
    ADD EAX,0x8                         ; 004e7304
        ;   Label: LAB_004e7304
    XOR EDX,EDX                         ; 004e7307
    MOV dword ptr [EAX + 0x1cd7380],EDX ; 004e7309
    MOV dword ptr [EAX + 0x1cd7384],EDX ; 004e730f
    CMP EAX,0x30                        ; 004e7315
    JNZ 0x004e7304                      ; 004e7318
        ;   XREF to: 004e7304 (CONDITIONAL_JUMP)  ; LAB_004e7304
    MOV EDX,0x6                         ; 004e731a
    MOV ECX,EAX                         ; 004e731f
    FLD double ptr [0x0058b900]         ; 004e7321 | DOUBLE_0058b900
    FLD double ptr [0x0058b928]         ; 004e7327 | DOUBLE_0058b928
    FLD double ptr [0x0058b918]         ; 004e732d | DOUBLE_0058b918
    MOV dword ptr [EBP + -0x4],EDX      ; 004e7333
        ;   Label: LAB_004e7333
    FILD dword ptr [EBP + -0x4]         ; 004e7336
    FADD ST0,ST1                        ; 004e7339
    FADD ST0,ST2                        ; 004e733b
    FMUL ST3                            ; 004e733d
    FSIN                                ; 004e733f
    ADD ECX,0x8                         ; 004e7341
    INC EDX                             ; 004e7344
    FSTP double ptr [ECX + 0x1cd7380]   ; 004e7345
    CMP EDX,0xc                         ; 004e734b
    JL 0x004e7333                       ; 004e734e
        ;   XREF to: 004e7333 (CONDITIONAL_JUMP)  ; LAB_004e7333
    FSTP ST0                            ; 004e7350
    MOV EAX,0x60                        ; 004e7352
    MOV ESI,0x3ff00000                  ; 004e7357
    FSTP ST0                            ; 004e735c
    FSTP ST0                            ; 004e735e
    ADD EAX,0x8                         ; 004e7360
        ;   Label: LAB_004e7360
    XOR EBX,EBX                         ; 004e7363
    MOV dword ptr [EAX + 0x1cd7384],ESI ; 004e7365 | DAT_01cd73ec | DAT_01cd73f4
    MOV dword ptr [EAX + 0x1cd7380],EBX ; 004e736b | DAT_01cd73e8 | DAT_01cd73f0
    CMP EAX,0x90                        ; 004e7371
    JNZ 0x004e7360                      ; 004e7376
        ;   XREF to: 004e7360 (CONDITIONAL_JUMP)  ; LAB_004e7360
    MOV EDX,0x12                        ; 004e7378
    MOV ECX,EAX                         ; 004e737d
    FLD double ptr [0x0058b8f8]         ; 004e737f | DOUBLE_0058b8f8
    FLD double ptr [0x0058b918]         ; 004e7385 | DOUBLE_0058b918
    MOV dword ptr [EBP + -0x4],EDX      ; 004e738b
        ;   Label: LAB_004e738b
    FILD dword ptr [EBP + -0x4]         ; 004e738e
    FADD ST0,ST1                        ; 004e7391
    FMUL ST2                            ; 004e7393
    FSIN                                ; 004e7395
    ADD ECX,0x8                         ; 004e7397
    INC EDX                             ; 004e739a
    FSTP double ptr [ECX + 0x1cd7380]   ; 004e739b | DAT_01cd73f8 | DAT_01cd7400
    CMP EDX,0x24                        ; 004e73a1
    JL 0x004e738b                       ; 004e73a4
        ;   XREF to: 004e738b (CONDITIONAL_JUMP)  ; LAB_004e738b
    FSTP ST0                            ; 004e73a6
    FSTP ST0                            ; 004e73a8
    XOR EDX,EDX                         ; 004e73aa
    XOR ECX,ECX                         ; 004e73ac
    FLD double ptr [0x0058b900]         ; 004e73ae | DOUBLE_0058b900
    FLD double ptr [0x0058b918]         ; 004e73b4 | DOUBLE_0058b918
    MOV dword ptr [EBP + -0x4],EDX      ; 004e73ba
        ;   Label: LAB_004e73ba
    FILD dword ptr [EBP + -0x4]         ; 004e73bd
    FADD ST0,ST1                        ; 004e73c0
    FMUL ST2                            ; 004e73c2
    FSIN                                ; 004e73c4
    ADD ECX,0x8                         ; 004e73c6
    INC EDX                             ; 004e73c9
    FSTP double ptr [ECX + 0x1cd7260]   ; 004e73ca
    CMP EDX,0xc                         ; 004e73d0
    JL 0x004e73ba                       ; 004e73d3
        ;   XREF to: 004e73ba (CONDITIONAL_JUMP)  ; LAB_004e73ba
    FSTP ST0                            ; 004e73d5
    MOV EAX,0x60                        ; 004e73d7
    FSTP ST0                            ; 004e73dc
    ADD EAX,0x8                         ; 004e73de
        ;   Label: LAB_004e73de
    XOR EDI,EDI                         ; 004e73e1
    MOV dword ptr [EAX + 0x1cd7260],EDI ; 004e73e3 | DAT_01cd72c8 | DAT_01cd72d0
    MOV dword ptr [EAX + 0x1cd7264],EDI ; 004e73e9 | DAT_01cd72cc | DAT_01cd72d4
    CMP EAX,0x120                       ; 004e73ef
    JNZ 0x004e73de                      ; 004e73f4
        ;   XREF to: 004e73de (CONDITIONAL_JUMP)  ; LAB_004e73de
    MOV EBX,0xc                         ; 004e73f6
    MOV dword ptr [EBP + -0x14],EDI     ; 004e73fb
    MOV EDI,0x1                         ; 004e73fe
    MOV dword ptr [EBP + -0x20],EBX     ; 004e7403
    MOV ECX,0x1                         ; 004e7406
        ;   Label: LAB_004e7406
    MOV EDX,dword ptr [EBP + -0x20]     ; 004e740b
    ADD EDX,ECX                         ; 004e740e
    MOV EBX,dword ptr [EBP + -0x14]     ; 004e7410
    CMP EDX,ECX                         ; 004e7413
    JLE 0x004e7444                      ; 004e7415
        ;   XREF to: 004e7444 (CONDITIONAL_JUMP)  ; LAB_004e7444
    FLD double ptr [0x0058b908]         ; 004e7417 | DOUBLE_0058b908
    LEA ESI,[EDI + 0x6]                 ; 004e741d
    MOV dword ptr [EBP + -0x4],ESI      ; 004e7420
        ;   Label: LAB_004e7420
    FILD dword ptr [EBP + -0x4]         ; 004e7423
    FMUL ST1                            ; 004e7426
    MOV dword ptr [EBP + -0x4],ECX      ; 004e7428
    FILD dword ptr [EBP + -0x4]         ; 004e742b
    FMULP                               ; 004e742e
    FCOS                                ; 004e7430
    ADD EBX,0x8                         ; 004e7432
    ADD ECX,0x2                         ; 004e7435
    FSTP double ptr [EBX + 0x1cd74a0]   ; 004e7438
    CMP ECX,EDX                         ; 004e743e
    JL 0x004e7420                       ; 004e7440
        ;   XREF to: 004e7420 (CONDITIONAL_JUMP)  ; LAB_004e7420
    FSTP ST0                            ; 004e7442
    MOV ESI,dword ptr [EBP + -0x14]     ; 004e7444
        ;   Label: LAB_004e7444
    ADD ESI,0x30                        ; 004e7447
    ADD EDI,0x2                         ; 004e744a
    MOV dword ptr [EBP + -0x14],ESI     ; 004e744d
    CMP EDI,0x19                        ; 004e7450
    JNZ 0x004e7406                      ; 004e7453
        ;   XREF to: 004e7406 (CONDITIONAL_JUMP)  ; LAB_004e7406
    MOV EAX,0x90                        ; 004e7455
    MOV EDX,0x26                        ; 004e745a
    XOR EDI,EDI                         ; 004e745f
    MOV dword ptr [EBP + -0x1c],EAX     ; 004e7461
    MOV dword ptr [EBP + -0x18],EDX     ; 004e7464
    MOV dword ptr [EBP + -0x10],EDI     ; 004e7467
    IMUL EBX,dword ptr [EBP + -0x10],0x90 ; 004e746a
        ;   Label: LAB_004e746a
    MOV EAX,dword ptr [EBP + -0x10]     ; 004e7471
    ADD EAX,EAX                         ; 004e7474
    ADD EAX,0x13                        ; 004e7476
    IMUL ECX,EAX,0x0                    ; 004e7479
    MOV ESI,dword ptr [EBP + -0x18]     ; 004e747c
    MOV EDI,dword ptr [EBP + -0x1c]     ; 004e747f
    ADD ECX,EAX                         ; 004e7482
    FLD double ptr [0x0058b910]         ; 004e7484 | DOUBLE_0058b910
    MOV dword ptr [EBP + -0x4],0x90     ; 004e748a
        ;   Label: LAB_004e748a
    MOV EDX,ECX                         ; 004e7491
    MOV EAX,ECX                         ; 004e7493
    SAR EDX,0x1f                        ; 004e7495
    IDIV dword ptr [EBP + -0x4]         ; 004e7498
    MOV dword ptr [EBP + -0x4],EDX      ; 004e749b
    FILD dword ptr [EBP + -0x4]         ; 004e749e
    FMUL ST1                            ; 004e74a1
    FCOS                                ; 004e74a3
    ADD EBX,0x8                         ; 004e74a5
    ADD ECX,ESI                         ; 004e74a8
    FSTP double ptr [EBX + 0x1cd76e0]   ; 004e74aa
    CMP EBX,EDI                         ; 004e74b0
    JNZ 0x004e748a                      ; 004e74b2
        ;   XREF to: 004e748a (CONDITIONAL_JUMP)  ; LAB_004e748a
    FSTP ST0                            ; 004e74b4
    MOV ESI,dword ptr [EBP + -0x18]     ; 004e74b6
    MOV EDI,dword ptr [EBP + -0x10]     ; 004e74b9
    MOV EBX,dword ptr [EBP + -0x1c]     ; 004e74bc
    ADD ESI,0x4                         ; 004e74bf
    INC EDI                             ; 004e74c2
    ADD EBX,0x90                        ; 004e74c3
    MOV dword ptr [EBP + -0x18],ESI     ; 004e74c9
    MOV dword ptr [EBP + -0x10],EDI     ; 004e74cc
    MOV dword ptr [EBP + -0x1c],EBX     ; 004e74cf
    CMP EDI,0x24                        ; 004e74d2
    JL 0x004e746a                       ; 004e74d5
        ;   XREF to: 004e746a (CONDITIONAL_JUMP)  ; LAB_004e746a
    XOR EDX,EDX                         ; 004e74d7
    MOV dword ptr [0x005bbc40],EDX      ; 004e74d9 | DAT_005bbc40
    CMP dword ptr [EBP + 0x1c],0x2      ; 004e74df
        ;   Label: LAB_004e74df
    JZ 0x004e75c0                       ; 004e74e3
        ;   XREF to: 004e75c0 (CONDITIONAL_JUMP)  ; LAB_004e75c0
    XOR EDX,EDX                         ; 004e74e9
    MOV dword ptr [EBP + -0x34],EDX     ; 004e74eb
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e74ee
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e74f1
        ;   Label: LAB_004e74f1
    ADD EAX,EDI                         ; 004e74f8
    FLD float ptr [EAX]                 ; 004e74fa
    FABS                                ; 004e74fc
    FCOMP double ptr [0x0058b930]       ; 004e74fe | DOUBLE_0058b930
    FNSTSW AX                           ; 004e7504
    SAHF                                ; 004e7506
    JBE 0x004e7516                      ; 004e7507
        ;   XREF to: 004e7516 (CONDITIONAL_JUMP)  ; LAB_004e7516
    MOV EAX,dword ptr [EBP + -0x34]     ; 004e7509
    INC dword ptr [EBP + -0x34]         ; 004e750c
    MOV dword ptr [EBP + EAX*0x4 + 0xffffff74],EDX ; 004e750f
    INC EDX                             ; 004e7516
        ;   Label: LAB_004e7516
    CMP EDX,0x12                        ; 004e7517
    JL 0x004e74f1                       ; 004e751a
        ;   XREF to: 004e74f1 (CONDITIONAL_JUMP)  ; LAB_004e74f1
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004e751c
    LEA EAX,[EDX*0x8 + 0x0]             ; 004e751f
    ADD EAX,EDX                         ; 004e7526
    MOV EDX,0x1cd7028                   ; 004e7528
    SHL EAX,0x5                         ; 004e752d
    XOR EBX,EBX                         ; 004e7530
    ADD EDX,EAX                         ; 004e7532
    MOV dword ptr [EBP + -0xc],EBX      ; 004e7534
    MOV dword ptr [EBP + -0x24],EDX     ; 004e7537
    MOV EAX,dword ptr [EBP + -0xc]      ; 004e753a
        ;   Label: LAB_004e753a
    MOV EDX,dword ptr [EBP + 0x18]      ; 004e753d
    SHL EAX,0x2                         ; 004e7540
    ADD EDX,EAX                         ; 004e7543
    MOV dword ptr [EBP + -0x30],EDX     ; 004e7545
    MOV ESI,dword ptr [EBP + -0xc]      ; 004e7548
    IMUL EAX,ESI,0x90                   ; 004e754b
    MOV EDX,0x1cd76e8                   ; 004e7551
    ADD EDX,EAX                         ; 004e7556
    MOV dword ptr [EBP + -0x2c],EDX     ; 004e7558
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e755b
    MOV dword ptr [EBP + -0x8],EAX      ; 004e755e
    MOV EDX,dword ptr [EBP + -0x24]     ; 004e7561
    LEA EAX,[ESI*0x8 + 0x0]             ; 004e7564
    ADD EDX,EAX                         ; 004e756b
    MOV dword ptr [EBP + -0x28],EDX     ; 004e756d
    FLDZ                                ; 004e7570
    MOV ECX,dword ptr [EBP + 0xffffffcc] ; 004e7572
    SUB ECX,0x1                         ; 004e7578
    JL 0x004e75a5                       ; 004e757b
        ;   XREF to: 004e75a5 (CONDITIONAL_JUMP)  ; LAB_004e75a5
    MOV EBX,dword ptr [EBP + 0xffffffd4] ; 004e757d
    MOV ESI,dword ptr [EBP + 0xfffffff8] ; 004e7583
    MOV EAX,dword ptr [EBP + ECX*0x4 + 0xffffff74] ; 004e7589
        ;   Label: LAB_004e7589
    FLD float ptr [ESI + EAX*0x4]       ; 004e7590
    FMUL double ptr [EBX + EAX*0x8]     ; 004e7593
    FADDP                               ; 004e7596
    SUB ECX,0x1                         ; 004e7598
    JGE 0x004e7589                      ; 004e759b
        ;   XREF to: 004e7589 (CONDITIONAL_JUMP)  ; LAB_004e7589
    MOV EBX,dword ptr [EBP + 0xffffffd8] ; 004e759d
    FMUL double ptr [EBX]               ; 004e75a3
    MOV EBX,dword ptr [EBP + 0xffffffd0] ; 004e75a5
        ;   Label: LAB_004e75a5
    FSTP float ptr [EBX]                ; 004e75ab
    MOV EDI,dword ptr [EBP + -0xc]      ; 004e75ad
    INC EDI                             ; 004e75b0
    MOV dword ptr [EBP + -0xc],EDI      ; 004e75b1
    CMP EDI,0x24                        ; 004e75b4
    JL 0x004e753a                       ; 004e75b7
        ;   XREF to: 004e753a (CONDITIONAL_JUMP)  ; LAB_004e753a
    MOV ESP,EBP                         ; 004e75b9
    POP EBP                             ; 004e75bb
    POP EDI                             ; 004e75bc
    POP ESI                             ; 004e75bd
    POP EBX                             ; 004e75be
    RET                                 ; 004e75bf
    PUSH 0x90                           ; 004e75c0
        ;   Label: LAB_004e75c0
    PUSH 0x0                            ; 004e75c5
    MOV ESI,dword ptr [EBP + 0x18]      ; 004e75c7
    PUSH ESI                            ; 004e75ca
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e75cb
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004e75ce
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004e75d3
    MOV EDX,ESI                         ; 004e75d6
    XOR ECX,ECX                         ; 004e75d8
    XOR EAX,EAX                         ; 004e75da
    FLD float ptr [EBX + 0xc]           ; 004e75dc
        ;   Label: LAB_004e75dc
    FMUL double ptr [EAX + 0x1cd74b0]   ; 004e75df
    FLD float ptr [EBX]                 ; 004e75e5
    FMUL double ptr [EAX + 0x1cd74a8]   ; 004e75e7
    FADDP                               ; 004e75ed
    FLD float ptr [EBX + 0x18]          ; 004e75ef
    FMUL double ptr [EAX + 0x1cd74b8]   ; 004e75f2
    FADDP                               ; 004e75f8
    FLD float ptr [EBX + 0x24]          ; 004e75fa
    FMUL double ptr [EAX + 0x1cd74c0]   ; 004e75fd
    FADDP                               ; 004e7603
    FLD float ptr [EBX + 0x30]          ; 004e7605
    FMUL double ptr [EAX + 0x1cd74c8]   ; 004e7608
    FADDP                               ; 004e760e
    FLD float ptr [EBX + 0x3c]          ; 004e7610
    FMUL double ptr [EAX + 0x1cd74d0]   ; 004e7613
    FADDP                               ; 004e7619
    FMUL double ptr [ECX + 0x1cd7268]   ; 004e761b
    ADD EDX,0x4                         ; 004e7621
    ADD ECX,0x8                         ; 004e7624
    FLD float ptr [EDX + 0x14]          ; 004e7627
    FXCH                                ; 004e762a
    FADD ST0,ST1                        ; 004e762c
    ADD EAX,0x30                        ; 004e762e
    FSTP ST1                            ; 004e7631
    FSTP float ptr [EDX + 0x14]         ; 004e7633
    CMP ECX,0x60                        ; 004e7636
    JNZ 0x004e75dc                      ; 004e7639
        ;   XREF to: 004e75dc (CONDITIONAL_JUMP)  ; LAB_004e75dc
    MOV ECX,dword ptr [EBP + 0x18]      ; 004e763b
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e763e
    XOR EAX,EAX                         ; 004e7641
    XOR EDX,EDX                         ; 004e7643
    FLD float ptr [EBX + 0x10]          ; 004e7645
        ;   Label: LAB_004e7645
    FMUL double ptr [EAX + 0x1cd74b0]   ; 004e7648
    FLD float ptr [EBX + 0x4]           ; 004e764e
    FMUL double ptr [EAX + 0x1cd74a8]   ; 004e7651
    FADDP                               ; 004e7657
    FLD float ptr [EBX + 0x1c]          ; 004e7659
    FMUL double ptr [EAX + 0x1cd74b8]   ; 004e765c
    FADDP                               ; 004e7662
    FLD float ptr [EBX + 0x28]          ; 004e7664
    FMUL double ptr [EAX + 0x1cd74c0]   ; 004e7667
    FADDP                               ; 004e766d
    FLD float ptr [EBX + 0x34]          ; 004e766f
    FMUL double ptr [EAX + 0x1cd74c8]   ; 004e7672
    FADDP                               ; 004e7678
    FLD float ptr [EBX + 0x40]          ; 004e767a
    FMUL double ptr [EAX + 0x1cd74d0]   ; 004e767d
    FADDP                               ; 004e7683
    FMUL double ptr [EDX + 0x1cd7268]   ; 004e7685
    ADD ECX,0x4                         ; 004e768b
    ADD EDX,0x8                         ; 004e768e
    FLD float ptr [ECX + 0x2c]          ; 004e7691
    FXCH                                ; 004e7694
    FADD ST0,ST1                        ; 004e7696
    ADD EAX,0x30                        ; 004e7698
    FSTP ST1                            ; 004e769b
    FSTP float ptr [ECX + 0x2c]         ; 004e769d
    CMP EDX,0x60                        ; 004e76a0
    JNZ 0x004e7645                      ; 004e76a3
        ;   XREF to: 004e7645 (CONDITIONAL_JUMP)  ; LAB_004e7645
    MOV ECX,dword ptr [EBP + 0x18]      ; 004e76a5
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e76a8
    XOR EAX,EAX                         ; 004e76ab
    XOR EDX,EDX                         ; 004e76ad
    FLD float ptr [EBX + 0x14]          ; 004e76af
        ;   Label: LAB_004e76af
    FMUL double ptr [EAX + 0x1cd74b0]   ; 004e76b2
    FLD float ptr [EBX + 0x8]           ; 004e76b8
    FMUL double ptr [EAX + 0x1cd74a8]   ; 004e76bb
    FADDP                               ; 004e76c1
    FLD float ptr [EBX + 0x20]          ; 004e76c3
    FMUL double ptr [EAX + 0x1cd74b8]   ; 004e76c6
    FADDP                               ; 004e76cc
    FLD float ptr [EBX + 0x2c]          ; 004e76ce
    FMUL double ptr [EAX + 0x1cd74c0]   ; 004e76d1
    FADDP                               ; 004e76d7
    FLD float ptr [EBX + 0x38]          ; 004e76d9
    FMUL double ptr [EAX + 0x1cd74c8]   ; 004e76dc
    FADDP                               ; 004e76e2
    FLD float ptr [EBX + 0x44]          ; 004e76e4
    FMUL double ptr [EAX + 0x1cd74d0]   ; 004e76e7
    FADDP                               ; 004e76ed
    FMUL double ptr [EDX + 0x1cd7268]   ; 004e76ef
    ADD ECX,0x4                         ; 004e76f5
    ADD EDX,0x8                         ; 004e76f8
    FLD float ptr [ECX + 0x44]          ; 004e76fb
    FXCH                                ; 004e76fe
    FADD ST0,ST1                        ; 004e7700
    ADD EAX,0x30                        ; 004e7702
    FSTP ST1                            ; 004e7705
    FSTP float ptr [ECX + 0x44]         ; 004e7707
    CMP EDX,0x60                        ; 004e770a
    JNZ 0x004e76af                      ; 004e770d
        ;   XREF to: 004e76af (CONDITIONAL_JUMP)  ; LAB_004e76af
    MOV ESP,EBP                         ; 004e770f
    POP EBP                             ; 004e7711
    POP EDI                             ; 004e7712
    POP ESI                             ; 004e7713
    POP EBX                             ; 004e7714
    RET                                 ; 004e7715


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_chain.cpp_FUN_004300d0()
;
; Local Variables:
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined1       Stack[-0xe8]:1  local_e8
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
; undefined1       Stack[-0xac]:1  local_ac
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
; undefined1       Stack[-0x70]:1  local_70
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
;
; Referenced Globals:
;   float FLOAT_006177d2 = -9900
;   double DOUBLE_006177da = 0.03125
;   double DOUBLE_006177e2 = 0.900000000000000
;   double DOUBLE_006177ea = 0.100000000000000
;   CSound* g_CSoundPtr = 03f6af64
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_chain.cpp_FUN_0042fcc0
;   core_chain.cpp_FUN_0042fed0
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004300d0
        ;   Label: core_chain.cpp_FUN_004300d0
    PUSH ESI                            ; 004300d1
    PUSH EDI                            ; 004300d2
    PUSH EBP                            ; 004300d3
    MOV EBP,ESP                         ; 004300d4
    SUB ESP,0xdc                        ; 004300d6
    AND ESP,0xfffffff8                  ; 004300dc
    MOV ESI,dword ptr [EBP + 0x14]      ; 004300df
    FLD float ptr [ESI + 0x56c]         ; 004300e2
    FCOMP float ptr [0x006177d2]        ; 004300e8 | FLOAT_006177d2
    FNSTSW AX                           ; 004300ee
    SAHF                                ; 004300f0
    JC 0x0043015a                       ; 004300f1
        ;   XREF to: 0043015a (CONDITIONAL_JUMP)  ; LAB_0043015a
    CMP dword ptr [ESI + 0x574],0x0     ; 004300f3
        ;   Label: LAB_004300f3
    JZ 0x00430187                       ; 004300fa
        ;   XREF to: 00430187 (CONDITIONAL_JUMP)  ; LAB_00430187
    LEA EBX,[ESI + 0x2b0]               ; 00430100
    XOR ECX,ECX                         ; 00430106
    XOR EDI,EDI                         ; 00430108
    MOV dword ptr [ESP + 0x4],ECX       ; 0043010a
    MOV EAX,dword ptr [ESI + 0x158]     ; 0043010e
        ;   Label: LAB_0043010e
    DEC EAX                             ; 00430114
    CMP EDI,EAX                         ; 00430115
    JGE 0x00430187                      ; 00430117
        ;   XREF to: 00430187 (CONDITIONAL_JUMP)  ; LAB_00430187
    FLD float ptr [EBX + -0x24]         ; 00430119
    FSUB float ptr [EBX]                ; 0043011c
    FSTP float ptr [ESP + 0x74]         ; 0043011e
    FLD float ptr [EBX + -0x20]         ; 00430122
    FSUB float ptr [EBX + 0x4]          ; 00430125
    FST float ptr [ESP + 0x78]          ; 00430128
    FMUL float ptr [ESP + 0x78]         ; 0043012c
    FLD float ptr [ESP + 0x74]          ; 00430130
    FMUL ST0                            ; 00430134
    FLD float ptr [EBX + -0x1c]         ; 00430136
    FSUB float ptr [EBX + 0x8]          ; 00430139
    FXCH                                ; 0043013c
    FADDP ST2,ST0                       ; 0043013e
    FST float ptr [ESP + 0x7c]          ; 00430140
    FMUL float ptr [ESP + 0x7c]         ; 00430144
    FADDP                               ; 00430148
    FSQRT                               ; 0043014a
    ADD EBX,0x24                        ; 0043014c
    FADD float ptr [ESP + 0x4]          ; 0043014f
    INC EDI                             ; 00430153
    FSTP float ptr [ESP + 0x4]          ; 00430154
    JMP 0x0043010e                      ; 00430158
        ;   XREF to: 0043010e (UNCONDITIONAL_JUMP)  ; LAB_0043010e
    PUSH 0x0                            ; 0043015a
        ;   Label: LAB_0043015a
    MOV EAX,dword ptr [ESI + 0x154]     ; 0043015c
    PUSH 0x3dcccccd                     ; 00430162
    PUSH ESI                            ; 00430167
    CALL dword ptr [EAX + 0x38]         ; 00430168
    MOV dword ptr [ESP + 0xe4],EAX      ; 0043016b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00430172
    MOV dword ptr [ESI + 0x56c],EAX     ; 00430179
    ADD ESP,0xc                         ; 0043017f
    JMP 0x004300f3                      ; 00430182
        ;   XREF to: 004300f3 (UNCONDITIONAL_JUMP)  ; LAB_004300f3
    FLD float ptr [EBP + 0x18]          ; 00430187
        ;   Label: LAB_00430187
    FLD1                                ; 0043018a
    FDIVRP                              ; 0043018c
    MOV EDX,dword ptr [ESI + 0x158]     ; 0043018e
    DEC EDX                             ; 00430194
    LEA EAX,[EDX*0x8 + 0x0]             ; 00430195
    ADD EAX,EDX                         ; 0043019c
    LEA EDI,[ESI + 0x28c]               ; 0043019e
    SHL EAX,0x2                         ; 004301a4
    LEA EDX,[EDI + EAX*0x1]             ; 004301a7
    FSTP float ptr [ESI + 0x570]        ; 004301aa
    MOV EAX,dword ptr [EDX]             ; 004301b0
    MOV dword ptr [ESP + 0x8c],EAX      ; 004301b2
    LEA EAX,[EDX + 0x4]                 ; 004301b9
    MOV EAX,dword ptr [EAX]             ; 004301bc
    MOV dword ptr [ESP + 0x90],EAX      ; 004301be
    LEA EAX,[EDX + 0x8]                 ; 004301c5
    MOV EAX,dword ptr [EAX]             ; 004301c8
    MOV dword ptr [ESP + 0x94],EAX      ; 004301ca
    LEA EAX,[ESP + 0x44]                ; 004301d1
    PUSH EAX                            ; 004301d5
    PUSH ESI                            ; 004301d6
    CALL core_chain.cpp_FUN_0042fcc0    ; 004301d7
        ;   XREF to: 0042fcc0 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_0042fcc0()
    MOV EBX,dword ptr [ESI + 0x158]     ; 004301dc
    DEC EBX                             ; 004301e2
    MOV EDX,EAX                         ; 004301e3
    LEA EAX,[EBX*0x8 + 0x0]             ; 004301e5
    ADD EAX,EBX                         ; 004301ec
    SHL EAX,0x2                         ; 004301ee
    ADD EAX,EDI                         ; 004301f1
    ADD ESP,0x8                         ; 004301f3
    CMP EAX,EDX                         ; 004301f6
    JZ 0x0043020a                       ; 004301f8
        ;   XREF to: 0043020a (CONDITIONAL_JUMP)  ; LAB_0043020a
    MOV ECX,dword ptr [EDX]             ; 004301fa
    MOV dword ptr [EAX],ECX             ; 004301fc
    MOV ECX,dword ptr [EDX + 0x4]       ; 004301fe
    MOV dword ptr [EAX + 0x4],ECX       ; 00430201
    MOV ECX,dword ptr [EDX + 0x8]       ; 00430204
    MOV dword ptr [EAX + 0x8],ECX       ; 00430207
    MOV EDX,dword ptr [ESI + 0x158]     ; 0043020a
        ;   Label: LAB_0043020a
    DEC EDX                             ; 00430210
    LEA EAX,[EDX*0x8 + 0x0]             ; 00430211
    ADD EAX,EDX                         ; 00430218
    LEA EDX,[ESI + 0x28c]               ; 0043021a
    MOV dword ptr [EDX + EAX*0x4 + 0x14],0x0 ; 00430220
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x14] ; 00430228
    MOV dword ptr [EDX + EAX*0x4 + 0x10],ECX ; 0043022c
    MOV ECX,dword ptr [EDX + EAX*0x4 + 0x10] ; 00430230
    MOV dword ptr [EDX + EAX*0x4 + 0xc],ECX ; 00430234
    LEA EAX,[ESI + 0x20]                ; 00430238
    CMP EDX,EAX                         ; 0043023b
    JNZ 0x00430416                      ; 0043023d
        ;   XREF to: 00430416 (CONDITIONAL_JUMP)  ; LAB_00430416
    LEA EAX,[ESI + 0x298]               ; 00430243
        ;   Label: LAB_00430243
    MOV dword ptr [EAX + 0x8],0x0       ; 00430249
    MOV EDX,dword ptr [EAX + 0x8]       ; 00430250
    MOV dword ptr [EAX + 0x4],EDX       ; 00430253
    MOV EDX,dword ptr [EAX + 0x4]       ; 00430256
    MOV dword ptr [EAX],EDX             ; 00430259
    LEA EAX,[ESI + 0x28c]               ; 0043025b
    MOV dword ptr [ESP + 0x98],EAX      ; 00430261
    LEA EAX,[ESI + 0x568]               ; 00430268
    MOV EBX,0x1                         ; 0043026e
    MOV dword ptr [ESP + 0xb0],EAX      ; 00430273
    MOV EAX,dword ptr [ESP + 0x98]      ; 0043027a
    MOV dword ptr [ESP + 0xc0],EBX      ; 00430281
    ADD EAX,0x48                        ; 00430288
    MOV EDI,dword ptr [ESP + 0x98]      ; 0043028b
    MOV dword ptr [ESP + 0xbc],EAX      ; 00430292
    MOV EAX,dword ptr [ESP + 0x98]      ; 00430299
    ADD EDI,0x30                        ; 004302a0
    MOV dword ptr [ESP + 0xb8],EAX      ; 004302a3
    MOV EAX,dword ptr [ESI + 0x158]     ; 004302aa
        ;   Label: LAB_004302aa
    MOV EDX,dword ptr [ESP + 0xc0]      ; 004302b0
    DEC EAX                             ; 004302b7
    CMP EAX,EDX                         ; 004302b8
    JG 0x0043042b                       ; 004302ba
        ;   XREF to: 0043042b (CONDITIONAL_JUMP)  ; LAB_0043042b
    LEA EAX,[ESI + 0x298]               ; 004302c0
    MOV dword ptr [ESP + 0xc8],EAX      ; 004302c6
    LEA EAX,[ESI + 0x28c]               ; 004302cd
    MOV dword ptr [ESP + 0xcc],EAX      ; 004302d3
    LEA EAX,[ESI + 0x20]                ; 004302da
    MOV dword ptr [ESP + 0xc4],EAX      ; 004302dd
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004302e4
    ADD EAX,0x48                        ; 004302eb
    MOV dword ptr [ESP + 0xa4],EAX      ; 004302ee
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004302f5
    XOR ECX,ECX                         ; 004302fc
    ADD EAX,0x24                        ; 004302fe
    MOV dword ptr [ESP + 0xb4],ECX      ; 00430301
    MOV dword ptr [ESP + 0xa8],EAX      ; 00430308
    LEA EAX,[ESP + 0x80]                ; 0043030f
        ;   Label: LAB_0043030f
    PUSH EAX                            ; 00430316
    PUSH ESI                            ; 00430317
    CALL core_chain.cpp_FUN_0042fcc0    ; 00430318
        ;   XREF to: 0042fcc0 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_0042fcc0()
    MOV EBX,dword ptr [ESI + 0x158]     ; 0043031d
    DEC EBX                             ; 00430323
    IMUL EBX,EBX,0x24                   ; 00430324
    ADD ESP,0x8                         ; 00430327
    ADD EBX,dword ptr [ESP + 0xcc]      ; 0043032a
    CMP EBX,EAX                         ; 00430331
    JZ 0x00430345                       ; 00430333
        ;   XREF to: 00430345 (CONDITIONAL_JUMP)  ; LAB_00430345
    MOV EDX,dword ptr [EAX]             ; 00430335
    MOV dword ptr [EBX],EDX             ; 00430337
    MOV EDX,dword ptr [EAX + 0x4]       ; 00430339
    MOV dword ptr [EBX + 0x4],EDX       ; 0043033c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043033f
    MOV dword ptr [EBX + 0x8],EDX       ; 00430342
    MOV EAX,dword ptr [ESI + 0x158]     ; 00430345
        ;   Label: LAB_00430345
    DEC EAX                             ; 0043034b
    IMUL EAX,EAX,0x24                   ; 0043034c
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0043034f
    ADD EAX,EDX                         ; 00430356
    MOV dword ptr [EAX + 0x14],0x0      ; 00430358
    MOV ECX,dword ptr [ESP + 0xc4]      ; 0043035f
    MOV EBX,dword ptr [EAX + 0x14]      ; 00430366
    MOV dword ptr [EAX + 0x10],EBX      ; 00430369
    MOV EBX,dword ptr [EAX + 0x10]      ; 0043036c
    MOV dword ptr [EAX + 0xc],EBX       ; 0043036f
    CMP EDX,ECX                         ; 00430372
    JNZ 0x0043059f                      ; 00430374
        ;   XREF to: 0043059f (CONDITIONAL_JUMP)  ; LAB_0043059f
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0043037a
        ;   Label: LAB_0043037a
    MOV EBX,0x1                         ; 00430381
    MOV EDI,dword ptr [ESP + 0xa4]      ; 00430386
    MOV dword ptr [EAX + 0x8],0x0       ; 0043038d
    MOV dword ptr [ESP + 0xd4],EBX      ; 00430394
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043039b
    MOV dword ptr [EAX + 0x4],EDX       ; 0043039e
    MOV EDX,dword ptr [EAX + 0x4]       ; 004303a1
    MOV dword ptr [EAX],EDX             ; 004303a4
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004303a6
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004303ad
    MOV dword ptr [ESP + 0xd0],EAX      ; 004303b4
    MOV EAX,dword ptr [ESI + 0x158]     ; 004303bb
        ;   Label: LAB_004303bb
    MOV EDX,dword ptr [ESP + 0xd4]      ; 004303c1
    DEC EAX                             ; 004303c8
    CMP EAX,EDX                         ; 004303c9
    JLE 0x004305b6                      ; 004303cb
        ;   XREF to: 004305b6 (CONDITIONAL_JUMP)  ; LAB_004305b6
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004303d1
    PUSH EAX                            ; 004303d8
    PUSH EBX                            ; 004303d9
    PUSH ESI                            ; 004303da
    CALL core_chain.cpp_FUN_0042fed0    ; 004303db
        ;   XREF to: 0042fed0 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_0042fed0()
    ADD ESP,0xc                         ; 004303e0
    PUSH EDI                            ; 004303e3
    PUSH EBX                            ; 004303e4
    PUSH ESI                            ; 004303e5
    ADD EDI,0x24                        ; 004303e6
    CALL core_chain.cpp_FUN_0042fed0    ; 004303e9
        ;   XREF to: 0042fed0 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_0042fed0()
    ADD ESP,0xc                         ; 004303ee
    ADD EBX,0x24                        ; 004303f1
    MOV EDX,dword ptr [ESP + 0xd0]      ; 004303f4
    MOV ECX,dword ptr [ESP + 0xd4]      ; 004303fb
    ADD EDX,0x24                        ; 00430402
    INC ECX                             ; 00430405
    MOV dword ptr [ESP + 0xd0],EDX      ; 00430406
    MOV dword ptr [ESP + 0xd4],ECX      ; 0043040d
    JMP 0x004303bb                      ; 00430414
        ;   XREF to: 004303bb (UNCONDITIONAL_JUMP)  ; LAB_004303bb
    MOV ECX,dword ptr [EAX]             ; 00430416
        ;   Label: LAB_00430416
    MOV dword ptr [EDX],ECX             ; 00430418
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043041a
    MOV dword ptr [EDX + 0x4],ECX       ; 0043041d
    MOV ECX,dword ptr [EAX + 0x8]       ; 00430420
    MOV dword ptr [EDX + 0x8],ECX       ; 00430423
    JMP 0x00430243                      ; 00430426
        ;   XREF to: 00430243 (UNCONDITIONAL_JUMP)  ; LAB_00430243
    IMUL EBX,EDX,0x24                   ; 0043042b
        ;   Label: LAB_0043042b
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0043042e
    FLD float ptr [EAX]                 ; 00430435
    FMUL float ptr [EDI]                ; 00430437
    FSTP float ptr [EDI]                ; 00430439
    FLD float ptr [EAX]                 ; 0043043b
    FMUL float ptr [EDI + 0x4]          ; 0043043d
    FSTP float ptr [EDI + 0x4]          ; 00430440
    FLD float ptr [EAX]                 ; 00430443
    FMUL float ptr [EDI + 0x8]          ; 00430445
    XOR ECX,ECX                         ; 00430448
    FSTP float ptr [EDI + 0x8]          ; 0043044a
    MOV dword ptr [ESP + 0x1c],ECX      ; 0043044d
    MOV dword ptr [ESP + 0x18],ECX      ; 00430451
    MOV dword ptr [ESP + 0x14],ECX      ; 00430455
    FLD float ptr [ESI + 0x55c]         ; 00430459
    FMUL double ptr [0x006177da]        ; 0043045f | DOUBLE_006177da
    FLD1                                ; 00430465
    FLDZ                                ; 00430467
    FXCH ST2                            ; 00430469
    FSTP float ptr [ESP + 0xac]         ; 0043046b
    FDIV float ptr [ESP + 0xac]         ; 00430472
    FXCH                                ; 00430479
    FMUL ST1                            ; 0043047b
    FLDZ                                ; 0043047d
    FSUB float ptr [ESI + 0x55c]        ; 0043047f
    MOV EDX,dword ptr [ESP + 0x98]      ; 00430485
    FST float ptr [ESP + 0x18]          ; 0043048c
    FMULP ST2                           ; 00430490
    ADD EBX,EDX                         ; 00430492
    FSTP float ptr [ESP + 0x38]         ; 00430494
    MOV EAX,dword ptr [ESP + 0x38]      ; 00430498
    LEA EDX,[ESP + 0x38]                ; 0043049c
    MOV dword ptr [ESP + 0x40],EAX      ; 004304a0
    LEA EAX,[ESP + 0x20]                ; 004304a4
    FSTP float ptr [ESP + 0x3c]         ; 004304a8
    CMP EAX,EDX                         ; 004304ac
    JZ 0x004304c8                       ; 004304ae
        ;   XREF to: 004304c8 (CONDITIONAL_JUMP)  ; LAB_004304c8
    MOV EAX,dword ptr [ESP + 0x38]      ; 004304b0
    MOV dword ptr [ESP + 0x20],EAX      ; 004304b4
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004304b8
    MOV dword ptr [ESP + 0x24],EAX      ; 004304bc
    MOV EAX,dword ptr [ESP + 0x38]      ; 004304c0
    MOV dword ptr [ESP + 0x28],EAX      ; 004304c4
    FLD float ptr [EBP + 0x18]          ; 004304c8
        ;   Label: LAB_004304c8
    FLD float ptr [ESP + 0x20]          ; 004304cb
    FMUL ST1                            ; 004304cf
    FLD float ptr [ESP + 0x24]          ; 004304d1
    FMUL ST2                            ; 004304d5
    FLD float ptr [ESP + 0x28]          ; 004304d7
    FMUL ST3                            ; 004304db
    LEA EAX,[EBX + 0xc]                 ; 004304dd
    FXCH ST2                            ; 004304e0
    FSTP float ptr [ESP + 0x68]         ; 004304e2
    FSTP float ptr [ESP + 0x6c]         ; 004304e6
    FSTP float ptr [ESP + 0x70]         ; 004304ea
    FLD float ptr [EAX]                 ; 004304ee
    FADD float ptr [ESP + 0x68]         ; 004304f0
    FST float ptr [EAX]                 ; 004304f4
    FMUL ST1                            ; 004304f6
    FLD float ptr [EAX + 0x4]           ; 004304f8
    FADD float ptr [ESP + 0x6c]         ; 004304fb
    FLD float ptr [EAX + 0x8]           ; 004304ff
    FXCH                                ; 00430502
    FSTP float ptr [EAX + 0x4]          ; 00430504
    FADD float ptr [ESP + 0x70]         ; 00430507
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0043050b
    FSTP float ptr [EAX + 0x8]          ; 00430512
    FSTP float ptr [ESP + 0x5c]         ; 00430515
    FLD float ptr [EAX + 0x4]           ; 00430519
    FMUL ST1                            ; 0043051c
    PUSH ECX                            ; 0043051e
    FSTP float ptr [ESP + 0x64]         ; 0043051f
    FMUL float ptr [EAX + 0x8]          ; 00430523
    PUSH EBX                            ; 00430526
    FSTP float ptr [ESP + 0x6c]         ; 00430527
    FLD float ptr [EBX]                 ; 0043052b
    FADD float ptr [ESP + 0x64]         ; 0043052d
    FLD float ptr [EBX + 0x4]           ; 00430531
    FXCH                                ; 00430534
    FSTP float ptr [EBX]                ; 00430536
    FADD float ptr [ESP + 0x68]         ; 00430538
    FLD float ptr [EBX + 0x8]           ; 0043053c
    FXCH                                ; 0043053f
    FSTP float ptr [EBX + 0x4]          ; 00430541
    FADD float ptr [ESP + 0x6c]         ; 00430544
    PUSH ESI                            ; 00430548
    FSTP float ptr [EBX + 0x8]          ; 00430549
    CALL core_chain.cpp_FUN_0042fed0    ; 0043054c
        ;   XREF to: 0042fed0 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_0042fed0()
    ADD ESP,0xc                         ; 00430551
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00430554
    PUSH EAX                            ; 0043055b
    PUSH EBX                            ; 0043055c
    PUSH ESI                            ; 0043055d
    CALL core_chain.cpp_FUN_0042fed0    ; 0043055e
        ;   XREF to: 0042fed0 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_0042fed0()
    ADD ESP,0xc                         ; 00430563
    ADD EDI,0x24                        ; 00430566
    MOV EDX,dword ptr [ESP + 0xbc]      ; 00430569
    MOV ECX,dword ptr [ESP + 0xb8]      ; 00430570
    MOV EBX,dword ptr [ESP + 0xc0]      ; 00430577
    ADD EDX,0x24                        ; 0043057e
    ADD ECX,0x24                        ; 00430581
    INC EBX                             ; 00430584
    MOV dword ptr [ESP + 0xbc],EDX      ; 00430585
    MOV dword ptr [ESP + 0xb8],ECX      ; 0043058c
    MOV dword ptr [ESP + 0xc0],EBX      ; 00430593
    JMP 0x004302aa                      ; 0043059a
        ;   XREF to: 004302aa (UNCONDITIONAL_JUMP)  ; LAB_004302aa
    MOV EAX,ECX                         ; 0043059f
        ;   Label: LAB_0043059f
    MOV ECX,dword ptr [EAX]             ; 004305a1
    MOV dword ptr [EDX],ECX             ; 004305a3
    MOV ECX,dword ptr [EAX + 0x4]       ; 004305a5
    MOV dword ptr [EDX + 0x4],ECX       ; 004305a8
    MOV ECX,dword ptr [EAX + 0x8]       ; 004305ab
    MOV dword ptr [EDX + 0x8],ECX       ; 004305ae
    JMP 0x0043037a                      ; 004305b1
        ;   XREF to: 0043037a (UNCONDITIONAL_JUMP)  ; LAB_0043037a
    LEA EAX,[ESP + 0x8]                 ; 004305b6
        ;   Label: LAB_004305b6
    PUSH EAX                            ; 004305ba
    PUSH ESI                            ; 004305bb
    CALL core_chain.cpp_FUN_0042fcc0    ; 004305bc
        ;   XREF to: 0042fcc0 (UNCONDITIONAL_CALL)  ; undefined core_chain.cpp_FUN_0042fcc0()
    MOV EBX,dword ptr [ESI + 0x158]     ; 004305c1
    DEC EBX                             ; 004305c7
    IMUL EBX,EBX,0x24                   ; 004305c8
    ADD ESP,0x8                         ; 004305cb
    ADD EBX,dword ptr [ESP + 0xcc]      ; 004305ce
    CMP EBX,EAX                         ; 004305d5
    JZ 0x004305e9                       ; 004305d7
        ;   XREF to: 004305e9 (CONDITIONAL_JUMP)  ; LAB_004305e9
    MOV EDX,dword ptr [EAX]             ; 004305d9
    MOV dword ptr [EBX],EDX             ; 004305db
    MOV EDX,dword ptr [EAX + 0x4]       ; 004305dd
    MOV dword ptr [EBX + 0x4],EDX       ; 004305e0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004305e3
    MOV dword ptr [EBX + 0x8],EDX       ; 004305e6
    MOV EAX,dword ptr [ESI + 0x158]     ; 004305e9
        ;   Label: LAB_004305e9
    DEC EAX                             ; 004305ef
    IMUL EAX,EAX,0x24                   ; 004305f0
    MOV EBX,dword ptr [ESP + 0xcc]      ; 004305f3
    ADD EAX,EBX                         ; 004305fa
    MOV dword ptr [EAX + 0x14],0x0      ; 004305fc
    MOV EDI,dword ptr [ESP + 0xc4]      ; 00430603
    MOV EDX,dword ptr [EAX + 0x14]      ; 0043060a
    MOV dword ptr [EAX + 0x10],EDX      ; 0043060d
    MOV EDX,dword ptr [EAX + 0x10]      ; 00430610
    MOV dword ptr [EAX + 0xc],EDX       ; 00430613
    CMP EBX,EDI                         ; 00430616
    JZ 0x0043062c                       ; 00430618
        ;   XREF to: 0043062c (CONDITIONAL_JUMP)  ; LAB_0043062c
    MOV EAX,EDI                         ; 0043061a
    MOV EDX,dword ptr [EAX]             ; 0043061c
    MOV dword ptr [EBX],EDX             ; 0043061e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00430620
    MOV dword ptr [EBX + 0x4],EDX       ; 00430623
    MOV EDX,dword ptr [EAX + 0x8]       ; 00430626
    MOV dword ptr [EBX + 0x8],EDX       ; 00430629
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0043062c
        ;   Label: LAB_0043062c
    MOV dword ptr [EAX + 0x8],0x0       ; 00430633
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043063a
    MOV dword ptr [EAX + 0x4],EDX       ; 0043063d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00430640
    MOV dword ptr [EAX],EDX             ; 00430643
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00430645
    INC EAX                             ; 0043064c
    MOV dword ptr [ESP + 0xb4],EAX      ; 0043064d
    CMP EAX,0x3                         ; 00430654
    JL 0x0043030f                       ; 00430657
        ;   XREF to: 0043030f (CONDITIONAL_JUMP)  ; LAB_0043030f
    MOV ECX,dword ptr [ESI + 0x158]     ; 0043065d
    XOR EDI,EDI                         ; 00430663
    TEST ECX,ECX                        ; 00430665
    JLE 0x0043069c                      ; 00430667
        ;   XREF to: 0043069c (CONDITIONAL_JUMP)  ; LAB_0043069c
    LEA EDX,[ESI + 0x28c]               ; 00430669
    LEA EBX,[ESI + 0x2a4]               ; 0043066f
    IMUL EAX,EDI,0x24                   ; 00430675
        ;   Label: LAB_00430675
    ADD EAX,EDX                         ; 00430678
    CMP EBX,EAX                         ; 0043067a
    JZ 0x0043068e                       ; 0043067c
        ;   XREF to: 0043068e (CONDITIONAL_JUMP)  ; LAB_0043068e
    MOV ECX,dword ptr [EAX]             ; 0043067e
    MOV dword ptr [EBX],ECX             ; 00430680
    MOV ECX,dword ptr [EAX + 0x4]       ; 00430682
    MOV dword ptr [EBX + 0x4],ECX       ; 00430685
    MOV ECX,dword ptr [EAX + 0x8]       ; 00430688
    MOV dword ptr [EBX + 0x8],ECX       ; 0043068b
    INC EDI                             ; 0043068e
        ;   Label: LAB_0043068e
    MOV EAX,dword ptr [ESI + 0x158]     ; 0043068f
    ADD EBX,0x24                        ; 00430695
    CMP EDI,EAX                         ; 00430698
    JL 0x00430675                       ; 0043069a
        ;   XREF to: 00430675 (CONDITIONAL_JUMP)  ; LAB_00430675
    XOR EDX,EDX                         ; 0043069c
        ;   Label: LAB_0043069c
    MOV EBX,dword ptr [ESI + 0x574]     ; 0043069e
    MOV dword ptr [ESP + 0x9c],EDX      ; 004306a4
    MOV dword ptr [ESP + 0xa0],EDX      ; 004306ab
    TEST EBX,EBX                        ; 004306b2
    JZ 0x004307c0                       ; 004306b4
        ;   XREF to: 004307c0 (CONDITIONAL_JUMP)  ; LAB_004307c0
    FLD float ptr [ESI + 0x15c]         ; 004306ba
    FMUL double ptr [0x006177e2]        ; 004306c0 | DOUBLE_006177e2
    FLD float ptr [ESP + 0x4]           ; 004306c6
    FCOMPP                              ; 004306ca
    FNSTSW AX                           ; 004306cc
    SAHF                                ; 004306ce
    JNC 0x0043074b                      ; 004306cf
        ;   XREF to: 0043074b (CONDITIONAL_JUMP)  ; LAB_0043074b
    LEA EBX,[ESI + 0x2b0]               ; 004306d5
    MOV dword ptr [ESP],EDX             ; 004306db
    XOR EDI,EDI                         ; 004306de
    MOV EAX,dword ptr [ESI + 0x158]     ; 004306e0
        ;   Label: LAB_004306e0
    DEC EAX                             ; 004306e6
    CMP EDI,EAX                         ; 004306e7
    JGE 0x0043072a                      ; 004306e9
        ;   XREF to: 0043072a (CONDITIONAL_JUMP)  ; LAB_0043072a
    FLD float ptr [EBX + -0x24]         ; 004306eb
    FSUB float ptr [EBX]                ; 004306ee
    FSTP float ptr [ESP + 0x2c]         ; 004306f0
    FLD float ptr [EBX + -0x20]         ; 004306f4
    FSUB float ptr [EBX + 0x4]          ; 004306f7
    FST float ptr [ESP + 0x30]          ; 004306fa
    FMUL float ptr [ESP + 0x30]         ; 004306fe
    FLD float ptr [ESP + 0x2c]          ; 00430702
    FMUL ST0                            ; 00430706
    FLD float ptr [EBX + -0x1c]         ; 00430708
    FSUB float ptr [EBX + 0x8]          ; 0043070b
    FXCH                                ; 0043070e
    FADDP ST2,ST0                       ; 00430710
    FST float ptr [ESP + 0x34]          ; 00430712
    FMUL float ptr [ESP + 0x34]         ; 00430716
    FADDP                               ; 0043071a
    FSQRT                               ; 0043071c
    ADD EBX,0x24                        ; 0043071e
    FADD float ptr [ESP]                ; 00430721
    INC EDI                             ; 00430724
    FSTP float ptr [ESP]                ; 00430725
    JMP 0x004306e0                      ; 00430728
        ;   XREF to: 004306e0 (UNCONDITIONAL_JUMP)  ; LAB_004306e0
    FLD float ptr [ESI + 0x15c]         ; 0043072a
        ;   Label: LAB_0043072a
    FMUL double ptr [0x006177e2]        ; 00430730 | DOUBLE_006177e2
    FLD float ptr [ESP]                 ; 00430736
    FCOMPP                              ; 00430739
    FNSTSW AX                           ; 0043073b
    SAHF                                ; 0043073d
    JBE 0x0043074b                      ; 0043073e
        ;   XREF to: 0043074b (CONDITIONAL_JUMP)  ; LAB_0043074b
    MOV dword ptr [ESP + 0xa0],0x1      ; 00430740
    MOV EDX,dword ptr [ESI + 0x158]     ; 0043074b
        ;   Label: LAB_0043074b
    DEC EDX                             ; 00430751
    LEA EAX,[EDX*0x8 + 0x0]             ; 00430752
    ADD EAX,EDX                         ; 00430759
    LEA EDX,[ESI + 0x28c]               ; 0043075b
    FLD float ptr [ESP + 0x8c]          ; 00430761
    FSUB float ptr [EDX + EAX*0x4]      ; 00430768
    FLD float ptr [ESP + 0x90]          ; 0043076b
    FXCH                                ; 00430772
    FSTP float ptr [ESP + 0x50]         ; 00430774
    FSUB float ptr [EDX + EAX*0x4 + 0x4] ; 00430778
    FST float ptr [ESP + 0x54]          ; 0043077c
    FMUL float ptr [ESP + 0x54]         ; 00430780
    FLD float ptr [ESP + 0x50]          ; 00430784
    FMUL ST0                            ; 00430788
    FLD float ptr [ESP + 0x94]          ; 0043078a
    FSUB float ptr [EDX + EAX*0x4 + 0x8] ; 00430791
    FXCH                                ; 00430795
    FADDP ST2,ST0                       ; 00430797
    FST float ptr [ESP + 0x58]          ; 00430799
    FMUL float ptr [ESP + 0x58]         ; 0043079d
    FADDP                               ; 004307a1
    FSQRT                               ; 004307a3
    FLD float ptr [EBP + 0x18]          ; 004307a5
    FMUL double ptr [0x006177ea]        ; 004307a8 | DOUBLE_006177ea
    FCOMPP                              ; 004307ae
    FNSTSW AX                           ; 004307b0
    SAHF                                ; 004307b2
    JNC 0x004307c0                      ; 004307b3
        ;   XREF to: 004307c0 (CONDITIONAL_JUMP)  ; LAB_004307c0
    MOV dword ptr [ESP + 0x9c],0x1      ; 004307b5
    CMP dword ptr [ESP + 0xa0],0x0      ; 004307c0
        ;   Label: LAB_004307c0
    JZ 0x004307f5                       ; 004307c8
        ;   XREF to: 004307f5 (CONDITIONAL_JUMP)  ; LAB_004307f5
    CMP byte ptr [ESI + 0x1b4],0x0      ; 004307ca
    JZ 0x004307f5                       ; 004307d1
        ;   XREF to: 004307f5 (CONDITIONAL_JUMP)  ; LAB_004307f5
    MOV EBX,dword ptr [ESI + 0x280]     ; 004307d3
    PUSH EBX                            ; 004307d9
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004307da
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004307df
    MOV EDI,dword ptr [ESI + 0x218]     ; 004307e2
    PUSH EDI                            ; 004307e8
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004307e9
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004307ee
    TEST EAX,EAX                        ; 004307f1
    JZ 0x00430829                       ; 004307f3
        ;   XREF to: 00430829 (CONDITIONAL_JUMP)  ; LAB_00430829
    FLD float ptr [ESI + 0x284]         ; 004307f5
        ;   Label: LAB_004307f5
    FSUB float ptr [EBP + 0x18]         ; 004307fb
    MOV EDX,dword ptr [ESP + 0x9c]      ; 004307fe
    FSTP float ptr [ESI + 0x284]        ; 00430805
    TEST EDX,EDX                        ; 0043080b
    JNZ 0x00430863                      ; 0043080d
        ;   XREF to: 00430863 (CONDITIONAL_JUMP)  ; LAB_00430863
    FLD float ptr [ESI + 0x284]         ; 0043080f
    FLDZ                                ; 00430815
    FCOMPP                              ; 00430817
    FNSTSW AX                           ; 00430819
    SAHF                                ; 0043081b
    JA 0x004308d2                       ; 0043081c
        ;   XREF to: 004308d2 (CONDITIONAL_JUMP)  ; LAB_004308d2
    MOV ESP,EBP                         ; 00430822
    POP EBP                             ; 00430824
    POP EDI                             ; 00430825
    POP ESI                             ; 00430826
    POP EBX                             ; 00430827
    RET                                 ; 00430828
    MOV EDX,dword ptr [ESI + 0x158]     ; 00430829
        ;   Label: LAB_00430829
    DEC EDX                             ; 0043082f
    LEA EAX,[EDX*0x8 + 0x0]             ; 00430830
    ADD EAX,EDX                         ; 00430837
    SHL EAX,0x2                         ; 00430839
    LEA EDX,[ESI + 0x28c]               ; 0043083c
    ADD EAX,EDX                         ; 00430842
    PUSH EAX                            ; 00430844
    LEA EAX,[ESI + 0x1b4]               ; 00430845
    PUSH EAX                            ; 0043084b
    PUSH ESI                            ; 0043084c
    MOV EAX,[0x00681ef8]                ; 0043084d | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 00430852 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70 ; 00430853
        ;   XREF to: 005b3a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 00430858
    MOV dword ptr [ESI + 0x280],EAX     ; 0043085b
    JMP 0x004307f5                      ; 00430861
        ;   XREF to: 004307f5 (UNCONDITIONAL_JUMP)  ; LAB_004307f5
    MOV EBX,dword ptr [ESI + 0x218]     ; 00430863
        ;   Label: LAB_00430863
    PUSH EBX                            ; 00430869
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 0043086a
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 0043086f
    TEST EAX,EAX                        ; 00430872
    JNZ 0x004308c1                      ; 00430874
        ;   XREF to: 004308c1 (CONDITIONAL_JUMP)  ; LAB_004308c1
    MOV EDI,dword ptr [ESI + 0x280]     ; 00430876
    PUSH EDI                            ; 0043087c
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 0043087d
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00430882
    TEST EAX,EAX                        ; 00430885
    JNZ 0x004308c1                      ; 00430887
        ;   XREF to: 004308c1 (CONDITIONAL_JUMP)  ; LAB_004308c1
    MOV EDX,dword ptr [ESI + 0x158]     ; 00430889
    DEC EDX                             ; 0043088f
    LEA EAX,[EDX*0x8 + 0x0]             ; 00430890
    ADD EAX,EDX                         ; 00430897
    SHL EAX,0x2                         ; 00430899
    LEA EDX,[ESI + 0x28c]               ; 0043089c
    ADD EAX,EDX                         ; 004308a2
    PUSH EAX                            ; 004308a4
    LEA EAX,[ESI + 0x21c]               ; 004308a5
    PUSH EAX                            ; 004308ab
    PUSH ESI                            ; 004308ac
    MOV EAX,[0x00681ef8]                ; 004308ad | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 004308b2 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70 ; 004308b3
        ;   XREF to: 005b3a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_005b3a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 004308b8
    MOV dword ptr [ESI + 0x280],EAX     ; 004308bb
    MOV dword ptr [ESI + 0x284],0x3f000000 ; 004308c1
        ;   Label: LAB_004308c1
    MOV ESP,EBP                         ; 004308cb
    POP EBP                             ; 004308cd
    POP EDI                             ; 004308ce
    POP ESI                             ; 004308cf
    POP EBX                             ; 004308d0
    RET                                 ; 004308d1
    MOV ECX,dword ptr [ESI + 0x280]     ; 004308d2
        ;   Label: LAB_004308d2
    PUSH ECX                            ; 004308d8
    MOV dword ptr [ESI + 0x284],EDX     ; 004308d9
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004308df
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004308e4
    MOV ESP,EBP                         ; 004308e7
    POP EBP                             ; 004308e9
    POP EDI                             ; 004308ea
    POP ESI                             ; 004308eb
    POP EBX                             ; 004308ec
    RET                                 ; 004308ed


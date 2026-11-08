; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005081a0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)
;
; Local Variables:
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
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
;   FUN_0050a280 at 0050aaf6
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005e022b
;   TerminatedCString s_Error_in_streo_processin_005e023c
;   undefined4 DAT_005e0263
;   undefined4 DAT_005e026b
;   undefined4 DAT_00619338
;   undefined4 DAT_0061933c
;   undefined4 DAT_00619340
;   undefined4 DAT_00619344
;   undefined4 DAT_00619368
;   undefined4 DAT_0061936c
;   undefined4 DAT_00619388
;   undefined4 DAT_0061938c
;   undefined4 DAT_006193c0
;   undefined4 DAT_006193c4
;   undefined4 DAT_006193c8
;   ... and 5 more
;
; Called Functions:
;   FUN_004e4500
;   FUN_00508100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005081a0
        ;   Label: FUN_005081a0
    PUSH ESI                            ; 005081a1
    PUSH EDI                            ; 005081a2
    PUSH EBP                            ; 005081a3
    MOV EBP,ESP                         ; 005081a4
    SUB ESP,0xec                        ; 005081a6
    AND ESP,0xfffffff8                  ; 005081ac
    MOV ECX,dword ptr [EBP + 0x20]      ; 005081af
    MOV EAX,dword ptr [EBP + 0x24]      ; 005081b2
    MOV EDX,dword ptr [EAX + 0x10]      ; 005081b5
    MOV dword ptr [ESP + 0x10],EDX      ; 005081b8
    MOV EDX,dword ptr [EAX]             ; 005081bc
    CMP dword ptr [EDX + 0x1c],0x1      ; 005081be
    JNZ 0x0050840c                      ; 005081c2
        ;   XREF to: 0050840c (CONDITIONAL_JUMP)  ; LAB_0050840c
    TEST byte ptr [EDX + 0x20],0x2      ; 005081c8
    JZ 0x0050840c                       ; 005081cc
        ;   XREF to: 0050840c (CONDITIONAL_JUMP)  ; LAB_0050840c
    MOV EDX,0x1                         ; 005081d2
    MOV dword ptr [ESP + 0x58],EDX      ; 005081d7
        ;   Label: LAB_005081d7
    MOV EDX,dword ptr [EAX]             ; 005081db
    MOV ESI,dword ptr [EDX + 0x1c]      ; 005081dd
    CMP ESI,0x1                         ; 005081e0
    JNZ 0x00508413                      ; 005081e3
        ;   XREF to: 00508413 (CONDITIONAL_JUMP)  ; LAB_00508413
    TEST byte ptr [EDX + 0x20],0x1      ; 005081e9
    JZ 0x00508413                       ; 005081ed
        ;   XREF to: 00508413 (CONDITIONAL_JUMP)  ; LAB_00508413
    MOV EDX,ESI                         ; 005081f3
    MOV dword ptr [ESP + 0x14],EDX      ; 005081f5
        ;   Label: LAB_005081f5
    MOV EDX,dword ptr [EAX]             ; 005081f9
    CMP dword ptr [EDX],0x0             ; 005081fb
    SETZ DL                             ; 005081fe
    AND EDX,0xff                        ; 00508201
    MOV dword ptr [ESP + 0x20],EDX      ; 00508207
    MOV EDX,dword ptr [ECX + 0xc]       ; 0050820b
    AND EDX,0x1                         ; 0050820e
    CMP EDX,0x1                         ; 00508211
    JNZ 0x0050841a                      ; 00508214
        ;   XREF to: 0050841a (CONDITIONAL_JUMP)  ; LAB_0050841a
    MOV ESI,0x667f6ee7                  ; 0050821a
    MOV EDI,0x3fe6a09e                  ; 0050821f
    MOV dword ptr [ESP],ESI             ; 00508224
    MOV dword ptr [ESP + 0x4],EDI       ; 00508227
    MOV EBX,dword ptr [EAX]             ; 0050822b
        ;   Label: LAB_0050822b
    MOV EDX,dword ptr [EBX]             ; 0050822d
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050822f
    SUB EAX,EDX                         ; 00508236
    MOV EDX,dword ptr [EBX + 0x10]      ; 00508238
    ADD EDX,EAX                         ; 0050823b
    MOV dword ptr [ESP + 0x54],EDX      ; 0050823d
    XOR EAX,EAX                         ; 00508241
    MOV EDX,0x7                         ; 00508243
    ADD EAX,0x2                         ; 00508248
        ;   Label: LAB_00508248
    MOV word ptr [EAX + 0x1d1fa56],DX   ; 0050824b
    CMP EAX,0x480                       ; 00508252
    JNZ 0x00508248                      ; 00508257
        ;   XREF to: 00508248 (CONDITIONAL_JUMP)  ; LAB_00508248
    MOV EAX,dword ptr [ESP + 0x10]      ; 00508259
    CMP EAX,0x2                         ; 0050825d
    JZ 0x00508430                       ; 00508260
        ;   XREF to: 00508430 (CONDITIONAL_JUMP)  ; LAB_00508430
    LEA EAX,[EAX]                       ; 00508266
    LEA EDX,[EDX]                       ; 0050826c
    MOV EAX,dword ptr [EBP + 0x18]      ; 00508270
        ;   Label: LAB_00508270
    MOV dword ptr [ESP + 0xa8],EAX      ; 00508273
    ADD EAX,0x1200                      ; 0050827a
    MOV dword ptr [ESP + 0xac],EAX      ; 0050827f
    MOV ESI,dword ptr [ESP + 0xa8]      ; 00508286
        ;   Label: LAB_00508286
    XOR EDX,EDX                         ; 0050828d
    LEA EBX,[ESI + 0x48]                ; 0050828f
    IMUL EAX,EDX,0x48                   ; 00508292
        ;   Label: LAB_00508292
    LEA ECX,[ESI + EAX*0x1]             ; 00508295
    MOV EAX,EBX                         ; 00508298
    MOV dword ptr [ECX],0x0             ; 0050829a
        ;   Label: LAB_0050829a
    ADD ECX,0x4                         ; 005082a0
    CMP ECX,EAX                         ; 005082a3
    JNZ 0x0050829a                      ; 005082a5
        ;   XREF to: 0050829a (CONDITIONAL_JUMP)  ; LAB_0050829a
    INC EDX                             ; 005082a7
    ADD EBX,0x48                        ; 005082a8
    CMP EDX,0x20                        ; 005082ab
    JL 0x00508292                       ; 005082ae
        ;   XREF to: 00508292 (CONDITIONAL_JUMP)  ; LAB_00508292
    MOV EDX,dword ptr [ESP + 0xa8]      ; 005082b0
    ADD EDX,0x900                       ; 005082b7
    MOV ECX,dword ptr [ESP + 0xac]      ; 005082bd
    MOV dword ptr [ESP + 0xa8],EDX      ; 005082c4
    CMP EDX,ECX                         ; 005082cb
    JNZ 0x00508286                      ; 005082cd
        ;   XREF to: 00508286 (CONDITIONAL_JUMP)  ; LAB_00508286
    CMP dword ptr [ESP + 0x10],0x2      ; 005082cf
    JNZ 0x00508eb0                      ; 005082d4
        ;   XREF to: 00508eb0 (CONDITIONAL_JUMP)  ; LAB_00508eb0
    XOR ESI,ESI                         ; 005082da
    MOV EAX,dword ptr [EBP + 0x14]      ; 005082dc
    MOV dword ptr [ESP + 0xe0],ESI      ; 005082df
    MOV dword ptr [ESP + 0xc0],EAX      ; 005082e6
    MOV EAX,dword ptr [EBP + 0x18]      ; 005082ed
    MOV dword ptr [ESP + 0xc8],ESI      ; 005082f0
    MOV dword ptr [ESP + 0xc4],EAX      ; 005082f7
    MOV EDI,0x48                        ; 005082fe
    MOV EBX,dword ptr [ESP + 0xe0]      ; 00508303
        ;   Label: LAB_00508303
    IMUL EAX,EBX,0x12                   ; 0050830a
    MOV dword ptr [ESP + 0x64],EAX      ; 0050830d
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00508311
    MOV dword ptr [ESP + 0xb4],EAX      ; 00508318
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0050831f
    XOR ESI,ESI                         ; 00508326
    MOV dword ptr [ESP + 0xb8],EAX      ; 00508328
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0050832f
    XOR EBX,EBX                         ; 00508336
    MOV dword ptr [ESP + 0xbc],EAX      ; 00508338
    MOV EAX,dword ptr [ESP + 0x64]      ; 0050833f
        ;   Label: LAB_0050833f
    MOV EDX,dword ptr [ESP + 0xb8]      ; 00508343
    ADD EAX,ESI                         ; 0050834a
    MOV ECX,dword ptr [ESP + 0xb4]      ; 0050834c
    MOV dword ptr [ESP + 0xd4],EAX      ; 00508353
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0050835a
    ADD EDX,EBX                         ; 00508361
    ADD EAX,EBX                         ; 00508363
    CMP word ptr [ECX + 0x1d1fa58],0x7  ; 00508365
    JNZ 0x00508e2e                      ; 0050836d
        ;   XREF to: 00508e2e (CONDITIONAL_JUMP)  ; LAB_00508e2e
    CMP dword ptr [ESP + 0x58],0x0      ; 00508373
    JZ 0x00508e19                       ; 00508378
        ;   XREF to: 00508e19 (CONDITIONAL_JUMP)  ; LAB_00508e19
    FLD float ptr [EAX]                 ; 0050837e
    FADD float ptr [EAX + 0x900]        ; 00508380
    FLD double ptr [0x005e026b]         ; 00508386 | DAT_005e026b
    FXCH                                ; 0050838c
    FMUL ST1                            ; 0050838e
    FSTP float ptr [EDX]                ; 00508390
    FLD float ptr [EAX]                 ; 00508392
    FSUB float ptr [EAX + 0x900]        ; 00508394
    FMULP                               ; 0050839a
    FSTP float ptr [EDX + 0x900]        ; 0050839c
        ;   Label: LAB_0050839c
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005083a2
        ;   Label: LAB_005083a2
    INC ESI                             ; 005083a9
    ADD EAX,0x2                         ; 005083aa
    ADD EBX,0x4                         ; 005083ad
    MOV dword ptr [ESP + 0xb4],EAX      ; 005083b0
    CMP ESI,0x12                        ; 005083b7
    JL 0x0050833f                       ; 005083ba
        ;   XREF to: 0050833f (CONDITIONAL_JUMP)  ; LAB_0050833f
    MOV ECX,dword ptr [ESP + 0xc4]      ; 005083bc
    MOV EBX,dword ptr [ESP + 0xc8]      ; 005083c3
    MOV ESI,dword ptr [ESP + 0xe0]      ; 005083ca
    MOV EDX,dword ptr [ESP + 0xc0]      ; 005083d1
    ADD EBX,0x24                        ; 005083d8
    INC ESI                             ; 005083db
    ADD ECX,EDI                         ; 005083dc
    ADD EDX,EDI                         ; 005083de
    MOV dword ptr [ESP + 0xc4],ECX      ; 005083e0
    MOV dword ptr [ESP + 0xc8],EBX      ; 005083e7
    MOV dword ptr [ESP + 0xe0],ESI      ; 005083ee
    MOV dword ptr [ESP + 0xc0],EDX      ; 005083f5
    CMP ESI,0x20                        ; 005083fc
    JL 0x00508303                       ; 005083ff
        ;   XREF to: 00508303 (CONDITIONAL_JUMP)  ; LAB_00508303
    MOV ESP,EBP                         ; 00508405
        ;   Label: LAB_00508405
    POP EBP                             ; 00508407
    POP EDI                             ; 00508408
    POP ESI                             ; 00508409
    POP EBX                             ; 0050840a
    RET                                 ; 0050840b
    XOR EDX,EDX                         ; 0050840c
        ;   Label: LAB_0050840c
    JMP 0x005081d7                      ; 0050840e
        ;   XREF to: 005081d7 (UNCONDITIONAL_JUMP)  ; LAB_005081d7
    XOR EDX,EDX                         ; 00508413
        ;   Label: LAB_00508413
    JMP 0x005081f5                      ; 00508415
        ;   XREF to: 005081f5 (UNCONDITIONAL_JUMP)  ; LAB_005081f5
    MOV EDX,0x995b2417                  ; 0050841a
        ;   Label: LAB_0050841a
    MOV EBX,0x3feae89f                  ; 0050841f
    MOV dword ptr [ESP],EDX             ; 00508424
    MOV dword ptr [ESP + 0x4],EBX       ; 00508427
    JMP 0x0050822b                      ; 0050842b
        ;   XREF to: 0050822b (UNCONDITIONAL_JUMP)  ; LAB_0050822b
    CMP dword ptr [ESP + 0x14],0x0      ; 00508430
        ;   Label: LAB_00508430
    JZ 0x00508270                       ; 00508435
        ;   XREF to: 00508270 (CONDITIONAL_JUMP)  ; LAB_00508270
    CMP dword ptr [ECX + 0x10],0x0      ; 0050843b
    JNZ 0x00508636                      ; 0050843f
        ;   XREF to: 00508636 (CONDITIONAL_JUMP)  ; LAB_00508636
    MOV ECX,0x1f                        ; 00508445
        ;   Label: LAB_00508445
    MOV EDX,0x11                        ; 0050844a
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050844f
    XOR EDI,EDI                         ; 00508452
    ADD EBX,0x8b8                       ; 00508454
    MOV ESI,EDX                         ; 0050845a
    TEST dword ptr [EBX + EDX*0x4 + 0x900],0x7fffffff ; 0050845c
        ;   Label: LAB_0050845c
    JZ 0x00508de2                       ; 00508467
        ;   XREF to: 00508de2 (CONDITIONAL_JUMP)  ; LAB_00508de2
    LEA EAX,[ECX*0x8 + 0x0]             ; 0050846d
    ADD EAX,ECX                         ; 00508474
    ADD EAX,EAX                         ; 00508476
    LEA EDI,[EAX + EDX*0x1]             ; 00508478
    MOV EDX,dword ptr [ESP + 0x54]      ; 0050847b
        ;   Label: LAB_0050847b
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050847f
    ADD EAX,EDX                         ; 00508486
    SHL EAX,0x2                         ; 00508488
    ADD EDX,EAX                         ; 0050848b
    SHL EDX,0x2                         ; 0050848d
    XOR ESI,ESI                         ; 00508490
    MOV ECX,dword ptr [EDX + 0x619338]  ; 00508492 | DAT_00619338
    MOV EAX,EDX                         ; 00508498
    CMP EDI,ECX                         ; 0050849a
    JL 0x005084b0                       ; 0050849c
        ;   XREF to: 005084b0 (CONDITIONAL_JUMP)  ; LAB_005084b0
    INC ESI                             ; 0050849e
        ;   Label: LAB_0050849e
    MOV EBX,dword ptr [EAX + 0x61933c]  ; 0050849f | DAT_0061933c | DAT_00619340
    ADD EAX,0x4                         ; 005084a5
    CMP EDI,EBX                         ; 005084a8
    JGE 0x0050849e                      ; 005084aa
        ;   XREF to: 0050849e (CONDITIONAL_JUMP)  ; LAB_0050849e
    LEA EAX,[EAX]                       ; 005084ac
    MOV EDX,dword ptr [ESP + 0x54]      ; 005084b0
        ;   Label: LAB_005084b0
    MOV dword ptr [ESP + 0x18],ESI      ; 005084b4
    MOV ESI,dword ptr [EAX + 0x619338]  ; 005084b8 | DAT_0061933c | DAT_00619340 | DAT_00619338
    LEA EAX,[EDX*0x8 + 0x0]             ; 005084be
    ADD EAX,EDX                         ; 005084c5
    SHL EAX,0x2                         ; 005084c7
    ADD EAX,EDX                         ; 005084ca
    MOV EDI,dword ptr [ESP + 0x18]      ; 005084cc
    SHL EAX,0x2                         ; 005084d0
    SHL EDI,0x2                         ; 005084d3
    MOV dword ptr [ESP + 0x70],EAX      ; 005084d6
    ADD EAX,EDI                         ; 005084da
    MOV dword ptr [ESP + 0x78],EAX      ; 005084dc
    CMP dword ptr [ESP + 0x18],0x15     ; 005084e0
    JGE 0x005085a3                      ; 005084e5
        ;   XREF to: 005085a3 (CONDITIONAL_JUMP)  ; LAB_005085a3
    MOV dword ptr [ESP + 0x7c],EDI      ; 005084eb
    MOV EAX,dword ptr [ESP + 0x78]      ; 005084ef
        ;   Label: LAB_005084ef
    MOV EDI,dword ptr [ESP + 0x78]      ; 005084f3
    MOV EBX,dword ptr [EAX + 0x619338]  ; 005084f7 | DAT_0061933c | DAT_00619340
    MOV EDI,dword ptr [EDI + 0x61933c]  ; 005084fd | DAT_00619340 | DAT_00619344
    SUB EDI,EBX                         ; 00508503
    TEST EDI,EDI                        ; 00508505
    JLE 0x0050857b                      ; 00508507
        ;   XREF to: 0050857b (CONDITIONAL_JUMP)  ; LAB_0050857b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00508509
    ADD EAX,dword ptr [ESP + 0x7c]      ; 0050850c
    LEA EBX,[ESI + ESI*0x1]             ; 00508510
    MOV dword ptr [ESP + 0x5c],EAX      ; 00508513
    LEA EAX,[ESI*0x4 + 0x0]             ; 00508517
    MOV dword ptr [ESP + 0x74],EAX      ; 0050851e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00508522
        ;   Label: LAB_00508522
    MOV AX,word ptr [EAX + 0xf8]        ; 00508526
    MOV word ptr [EBX + 0x1d1fa58],AX   ; 0050852d
    CMP AX,0x7                          ; 00508534
    JZ 0x00508567                       ; 00508538
        ;   XREF to: 00508567 (CONDITIONAL_JUMP)  ; LAB_00508567
    CMP dword ptr [ESP + 0x20],0x0      ; 0050853a
    JZ 0x00508dfa                       ; 0050853f
        ;   XREF to: 00508dfa (CONDITIONAL_JUMP)  ; LAB_00508dfa
    PUSH 0x1d207d8                      ; 00508545
    PUSH ESI                            ; 0050854a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050854b
    PUSH EAX                            ; 0050854f
    MOV EDX,dword ptr [ESP + 0xc]       ; 00508550
    MOV EAX,dword ptr [EBX + 0x1d1fa56] ; 00508554
    PUSH EDX                            ; 0050855a
    SAR EAX,0x10                        ; 0050855b
    PUSH EAX                            ; 0050855e
    CALL FUN_00508100                   ; 0050855f
        ;   XREF to: 00508100 (UNCONDITIONAL_CALL)  ; undefined FUN_00508100()
    ADD ESP,0x14                        ; 00508564
    MOV EAX,dword ptr [ESP + 0x74]      ; 00508567
        ;   Label: LAB_00508567
    ADD EBX,0x2                         ; 0050856b
    INC ESI                             ; 0050856e
    ADD EAX,0x4                         ; 0050856f
    DEC EDI                             ; 00508572
    MOV dword ptr [ESP + 0x74],EAX      ; 00508573
    TEST EDI,EDI                        ; 00508577
    JG 0x00508522                       ; 00508579
        ;   XREF to: 00508522 (CONDITIONAL_JUMP)  ; LAB_00508522
    MOV EDX,dword ptr [ESP + 0x78]      ; 0050857b
        ;   Label: LAB_0050857b
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0050857f
    MOV EBX,dword ptr [ESP + 0x18]      ; 00508583
    ADD EDX,0x4                         ; 00508587
    ADD ECX,0x4                         ; 0050858a
    INC EBX                             ; 0050858d
    MOV dword ptr [ESP + 0x78],EDX      ; 0050858e
    MOV dword ptr [ESP + 0x7c],ECX      ; 00508592
    MOV dword ptr [ESP + 0x18],EBX      ; 00508596
    CMP ECX,0x54                        ; 0050859a
    JL 0x005084ef                       ; 0050859d
        ;   XREF to: 005084ef (CONDITIONAL_JUMP)  ; LAB_005084ef
    MOV EAX,dword ptr [ESP + 0x70]      ; 005085a3
        ;   Label: LAB_005085a3
    MOV EDI,0x240                       ; 005085a7
    MOV ECX,dword ptr [EAX + 0x61938c]  ; 005085ac | DAT_0061938c
    MOV EDX,dword ptr [ESP + 0x70]      ; 005085b2
    SUB EDI,ECX                         ; 005085b6
    MOV EDX,dword ptr [EDX + 0x619388]  ; 005085b8 | DAT_00619388
    TEST EDI,EDI                        ; 005085be
    JLE 0x00508270                      ; 005085c0
        ;   XREF to: 00508270 (CONDITIONAL_JUMP)  ; LAB_00508270
    LEA EAX,[EDX + EDX*0x1]             ; 005085c6
    MOV dword ptr [ESP + 0x60],EAX      ; 005085c9
    LEA EAX,[ESI*0x4 + 0x0]             ; 005085cd
    LEA ECX,[ESI + ESI*0x1]             ; 005085d4
    SHL EDX,0x2                         ; 005085d7
    MOV dword ptr [ESP + 0x80],ECX      ; 005085da
    FLD float ptr [EDX + 0x1d1fed8]     ; 005085e1
        ;   Label: LAB_005085e1
    FLD float ptr [EDX + 0x1d207d8]     ; 005085e7
    MOV EBX,dword ptr [ESP + 0x60]      ; 005085ed
    MOV ECX,dword ptr [ESP + 0x80]      ; 005085f1
    ADD EAX,0x4                         ; 005085f8
    INC ESI                             ; 005085fb
    DEC EDI                             ; 005085fc
    FSTP float ptr [EAX + 0x1d207d4]    ; 005085fd
    FSTP float ptr [EAX + 0x1d1fed4]    ; 00508603
    FLD float ptr [EDX + 0x1d210d8]     ; 00508609
    ADD ECX,0x2                         ; 0050860f
    MOV BX,word ptr [EBX + 0x1d1fa58]   ; 00508612
    FSTP float ptr [EAX + 0x1d210d4]    ; 00508619
    MOV dword ptr [ESP + 0x80],ECX      ; 0050861f
    MOV word ptr [ECX + 0x1d1fa56],BX   ; 00508626
    TEST EDI,EDI                        ; 0050862d
    JG 0x005085e1                       ; 0050862f
        ;   XREF to: 005085e1 (CONDITIONAL_JUMP)  ; LAB_005085e1
    JMP 0x00508270                      ; 00508631
        ;   XREF to: 00508270 (UNCONDITIONAL_JUMP)  ; LAB_00508270
    CMP EAX,dword ptr [ECX + 0x14]      ; 00508636
        ;   Label: LAB_00508636
    JNZ 0x00508445                      ; 00508639
        ;   XREF to: 00508445 (CONDITIONAL_JUMP)  ; LAB_00508445
    MOV EDX,dword ptr [ESP + 0x54]      ; 0050863f
    LEA EAX,[EDX*0x8 + 0x0]             ; 00508643
    ADD EAX,EDX                         ; 0050864a
    SHL EAX,0x2                         ; 0050864c
    ADD EAX,EDX                         ; 0050864f
    MOV EDI,dword ptr [ECX + 0x18]      ; 00508651
    SHL EAX,0x2                         ; 00508654
    TEST EDI,EDI                        ; 00508657
    JZ 0x00508b15                       ; 00508659
        ;   XREF to: 00508b15 (CONDITIONAL_JUMP)  ; LAB_00508b15
    MOV dword ptr [ESP + 0x6c],EAX      ; 0050865f
    MOV dword ptr [ESP + 0x2c],EAX      ; 00508663
    XOR ECX,ECX                         ; 00508667
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00508669
    MOV dword ptr [ESP + 0x24],ECX      ; 0050866c
    MOV dword ptr [ESP + 0xc],ECX       ; 00508670
    MOV dword ptr [ESP + 0x9c],EAX      ; 00508674
    MOV EBX,0x2                         ; 0050867b
        ;   Label: LAB_0050867b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00508680
    MOV ESI,0xc                         ; 00508684
    INC EAX                             ; 00508689
    MOV dword ptr [ESP + 0x28],EBX      ; 0050868a
    MOV dword ptr [ESP + 0x30],EAX      ; 0050868e
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00508692
        ;   Label: LAB_00508692
    LEA EAX,[ESI*0x4 + 0x0]             ; 00508696
    ADD EAX,EDI                         ; 0050869d
    MOV EBX,dword ptr [EAX + 0x619398]  ; 0050869f | DAT_006193c8 | DAT_0061936c
    MOV EDX,dword ptr [EAX + 0x619394]  ; 005086a5 | DAT_006193c4 | DAT_00619368
    MOV EAX,dword ptr [ESP + 0x30]      ; 005086ab
    SUB EBX,EDX                         ; 005086af
    IMUL EAX,EBX                        ; 005086b1
    LEA EDX,[EDX + EDX*0x2]             ; 005086b4
    ADD EAX,EDX                         ; 005086b7
    LEA ECX,[EAX + -0x1]                ; 005086b9
    TEST EBX,EBX                        ; 005086bc
    JLE 0x0050870d                      ; 005086be
        ;   XREF to: 0050870d (CONDITIONAL_JUMP)  ; LAB_0050870d
    MOV EDI,0x12                        ; 005086c0
        ;   Label: LAB_005086c0
    MOV EDX,ECX                         ; 005086c5
    MOV EAX,ECX                         ; 005086c7
    SAR EDX,0x1f                        ; 005086c9
    IDIV EDI                            ; 005086cc
    IMUL EAX,EAX,0x48                   ; 005086ce
    MOV dword ptr [ESP + 0xe8],0x12     ; 005086d1
    MOV EDX,ECX                         ; 005086dc
    MOV EDI,dword ptr [EBP + 0x14]      ; 005086de
    SAR EDX,0x1f                        ; 005086e1
    ADD EDI,EAX                         ; 005086e4
    MOV EAX,ECX                         ; 005086e6
    IDIV dword ptr [ESP + 0xe8]         ; 005086e8
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 005086ef
    JZ 0x00508707                       ; 005086fa
        ;   XREF to: 00508707 (CONDITIONAL_JUMP)  ; LAB_00508707
    MOV dword ptr [ESP + 0x28],ESI      ; 005086fc
    MOV ESI,0xfffffff6                  ; 00508700
    MOV EBX,ESI                         ; 00508705
    DEC EBX                             ; 00508707
        ;   Label: LAB_00508707
    DEC ECX                             ; 00508708
    TEST EBX,EBX                        ; 00508709
    JG 0x005086c0                       ; 0050870b
        ;   XREF to: 005086c0 (CONDITIONAL_JUMP)  ; LAB_005086c0
    DEC ESI                             ; 0050870d
        ;   Label: LAB_0050870d
    CMP ESI,0x3                         ; 0050870e
    JGE 0x00508692                      ; 00508711
        ;   XREF to: 00508692 (CONDITIONAL_JUMP)  ; LAB_00508692
    MOV EAX,dword ptr [ESP + 0x28]      ; 00508717
    INC EAX                             ; 0050871b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0050871c
    MOV dword ptr [ESP + 0xcc],EAX      ; 00508720
    CMP EAX,ECX                         ; 00508727
    JG 0x005089f8                       ; 00508729
        ;   XREF to: 005089f8 (CONDITIONAL_JUMP)  ; LAB_005089f8
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0050872f
        ;   Label: LAB_0050872f
    MOV dword ptr [ESP + 0x34],EAX      ; 00508736
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0050873a
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00508741
    SHL EAX,0x2                         ; 00508745
    ADD EAX,EBX                         ; 00508748
    MOV dword ptr [ESP + 0x98],EAX      ; 0050874a
    MOV ESI,dword ptr [ESP + 0xcc]      ; 00508751
        ;   Label: LAB_00508751
    CMP ESI,0xc                         ; 00508758
    JGE 0x00508a23                      ; 0050875b
        ;   XREF to: 00508a23 (CONDITIONAL_JUMP)  ; LAB_00508a23
    LEA EDX,[ESI*0x4 + 0x0]             ; 00508761
    MOV EAX,dword ptr [ESP + 0x98]      ; 00508768
    MOV ESI,dword ptr [ESP + 0x98]      ; 0050876f
    MOV EDI,dword ptr [EAX + 0x619394]  ; 00508776 | DAT_006193c8
    MOV ESI,dword ptr [ESI + 0x619398]  ; 0050877c | DAT_006193cc
    MOV EAX,dword ptr [ESP + 0xc]       ; 00508782
    SUB ESI,EDI                         ; 00508786
    IMUL EAX,ESI                        ; 00508788
    LEA EDI,[EDI + EDI*0x2]             ; 0050878b
    ADD EDI,EAX                         ; 0050878e
    TEST ESI,ESI                        ; 00508790
    JLE 0x00508812                      ; 00508792
        ;   XREF to: 00508812 (CONDITIONAL_JUMP)  ; LAB_00508812
    MOV EAX,dword ptr [ESP + 0x34]      ; 00508798
    ADD EAX,EDX                         ; 0050879c
    LEA EBX,[EDI + EDI*0x1]             ; 0050879e
    MOV dword ptr [ESP + 0x38],EAX      ; 005087a1
    LEA EAX,[EDI*0x4 + 0x0]             ; 005087a5
    MOV dword ptr [ESP + 0x94],EAX      ; 005087ac
    MOV EAX,dword ptr [ESP + 0x38]      ; 005087b3
        ;   Label: LAB_005087b3
    MOV AX,word ptr [EAX + 0x154]       ; 005087b7
    MOV word ptr [EBX + 0x1d1fa58],AX   ; 005087be
    CMP AX,0x7                          ; 005087c5
    JZ 0x005087f8                       ; 005087c9
        ;   XREF to: 005087f8 (CONDITIONAL_JUMP)  ; LAB_005087f8
    CMP dword ptr [ESP + 0x20],0x0      ; 005087cb
    JZ 0x00508a01                       ; 005087d0
        ;   XREF to: 00508a01 (CONDITIONAL_JUMP)  ; LAB_00508a01
    PUSH 0x1d207d8                      ; 005087d6
    PUSH EDI                            ; 005087db
    MOV EDX,dword ptr [ESP + 0xc]       ; 005087dc
    PUSH EDX                            ; 005087e0
    MOV ECX,dword ptr [ESP + 0xc]       ; 005087e1
    MOV EAX,dword ptr [EBX + 0x1d1fa56] ; 005087e5
    PUSH ECX                            ; 005087eb
    SAR EAX,0x10                        ; 005087ec
    PUSH EAX                            ; 005087ef
    CALL FUN_00508100                   ; 005087f0
        ;   XREF to: 00508100 (UNCONDITIONAL_CALL)  ; undefined FUN_00508100()
    ADD ESP,0x14                        ; 005087f5
    MOV EAX,dword ptr [ESP + 0x94]      ; 005087f8
        ;   Label: LAB_005087f8
    ADD EBX,0x2                         ; 005087ff
    INC EDI                             ; 00508802
    ADD EAX,0x4                         ; 00508803
    DEC ESI                             ; 00508806
    MOV dword ptr [ESP + 0x94],EAX      ; 00508807
    TEST ESI,ESI                        ; 0050880e
    JG 0x005087b3                       ; 00508810
        ;   XREF to: 005087b3 (CONDITIONAL_JUMP)  ; LAB_005087b3
    MOV ECX,dword ptr [ESP + 0xcc]      ; 00508812
        ;   Label: LAB_00508812
    MOV EDX,dword ptr [ESP + 0x98]      ; 00508819
    INC ECX                             ; 00508820
    ADD EDX,0x4                         ; 00508821
    MOV dword ptr [ESP + 0xcc],ECX      ; 00508824
    MOV dword ptr [ESP + 0x98],EDX      ; 0050882b
    JMP 0x00508751                      ; 00508832
        ;   XREF to: 00508751 (UNCONDITIONAL_JUMP)  ; LAB_00508751
    MOV EDI,dword ptr [ESP + 0xc]       ; 00508837
        ;   Label: LAB_00508837
    MOV ESI,dword ptr [ESP + 0x9c]      ; 0050883b
    INC EDI                             ; 00508842
    ADD ESI,0x34                        ; 00508843
    MOV dword ptr [ESP + 0xc],EDI       ; 00508846
    MOV dword ptr [ESP + 0x9c],ESI      ; 0050884a
    CMP EDI,0x3                         ; 00508851
    JL 0x0050867b                       ; 00508854
        ;   XREF to: 0050867b (CONDITIONAL_JUMP)  ; LAB_0050867b
    CMP dword ptr [ESP + 0x24],0x3      ; 0050885a
    JG 0x00508270                       ; 0050885f
        ;   XREF to: 00508270 (CONDITIONAL_JUMP)  ; LAB_00508270
    MOV ECX,0x2                         ; 00508865
    MOV EDX,0x11                        ; 0050886a
    MOV EBX,0xffffffff                  ; 0050886f
    MOV EDI,dword ptr [EBP + 0x14]      ; 00508874
    MOV dword ptr [ESP + 0xe4],EBX      ; 00508877
    ADD EDI,0x90                        ; 0050887e
    MOV EBX,EDX                         ; 00508884
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 00508886
        ;   Label: LAB_00508886
    JZ 0x00508adb                       ; 00508891
        ;   XREF to: 00508adb (CONDITIONAL_JUMP)  ; LAB_00508adb
    LEA EAX,[ECX*0x8 + 0x0]             ; 00508897
    ADD EAX,ECX                         ; 0050889e
    ADD EAX,EAX                         ; 005088a0
    ADD EAX,EDX                         ; 005088a2
    MOV dword ptr [ESP + 0xe4],EAX      ; 005088a4
    MOV EDX,dword ptr [ESP + 0x54]      ; 005088ab
        ;   Label: LAB_005088ab
    LEA EAX,[EDX*0x8 + 0x0]             ; 005088af
    ADD EAX,EDX                         ; 005088b6
    SHL EAX,0x2                         ; 005088b8
    ADD EDX,EAX                         ; 005088bb
    SHL EDX,0x2                         ; 005088bd
    MOV EDI,dword ptr [ESP + 0xe4]      ; 005088c0
    MOV EAX,EDX                         ; 005088c7
    MOV EDX,dword ptr [EDX + 0x619338]  ; 005088c9 | DAT_00619338
    XOR ESI,ESI                         ; 005088cf
    CMP EDX,EDI                         ; 005088d1
    JG 0x005088f0                       ; 005088d3
        ;   XREF to: 005088f0 (CONDITIONAL_JUMP)  ; LAB_005088f0
    MOV ECX,dword ptr [ESP + 0xe4]      ; 005088d5
    INC ESI                             ; 005088dc
        ;   Label: LAB_005088dc
    MOV EDX,dword ptr [EAX + 0x61933c]  ; 005088dd | DAT_0061933c | DAT_00619340
    ADD EAX,0x4                         ; 005088e3
    CMP EDX,ECX                         ; 005088e6
    JLE 0x005088dc                      ; 005088e8
        ;   XREF to: 005088dc (CONDITIONAL_JUMP)  ; LAB_005088dc
    LEA EAX,[EAX]                       ; 005088ea
    MOV dword ptr [ESP + 0x8],ESI       ; 005088f0
        ;   Label: LAB_005088f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005088f4
    MOV ESI,dword ptr [EAX + 0x619338]  ; 005088f8 | DAT_0061933c | DAT_00619340 | DAT_00619338
    CMP EBX,0x8                         ; 005088fe
    JGE 0x00508270                      ; 00508901
        ;   XREF to: 00508270 (CONDITIONAL_JUMP)  ; LAB_00508270
    MOV EDX,dword ptr [ESP + 0x54]      ; 00508907
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050890b
    ADD EAX,EDX                         ; 00508912
    SHL EAX,0x2                         ; 00508914
    ADD EDX,EAX                         ; 00508917
    SHL EDX,0x2                         ; 00508919
    LEA EAX,[EBX*0x4 + 0x0]             ; 0050891c
    ADD EAX,EDX                         ; 00508923
    MOV dword ptr [ESP + 0xa4],EAX      ; 00508925
    MOV EDI,dword ptr [ESP + 0xa4]      ; 0050892c
        ;   Label: LAB_0050892c
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00508933
    MOV EDI,dword ptr [EDI + 0x61933c]  ; 0050893a | DAT_00619340 | DAT_00619344 | DAT_0061933c
    MOV ECX,dword ptr [EDX + 0x619338]  ; 00508940 | DAT_0061933c | DAT_00619340
    MOV EAX,dword ptr [ESP + 0x8]       ; 00508946
    SUB EDI,ECX                         ; 0050894a
    SHL EAX,0x2                         ; 0050894c
    TEST EDI,EDI                        ; 0050894f
    JLE 0x005089d0                      ; 00508951
        ;   XREF to: 005089d0 (CONDITIONAL_JUMP)  ; LAB_005089d0
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00508957
    LEA EBX,[ESI + ESI*0x1]             ; 0050895a
    ADD EDX,EAX                         ; 0050895d
    LEA EAX,[ESI*0x4 + 0x0]             ; 0050895f
    MOV dword ptr [ESP + 0x3c],EDX      ; 00508966
    MOV dword ptr [ESP + 0xa0],EAX      ; 0050896a
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00508971
        ;   Label: LAB_00508971
    MOV AX,word ptr [EAX + 0xf8]        ; 00508975
    MOV word ptr [EBX + 0x1d1fa58],AX   ; 0050897c
    CMP AX,0x7                          ; 00508983
    JZ 0x005089b6                       ; 00508987
        ;   XREF to: 005089b6 (CONDITIONAL_JUMP)  ; LAB_005089b6
    CMP dword ptr [ESP + 0x20],0x0      ; 00508989
    JZ 0x00508af3                       ; 0050898e
        ;   XREF to: 00508af3 (CONDITIONAL_JUMP)  ; LAB_00508af3
    PUSH 0x1d207d8                      ; 00508994
    PUSH ESI                            ; 00508999
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050899a
    PUSH ECX                            ; 0050899e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050899f
    PUSH EAX                            ; 005089a3
    MOV EAX,dword ptr [EBX + 0x1d1fa56] ; 005089a4
    SAR EAX,0x10                        ; 005089aa
    PUSH EAX                            ; 005089ad
    CALL FUN_00508100                   ; 005089ae
        ;   XREF to: 00508100 (UNCONDITIONAL_CALL)  ; undefined FUN_00508100()
    ADD ESP,0x14                        ; 005089b3
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005089b6
        ;   Label: LAB_005089b6
    ADD EBX,0x2                         ; 005089bd
    INC ESI                             ; 005089c0
    ADD EAX,0x4                         ; 005089c1
    DEC EDI                             ; 005089c4
    MOV dword ptr [ESP + 0xa0],EAX      ; 005089c5
    TEST EDI,EDI                        ; 005089cc
    JG 0x00508971                       ; 005089ce
        ;   XREF to: 00508971 (CONDITIONAL_JUMP)  ; LAB_00508971
    MOV EBX,dword ptr [ESP + 0xa4]      ; 005089d0
        ;   Label: LAB_005089d0
    MOV EDI,dword ptr [ESP + 0x8]       ; 005089d7
    ADD EBX,0x4                         ; 005089db
    INC EDI                             ; 005089de
    MOV dword ptr [ESP + 0xa4],EBX      ; 005089df
    MOV dword ptr [ESP + 0x8],EDI       ; 005089e6
    CMP EDI,0x8                         ; 005089ea
    JGE 0x00508270                      ; 005089ed
        ;   XREF to: 00508270 (CONDITIONAL_JUMP)  ; LAB_00508270
    JMP 0x0050892c                      ; 005089f3
        ;   XREF to: 0050892c (UNCONDITIONAL_JUMP)  ; LAB_0050892c
    MOV dword ptr [ESP + 0x24],EAX      ; 005089f8
        ;   Label: LAB_005089f8
    JMP 0x0050872f                      ; 005089fc
        ;   XREF to: 0050872f (UNCONDITIONAL_JUMP)  ; LAB_0050872f
    FILD word ptr [EBX + 0x1d1fa58]     ; 00508a01
        ;   Label: LAB_00508a01
    FMUL double ptr [0x005e0263]        ; 00508a07 | DAT_005e0263
    FPTAN                               ; 00508a0d
    FSTP ST0                            ; 00508a0f
    MOV EAX,dword ptr [ESP + 0x94]      ; 00508a11
    FSTP float ptr [EAX + 0x1d1fed8]    ; 00508a18
    JMP 0x005087f8                      ; 00508a1e
        ;   XREF to: 005087f8 (UNCONDITIONAL_JUMP)  ; LAB_005087f8
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00508a23
        ;   Label: LAB_00508a23
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00508a27
    MOV EDI,dword ptr [EAX + 0x6193c0]  ; 00508a2b | DAT_006193c0
    MOV ESI,dword ptr [ESI + 0x6193c4]  ; 00508a31 | DAT_006193c4
    MOV EDX,dword ptr [ESP + 0xc]       ; 00508a37
    SUB ESI,EDI                         ; 00508a3b
    IMUL EDX,ESI                        ; 00508a3d
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00508a40
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00508a44
    MOV EBX,dword ptr [ECX + 0x6193c4]  ; 00508a48 | DAT_006193c4
    MOV ESI,dword ptr [ESI + 0x6193c8]  ; 00508a4e | DAT_006193c8
    MOV ECX,dword ptr [ESP + 0xc]       ; 00508a54
    SUB ESI,EBX                         ; 00508a58
    IMUL ECX,ESI                        ; 00508a5a
    LEA EAX,[EDI + EDI*0x2]             ; 00508a5d
    ADD EDX,EAX                         ; 00508a60
    ADD EAX,ECX                         ; 00508a62
    MOV dword ptr [ESP + 0xd8],EAX      ; 00508a64
    TEST ESI,ESI                        ; 00508a6b
    JLE 0x00508837                      ; 00508a6d
        ;   XREF to: 00508837 (CONDITIONAL_JUMP)  ; LAB_00508837
    LEA EDI,[EDX + EDX*0x1]             ; 00508a73
    LEA ECX,[EDX*0x4 + 0x0]             ; 00508a76
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00508a7d
    SHL EAX,0x2                         ; 00508a84
    ADD EDX,EDX                         ; 00508a87
    FLD float ptr [ECX + 0x1d1fed8]     ; 00508a89
        ;   Label: LAB_00508a89
    FLD float ptr [ECX + 0x1d207d8]     ; 00508a8f
    ADD EAX,0x4                         ; 00508a95
    ADD EDX,0x2                         ; 00508a98
    DEC ESI                             ; 00508a9b
    MOV BX,word ptr [EDI + 0x1d1fa58]   ; 00508a9c
    FSTP float ptr [EAX + 0x1d207d4]    ; 00508aa3
    FSTP float ptr [EAX + 0x1d1fed4]    ; 00508aa9
    MOV word ptr [EDX + 0x1d1fa56],BX   ; 00508aaf
    MOV EBX,dword ptr [ESP + 0xd8]      ; 00508ab6
    FLD float ptr [ECX + 0x1d210d8]     ; 00508abd
    INC EBX                             ; 00508ac3
    FSTP float ptr [EAX + 0x1d210d4]    ; 00508ac4
    MOV dword ptr [ESP + 0xd8],EBX      ; 00508aca
    TEST ESI,ESI                        ; 00508ad1
    JLE 0x00508837                      ; 00508ad3
        ;   XREF to: 00508837 (CONDITIONAL_JUMP)  ; LAB_00508837
    JMP 0x00508a89                      ; 00508ad9
        ;   XREF to: 00508a89 (UNCONDITIONAL_JUMP)  ; LAB_00508a89
    DEC EDX                             ; 00508adb
        ;   Label: LAB_00508adb
    TEST EDX,EDX                        ; 00508adc
    JGE 0x00508ae6                      ; 00508ade
        ;   XREF to: 00508ae6 (CONDITIONAL_JUMP)  ; LAB_00508ae6
    SUB EDI,0x48                        ; 00508ae0
    DEC ECX                             ; 00508ae3
    MOV EDX,EBX                         ; 00508ae4
    TEST ECX,ECX                        ; 00508ae6
        ;   Label: LAB_00508ae6
    JGE 0x00508886                      ; 00508ae8
        ;   XREF to: 00508886 (CONDITIONAL_JUMP)  ; LAB_00508886
    JMP 0x005088ab                      ; 00508aee
        ;   XREF to: 005088ab (UNCONDITIONAL_JUMP)  ; LAB_005088ab
    FILD word ptr [EBX + 0x1d1fa58]     ; 00508af3
        ;   Label: LAB_00508af3
    FMUL double ptr [0x005e0263]        ; 00508af9 | DAT_005e0263
    FPTAN                               ; 00508aff
    FSTP ST0                            ; 00508b01
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00508b03
    FSTP float ptr [EAX + 0x1d1fed8]    ; 00508b0a
    JMP 0x005089b6                      ; 00508b10
        ;   XREF to: 005089b6 (UNCONDITIONAL_JUMP)  ; LAB_005089b6
    MOV dword ptr [ESP + 0x68],EAX      ; 00508b15
        ;   Label: LAB_00508b15
    MOV dword ptr [ESP + 0x44],EAX      ; 00508b19
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00508b1d
    MOV dword ptr [ESP + 0x1c],EDI      ; 00508b20
    MOV dword ptr [ESP + 0x90],EAX      ; 00508b24
    MOV ECX,0xffffffff                  ; 00508b2b
        ;   Label: LAB_00508b2b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00508b30
    MOV ESI,0xc                         ; 00508b34
    INC EAX                             ; 00508b39
    MOV dword ptr [ESP + 0x40],ECX      ; 00508b3a
    MOV dword ptr [ESP + 0x48],EAX      ; 00508b3e
    MOV EBX,dword ptr [ESP + 0x44]      ; 00508b42
        ;   Label: LAB_00508b42
    LEA EAX,[ESI*0x4 + 0x0]             ; 00508b46
    ADD EAX,EBX                         ; 00508b4d
    MOV EBX,dword ptr [EAX + 0x619398]  ; 00508b4f | DAT_006193c8 | DAT_0061936c
    MOV EDI,dword ptr [EAX + 0x619394]  ; 00508b55 | DAT_006193c4 | DAT_00619368
    MOV EDX,dword ptr [ESP + 0x48]      ; 00508b5b
    SUB EBX,EDI                         ; 00508b5f
    IMUL EDX,EBX                        ; 00508b61
    LEA EAX,[EDI + EDI*0x2]             ; 00508b64
    ADD EAX,EDX                         ; 00508b67
    LEA ECX,[EAX + -0x1]                ; 00508b69
    TEST EBX,EBX                        ; 00508b6c
    JLE 0x00508bbd                      ; 00508b6e
        ;   XREF to: 00508bbd (CONDITIONAL_JUMP)  ; LAB_00508bbd
    MOV EDI,0x12                        ; 00508b70
        ;   Label: LAB_00508b70
    MOV EDX,ECX                         ; 00508b75
    MOV EAX,ECX                         ; 00508b77
    SAR EDX,0x1f                        ; 00508b79
    IDIV EDI                            ; 00508b7c
    IMUL EAX,EAX,0x48                   ; 00508b7e
    MOV dword ptr [ESP + 0xe8],0x12     ; 00508b81
    MOV EDX,ECX                         ; 00508b8c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00508b8e
    SAR EDX,0x1f                        ; 00508b91
    ADD EDI,EAX                         ; 00508b94
    MOV EAX,ECX                         ; 00508b96
    IDIV dword ptr [ESP + 0xe8]         ; 00508b98
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 00508b9f
    JZ 0x00508bb7                       ; 00508baa
        ;   XREF to: 00508bb7 (CONDITIONAL_JUMP)  ; LAB_00508bb7
    MOV dword ptr [ESP + 0x40],ESI      ; 00508bac
    MOV ESI,0xfffffff6                  ; 00508bb0
    MOV EBX,ESI                         ; 00508bb5
    DEC EBX                             ; 00508bb7
        ;   Label: LAB_00508bb7
    DEC ECX                             ; 00508bb8
    TEST EBX,EBX                        ; 00508bb9
    JG 0x00508b70                       ; 00508bbb
        ;   XREF to: 00508b70 (CONDITIONAL_JUMP)  ; LAB_00508b70
    DEC ESI                             ; 00508bbd
        ;   Label: LAB_00508bbd
    TEST ESI,ESI                        ; 00508bbe
    JGE 0x00508b42                      ; 00508bc0
        ;   XREF to: 00508b42 (CONDITIONAL_JUMP)  ; LAB_00508b42
    MOV EAX,dword ptr [ESP + 0x40]      ; 00508bc2
    INC EAX                             ; 00508bc6
    MOV dword ptr [ESP + 0xd0],EAX      ; 00508bc7
    MOV EAX,dword ptr [ESP + 0x90]      ; 00508bce
    MOV ESI,dword ptr [ESP + 0xd0]      ; 00508bd5
    MOV dword ptr [ESP + 0x4c],EAX      ; 00508bdc
    SHL ESI,0x2                         ; 00508be0
    MOV EAX,dword ptr [ESP + 0x68]      ; 00508be3
    ADD EAX,ESI                         ; 00508be7
    MOV dword ptr [ESP + 0x88],EAX      ; 00508be9
    CMP dword ptr [ESP + 0xd0],0xc      ; 00508bf0
    JGE 0x00508cee                      ; 00508bf8
        ;   XREF to: 00508cee (CONDITIONAL_JUMP)  ; LAB_00508cee
    MOV dword ptr [ESP + 0x8c],ESI      ; 00508bfe
    MOV EAX,dword ptr [ESP + 0x88]      ; 00508c05
        ;   Label: LAB_00508c05
    MOV ESI,dword ptr [ESP + 0x88]      ; 00508c0c
    MOV EDI,dword ptr [EAX + 0x619394]  ; 00508c13 | DAT_006193c8 | DAT_006193cc
    MOV ESI,dword ptr [ESI + 0x619398]  ; 00508c19 | DAT_006193cc | DAT_006193d0
    SUB ESI,EDI                         ; 00508c1f
    LEA EAX,[EDI + EDI*0x2]             ; 00508c21
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00508c24
    IMUL EDI,ESI                        ; 00508c28
    ADD EDI,EAX                         ; 00508c2b
    TEST ESI,ESI                        ; 00508c2d
    JLE 0x00508cb4                      ; 00508c2f
        ;   XREF to: 00508cb4 (CONDITIONAL_JUMP)  ; LAB_00508cb4
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00508c35
    ADD EAX,dword ptr [ESP + 0x8c]      ; 00508c39
    LEA EBX,[EDI + EDI*0x1]             ; 00508c40
    MOV dword ptr [ESP + 0x50],EAX      ; 00508c43
    LEA EAX,[EDI*0x4 + 0x0]             ; 00508c47
    MOV dword ptr [ESP + 0x84],EAX      ; 00508c4e
    MOV EAX,dword ptr [ESP + 0x50]      ; 00508c55
        ;   Label: LAB_00508c55
    MOV AX,word ptr [EAX + 0x154]       ; 00508c59
    MOV word ptr [EBX + 0x1d1fa58],AX   ; 00508c60
    CMP AX,0x7                          ; 00508c67
    JZ 0x00508c9a                       ; 00508c6b
        ;   XREF to: 00508c9a (CONDITIONAL_JUMP)  ; LAB_00508c9a
    CMP dword ptr [ESP + 0x20],0x0      ; 00508c6d
    JZ 0x00508dc0                       ; 00508c72
        ;   XREF to: 00508dc0 (CONDITIONAL_JUMP)  ; LAB_00508dc0
    PUSH 0x1d207d8                      ; 00508c78
    PUSH EDI                            ; 00508c7d
    MOV EDX,dword ptr [ESP + 0xc]       ; 00508c7e
    PUSH EDX                            ; 00508c82
    MOV ECX,dword ptr [ESP + 0xc]       ; 00508c83
    MOV EAX,dword ptr [EBX + 0x1d1fa56] ; 00508c87
    PUSH ECX                            ; 00508c8d
    SAR EAX,0x10                        ; 00508c8e
    PUSH EAX                            ; 00508c91
    CALL FUN_00508100                   ; 00508c92
        ;   XREF to: 00508100 (UNCONDITIONAL_CALL)  ; undefined FUN_00508100()
    ADD ESP,0x14                        ; 00508c97
    MOV EDX,dword ptr [ESP + 0x84]      ; 00508c9a
        ;   Label: LAB_00508c9a
    ADD EBX,0x2                         ; 00508ca1
    INC EDI                             ; 00508ca4
    ADD EDX,0x4                         ; 00508ca5
    DEC ESI                             ; 00508ca8
    MOV dword ptr [ESP + 0x84],EDX      ; 00508ca9
    TEST ESI,ESI                        ; 00508cb0
    JG 0x00508c55                       ; 00508cb2
        ;   XREF to: 00508c55 (CONDITIONAL_JUMP)  ; LAB_00508c55
    MOV EDX,dword ptr [ESP + 0x88]      ; 00508cb4
        ;   Label: LAB_00508cb4
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00508cbb
    MOV EBX,dword ptr [ESP + 0xd0]      ; 00508cc2
    ADD EDX,0x4                         ; 00508cc9
    ADD ECX,0x4                         ; 00508ccc
    INC EBX                             ; 00508ccf
    MOV dword ptr [ESP + 0x88],EDX      ; 00508cd0
    MOV dword ptr [ESP + 0x8c],ECX      ; 00508cd7
    MOV dword ptr [ESP + 0xd0],EBX      ; 00508cde
    CMP ECX,0x30                        ; 00508ce5
    JL 0x00508c05                       ; 00508ce8
        ;   XREF to: 00508c05 (CONDITIONAL_JUMP)  ; LAB_00508c05
    MOV EAX,dword ptr [ESP + 0x68]      ; 00508cee
        ;   Label: LAB_00508cee
    MOV ESI,dword ptr [ESP + 0x68]      ; 00508cf2
    MOV EDI,dword ptr [EAX + 0x6193c0]  ; 00508cf6 | DAT_006193c0
    MOV ESI,dword ptr [ESI + 0x6193c4]  ; 00508cfc | DAT_006193c4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00508d02
    SUB ESI,EDI                         ; 00508d06
    IMUL EDX,ESI                        ; 00508d08
    MOV ECX,dword ptr [ESP + 0x68]      ; 00508d0b
    MOV ESI,dword ptr [ESP + 0x68]      ; 00508d0f
    MOV EBX,dword ptr [ECX + 0x6193c4]  ; 00508d13 | DAT_006193c4
    MOV ESI,dword ptr [ESI + 0x6193c8]  ; 00508d19 | DAT_006193c8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00508d1f
    SUB ESI,EBX                         ; 00508d23
    IMUL ECX,ESI                        ; 00508d25
    LEA EAX,[EDI + EDI*0x2]             ; 00508d28
    ADD EDX,EAX                         ; 00508d2b
    ADD EAX,ECX                         ; 00508d2d
    MOV dword ptr [ESP + 0xdc],EAX      ; 00508d2f
    TEST ESI,ESI                        ; 00508d36
    JLE 0x00508d98                      ; 00508d38
        ;   XREF to: 00508d98 (CONDITIONAL_JUMP)  ; LAB_00508d98
    MOV ECX,dword ptr [ESP + 0xdc]      ; 00508d3a
    LEA EDI,[EDX + EDX*0x1]             ; 00508d41
    SHL EAX,0x2                         ; 00508d44
    SHL EDX,0x2                         ; 00508d47
    ADD ECX,ECX                         ; 00508d4a
    FLD float ptr [EDX + 0x1d1fed8]     ; 00508d4c
        ;   Label: LAB_00508d4c
    FLD float ptr [EDX + 0x1d207d8]     ; 00508d52
    ADD EAX,0x4                         ; 00508d58
    ADD ECX,0x2                         ; 00508d5b
    DEC ESI                             ; 00508d5e
    MOV BX,word ptr [EDI + 0x1d1fa58]   ; 00508d5f
    FSTP float ptr [EAX + 0x1d207d4]    ; 00508d66
    FSTP float ptr [EAX + 0x1d1fed4]    ; 00508d6c
    MOV word ptr [ECX + 0x1d1fa56],BX   ; 00508d72
    MOV EBX,dword ptr [ESP + 0xdc]      ; 00508d79
    FLD float ptr [EDX + 0x1d210d8]     ; 00508d80
    INC EBX                             ; 00508d86
    FSTP float ptr [EAX + 0x1d210d4]    ; 00508d87
    MOV dword ptr [ESP + 0xdc],EBX      ; 00508d8d
    TEST ESI,ESI                        ; 00508d94
    JG 0x00508d4c                       ; 00508d96
        ;   XREF to: 00508d4c (CONDITIONAL_JUMP)  ; LAB_00508d4c
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00508d98
        ;   Label: LAB_00508d98
    MOV ESI,dword ptr [ESP + 0x90]      ; 00508d9c
    INC EDI                             ; 00508da3
    ADD ESI,0x34                        ; 00508da4
    MOV dword ptr [ESP + 0x1c],EDI      ; 00508da7
    MOV dword ptr [ESP + 0x90],ESI      ; 00508dab
    CMP EDI,0x3                         ; 00508db2
    JGE 0x00508270                      ; 00508db5
        ;   XREF to: 00508270 (CONDITIONAL_JUMP)  ; LAB_00508270
    JMP 0x00508b2b                      ; 00508dbb
        ;   XREF to: 00508b2b (UNCONDITIONAL_JUMP)  ; LAB_00508b2b
    FILD word ptr [EBX + 0x1d1fa58]     ; 00508dc0
        ;   Label: LAB_00508dc0
    FMUL double ptr [0x005e0263]        ; 00508dc6 | DAT_005e0263
    FPTAN                               ; 00508dcc
    FSTP ST0                            ; 00508dce
    MOV EAX,dword ptr [ESP + 0x84]      ; 00508dd0
    FSTP float ptr [EAX + 0x1d1fed8]    ; 00508dd7
    JMP 0x00508c9a                      ; 00508ddd
        ;   XREF to: 00508c9a (UNCONDITIONAL_JUMP)  ; LAB_00508c9a
    DEC EDX                             ; 00508de2
        ;   Label: LAB_00508de2
    TEST EDX,EDX                        ; 00508de3
    JGE 0x00508ded                      ; 00508de5
        ;   XREF to: 00508ded (CONDITIONAL_JUMP)  ; LAB_00508ded
    SUB EBX,0x48                        ; 00508de7
    DEC ECX                             ; 00508dea
    MOV EDX,ESI                         ; 00508deb
    TEST ECX,ECX                        ; 00508ded
        ;   Label: LAB_00508ded
    JGE 0x0050845c                      ; 00508def
        ;   XREF to: 0050845c (CONDITIONAL_JUMP)  ; LAB_0050845c
    JMP 0x0050847b                      ; 00508df5
        ;   XREF to: 0050847b (UNCONDITIONAL_JUMP)  ; LAB_0050847b
    FILD word ptr [EBX + 0x1d1fa58]     ; 00508dfa
        ;   Label: LAB_00508dfa
    FMUL double ptr [0x005e0263]        ; 00508e00 | DAT_005e0263
    FPTAN                               ; 00508e06
    FSTP ST0                            ; 00508e08
    MOV EAX,dword ptr [ESP + 0x74]      ; 00508e0a
    FSTP float ptr [EAX + 0x1d1fed8]    ; 00508e0e
    JMP 0x00508567                      ; 00508e14
        ;   XREF to: 00508567 (UNCONDITIONAL_JUMP)  ; LAB_00508567
    MOV ECX,dword ptr [EAX]             ; 00508e19
        ;   Label: LAB_00508e19
    MOV dword ptr [EDX],ECX             ; 00508e1b
    MOV ECX,dword ptr [EAX + 0x900]     ; 00508e1d
    MOV dword ptr [EDX + 0x900],ECX     ; 00508e23
    JMP 0x005083a2                      ; 00508e29
        ;   XREF to: 005083a2 (UNCONDITIONAL_JUMP)  ; LAB_005083a2
    CMP dword ptr [ESP + 0x14],0x0      ; 00508e2e
        ;   Label: LAB_00508e2e
    JZ 0x00508e84                       ; 00508e33
        ;   XREF to: 00508e84 (CONDITIONAL_JUMP)  ; LAB_00508e84
    MOV ECX,dword ptr [ESP + 0xd4]      ; 00508e35
    SHL ECX,0x2                         ; 00508e3c
    CMP dword ptr [ESP + 0x20],0x0      ; 00508e3f
    JZ 0x00508e5d                       ; 00508e44
        ;   XREF to: 00508e5d (CONDITIONAL_JUMP)  ; LAB_00508e5d
    FLD float ptr [EAX]                 ; 00508e46
    FMUL float ptr [ECX + 0x1d207d8]    ; 00508e48
    FSTP float ptr [EDX]                ; 00508e4e
    FLD float ptr [EAX]                 ; 00508e50
    FMUL float ptr [ECX + 0x1d210d8]    ; 00508e52
    JMP 0x0050839c                      ; 00508e58
        ;   XREF to: 0050839c (UNCONDITIONAL_JUMP)  ; LAB_0050839c
    FLD1                                ; 00508e5d
        ;   Label: LAB_00508e5d
    FADD float ptr [ECX + 0x1d1fed8]    ; 00508e5f
    FDIVR float ptr [ECX + 0x1d1fed8]   ; 00508e65
    FMUL float ptr [EAX]                ; 00508e6b
    FLD1                                ; 00508e6d
    FXCH                                ; 00508e6f
    FSTP float ptr [EDX]                ; 00508e71
    FADD float ptr [ECX + 0x1d1fed8]    ; 00508e73
    FLD1                                ; 00508e79
    FDIVRP                              ; 00508e7b
    FMUL float ptr [EAX]                ; 00508e7d
    JMP 0x0050839c                      ; 00508e7f
        ;   XREF to: 0050839c (UNCONDITIONAL_JUMP)  ; LAB_0050839c
    PUSH 0x1d23558                      ; 00508e84 | DAT_01d23558
        ;   Label: LAB_00508e84
    MOV EAX,0x5e022b                    ; 00508e89 | = "..\\sound\\mp3.cpp"
    MOV EDX,0xa3a                       ; 00508e8e
    PUSH 0x5e023c                       ; 00508e93 | = "Error in streo processing.  File: %s"
    MOV [0x01d046a0],EAX                ; 00508e98 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00508e9d | DAT_01d046a4
    CALL FUN_004e4500                   ; 00508ea3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00508ea8
    JMP 0x005083a2                      ; 00508eab
        ;   XREF to: 005083a2 (UNCONDITIONAL_JUMP)  ; LAB_005083a2
    MOV ESI,dword ptr [EBP + 0x14]      ; 00508eb0
        ;   Label: LAB_00508eb0
    MOV EAX,dword ptr [EBP + 0x18]      ; 00508eb3
    XOR EBX,EBX                         ; 00508eb6
    ADD ESI,0x48                        ; 00508eb8
    MOV dword ptr [ESP + 0xb0],EAX      ; 00508ebb
    IMUL EAX,EBX,0x48                   ; 00508ec2
        ;   Label: LAB_00508ec2
    MOV EDX,dword ptr [EBP + 0x14]      ; 00508ec5
    MOV ECX,ESI                         ; 00508ec8
    ADD EAX,EDX                         ; 00508eca
    MOV EDX,dword ptr [ESP + 0xb0]      ; 00508ecc
    ADD EDX,0x4                         ; 00508ed3
        ;   Label: LAB_00508ed3
    FLD float ptr [EAX]                 ; 00508ed6
    ADD EAX,0x4                         ; 00508ed8
    FSTP float ptr [EDX + -0x4]         ; 00508edb
    CMP EAX,ECX                         ; 00508ede
    JNZ 0x00508ed3                      ; 00508ee0
        ;   XREF to: 00508ed3 (CONDITIONAL_JUMP)  ; LAB_00508ed3
    MOV ECX,dword ptr [ESP + 0xb0]      ; 00508ee2
    INC EBX                             ; 00508ee9
    ADD ECX,0x48                        ; 00508eea
    ADD ESI,0x48                        ; 00508eed
    MOV dword ptr [ESP + 0xb0],ECX      ; 00508ef0
    CMP EBX,0x20                        ; 00508ef7
    JGE 0x00508405                      ; 00508efa
        ;   XREF to: 00508405 (CONDITIONAL_JUMP)  ; LAB_00508405
    JMP 0x00508ec2                      ; 00508f00
        ;   XREF to: 00508ec2 (UNCONDITIONAL_JUMP)  ; LAB_00508ec2


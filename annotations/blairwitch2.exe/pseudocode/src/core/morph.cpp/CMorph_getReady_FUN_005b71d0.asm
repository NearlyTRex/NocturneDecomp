; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_getReady_FUN_005b71d0(CMorph *this_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x54]:4  local_54
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
; XREF[7]:
;   core_biggs.cpp_CBiggs_setup_FUN_00414dd0 at 00414e28
;   core_mimic.cpp_CMimic_setup_FUN_004f04f0 at 004f085a
;   core_moloch.cpp_CMoloch_process_FUN_00501530 at 00501bf9
;   core_moloch.cpp_CMoloch_setup_FUN_00501480 at 00501500
;   core_passngr.cpp_CPassenger_setup_FUN_005115e0 at 00511671
;   core_succubus.cpp_CSuccubus_setup_FUN_0056f3a0 at 0056f664
;   core_vampboss.cpp_CVampireBoss_setup_FUN_00581660 at 00581805
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005f17cb
;   TerminatedCString s_CMorph_getReady_can_t_do_005f17dd
;   WatcomTypeInfo g_CBoundingBox3DTypeInfo
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041a590
;   core_main.c_FUN_004e4500
;   core_morph.cpp_CMorphModel_findNearestPoint_FUN_005b6db0
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b71d0
        ;   Label: core_morph.cpp_CMorph_getReady_FUN_005b71d0
    PUSH ESI                            ; 005b71d1
    PUSH EDI                            ; 005b71d2
    PUSH EBP                            ; 005b71d3
    SUB ESP,0x108                       ; 005b71d4
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005b71da
    CMP dword ptr [EAX + 0x54],0x3      ; 005b71e1
    JL 0x005b729f                       ; 005b71e5
        ;   XREF to: 005b729f (CONDITIONAL_JUMP)  ; LAB_005b729f
    CMP dword ptr [EAX + 0x65c],0x3     ; 005b71eb
    JL 0x005b729f                       ; 005b71f2
        ;   XREF to: 005b729f (CONDITIONAL_JUMP)  ; LAB_005b729f
    PUSH 0x5fb390                       ; 005b71f8 | g_CBoundingBox3DTypeInfo
        ;   Label: LAB_005b71f8
    PUSH 0x2                            ; 005b71fd
    LEA EAX,[ESP + 0x8]                 ; 005b71ff
    PUSH EAX                            ; 005b7203
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 005b7204
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 005b7209
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005b720c
    XOR EDI,EDI                         ; 005b7213
    MOV dword ptr [ESP + 0xd8],EAX      ; 005b7215
    MOV EAX,ESP                         ; 005b721c
    MOV dword ptr [ESP + 0xe0],EDI      ; 005b721e
    MOV dword ptr [ESP + 0xf0],EAX      ; 005b7225
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005b722c
        ;   Label: LAB_005b722c
    MOV EAX,dword ptr [EAX + 0x58]      ; 005b7233
    ADD EAX,0x4                         ; 005b7236
    MOV EDX,dword ptr [ESP + 0xf0]      ; 005b7239
    MOV EBX,EAX                         ; 005b7240
    CMP EAX,EDX                         ; 005b7242
    JZ 0x005b7256                       ; 005b7244
        ;   XREF to: 005b7256 (CONDITIONAL_JUMP)  ; LAB_005b7256
    MOV ECX,dword ptr [EAX]             ; 005b7246
    MOV dword ptr [EDX],ECX             ; 005b7248
    MOV ECX,dword ptr [EAX + 0x4]       ; 005b724a
    MOV dword ptr [EDX + 0x4],ECX       ; 005b724d
    MOV ECX,dword ptr [EAX + 0x8]       ; 005b7250
    MOV dword ptr [EDX + 0x8],ECX       ; 005b7253
    LEA EAX,[EDX + 0xc]                 ; 005b7256
        ;   Label: LAB_005b7256
    CMP EAX,EBX                         ; 005b7259
    JNZ 0x005b7680                      ; 005b725b
        ;   XREF to: 005b7680 (CONDITIONAL_JUMP)  ; LAB_005b7680
    MOV ESI,dword ptr [ESP + 0xf0]      ; 005b7261
        ;   Label: LAB_005b7261
    MOV EDI,dword ptr [ESP + 0xe0]      ; 005b7268
    MOV EBP,0x10                        ; 005b726f
    MOV EBX,0x1                         ; 005b7274
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005b7279
        ;   Label: LAB_005b7279
    ADD EAX,EDI                         ; 005b7280
    CMP EBX,dword ptr [EAX + 0x54]      ; 005b7282
    JGE 0x005b72c7                      ; 005b7285
        ;   XREF to: 005b72c7 (CONDITIONAL_JUMP)  ; LAB_005b72c7
    MOV EAX,dword ptr [EAX + 0x58]      ; 005b7287
    ADD EAX,EBP                         ; 005b728a
    ADD EAX,0x4                         ; 005b728c
    PUSH EAX                            ; 005b728f
    PUSH ESI                            ; 005b7290
    INC EBX                             ; 005b7291
    ADD EBP,0x10                        ; 005b7292
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041a590 ; 005b7295
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005b729a
    JMP 0x005b7279                      ; 005b729d
        ;   XREF to: 005b7279 (UNCONDITIONAL_JUMP)  ; LAB_005b7279
    MOV EBX,0x5f17cb                    ; 005b729f | = "..\\core\\morph.cpp"
        ;   Label: LAB_005b729f
    MOV ESI,0x31f                       ; 005b72a4
    PUSH 0x5f17dd                       ; 005b72a9 | = "CMorph::getReady - can't do this unle..."
    MOV dword ptr [0x01d046a0],EBX      ; 005b72ae | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 005b72b4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b72ba
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b72bf
    JMP 0x005b71f8                      ; 005b72c2
        ;   XREF to: 005b71f8 (UNCONDITIONAL_JUMP)  ; LAB_005b71f8
    MOV EBX,dword ptr [ESP + 0xe0]      ; 005b72c7
        ;   Label: LAB_005b72c7
    MOV ESI,dword ptr [ESP + 0xf0]      ; 005b72ce
    MOV ECX,dword ptr [ESP + 0xd8]      ; 005b72d5
    ADD EBX,0x608                       ; 005b72dc
    ADD ESI,0x18                        ; 005b72e2
    ADD ECX,0x608                       ; 005b72e5
    MOV dword ptr [ESP + 0xe0],EBX      ; 005b72eb
    MOV dword ptr [ESP + 0xf0],ESI      ; 005b72f2
    MOV dword ptr [ESP + 0xd8],ECX      ; 005b72f9
    CMP EBX,0xc10                       ; 005b7300
    JNZ 0x005b722c                      ; 005b7306
        ;   XREF to: 005b722c (CONDITIONAL_JUMP)  ; LAB_005b722c
    MOV EAX,ESP                         ; 005b730c
    ADD EAX,0xc                         ; 005b730e
    MOV dword ptr [ESP + 0xe4],EAX      ; 005b7311
    MOV EAX,ESP                         ; 005b7318
    ADD EAX,0x24                        ; 005b731a
    MOV dword ptr [ESP + 0xe8],EAX      ; 005b731d
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005b7324
    ADD EAX,0x608                       ; 005b732b
    XOR EBP,EBP                         ; 005b7330
    MOV dword ptr [ESP + 0xdc],EAX      ; 005b7332
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005b7339
    MOV dword ptr [ESP + 0xec],EBP      ; 005b7340
    MOV dword ptr [ESP + 0x104],EAX     ; 005b7347
    MOV EAX,0x1                         ; 005b734e
        ;   Label: LAB_005b734e
    SUB EAX,dword ptr [ESP + 0xec]      ; 005b7353
    IMUL EAX,EAX,0x18                   ; 005b735a
    MOV EDX,dword ptr [ESP + 0xdc]      ; 005b735d
    MOV dword ptr [ESP + 0xf4],EDX      ; 005b7364
    MOV EDX,ESP                         ; 005b736b
    ADD EDX,EAX                         ; 005b736d
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005b736f
    MOV ECX,dword ptr [ESP + 0xec]      ; 005b7376
    FLD float ptr [EAX + 0x4]           ; 005b737d
    FLD float ptr [EAX + 0x8]           ; 005b7380
    FLD float ptr [EAX]                 ; 005b7383
    IMUL EAX,ECX,0x18                   ; 005b7385
    LEA EDI,[ESP + 0x48]                ; 005b7388
    LEA ESI,[ESP + 0x60]                ; 005b738c
    MOV EBX,ESP                         ; 005b7390
    FSUB float ptr [EDX]                ; 005b7392
    FXCH ST2                            ; 005b7394
    FSUB float ptr [EDX + 0x4]          ; 005b7396
    FXCH                                ; 005b7399
    FSUB float ptr [EDX + 0x8]          ; 005b739b
    FXCH ST2                            ; 005b739e
    FSTP float ptr [ESP + 0x60]         ; 005b73a0
    FSTP float ptr [ESP + 0x64]         ; 005b73a4
    FSTP float ptr [ESP + 0x68]         ; 005b73a8
    MOVSD ES:EDI,ESI                    ; 005b73ac
    MOVSD ES:EDI,ESI                    ; 005b73ad
    MOVSD ES:EDI,ESI                    ; 005b73ae
    ADD EBX,EAX                         ; 005b73af
    MOV EAX,dword ptr [ESP + 0xe4]      ; 005b73b1
    LEA EDI,[ESP + 0x3c]                ; 005b73b8
    LEA ESI,[ESP + 0x30]                ; 005b73bc
    FLD float ptr [EAX]                 ; 005b73c0
    FLD float ptr [EAX + 0x4]           ; 005b73c2
    FLD float ptr [EAX + 0x8]           ; 005b73c5
    FXCH ST2                            ; 005b73c8
    FSUB float ptr [EBX]                ; 005b73ca
    FXCH                                ; 005b73cc
    FSUB float ptr [EBX + 0x4]          ; 005b73ce
    FXCH ST2                            ; 005b73d1
    FSUB float ptr [EBX + 0x8]          ; 005b73d3
    FXCH                                ; 005b73d6
    FSTP float ptr [ESP + 0x30]         ; 005b73d8
    FXCH                                ; 005b73dc
    FSTP float ptr [ESP + 0x34]         ; 005b73de
    FSTP float ptr [ESP + 0x38]         ; 005b73e2
    MOVSD ES:EDI,ESI                    ; 005b73e6
    MOVSD ES:EDI,ESI                    ; 005b73e7
    MOVSD ES:EDI,ESI                    ; 005b73e8
    FLD float ptr [ESP + 0x48]          ; 005b73e9
    FDIV float ptr [ESP + 0x3c]         ; 005b73ed
    MOV EAX,dword ptr [ESP + 0x60]      ; 005b73f1
    MOV dword ptr [ESP + 0x90],EAX      ; 005b73f5
    MOV EAX,dword ptr [ESP + 0x64]      ; 005b73fc
    LEA EDI,[ESP + 0x84]                ; 005b7400
    MOV dword ptr [ESP + 0x94],EAX      ; 005b7407
    MOV EAX,dword ptr [ESP + 0x68]      ; 005b740e
    LEA ESI,[ESP + 0x90]                ; 005b7412
    MOV dword ptr [ESP + 0x98],EAX      ; 005b7419
    MOV EAX,dword ptr [ESP + 0x30]      ; 005b7420
    MOVSD ES:EDI,ESI                    ; 005b7424
    MOVSD ES:EDI,ESI                    ; 005b7425
    MOVSD ES:EDI,ESI                    ; 005b7426
    MOV dword ptr [ESP + 0xcc],EAX      ; 005b7427
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b742e
    LEA EDI,[ESP + 0xc0]                ; 005b7432
    MOV dword ptr [ESP + 0xd0],EAX      ; 005b7439
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b7440
    LEA ESI,[ESP + 0xcc]                ; 005b7444
    MOV dword ptr [ESP + 0xd4],EAX      ; 005b744b
    MOVSD ES:EDI,ESI                    ; 005b7452
    MOVSD ES:EDI,ESI                    ; 005b7453
    MOVSD ES:EDI,ESI                    ; 005b7454
    FLD float ptr [ESP + 0x88]          ; 005b7455
    FDIV float ptr [ESP + 0xc4]         ; 005b745c
    MOV EAX,dword ptr [ESP + 0x60]      ; 005b7463
    MOV dword ptr [ESP + 0x9c],EAX      ; 005b7467
    MOV EAX,dword ptr [ESP + 0x64]      ; 005b746e
    LEA EDI,[ESP + 0x6c]                ; 005b7472
    MOV dword ptr [ESP + 0xa0],EAX      ; 005b7476
    MOV EAX,dword ptr [ESP + 0x68]      ; 005b747d
    LEA ESI,[ESP + 0x9c]                ; 005b7481
    MOV dword ptr [ESP + 0xa4],EAX      ; 005b7488
    MOV EAX,dword ptr [ESP + 0x30]      ; 005b748f
    MOVSD ES:EDI,ESI                    ; 005b7493
    MOVSD ES:EDI,ESI                    ; 005b7494
    MOVSD ES:EDI,ESI                    ; 005b7495
    MOV dword ptr [ESP + 0x78],EAX      ; 005b7496
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b749a
    LEA EDI,[ESP + 0xa8]                ; 005b749e
    MOV dword ptr [ESP + 0x7c],EAX      ; 005b74a5
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b74a9
    LEA ESI,[ESP + 0x78]                ; 005b74ad
    MOV dword ptr [ESP + 0x80],EAX      ; 005b74b1
    MOVSD ES:EDI,ESI                    ; 005b74b8
    MOVSD ES:EDI,ESI                    ; 005b74b9
    MOVSD ES:EDI,ESI                    ; 005b74ba
    FLD float ptr [ESP + 0x74]          ; 005b74bb
    FDIV float ptr [ESP + 0xb0]         ; 005b74bf
    MOV EBP,dword ptr [ESP + 0x104]     ; 005b74c6
    FXCH ST2                            ; 005b74cd
    FSTP float ptr [ESP + 0x54]         ; 005b74cf
    XOR ESI,ESI                         ; 005b74d3
    MOV EDI,dword ptr [EBP + 0x54]      ; 005b74d5
    MOV dword ptr [ESP + 0x100],ESI     ; 005b74d8
    FSTP float ptr [ESP + 0x58]         ; 005b74df
    FSTP float ptr [ESP + 0x5c]         ; 005b74e3
    TEST EDI,EDI                        ; 005b74e7
    JLE 0x005b75fe                      ; 005b74e9
        ;   XREF to: 005b75fe (CONDITIONAL_JUMP)  ; LAB_005b75fe
    MOV dword ptr [ESP + 0xfc],EBX      ; 005b74ef
    MOV dword ptr [ESP + 0xf8],EDX      ; 005b74f6
    XOR EBX,EBX                         ; 005b74fd
    MOV ESI,dword ptr [EBP + 0x58]      ; 005b74ff
        ;   Label: LAB_005b74ff
    LEA EDI,[ESP + 0xb4]                ; 005b7502
    LEA ESI,[ESI + EBX*0x1 + 0x4]       ; 005b7509
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005b750d
    MOVSD ES:EDI,ESI                    ; 005b7514
    MOVSD ES:EDI,ESI                    ; 005b7515
    MOVSD ES:EDI,ESI                    ; 005b7516
    CMP dword ptr [EAX + 0xc28],0x0     ; 005b7517
    JZ 0x005b75c2                       ; 005b751e
        ;   XREF to: 005b75c2 (CONDITIONAL_JUMP)  ; LAB_005b75c2
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005b7524
    FLD float ptr [ESP + 0xb4]          ; 005b752b
    FSUB float ptr [EAX]                ; 005b7532
    FST float ptr [ESP + 0xb4]          ; 005b7534
    FMUL float ptr [ESP + 0x54]         ; 005b753b
    FLD float ptr [ESP + 0xb8]          ; 005b753f
    FSUB float ptr [EAX + 0x4]          ; 005b7546
    FLD float ptr [ESP + 0xbc]          ; 005b7549
    FXCH                                ; 005b7550
    FST float ptr [ESP + 0xb8]          ; 005b7552
    FXCH                                ; 005b7559
    FSUB float ptr [EAX + 0x8]          ; 005b755b
    FXCH                                ; 005b755e
    FMUL float ptr [ESP + 0x58]         ; 005b7560
    FXCH                                ; 005b7564
    FMUL float ptr [ESP + 0x5c]         ; 005b7566
    FXCH ST2                            ; 005b756a
    FSTP float ptr [ESP + 0xb4]         ; 005b756c
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005b7573
    FLD float ptr [ESP + 0xb4]          ; 005b757a
    FXCH                                ; 005b7581
    FSTP float ptr [ESP + 0xb8]         ; 005b7583
    FXCH                                ; 005b758a
    FSTP float ptr [ESP + 0xbc]         ; 005b758c
    FADD float ptr [EAX]                ; 005b7593
    FLD float ptr [ESP + 0xb8]          ; 005b7595
    FXCH                                ; 005b759c
    FSTP float ptr [ESP + 0xb4]         ; 005b759e
    FADD float ptr [EAX + 0x4]          ; 005b75a5
    FLD float ptr [ESP + 0xbc]          ; 005b75a8
    FXCH                                ; 005b75af
    FSTP float ptr [ESP + 0xb8]         ; 005b75b1
    FADD float ptr [EAX + 0x8]          ; 005b75b8
    FSTP float ptr [ESP + 0xbc]         ; 005b75bb
    LEA EAX,[ESP + 0xb4]                ; 005b75c2
        ;   Label: LAB_005b75c2
    PUSH EAX                            ; 005b75c9
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005b75ca
    PUSH EAX                            ; 005b75d1
    ADD EBX,0x10                        ; 005b75d2
    CALL core_morph.cpp_CMorphModel_findNearestPoint_FUN_005b6db0 ; 005b75d5
        ;   XREF to: 005b6db0 (UNCONDITIONAL_CALL)  ; int core_morph.cpp_CMorphModel_findNearestPoint_FUN_005b6db0(CMorphModel * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 005b75da
    MOV ESI,dword ptr [EBP + 0x58]      ; 005b75dd
    MOV EDX,dword ptr [ESP + 0x100]     ; 005b75e0
    MOV dword ptr [ESI + EBX*0x1 + -0x10],EAX ; 005b75e7
    INC EDX                             ; 005b75eb
    MOV ECX,dword ptr [EBP + 0x54]      ; 005b75ec
    MOV dword ptr [ESP + 0x100],EDX     ; 005b75ef
    CMP EDX,ECX                         ; 005b75f6
    JL 0x005b74ff                       ; 005b75f8
        ;   XREF to: 005b74ff (CONDITIONAL_JUMP)  ; LAB_005b74ff
    MOV ESI,dword ptr [ESP + 0xe8]      ; 005b75fe
        ;   Label: LAB_005b75fe
    MOV EDI,dword ptr [ESP + 0xdc]      ; 005b7605
    MOV EBP,dword ptr [ESP + 0x104]     ; 005b760c
    MOV EAX,dword ptr [ESP + 0xec]      ; 005b7613
    MOV EBX,dword ptr [ESP + 0xe4]      ; 005b761a
    SUB ESI,0x18                        ; 005b7621
    SUB EDI,0x608                       ; 005b7624
    ADD EBP,0x608                       ; 005b762a
    INC EAX                             ; 005b7630
    ADD EBX,0x18                        ; 005b7631
    MOV dword ptr [ESP + 0xe8],ESI      ; 005b7634
    MOV dword ptr [ESP + 0xdc],EDI      ; 005b763b
    MOV dword ptr [ESP + 0x104],EBP     ; 005b7642
    MOV dword ptr [ESP + 0xec],EAX      ; 005b7649
    MOV dword ptr [ESP + 0xe4],EBX      ; 005b7650
    CMP EAX,0x2                         ; 005b7657
    JL 0x005b734e                       ; 005b765a
        ;   XREF to: 005b734e (CONDITIONAL_JUMP)  ; LAB_005b734e
    MOV EBX,dword ptr [ESP + 0x11c]     ; 005b7660
    PUSH EBX                            ; 005b7667
    ADD ESP,0x4                         ; 005b7668
    LEA EAX,[EBX + 0x608]               ; 005b766b
    PUSH EAX                            ; 005b7671
    ADD ESP,0x4                         ; 005b7672
    ADD ESP,0x108                       ; 005b7675
    POP EBP                             ; 005b767b
    POP EDI                             ; 005b767c
    POP ESI                             ; 005b767d
    POP EBX                             ; 005b767e
    RET                                 ; 005b767f
    MOV EDX,dword ptr [EBX]             ; 005b7680
        ;   Label: LAB_005b7680
    MOV dword ptr [EAX],EDX             ; 005b7682
    MOV EDX,dword ptr [EBX + 0x4]       ; 005b7684
    MOV dword ptr [EAX + 0x4],EDX       ; 005b7687
    MOV EDX,dword ptr [EBX + 0x8]       ; 005b768a
    MOV dword ptr [EAX + 0x8],EDX       ; 005b768d
    JMP 0x005b7261                      ; 005b7690
        ;   XREF to: 005b7261 (UNCONDITIONAL_JUMP)  ; LAB_005b7261


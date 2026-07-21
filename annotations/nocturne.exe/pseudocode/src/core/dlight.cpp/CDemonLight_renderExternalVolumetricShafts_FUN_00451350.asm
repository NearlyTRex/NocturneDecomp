; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350(int param_1)
;
; Local Variables:
; undefined        Stack[-0x160]:1  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined        Stack[-0x108]:1  local_108
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined        Stack[-0xcc]:1  local_cc
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x78]:4  local_78
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
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   FUN_0044f0b0 at 0044f3ed
;
; Referenced Globals:
;   undefined4 DAT_0057c8c6
;   undefined4 DAT_0057c8ce
;   undefined4 DAT_0057c8d6
;   undefined4 DAT_0057c8de
;   undefined4 DAT_0057c8e6
;   undefined4 DAT_0057c8ee
;   undefined4 DAT_0057c8f6
;   undefined4 DAT_0057c8fe
;   undefined4 DAT_0057c906
;   undefined4 DAT_0057c90e
;   undefined4 DAT_0059c030
;   undefined4 DAT_0059c038
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b9354
;   undefined4 DAT_005be368
;   ... and 4 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
;   FUN_00460d10
;   wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451350
        ;   Label: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350
    PUSH ESI                            ; 00451351
    PUSH EDI                            ; 00451352
    PUSH EBP                            ; 00451353
    MOV EBP,ESP                         ; 00451354
    SUB ESP,0x150                       ; 00451356
    SUB EBP,0x7e                        ; 0045135c
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045135f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 00451365
    JZ 0x0045138f                       ; 0045136c
        ;   XREF to: 0045138f (CONDITIONAL_JUMP)  ; LAB_0045138f
    MOV EAX,[0x005be368]                ; 0045136e | DAT_005be368
    FLD float ptr [EAX + 0x15a888]      ; 00451373 | DAT_01fb1b0c
    FCOMP double ptr [0x0057c8c6]       ; 00451379 | DAT_0057c8c6
    FNSTSW AX                           ; 0045137f
    SAHF                                ; 00451381
    JC 0x0045138f                       ; 00451382
        ;   XREF to: 0045138f (CONDITIONAL_JUMP)  ; LAB_0045138f
    MOV EAX,[0x005b9354]                ; 00451384 | DAT_005b9354 | DAT_01c775ec
    CMP dword ptr [EAX + 0xc],0x0       ; 00451389 | DAT_01c775f8
    JNZ 0x00451397                      ; 0045138d
        ;   XREF to: 00451397 (CONDITIONAL_JUMP)  ; LAB_00451397
    LEA ESP,[EBP + 0x7e]                ; 0045138f
        ;   Label: LAB_0045138f
    POP EBP                             ; 00451392
    POP EDI                             ; 00451393
    POP ESI                             ; 00451394
    POP EBX                             ; 00451395
    RET                                 ; 00451396
    MOV EBX,dword ptr [0x005ae704]      ; 00451397 | DAT_005ae704
        ;   Label: LAB_00451397
    PUSH EBX                            ; 0045139d | DAT_01b4d738
    LEA ESI,[EBP + -0x62]               ; 0045139e
    LEA EDI,[EBP + -0xe]                ; 004513a1
    CALL FUN_00460d10                   ; 004513a4
        ;   XREF to: 00460d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460d10()
    LEA ESI,[EBP + -0x62]               ; 004513a9
    LEA EAX,[EBP + -0xe]                ; 004513ac
    LEA EBX,[EBP + 0xffffff7a]          ; 004513af
    ADD ESP,0x4                         ; 004513b5
    MOVSD ES:EDI,ESI                    ; 004513b8
    MOVSD ES:EDI,ESI                    ; 004513b9
    MOVSD ES:EDI,ESI                    ; 004513ba
    FILD dword ptr [EAX]                ; 004513bb
    FMUL float ptr [0x0059c038]         ; 004513bd | DAT_0059c038
    FSTP float ptr [EBX]                ; 004513c3
    FILD dword ptr [EAX + 0x4]          ; 004513c5
    FMUL float ptr [0x0059c038]         ; 004513c8 | DAT_0059c038
    FSTP float ptr [EBX + 0x4]          ; 004513ce
    FILD dword ptr [EAX + 0x8]          ; 004513d1
    FMUL float ptr [0x0059c038]         ; 004513d4 | DAT_0059c038
    FSTP float ptr [EBX + 0x8]          ; 004513da
    MOV EBX,dword ptr [EBP + 0x92]      ; 004513dd
    FLD float ptr [EBP + 0xffffff7a]    ; 004513e3
    FSUB float ptr [EBX + 0x104]        ; 004513e9
    FLD float ptr [EBP + 0xffffff7e]    ; 004513ef
    FXCH                                ; 004513f5
    FSTP float ptr [EBP + -0x56]        ; 004513f7
    FSUB float ptr [EBX + 0x108]        ; 004513fa
    FST float ptr [EBP + -0x52]         ; 00451400
    FMUL float ptr [EBP + -0x52]        ; 00451403
    FLD float ptr [EBP + -0x56]         ; 00451406
    FMUL ST0                            ; 00451409
    FLD float ptr [EBP + -0x7e]         ; 0045140b
    FSUB float ptr [EBX + 0x10c]        ; 0045140e
    FXCH                                ; 00451414
    FADDP ST2,ST0                       ; 00451416
    FST float ptr [EBP + -0x4e]         ; 00451418
    FMUL float ptr [EBP + -0x4e]        ; 0045141b
    FADDP                               ; 0045141e
    FSQRT                               ; 00451420
    ADD EBX,0x104                       ; 00451422
    FST float ptr [EBP + 0x3a]          ; 00451428
    FLDZ                                ; 0045142b
    FCOMPP                              ; 0045142d
    FNSTSW AX                           ; 0045142f
    SAHF                                ; 00451431
    JNC 0x0045138f                      ; 00451432
        ;   XREF to: 0045138f (CONDITIONAL_JUMP)  ; LAB_0045138f
    FLD1                                ; 00451438
    FLD float ptr [EBP + -0x56]         ; 0045143a
    FXCH                                ; 0045143d
    FDIV float ptr [EBP + 0x3a]         ; 0045143f
    FXCH                                ; 00451442
    FMUL ST1                            ; 00451444
    FLD float ptr [EBP + -0x52]         ; 00451446
    FMUL ST2                            ; 00451449
    FLD float ptr [EBP + -0x4e]         ; 0045144b
    XOR ESI,ESI                         ; 0045144e
    MOV EAX,0x3f800000                  ; 00451450
    MOV dword ptr [EBP + 0xffffff6e],ESI ; 00451455
    MOV dword ptr [EBP + 0xffffff72],ESI ; 0045145b
    MOV dword ptr [EBP + 0xffffff76],EAX ; 00451461
    LEA EAX,[EBP + 0xffffff6e]          ; 00451467
    MOV ESI,dword ptr [EBP + 0x92]      ; 0045146d
    PUSH EAX                            ; 00451473
    LEA EAX,[EBP + -0x7a]               ; 00451474
    ADD ESI,0x110                       ; 00451477
    PUSH EAX                            ; 0045147d
    FMULP ST3                           ; 0045147e
    PUSH ESI                            ; 00451480
    FXCH                                ; 00451481
    FSTP float ptr [EBP + -0x56]        ; 00451483
    FSTP float ptr [EBP + -0x52]        ; 00451486
    FSTP float ptr [EBP + -0x4e]        ; 00451489
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0045148c
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 00451491
    LEA EAX,[EBP + 0xffffff56]          ; 00451494
    PUSH EAX                            ; 0045149a
    MOV EDX,dword ptr [0x005ae704]      ; 0045149b | DAT_005ae704
    PUSH EDX                            ; 004514a1 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30 ; 004514a2
        ;   XREF to: 00460d30 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30()
    FLD float ptr [EBP + 0xffffff56]    ; 004514a7
    FLD float ptr [EBP + 0xffffff5a]    ; 004514ad
    FLD float ptr [EBP + 0xffffff5e]    ; 004514b3
    LEA EAX,[EBP + 0xffffff56]          ; 004514b9
    ADD ESP,0x8                         ; 004514bf
    FXCH ST2                            ; 004514c2
    FSUB float ptr [EBX]                ; 004514c4
    PUSH EAX                            ; 004514c6
    FSTP float ptr [EBP + 0xffffff56]   ; 004514c7
    LEA EAX,[EBP + -0x3e]               ; 004514cd
    FSUB float ptr [EBX + 0x4]          ; 004514d0
    PUSH EAX                            ; 004514d3
    FSTP float ptr [EBP + 0xffffff5a]   ; 004514d4
    FSUB float ptr [EBX + 0x8]          ; 004514da
    PUSH ESI                            ; 004514dd
    FSTP float ptr [EBP + 0xffffff5e]   ; 004514de
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 004514e4
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    MOV EDX,EAX                         ; 004514e9
    LEA EAX,[EBP + 0xffffff56]          ; 004514eb
    ADD ESP,0xc                         ; 004514f1
    CMP EAX,EDX                         ; 004514f4
    JZ 0x00451512                       ; 004514f6
        ;   XREF to: 00451512 (CONDITIONAL_JUMP)  ; LAB_00451512
    MOV EAX,dword ptr [EDX]             ; 004514f8
    MOV dword ptr [EBP + 0xffffff56],EAX ; 004514fa
    MOV EAX,dword ptr [EDX + 0x4]       ; 00451500
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 00451503
    MOV EAX,dword ptr [EDX + 0x8]       ; 00451509
    MOV dword ptr [EBP + 0xffffff5e],EAX ; 0045150c
    FLD float ptr [EBP + 0xffffff5e]    ; 00451512
        ;   Label: LAB_00451512
    FMUL double ptr [0x0057c8ce]        ; 00451518 | DAT_0057c8ce
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045151e
    FDIV float ptr [EAX + 0x138]        ; 00451524
    FLD float ptr [EBP + 0xffffff5a]    ; 0045152a
    FMUL ST0                            ; 00451530
    FLD float ptr [EBP + 0xffffff56]    ; 00451532
    FMUL ST0                            ; 00451538
    FXCH ST2                            ; 0045153a
    FMUL double ptr [0x0057c8d6]        ; 0045153c | DAT_0057c8d6
    FXCH ST2                            ; 00451542
    FADDP                               ; 00451544
    FLD ST0                             ; 00451546
    FLD ST2                             ; 00451548
    FMULP ST3                           ; 0045154a
    FDIV ST0,ST2                        ; 0045154c
    FLD1                                ; 0045154e
    FSUBRP                              ; 00451550
    FSTP float ptr [EBP + 0x36]         ; 00451552
    FCOMPP                              ; 00451555
    FNSTSW AX                           ; 00451557
    SAHF                                ; 00451559
    JNC 0x0045156e                      ; 0045155a
        ;   XREF to: 0045156e (CONDITIONAL_JUMP)  ; LAB_0045156e
    FLD float ptr [EBP + 0x36]          ; 0045155c
    FCOMP double ptr [0x0057c8de]       ; 0045155f | DAT_0057c8de
    FNSTSW AX                           ; 00451565
    SAHF                                ; 00451567
    JA 0x0045138f                       ; 00451568
        ;   XREF to: 0045138f (CONDITIONAL_JUMP)  ; LAB_0045138f
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045156e
        ;   Label: LAB_0045156e
    ADD EAX,0x104                       ; 00451574
    PUSH EAX                            ; 00451579
    MOV ECX,dword ptr [0x005ae704]      ; 0045157a | DAT_005ae704
    PUSH ECX                            ; 00451580 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00451581
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    ADD ESP,0x8                         ; 00451586
    LEA EAX,[EBP + -0x26]               ; 00451589
    PUSH EAX                            ; 0045158c
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045158d
    ADD EAX,0x110                       ; 00451593
    PUSH EAX                            ; 00451598
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0 ; 00451599
        ;   XREF to: 0044dbd0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0()
    ADD ESP,0x8                         ; 0045159e
    PUSH 0x0                            ; 004515a1
    LEA EAX,[EBP + -0x26]               ; 004515a3
    PUSH EAX                            ; 004515a6
    MOV EBX,dword ptr [0x005ae704]      ; 004515a7 | DAT_005ae704
    MOV ESI,0x1                         ; 004515ad
    PUSH EBX                            ; 004515b2 | DAT_01b4d738
    MOV dword ptr [EBP + 0x3e],ESI      ; 004515b3
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004515b6
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 004515bb
    MOV EAX,dword ptr [EBP + 0x92]      ; 004515be
        ;   Label: LAB_004515be
    FLD float ptr [EAX + 0x138]         ; 004515c4
    FDIVR double ptr [0x0057c8ce]       ; 004515ca | DAT_0057c8ce
    MOV EAX,dword ptr [EBP + 0x3e]      ; 004515d0
    MOV dword ptr [EBP + 0x76],EAX      ; 004515d3
    FILD dword ptr [EBP + 0x76]         ; 004515d6
    FMULP                               ; 004515d9
    FMUL double ptr [0x0057c8e6]        ; 004515db | DAT_0057c8e6
    FST float ptr [EBP + 0x42]          ; 004515e1
    FLD ST0                             ; 004515e4
    FLD1                                ; 004515e6
    FPATAN                              ; 004515e8
    FCOS                                ; 004515ea
    FLD1                                ; 004515ec
    XOR EDI,EDI                         ; 004515ee
    FSUBRP ST2,ST0                      ; 004515f0
    MOV dword ptr [EBP + 0x46],EDI      ; 004515f2
    FXCH                                ; 004515f5
    FSTP float ptr [EBP + 0x4a]         ; 004515f7
    FSTP float ptr [EBP + 0x4e]         ; 004515fa
    MOV EAX,dword ptr [EBP + 0x46]      ; 004515fd
        ;   Label: LAB_004515fd
    MOV dword ptr [EBP + 0x76],EAX      ; 00451600
    FLD float ptr [0x0057c8ee]          ; 00451603 | DAT_0057c8ee
    FILD dword ptr [EBP + 0x76]         ; 00451609
    FMUL ST1                            ; 0045160c
    FLD double ptr [0x0057c8f6]         ; 0045160e | DAT_0057c8f6
    FXCH                                ; 00451614
    FMUL ST1                            ; 00451616
    INC EAX                             ; 00451618
    FLD double ptr [0x0057c8d6]         ; 00451619 | DAT_0057c8d6
    FXCH                                ; 0045161f
    FMUL ST1                            ; 00451621
    MOV dword ptr [EBP + 0x76],EAX      ; 00451623
    FLD ST0                             ; 00451626
    FSIN                                ; 00451628
    FILD dword ptr [EBP + 0x76]         ; 0045162a
    FMULP ST5                           ; 0045162d
    FXCH ST4                            ; 0045162f
    FMULP ST3                           ; 00451631
    FXCH ST2                            ; 00451633
    FMULP                               ; 00451635
    FLD ST0                             ; 00451637
    FSIN                                ; 00451639
    FXCH ST2                            ; 0045163b
    FCOS                                ; 0045163d
    FXCH                                ; 0045163f
    FCOS                                ; 00451641
    MOV EDX,dword ptr [EBP + 0x92]      ; 00451643
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 00451649
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045164f
    SAR EDX,0x1f                        ; 00451655
    MOV EAX,dword ptr [EAX + 0x1cc0]    ; 00451658
    SUB EAX,EDX                         ; 0045165e
    SAR EAX,0x1                         ; 00451660
    MOV EDX,dword ptr [EBP + 0x92]      ; 00451662
    MOV dword ptr [EBP + 0x76],EAX      ; 00451668
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 0045166b
    MOV EAX,dword ptr [EBP + 0x92]      ; 00451671
    SAR EDX,0x1f                        ; 00451677
    MOV EAX,dword ptr [EAX + 0x1cc4]    ; 0045167a
    SUB EAX,EDX                         ; 00451680
    SAR EAX,0x1                         ; 00451682
    FLD float ptr [EBP + 0x42]          ; 00451684
    FXCH ST2                            ; 00451687
    FMUL ST2                            ; 00451689
    MOV dword ptr [EBP + 0x7a],EAX      ; 0045168b
    FSTP float ptr [EBP + 0x5e]         ; 0045168e
    FILD dword ptr [EBP + 0x7a]         ; 00451691
    FLD ST0                             ; 00451694
    FMUL float ptr [EBP + 0x5e]         ; 00451696
    MOV EDX,dword ptr [EBP + 0x92]      ; 00451699
    FSUBP                               ; 0045169f
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 004516a1
    CALL crt_math.c_round_FUN_00563a30  ; 004516a7
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x16]        ; 004516ac
    MOV EAX,dword ptr [EBP + 0x16]      ; 004516af
    IMUL EAX,ECX                        ; 004516b2
    FXCH ST3                            ; 004516b5
    FMUL ST1                            ; 004516b7
    FSTP float ptr [EBP + 0x5a]         ; 004516b9
    FILD dword ptr [EBP + 0x76]         ; 004516bc
    FLD ST0                             ; 004516bf
    FMUL float ptr [EBP + 0x5a]         ; 004516c1
    FADDP                               ; 004516c4
    FXCH ST2                            ; 004516c6
    FMUL ST1                            ; 004516c8
    FXCH ST2                            ; 004516ca
    CALL crt_math.c_round_FUN_00563a30  ; 004516cc
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x1e]        ; 004516d1
    ADD EAX,dword ptr [EBP + 0x1e]      ; 004516d4
    LEA EDX,[EAX + EAX*0x1]             ; 004516d7
    MOV EAX,dword ptr [EBP + 0x92]      ; 004516da
    FMULP ST2                           ; 004516e0
    MOV EAX,dword ptr [EAX + 0x2f94]    ; 004516e2
    ADD EDX,EAX                         ; 004516e8
    XOR EAX,EAX                         ; 004516ea
    MOV AX,word ptr [EDX]               ; 004516ec
    MOV dword ptr [EBP + 0x7a],EAX      ; 004516ef
    XOR ESI,ESI                         ; 004516f2
    FILD dword ptr [EBP + 0x7a]         ; 004516f4
    FMUL double ptr [0x0057c8fe]        ; 004516f7 | DAT_0057c8fe
    MOV dword ptr [EBP + 0x6a],ESI      ; 004516fd
    FXCH                                ; 00451700
    FSTP float ptr [EBP + 0x52]         ; 00451702
    FSTP float ptr [EBP + 0x66]         ; 00451705
    MOV EAX,dword ptr [EBP + 0x66]      ; 00451708
    FSTP float ptr [EBP + 0x56]         ; 0045170b
    MOV dword ptr [EBP + 0x62],EAX      ; 0045170e
    MOV EAX,dword ptr [EBP + 0x92]      ; 00451711
        ;   Label: LAB_00451711
    MOV EAX,dword ptr [EAX + 0x100]     ; 00451717
    FLD float ptr [EBP + 0x4e]          ; 0045171d
    MOV dword ptr [EBP + 0x22],EAX      ; 00451720
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00451723
    FMUL float ptr [EBP + 0x22]         ; 00451726
    MOV dword ptr [EBP + 0x7a],EAX      ; 00451729
    FILD dword ptr [EBP + 0x7a]         ; 0045172c
    FMUL ST1                            ; 0045172f
    FLD float ptr [0x0057c906]          ; 00451731 | DAT_0057c906
    FXCH                                ; 00451737
    FMUL ST1                            ; 00451739
    FLD float ptr [EBP + 0x22]          ; 0045173b
    FXCH                                ; 0045173e
    FSTP float ptr [EBP + 0x6e]         ; 00451740
    FSUB float ptr [EBP + 0x6e]         ; 00451743
    FLD1                                ; 00451746
    FDIV float ptr [EBP + 0x22]         ; 00451748
    INC EAX                             ; 0045174b
    FXCH                                ; 0045174c
    FMUL ST1                            ; 0045174e
    MOV dword ptr [EBP + 0x7a],EAX      ; 00451750
    FLD double ptr [0x0057c90e]         ; 00451753 | DAT_0057c90e
    FXCH                                ; 00451759
    FMUL ST1                            ; 0045175b
    FILD dword ptr [EBP + 0x7a]         ; 0045175d
    FMULP ST5                           ; 00451760
    FLD float ptr [EBP + 0x4a]          ; 00451762
    FXCH                                ; 00451765
    FMUL ST1                            ; 00451767
    MOV EAX,dword ptr [EBP + 0x92]      ; 00451769
    FXCH ST5                            ; 0045176f
    FMULP ST4                           ; 00451771
    FLD float ptr [EAX + 0x2fa8]        ; 00451773
    FMULP ST5                           ; 00451779
    FXCH ST3                            ; 0045177b
    FSTP float ptr [EBP + 0x72]         ; 0045177d
    FXCH ST3                            ; 00451780
    FSTP float ptr [EBP + 0x2e]         ; 00451782
    FLD float ptr [EBP + 0x22]          ; 00451785
    FSUB float ptr [EBP + 0x72]         ; 00451788
    FMULP                               ; 0045178b
    FMULP ST2                           ; 0045178d
    FMULP                               ; 0045178f
    FMUL float ptr [EAX + 0x2fa8]       ; 00451791
    FSTP float ptr [EBP + 0x32]         ; 00451797
    FLD float ptr [EBP + 0x2e]          ; 0045179a
    FISTP dword ptr [EBP + 0x26]        ; 004517a0
    FLD float ptr [EBP + 0x32]          ; 004517a6
    FISTP dword ptr [EBP + 0x2a]        ; 004517ac
    FLD float ptr [EBP + 0x6e]          ; 004517b2
    FCOMP float ptr [EBP + 0x66]        ; 004517b5
    FNSTSW AX                           ; 004517b8
    SAHF                                ; 004517ba
    JNC 0x00451a31                      ; 004517bb
        ;   XREF to: 00451a31 (CONDITIONAL_JUMP)  ; LAB_00451a31
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004517c1
    MOV dword ptr [EBP + -0x66],EAX     ; 004517c4
        ;   Label: LAB_004517c4
    FLD float ptr [EBP + -0x66]         ; 004517c7
    FMUL float ptr [EBP + 0x5a]         ; 004517ca
    FLD float ptr [EBP + -0x66]         ; 004517cd
    FMUL float ptr [EBP + 0x5e]         ; 004517d0
    LEA EBX,[EBP + 0xffffff62]          ; 004517d3
    LEA EAX,[EBP + -0x6e]               ; 004517d9
    MOV EDX,dword ptr [0x005ae704]      ; 004517dc | DAT_005ae704
    FXCH                                ; 004517e2
    FSTP float ptr [EBP + -0x6e]        ; 004517e4
    FSTP float ptr [EBP + -0x6a]        ; 004517e7
    FLD float ptr [EAX]                 ; 004517ea
    FMUL float ptr [0x0059c030]         ; 004517ec | DAT_0059c030
    FISTP dword ptr [EBX]               ; 004517f2
    FLD float ptr [EAX + 0x4]           ; 004517f4
    FMUL float ptr [0x0059c030]         ; 004517f7 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 004517fd
    FLD float ptr [EAX + 0x8]           ; 00451800
    FMUL float ptr [0x0059c030]         ; 00451803 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 00451809
    LEA EAX,[EBP + 0xffffff62]          ; 0045180c
    PUSH EAX                            ; 00451812
    MOV EAX,dword ptr [EDX]             ; 00451813 | DAT_01b4d738
    PUSH EAX                            ; 00451815
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00451816
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    FLD float ptr [EBP + 0x6e]          ; 0045181b
    ADD ESP,0x8                         ; 0045181e
    FCOMP float ptr [EBP + 0x62]        ; 00451821
    FNSTSW AX                           ; 00451824
    SAHF                                ; 00451826
    JNC 0x00451a39                      ; 00451827
        ;   XREF to: 00451a39 (CONDITIONAL_JUMP)  ; LAB_00451a39
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0045182d
    MOV dword ptr [EBP + -0x66],EAX     ; 00451830
        ;   Label: LAB_00451830
    FLD float ptr [EBP + -0x66]         ; 00451833
    FMUL float ptr [EBP + 0x52]         ; 00451836
    FLD float ptr [EBP + -0x66]         ; 00451839
    FMUL float ptr [EBP + 0x56]         ; 0045183c
    LEA EBX,[EBP + -0x1a]               ; 0045183f
    LEA EAX,[EBP + -0x6e]               ; 00451842
    MOV EDX,dword ptr [0x005ae704]      ; 00451845 | DAT_005ae704
    FXCH                                ; 0045184b
    FSTP float ptr [EBP + -0x6e]        ; 0045184d
    FSTP float ptr [EBP + -0x6a]        ; 00451850
    FLD float ptr [EAX]                 ; 00451853
    FMUL float ptr [0x0059c030]         ; 00451855 | DAT_0059c030
    FISTP dword ptr [EBX]               ; 0045185b
    FLD float ptr [EAX + 0x4]           ; 0045185d
    FMUL float ptr [0x0059c030]         ; 00451860 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 00451866
    FLD float ptr [EAX + 0x8]           ; 00451869
    FMUL float ptr [0x0059c030]         ; 0045186c | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 00451872
    LEA EAX,[EBP + -0x1a]               ; 00451875
    PUSH EAX                            ; 00451878
    MOV EAX,dword ptr [EDX]             ; 00451879 | DAT_01b4d738
    ADD EAX,0x30                        ; 0045187b
    PUSH EAX                            ; 0045187e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 0045187f
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    FLD float ptr [EBP + 0x72]          ; 00451884
    ADD ESP,0x8                         ; 00451887
    FCOMP float ptr [EBP + 0x62]        ; 0045188a
    FNSTSW AX                           ; 0045188d
    SAHF                                ; 0045188f
    JNC 0x00451a41                      ; 00451890
        ;   XREF to: 00451a41 (CONDITIONAL_JUMP)  ; LAB_00451a41
    MOV EAX,dword ptr [EBP + 0x72]      ; 00451896
    MOV dword ptr [EBP + -0x66],EAX     ; 00451899
        ;   Label: LAB_00451899
    FLD float ptr [EBP + -0x66]         ; 0045189c
    FMUL float ptr [EBP + 0x52]         ; 0045189f
    FLD float ptr [EBP + -0x66]         ; 004518a2
    FMUL float ptr [EBP + 0x56]         ; 004518a5
    LEA EBX,[EBP + -0x4a]               ; 004518a8
    LEA EAX,[EBP + -0x6e]               ; 004518ab
    MOV EDX,dword ptr [0x005ae704]      ; 004518ae | DAT_005ae704
    FXCH                                ; 004518b4
    FSTP float ptr [EBP + -0x6e]        ; 004518b6
    FSTP float ptr [EBP + -0x6a]        ; 004518b9
    FLD float ptr [EAX]                 ; 004518bc
    FMUL float ptr [0x0059c030]         ; 004518be | DAT_0059c030
    FISTP dword ptr [EBX]               ; 004518c4
    FLD float ptr [EAX + 0x4]           ; 004518c6
    FMUL float ptr [0x0059c030]         ; 004518c9 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 004518cf
    FLD float ptr [EAX + 0x8]           ; 004518d2
    FMUL float ptr [0x0059c030]         ; 004518d5 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 004518db
    LEA EAX,[EBP + -0x4a]               ; 004518de
    PUSH EAX                            ; 004518e1
    MOV EAX,dword ptr [EDX]             ; 004518e2 | DAT_01b4d738
    ADD EAX,0x60                        ; 004518e4
    PUSH EAX                            ; 004518e7
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 004518e8
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    FLD float ptr [EBP + 0x72]          ; 004518ed
    ADD ESP,0x8                         ; 004518f0
    FCOMP float ptr [EBP + 0x66]        ; 004518f3
    FNSTSW AX                           ; 004518f6
    SAHF                                ; 004518f8
    JNC 0x00451a49                      ; 004518f9
        ;   XREF to: 00451a49 (CONDITIONAL_JUMP)  ; LAB_00451a49
    MOV EAX,dword ptr [EBP + 0x72]      ; 004518ff
    MOV dword ptr [EBP + -0x66],EAX     ; 00451902
        ;   Label: LAB_00451902
    FLD float ptr [EBP + -0x66]         ; 00451905
    FMUL float ptr [EBP + 0x5a]         ; 00451908
    FLD float ptr [EBP + -0x66]         ; 0045190b
    FMUL float ptr [EBP + 0x5e]         ; 0045190e
    LEA EBX,[EBP + -0x32]               ; 00451911
    LEA EAX,[EBP + -0x6e]               ; 00451914
    MOV EDX,dword ptr [0x005ae704]      ; 00451917 | DAT_005ae704
    FXCH                                ; 0045191d
    FSTP float ptr [EBP + -0x6e]        ; 0045191f
    FSTP float ptr [EBP + -0x6a]        ; 00451922
    FLD float ptr [EAX]                 ; 00451925
    FMUL float ptr [0x0059c030]         ; 00451927 | DAT_0059c030
    FISTP dword ptr [EBX]               ; 0045192d
    FLD float ptr [EAX + 0x4]           ; 0045192f
    FMUL float ptr [0x0059c030]         ; 00451932 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 00451938
    FLD float ptr [EAX + 0x8]           ; 0045193b
    FMUL float ptr [0x0059c030]         ; 0045193e | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 00451944
    LEA EAX,[EBP + -0x32]               ; 00451947
    PUSH EAX                            ; 0045194a
    MOV EAX,dword ptr [EDX]             ; 0045194b | DAT_01b4d738
    ADD EAX,0x90                        ; 0045194d
    PUSH EAX                            ; 00451952
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00451953
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EDX,dword ptr [0x005ae704]      ; 00451958 | DAT_005ae704
    ADD ESP,0x8                         ; 0045195e
    MOV EBX,dword ptr [EDX]             ; 00451961 | DAT_01b4d738
    MOV EAX,dword ptr [EBP + 0x26]      ; 00451963
    MOV dword ptr [EBX + 0x20],EAX      ; 00451966
    MOV EBX,dword ptr [EDX]             ; 00451969 | DAT_01b4d738
    MOV EAX,dword ptr [EBP + 0x26]      ; 0045196b
    MOV dword ptr [EBX + 0x50],EAX      ; 0045196e
    MOV EBX,dword ptr [EDX]             ; 00451971 | DAT_01b4d738
    MOV EAX,dword ptr [EBP + 0x2a]      ; 00451973
    MOV dword ptr [EBX + 0x80],EAX      ; 00451976
    MOV EBX,dword ptr [EDX]             ; 0045197c | DAT_01b4d738
    PUSH 0x4442a0                       ; 0045197e | LAB_004442a0
    MOV EAX,dword ptr [EBP + 0x2a]      ; 00451983
    MOV EDI,0x4                         ; 00451986
    MOV ECX,0x1                         ; 0045198b
    MOV dword ptr [EBX + 0xb0],EAX      ; 00451990
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00451996
    MOV dword ptr [EBP + 0xffffff32],EDI ; 00451999
    XOR EAX,EAX                         ; 0045199f
    MOV dword ptr [EBP + 0xffffff4e],ECX ; 004519a1
    MOV dword ptr [EBP + 0xffffff42],EAX ; 004519a7
    MOV dword ptr [EBP + 0xffffff3e],EAX ; 004519ad
    MOV dword ptr [EBP + 0xffffff3a],EAX ; 004519b3
    MOV dword ptr [EBP + 0xffffff36],EAX ; 004519b9
    MOV EAX,0x2                         ; 004519bf
    INC ESI                             ; 004519c4
    MOV dword ptr [EBP + 0xffffff4a],EAX ; 004519c5
    LEA EAX,[EBP + 0xffffff2e]          ; 004519cb
    XOR EBX,EBX                         ; 004519d1
    PUSH EAX                            ; 004519d3
    MOV EDI,0x3                         ; 004519d4
    MOV dword ptr [EBP + 0xffffff52],EBX ; 004519d9
    PUSH EDX                            ; 004519df | DAT_01b4d738
    MOV dword ptr [EBP + 0x6a],ESI      ; 004519e0
    MOV dword ptr [EBP + 0xffffff46],EDI ; 004519e3
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80 ; 004519e9
        ;   XREF to: 00460e80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80()
    ADD ESP,0xc                         ; 004519ee
    CMP ESI,0x4                         ; 004519f1
    JL 0x00451711                       ; 004519f4
        ;   XREF to: 00451711 (CONDITIONAL_JUMP)  ; LAB_00451711
    MOV EAX,dword ptr [EBP + 0x46]      ; 004519fa
    INC EAX                             ; 004519fd
    MOV dword ptr [EBP + 0x46],EAX      ; 004519fe
    CMP EAX,0x10                        ; 00451a01
    JL 0x004515fd                       ; 00451a04
        ;   XREF to: 004515fd (CONDITIONAL_JUMP)  ; LAB_004515fd
    MOV ECX,dword ptr [EBP + 0x3e]      ; 00451a0a
    INC ECX                             ; 00451a0d
    MOV dword ptr [EBP + 0x3e],ECX      ; 00451a0e
    CMP ECX,0x10                        ; 00451a11
    JL 0x004515be                       ; 00451a14
        ;   XREF to: 004515be (CONDITIONAL_JUMP)  ; LAB_004515be
    MOV ESI,dword ptr [0x005ae704]      ; 00451a1a | DAT_005ae704
    PUSH ESI                            ; 00451a20 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00451a21
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00451a26
    LEA ESP,[EBP + 0x7e]                ; 00451a29
    POP EBP                             ; 00451a2c
    POP EDI                             ; 00451a2d
    POP ESI                             ; 00451a2e
    POP EBX                             ; 00451a2f
    RET                                 ; 00451a30
    MOV EAX,dword ptr [EBP + 0x66]      ; 00451a31
        ;   Label: LAB_00451a31
    JMP 0x004517c4                      ; 00451a34
        ;   XREF to: 004517c4 (UNCONDITIONAL_JUMP)  ; LAB_004517c4
    MOV EAX,dword ptr [EBP + 0x62]      ; 00451a39
        ;   Label: LAB_00451a39
    JMP 0x00451830                      ; 00451a3c
        ;   XREF to: 00451830 (UNCONDITIONAL_JUMP)  ; LAB_00451830
    MOV EAX,dword ptr [EBP + 0x62]      ; 00451a41
        ;   Label: LAB_00451a41
    JMP 0x00451899                      ; 00451a44
        ;   XREF to: 00451899 (UNCONDITIONAL_JUMP)  ; LAB_00451899
    MOV EAX,dword ptr [EBP + 0x66]      ; 00451a49
        ;   Label: LAB_00451a49
    JMP 0x00451902                      ; 00451a4c
        ;   XREF to: 00451902 (UNCONDITIONAL_JUMP)  ; LAB_00451902


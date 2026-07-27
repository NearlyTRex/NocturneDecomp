; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_005570b0(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_werewolf.cpp_FUN_005576a0 at 00557780
;
; Referenced Globals:
;   undefined4 DAT_005a42d0
;   float FLOAT_005a42fc = 0.2000000
;   float FLOAT_005a4300 = 0.2000000
;   undefined4 DAT_005ae704
;   undefined4 DAT_005c1618
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005570b0
        ;   Label: core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005570b0
    PUSH ESI                            ; 005570b1
    PUSH EDI                            ; 005570b2
    PUSH EBP                            ; 005570b3
    SUB ESP,0x10c                       ; 005570b4
    MOV EDI,dword ptr [ESP + 0x120]     ; 005570ba
    MOV ESI,dword ptr [ESP + 0x124]     ; 005570c1
    MOV EAX,[0x005a42fc]                ; 005570c8 | FLOAT_005a42fc
    MOV dword ptr [ESP + 0xf4],EAX      ; 005570cd
    MOV EAX,[0x005a4300]                ; 005570d4 | FLOAT_005a4300
    MOV dword ptr [ESP + 0xf8],EAX      ; 005570d9
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005570e0
    XOR EDX,EDX                         ; 005570e7
    MOV dword ptr [ESP + 0x70],EAX      ; 005570e9
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005570ed
    MOV dword ptr [ESP + 0x78],EDX      ; 005570f4
    MOV dword ptr [ESP + 0x74],EAX      ; 005570f8
    FLD float ptr [ESI]                 ; 005570fc
    FADD float ptr [ESP + 0xf4]         ; 005570fe
    FSTP float ptr [ESP + 0x34]         ; 00557105
    FLD float ptr [ESI + 0x4]           ; 00557109
    FADD float ptr [ESP + 0xf8]         ; 0055710c
    FSTP float ptr [ESP + 0x38]         ; 00557113
    MOV EAX,dword ptr [ESI + 0x8]       ; 00557117
    MOV dword ptr [ESP + 0x3c],EAX      ; 0055711a
    LEA EAX,[EDI + 0x2614]              ; 0055711e
    FLD float ptr [ESP + 0x34]          ; 00557124
    FMUL float ptr [EAX]                ; 00557128
    FLD float ptr [ESP + 0x38]          ; 0055712a
    FXCH                                ; 0055712e
    FSTP float ptr [ESP + 0x4c]         ; 00557130
    FMUL float ptr [EAX]                ; 00557134
    FLD float ptr [ESP + 0x3c]          ; 00557136
    FXCH                                ; 0055713a
    FSTP float ptr [ESP + 0x50]         ; 0055713c
    FMUL float ptr [EAX]                ; 00557140
    LEA EDX,[ESP + 0xc4]                ; 00557142
    LEA EAX,[ESP + 0x4c]                ; 00557149
    FSTP float ptr [ESP + 0x54]         ; 0055714d
    CMP EDX,EAX                         ; 00557151
    JZ 0x00557176                       ; 00557153
        ;   XREF to: 00557176 (CONDITIONAL_JUMP)  ; LAB_00557176
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00557155
    MOV dword ptr [ESP + 0xc4],EAX      ; 00557159
    MOV EAX,dword ptr [ESP + 0x50]      ; 00557160
    MOV dword ptr [ESP + 0xc8],EAX      ; 00557164
    MOV EAX,dword ptr [ESP + 0x54]      ; 0055716b
    MOV dword ptr [ESP + 0xcc],EAX      ; 0055716f
    LEA EBX,[ESP + 0xd0]                ; 00557176
        ;   Label: LAB_00557176
    LEA EAX,[ESP + 0xc4]                ; 0055717d
    MOV EDX,dword ptr [0x005ae704]      ; 00557184 | DAT_005ae704
    FLD float ptr [EAX]                 ; 0055718a
    FMUL float ptr [0x005a42d0]         ; 0055718c | DAT_005a42d0
    FISTP dword ptr [EBX]               ; 00557192
    FLD float ptr [EAX + 0x4]           ; 00557194
    FMUL float ptr [0x005a42d0]         ; 00557197 | DAT_005a42d0
    FISTP dword ptr [EBX + 0x4]         ; 0055719d
    FLD float ptr [EAX + 0x8]           ; 005571a0
    FMUL float ptr [0x005a42d0]         ; 005571a3 | DAT_005a42d0
    FISTP dword ptr [EBX + 0x8]         ; 005571a9
    LEA EAX,[ESP + 0xd0]                ; 005571ac
    PUSH EAX                            ; 005571b3
    MOV EAX,dword ptr [EDX]             ; 005571b4 | DAT_01b4d738
    PUSH EAX                            ; 005571b6
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 005571b7
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    FLD float ptr [0x005a42fc]          ; 005571bc | FLOAT_005a42fc
    MOV EAX,[0x005a4300]                ; 005571c2 | FLOAT_005a4300
    ADD ESP,0x8                         ; 005571c7
    FCHS                                ; 005571ca
    FSTP float ptr [ESP + 0x100]        ; 005571cc
    MOV dword ptr [ESP + 0xfc],EAX      ; 005571d3
    MOV EAX,dword ptr [ESP + 0x100]     ; 005571da
    XOR ECX,ECX                         ; 005571e1
    MOV dword ptr [ESP + 0x7c],EAX      ; 005571e3
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005571e7
    MOV dword ptr [ESP + 0x84],ECX      ; 005571ee
    MOV dword ptr [ESP + 0x80],EAX      ; 005571f5
    FLD float ptr [ESI]                 ; 005571fc
    FADD float ptr [ESP + 0x100]        ; 005571fe
    FSTP float ptr [ESP + 0xb8]         ; 00557205
    FLD float ptr [ESI + 0x4]           ; 0055720c
    FADD float ptr [ESP + 0xfc]         ; 0055720f
    FSTP float ptr [ESP + 0xbc]         ; 00557216
    MOV EAX,dword ptr [ESI + 0x8]       ; 0055721d
    MOV dword ptr [ESP + 0xc0],EAX      ; 00557220
    LEA EAX,[EDI + 0x2614]              ; 00557227
    FLD float ptr [ESP + 0xb8]          ; 0055722d
    FMUL float ptr [EAX]                ; 00557234
    FLD float ptr [ESP + 0xbc]          ; 00557236
    FXCH                                ; 0055723d
    FSTP float ptr [ESP + 0xac]         ; 0055723f
    FMUL float ptr [EAX]                ; 00557246
    FLD float ptr [ESP + 0xc0]          ; 00557248
    FXCH                                ; 0055724f
    FSTP float ptr [ESP + 0xb0]         ; 00557251
    FMUL float ptr [EAX]                ; 00557258
    LEA EDX,[ESP + 0xc4]                ; 0055725a
    LEA EAX,[ESP + 0xac]                ; 00557261
    FSTP float ptr [ESP + 0xb4]         ; 00557268
    CMP EDX,EAX                         ; 0055726f
    JZ 0x0055729d                       ; 00557271
        ;   XREF to: 0055729d (CONDITIONAL_JUMP)  ; LAB_0055729d
    MOV EAX,dword ptr [ESP + 0xac]      ; 00557273
    MOV dword ptr [ESP + 0xc4],EAX      ; 0055727a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00557281
    MOV dword ptr [ESP + 0xc8],EAX      ; 00557288
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0055728f
    MOV dword ptr [ESP + 0xcc],EAX      ; 00557296
    LEA EBX,[ESP + 0xa0]                ; 0055729d
        ;   Label: LAB_0055729d
    LEA EAX,[ESP + 0xc4]                ; 005572a4
    MOV EDX,dword ptr [0x005ae704]      ; 005572ab | DAT_005ae704
    FLD float ptr [EAX]                 ; 005572b1
    FMUL float ptr [0x005a42d0]         ; 005572b3 | DAT_005a42d0
    FISTP dword ptr [EBX]               ; 005572b9
    FLD float ptr [EAX + 0x4]           ; 005572bb
    FMUL float ptr [0x005a42d0]         ; 005572be | DAT_005a42d0
    FISTP dword ptr [EBX + 0x4]         ; 005572c4
    FLD float ptr [EAX + 0x8]           ; 005572c7
    FMUL float ptr [0x005a42d0]         ; 005572ca | DAT_005a42d0
    FISTP dword ptr [EBX + 0x8]         ; 005572d0
    LEA EAX,[ESP + 0xa0]                ; 005572d3
    PUSH EAX                            ; 005572da
    MOV EAX,dword ptr [EDX]             ; 005572db | DAT_01b4d738
    ADD EAX,0x30                        ; 005572dd
    PUSH EAX                            ; 005572e0
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 005572e1
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    FLD float ptr [0x005a4300]          ; 005572e6 | FLOAT_005a4300
    FLD float ptr [0x005a42fc]          ; 005572ec | FLOAT_005a42fc
    ADD ESP,0x8                         ; 005572f2
    FXCH                                ; 005572f5
    FCHS                                ; 005572f7
    FXCH                                ; 005572f9
    FCHS                                ; 005572fb
    XOR EBX,EBX                         ; 005572fd
    FSTP float ptr [ESP + 0x100]        ; 005572ff
    MOV EAX,dword ptr [ESP + 0x100]     ; 00557306
    FSTP float ptr [ESP + 0x104]        ; 0055730d
    MOV dword ptr [ESP + 0x64],EAX      ; 00557314
    MOV EAX,dword ptr [ESP + 0x104]     ; 00557318
    MOV dword ptr [ESP + 0x6c],EBX      ; 0055731f
    MOV dword ptr [ESP + 0x68],EAX      ; 00557323
    FLD float ptr [ESI]                 ; 00557327
    FADD float ptr [ESP + 0x100]        ; 00557329
    FSTP float ptr [ESP + 0xdc]         ; 00557330
    FLD float ptr [ESI + 0x4]           ; 00557337
    FADD float ptr [ESP + 0x104]        ; 0055733a
    FSTP float ptr [ESP + 0xe0]         ; 00557341
    MOV EAX,dword ptr [ESI + 0x8]       ; 00557348
    MOV dword ptr [ESP + 0xe4],EAX      ; 0055734b
    LEA EAX,[EDI + 0x2614]              ; 00557352
    FLD float ptr [ESP + 0xdc]          ; 00557358
    FMUL float ptr [EAX]                ; 0055735f
    FLD float ptr [ESP + 0xe0]          ; 00557361
    FXCH                                ; 00557368
    FSTP float ptr [ESP + 0x88]         ; 0055736a
    FMUL float ptr [EAX]                ; 00557371
    FLD float ptr [ESP + 0xe4]          ; 00557373
    FXCH                                ; 0055737a
    FSTP float ptr [ESP + 0x8c]         ; 0055737c
    FMUL float ptr [EAX]                ; 00557383
    LEA EDX,[ESP + 0xc4]                ; 00557385
    LEA EAX,[ESP + 0x88]                ; 0055738c
    FSTP float ptr [ESP + 0x90]         ; 00557393
    CMP EDX,EAX                         ; 0055739a
    JZ 0x005573c8                       ; 0055739c
        ;   XREF to: 005573c8 (CONDITIONAL_JUMP)  ; LAB_005573c8
    MOV EAX,dword ptr [ESP + 0x88]      ; 0055739e
    MOV dword ptr [ESP + 0xc4],EAX      ; 005573a5
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005573ac
    MOV dword ptr [ESP + 0xc8],EAX      ; 005573b3
    MOV EAX,dword ptr [ESP + 0x90]      ; 005573ba
    MOV dword ptr [ESP + 0xcc],EAX      ; 005573c1
    LEA EBX,[ESP + 0xe8]                ; 005573c8
        ;   Label: LAB_005573c8
    LEA EAX,[ESP + 0xc4]                ; 005573cf
    MOV EDX,dword ptr [0x005ae704]      ; 005573d6 | DAT_005ae704
    FLD float ptr [EAX]                 ; 005573dc
    FMUL float ptr [0x005a42d0]         ; 005573de | DAT_005a42d0
    FISTP dword ptr [EBX]               ; 005573e4
    FLD float ptr [EAX + 0x4]           ; 005573e6
    FMUL float ptr [0x005a42d0]         ; 005573e9 | DAT_005a42d0
    FISTP dword ptr [EBX + 0x4]         ; 005573ef
    FLD float ptr [EAX + 0x8]           ; 005573f2
    FMUL float ptr [0x005a42d0]         ; 005573f5 | DAT_005a42d0
    FISTP dword ptr [EBX + 0x8]         ; 005573fb
    LEA EAX,[ESP + 0xe8]                ; 005573fe
    PUSH EAX                            ; 00557405
    MOV EAX,dword ptr [EDX]             ; 00557406 | DAT_01b4d738
    ADD EAX,0x60                        ; 00557408
    PUSH EAX                            ; 0055740b
    XOR EBP,EBP                         ; 0055740c
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0055740e
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    FLD float ptr [0x005a4300]          ; 00557413 | FLOAT_005a4300
    MOV EAX,[0x005a42fc]                ; 00557419 | FLOAT_005a42fc
    ADD ESP,0x8                         ; 0055741e
    FCHS                                ; 00557421
    FSTP float ptr [ESP + 0x104]        ; 00557423
    MOV dword ptr [ESP + 0x108],EAX     ; 0055742a
    MOV dword ptr [ESP + 0x40],EAX      ; 00557431
    MOV EAX,dword ptr [ESP + 0x104]     ; 00557435
    MOV dword ptr [ESP + 0x48],EBP      ; 0055743c
    MOV dword ptr [ESP + 0x44],EAX      ; 00557440
    FLD float ptr [ESI]                 ; 00557444
    FADD float ptr [ESP + 0x108]        ; 00557446
    FSTP float ptr [ESP + 0x28]         ; 0055744d
    FLD float ptr [ESI + 0x4]           ; 00557451
    FADD float ptr [ESP + 0x104]        ; 00557454
    FSTP float ptr [ESP + 0x2c]         ; 0055745b
    MOV EAX,dword ptr [ESI + 0x8]       ; 0055745f
    MOV dword ptr [ESP + 0x30],EAX      ; 00557462
    LEA EAX,[EDI + 0x2614]              ; 00557466
    FLD float ptr [ESP + 0x28]          ; 0055746c
    FMUL float ptr [EAX]                ; 00557470
    FLD float ptr [ESP + 0x2c]          ; 00557472
    FXCH                                ; 00557476
    FSTP float ptr [ESP + 0x94]         ; 00557478
    FMUL float ptr [EAX]                ; 0055747f
    FLD float ptr [ESP + 0x30]          ; 00557481
    FXCH                                ; 00557485
    FSTP float ptr [ESP + 0x98]         ; 00557487
    FMUL float ptr [EAX]                ; 0055748e
    LEA EBX,[ESP + 0xc4]                ; 00557490
    LEA EAX,[ESP + 0x94]                ; 00557497
    FSTP float ptr [ESP + 0x9c]         ; 0055749e
    CMP EBX,EAX                         ; 005574a5
    JZ 0x005574d3                       ; 005574a7
        ;   XREF to: 005574d3 (CONDITIONAL_JUMP)  ; LAB_005574d3
    MOV EAX,dword ptr [ESP + 0x94]      ; 005574a9
    MOV dword ptr [ESP + 0xc4],EAX      ; 005574b0
    MOV EAX,dword ptr [ESP + 0x98]      ; 005574b7
    MOV dword ptr [ESP + 0xc8],EAX      ; 005574be
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005574c5
    MOV dword ptr [ESP + 0xcc],EAX      ; 005574cc
    LEA EBX,[ESP + 0x58]                ; 005574d3
        ;   Label: LAB_005574d3
    LEA EAX,[ESP + 0xc4]                ; 005574d7
    MOV ESI,dword ptr [0x005ae704]      ; 005574de | DAT_005ae704
    FLD float ptr [EAX]                 ; 005574e4
    FMUL float ptr [0x005a42d0]         ; 005574e6 | DAT_005a42d0
    FISTP dword ptr [EBX]               ; 005574ec
    FLD float ptr [EAX + 0x4]           ; 005574ee
    FMUL float ptr [0x005a42d0]         ; 005574f1 | DAT_005a42d0
    FISTP dword ptr [EBX + 0x4]         ; 005574f7
    FLD float ptr [EAX + 0x8]           ; 005574fa
    FMUL float ptr [0x005a42d0]         ; 005574fd | DAT_005a42d0
    FISTP dword ptr [EBX + 0x8]         ; 00557503
    LEA EAX,[ESP + 0x58]                ; 00557506
    PUSH EAX                            ; 0055750a
    MOV EAX,dword ptr [ESI]             ; 0055750b | DAT_01b4d738
    ADD EAX,0x90                        ; 0055750d
    PUSH EAX                            ; 00557512
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00557513
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EAX,[0x005ae704]                ; 00557518 | DAT_005ae704
    MOV EDX,dword ptr [EAX]             ; 0055751d | DAT_01b4d738
    MOV dword ptr [EDX + 0x20],0xffff   ; 0055751f
    MOV EDX,dword ptr [EAX]             ; 00557526 | DAT_01b4d738
    MOV dword ptr [EDX + 0x24],0x0      ; 00557528
    MOV EBX,dword ptr [EAX]             ; 0055752f | DAT_01b4d738
    MOV dword ptr [EBX + 0x28],0x0      ; 00557531
    MOV EBX,dword ptr [EAX]             ; 00557538 | DAT_01b4d738
    MOV dword ptr [EBX + 0x50],0xffff   ; 0055753a
    MOV EDX,dword ptr [EAX]             ; 00557541 | DAT_01b4d738
    MOV dword ptr [EDX + 0x54],0x0      ; 00557543
    MOV EDX,dword ptr [EAX]             ; 0055754a | DAT_01b4d738
    MOV dword ptr [EDX + 0x58],0x0      ; 0055754c
    MOV EBX,dword ptr [EAX]             ; 00557553 | DAT_01b4d738
    MOV dword ptr [EBX + 0x80],0xffff   ; 00557555
    MOV EBX,dword ptr [EAX]             ; 0055755f | DAT_01b4d738
    MOV dword ptr [EBX + 0x84],0x0      ; 00557561
    MOV EBX,dword ptr [EAX]             ; 0055756b | DAT_01b4d738
    MOV dword ptr [EBX + 0x88],0x0      ; 0055756d
    MOV EDX,dword ptr [EAX]             ; 00557577 | DAT_01b4d738
    MOV dword ptr [EDX + 0xb0],0xffff   ; 00557579
    MOV EDX,dword ptr [EAX]             ; 00557583 | DAT_01b4d738
    MOV dword ptr [EDX + 0xb4],0x0      ; 00557585
    MOV EDX,dword ptr [EAX]             ; 0055758f | DAT_01b4d738
    MOV dword ptr [EDX + 0xb8],0x0      ; 00557591
    MOV EBX,dword ptr [EAX]             ; 0055759b | DAT_01b4d738
    MOV dword ptr [EBX + 0x2c],0x4000   ; 0055759d
    MOV EBX,dword ptr [EAX]             ; 005575a4 | DAT_01b4d738
    MOV dword ptr [EBX + 0x5c],0x4000   ; 005575a6
    MOV EDX,dword ptr [EAX]             ; 005575ad | DAT_01b4d738
    MOV dword ptr [EDX + 0x8c],0x4000   ; 005575af
    MOV EDX,dword ptr [EAX]             ; 005575b9 | DAT_01b4d738
    MOV dword ptr [EDX + 0xbc],0x4000   ; 005575bb
    MOV EDX,dword ptr [EAX]             ; 005575c5 | DAT_01b4d738
    MOV dword ptr [EDX + 0x18],0x80000  ; 005575c7
    MOV EBX,dword ptr [EAX]             ; 005575ce | DAT_01b4d738
    MOV dword ptr [EBX + 0x1c],0xf80000 ; 005575d0
    MOV EBX,dword ptr [EAX]             ; 005575d7 | DAT_01b4d738
    ADD ESP,0x8                         ; 005575d9
    MOV dword ptr [EBX + 0x48],0xf80000 ; 005575dc
    MOV EBX,dword ptr [EAX]             ; 005575e3 | DAT_01b4d738
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 005575e5
    MOV EBX,dword ptr [EAX]             ; 005575ec | DAT_01b4d738
    MOV dword ptr [EBX + 0x78],0xf80000 ; 005575ee
    MOV EBX,dword ptr [EAX]             ; 005575f5 | DAT_01b4d738
    MOV dword ptr [EBX + 0x7c],0x80000  ; 005575f7
    MOV EBX,dword ptr [EAX]             ; 005575fe | DAT_01b4d738
    MOV EDX,0x4                         ; 00557600
    MOV dword ptr [EBX + 0xa8],0x80000  ; 00557605
    PUSH 0x5c1618                       ; 0055760f | DAT_005c1618
    MOV EBX,dword ptr [EAX]             ; 00557614 | DAT_01b4d738
    XOR ECX,ECX                         ; 00557616
    PUSH EAX                            ; 00557618 | DAT_01b4d738
    MOV dword ptr [EBX + 0xac],0x80000  ; 00557619
    MOV EBX,0x3                         ; 00557623
    MOV dword ptr [ESP + 0xc],EDX       ; 00557628
    MOV dword ptr [ESP + 0x1c],ECX      ; 0055762c
    MOV dword ptr [ESP + 0x18],ECX      ; 00557630
    MOV dword ptr [ESP + 0x14],ECX      ; 00557634
    MOV dword ptr [ESP + 0x10],ECX      ; 00557638
    MOV dword ptr [ESP + 0x20],ECX      ; 0055763c
    MOV EDX,0x1                         ; 00557640
    MOV ECX,0x2                         ; 00557645
    MOV dword ptr [ESP + 0x2c],EBX      ; 0055764a
    MOV dword ptr [ESP + 0x24],EDX      ; 0055764e
    MOV dword ptr [ESP + 0x28],ECX      ; 00557652
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00557656
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    ADD ESP,0x8                         ; 0055765b
    PUSH 0x1                            ; 0055765e
    MOV ESI,dword ptr [0x005ae704]      ; 00557660 | DAT_005ae704
    PUSH ESI                            ; 00557666 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00557667
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000()
    ADD ESP,0x8                         ; 0055766c
    MOV EAX,ESP                         ; 0055766f
    PUSH EAX                            ; 00557671
    MOV EDI,dword ptr [0x005ae704]      ; 00557672 | DAT_005ae704
    PUSH EDI                            ; 00557678 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080 ; 00557679
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080()
    ADD ESP,0x8                         ; 0055767e
    XOR EBP,EBP                         ; 00557681
    PUSH EBP                            ; 00557683
    MOV EBP,dword ptr [0x005ae704]      ; 00557684 | DAT_005ae704
    PUSH EBP                            ; 0055768a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0055768b
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000()
    ADD ESP,0x8                         ; 00557690
    ADD ESP,0x10c                       ; 00557693
    POP EBP                             ; 00557699
    POP EDI                             ; 0055769a
    POP ESI                             ; 0055769b
    POP EBX                             ; 0055769c
    RET                                 ; 0055769d


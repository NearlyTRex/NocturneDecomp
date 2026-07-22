; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)
;
; Local Variables:
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
; XREF[2]:
;   FUN_004c71a0 at 004c7473
;   core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0 at 0050b02c
;
; Referenced Globals:
;   double DOUBLE_0057b9e3 = 256
;   undefined4 DAT_0059bddc
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039bc
;   undefined4 DAT_01c039c0
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01c039f4
;   undefined4 DAT_01c039f8
;   undefined4 DAT_01c039fc
;   undefined4 DAT_01c03a00
;   undefined4 DAT_01c03a04
;   ... and 1 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_matrixPush_FUN_00460be0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445fe0
        ;   Label: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0
    PUSH ESI                            ; 00445fe1
    PUSH EDI                            ; 00445fe2
    PUSH EBP                            ; 00445fe3
    SUB ESP,0x120                       ; 00445fe4
    MOV EBX,dword ptr [ESP + 0x134]     ; 00445fea
    MOV EBP,dword ptr [ESP + 0x138]     ; 00445ff1
    MOV EDI,dword ptr [ESP + 0x140]     ; 00445ff8
    MOV ESI,dword ptr [ESP + 0x144]     ; 00445fff
    MOV EDX,dword ptr [0x005ae704]      ; 00446006 | DAT_005ae704
    PUSH EDX                            ; 0044600c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPush_FUN_00460be0 ; 0044600d
        ;   XREF to: 00460be0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_matrixPush_FUN_00460be0()
    FLD float ptr [EBX + 0x104]         ; 00446012
    FSUB float ptr [EBP]                ; 00446018
    FLD double ptr [0x0057b9e3]         ; 0044601b | DOUBLE_0057b9e3
    FXCH                                ; 00446021
    FMUL ST1                            ; 00446023
    FLD float ptr [EBX + 0x10c]         ; 00446025
    FLD float ptr [EBX + 0x108]         ; 0044602b
    FSUB float ptr [EBP + 0x4]          ; 00446031
    FXCH                                ; 00446034
    FSUB float ptr [EBP + 0x8]          ; 00446036
    FXCH                                ; 00446039
    FMUL ST3                            ; 0044603b
    FXCH                                ; 0044603d
    FMULP ST3                           ; 0044603f
    MOV EAX,dword ptr [EBX + 0x178]     ; 00446041
    ADD ESP,0x4                         ; 00446047
    MOV [0x01c039e8],EAX                ; 0044604a | DAT_01c039e8
    MOV EAX,dword ptr [EBX + 0x17c]     ; 0044604f
    PUSH 0x0                            ; 00446055
    MOV [0x01c039ec],EAX                ; 00446057 | DAT_01c039ec
    MOV EAX,dword ptr [EBX + 0x180]     ; 0044605c
    MOV ECX,dword ptr [ESP + 0x140]     ; 00446062
    MOV [0x01c039f0],EAX                ; 00446069 | DAT_01c039f0
    MOV EAX,dword ptr [EBX + 0x184]     ; 0044606e
    PUSH ECX                            ; 00446074
    MOV [0x01c039f4],EAX                ; 00446075 | DAT_01c039f4
    MOV EAX,dword ptr [EBX + 0x188]     ; 0044607a
    FXCH                                ; 00446080
    CALL crt_math.c_round_FUN_00563a30  ; 00446082
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    MOV [0x01c039f8],EAX                ; 00446087 | DAT_01c039f8
    MOV EAX,dword ptr [EBX + 0x18c]     ; 0044608c
    FXCH                                ; 00446092
    CALL crt_math.c_round_FUN_00563a30  ; 00446094
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    MOV [0x01c039fc],EAX                ; 00446099 | DAT_01c039fc
    MOV EAX,dword ptr [EBX + 0x190]     ; 0044609e
    FXCH ST2                            ; 004460a4
    CALL crt_math.c_round_FUN_00563a30  ; 004460a6
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    MOV [0x01c03a00],EAX                ; 004460ab | DAT_01c03a00
    MOV EAX,dword ptr [EBX + 0x194]     ; 004460b0
    FXCH                                ; 004460b6
    FISTP dword ptr [0x01c039b8]        ; 004460b8 | DAT_01c039b8
    MOV [0x01c03a04],EAX                ; 004460be | DAT_01c03a04
    MOV EAX,dword ptr [EBX + 0x198]     ; 004460c3
    MOV EBX,dword ptr [0x005ae704]      ; 004460c9 | DAT_005ae704
    FXCH                                ; 004460cf
    FISTP dword ptr [0x01c039bc]        ; 004460d1 | DAT_01c039bc
    PUSH EBX                            ; 004460d7 | DAT_01b4d738
    FISTP dword ptr [0x01c039c0]        ; 004460d8 | DAT_01c039c0
    MOV [0x01c03a08],EAX                ; 004460de | DAT_01c03a08
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004460e3
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 004460e8
    MOV EAX,dword ptr [ESI]             ; 004460eb
    MOV dword ptr [ESP + 0xc4],EAX      ; 004460ed
    MOV EAX,dword ptr [EDI + 0x4]       ; 004460f4
    MOV dword ptr [ESP + 0xc8],EAX      ; 004460f7
    MOV EAX,dword ptr [ESI + 0x8]       ; 004460fe
    MOV dword ptr [ESP + 0xdc],EAX      ; 00446101
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00446108
    MOV dword ptr [ESP + 0x18],EAX      ; 0044610f
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00446113
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044611a
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0044611e
    LEA EBX,[ESP + 0x48]                ; 00446125
    MOV dword ptr [ESP + 0x20],EAX      ; 00446129
    LEA EAX,[ESP + 0x18]                ; 0044612d
    MOV EDX,dword ptr [0x005ae704]      ; 00446131 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00446137
    FMUL float ptr [0x0059bddc]         ; 00446139 | DAT_0059bddc
    FISTP dword ptr [EBX]               ; 0044613f
    FLD float ptr [EAX + 0x4]           ; 00446141
    FMUL float ptr [0x0059bddc]         ; 00446144 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x4]         ; 0044614a
    FLD float ptr [EAX + 0x8]           ; 0044614d
    FMUL float ptr [0x0059bddc]         ; 00446150 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x8]         ; 00446156
    LEA EAX,[ESP + 0x48]                ; 00446159
    PUSH EAX                            ; 0044615d
    MOV EAX,dword ptr [EDX]             ; 0044615e | DAT_01b4d738
    ADD EAX,0xea480                     ; 00446160
    PUSH EAX                            ; 00446165
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00446166
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 0044616b
    MOV EAX,dword ptr [EDI]             ; 0044616e
    MOV dword ptr [ESP + 0xc0],EAX      ; 00446170
    MOV EAX,dword ptr [EDI + 0x4]       ; 00446177
    MOV dword ptr [ESP + 0xcc],EAX      ; 0044617a
    MOV EAX,dword ptr [ESI + 0x8]       ; 00446181
    MOV dword ptr [ESP + 0xd0],EAX      ; 00446184
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0044618b
    MOV dword ptr [ESP + 0x54],EAX      ; 00446192
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00446196
    MOV dword ptr [ESP + 0x58],EAX      ; 0044619d
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004461a1
    MOV EDX,dword ptr [0x005ae704]      ; 004461a8 | DAT_005ae704
    MOV dword ptr [ESP + 0x5c],EAX      ; 004461ae
    LEA EBX,[ESP + 0x60]                ; 004461b2
    LEA EAX,[ESP + 0x54]                ; 004461b6
    FLD float ptr [EAX]                 ; 004461ba
    FMUL float ptr [0x0059bddc]         ; 004461bc | DAT_0059bddc
    FISTP dword ptr [EBX]               ; 004461c2
    FLD float ptr [EAX + 0x4]           ; 004461c4
    FMUL float ptr [0x0059bddc]         ; 004461c7 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x4]         ; 004461cd
    FLD float ptr [EAX + 0x8]           ; 004461d0
    FMUL float ptr [0x0059bddc]         ; 004461d3 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x8]         ; 004461d9
    LEA EAX,[ESP + 0x60]                ; 004461dc
    PUSH EAX                            ; 004461e0
    MOV EAX,dword ptr [EDX]             ; 004461e1 | DAT_01b4d738
    ADD EAX,0xea4b0                     ; 004461e3
    PUSH EAX                            ; 004461e8
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 004461e9
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 004461ee
    MOV EAX,dword ptr [EDI]             ; 004461f1
    MOV dword ptr [ESP + 0xd4],EAX      ; 004461f3
    MOV EAX,dword ptr [EDI + 0x4]       ; 004461fa
    MOV dword ptr [ESP + 0xe4],EAX      ; 004461fd
    MOV EAX,dword ptr [EDI + 0x8]       ; 00446204
    MOV dword ptr [ESP + 0x108],EAX     ; 00446207
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0044620e
    MOV dword ptr [ESP + 0xa8],EAX      ; 00446215
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0044621c
    MOV dword ptr [ESP + 0xac],EAX      ; 00446223
    MOV EAX,dword ptr [ESP + 0x108]     ; 0044622a
    LEA EBX,[ESP + 0x3c]                ; 00446231
    MOV dword ptr [ESP + 0xb0],EAX      ; 00446235
    LEA EAX,[ESP + 0xa8]                ; 0044623c
    MOV EDX,dword ptr [0x005ae704]      ; 00446243 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00446249
    FMUL float ptr [0x0059bddc]         ; 0044624b | DAT_0059bddc
    FISTP dword ptr [EBX]               ; 00446251
    FLD float ptr [EAX + 0x4]           ; 00446253
    FMUL float ptr [0x0059bddc]         ; 00446256 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x4]         ; 0044625c
    FLD float ptr [EAX + 0x8]           ; 0044625f
    FMUL float ptr [0x0059bddc]         ; 00446262 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x8]         ; 00446268
    LEA EAX,[ESP + 0x3c]                ; 0044626b
    PUSH EAX                            ; 0044626f
    MOV EAX,dword ptr [EDX]             ; 00446270 | DAT_01b4d738
    ADD EAX,0xea4e0                     ; 00446272
    PUSH EAX                            ; 00446277
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00446278
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 0044627d
    MOV EAX,dword ptr [ESI]             ; 00446280
    MOV dword ptr [ESP + 0x118],EAX     ; 00446282
    MOV EAX,dword ptr [EDI + 0x4]       ; 00446289
    MOV dword ptr [ESP + 0xd8],EAX      ; 0044628c
    MOV EAX,dword ptr [EDI + 0x8]       ; 00446293
    MOV dword ptr [ESP + 0x11c],EAX     ; 00446296
    MOV EAX,dword ptr [ESP + 0x118]     ; 0044629d
    MOV dword ptr [ESP + 0xc],EAX       ; 004462a4
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004462a8
    MOV dword ptr [ESP + 0x10],EAX      ; 004462af
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004462b3
    LEA EBX,[ESP + 0x24]                ; 004462ba
    MOV dword ptr [ESP + 0x14],EAX      ; 004462be
    LEA EAX,[ESP + 0xc]                 ; 004462c2
    MOV EDX,dword ptr [0x005ae704]      ; 004462c6 | DAT_005ae704
    FLD float ptr [EAX]                 ; 004462cc
    FMUL float ptr [0x0059bddc]         ; 004462ce | DAT_0059bddc
    FISTP dword ptr [EBX]               ; 004462d4
    FLD float ptr [EAX + 0x4]           ; 004462d6
    FMUL float ptr [0x0059bddc]         ; 004462d9 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x4]         ; 004462df
    FLD float ptr [EAX + 0x8]           ; 004462e2
    FMUL float ptr [0x0059bddc]         ; 004462e5 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x8]         ; 004462eb
    LEA EAX,[ESP + 0x24]                ; 004462ee
    PUSH EAX                            ; 004462f2
    MOV EAX,dword ptr [EDX]             ; 004462f3 | DAT_01b4d738
    ADD EAX,0xea510                     ; 004462f5
    PUSH EAX                            ; 004462fa
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 004462fb
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 00446300
    MOV EAX,dword ptr [ESI]             ; 00446303
    MOV dword ptr [ESP + 0xf4],EAX      ; 00446305
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044630c
    MOV dword ptr [ESP + 0xf8],EAX      ; 0044630f
    MOV EAX,dword ptr [ESI + 0x8]       ; 00446316
    MOV dword ptr [ESP + 0xe0],EAX      ; 00446319
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00446320
    MOV dword ptr [ESP + 0x90],EAX      ; 00446327
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0044632e
    MOV dword ptr [ESP + 0x94],EAX      ; 00446335
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0044633c
    MOV EBX,ESP                         ; 00446343
    MOV dword ptr [ESP + 0x98],EAX      ; 00446345
    LEA EAX,[ESP + 0x90]                ; 0044634c
    MOV EDX,dword ptr [0x005ae704]      ; 00446353 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00446359
    FMUL float ptr [0x0059bddc]         ; 0044635b | DAT_0059bddc
    FISTP dword ptr [EBX]               ; 00446361
    FLD float ptr [EAX + 0x4]           ; 00446363
    FMUL float ptr [0x0059bddc]         ; 00446366 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x4]         ; 0044636c
    FLD float ptr [EAX + 0x8]           ; 0044636f
    FMUL float ptr [0x0059bddc]         ; 00446372 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x8]         ; 00446378
    MOV EAX,ESP                         ; 0044637b
    PUSH EAX                            ; 0044637d
    MOV EAX,dword ptr [EDX]             ; 0044637e | DAT_01b4d738
    ADD EAX,0xea540                     ; 00446380
    PUSH EAX                            ; 00446385
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00446386
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 0044638b
    MOV EAX,dword ptr [EDI]             ; 0044638e
    MOV dword ptr [ESP + 0xe8],EAX      ; 00446390
    MOV EAX,dword ptr [ESI + 0x4]       ; 00446397
    MOV dword ptr [ESP + 0xec],EAX      ; 0044639a
    MOV EAX,dword ptr [ESI + 0x8]       ; 004463a1
    MOV dword ptr [ESP + 0xf0],EAX      ; 004463a4
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004463ab
    MOV dword ptr [ESP + 0x9c],EAX      ; 004463b2
    MOV EAX,dword ptr [ESP + 0xec]      ; 004463b9
    MOV dword ptr [ESP + 0xa0],EAX      ; 004463c0
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004463c7
    LEA EBX,[ESP + 0x84]                ; 004463ce
    MOV dword ptr [ESP + 0xa4],EAX      ; 004463d5
    LEA EAX,[ESP + 0x9c]                ; 004463dc
    MOV EDX,dword ptr [0x005ae704]      ; 004463e3 | DAT_005ae704
    FLD float ptr [EAX]                 ; 004463e9
    FMUL float ptr [0x0059bddc]         ; 004463eb | DAT_0059bddc
    FISTP dword ptr [EBX]               ; 004463f1
    FLD float ptr [EAX + 0x4]           ; 004463f3
    FMUL float ptr [0x0059bddc]         ; 004463f6 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x4]         ; 004463fc
    FLD float ptr [EAX + 0x8]           ; 004463ff
    FMUL float ptr [0x0059bddc]         ; 00446402 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x8]         ; 00446408
    LEA EAX,[ESP + 0x84]                ; 0044640b
    PUSH EAX                            ; 00446412
    MOV EAX,dword ptr [EDX]             ; 00446413 | DAT_01b4d738
    ADD EAX,0xea570                     ; 00446415
    PUSH EAX                            ; 0044641a
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 0044641b
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 00446420
    MOV EAX,dword ptr [EDI]             ; 00446423
    MOV dword ptr [ESP + 0x10c],EAX     ; 00446425
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044642c
    MOV dword ptr [ESP + 0x110],EAX     ; 0044642f
    MOV EAX,dword ptr [EDI + 0x8]       ; 00446436
    MOV dword ptr [ESP + 0x114],EAX     ; 00446439
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00446440
    MOV dword ptr [ESP + 0x30],EAX      ; 00446447
    MOV EAX,dword ptr [ESP + 0x110]     ; 0044644b
    MOV dword ptr [ESP + 0x34],EAX      ; 00446452
    MOV EAX,dword ptr [ESP + 0x114]     ; 00446456
    LEA EBX,[ESP + 0xb4]                ; 0044645d
    MOV dword ptr [ESP + 0x38],EAX      ; 00446464
    LEA EAX,[ESP + 0x30]                ; 00446468
    MOV EDX,dword ptr [0x005ae704]      ; 0044646c | DAT_005ae704
    FLD float ptr [EAX]                 ; 00446472
    FMUL float ptr [0x0059bddc]         ; 00446474 | DAT_0059bddc
    FISTP dword ptr [EBX]               ; 0044647a
    FLD float ptr [EAX + 0x4]           ; 0044647c
    FMUL float ptr [0x0059bddc]         ; 0044647f | DAT_0059bddc
    FISTP dword ptr [EBX + 0x4]         ; 00446485
    FLD float ptr [EAX + 0x8]           ; 00446488
    FMUL float ptr [0x0059bddc]         ; 0044648b | DAT_0059bddc
    FISTP dword ptr [EBX + 0x8]         ; 00446491
    LEA EAX,[ESP + 0xb4]                ; 00446494
    PUSH EAX                            ; 0044649b
    MOV EAX,dword ptr [EDX]             ; 0044649c | DAT_01b4d738
    ADD EAX,0xea5a0                     ; 0044649e
    PUSH EAX                            ; 004464a3
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 004464a4
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 004464a9
    MOV EAX,dword ptr [ESI]             ; 004464ac
    MOV dword ptr [ESP + 0xfc],EAX      ; 004464ae
    MOV EAX,dword ptr [ESI + 0x4]       ; 004464b5
    MOV dword ptr [ESP + 0x100],EAX     ; 004464b8
    MOV EAX,dword ptr [EDI + 0x8]       ; 004464bf
    MOV dword ptr [ESP + 0x104],EAX     ; 004464c2
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004464c9
    MOV dword ptr [ESP + 0x6c],EAX      ; 004464d0
    MOV EAX,dword ptr [ESP + 0x100]     ; 004464d4
    MOV dword ptr [ESP + 0x70],EAX      ; 004464db
    MOV EAX,dword ptr [ESP + 0x104]     ; 004464df
    LEA EBX,[ESP + 0x78]                ; 004464e6
    MOV dword ptr [ESP + 0x74],EAX      ; 004464ea
    LEA EAX,[ESP + 0x6c]                ; 004464ee
    MOV EDX,dword ptr [0x005ae704]      ; 004464f2 | DAT_005ae704
    FLD float ptr [EAX]                 ; 004464f8
    FMUL float ptr [0x0059bddc]         ; 004464fa | DAT_0059bddc
    FISTP dword ptr [EBX]               ; 00446500
    FLD float ptr [EAX + 0x4]           ; 00446502
    FMUL float ptr [0x0059bddc]         ; 00446505 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x4]         ; 0044650b
    FLD float ptr [EAX + 0x8]           ; 0044650e
    FMUL float ptr [0x0059bddc]         ; 00446511 | DAT_0059bddc
    FISTP dword ptr [EBX + 0x8]         ; 00446517
    LEA EAX,[ESP + 0x78]                ; 0044651a
    PUSH EAX                            ; 0044651e
    MOV EAX,dword ptr [EDX]             ; 0044651f | DAT_01b4d738
    ADD EAX,0xea5d0                     ; 00446521
    PUSH EAX                            ; 00446526
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 00446527
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EDX,0xffffffff                  ; 0044652c
    MOV EAX,0xea480                     ; 00446531
    ADD ESP,0x8                         ; 00446536
    MOV ECX,dword ptr [0x005ae704]      ; 00446539 | DAT_005ae704
        ;   Label: LAB_00446539
    MOV ECX,dword ptr [ECX]             ; 0044653f | DAT_01b4d738
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10] ; 00446541
    ADD EAX,0x30                        ; 00446545
    AND EDX,ESI                         ; 00446548
    CMP EAX,0xea600                     ; 0044654a
    JNZ 0x00446539                      ; 0044654f
        ;   XREF to: 00446539 (CONDITIONAL_JUMP)  ; LAB_00446539
    MOV EBX,0x1                         ; 00446551
    TEST EDX,0x80000000                 ; 00446556
    JZ 0x00446565                       ; 0044655c
        ;   XREF to: 00446565 (CONDITIONAL_JUMP)  ; LAB_00446565
    TEST DL,0xff                        ; 0044655e
    JZ 0x00446565                       ; 00446561
        ;   XREF to: 00446565 (CONDITIONAL_JUMP)  ; LAB_00446565
    XOR EBX,EBX                         ; 00446563
    MOV EDI,dword ptr [0x005ae704]      ; 00446565 | DAT_005ae704
        ;   Label: LAB_00446565
    PUSH EDI                            ; 0044656b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0044656c
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00446571
    MOV EBP,dword ptr [0x005ae704]      ; 00446574 | DAT_005ae704
    PUSH EBP                            ; 0044657a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0044657b
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00446580
    MOV EAX,EBX                         ; 00446583
    ADD ESP,0x120                       ; 00446585
    POP EBP                             ; 0044658b
    POP EDI                             ; 0044658c
    POP ESI                             ; 0044658d
    POP EBX                             ; 0044658e
    RET                                 ; 0044658f


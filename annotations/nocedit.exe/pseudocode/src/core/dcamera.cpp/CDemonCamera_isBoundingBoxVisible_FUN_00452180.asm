; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180 (CDemonCamera *this_ptr,CVector3f *position,CVector3f *min_corner,CVector3f *max_corner)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   min_corner
; CVector3f *      Stack[0x10]:4   max_corner
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
;   core_lightgun.cpp_CLightGun_FUN_00505c70 at 00505f4c
;   core_set.cpp_CDemonSet_FUN_0056d4a0 at 0056d664
;
; Referenced Globals:
;   double g_CameraFixedPointScale_0061a332 = 256
;   float g_CameraFixedPointScale_0065c63c = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][0]
;   undefined4 g_TransformMatrix[1][1]
;   undefined4 g_TransformMatrix[1][2]
;   undefined4 g_TransformMatrix[2][0]
;   undefined4 g_TransformMatrix[2][1]
;   ... and 1 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_matrixPush_FUN_0050d620
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452180
        ;   Label: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
    PUSH ESI                            ; 00452181
    PUSH EDI                            ; 00452182
    PUSH EBP                            ; 00452183
    SUB ESP,0x120                       ; 00452184
    MOV EBX,dword ptr [ESP + 0x134]     ; 0045218a
    MOV EBP,dword ptr [ESP + 0x138]     ; 00452191
    MOV EDI,dword ptr [ESP + 0x140]     ; 00452198
    MOV ESI,dword ptr [ESP + 0x144]     ; 0045219f
    MOV EDX,dword ptr [0x006703ec]      ; 004521a6 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004521ac | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPush_FUN_0050d620 ; 004521ad
        ;   XREF to: 0048c630 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPush_FUN_0050d620()
    FLD float ptr [EBX + 0x4]           ; 004521b2
    FSUB float ptr [EBP]                ; 004521b5
    FLD double ptr [0x0061a332]         ; 004521b8 | g_CameraFixedPointScale_0061a332
    FXCH                                ; 004521be
    FMUL ST1                            ; 004521c0
    FLD float ptr [EBX + 0xc]           ; 004521c2
    FLD float ptr [EBX + 0x8]           ; 004521c5
    FSUB float ptr [EBP + 0x4]          ; 004521c8
    FXCH                                ; 004521cb
    FSUB float ptr [EBP + 0x8]          ; 004521cd
    FXCH                                ; 004521d0
    FMUL ST3                            ; 004521d2
    FXCH                                ; 004521d4
    FMULP ST3                           ; 004521d6
    MOV EAX,dword ptr [EBX + 0x178]     ; 004521d8
    ADD ESP,0x4                         ; 004521de
    MOV [0x02d052e8],EAX                ; 004521e1 | g_TransformMatrix
    MOV EAX,dword ptr [EBX + 0x17c]     ; 004521e6
    PUSH 0x0                            ; 004521ec
    MOV [0x02d052ec],EAX                ; 004521ee | g_TransformMatrix[0][1]
    MOV EAX,dword ptr [EBX + 0x180]     ; 004521f3
    MOV ECX,dword ptr [ESP + 0x140]     ; 004521f9
    MOV [0x02d052f0],EAX                ; 00452200 | g_TransformMatrix[0][2]
    MOV EAX,dword ptr [EBX + 0x184]     ; 00452205
    PUSH ECX                            ; 0045220b
    MOV [0x02d052f4],EAX                ; 0045220c | g_TransformMatrix[1][0]
    MOV EAX,dword ptr [EBX + 0x188]     ; 00452211
    FXCH                                ; 00452217
    CALL crt_math.c_round_FUN_005fe6b0  ; 00452219
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV [0x02d052f8],EAX                ; 0045221e | g_TransformMatrix[1][1]
    MOV EAX,dword ptr [EBX + 0x18c]     ; 00452223
    FXCH                                ; 00452229
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045222b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV [0x02d052fc],EAX                ; 00452230 | g_TransformMatrix[1][2]
    MOV EAX,dword ptr [EBX + 0x190]     ; 00452235
    FXCH ST2                            ; 0045223b
    CALL crt_math.c_round_FUN_005fe6b0  ; 0045223d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV [0x02d05300],EAX                ; 00452242 | g_TransformMatrix[2][0]
    MOV EAX,dword ptr [EBX + 0x194]     ; 00452247
    FXCH                                ; 0045224d
    FISTP dword ptr [0x02d052b8]        ; 0045224f | g_RelativeX
    MOV [0x02d05304],EAX                ; 00452255 | g_TransformMatrix[2][1]
    MOV EAX,dword ptr [EBX + 0x198]     ; 0045225a
    MOV EBX,dword ptr [0x006703ec]      ; 00452260 | g_CDemonRendererPtr2
    FXCH                                ; 00452266
    FISTP dword ptr [0x02d052bc]        ; 00452268 | g_RelativeY
    PUSH EBX                            ; 0045226e | g_CDemonRendererInstance
    FISTP dword ptr [0x02d052c0]        ; 0045226f | g_RelativeZ
    MOV [0x02d05308],EAX                ; 00452275 | g_TransformMatrix[2][2]
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 0045227a
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0045227f
    MOV EAX,dword ptr [ESI]             ; 00452282
    MOV dword ptr [ESP + 0xc4],EAX      ; 00452284
    MOV EAX,dword ptr [EDI + 0x4]       ; 0045228b
    MOV dword ptr [ESP + 0xc8],EAX      ; 0045228e
    MOV EAX,dword ptr [ESI + 0x8]       ; 00452295
    MOV dword ptr [ESP + 0xdc],EAX      ; 00452298
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0045229f
    MOV dword ptr [ESP + 0x18],EAX      ; 004522a6
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004522aa
    MOV dword ptr [ESP + 0x1c],EAX      ; 004522b1
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004522b5
    LEA EBX,[ESP + 0x48]                ; 004522bc
    MOV dword ptr [ESP + 0x20],EAX      ; 004522c0
    LEA EAX,[ESP + 0x18]                ; 004522c4
    MOV EDX,dword ptr [0x006703ec]      ; 004522c8 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004522ce
    FMUL float ptr [0x0065c63c]         ; 004522d0 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX]               ; 004522d6
    FLD float ptr [EAX + 0x4]           ; 004522d8
    FMUL float ptr [0x0065c63c]         ; 004522db | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x4]         ; 004522e1
    FLD float ptr [EAX + 0x8]           ; 004522e4
    FMUL float ptr [0x0065c63c]         ; 004522e7 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x8]         ; 004522ed
    LEA EAX,[ESP + 0x48]                ; 004522f0
    PUSH EAX                            ; 004522f4
    MOV EAX,dword ptr [EDX]             ; 004522f5 | g_CDemonRendererInstance
    ADD EAX,0xea480                     ; 004522f7
    PUSH EAX                            ; 004522fc
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004522fd
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00452302
    MOV EAX,dword ptr [EDI]             ; 00452305
    MOV dword ptr [ESP + 0xc0],EAX      ; 00452307
    MOV EAX,dword ptr [EDI + 0x4]       ; 0045230e
    MOV dword ptr [ESP + 0xcc],EAX      ; 00452311
    MOV EAX,dword ptr [ESI + 0x8]       ; 00452318
    MOV dword ptr [ESP + 0xd0],EAX      ; 0045231b
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00452322
    MOV dword ptr [ESP + 0x54],EAX      ; 00452329
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0045232d
    MOV dword ptr [ESP + 0x58],EAX      ; 00452334
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00452338
    MOV EDX,dword ptr [0x006703ec]      ; 0045233f | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x5c],EAX      ; 00452345
    LEA EBX,[ESP + 0x60]                ; 00452349
    LEA EAX,[ESP + 0x54]                ; 0045234d
    FLD float ptr [EAX]                 ; 00452351
    FMUL float ptr [0x0065c63c]         ; 00452353 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX]               ; 00452359
    FLD float ptr [EAX + 0x4]           ; 0045235b
    FMUL float ptr [0x0065c63c]         ; 0045235e | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x4]         ; 00452364
    FLD float ptr [EAX + 0x8]           ; 00452367
    FMUL float ptr [0x0065c63c]         ; 0045236a | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x8]         ; 00452370
    LEA EAX,[ESP + 0x60]                ; 00452373
    PUSH EAX                            ; 00452377
    MOV EAX,dword ptr [EDX]             ; 00452378 | g_CDemonRendererInstance
    ADD EAX,0xea4b0                     ; 0045237a
    PUSH EAX                            ; 0045237f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00452380
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00452385
    MOV EAX,dword ptr [EDI]             ; 00452388
    MOV dword ptr [ESP + 0xd4],EAX      ; 0045238a
    MOV EAX,dword ptr [EDI + 0x4]       ; 00452391
    MOV dword ptr [ESP + 0xe4],EAX      ; 00452394
    MOV EAX,dword ptr [EDI + 0x8]       ; 0045239b
    MOV dword ptr [ESP + 0x108],EAX     ; 0045239e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004523a5
    MOV dword ptr [ESP + 0xa8],EAX      ; 004523ac
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004523b3
    MOV dword ptr [ESP + 0xac],EAX      ; 004523ba
    MOV EAX,dword ptr [ESP + 0x108]     ; 004523c1
    LEA EBX,[ESP + 0x3c]                ; 004523c8
    MOV dword ptr [ESP + 0xb0],EAX      ; 004523cc
    LEA EAX,[ESP + 0xa8]                ; 004523d3
    MOV EDX,dword ptr [0x006703ec]      ; 004523da | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004523e0
    FMUL float ptr [0x0065c63c]         ; 004523e2 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX]               ; 004523e8
    FLD float ptr [EAX + 0x4]           ; 004523ea
    FMUL float ptr [0x0065c63c]         ; 004523ed | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x4]         ; 004523f3
    FLD float ptr [EAX + 0x8]           ; 004523f6
    FMUL float ptr [0x0065c63c]         ; 004523f9 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x8]         ; 004523ff
    LEA EAX,[ESP + 0x3c]                ; 00452402
    PUSH EAX                            ; 00452406
    MOV EAX,dword ptr [EDX]             ; 00452407 | g_CDemonRendererInstance
    ADD EAX,0xea4e0                     ; 00452409
    PUSH EAX                            ; 0045240e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0045240f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00452414
    MOV EAX,dword ptr [ESI]             ; 00452417
    MOV dword ptr [ESP + 0x118],EAX     ; 00452419
    MOV EAX,dword ptr [EDI + 0x4]       ; 00452420
    MOV dword ptr [ESP + 0xd8],EAX      ; 00452423
    MOV EAX,dword ptr [EDI + 0x8]       ; 0045242a
    MOV dword ptr [ESP + 0x11c],EAX     ; 0045242d
    MOV EAX,dword ptr [ESP + 0x118]     ; 00452434
    MOV dword ptr [ESP + 0xc],EAX       ; 0045243b
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0045243f
    MOV dword ptr [ESP + 0x10],EAX      ; 00452446
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0045244a
    LEA EBX,[ESP + 0x24]                ; 00452451
    MOV dword ptr [ESP + 0x14],EAX      ; 00452455
    LEA EAX,[ESP + 0xc]                 ; 00452459
    MOV EDX,dword ptr [0x006703ec]      ; 0045245d | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00452463
    FMUL float ptr [0x0065c63c]         ; 00452465 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX]               ; 0045246b
    FLD float ptr [EAX + 0x4]           ; 0045246d
    FMUL float ptr [0x0065c63c]         ; 00452470 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x4]         ; 00452476
    FLD float ptr [EAX + 0x8]           ; 00452479
    FMUL float ptr [0x0065c63c]         ; 0045247c | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x8]         ; 00452482
    LEA EAX,[ESP + 0x24]                ; 00452485
    PUSH EAX                            ; 00452489
    MOV EAX,dword ptr [EDX]             ; 0045248a | g_CDemonRendererInstance
    ADD EAX,0xea510                     ; 0045248c
    PUSH EAX                            ; 00452491
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00452492
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00452497
    MOV EAX,dword ptr [ESI]             ; 0045249a
    MOV dword ptr [ESP + 0xf4],EAX      ; 0045249c
    MOV EAX,dword ptr [ESI + 0x4]       ; 004524a3
    MOV dword ptr [ESP + 0xf8],EAX      ; 004524a6
    MOV EAX,dword ptr [ESI + 0x8]       ; 004524ad
    MOV dword ptr [ESP + 0xe0],EAX      ; 004524b0
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004524b7
    MOV dword ptr [ESP + 0x90],EAX      ; 004524be
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004524c5
    MOV dword ptr [ESP + 0x94],EAX      ; 004524cc
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004524d3
    MOV EBX,ESP                         ; 004524da
    MOV dword ptr [ESP + 0x98],EAX      ; 004524dc
    LEA EAX,[ESP + 0x90]                ; 004524e3
    MOV EDX,dword ptr [0x006703ec]      ; 004524ea | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004524f0
    FMUL float ptr [0x0065c63c]         ; 004524f2 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX]               ; 004524f8
    FLD float ptr [EAX + 0x4]           ; 004524fa
    FMUL float ptr [0x0065c63c]         ; 004524fd | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x4]         ; 00452503
    FLD float ptr [EAX + 0x8]           ; 00452506
    FMUL float ptr [0x0065c63c]         ; 00452509 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x8]         ; 0045250f
    MOV EAX,ESP                         ; 00452512
    PUSH EAX                            ; 00452514
    MOV EAX,dword ptr [EDX]             ; 00452515 | g_CDemonRendererInstance
    ADD EAX,0xea540                     ; 00452517
    PUSH EAX                            ; 0045251c
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0045251d
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00452522
    MOV EAX,dword ptr [EDI]             ; 00452525
    MOV dword ptr [ESP + 0xe8],EAX      ; 00452527
    MOV EAX,dword ptr [ESI + 0x4]       ; 0045252e
    MOV dword ptr [ESP + 0xec],EAX      ; 00452531
    MOV EAX,dword ptr [ESI + 0x8]       ; 00452538
    MOV dword ptr [ESP + 0xf0],EAX      ; 0045253b
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00452542
    MOV dword ptr [ESP + 0x9c],EAX      ; 00452549
    MOV EAX,dword ptr [ESP + 0xec]      ; 00452550
    MOV dword ptr [ESP + 0xa0],EAX      ; 00452557
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0045255e
    LEA EBX,[ESP + 0x84]                ; 00452565
    MOV dword ptr [ESP + 0xa4],EAX      ; 0045256c
    LEA EAX,[ESP + 0x9c]                ; 00452573
    MOV EDX,dword ptr [0x006703ec]      ; 0045257a | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00452580
    FMUL float ptr [0x0065c63c]         ; 00452582 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX]               ; 00452588
    FLD float ptr [EAX + 0x4]           ; 0045258a
    FMUL float ptr [0x0065c63c]         ; 0045258d | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x4]         ; 00452593
    FLD float ptr [EAX + 0x8]           ; 00452596
    FMUL float ptr [0x0065c63c]         ; 00452599 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x8]         ; 0045259f
    LEA EAX,[ESP + 0x84]                ; 004525a2
    PUSH EAX                            ; 004525a9
    MOV EAX,dword ptr [EDX]             ; 004525aa | g_CDemonRendererInstance
    ADD EAX,0xea570                     ; 004525ac
    PUSH EAX                            ; 004525b1
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004525b2
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004525b7
    MOV EAX,dword ptr [EDI]             ; 004525ba
    MOV dword ptr [ESP + 0x10c],EAX     ; 004525bc
    MOV EAX,dword ptr [ESI + 0x4]       ; 004525c3
    MOV dword ptr [ESP + 0x110],EAX     ; 004525c6
    MOV EAX,dword ptr [EDI + 0x8]       ; 004525cd
    MOV dword ptr [ESP + 0x114],EAX     ; 004525d0
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004525d7
    MOV dword ptr [ESP + 0x30],EAX      ; 004525de
    MOV EAX,dword ptr [ESP + 0x110]     ; 004525e2
    MOV dword ptr [ESP + 0x34],EAX      ; 004525e9
    MOV EAX,dword ptr [ESP + 0x114]     ; 004525ed
    LEA EBX,[ESP + 0xb4]                ; 004525f4
    MOV dword ptr [ESP + 0x38],EAX      ; 004525fb
    LEA EAX,[ESP + 0x30]                ; 004525ff
    MOV EDX,dword ptr [0x006703ec]      ; 00452603 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00452609
    FMUL float ptr [0x0065c63c]         ; 0045260b | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX]               ; 00452611
    FLD float ptr [EAX + 0x4]           ; 00452613
    FMUL float ptr [0x0065c63c]         ; 00452616 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x4]         ; 0045261c
    FLD float ptr [EAX + 0x8]           ; 0045261f
    FMUL float ptr [0x0065c63c]         ; 00452622 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x8]         ; 00452628
    LEA EAX,[ESP + 0xb4]                ; 0045262b
    PUSH EAX                            ; 00452632
    MOV EAX,dword ptr [EDX]             ; 00452633 | g_CDemonRendererInstance
    ADD EAX,0xea5a0                     ; 00452635
    PUSH EAX                            ; 0045263a
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0045263b
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00452640
    MOV EAX,dword ptr [ESI]             ; 00452643
    MOV dword ptr [ESP + 0xfc],EAX      ; 00452645
    MOV EAX,dword ptr [ESI + 0x4]       ; 0045264c
    MOV dword ptr [ESP + 0x100],EAX     ; 0045264f
    MOV EAX,dword ptr [EDI + 0x8]       ; 00452656
    MOV dword ptr [ESP + 0x104],EAX     ; 00452659
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00452660
    MOV dword ptr [ESP + 0x6c],EAX      ; 00452667
    MOV EAX,dword ptr [ESP + 0x100]     ; 0045266b
    MOV dword ptr [ESP + 0x70],EAX      ; 00452672
    MOV EAX,dword ptr [ESP + 0x104]     ; 00452676
    LEA EBX,[ESP + 0x78]                ; 0045267d
    MOV dword ptr [ESP + 0x74],EAX      ; 00452681
    LEA EAX,[ESP + 0x6c]                ; 00452685
    MOV EDX,dword ptr [0x006703ec]      ; 00452689 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 0045268f
    FMUL float ptr [0x0065c63c]         ; 00452691 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX]               ; 00452697
    FLD float ptr [EAX + 0x4]           ; 00452699
    FMUL float ptr [0x0065c63c]         ; 0045269c | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x4]         ; 004526a2
    FLD float ptr [EAX + 0x8]           ; 004526a5
    FMUL float ptr [0x0065c63c]         ; 004526a8 | g_CameraFixedPointScale_0065c63c
    FISTP dword ptr [EBX + 0x8]         ; 004526ae
    LEA EAX,[ESP + 0x78]                ; 004526b1
    PUSH EAX                            ; 004526b5
    MOV EAX,dword ptr [EDX]             ; 004526b6 | g_CDemonRendererInstance
    ADD EAX,0xea5d0                     ; 004526b8
    PUSH EAX                            ; 004526bd
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004526be
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0xffffffff                  ; 004526c3
    MOV EAX,0xea480                     ; 004526c8
    ADD ESP,0x8                         ; 004526cd
    MOV ECX,dword ptr [0x006703ec]      ; 004526d0 | g_CDemonRendererPtr2
        ;   Label: LAB_004526d0
    MOV ECX,dword ptr [ECX]             ; 004526d6 | g_CDemonRendererInstance
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10] ; 004526d8
    ADD EAX,0x30                        ; 004526dc
    AND EDX,ESI                         ; 004526df
    CMP EAX,0xea600                     ; 004526e1
    JNZ 0x004526d0                      ; 004526e6
        ;   XREF to: 004526d0 (CONDITIONAL_JUMP)  ; LAB_004526d0
    MOV EBX,0x1                         ; 004526e8
    TEST EDX,0x80000000                 ; 004526ed
    JZ 0x004526fc                       ; 004526f3
        ;   XREF to: 004526fc (CONDITIONAL_JUMP)  ; LAB_004526fc
    TEST DL,0xff                        ; 004526f5
    JZ 0x004526fc                       ; 004526f8
        ;   XREF to: 004526fc (CONDITIONAL_JUMP)  ; LAB_004526fc
    XOR EBX,EBX                         ; 004526fa
    MOV EDI,dword ptr [0x006703ec]      ; 004526fc | g_CDemonRendererPtr2
        ;   Label: LAB_004526fc
    PUSH EDI                            ; 00452702 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 00452703
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()


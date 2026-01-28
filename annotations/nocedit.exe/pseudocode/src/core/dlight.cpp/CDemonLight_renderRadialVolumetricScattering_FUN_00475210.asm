; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dlight_cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined        Stack[-0xe0]:1  local_e0
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
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x58]:4  local_58
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
; Referenced Globals:
;   double DOUBLE_0061f20b = 0.0625
;   float FLOAT_0061f213 = 0.0625
;   double DOUBLE_0061f21b = 3.14159265350000
;   double DOUBLE_0061f223 = 2
;   double DOUBLE_0061f22b = 0.00390625
;   float FLOAT_0061f233 = 0.25
;   double DOUBLE_0061f23b = 1024
;   double DOUBLE_0061f243 = 18
;   float FLOAT_0065c900 = 256
;   SMRGLTextureBasic[20] g_LightTextures
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   undefined4 DAT_00f80000
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475210
        ;   Label: core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210
    PUSH ESI                            ; 00475211
    PUSH EDI                            ; 00475212
    PUSH EBP                            ; 00475213
    MOV EBP,ESP                         ; 00475214
    SUB ESP,0xd4                        ; 00475216
    AND ESP,0xfffffff8                  ; 0047521c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0047521f
    CMP dword ptr [EDI + 0x1cbc],0x0    ; 00475222
    JNZ 0x00475232                      ; 00475229
        ;   XREF to: 00475232 (CONDITIONAL_JUMP)  ; LAB_00475232
    MOV ESP,EBP                         ; 0047522b
    POP EBP                             ; 0047522d
    POP EDI                             ; 0047522e
    POP ESI                             ; 0047522f
    POP EBX                             ; 00475230
    RET                                 ; 00475231
    LEA EAX,[EDI + 0x4]                 ; 00475232
        ;   Label: LAB_00475232
    PUSH EAX                            ; 00475235
    MOV ECX,dword ptr [0x006703ec]      ; 00475236 | g_CDemonRendererPtr2
    PUSH ECX                            ; 0047523c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0047523d
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00475242
    LEA EAX,[ESP + 0x54]                ; 00475245
    PUSH EAX                            ; 00475249
    LEA EAX,[EDI + 0x10]                ; 0047524a
    PUSH EAX                            ; 0047524d
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 0047524e
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00475253
    PUSH 0x0                            ; 00475256
    LEA EAX,[ESP + 0x58]                ; 00475258
    PUSH EAX                            ; 0047525c
    MOV EBX,dword ptr [0x006703ec]      ; 0047525d | g_CDemonRendererPtr2
    PUSH EBX                            ; 00475263 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00475264
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00475269
    PUSH 0x66fed8                       ; 0047526c | g_LightTextures
    MOV ESI,dword ptr [0x006703ec]      ; 00475271 | g_CDemonRendererPtr2
    PUSH ESI                            ; 00475277 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00475278
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0047527d
    PUSH 0x1                            ; 00475280
    MOV EAX,[0x006703ec]                ; 00475282 | g_CDemonRendererPtr2
    PUSH EAX                            ; 00475287 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 00475288
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    MOV EDX,0x1                         ; 0047528d
    ADD ESP,0x8                         ; 00475292
    MOV dword ptr [ESP],EDX             ; 00475295
    FLD float ptr [EDI + 0x38]          ; 00475298
        ;   Label: LAB_00475298
    FDIVR double ptr [0x0061f243]       ; 0047529b | DOUBLE_0061f243
    MOV EAX,dword ptr [ESP]             ; 004752a1
    MOV dword ptr [ESP + 0xcc],EAX      ; 004752a4
    FILD dword ptr [ESP + 0xcc]         ; 004752ab
    FMULP                               ; 004752b2
    FMUL double ptr [0x0061f20b]        ; 004752b4 | DOUBLE_0061f20b
    FST float ptr [ESP + 0x4]           ; 004752ba
    FLD1                                ; 004752be
    FPATAN                              ; 004752c0
    FCOS                                ; 004752c2
    XOR ECX,ECX                         ; 004752c4
    MOV dword ptr [ESP + 0x9c],ECX      ; 004752c6
    FSTP float ptr [ESP + 0xa0]         ; 004752cd
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004752d4
        ;   Label: LAB_004752d4
    MOV dword ptr [ESP + 0xcc],EAX      ; 004752db
    FLD float ptr [0x0061f213]          ; 004752e2 | FLOAT_0061f213
    FILD dword ptr [ESP + 0xcc]         ; 004752e8
    FMUL ST1                            ; 004752ef
    FLD double ptr [0x0061f21b]         ; 004752f1 | DOUBLE_0061f21b
    FXCH                                ; 004752f7
    FMUL ST1                            ; 004752f9
    INC EAX                             ; 004752fb
    FLD double ptr [0x0061f223]         ; 004752fc | DOUBLE_0061f223
    FXCH                                ; 00475302
    FMUL ST1                            ; 00475304
    MOV dword ptr [ESP + 0xcc],EAX      ; 00475306
    FLD ST0                             ; 0047530d
    FSIN                                ; 0047530f
    FILD dword ptr [ESP + 0xcc]         ; 00475311
    FMULP ST5                           ; 00475318
    FXCH ST4                            ; 0047531a
    FMULP ST3                           ; 0047531c
    FXCH ST2                            ; 0047531e
    FMULP                               ; 00475320
    FLD ST0                             ; 00475322
    FSIN                                ; 00475324
    FXCH ST2                            ; 00475326
    FCOS                                ; 00475328
    FXCH                                ; 0047532a
    FCOS                                ; 0047532c
    MOV EAX,dword ptr [EDI + 0x1cc0]    ; 0047532e
    MOV EDX,EAX                         ; 00475334
    SAR EDX,0x1f                        ; 00475336
    SUB EAX,EDX                         ; 00475339
    SAR EAX,0x1                         ; 0047533b
    MOV dword ptr [ESP + 0xcc],EAX      ; 0047533d
    MOV EAX,dword ptr [EDI + 0x1cc4]    ; 00475344
    MOV EDX,EAX                         ; 0047534a
    SAR EDX,0x1f                        ; 0047534c
    SUB EAX,EDX                         ; 0047534f
    SAR EAX,0x1                         ; 00475351
    FLD float ptr [ESP + 0x4]           ; 00475353
    FXCH ST2                            ; 00475357
    FMUL ST2                            ; 00475359
    MOV dword ptr [ESP + 0xd0],EAX      ; 0047535b
    FSTP float ptr [ESP + 0xb0]         ; 00475362
    FILD dword ptr [ESP + 0xd0]         ; 00475369
    FLD ST0                             ; 00475370
    FMUL float ptr [ESP + 0xb0]         ; 00475372
    FSUBP                               ; 00475379
    MOV EBX,dword ptr [EDI + 0x1cc0]    ; 0047537b
    CALL crt_math.c_round_FUN_005fe6b0  ; 00475381
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x88]        ; 00475386
    MOV EAX,dword ptr [ESP + 0x88]      ; 0047538d
    IMUL EAX,EBX                        ; 00475394
    FXCH ST3                            ; 00475397
    FMUL ST1                            ; 00475399
    FSTP float ptr [ESP + 0xac]         ; 0047539b
    FILD dword ptr [ESP + 0xcc]         ; 004753a2
    FLD ST0                             ; 004753a9
    FMUL float ptr [ESP + 0xac]         ; 004753ab
    FXCH ST3                            ; 004753b2
    FMUL ST2                            ; 004753b4
    FXCH ST3                            ; 004753b6
    FADDP                               ; 004753b8
    FXCH ST3                            ; 004753ba
    FMULP                               ; 004753bc
    FXCH ST2                            ; 004753be
    CALL crt_math.c_round_FUN_005fe6b0  ; 004753c0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x90]        ; 004753c5
    ADD EAX,dword ptr [ESP + 0x90]      ; 004753cc
    MOV EDX,dword ptr [EDI + 0x2f94]    ; 004753d3
    ADD EAX,EAX                         ; 004753d9
    ADD EDX,EAX                         ; 004753db
    XOR EAX,EAX                         ; 004753dd
    MOV AX,word ptr [EDX]               ; 004753df
    MOV dword ptr [ESP + 0xd0],EAX      ; 004753e2
    FILD dword ptr [ESP + 0xd0]         ; 004753e9
    FMUL double ptr [0x0061f22b]        ; 004753f0 | DOUBLE_0061f22b
    FXCH                                ; 004753f6
    FSTP float ptr [ESP + 0xa4]         ; 004753f8
    FXCH                                ; 004753ff
    FSTP float ptr [ESP + 0xa8]         ; 00475401
    FSTP float ptr [ESP + 0xc0]         ; 00475408
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0047540f
    XOR ESI,ESI                         ; 00475416
    MOV dword ptr [ESP + 0xbc],EAX      ; 00475418
    MOV EAX,dword ptr [EDI + 0x140]     ; 0047541f
        ;   Label: LAB_0047541f
    FLD float ptr [ESP + 0xa0]          ; 00475425
    MOV dword ptr [ESP + 0x98],EAX      ; 0047542c
    MOV dword ptr [ESP + 0xd0],ESI      ; 00475433
    FMUL float ptr [ESP + 0x98]         ; 0047543a
    FILD dword ptr [ESP + 0xd0]         ; 00475441
    FMUL ST1                            ; 00475448
    FLD float ptr [0x0061f233]          ; 0047544a | FLOAT_0061f233
    FXCH                                ; 00475450
    FMUL ST1                            ; 00475452
    FLD float ptr [ESP + 0x98]          ; 00475454
    FXCH                                ; 0047545b
    FSTP float ptr [ESP + 0xc8]         ; 0047545d
    FSUB float ptr [ESP + 0xc8]         ; 00475464
    FLD1                                ; 0047546b
    FDIV float ptr [ESP + 0x98]         ; 0047546d
    LEA EAX,[ESI + 0x1]                 ; 00475474
    MOV dword ptr [ESP + 0xd0],EAX      ; 00475477
    FILD dword ptr [ESP + 0xd0]         ; 0047547e
    FMULP ST4                           ; 00475485
    FXCH ST3                            ; 00475487
    FMULP ST2                           ; 00475489
    FLD float ptr [ESP + 0x98]          ; 0047548b
    FXCH ST2                            ; 00475492
    FSTP float ptr [ESP + 0xc4]         ; 00475494
    FXCH                                ; 0047549b
    FSUB float ptr [ESP + 0xc4]         ; 0047549d
    FXCH                                ; 004754a4
    FMUL ST2                            ; 004754a6
    FXCH                                ; 004754a8
    FMULP ST2                           ; 004754aa
    FLD double ptr [0x0061f23b]         ; 004754ac | DOUBLE_0061f23b
    FXCH                                ; 004754b2
    FMUL ST1                            ; 004754b4
    FXCH ST2                            ; 004754b6
    FMULP                               ; 004754b8
    FLD float ptr [ESP + 0xc8]          ; 004754ba
    FXCH ST2                            ; 004754c1
    CALL crt_math.c_round_FUN_005fe6b0  ; 004754c3
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004754c8
    CALL crt_math.c_round_FUN_005fe6b0  ; 004754ca
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 004754cf
    FISTP dword ptr [ESP + 0xb4]        ; 004754d1
    FISTP dword ptr [ESP + 0xb8]        ; 004754d8
    FCOMP float ptr [ESP + 0xc0]        ; 004754df
    FNSTSW AX                           ; 004754e6
    SAHF                                ; 004754e8
    JNC 0x00475894                      ; 004754e9
        ;   XREF to: 00475894 (CONDITIONAL_JUMP)  ; LAB_00475894
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004754ef
    MOV dword ptr [ESP + 0x50],EAX      ; 004754f6
        ;   Label: LAB_004754f6
    FLD float ptr [ESP + 0x50]          ; 004754fa
    FMUL float ptr [ESP + 0xac]         ; 004754fe
    FLD float ptr [ESP + 0x50]          ; 00475505
    FMUL float ptr [ESP + 0xb0]         ; 00475509
    LEA EBX,[ESP + 0x30]                ; 00475510
    LEA EAX,[ESP + 0x48]                ; 00475514
    MOV EDX,dword ptr [0x006703ec]      ; 00475518 | g_CDemonRendererPtr2
    FXCH                                ; 0047551e
    FSTP float ptr [ESP + 0x48]         ; 00475520
    FSTP float ptr [ESP + 0x4c]         ; 00475524
    FLD float ptr [EAX]                 ; 00475528
    FMUL float ptr [0x0065c900]         ; 0047552a | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00475530
    FLD float ptr [EAX + 0x4]           ; 00475532
    FMUL float ptr [0x0065c900]         ; 00475535 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 0047553b
    FLD float ptr [EAX + 0x8]           ; 0047553e
    FMUL float ptr [0x0065c900]         ; 00475541 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00475547
    LEA EAX,[ESP + 0x30]                ; 0047554a
    PUSH EAX                            ; 0047554e
    MOV EAX,dword ptr [EDX]             ; 0047554f | g_CDemonRendererInstance
    PUSH EAX                            ; 00475551
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00475552
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00475557
    FLD float ptr [ESP + 0xc8]          ; 0047555a
    FCOMP float ptr [ESP + 0xbc]        ; 00475561
    FNSTSW AX                           ; 00475568
    SAHF                                ; 0047556a
    JNC 0x004758a0                      ; 0047556b
        ;   XREF to: 004758a0 (CONDITIONAL_JUMP)  ; LAB_004758a0
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00475571
    MOV dword ptr [ESP + 0x50],EAX      ; 00475578
        ;   Label: LAB_00475578
    FLD float ptr [ESP + 0x50]          ; 0047557c
    FMUL float ptr [ESP + 0xa4]         ; 00475580
    FLD float ptr [ESP + 0x50]          ; 00475587
    FMUL float ptr [ESP + 0xa8]         ; 0047558b
    LEA EBX,[ESP + 0x3c]                ; 00475592
    LEA EAX,[ESP + 0x48]                ; 00475596
    MOV EDX,dword ptr [0x006703ec]      ; 0047559a | g_CDemonRendererPtr2
    FXCH                                ; 004755a0
    FSTP float ptr [ESP + 0x48]         ; 004755a2
    FSTP float ptr [ESP + 0x4c]         ; 004755a6
    FLD float ptr [EAX]                 ; 004755aa
    FMUL float ptr [0x0065c900]         ; 004755ac | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 004755b2
    FLD float ptr [EAX + 0x4]           ; 004755b4
    FMUL float ptr [0x0065c900]         ; 004755b7 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 004755bd
    FLD float ptr [EAX + 0x8]           ; 004755c0
    FMUL float ptr [0x0065c900]         ; 004755c3 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 004755c9
    LEA EAX,[ESP + 0x3c]                ; 004755cc
    PUSH EAX                            ; 004755d0
    MOV EAX,dword ptr [EDX]             ; 004755d1 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004755d3
    PUSH EAX                            ; 004755d6
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004755d7
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004755dc
    FLD float ptr [ESP + 0xc4]          ; 004755df
    FCOMP float ptr [ESP + 0xbc]        ; 004755e6
    FNSTSW AX                           ; 004755ed
    SAHF                                ; 004755ef
    JNC 0x004758ac                      ; 004755f0
        ;   XREF to: 004758ac (CONDITIONAL_JUMP)  ; LAB_004758ac
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004755f6
    MOV dword ptr [ESP + 0x50],EAX      ; 004755fd
        ;   Label: LAB_004755fd
    FLD float ptr [ESP + 0x50]          ; 00475601
    FMUL float ptr [ESP + 0xa4]         ; 00475605
    FLD float ptr [ESP + 0x50]          ; 0047560c
    FMUL float ptr [ESP + 0xa8]         ; 00475610
    LEA EBX,[ESP + 0x6c]                ; 00475617
    LEA EAX,[ESP + 0x48]                ; 0047561b
    MOV EDX,dword ptr [0x006703ec]      ; 0047561f | g_CDemonRendererPtr2
    FXCH                                ; 00475625
    FSTP float ptr [ESP + 0x48]         ; 00475627
    FSTP float ptr [ESP + 0x4c]         ; 0047562b
    FLD float ptr [EAX]                 ; 0047562f
    FMUL float ptr [0x0065c900]         ; 00475631 | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00475637
    FLD float ptr [EAX + 0x4]           ; 00475639
    FMUL float ptr [0x0065c900]         ; 0047563c | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00475642
    FLD float ptr [EAX + 0x8]           ; 00475645
    FMUL float ptr [0x0065c900]         ; 00475648 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 0047564e
    LEA EAX,[ESP + 0x6c]                ; 00475651
    PUSH EAX                            ; 00475655
    MOV EAX,dword ptr [EDX]             ; 00475656 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 00475658
    PUSH EAX                            ; 0047565b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0047565c
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00475661
    FLD float ptr [ESP + 0xc4]          ; 00475664
    FCOMP float ptr [ESP + 0xc0]        ; 0047566b
    FNSTSW AX                           ; 00475672
    SAHF                                ; 00475674
    JNC 0x004758b8                      ; 00475675
        ;   XREF to: 004758b8 (CONDITIONAL_JUMP)  ; LAB_004758b8
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0047567b
    MOV dword ptr [ESP + 0x50],EAX      ; 00475682
        ;   Label: LAB_00475682
    FLD float ptr [ESP + 0x50]          ; 00475686
    FMUL float ptr [ESP + 0xac]         ; 0047568a
    FLD float ptr [ESP + 0x50]          ; 00475691
    FMUL float ptr [ESP + 0xb0]         ; 00475695
    LEA EBX,[ESP + 0x60]                ; 0047569c
    LEA EAX,[ESP + 0x48]                ; 004756a0
    MOV EDX,dword ptr [0x006703ec]      ; 004756a4 | g_CDemonRendererPtr2
    FXCH                                ; 004756aa
    FSTP float ptr [ESP + 0x48]         ; 004756ac
    FSTP float ptr [ESP + 0x4c]         ; 004756b0
    FLD float ptr [EAX]                 ; 004756b4
    FMUL float ptr [0x0065c900]         ; 004756b6 | FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 004756bc
    FLD float ptr [EAX + 0x4]           ; 004756be
    FMUL float ptr [0x0065c900]         ; 004756c1 | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 004756c7
    FLD float ptr [EAX + 0x8]           ; 004756ca
    FMUL float ptr [0x0065c900]         ; 004756cd | FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 004756d3
    LEA EAX,[ESP + 0x60]                ; 004756d6
    PUSH EAX                            ; 004756da
    MOV EAX,dword ptr [EDX]             ; 004756db | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004756dd
    PUSH EAX                            ; 004756e2
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004756e3
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x006703ec]      ; 004756e8 | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 004756ee
    MOV EBX,dword ptr [EDX]             ; 004756f1 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004756f3
    MOV dword ptr [EBX + 0x2c],EAX      ; 004756fa
    MOV EAX,dword ptr [EDX]             ; 004756fd | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x28],0xffff   ; 004756ff
    MOV EAX,dword ptr [EDX]             ; 00475706 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x24],0xffff   ; 00475708
    MOV EAX,dword ptr [EDX]             ; 0047570f | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x20],0xffff   ; 00475711
    MOV EAX,dword ptr [EDX]             ; 00475718 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x18],0xf80000 ; 0047571a | DAT_00f80000
    MOV EAX,dword ptr [EDX]             ; 00475721 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 00475723 | DAT_00f80000
    MOV EBX,dword ptr [EDX]             ; 0047572a | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0047572c
    MOV dword ptr [EBX + 0x5c],EAX      ; 00475733
    MOV EAX,dword ptr [EDX]             ; 00475736 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x58],0xffff   ; 00475738
    MOV EAX,dword ptr [EDX]             ; 0047573f | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x54],0xffff   ; 00475741
    MOV EAX,dword ptr [EDX]             ; 00475748 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x50],0xffff   ; 0047574a
    MOV EAX,dword ptr [EDX]             ; 00475751 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x48],0x80000  ; 00475753
    MOV EAX,dword ptr [EDX]             ; 0047575a | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 0047575c | DAT_00f80000
    MOV EBX,dword ptr [EDX]             ; 00475763 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00475765
    MOV dword ptr [EBX + 0x8c],EAX      ; 0047576c
    MOV EAX,dword ptr [EDX]             ; 00475772 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x88],0xffff   ; 00475774
    MOV EAX,dword ptr [EDX]             ; 0047577e | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x84],0xffff   ; 00475780
    MOV EAX,dword ptr [EDX]             ; 0047578a | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x80],0xffff   ; 0047578c
    MOV EAX,dword ptr [EDX]             ; 00475796 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x78],0x80000  ; 00475798
    MOV EAX,dword ptr [EDX]             ; 0047579f | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x7c],0x80000  ; 004757a1
    MOV EBX,dword ptr [EDX]             ; 004757a8 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004757aa
    MOV dword ptr [EBX + 0xbc],EAX      ; 004757b1
    MOV EAX,dword ptr [EDX]             ; 004757b7 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xb8],0xffff   ; 004757b9
    MOV EAX,dword ptr [EDX]             ; 004757c3 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xb4],0xffff   ; 004757c5
    MOV EAX,dword ptr [EDX]             ; 004757cf | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xb0],0xffff   ; 004757d1
    MOV EAX,dword ptr [EDX]             ; 004757db | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 004757dd | DAT_00f80000
    INC ESI                             ; 004757e7
    MOV EAX,dword ptr [EDX]             ; 004757e8 | g_CDemonRendererInstance
    XOR ECX,ECX                         ; 004757ea
    MOV EBX,0x3                         ; 004757ec
    MOV dword ptr [EAX + 0xac],0x80000  ; 004757f1
    MOV EAX,0x4                         ; 004757fb
    MOV dword ptr [ESP + 0x1c],ECX      ; 00475800
    MOV dword ptr [ESP + 0x18],ECX      ; 00475804
    MOV dword ptr [ESP + 0xc],EAX       ; 00475808
    MOV EAX,0x1                         ; 0047580c
    MOV dword ptr [ESP + 0x14],ECX      ; 00475811
    MOV dword ptr [ESP + 0x24],EAX      ; 00475815
    LEA EAX,[ESP + 0x8]                 ; 00475819
    MOV dword ptr [ESP + 0x10],ECX      ; 0047581d
    PUSH EAX                            ; 00475821
    MOV dword ptr [ESP + 0x24],ECX      ; 00475822
    MOV ECX,0x2                         ; 00475826
    PUSH EDX                            ; 0047582b | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x34],EBX      ; 0047582c
    MOV dword ptr [ESP + 0x30],ECX      ; 00475830
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 00475834
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 00475839
    CMP ESI,0x4                         ; 0047583c
    JL 0x0047541f                       ; 0047583f
        ;   XREF to: 0047541f (CONDITIONAL_JUMP)  ; LAB_0047541f
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00475845
    INC ESI                             ; 0047584c
    MOV dword ptr [ESP + 0x9c],ESI      ; 0047584d
    CMP ESI,0x10                        ; 00475854
    JL 0x004752d4                       ; 00475857
        ;   XREF to: 004752d4 (CONDITIONAL_JUMP)  ; LAB_004752d4
    MOV EDX,dword ptr [ESP]             ; 0047585d
    INC EDX                             ; 00475860
    MOV dword ptr [ESP],EDX             ; 00475861
    CMP EDX,0x10                        ; 00475864
    JL 0x00475298                       ; 00475867
        ;   XREF to: 00475298 (CONDITIONAL_JUMP)  ; LAB_00475298
    MOV EBX,dword ptr [0x006703ec]      ; 0047586d | g_CDemonRendererPtr2
    PUSH EBX                            ; 00475873 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 00475874
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00475894
        ;   Label: LAB_00475894
    JMP 0x004754f6                      ; 0047589b
        ;   XREF to: 004754f6 (UNCONDITIONAL_JUMP)  ; LAB_004754f6
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004758a0
        ;   Label: LAB_004758a0
    JMP 0x00475578                      ; 004758a7
        ;   XREF to: 00475578 (UNCONDITIONAL_JUMP)  ; LAB_00475578
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004758ac
        ;   Label: LAB_004758ac
    JMP 0x004755fd                      ; 004758b3
        ;   XREF to: 004755fd (UNCONDITIONAL_JUMP)  ; LAB_004755fd
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004758b8
        ;   Label: LAB_004758b8
    JMP 0x00475682                      ; 004758bf
        ;   XREF to: 00475682 (UNCONDITIONAL_JUMP)  ; LAB_00475682


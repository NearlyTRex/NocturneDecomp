; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_render_FUN_00488580(CGunFlame *this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xd8]:8  local_d8
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined        Stack[-0xc4]:1  local_c4
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
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x84]:1  local_84
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a8b7
;
; Referenced Globals:
;   double DOUBLE_005813cc = 4
;   double DOUBLE_005813d4 = 0.400000000000000
;   double DOUBLE_005813dc = 2.5
;   double DOUBLE_005813e4 = 2
;   double DOUBLE_005813ec = 5.55366085916692E-315
;   double DOUBLE_005813f4 = 0.00390625
;   double DOUBLE_005813fc = 128
;   float FLOAT_00581404 = 32768
;   float FLOAT_00581408 = 2
;   float FLOAT_0058140c = 255
;   float FLOAT_00581410 = 200
;   float FLOAT_00581414 = 256
;   float FLOAT_00581418 = 150
;   double DOUBLE_0058141c = 5.49408334062176E-315
;   float FLOAT_0059d1f8 = 256
;   ... and 3 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
;   engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488580
        ;   Label: core_fire.cpp_CGunFlame_render_FUN_00488580
    PUSH ESI                            ; 00488581
    PUSH EDI                            ; 00488582
    PUSH EBP                            ; 00488583
    MOV EBP,ESP                         ; 00488584
    SUB ESP,0xc4                        ; 00488586
    AND ESP,0xfffffff8                  ; 0048858c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048858f
    FLD float ptr [ESI]                 ; 00488592
    FLDZ                                ; 00488594
    FCOMPP                              ; 00488596
    FNSTSW AX                           ; 00488598
    SAHF                                ; 0048859a
    JC 0x004885a4                       ; 0048859b
        ;   XREF to: 004885a4 (CONDITIONAL_JUMP)  ; LAB_004885a4
    MOV ESP,EBP                         ; 0048859d
    POP EBP                             ; 0048859f
    POP EDI                             ; 004885a0
    POP ESI                             ; 004885a1
    POP EBX                             ; 004885a2
    RET                                 ; 004885a3
    FLD float ptr [ESI + 0x1c]          ; 004885a4
        ;   Label: LAB_004885a4
    CALL crt_math.c_round_FUN_00563a30  ; 004885a7
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0xb0]        ; 004885ac
    MOV EDX,dword ptr [ESP + 0xb0]      ; 004885b3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004885ba
    SUB EAX,EDX                         ; 004885c1
    SHL EAX,0x3                         ; 004885c3
    ADD EAX,0x1c09c28                   ; 004885c6
    PUSH EAX                            ; 004885cb
    MOV EDX,dword ptr [0x005ae704]      ; 004885cc | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004885d2 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004885d3
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004885d8
    LEA EBX,[ESI + 0x4]                 ; 004885db
    PUSH EBX                            ; 004885de
    MOV ECX,dword ptr [0x005ae704]      ; 004885df | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004885e5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004885e6
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004885eb
    LEA EAX,[ESP + 0x54]                ; 004885ee
    PUSH EAX                            ; 004885f2
    MOV EDI,dword ptr [0x005ae704]      ; 004885f3 | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 004885f9 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0 ; 004885fa
        ;   XREF to: 00460db0 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 004885ff
    PUSH 0x0                            ; 00488602
    LEA EAX,[ESP + 0x58]                ; 00488604
    PUSH EAX                            ; 00488608
    MOV EAX,[0x005ae704]                ; 00488609 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 0048860e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0048860f
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    FLD float ptr [0x0059d214]          ; 00488614 | FLOAT_0059d214
    FLD ST0                             ; 0048861a
    FSUB float ptr [ESI]                ; 0048861c
    FDIVRP                              ; 0048861e
    ADD ESP,0xc                         ; 00488620
    FST float ptr [ESP + 0x10]          ; 00488623
    FST double ptr [ESP]                ; 00488627
    FMUL double ptr [0x005813cc]        ; 0048862a | DOUBLE_005813cc
    FLD double ptr [0x005813d4]         ; 00488630 | DOUBLE_005813d4
    FXCH                                ; 00488636
    FADD ST0,ST1                        ; 00488638
    FSTP float ptr [ESP + 0xc]          ; 0048863a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048863e
    FLD double ptr [ESP]                ; 00488642
    MOV dword ptr [ESP + 0x8],EAX       ; 00488645
    FCOMPP                              ; 00488649
    FNSTSW AX                           ; 0048864b
    SAHF                                ; 0048864d
    JNC 0x004886fc                      ; 0048864e
        ;   XREF to: 004886fc (CONDITIONAL_JUMP)  ; LAB_004886fc
    LEA EAX,[ESP + 0x48]                ; 00488654
    PUSH EAX                            ; 00488658
    MOV EDX,dword ptr [0x005ae704]      ; 00488659 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0048865f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30 ; 00488660
        ;   XREF to: 00460d30 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(CDemonRenderer * this_ptr, CVector3f * output)
    FLD float ptr [EAX]                 ; 00488665
    FSUB float ptr [EBX]                ; 00488667
    ADD ESP,0x8                         ; 00488669
    FSTP float ptr [ESP + 0x3c]         ; 0048866c
    FLD float ptr [EAX + 0x4]           ; 00488670
    FSUB float ptr [EBX + 0x4]          ; 00488673
    FST float ptr [ESP + 0x40]          ; 00488676
    FMUL float ptr [ESP + 0x40]         ; 0048867a
    FLD float ptr [ESP + 0x3c]          ; 0048867e
    FMUL ST0                            ; 00488682
    FLD float ptr [EAX + 0x8]           ; 00488684
    FSUB float ptr [EBX + 0x8]          ; 00488687
    FXCH                                ; 0048868a
    FADDP ST2,ST0                       ; 0048868c
    FST float ptr [ESP + 0x44]          ; 0048868e
    FMUL float ptr [ESP + 0x44]         ; 00488692
    FADDP                               ; 00488696
    FSQRT                               ; 00488698
    LEA EDX,[ESI + 0x10]                ; 0048869a
    FLD float ptr [ESP + 0x40]          ; 0048869d
    FMUL float ptr [EDX + 0x4]          ; 004886a1
    FLD float ptr [ESP + 0x3c]          ; 004886a4
    FMUL float ptr [EDX]                ; 004886a8
    FADDP                               ; 004886aa
    FLD float ptr [ESP + 0x44]          ; 004886ac
    FMUL float ptr [EDX + 0x8]          ; 004886b0
    FADDP                               ; 004886b3
    FABS                                ; 004886b5
    FLD float ptr [EDX + 0x4]           ; 004886b7
    FMUL ST0                            ; 004886ba
    FLD float ptr [EDX]                 ; 004886bc
    FMUL ST0                            ; 004886be
    FADDP                               ; 004886c0
    FLD float ptr [EDX + 0x8]           ; 004886c2
    FMUL ST0                            ; 004886c5
    FADDP                               ; 004886c7
    FSQRT                               ; 004886c9
    FMULP ST2                           ; 004886cb
    FXCH                                ; 004886cd
    FDIVR ST0,ST1                       ; 004886cf
    FLD double ptr [ESP]                ; 004886d1
    FMUL double ptr [0x005813dc]        ; 004886d4 | DOUBLE_005813dc
    FLD1                                ; 004886da
    FLD1                                ; 004886dc
    FSUBRP ST3,ST0                      ; 004886de
    FSUBRP                              ; 004886e0
    FXCH                                ; 004886e2
    FST ST2                             ; 004886e4
    FMULP                               ; 004886e6
    FSTP ST1                            ; 004886e8
    FMUL double ptr [0x005813e4]        ; 004886ea | DOUBLE_005813e4
    FLD1                                ; 004886f0
    FADDP                               ; 004886f2
    FMUL float ptr [ESP + 0xc]          ; 004886f4
    FSTP float ptr [ESP + 0x8]          ; 004886f8
    FLD float ptr [0x005813ec]          ; 004886fc | DOUBLE_005813ec
        ;   Label: LAB_004886fc
    FLD float ptr [ESP + 0xc]           ; 00488702
    FMUL ST1                            ; 00488706
    FLD float ptr [ESP + 0x8]           ; 00488708
    FCHS                                ; 0048870c
    FMULP ST2                           ; 0048870e
    FMUL double ptr [0x005813f4]        ; 00488710 | DOUBLE_005813f4
    FXCH                                ; 00488716
    FMUL double ptr [0x005813f4]        ; 00488718 | DOUBLE_005813f4
    LEA EBX,[ESP + 0x90]                ; 0048871e
    MOV EDX,dword ptr [0x005ae704]      ; 00488725 | g_CDemonRenderer_PTR_005ae704
    XOR ECX,ECX                         ; 0048872b
    FSTP float ptr [ESP + 0xb0]         ; 0048872d
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00488734
    MOV dword ptr [ESP + 0x68],ECX      ; 0048873b
    MOV dword ptr [ESP + 0x60],EAX      ; 0048873f
    LEA EAX,[ESP + 0x60]                ; 00488743
    FSTP float ptr [ESP + 0x64]         ; 00488747
    FLD float ptr [EAX]                 ; 0048874b
    FMUL float ptr [0x0059d1f8]         ; 0048874d | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00488753
    FLD float ptr [EAX + 0x4]           ; 00488755
    FMUL float ptr [0x0059d1f8]         ; 00488758 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 0048875e
    FLD float ptr [EAX + 0x8]           ; 00488761
    FMUL float ptr [0x0059d1f8]         ; 00488764 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048876a
    LEA EAX,[ESP + 0x90]                ; 0048876d
    PUSH EAX                            ; 00488774
    MOV EAX,dword ptr [EDX]             ; 00488775 | DAT_01b4d738
    PUSH EAX                            ; 00488777
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00488778
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048877d
    FLD float ptr [ESP + 0x8]           ; 00488780
    FMUL double ptr [0x005813fc]        ; 00488784 | DOUBLE_005813fc
    FMUL double ptr [0x005813f4]        ; 0048878a | DOUBLE_005813f4
    LEA EBX,[ESP + 0x84]                ; 00488790
    LEA EAX,[ESP + 0x60]                ; 00488797
    MOV EDX,dword ptr [0x005ae704]      ; 0048879b | g_CDemonRenderer_PTR_005ae704
    FSTP float ptr [ESP + 0x60]         ; 004887a1
    FLD float ptr [EAX]                 ; 004887a5
    FMUL float ptr [0x0059d1f8]         ; 004887a7 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 004887ad
    FLD float ptr [EAX + 0x4]           ; 004887af
    FMUL float ptr [0x0059d1f8]         ; 004887b2 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 004887b8
    FLD float ptr [EAX + 0x8]           ; 004887bb
    FMUL float ptr [0x0059d1f8]         ; 004887be | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 004887c4
    LEA EAX,[ESP + 0x84]                ; 004887c7
    PUSH EAX                            ; 004887ce
    MOV EAX,dword ptr [EDX]             ; 004887cf | DAT_01b4d738
    ADD EAX,0x30                        ; 004887d1
    PUSH EAX                            ; 004887d4
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004887d5
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004887da
    FLD float ptr [ESP + 0xc]           ; 004887dd
    FCHS                                ; 004887e1
    FMUL double ptr [0x005813fc]        ; 004887e3 | DOUBLE_005813fc
    FMUL double ptr [0x005813f4]        ; 004887e9 | DOUBLE_005813f4
    LEA EBX,[ESP + 0x78]                ; 004887ef
    LEA EAX,[ESP + 0x60]                ; 004887f3
    MOV EDX,dword ptr [0x005ae704]      ; 004887f7 | g_CDemonRenderer_PTR_005ae704
    FSTP float ptr [ESP + 0x64]         ; 004887fd
    FLD float ptr [EAX]                 ; 00488801
    FMUL float ptr [0x0059d1f8]         ; 00488803 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00488809
    FLD float ptr [EAX + 0x4]           ; 0048880b
    FMUL float ptr [0x0059d1f8]         ; 0048880e | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00488814
    FLD float ptr [EAX + 0x8]           ; 00488817
    FMUL float ptr [0x0059d1f8]         ; 0048881a | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00488820
    LEA EAX,[ESP + 0x78]                ; 00488823
    PUSH EAX                            ; 00488827
    MOV EAX,dword ptr [EDX]             ; 00488828 | DAT_01b4d738
    ADD EAX,0x60                        ; 0048882a
    PUSH EAX                            ; 0048882d
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048882e
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00488833
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00488836
    LEA EBX,[ESP + 0x6c]                ; 0048883d
    MOV dword ptr [ESP + 0x60],EAX      ; 00488841
    LEA EAX,[ESP + 0x60]                ; 00488845
    MOV EDX,dword ptr [0x005ae704]      ; 00488849 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 0048884f
    FMUL float ptr [0x0059d1f8]         ; 00488851 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00488857
    FLD float ptr [EAX + 0x4]           ; 00488859
    FMUL float ptr [0x0059d1f8]         ; 0048885c | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00488862
    FLD float ptr [EAX + 0x8]           ; 00488865
    FMUL float ptr [0x0059d1f8]         ; 00488868 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048886e
    LEA EAX,[ESP + 0x6c]                ; 00488871
    PUSH EAX                            ; 00488875
    MOV EAX,dword ptr [EDX]             ; 00488876 | DAT_01b4d738
    ADD EAX,0x90                        ; 00488878
    PUSH EAX                            ; 0048887d
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048887e
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00488883
    FLD1                                ; 00488886
    FLD float ptr [ESP + 0x10]          ; 00488888
    FLD float ptr [0x00581408]          ; 0048888c | FLOAT_00581408
    FSUB ST0,ST1                        ; 00488892
    FXCH ST2                            ; 00488894
    FSUB ST0,ST1                        ; 00488896
    FXCH ST2                            ; 00488898
    FMULP                               ; 0048889a
    FXCH                                ; 0048889c
    FMUL float ptr [0x00581404]         ; 0048889e | FLOAT_00581404
    FLD ST1                             ; 004888a4
    FMUL float ptr [0x00581410]         ; 004888a6 | FLOAT_00581410
    FLD ST2                             ; 004888ac
    FMUL float ptr [0x00581418]         ; 004888ae | FLOAT_00581418
    MOV EDX,dword ptr [0x005ae704]      ; 004888b4 | g_CDemonRenderer_PTR_005ae704
    FLD ST3                             ; 004888ba
    FMUL float ptr [0x0058141c]         ; 004888bc | DOUBLE_0058141c
    MOV EAX,dword ptr [EDX]             ; 004888c2 | DAT_01b4d738
    FLD1                                ; 004888c4
    MOV dword ptr [EAX + 0x18],0x20000  ; 004888c6
    FSUBRP ST5,ST0                      ; 004888cd
    MOV EAX,dword ptr [EDX]             ; 004888cf | DAT_01b4d738
    FXCH ST4                            ; 004888d1
    FMUL float ptr [0x0058140c]         ; 004888d3 | FLOAT_0058140c
    MOV dword ptr [EAX + 0x1c],0x20000  ; 004888d9
    FXCH ST2                            ; 004888e0
    FADD ST0,ST2                        ; 004888e2
    MOV EAX,dword ptr [EDX]             ; 004888e4 | DAT_01b4d738
    FLD float ptr [0x00581414]          ; 004888e6 | FLOAT_00581414
    FXCH                                ; 004888ec
    FMUL ST1                            ; 004888ee
    MOV dword ptr [EAX + 0x48],0xfe0000 ; 004888f0
    FXCH ST2                            ; 004888f7
    FADD ST0,ST3                        ; 004888f9
    MOV EAX,dword ptr [EDX]             ; 004888fb | DAT_01b4d738
    FMUL ST1                            ; 004888fd
    MOV dword ptr [EAX + 0x4c],0x20000  ; 004888ff
    FXCH ST5                            ; 00488906
    FADDP ST3,ST0                       ; 00488908
    MOV EAX,dword ptr [EDX]             ; 0048890a | DAT_01b4d738
    FMULP ST2                           ; 0048890c
    MOV dword ptr [EAX + 0x78],0xfe0000 ; 0048890e
    MOV EAX,dword ptr [EDX]             ; 00488915 | DAT_01b4d738
    FXCH ST2                            ; 00488917
    CALL crt_math.c_round_FUN_00563a30  ; 00488919
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV dword ptr [EAX + 0x7c],0xfe0000 ; 0048891e
    FXCH ST2                            ; 00488925
    CALL crt_math.c_round_FUN_00563a30  ; 00488927
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EAX,dword ptr [EDX]             ; 0048892c
    FXCH ST3                            ; 0048892e
    CALL crt_math.c_round_FUN_00563a30  ; 00488930
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV dword ptr [EAX + 0xa8],0x20000  ; 00488935
    FXCH                                ; 0048893f
    CALL crt_math.c_round_FUN_00563a30  ; 00488941
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EAX,dword ptr [EDX]             ; 00488946
    FXCH ST3                            ; 00488948
    FISTP dword ptr [ESP + 0xb8]        ; 0048894a
    MOV dword ptr [EAX + 0xac],0xfe0000 ; 00488951
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0048895b
    MOV EBX,dword ptr [EDX]             ; 00488962
    FISTP dword ptr [ESP + 0xb4]        ; 00488964
    MOV dword ptr [EBX + 0x20],EAX      ; 0048896b
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0048896e
    MOV EBX,dword ptr [EDX]             ; 00488975
    FXCH                                ; 00488977
    FISTP dword ptr [ESP + 0xc0]        ; 00488979
    MOV dword ptr [EBX + 0x24],EAX      ; 00488980
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00488983
    MOV EBX,dword ptr [EDX]             ; 0048898a
    FISTP dword ptr [ESP + 0xbc]        ; 0048898c
    MOV dword ptr [EBX + 0x28],EAX      ; 00488993
    MOV EBX,dword ptr [EDX]             ; 00488996
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00488998
    MOV dword ptr [EBX + 0x2c],EAX      ; 0048899f
    MOV EBX,dword ptr [EDX]             ; 004889a2
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004889a4
    MOV dword ptr [EBX + 0x50],EAX      ; 004889ab
    MOV EBX,dword ptr [EDX]             ; 004889ae
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004889b0
    MOV dword ptr [EBX + 0x54],EAX      ; 004889b7
    MOV EBX,dword ptr [EDX]             ; 004889ba
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004889bc
    MOV dword ptr [EBX + 0x58],EAX      ; 004889c3
    MOV EBX,dword ptr [EDX]             ; 004889c6
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004889c8
    MOV dword ptr [EBX + 0x5c],EAX      ; 004889cf
    MOV EBX,dword ptr [EDX]             ; 004889d2
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004889d4
    MOV dword ptr [EBX + 0x80],EAX      ; 004889db
    MOV EBX,dword ptr [EDX]             ; 004889e1
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004889e3
    MOV dword ptr [EBX + 0x84],EAX      ; 004889ea
    MOV EBX,dword ptr [EDX]             ; 004889f0
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004889f2
    MOV dword ptr [EBX + 0x88],EAX      ; 004889f9
    MOV EBX,dword ptr [EDX]             ; 004889ff
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00488a01
    MOV dword ptr [EBX + 0x8c],EAX      ; 00488a08
    MOV EBX,dword ptr [EDX]             ; 00488a0e
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00488a10
    MOV dword ptr [EBX + 0xb0],EAX      ; 00488a17
    MOV EBX,dword ptr [EDX]             ; 00488a1d
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00488a1f
    MOV dword ptr [EBX + 0xb4],EAX      ; 00488a26
    MOV EBX,dword ptr [EDX]             ; 00488a2c
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00488a2e
    MOV dword ptr [EBX + 0xb8],EAX      ; 00488a35
    MOV EDI,0x2                         ; 00488a3b
    MOV EBX,dword ptr [EDX]             ; 00488a40
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00488a42
    XOR ESI,ESI                         ; 00488a49
    MOV dword ptr [EBX + 0xbc],EAX      ; 00488a4b
    MOV EBX,0x4                         ; 00488a51
    MOV dword ptr [ESP + 0x28],ESI      ; 00488a56
    MOV dword ptr [ESP + 0x24],ESI      ; 00488a5a
    MOV dword ptr [ESP + 0x20],ESI      ; 00488a5e
    MOV dword ptr [ESP + 0x1c],ESI      ; 00488a62
    MOV dword ptr [ESP + 0x2c],ESI      ; 00488a66
    MOV ESI,0x1                         ; 00488a6a
    MOV EAX,0x3                         ; 00488a6f
    PUSH ESI                            ; 00488a74
    MOV dword ptr [ESP + 0x38],EDI      ; 00488a75
    MOV dword ptr [ESP + 0x1c],EBX      ; 00488a79
    PUSH EDX                            ; 00488a7d
    MOV dword ptr [ESP + 0x40],EAX      ; 00488a7e
    MOV dword ptr [ESP + 0x38],ESI      ; 00488a82
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00488a86
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00488a8b
    LEA EAX,[ESP + 0x14]                ; 00488a8e
    PUSH EAX                            ; 00488a92
    MOV EDX,dword ptr [0x005ae704]      ; 00488a93 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00488a99 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080 ; 00488a9a
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00488a9f
    XOR EBX,EBX                         ; 00488aa2
    PUSH EBX                            ; 00488aa4
    MOV ECX,dword ptr [0x005ae704]      ; 00488aa5 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00488aab | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00488aac
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00488ab1
    MOV EBX,dword ptr [0x005ae704]      ; 00488ab4 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00488aba | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00488abb
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00488ac0
    MOV ESP,EBP                         ; 00488ac3
    POP EBP                             ; 00488ac5
    POP EDI                             ; 00488ac6
    POP ESI                             ; 00488ac7
    POP EBX                             ; 00488ac8
    RET                                 ; 00488ac9


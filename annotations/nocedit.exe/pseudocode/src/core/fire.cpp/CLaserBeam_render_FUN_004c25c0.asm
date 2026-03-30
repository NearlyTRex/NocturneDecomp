; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam *this_ptr)
;
; Parameters:
; CLaserBeam *     Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x2f4]:4  local_2f4
; float            Stack[-0x2e8]:4  local_2e8
; float            Stack[-0x2e0]:4  local_2e0
; SMRGLHeaderPrimitive Stack[-0x2d8]:24  local_2d8
; int              Stack[-0x2b8]:4  local_2b8
; int              Stack[-0x2b0]:4  local_2b0
; int              Stack[-0x2ac]:4  local_2ac
; int              Stack[-0x2a4]:4  local_2a4
; int              Stack[-0x2a0]:4  local_2a0
; int              Stack[-0x294]:4  local_294
; SMRGLHeaderPrimitive Stack[-0x290]:24  local_290
; SMRGLHeaderPrimitive Stack[-0x248]:24  local_248
; CMatrix3x3f      Stack[-0x220]:36  local_220
; CVector3i        Stack[-0x1f8]:12  local_1f8
; CVector3i        Stack[-0x1ec]:12  local_1ec
; float            Stack[-0x1e0]:4  local_1e0
; float            Stack[-0x1dc]:4  local_1dc
; float            Stack[-0x1d8]:4  local_1d8
; CVector3f        Stack[-0x1d4]:12  local_1d4
; CVector3i        Stack[-0x1c8]:12  local_1c8
; CVector3i        Stack[-0x1bc]:12  local_1bc
; float            Stack[-0x1b0]:4  local_1b0
; float            Stack[-0x1ac]:4  local_1ac
; float            Stack[-0x1a8]:4  local_1a8
; CVector3f        Stack[-0x1a4]:12  local_1a4
; CVector3i        Stack[-0x198]:12  local_198
; float            Stack[-0x18c]:4  local_18c
; float            Stack[-0x188]:4  local_188
; float            Stack[-0x184]:4  local_184
; CVector3i        Stack[-0x180]:12  local_180
; CVector3i        Stack[-0x174]:12  local_174
; CVector3f        Stack[-0x168]:12  local_168
; CVector3f        Stack[-0x15c]:12  local_15c
; CVector3f        Stack[-0x150]:12  local_150
; float            Stack[-0x144]:4  local_144
; float            Stack[-0x140]:4  local_140
; float            Stack[-0x13c]:4  local_13c
; float            Stack[-0x138]:4  local_138
; float            Stack[-0x134]:4  local_134
; float            Stack[-0x130]:4  local_130
; CVector3f        Stack[-0x12c]:12  local_12c
; float            Stack[-0x120]:4  local_120
; float            Stack[-0x11c]:4  local_11c
; float            Stack[-0x118]:4  local_118
; float            Stack[-0x114]:4  local_114
; float            Stack[-0x110]:4  local_110
; float            Stack[-0x10c]:4  local_10c
; CVector3i        Stack[-0x108]:12  local_108
; CVector3f        Stack[-0xfc]:12  local_fc
; CVector3f        Stack[-0xf0]:12  local_f0
; float            Stack[-0xe4]:4  local_e4
; float            Stack[-0xe0]:4  local_e0
; float            Stack[-0xdc]:4  local_dc
; CVector3i        Stack[-0xd8]:12  local_d8
; float            Stack[-0xcc]:4  local_cc
; float            Stack[-0xc8]:4  local_c8
; float            Stack[-0xc4]:4  local_c4
; CVector3i        Stack[-0xc0]:12  local_c0
; float            Stack[-0xb4]:4  local_b4
; float            Stack[-0xb0]:4  local_b0
; float            Stack[-0xac]:4  local_ac
; CVector3i        Stack[-0xa8]:12  local_a8
; CVector3f        Stack[-0x9c]:12  local_9c
; float            Stack[-0x90]:4  local_90
; float            Stack[-0x8c]:4  local_8c
; float            Stack[-0x88]:4  local_88
; int              Stack[-0x74]:4  local_74
; float            Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; uint             Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c72fe
;
; Referenced Globals:
;   double DOUBLE_00629d1b = 18
;   double DOUBLE_00629d23 = 2
;   float FLOAT_00629d2b = 0.04000000
;   double DOUBLE_00629d33 = 8192
;   float FLOAT_00629d3b = 1.677722E+7
;   float FLOAT_00629d3f = 30
;   double DOUBLE_00629d43 = 3.14159265350000
;   double DOUBLE_00629d4b = 32767.5
;   float FLOAT_00629d53 = 0.1000000
;   double DOUBLE_00629d5b = -0.100000000000000
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic g_FireEffectLaserTexture
;   SMRGLTextureBasic g_FireEffectBeamFuzzTexture
;   SMRGLTextureBasic g_FireEffectReticle
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   core_fire.cpp_computeScreenSpaceSize_FUN_004c24d0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
;   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c25c0
        ;   Label: core_fire.cpp_CLaserBeam_render_FUN_004c25c0
    PUSH ESI                            ; 004c25c1
    PUSH EDI                            ; 004c25c2
    PUSH EBP                            ; 004c25c3
    MOV EBP,ESP                         ; 004c25c4
    SUB ESP,0x2fc                       ; 004c25c6
    AND ESP,0xfffffff8                  ; 004c25cc
    PUSH 0x67a80c                       ; 004c25cf | g_FireEffectLaserTexture
    MOV EDX,dword ptr [0x006703ec]      ; 004c25d4 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c25da | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c25db
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c25e0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c25e3
    FLD float ptr [EAX + 0xc]           ; 004c25e6
    FSUB float ptr [EAX]                ; 004c25e9
    FSTP float ptr [ESP + 0x16c]        ; 004c25eb
    FLD float ptr [EAX + 0x10]          ; 004c25f2
    FSUB float ptr [EAX + 0x4]          ; 004c25f5
    FSTP float ptr [ESP + 0x170]        ; 004c25f8
    FLD float ptr [EAX + 0x14]          ; 004c25ff
    FSUB float ptr [EAX + 0x8]          ; 004c2602
    LEA EAX,[ESP + 0x16c]               ; 004c2605
    PUSH EAX                            ; 004c260c
    LEA EAX,[ESP + 0x278]               ; 004c260d
    PUSH EAX                            ; 004c2614
    FSTP float ptr [ESP + 0x17c]        ; 004c2615
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004c261c
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004c2621
    FLD float ptr [ESP + 0x170]         ; 004c2624
    FMUL ST0                            ; 004c262b
    FLD float ptr [ESP + 0x16c]         ; 004c262d
    FMUL ST0                            ; 004c2634
    FADDP                               ; 004c2636
    FLD float ptr [ESP + 0x174]         ; 004c2638
    FMUL ST0                            ; 004c263f
    FADDP                               ; 004c2641
    FSQRT                               ; 004c2643
    LEA EAX,[ESP + 0x274]               ; 004c2645
    PUSH EAX                            ; 004c264c
    LEA EAX,[ESP + 0xf4]                ; 004c264d
    PUSH EAX                            ; 004c2654
    FSTP float ptr [ESP + 0x2c]         ; 004c2655
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 004c2659
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004c265e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2661
    MOV EAX,dword ptr [EAX + 0x18]      ; 004c2664
    MOV dword ptr [ESP + 0x30],EAX      ; 004c2667
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c266b
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004c266e
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c2671
    LEA EAX,[ESP + 0x220]               ; 004c2675
    PUSH EAX                            ; 004c267c
    MOV EBX,dword ptr [0x006703ec]      ; 004c267d | g_CDemonRendererPtr2 | g_CDemonRendererInstance
    XOR ECX,ECX                         ; 004c2683
    PUSH EBX                            ; 004c2685 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x30],ECX      ; 004c2686
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 ; 004c268a
        ;   XREF to: 0048c780 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 004c268f
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c2692
    FLD float ptr [EAX]                 ; 004c2695
    FSUB float ptr [EDX]                ; 004c2697
    FSTP float ptr [ESP + 0x1cc]        ; 004c2699
    FLD float ptr [EAX + 0x4]           ; 004c26a0
    FSUB float ptr [EDX + 0x4]          ; 004c26a3
    FSTP float ptr [ESP + 0x1d0]        ; 004c26a6
    FLD float ptr [EAX + 0x8]           ; 004c26ad
    LEA EAX,[ESP + 0x1f0]               ; 004c26b0
    FSUB float ptr [EDX + 0x8]          ; 004c26b7
    LEA EDX,[ESP + 0x1cc]               ; 004c26ba
    FSTP float ptr [ESP + 0x1d4]        ; 004c26c1
    CMP EAX,EDX                         ; 004c26c8
    JNZ 0x004c3090                      ; 004c26ca
        ;   XREF to: 004c3090 (CONDITIONAL_JUMP)  ; LAB_004c3090
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c26d0
        ;   Label: LAB_004c26d0
    FLD float ptr [EAX + 0xc]           ; 004c26d3
    FSUB float ptr [EAX]                ; 004c26d6
    FSTP float ptr [ESP + 0x184]        ; 004c26d8
    FLD float ptr [EAX + 0x10]          ; 004c26df
    FSUB float ptr [EAX + 0x4]          ; 004c26e2
    LEA EDX,[ESP + 0x130]               ; 004c26e5
    FSTP float ptr [ESP + 0x188]        ; 004c26ec
    FLD float ptr [EAX + 0x14]          ; 004c26f3
    FSUB float ptr [EAX + 0x8]          ; 004c26f6
    LEA EAX,[ESP + 0x184]               ; 004c26f9
    FSTP float ptr [ESP + 0x18c]        ; 004c2700
    CMP EDX,EAX                         ; 004c2707
    JZ 0x004c2735                       ; 004c2709
        ;   XREF to: 004c2735 (CONDITIONAL_JUMP)  ; LAB_004c2735
    MOV EAX,dword ptr [ESP + 0x184]     ; 004c270b
    MOV dword ptr [ESP + 0x130],EAX     ; 004c2712
    MOV EAX,dword ptr [ESP + 0x188]     ; 004c2719
    MOV dword ptr [ESP + 0x134],EAX     ; 004c2720
    MOV EAX,dword ptr [ESP + 0x18c]     ; 004c2727
    MOV dword ptr [ESP + 0x138],EAX     ; 004c272e
    FLD float ptr [ESP + 0x1f4]         ; 004c2735
        ;   Label: LAB_004c2735
    FMUL float ptr [ESP + 0x134]        ; 004c273c
    FLD float ptr [ESP + 0x1f0]         ; 004c2743
    FMUL float ptr [ESP + 0x130]        ; 004c274a
    FADDP                               ; 004c2751
    FLD float ptr [ESP + 0x1f8]         ; 004c2753
    FMUL float ptr [ESP + 0x138]        ; 004c275a
    MOV ESI,0x43e00000                  ; 004c2761
    FADDP                               ; 004c2766
    MOV dword ptr [ESP + 0x2c],ESI      ; 004c2768
    FST float ptr [ESP + 0x20]          ; 004c276c
    FLDZ                                ; 004c2770
    FCOMPP                              ; 004c2772
    FNSTSW AX                           ; 004c2774
    SAHF                                ; 004c2776
    JNC 0x004c281f                      ; 004c2777
        ;   XREF to: 004c281f (CONDITIONAL_JUMP)  ; LAB_004c281f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c277d
    FLDZ                                ; 004c2780
    FLD float ptr [EAX + 0x3c]          ; 004c2782
    FSTP double ptr [ESP]               ; 004c2785
    FCOMP double ptr [ESP]              ; 004c2788
    FNSTSW AX                           ; 004c278b
    SAHF                                ; 004c278d
    JNC 0x004c30bf                      ; 004c278e
        ;   XREF to: 004c30bf (CONDITIONAL_JUMP)  ; LAB_004c30bf
    FLD double ptr [ESP]                ; 004c2794
    FCOS                                ; 004c2797
    FLD float ptr [ESP + 0x1f4]         ; 004c2799
    FMUL ST0                            ; 004c27a0
    FLD float ptr [ESP + 0x1f0]         ; 004c27a2
    FMUL ST0                            ; 004c27a9
    FADDP                               ; 004c27ab
    FLD float ptr [ESP + 0x1f8]         ; 004c27ad
    FMUL ST0                            ; 004c27b4
    FADDP                               ; 004c27b6
    FSQRT                               ; 004c27b8
    FLD float ptr [ESP + 0x134]         ; 004c27ba
    FMUL ST0                            ; 004c27c1
    FLD float ptr [ESP + 0x130]         ; 004c27c3
    FMUL ST0                            ; 004c27ca
    FADDP                               ; 004c27cc
    FLD float ptr [ESP + 0x138]         ; 004c27ce
    FMUL ST0                            ; 004c27d5
    FADDP                               ; 004c27d7
    FSQRT                               ; 004c27d9
    FMULP                               ; 004c27db
    FDIVR float ptr [ESP + 0x20]        ; 004c27dd
    FXCH                                ; 004c27e1
    FSTP float ptr [ESP + 0x18]         ; 004c27e3
    FST float ptr [ESP + 0x2c4]         ; 004c27e7
    FCOMP float ptr [ESP + 0x18]        ; 004c27ee
    FNSTSW AX                           ; 004c27f2
    SAHF                                ; 004c27f4
    JBE 0x004c280e                      ; 004c27f5
        ;   XREF to: 004c280e (CONDITIONAL_JUMP)  ; LAB_004c280e
    FLD float ptr [ESP + 0x18]          ; 004c27f7
    FLD float ptr [ESP + 0x2c4]         ; 004c27fb
    FSUB ST0,ST1                        ; 004c2802
    FLD1                                ; 004c2804
    FSUBRP ST2,ST0                      ; 004c2806
    FDIVRP                              ; 004c2808
    FSTP float ptr [ESP + 0x28]         ; 004c280a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c280e
        ;   Label: LAB_004c280e
    FLD float ptr [EAX + 0x3c]          ; 004c2811
    FPTAN                               ; 004c2814
    FSTP ST0                            ; 004c2816
    FSTP float ptr [ESP + 0x2cc]        ; 004c2818
    PUSH 0x0                            ; 004c281f
        ;   Label: LAB_004c281f
    MOV EAX,[0x006703ec]                ; 004c2821 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c2826 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 004c2827
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004c282c
    FLDZ                                ; 004c282f
    FLD float ptr [ESP + 0x28]          ; 004c2831
    FSTP double ptr [ESP + 0x10]        ; 004c2835
    FCOMP double ptr [ESP + 0x10]       ; 004c2839
    FNSTSW AX                           ; 004c283d
    SAHF                                ; 004c283f
    JNC 0x004c2d69                      ; 004c2840
        ;   XREF to: 004c2d69 (CONDITIONAL_JUMP)  ; LAB_004c2d69
    MOV EAX,[0x0067b654]                ; 004c2846 | g_CGamePtr
    CMP dword ptr [EAX + 0xc],0x0       ; 004c284b | g_CGameInstance.halo_mode
    JZ 0x004c2d69                       ; 004c284f
        ;   XREF to: 004c2d69 (CONDITIONAL_JUMP)  ; LAB_004c2d69
    FLD double ptr [ESP + 0x10]         ; 004c2855
    FMUL double ptr [0x00629d23]        ; 004c2859 | DOUBLE_00629d23
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c285f
    FLD float ptr [ESP + 0x28]          ; 004c2862
    FMUL float ptr [EAX + 0x18]         ; 004c2866
    FLD float ptr [ESP + 0x30]          ; 004c2869
    FLD ST0                             ; 004c286d
    FLD1                                ; 004c286f
    FSUBRP ST4,ST0                      ; 004c2871
    FMUL ST3                            ; 004c2873
    FLD float ptr [ESP + 0x1c]          ; 004c2875
    FMUL ST4                            ; 004c2879
    PUSH 0x1                            ; 004c287b
    MOV ECX,dword ptr [0x006703ec]      ; 004c287d | g_CDemonRendererPtr2
    XOR ESI,ESI                         ; 004c2883
    PUSH ECX                            ; 004c2885 | g_CDemonRendererInstance
    FXCH ST3                            ; 004c2886
    FSTP float ptr [ESP + 0x30]         ; 004c2888
    FSTP ST1                            ; 004c288c
    FXCH ST2                            ; 004c288e
    FSTP ST1                            ; 004c2890
    FXCH                                ; 004c2892
    FSTP float ptr [ESP + 0x38]         ; 004c2894
    FSTP float ptr [ESP + 0x24]         ; 004c2898
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c289c
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c28a1
    MOV EDI,0x80000                     ; 004c28a4
    MOV dword ptr [ESP + 0x2f4],ESI     ; 004c28a9
        ;   Label: LAB_004c28a9
    FILD dword ptr [ESP + 0x2f4]        ; 004c28b0
    FMUL float ptr [0x00629d2b]         ; 004c28b7 | FLOAT_00629d2b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c28bd
    FMUL float ptr [ESP + 0x24]         ; 004c28c0
    FLD float ptr [EAX + 0x3c]          ; 004c28c4
    FLDZ                                ; 004c28c7
    FXCH ST2                            ; 004c28c9
    FSTP float ptr [ESP + 0x34]         ; 004c28cb
    FXCH                                ; 004c28cf
    FCOMPP                              ; 004c28d1
    FNSTSW AX                           ; 004c28d3
    SAHF                                ; 004c28d5
    JNC 0x004c31e3                      ; 004c28d6
        ;   XREF to: 004c31e3 (CONDITIONAL_JUMP)  ; LAB_004c31e3
    FLD float ptr [ESP + 0x2cc]         ; 004c28dc
    FMUL float ptr [ESP + 0x34]         ; 004c28e3
        ;   Label: LAB_004c28e3
    FSTP float ptr [ESP + 0x2e8]        ; 004c28e7
    FLD float ptr [ESP + 0x34]          ; 004c28ee
    FLD float ptr [ESP + 0xf8]          ; 004c28f2
    FMUL ST1                            ; 004c28f9
    FLD float ptr [ESP + 0x104]         ; 004c28fb
    FMUL ST2                            ; 004c2902
    FLD float ptr [ESP + 0x110]         ; 004c2904
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004c290b
    FMULP ST3                           ; 004c2912
    MOV dword ptr [ESP + 0x280],EAX     ; 004c2914
    MOV EAX,dword ptr [ESP + 0x104]     ; 004c291b
    FXCH                                ; 004c2922
    FSTP float ptr [ESP + 0x160]        ; 004c2924
    MOV dword ptr [ESP + 0x284],EAX     ; 004c292b
    MOV EAX,dword ptr [ESP + 0x110]     ; 004c2932
    FSTP float ptr [ESP + 0x164]        ; 004c2939
    MOV dword ptr [ESP + 0x288],EAX     ; 004c2940
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2947
    FSTP float ptr [ESP + 0x168]        ; 004c294a
    FLD float ptr [EAX]                 ; 004c2951
    FADD float ptr [ESP + 0x160]        ; 004c2953
    FSTP float ptr [ESP + 0x1c0]        ; 004c295a
    FLD float ptr [EAX + 0x4]           ; 004c2961
    FADD float ptr [ESP + 0x164]        ; 004c2964
    LEA EDX,[ESP + 0x1a8]               ; 004c296b
    FSTP float ptr [ESP + 0x1c4]        ; 004c2972
    FLD float ptr [EAX + 0x8]           ; 004c2979
    FADD float ptr [ESP + 0x168]        ; 004c297c
    LEA EAX,[ESP + 0x1c0]               ; 004c2983
    FSTP float ptr [ESP + 0x1c8]        ; 004c298a
    CMP EDX,EAX                         ; 004c2991
    JZ 0x004c29bf                       ; 004c2993
        ;   XREF to: 004c29bf (CONDITIONAL_JUMP)  ; LAB_004c29bf
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 004c2995
    MOV dword ptr [ESP + 0x1a8],EAX     ; 004c299c
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 004c29a3
    MOV dword ptr [ESP + 0x1ac],EAX     ; 004c29aa
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 004c29b1
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004c29b8
    LEA EAX,[ESP + 0x1a8]               ; 004c29bf
        ;   Label: LAB_004c29bf
    PUSH EAX                            ; 004c29c6
    MOV EBX,dword ptr [0x006703ec]      ; 004c29c7 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c29cd | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c29ce
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c29d3
    LEA EAX,[ESP + 0x118]               ; 004c29d6
    PUSH EAX                            ; 004c29dd
    MOV EAX,[0x006703ec]                ; 004c29de | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c29e3 | g_CDemonRendererInstance
    LEA EBX,[ESP + 0x198]               ; 004c29e4
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800 ; 004c29eb
        ;   XREF to: 0048c800 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer * this_ptr, float * output)
    LEA EAX,[ESP + 0x120]               ; 004c29f0
    ADD ESP,0x8                         ; 004c29f7
    MOV EDX,dword ptr [0x006703ec]      ; 004c29fa | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x2f4],ESI     ; 004c2a00
    PUSH 0x0                            ; 004c2a07
    FILD dword ptr [ESP + 0x2f8]        ; 004c2a09
    PUSH EAX                            ; 004c2a10
    FADD float ptr [ESP + 0x128]        ; 004c2a11
    PUSH EDX                            ; 004c2a18 | g_CDemonRendererInstance
    FSTP float ptr [ESP + 0x12c]        ; 004c2a19
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c2a20
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c2a25
    MOV EDX,dword ptr [0x006703ec]      ; 004c2a28 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 004c2a2e
    XOR ECX,ECX                         ; 004c2a35
    MOV dword ptr [ESP + 0x22c],EAX     ; 004c2a37
    MOV dword ptr [ESP + 0x230],EAX     ; 004c2a3e
    LEA EAX,[ESP + 0x22c]               ; 004c2a45
    MOV dword ptr [ESP + 0x234],ECX     ; 004c2a4c
    FLD float ptr [EAX]                 ; 004c2a53
    FMUL float ptr [0x0065dca8]         ; 004c2a55 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c2a5b
    FLD float ptr [EAX + 0x4]           ; 004c2a5d
    FMUL float ptr [0x0065dca8]         ; 004c2a60 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c2a66
    FLD float ptr [EAX + 0x8]           ; 004c2a69
    FMUL float ptr [0x0065dca8]         ; 004c2a6c | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c2a72
    LEA EAX,[ESP + 0x190]               ; 004c2a75
    PUSH EAX                            ; 004c2a7c
    MOV EAX,dword ptr [EDX]             ; 004c2a7d | g_CDemonRendererInstance
    PUSH EAX                            ; 004c2a7f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c2a80
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c2a85
    MOV AH,byte ptr [ESP + 0x22f]       ; 004c2a88
    XOR AH,0x80                         ; 004c2a8f
    LEA EBX,[ESP + 0x250]               ; 004c2a92
    MOV byte ptr [ESP + 0x22f],AH       ; 004c2a99
    LEA EAX,[ESP + 0x22c]               ; 004c2aa0
    MOV EDX,dword ptr [0x006703ec]      ; 004c2aa7 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c2aad
    FMUL float ptr [0x0065dca8]         ; 004c2aaf | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c2ab5
    FLD float ptr [EAX + 0x4]           ; 004c2ab7
    FMUL float ptr [0x0065dca8]         ; 004c2aba | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c2ac0
    FLD float ptr [EAX + 0x8]           ; 004c2ac3
    FMUL float ptr [0x0065dca8]         ; 004c2ac6 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c2acc
    LEA EAX,[ESP + 0x250]               ; 004c2acf
    PUSH EAX                            ; 004c2ad6
    MOV EAX,dword ptr [EDX]             ; 004c2ad7 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c2ad9
    PUSH EAX                            ; 004c2adc
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c2add
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c2ae2
    MOV DL,byte ptr [ESP + 0x233]       ; 004c2ae5
    LEA EBX,[ESP + 0x154]               ; 004c2aec
    XOR DL,0x80                         ; 004c2af3
    LEA EAX,[ESP + 0x22c]               ; 004c2af6
    MOV byte ptr [ESP + 0x233],DL       ; 004c2afd
    MOV EDX,dword ptr [0x006703ec]      ; 004c2b04 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c2b0a
    FMUL float ptr [0x0065dca8]         ; 004c2b0c | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c2b12
    FLD float ptr [EAX + 0x4]           ; 004c2b14
    FMUL float ptr [0x0065dca8]         ; 004c2b17 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c2b1d
    FLD float ptr [EAX + 0x8]           ; 004c2b20
    FMUL float ptr [0x0065dca8]         ; 004c2b23 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c2b29
    LEA EAX,[ESP + 0x154]               ; 004c2b2c
    PUSH EAX                            ; 004c2b33
    MOV EAX,dword ptr [EDX]             ; 004c2b34 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004c2b36
    PUSH EAX                            ; 004c2b39
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c2b3a
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c2b3f
    MOV DH,byte ptr [ESP + 0x22f]       ; 004c2b42
    LEA EBX,[ESP + 0x19c]               ; 004c2b49
    XOR DH,0x80                         ; 004c2b50
    LEA EAX,[ESP + 0x22c]               ; 004c2b53
    MOV byte ptr [ESP + 0x22f],DH       ; 004c2b5a
    MOV EDX,dword ptr [0x006703ec]      ; 004c2b61 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c2b67
    FMUL float ptr [0x0065dca8]         ; 004c2b69 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c2b6f
    FLD float ptr [EAX + 0x4]           ; 004c2b71
    FMUL float ptr [0x0065dca8]         ; 004c2b74 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c2b7a
    FLD float ptr [EAX + 0x8]           ; 004c2b7d
    FMUL float ptr [0x0065dca8]         ; 004c2b80 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c2b86
    LEA EAX,[ESP + 0x19c]               ; 004c2b89
    PUSH EAX                            ; 004c2b90
    MOV EAX,dword ptr [EDX]             ; 004c2b91 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004c2b93
    PUSH EAX                            ; 004c2b98
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c2b99
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c2b9e
    PUSH 0x67a854                       ; 004c2ba1 | g_FireEffectHeadliteTexture
    MOV EBX,dword ptr [0x006703ec]      ; 004c2ba6 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c2bac | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c2bad
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c2bb2
    FLD float ptr [ESP + 0x28]          ; 004c2bb5
    FMUL double ptr [0x00629d33]        ; 004c2bb9 | DOUBLE_00629d33
    MOV EAX,0x4                         ; 004c2bbf
    XOR EDX,EDX                         ; 004c2bc4
    MOV dword ptr [ESP + 0xcc],EAX      ; 004c2bc6
    MOV dword ptr [ESP + 0xdc],EDX      ; 004c2bcd
    MOV dword ptr [ESP + 0xd8],EDX      ; 004c2bd4
    MOV dword ptr [ESP + 0xd4],EDX      ; 004c2bdb
    MOV dword ptr [ESP + 0xd0],EDX      ; 004c2be2
    MOV dword ptr [ESP + 0xe0],EDX      ; 004c2be9
    MOV EDX,dword ptr [0x006703ec]      ; 004c2bf0 | g_CDemonRendererPtr2
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c2bf6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EBX,dword ptr [EDX]             ; 004c2bfb | g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0x29c]       ; 004c2bfd
    MOV EAX,dword ptr [ESP + 0x29c]     ; 004c2c04
    MOV dword ptr [EBX + 0x2c],EAX      ; 004c2c0b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2c0e
    MOV EBX,dword ptr [EDX]             ; 004c2c11 | g_CDemonRendererInstance
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004c2c13
    MOV dword ptr [EBX + 0x20],EAX      ; 004c2c16
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2c19
    MOV EBX,dword ptr [EDX]             ; 004c2c1c | g_CDemonRendererInstance
    MOV EAX,dword ptr [EAX + 0x30]      ; 004c2c1e
    MOV dword ptr [EBX + 0x24],EAX      ; 004c2c21
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2c24
    MOV EBX,dword ptr [EDX]             ; 004c2c27 | g_CDemonRendererInstance
    MOV EAX,dword ptr [EAX + 0x34]      ; 004c2c29
    MOV ECX,0x1                         ; 004c2c2c
    MOV dword ptr [EBX + 0x28],EAX      ; 004c2c31
    MOV dword ptr [ESP + 0xe4],ECX      ; 004c2c34
    MOV EBX,dword ptr [EDX]             ; 004c2c3b | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x29c]     ; 004c2c3d
    MOV dword ptr [EBX + 0x5c],EAX      ; 004c2c44
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c2c47
    MOV EAX,dword ptr [EDX]             ; 004c2c4a | g_CDemonRendererInstance
    MOV EBX,dword ptr [EBX + 0x2c]      ; 004c2c4c
    MOV dword ptr [EAX + 0x50],EBX      ; 004c2c4f
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c2c52
    MOV EAX,dword ptr [EDX]             ; 004c2c55 | g_CDemonRendererInstance
    MOV EBX,dword ptr [EBX + 0x30]      ; 004c2c57
    MOV dword ptr [EAX + 0x54],EBX      ; 004c2c5a
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c2c5d
    MOV EAX,dword ptr [EDX]             ; 004c2c60 | g_CDemonRendererInstance
    MOV EBX,dword ptr [EBX + 0x34]      ; 004c2c62
    MOV dword ptr [EAX + 0x58],EBX      ; 004c2c65
    MOV dword ptr [ESP + 0xe8],0x2      ; 004c2c68
    MOV EBX,dword ptr [EDX]             ; 004c2c73 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x29c]     ; 004c2c75
    MOV dword ptr [EBX + 0x8c],EAX      ; 004c2c7c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c2c82
    MOV EAX,dword ptr [EDX]             ; 004c2c85 | g_CDemonRendererInstance
    MOV EBX,dword ptr [EBX + 0x2c]      ; 004c2c87
    MOV dword ptr [EAX + 0x80],EBX      ; 004c2c8a
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c2c90
    MOV EAX,dword ptr [EDX]             ; 004c2c93 | g_CDemonRendererInstance
    MOV EBX,dword ptr [EBX + 0x30]      ; 004c2c95
    MOV dword ptr [EAX + 0x84],EBX      ; 004c2c98
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c2c9e
    MOV EAX,dword ptr [EDX]             ; 004c2ca1 | g_CDemonRendererInstance
    MOV EBX,dword ptr [EBX + 0x34]      ; 004c2ca3
    MOV dword ptr [EAX + 0x88],EBX      ; 004c2ca6
    MOV dword ptr [ESP + 0xec],0x3      ; 004c2cac
    MOV EBX,dword ptr [EDX]             ; 004c2cb7 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x29c]     ; 004c2cb9
    MOV dword ptr [EBX + 0xbc],EAX      ; 004c2cc0
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c2cc6
    MOV EAX,dword ptr [EDX]             ; 004c2cc9 | g_CDemonRendererInstance
    MOV EBX,dword ptr [EBX + 0x2c]      ; 004c2ccb
    MOV dword ptr [EAX + 0xb0],EBX      ; 004c2cce
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c2cd4
    MOV EAX,dword ptr [EDX]             ; 004c2cd7 | g_CDemonRendererInstance
    MOV EBX,dword ptr [EBX + 0x30]      ; 004c2cd9
    MOV dword ptr [EAX + 0xb4],EBX      ; 004c2cdc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c2ce2
    MOV EAX,dword ptr [EDX]             ; 004c2ce5 | g_CDemonRendererInstance
    MOV EBX,dword ptr [EBX + 0x34]      ; 004c2ce7
    MOV dword ptr [EAX + 0xb8],EBX      ; 004c2cea
    MOV EAX,dword ptr [EDX]             ; 004c2cf0 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x18],0xf80000 ; 004c2cf2 | g_LightBufferPool[11][183800]
    MOV EAX,dword ptr [EDX]             ; 004c2cf9 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 004c2cfb | g_LightBufferPool[11][183800]
    MOV EAX,dword ptr [EDX]             ; 004c2d02 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x48],EDI      ; 004c2d04
    MOV EAX,dword ptr [EDX]             ; 004c2d07 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 004c2d09 | g_LightBufferPool[11][183800]
    MOV EAX,dword ptr [EDX]             ; 004c2d10 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x78],EDI      ; 004c2d12
    MOV EAX,dword ptr [EDX]             ; 004c2d15 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x7c],EDI      ; 004c2d17
    MOV EAX,dword ptr [EDX]             ; 004c2d1a | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 004c2d1c | g_LightBufferPool[11][183800]
    MOV EAX,dword ptr [EDX]             ; 004c2d26 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xac],EDI      ; 004c2d28
    LEA EAX,[ESP + 0xc8]                ; 004c2d2e
    PUSH EAX                            ; 004c2d35
    PUSH EDX                            ; 004c2d36 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 004c2d37
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c2d3c
    MOV EDX,dword ptr [0x006703ec]      ; 004c2d3f | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c2d45 | g_CDemonRendererInstance
    INC ESI                             ; 004c2d46
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c2d47
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    FLD float ptr [ESP + 0x30]          ; 004c2d69
        ;   Label: LAB_004c2d69
    FLDZ                                ; 004c2d6d
    FCOMPP                              ; 004c2d6f
    FNSTSW AX                           ; 004c2d71
    SAHF                                ; 004c2d73
    JNC 0x004c3053                      ; 004c2d74
        ;   XREF to: 004c3053 (CONDITIONAL_JUMP)  ; LAB_004c3053
    PUSH 0x67a824                       ; 004c2d7a | g_FireEffectBeamFuzzTexture
    MOV EBX,dword ptr [0x006703ec]      ; 004c2d7f | g_CDemonRendererPtr2 | g_CDemonRendererInstance
    PUSH EBX                            ; 004c2d85 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c2d86
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c2d8b
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c2d8e
    PUSH ESI                            ; 004c2d91
    MOV EDI,dword ptr [0x006703ec]      ; 004c2d92 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c2d98 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c2d99
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c2d9e
    PUSH 0x0                            ; 004c2da1
    LEA EAX,[ESP + 0x278]               ; 004c2da3
    PUSH EAX                            ; 004c2daa
    MOV EAX,[0x006703ec]                ; 004c2dab | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c2db0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c2db1
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    FLDZ                                ; 004c2db6
    FLD float ptr [ESI + 0x3c]          ; 004c2db8
    MOV ECX,0x8                         ; 004c2dbb
    ADD ESP,0xc                         ; 004c2dc0
    MOV EAX,dword ptr [ESI + 0x38]      ; 004c2dc3
    XOR EDX,EDX                         ; 004c2dc6
    FSTP double ptr [ESP + 0x8]         ; 004c2dc8
    MOV dword ptr [ESP + 0x2bc],EAX     ; 004c2dcc
    MOV dword ptr [ESP + 0x2d0],EDX     ; 004c2dd3
    MOV dword ptr [ESP + 0x2ec],ECX     ; 004c2dda
    FCOMP double ptr [ESP + 0x8]        ; 004c2de1
    FNSTSW AX                           ; 004c2de5
    SAHF                                ; 004c2de7
    JNC 0x004c2e15                      ; 004c2de8
        ;   XREF to: 004c2e15 (CONDITIONAL_JUMP)  ; LAB_004c2e15
    FLD double ptr [ESP + 0x8]          ; 004c2dea
    FPTAN                               ; 004c2dee
    FSTP ST0                            ; 004c2df0
    FMUL float ptr [ESP + 0x24]         ; 004c2df2
    MOV EBX,0x1                         ; 004c2df6
    MOV ESI,0x10                        ; 004c2dfb
    MOV dword ptr [ESP + 0x2d0],EBX     ; 004c2e00
    MOV dword ptr [ESP + 0x2ec],ESI     ; 004c2e07
    FSTP float ptr [ESP + 0x2bc]        ; 004c2e0e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c2e15
        ;   Label: LAB_004c2e15
    PUSH dword ptr [EAX + 0x38]         ; 004c2e18
    PUSH 0x0                            ; 004c2e1b
    CALL core_fire.cpp_computeScreenSpaceSize_FUN_004c24d0 ; 004c2e1d
        ;   XREF to: 004c24d0 (UNCONDITIONAL_CALL)  ; float core_fire.cpp_computeScreenSpaceSize_FUN_004c24d0(float depth, float min_size)
    MOV dword ptr [ESP + 0x300],EAX     ; 004c2e22
    FLD float ptr [ESP + 0x300]         ; 004c2e29
    ADD ESP,0x8                         ; 004c2e30
    PUSH dword ptr [ESP + 0x2bc]        ; 004c2e33
    PUSH dword ptr [ESP + 0x28]         ; 004c2e3a
    FSTP float ptr [ESP + 0x2dc]        ; 004c2e3e
    CALL core_fire.cpp_computeScreenSpaceSize_FUN_004c24d0 ; 004c2e45
        ;   XREF to: 004c24d0 (UNCONDITIONAL_CALL)  ; float core_fire.cpp_computeScreenSpaceSize_FUN_004c24d0(float depth, float min_size)
    MOV dword ptr [ESP + 0x300],EAX     ; 004c2e4a
    FLD float ptr [ESP + 0x300]         ; 004c2e51
    ADD ESP,0x8                         ; 004c2e58
    XOR EDI,EDI                         ; 004c2e5b
    FSTP float ptr [ESP + 0x2d8]        ; 004c2e5d
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 004c2e64
    MOV dword ptr [ESP + 0x2f0],EDI     ; 004c2e6b
    TEST EAX,EAX                        ; 004c2e72
    JL 0x004c3044                       ; 004c2e74
        ;   XREF to: 004c3044 (CONDITIONAL_JUMP)  ; LAB_004c3044
    FLD float ptr [ESP + 0x24]          ; 004c2e7a
    FMUL float ptr [0x00629d3b]         ; 004c2e7e | FLOAT_00629d3b
    FDIV float ptr [0x00629d3f]         ; 004c2e84 | FLOAT_00629d3f
    MOV dword ptr [ESP + 0x2e0],0x100   ; 004c2e8a
    FSTP float ptr [ESP + 0x2c8]        ; 004c2e95
    MOV EAX,dword ptr [ESP + 0x2f0]     ; 004c2e9c
        ;   Label: LAB_004c2e9c
    MOV dword ptr [ESP + 0x2f4],EAX     ; 004c2ea3
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 004c2eaa
    MOV dword ptr [ESP + 0x2f8],EAX     ; 004c2eb1
    FILD dword ptr [ESP + 0x2f4]        ; 004c2eb8
    FILD dword ptr [ESP + 0x2f8]        ; 004c2ebf
    FDIVP                               ; 004c2ec6
    FMUL double ptr [0x00629d23]        ; 004c2ec8 | DOUBLE_00629d23
    FMUL double ptr [0x00629d43]        ; 004c2ece | DOUBLE_00629d43
    FLD ST0                             ; 004c2ed4
    FSIN                                ; 004c2ed6
    FXCH                                ; 004c2ed8
    FCOS                                ; 004c2eda
    MOV EDX,dword ptr [0x006703ec]      ; 004c2edc | g_CDemonRendererPtr2
    MOV ESI,dword ptr [EDX]             ; 004c2ee2 | g_CDemonRendererInstance
    JMP 0x03fc55e4                      ; 004c2ee4
        ;   XREF to: 03fc55e4 (UNCONDITIONAL_JUMP)  ; LAB_03fc55e4
    FXCH                                ; 004c2ef1
        ;   Label: LAB_004c2ef1
    FST float ptr [ESP + 0x2a4]         ; 004c2ef3
    FLD float ptr [ESP + 0x2d4]         ; 004c2efa
    FXCH                                ; 004c2f01
    FMUL ST1                            ; 004c2f03
    MOV ESI,dword ptr [EDX]             ; 004c2f05 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 004c2f07
    LEA EDI,[ESI + 0x60]                ; 004c2f0c
    LEA ESI,[ESI + 0x30]                ; 004c2f0f
    FXCH ST2                            ; 004c2f12
    FST float ptr [ESP + 0x2a8]         ; 004c2f14
    FMULP                               ; 004c2f1b
    MOVSD.REP ES:EDI,ESI                ; 004c2f1d
    XOR EAX,EAX                         ; 004c2f1f
    LEA EBX,[ESP + 0x268]               ; 004c2f21
    MOV dword ptr [ESP + 0x24c],EAX     ; 004c2f28
    LEA EAX,[ESP + 0x244]               ; 004c2f2f
    FXCH                                ; 004c2f36
    FSTP float ptr [ESP + 0x248]        ; 004c2f38
    FSTP float ptr [ESP + 0x244]        ; 004c2f3f
    FLD float ptr [EAX]                 ; 004c2f46
    FMUL float ptr [0x0065dca8]         ; 004c2f48 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c2f4e
    FLD float ptr [EAX + 0x4]           ; 004c2f50
    FMUL float ptr [0x0065dca8]         ; 004c2f53 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c2f59
    FLD float ptr [EAX + 0x8]           ; 004c2f5c
    FMUL float ptr [0x0065dca8]         ; 004c2f5f | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c2f65
    LEA EAX,[ESP + 0x268]               ; 004c2f68
    PUSH EAX                            ; 004c2f6f
    MOV EAX,dword ptr [EDX]             ; 004c2f70 | g_CDemonRendererInstance
    PUSH EAX                            ; 004c2f72
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c2f73
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c2f78
    FLD float ptr [ESP + 0x2d8]         ; 004c2f7b
    FLD float ptr [ESP + 0x2a8]         ; 004c2f82
    FMUL ST1                            ; 004c2f89
    FLD float ptr [ESP + 0x2a4]         ; 004c2f8b
    FMULP ST2                           ; 004c2f92
    LEA EBX,[ESP + 0x208]               ; 004c2f94
    LEA EAX,[ESP + 0x244]               ; 004c2f9b
    MOV EDX,dword ptr [0x006703ec]      ; 004c2fa2 | g_CDemonRendererPtr2
    FLD float ptr [ESP + 0x24]          ; 004c2fa8
    FADD double ptr [0x00629d5b]        ; 004c2fac | DOUBLE_00629d5b
    FXCH                                ; 004c2fb2
    FSTP float ptr [ESP + 0x244]        ; 004c2fb4
    FXCH                                ; 004c2fbb
    FSTP float ptr [ESP + 0x248]        ; 004c2fbd
    FSTP float ptr [ESP + 0x24c]        ; 004c2fc4
    FLD float ptr [EAX]                 ; 004c2fcb
    FMUL float ptr [0x0065dca8]         ; 004c2fcd | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c2fd3
    FLD float ptr [EAX + 0x4]           ; 004c2fd5
    FMUL float ptr [0x0065dca8]         ; 004c2fd8 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c2fde
    FLD float ptr [EAX + 0x8]           ; 004c2fe1
    FMUL float ptr [0x0065dca8]         ; 004c2fe4 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c2fea
    LEA EAX,[ESP + 0x208]               ; 004c2fed
    PUSH EAX                            ; 004c2ff4
    MOV EAX,dword ptr [EDX]             ; 004c2ff5 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c2ff7
    PUSH EAX                            ; 004c2ffa
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c2ffb
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c3000
    MOV EDX,dword ptr [ESP + 0x2f0]     ; 004c3003
    TEST EDX,EDX                        ; 004c300a
    JNZ 0x004c31f2                      ; 004c300c
        ;   XREF to: 004c31f2 (CONDITIONAL_JUMP)  ; LAB_004c31f2
    MOV EDX,dword ptr [ESP + 0x2e0]     ; 004c3012
        ;   Label: LAB_004c3012
    MOV ECX,dword ptr [ESP + 0x2f0]     ; 004c3019
    MOV EBX,dword ptr [ESP + 0x2ec]     ; 004c3020
    ADD EDX,0x100                       ; 004c3027
    INC ECX                             ; 004c302d
    MOV dword ptr [ESP + 0x2e0],EDX     ; 004c302e
    MOV dword ptr [ESP + 0x2f0],ECX     ; 004c3035
    CMP ECX,EBX                         ; 004c303c
    JLE 0x004c2e9c                      ; 004c303e
        ;   XREF to: 004c2e9c (CONDITIONAL_JUMP)  ; LAB_004c2e9c
    MOV ESI,dword ptr [0x006703ec]      ; 004c3044 | g_CDemonRendererPtr2
        ;   Label: LAB_004c3044
    PUSH ESI                            ; 004c304a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c304b
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    FLD float ptr [ESP + 0x1c]          ; 004c3053
        ;   Label: LAB_004c3053
    FLDZ                                ; 004c3057
    FCOMPP                              ; 004c3059
    FNSTSW AX                           ; 004c305b
    SAHF                                ; 004c305d
    JC 0x004c3422                       ; 004c305e
        ;   XREF to: 004c3422 (CONDITIONAL_JUMP)  ; LAB_004c3422
    PUSH 0x0                            ; 004c3064
        ;   Label: LAB_004c3064
    MOV ESI,dword ptr [0x006703ec]      ; 004c3066 | g_CDemonRendererPtr2
    PUSH ESI                            ; 004c306c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c306d
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c3072
    PUSH 0xffff                         ; 004c3075
    MOV EDI,dword ptr [0x006703ec]      ; 004c307a | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c3080 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004c3081
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c3086
    MOV ESP,EBP                         ; 004c3089
    POP EBP                             ; 004c308b
    POP EDI                             ; 004c308c
    POP ESI                             ; 004c308d
    POP EBX                             ; 004c308e
    RET                                 ; 004c308f
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 004c3090
        ;   Label: LAB_004c3090
    MOV dword ptr [ESP + 0x1f0],EAX     ; 004c3097
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 004c309e
    MOV dword ptr [ESP + 0x1f4],EAX     ; 004c30a5
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 004c30ac
    MOV dword ptr [ESP + 0x1f8],EAX     ; 004c30b3
    JMP 0x004c26d0                      ; 004c30ba
        ;   XREF to: 004c26d0 (UNCONDITIONAL_JUMP)  ; LAB_004c26d0
    LEA EAX,[ESP + 0x13c]               ; 004c30bf
        ;   Label: LAB_004c30bf
    PUSH EAX                            ; 004c30c6
    MOV EDI,dword ptr [0x006703ec]      ; 004c30c7 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c30cd | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 ; 004c30ce
        ;   XREF to: 0048c780 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 004c30d3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c30d6
    FLD float ptr [ESP + 0x13c]         ; 004c30d9
    FSUB float ptr [EAX]                ; 004c30e0
    FLD float ptr [ESP + 0x140]         ; 004c30e2
    FXCH                                ; 004c30e9
    FSTP float ptr [ESP + 0x13c]        ; 004c30eb
    FSUB float ptr [EAX + 0x4]          ; 004c30f2
    FLD float ptr [ESP + 0x144]         ; 004c30f5
    FXCH                                ; 004c30fc
    FSTP float ptr [ESP + 0x140]        ; 004c30fe
    FSUB float ptr [EAX + 0x8]          ; 004c3105
    LEA EAX,[ESP + 0x13c]               ; 004c3108
    PUSH EAX                            ; 004c310f
    LEA EAX,[ESP + 0x218]               ; 004c3110
    PUSH EAX                            ; 004c3117
    LEA EAX,[ESP + 0xf8]                ; 004c3118
    PUSH EAX                            ; 004c311f
    FSTP float ptr [ESP + 0x150]        ; 004c3120
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 004c3127
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 004c312c
    LEA EAX,[ESP + 0x148]               ; 004c312e
    ADD ESP,0xc                         ; 004c3135
    CMP EAX,EDX                         ; 004c3138
    JZ 0x004c3159                       ; 004c313a
        ;   XREF to: 004c3159 (CONDITIONAL_JUMP)  ; LAB_004c3159
    MOV EAX,dword ptr [EDX]             ; 004c313c
    MOV dword ptr [ESP + 0x13c],EAX     ; 004c313e
    MOV EAX,dword ptr [EDX + 0x4]       ; 004c3145
    MOV dword ptr [ESP + 0x140],EAX     ; 004c3148
    MOV EAX,dword ptr [EDX + 0x8]       ; 004c314f
    MOV dword ptr [ESP + 0x144],EAX     ; 004c3152
    FLD float ptr [ESP + 0x144]         ; 004c3159
        ;   Label: LAB_004c3159
    FMUL double ptr [0x00629d1b]        ; 004c3160 | DOUBLE_00629d1b
    FDIV float ptr [ESP + 0x2c]         ; 004c3166
    FLD float ptr [ESP + 0x140]         ; 004c316a
    FMUL ST0                            ; 004c3171
    FLD float ptr [ESP + 0x13c]         ; 004c3173
    FMUL ST0                            ; 004c317a
    FXCH ST2                            ; 004c317c
    FMUL double ptr [0x00629d23]        ; 004c317e | DOUBLE_00629d23
    FXCH                                ; 004c3184
    FSTP float ptr [ESP + 0x2b0]        ; 004c3186
    FXCH                                ; 004c318d
    FADD float ptr [ESP + 0x2b0]        ; 004c318f
    FXCH                                ; 004c3196
    FST float ptr [ESP + 0x2b8]         ; 004c3198
    FMUL float ptr [ESP + 0x2b8]        ; 004c319f
    FXCH                                ; 004c31a6
    FST float ptr [ESP + 0x2c0]         ; 004c31a8
    FXCH                                ; 004c31af
    FSTP float ptr [ESP + 0x2b4]        ; 004c31b1
    FCOMP float ptr [ESP + 0x2b4]       ; 004c31b8
    FNSTSW AX                           ; 004c31bf
    SAHF                                ; 004c31c1
    JNC 0x004c281f                      ; 004c31c2
        ;   XREF to: 004c281f (CONDITIONAL_JUMP)  ; LAB_004c281f
    FLD float ptr [ESP + 0x2c0]         ; 004c31c8
    FDIV float ptr [ESP + 0x2b4]        ; 004c31cf
    FLD1                                ; 004c31d6
    FSUBRP                              ; 004c31d8
    FSTP float ptr [ESP + 0x28]         ; 004c31da
    JMP 0x004c281f                      ; 004c31de
        ;   XREF to: 004c281f (UNCONDITIONAL_JUMP)  ; LAB_004c281f
    FLD float ptr [ESP + 0x2c]          ; 004c31e3
        ;   Label: LAB_004c31e3
    FDIVR double ptr [0x00629d1b]       ; 004c31e7 | DOUBLE_00629d1b
    JMP 0x004c28e3                      ; 004c31ed
        ;   XREF to: 004c28e3 (UNCONDITIONAL_JUMP)  ; LAB_004c28e3
    FLD float ptr [ESP + 0x2c8]         ; 004c31f2
        ;   Label: LAB_004c31f2
    MOV ECX,0x4                         ; 004c31f9
    MOV ESI,0x3                         ; 004c31fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c3203
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c3206
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    XOR EBX,EBX                         ; 004c320b
    MOV dword ptr [ESP + 0x3c],ECX      ; 004c320d
    MOV dword ptr [ESP + 0x4c],EBX      ; 004c3211
    MOV dword ptr [ESP + 0x48],EBX      ; 004c3215
    MOV dword ptr [ESP + 0x44],EBX      ; 004c3219
    MOV dword ptr [ESP + 0x40],EBX      ; 004c321d
    MOV dword ptr [ESP + 0x50],EBX      ; 004c3221
    MOV dword ptr [ESP + 0x74],ESI      ; 004c3225
    MOV ECX,0x1                         ; 004c3229
    MOV EBX,0x2                         ; 004c322e
    MOV dword ptr [ESP + 0x5c],ECX      ; 004c3233
    MOV dword ptr [ESP + 0x68],EBX      ; 004c3237
    FISTP dword ptr [ESP + 0x2dc]       ; 004c323b
    FLD float ptr [EAX + 0x3c]          ; 004c3242
    FLDZ                                ; 004c3245
    FCOMPP                              ; 004c3247
    FNSTSW AX                           ; 004c3249
    SAHF                                ; 004c324b
    JNC 0x004c338b                      ; 004c324c
        ;   XREF to: 004c338b (CONDITIONAL_JUMP)  ; LAB_004c338b
    MOV EDX,0x800000                    ; 004c3252 | DAT_00800000
    MOV dword ptr [ESP + 0x58],EDX      ; 004c3257 | DAT_00800000
    MOV dword ptr [ESP + 0x60],EDX      ; 004c325b | DAT_00800000
    MOV dword ptr [ESP + 0x64],EDX      ; 004c325f | DAT_00800000
    MOV dword ptr [ESP + 0x6c],EDX      ; 004c3263 | DAT_00800000
    MOV dword ptr [ESP + 0x70],EDX      ; 004c3267 | DAT_00800000
    MOV dword ptr [ESP + 0x78],EDX      ; 004c326b | DAT_00800000
    MOV dword ptr [ESP + 0x7c],EDX      ; 004c326f | DAT_00800000
    MOV dword ptr [ESP + 0x54],EDX      ; 004c3273 | DAT_00800000
    MOV EAX,[0x006703ec]                ; 004c3277 | g_CDemonRendererPtr2
        ;   Label: LAB_004c3277
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c327c
    MOV EDX,dword ptr [EAX]             ; 004c327f | g_CDemonRendererInstance
    MOV EBX,dword ptr [EBX + 0x2c]      ; 004c3281
    MOV dword ptr [EDX + 0x20],EBX      ; 004c3284
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c3287
    MOV EBX,dword ptr [EAX]             ; 004c328a | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x30]      ; 004c328c
    MOV dword ptr [EBX + 0x24],EDX      ; 004c328f
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c3292
    MOV EBX,dword ptr [EAX]             ; 004c3295 | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x34]      ; 004c3297
    MOV dword ptr [EBX + 0x28],EDX      ; 004c329a
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c329d
    MOV EBX,dword ptr [EAX]             ; 004c32a0 | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004c32a2
    MOV dword ptr [EBX + 0x50],EDX      ; 004c32a5
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c32a8
    MOV EDX,dword ptr [EAX]             ; 004c32ab | g_CDemonRendererInstance
    MOV EBX,dword ptr [EBX + 0x30]      ; 004c32ad
    MOV dword ptr [EDX + 0x54],EBX      ; 004c32b0
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c32b3
    MOV EBX,dword ptr [EAX]             ; 004c32b6 | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x34]      ; 004c32b8
    MOV dword ptr [EBX + 0x58],EDX      ; 004c32bb
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c32be
    MOV EBX,dword ptr [EAX]             ; 004c32c1 | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004c32c3
    MOV dword ptr [EBX + 0x80],EDX      ; 004c32c6
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c32cc
    MOV EBX,dword ptr [EAX]             ; 004c32cf | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x30]      ; 004c32d1
    MOV dword ptr [EBX + 0x84],EDX      ; 004c32d4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c32da
    MOV EBX,dword ptr [EAX]             ; 004c32dd | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x34]      ; 004c32df
    MOV dword ptr [EBX + 0x88],EDX      ; 004c32e2
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c32e8
    MOV EBX,dword ptr [EAX]             ; 004c32eb | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004c32ed
    MOV dword ptr [EBX + 0xb0],EDX      ; 004c32f0
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c32f6
    MOV EBX,dword ptr [EAX]             ; 004c32f9 | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x30]      ; 004c32fb
    MOV dword ptr [EBX + 0xb4],EDX      ; 004c32fe
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c3304
    PUSH 0x1                            ; 004c3307
    MOV EBX,dword ptr [EAX]             ; 004c3309 | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x34]      ; 004c330b
    PUSH EAX                            ; 004c330e | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xb8],EDX      ; 004c330f
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c3315
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c331a
    FLD float ptr [ESP + 0x30]          ; 004c331d
    FMUL double ptr [0x00629d4b]        ; 004c3321 | DOUBLE_00629d4b
    MOV EBX,dword ptr [ESP + 0x2d0]     ; 004c3327
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c332e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x2e4]       ; 004c3333
    TEST EBX,EBX                        ; 004c333a
    JZ 0x004c33f3                       ; 004c333c
        ;   XREF to: 004c33f3 (CONDITIONAL_JUMP)  ; LAB_004c33f3
    MOV EDX,dword ptr [0x006703ec]      ; 004c3342 | g_CDemonRendererPtr2
    MOV EBX,dword ptr [EDX]             ; 004c3348 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 004c334a
    MOV dword ptr [EBX + 0x2c],EAX      ; 004c3351
    MOV EAX,dword ptr [EDX]             ; 004c3354 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x5c],0x0      ; 004c3356
    MOV EAX,dword ptr [EDX]             ; 004c335d | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x8c],0x0      ; 004c335f
    MOV EBX,dword ptr [EDX]             ; 004c3369 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 004c336b
    MOV dword ptr [EBX + 0xbc],EAX      ; 004c3372
    LEA EAX,[ESP + 0x38]                ; 004c3378
    PUSH EAX                            ; 004c337c
    PUSH EDX                            ; 004c337d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0 ; 004c337e
        ;   XREF to: 0048bba0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c3383
    JMP 0x004c3012                      ; 004c3386
        ;   XREF to: 004c3012 (UNCONDITIONAL_JUMP)  ; LAB_004c3012
    SHL EDX,0x8                         ; 004c338b
        ;   Label: LAB_004c338b
    MOV ECX,dword ptr [ESP + 0x2ec]     ; 004c338e
    MOV EAX,EDX                         ; 004c3395
    SAR EDX,0x1f                        ; 004c3397
    IDIV ECX                            ; 004c339a
    MOV EBX,dword ptr [0x02d13564]      ; 004c339c | g_TextureAnimCounter1
    ADD EAX,EBX                         ; 004c33a2
    SHL EAX,0x10                        ; 004c33a4
    MOV dword ptr [ESP + 0x58],EAX      ; 004c33a7
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 004c33ab
    MOV dword ptr [ESP + 0x60],EAX      ; 004c33b2
    MOV EAX,dword ptr [ESP + 0x58]      ; 004c33b6
    MOV dword ptr [ESP + 0x64],EAX      ; 004c33ba
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 004c33be
    MOV dword ptr [ESP + 0x6c],EAX      ; 004c33c5
    MOV EAX,dword ptr [ESP + 0x2e0]     ; 004c33c9
    MOV EDX,EAX                         ; 004c33d0
    SAR EDX,0x1f                        ; 004c33d2
    IDIV ECX                            ; 004c33d5
    XOR EDI,EDI                         ; 004c33d7
    ADD EAX,EBX                         ; 004c33d9
    MOV dword ptr [ESP + 0x78],EDI      ; 004c33db
    SHL EAX,0x10                        ; 004c33df
    MOV dword ptr [ESP + 0x54],EDI      ; 004c33e2
    MOV dword ptr [ESP + 0x70],EAX      ; 004c33e6
    MOV dword ptr [ESP + 0x7c],EAX      ; 004c33ea
    JMP 0x004c3277                      ; 004c33ee
        ;   XREF to: 004c3277 (UNCONDITIONAL_JUMP)  ; LAB_004c3277
    MOV ESI,dword ptr [ESP + 0x2e4]     ; 004c33f3
        ;   Label: LAB_004c33f3
    PUSH ESI                            ; 004c33fa
    MOV EDI,dword ptr [0x006703ec]      ; 004c33fb | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c3401 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004c3402
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c3407
    LEA EAX,[ESP + 0x38]                ; 004c340a
    PUSH EAX                            ; 004c340e
    MOV EAX,[0x006703ec]                ; 004c340f | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c3414 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 ; 004c3415
        ;   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c341a
    JMP 0x004c3012                      ; 004c341d
        ;   XREF to: 004c3012 (UNCONDITIONAL_JUMP)  ; LAB_004c3012
    FLD1                                ; 004c3422
        ;   Label: LAB_004c3422
    FLD float ptr [ESP + 0x16c]         ; 004c3424
    FXCH                                ; 004c342b
    FDIV float ptr [ESP + 0x24]         ; 004c342d
    FXCH                                ; 004c3431
    FMUL ST1                            ; 004c3433
    FLD float ptr [ESP + 0x170]         ; 004c3435
    FMUL ST2                            ; 004c343c
    FLD float ptr [ESP + 0x174]         ; 004c343e
    FMULP ST3                           ; 004c3445
    FXCH                                ; 004c3447
    FST float ptr [ESP + 0x1d8]         ; 004c3449
    FLD float ptr [0x00629d53]          ; 004c3450 | FLOAT_00629d53
    FXCH                                ; 004c3456
    FMUL ST1                            ; 004c3458
    FXCH ST2                            ; 004c345a
    FST float ptr [ESP + 0x1dc]         ; 004c345c
    FMUL ST1                            ; 004c3463
    FXCH ST3                            ; 004c3465
    FST float ptr [ESP + 0x1e0]         ; 004c3467
    FMULP                               ; 004c346e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c3470
    FXCH                                ; 004c3473
    FSTP float ptr [ESP + 0x1fc]        ; 004c3475
    FXCH                                ; 004c347c
    FSTP float ptr [ESP + 0x200]        ; 004c347e
    FSTP float ptr [ESP + 0x204]        ; 004c3485
    FLD float ptr [EAX + 0xc]           ; 004c348c
    FSUB float ptr [ESP + 0x1fc]        ; 004c348f
    ADD EAX,0x20                        ; 004c3496
    FSTP float ptr [ESP + 0x1e4]        ; 004c3499
    FLD float ptr [EAX + -0x10]         ; 004c34a0
    FSUB float ptr [ESP + 0x200]        ; 004c34a3
    PUSH EAX                            ; 004c34aa
    FSTP float ptr [ESP + 0x1ec]        ; 004c34ab
    FLD float ptr [EAX + -0xc]          ; 004c34b2
    LEA EAX,[ESP + 0x1b8]               ; 004c34b5
    FSUB float ptr [ESP + 0x208]        ; 004c34bc
    PUSH EAX                            ; 004c34c3
    FSTP float ptr [ESP + 0x1f4]        ; 004c34c4
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004c34cb
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,EAX                         ; 004c34d0
    LEA EAX,[ESP + 0x27c]               ; 004c34d2
    ADD ESP,0x8                         ; 004c34d9
    CMP EAX,EDX                         ; 004c34dc
    JZ 0x004c34fd                       ; 004c34de
        ;   XREF to: 004c34fd (CONDITIONAL_JUMP)  ; LAB_004c34fd
    MOV EAX,dword ptr [EDX]             ; 004c34e0
    MOV dword ptr [ESP + 0x274],EAX     ; 004c34e2
    MOV EAX,dword ptr [EDX + 0x4]       ; 004c34e9
    MOV dword ptr [ESP + 0x278],EAX     ; 004c34ec
    MOV EAX,dword ptr [EDX + 0x8]       ; 004c34f3
    MOV dword ptr [ESP + 0x27c],EAX     ; 004c34f6
    LEA EAX,[ESP + 0x1e4]               ; 004c34fd
        ;   Label: LAB_004c34fd
    PUSH EAX                            ; 004c3504
    MOV EDX,dword ptr [0x006703ec]      ; 004c3505 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c350b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c350c
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c3511
    PUSH 0x0                            ; 004c3514
    LEA EAX,[ESP + 0x278]               ; 004c3516
    PUSH EAX                            ; 004c351d
    MOV ECX,dword ptr [0x006703ec]      ; 004c351e | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c3524 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c3525
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c352a
    PUSH 0x67a83c                       ; 004c352d | g_FireEffectReticle
    MOV EBX,dword ptr [0x006703ec]      ; 004c3532 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c3538 | g_CDemonRendererInstance
    MOV ESI,0x3e4ccccd                  ; 004c3539
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c353e
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EBX,[ESP + 0x180]               ; 004c3543
    MOV EDX,dword ptr [0x006703ec]      ; 004c354a | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 004c3550
    XOR EAX,EAX                         ; 004c3553
    MOV dword ptr [ESP + 0x25c],ESI     ; 004c3555
    MOV dword ptr [ESP + 0x264],EAX     ; 004c355c
    LEA EAX,[ESP + 0x25c]               ; 004c3563
    MOV dword ptr [ESP + 0x260],ESI     ; 004c356a
    FLD float ptr [EAX]                 ; 004c3571
    FMUL float ptr [0x0065dca8]         ; 004c3573 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c3579
    FLD float ptr [EAX + 0x4]           ; 004c357b
    FMUL float ptr [0x0065dca8]         ; 004c357e | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c3584
    FLD float ptr [EAX + 0x8]           ; 004c3587
    FMUL float ptr [0x0065dca8]         ; 004c358a | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c3590
    LEA EAX,[ESP + 0x178]               ; 004c3593
    PUSH EAX                            ; 004c359a
    MOV EAX,dword ptr [EDX]             ; 004c359b | g_CDemonRendererInstance
    PUSH EAX                            ; 004c359d
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c359e
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c35a3
    MOV BL,byte ptr [ESP + 0x25f]       ; 004c35a6
    XOR BL,0x80                         ; 004c35ad
    LEA EAX,[ESP + 0x25c]               ; 004c35b0
    MOV byte ptr [ESP + 0x25f],BL       ; 004c35b7
    LEA EBX,[ESP + 0x238]               ; 004c35be
    MOV EDX,dword ptr [0x006703ec]      ; 004c35c5 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c35cb
    FMUL float ptr [0x0065dca8]         ; 004c35cd | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c35d3
    FLD float ptr [EAX + 0x4]           ; 004c35d5
    FMUL float ptr [0x0065dca8]         ; 004c35d8 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c35de
    FLD float ptr [EAX + 0x8]           ; 004c35e1
    FMUL float ptr [0x0065dca8]         ; 004c35e4 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c35ea
    LEA EAX,[ESP + 0x238]               ; 004c35ed
    PUSH EAX                            ; 004c35f4
    MOV EAX,dword ptr [EDX]             ; 004c35f5 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c35f7
    PUSH EAX                            ; 004c35fa
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c35fb
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c3600
    MOV BH,byte ptr [ESP + 0x263]       ; 004c3603
    XOR BH,0x80                         ; 004c360a
    LEA EAX,[ESP + 0x25c]               ; 004c360d
    MOV byte ptr [ESP + 0x263],BH       ; 004c3614
    LEA EBX,[ESP + 0x124]               ; 004c361b
    MOV EDX,dword ptr [0x006703ec]      ; 004c3622 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c3628
    FMUL float ptr [0x0065dca8]         ; 004c362a | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c3630
    FLD float ptr [EAX + 0x4]           ; 004c3632
    FMUL float ptr [0x0065dca8]         ; 004c3635 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c363b
    FLD float ptr [EAX + 0x8]           ; 004c363e
    FMUL float ptr [0x0065dca8]         ; 004c3641 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c3647
    LEA EAX,[ESP + 0x124]               ; 004c364a
    PUSH EAX                            ; 004c3651
    MOV EAX,dword ptr [EDX]             ; 004c3652 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004c3654
    PUSH EAX                            ; 004c3657
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c3658
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c365d
    LEA EBX,[ESP + 0x148]               ; 004c3660
    MOV CL,byte ptr [ESP + 0x25f]       ; 004c3667
    LEA EAX,[ESP + 0x25c]               ; 004c366e
    XOR CL,0x80                         ; 004c3675
    MOV EDX,dword ptr [0x006703ec]      ; 004c3678 | g_CDemonRendererPtr2
    MOV byte ptr [ESP + 0x25f],CL       ; 004c367e
    FLD float ptr [EAX]                 ; 004c3685
    FMUL float ptr [0x0065dca8]         ; 004c3687 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c368d
    FLD float ptr [EAX + 0x4]           ; 004c368f
    FMUL float ptr [0x0065dca8]         ; 004c3692 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c3698
    FLD float ptr [EAX + 0x8]           ; 004c369b
    FMUL float ptr [0x0065dca8]         ; 004c369e | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c36a4
    LEA EAX,[ESP + 0x148]               ; 004c36a7
    PUSH EAX                            ; 004c36ae
    MOV EAX,dword ptr [EDX]             ; 004c36af | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004c36b1
    PUSH EAX                            ; 004c36b6
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c36b7
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c36bc
    MOV EDX,0x4                         ; 004c36bf
    MOV EBX,0x3                         ; 004c36c4
    MOV ESI,0x80000                     ; 004c36c9
    MOV EAX,0xf80000                    ; 004c36ce | g_LightBufferPool[11][183800]
    XOR ECX,ECX                         ; 004c36d3
    MOV dword ptr [ESP + 0x84],EDX      ; 004c36d5
    MOV dword ptr [ESP + 0x94],ECX      ; 004c36dc
    MOV dword ptr [ESP + 0x90],ECX      ; 004c36e3
    MOV dword ptr [ESP + 0x8c],ECX      ; 004c36ea
    MOV dword ptr [ESP + 0x88],ECX      ; 004c36f1
    MOV dword ptr [ESP + 0x98],ECX      ; 004c36f8
    MOV dword ptr [ESP + 0xbc],EBX      ; 004c36ff
    MOV dword ptr [ESP + 0x9c],ESI      ; 004c3706
    MOV dword ptr [ESP + 0xa0],ESI      ; 004c370d
    MOV dword ptr [ESP + 0xa8],EAX      ; 004c3714 | g_LightBufferPool[11][183800]
    MOV dword ptr [ESP + 0xac],ESI      ; 004c371b
    MOV dword ptr [ESP + 0xb4],EAX      ; 004c3722 | g_LightBufferPool[11][183800]
    MOV dword ptr [ESP + 0xb8],EAX      ; 004c3729 | g_LightBufferPool[11][183800]
    MOV dword ptr [ESP + 0xc0],ESI      ; 004c3730
    MOV dword ptr [ESP + 0xc4],EAX      ; 004c3737 | g_LightBufferPool[11][183800]
    MOV EDX,0x1                         ; 004c373e
    MOV ECX,0x2                         ; 004c3743
    MOV EAX,[0x006703ec]                ; 004c3748 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0xa4],EDX      ; 004c374d
    MOV dword ptr [ESP + 0xb0],ECX      ; 004c3754
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c375b
    MOV EBX,dword ptr [EAX]             ; 004c375e | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004c3760
    MOV dword ptr [EBX + 0x20],EDX      ; 004c3763
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c3766
    MOV EBX,dword ptr [EAX]             ; 004c3769 | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x30]      ; 004c376b
    MOV dword ptr [EBX + 0x24],EDX      ; 004c376e
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c3771
    MOV EBX,dword ptr [EAX]             ; 004c3774 | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x34]      ; 004c3776
    MOV dword ptr [EBX + 0x28],EDX      ; 004c3779
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c377c
    MOV EBX,dword ptr [EAX]             ; 004c377f | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004c3781
    MOV dword ptr [EBX + 0x50],EDX      ; 004c3784
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c3787
    MOV EBX,dword ptr [EAX]             ; 004c378a | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x30]      ; 004c378c
    MOV dword ptr [EBX + 0x54],EDX      ; 004c378f
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c3792
    MOV EBX,dword ptr [EAX]             ; 004c3795 | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x34]      ; 004c3797
    MOV dword ptr [EBX + 0x58],EDX      ; 004c379a
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c379d
    MOV EBX,dword ptr [EAX]             ; 004c37a0 | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004c37a2
    MOV dword ptr [EBX + 0x80],EDX      ; 004c37a5
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c37ab
    MOV EBX,dword ptr [EAX]             ; 004c37ae | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x30]      ; 004c37b0
    MOV dword ptr [EBX + 0x84],EDX      ; 004c37b3
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c37b9
    MOV EBX,dword ptr [EAX]             ; 004c37bc | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x34]      ; 004c37be
    MOV dword ptr [EBX + 0x88],EDX      ; 004c37c1
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c37c7
    MOV EBX,dword ptr [EAX]             ; 004c37ca | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004c37cc
    MOV dword ptr [EBX + 0xb0],EDX      ; 004c37cf
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c37d5
    MOV EBX,dword ptr [EAX]             ; 004c37d8 | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x30]      ; 004c37da
    MOV dword ptr [EBX + 0xb4],EDX      ; 004c37dd
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c37e3
    PUSH 0x1                            ; 004c37e6
    MOV EBX,dword ptr [EAX]             ; 004c37e8 | g_CDemonRendererInstance
    MOV EDX,dword ptr [EDX + 0x34]      ; 004c37ea
    PUSH EAX                            ; 004c37ed | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xb8],EDX      ; 004c37ee
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c37f4
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c37f9
    PUSH 0x471fff00                     ; 004c37fc
    PUSH 0x47000000                     ; 004c3801
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c3806
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x300],EAX     ; 004c380b
    FLD float ptr [ESP + 0x300]         ; 004c3812
    ADD ESP,0x8                         ; 004c3819
    FMUL float ptr [ESP + 0x1c]         ; 004c381c
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c3820
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x2f4]       ; 004c3825
    MOV EAX,dword ptr [ESP + 0x2f4]     ; 004c382c
    PUSH EAX                            ; 004c3833
    MOV EDX,dword ptr [0x006703ec]      ; 004c3834 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c383a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004c383b
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c3840
    LEA EAX,[ESP + 0x80]                ; 004c3843
    PUSH EAX                            ; 004c384a
    MOV ECX,dword ptr [0x006703ec]      ; 004c384b | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c3851 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 ; 004c3852
        ;   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c3857
    MOV EBX,dword ptr [0x006703ec]      ; 004c385a | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c3860 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c3861
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    MOV ECX,0xc                         ; 03fc55e4
        ;   Label: LAB_03fc55e4
    LEA EDI,[ESI + 0x90]                ; 03fc55e9
    MOV ECX,dword ptr [ESI]             ; 03fc55ef
    MOV dword ptr [EDI],ECX             ; 03fc55f1
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc55f3
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc55f6
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc55f9
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc55fc
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc55ff
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc5602
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc5605
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc5608
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc560b
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc560e
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc5611
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc5614
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc5617
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc561a
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc561d
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc5620
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc5623
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc5626
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc5629
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc562c
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc562f
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc5632
    ADD ESI,0x30                        ; 03fc5635
    ADD EDI,0x30                        ; 03fc5638
    XOR ECX,ECX                         ; 03fc563b
    JMP 0x004c2ef1                      ; 03fc563d
        ;   XREF to: 004c2ef1 (UNCONDITIONAL_JUMP)  ; LAB_004c2ef1


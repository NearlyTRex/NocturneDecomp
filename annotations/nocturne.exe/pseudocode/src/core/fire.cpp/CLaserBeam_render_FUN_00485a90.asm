; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLaserBeam_render_FUN_00485a90(CLaserBeam *this_ptr)
;
; Parameters:
; CLaserBeam *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x310]:8  local_310
; undefined8       Stack[-0x308]:8  local_308
; undefined8       Stack[-0x300]:8  local_300
; undefined4       Stack[-0x2f8]:4  local_2f8
; undefined4       Stack[-0x2f4]:4  local_2f4
; undefined4       Stack[-0x2f0]:4  local_2f0
; undefined4       Stack[-0x2ec]:4  local_2ec
; undefined4       Stack[-0x2e8]:4  local_2e8
; undefined4       Stack[-0x2e4]:4  local_2e4
; undefined4       Stack[-0x2e0]:4  local_2e0
; undefined4       Stack[-0x2dc]:4  local_2dc
; undefined        Stack[-0x2d8]:1  local_2d8
; undefined4       Stack[-0x2d4]:4  local_2d4
; undefined4       Stack[-0x2d0]:4  local_2d0
; undefined4       Stack[-0x2cc]:4  local_2cc
; undefined4       Stack[-0x2c8]:4  local_2c8
; undefined4       Stack[-0x2c4]:4  local_2c4
; undefined4       Stack[-0x2c0]:4  local_2c0
; undefined4       Stack[-0x2bc]:4  local_2bc
; undefined4       Stack[-0x2b8]:4  local_2b8
; undefined4       Stack[-0x2b4]:4  local_2b4
; undefined4       Stack[-0x2b0]:4  local_2b0
; undefined4       Stack[-0x2ac]:4  local_2ac
; undefined4       Stack[-0x2a8]:4  local_2a8
; undefined4       Stack[-0x2a4]:4  local_2a4
; undefined4       Stack[-0x2a0]:4  local_2a0
; undefined4       Stack[-0x29c]:4  local_29c
; undefined4       Stack[-0x298]:4  local_298
; undefined4       Stack[-0x294]:4  local_294
; undefined        Stack[-0x290]:1  local_290
; undefined4       Stack[-0x28c]:4  local_28c
; undefined4       Stack[-0x288]:4  local_288
; undefined4       Stack[-0x284]:4  local_284
; undefined4       Stack[-0x280]:4  local_280
; undefined4       Stack[-0x27c]:4  local_27c
; undefined4       Stack[-0x278]:4  local_278
; undefined4       Stack[-0x274]:4  local_274
; undefined4       Stack[-0x270]:4  local_270
; undefined4       Stack[-0x26c]:4  local_26c
; undefined4       Stack[-0x268]:4  local_268
; undefined4       Stack[-0x264]:4  local_264
; undefined4       Stack[-0x260]:4  local_260
; undefined4       Stack[-0x25c]:4  local_25c
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0x254]:4  local_254
; undefined4       Stack[-0x250]:4  local_250
; undefined4       Stack[-0x24c]:4  local_24c
; undefined        Stack[-0x248]:1  local_248
; undefined4       Stack[-0x244]:4  local_244
; undefined4       Stack[-0x240]:4  local_240
; undefined4       Stack[-0x23c]:4  local_23c
; undefined4       Stack[-0x238]:4  local_238
; undefined4       Stack[-0x234]:4  local_234
; undefined4       Stack[-0x230]:4  local_230
; undefined4       Stack[-0x22c]:4  local_22c
; undefined4       Stack[-0x228]:4  local_228
; undefined4       Stack[-0x224]:4  local_224
; undefined        Stack[-0x220]:1  local_220
; undefined4       Stack[-0x218]:4  local_218
; undefined4       Stack[-0x20c]:4  local_20c
; undefined4       Stack[-0x200]:4  local_200
; undefined        Stack[-0x1f8]:1  local_1f8
; undefined4       Stack[-0x1f0]:4  local_1f0
; undefined4       Stack[-0x1ec]:4  local_1ec
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined        Stack[-0x15c]:1  local_15c
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
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xf0]:1  local_f0
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
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
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
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a7ce
;
; Referenced Globals:
;   double DOUBLE_00581184 = 18
;   double DOUBLE_0058118c = 2
;   double DOUBLE_00581194 = 5.06792275895552E-315
;   double DOUBLE_0058119c = 8192
;   float FLOAT_005811a4 = 1.677722E+7
;   float FLOAT_005811a8 = 30
;   double DOUBLE_005811ac = 3.14159265350000
;   double DOUBLE_005811b4 = 32767.5
;   double DOUBLE_005811bc = 5.12263046511523E-315
;   double DOUBLE_005811c4 = -0.100000000000000
;   float FLOAT_0059d1f8 = 256
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b852c
;   undefined4 DAT_005b8544
;   undefined4 DAT_005b855c
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;   core_fire.cpp_computeScreenSpaceSize_FUN_004859a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
;   engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485a90
        ;   Label: core_fire.cpp_CLaserBeam_render_FUN_00485a90
    PUSH ESI                            ; 00485a91
    PUSH EDI                            ; 00485a92
    PUSH EBP                            ; 00485a93
    MOV EBP,ESP                         ; 00485a94
    SUB ESP,0x2fc                       ; 00485a96
    AND ESP,0xfffffff8                  ; 00485a9c
    PUSH 0x5b852c                       ; 00485a9f | DAT_005b852c
    MOV EDX,dword ptr [0x005ae704]      ; 00485aa4 | DAT_005ae704
    PUSH EDX                            ; 00485aaa | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00485aab
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00485ab0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00485ab3
    FLD float ptr [EAX + 0xc]           ; 00485ab6
    FSUB float ptr [EAX]                ; 00485ab9
    FSTP float ptr [ESP + 0x16c]        ; 00485abb
    FLD float ptr [EAX + 0x10]          ; 00485ac2
    FSUB float ptr [EAX + 0x4]          ; 00485ac5
    FSTP float ptr [ESP + 0x170]        ; 00485ac8
    FLD float ptr [EAX + 0x14]          ; 00485acf
    FSUB float ptr [EAX + 0x8]          ; 00485ad2
    LEA EAX,[ESP + 0x16c]               ; 00485ad5
    PUSH EAX                            ; 00485adc
    LEA EAX,[ESP + 0x278]               ; 00485add
    PUSH EAX                            ; 00485ae4
    FSTP float ptr [ESP + 0x17c]        ; 00485ae5
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00485aec
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 00485af1
    FLD float ptr [ESP + 0x170]         ; 00485af4
    FMUL ST0                            ; 00485afb
    FLD float ptr [ESP + 0x16c]         ; 00485afd
    FMUL ST0                            ; 00485b04
    FADDP                               ; 00485b06
    FLD float ptr [ESP + 0x174]         ; 00485b08
    FMUL ST0                            ; 00485b0f
    FADDP                               ; 00485b11
    FSQRT                               ; 00485b13
    LEA EAX,[ESP + 0x274]               ; 00485b15
    PUSH EAX                            ; 00485b1c
    LEA EAX,[ESP + 0xf4]                ; 00485b1d
    PUSH EAX                            ; 00485b24
    FSTP float ptr [ESP + 0x2c]         ; 00485b25
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 00485b29
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00485b2e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00485b31
    MOV EAX,dword ptr [EAX + 0x18]      ; 00485b34
    MOV dword ptr [ESP + 0x30],EAX      ; 00485b37
    MOV EAX,dword ptr [EBP + 0x14]      ; 00485b3b
    MOV EAX,dword ptr [EAX + 0x1c]      ; 00485b3e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00485b41
    LEA EAX,[ESP + 0x220]               ; 00485b45
    PUSH EAX                            ; 00485b4c
    MOV EBX,dword ptr [0x005ae704]      ; 00485b4d | DAT_005ae704
    XOR ECX,ECX                         ; 00485b53
    PUSH EBX                            ; 00485b55 | DAT_01b4d738
    MOV dword ptr [ESP + 0x30],ECX      ; 00485b56
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30 ; 00485b5a
        ;   XREF to: 00460d30 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 00485b5f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00485b62
    FLD float ptr [EAX]                 ; 00485b65
    FSUB float ptr [EDX]                ; 00485b67
    FSTP float ptr [ESP + 0x1cc]        ; 00485b69
    FLD float ptr [EAX + 0x4]           ; 00485b70
    FSUB float ptr [EDX + 0x4]          ; 00485b73
    FSTP float ptr [ESP + 0x1d0]        ; 00485b76
    FLD float ptr [EAX + 0x8]           ; 00485b7d
    LEA EAX,[ESP + 0x1f0]               ; 00485b80
    FSUB float ptr [EDX + 0x8]          ; 00485b87
    LEA EDX,[ESP + 0x1cc]               ; 00485b8a
    FSTP float ptr [ESP + 0x1d4]        ; 00485b91
    CMP EAX,EDX                         ; 00485b98
    JNZ 0x00486560                      ; 00485b9a
        ;   XREF to: 00486560 (CONDITIONAL_JUMP)  ; LAB_00486560
    MOV EAX,dword ptr [EBP + 0x14]      ; 00485ba0
        ;   Label: LAB_00485ba0
    FLD float ptr [EAX + 0xc]           ; 00485ba3
    FSUB float ptr [EAX]                ; 00485ba6
    FSTP float ptr [ESP + 0x184]        ; 00485ba8
    FLD float ptr [EAX + 0x10]          ; 00485baf
    FSUB float ptr [EAX + 0x4]          ; 00485bb2
    LEA EDX,[ESP + 0x130]               ; 00485bb5
    FSTP float ptr [ESP + 0x188]        ; 00485bbc
    FLD float ptr [EAX + 0x14]          ; 00485bc3
    FSUB float ptr [EAX + 0x8]          ; 00485bc6
    LEA EAX,[ESP + 0x184]               ; 00485bc9
    FSTP float ptr [ESP + 0x18c]        ; 00485bd0
    CMP EDX,EAX                         ; 00485bd7
    JZ 0x00485c05                       ; 00485bd9
        ;   XREF to: 00485c05 (CONDITIONAL_JUMP)  ; LAB_00485c05
    MOV EAX,dword ptr [ESP + 0x184]     ; 00485bdb
    MOV dword ptr [ESP + 0x130],EAX     ; 00485be2
    MOV EAX,dword ptr [ESP + 0x188]     ; 00485be9
    MOV dword ptr [ESP + 0x134],EAX     ; 00485bf0
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00485bf7
    MOV dword ptr [ESP + 0x138],EAX     ; 00485bfe
    FLD float ptr [ESP + 0x1f4]         ; 00485c05
        ;   Label: LAB_00485c05
    FMUL float ptr [ESP + 0x134]        ; 00485c0c
    FLD float ptr [ESP + 0x1f0]         ; 00485c13
    FMUL float ptr [ESP + 0x130]        ; 00485c1a
    FADDP                               ; 00485c21
    FLD float ptr [ESP + 0x1f8]         ; 00485c23
    FMUL float ptr [ESP + 0x138]        ; 00485c2a
    MOV ESI,0x43e00000                  ; 00485c31
    FADDP                               ; 00485c36
    MOV dword ptr [ESP + 0x2c],ESI      ; 00485c38
    FST float ptr [ESP + 0x20]          ; 00485c3c
    FLDZ                                ; 00485c40
    FCOMPP                              ; 00485c42
    FNSTSW AX                           ; 00485c44
    SAHF                                ; 00485c46
    JNC 0x00485cef                      ; 00485c47
        ;   XREF to: 00485cef (CONDITIONAL_JUMP)  ; LAB_00485cef
    MOV EAX,dword ptr [EBP + 0x14]      ; 00485c4d
    FLDZ                                ; 00485c50
    FLD float ptr [EAX + 0x3c]          ; 00485c52
    FSTP double ptr [ESP]               ; 00485c55
    FCOMP double ptr [ESP]              ; 00485c58
    FNSTSW AX                           ; 00485c5b
    SAHF                                ; 00485c5d
    JNC 0x0048658f                      ; 00485c5e
        ;   XREF to: 0048658f (CONDITIONAL_JUMP)  ; LAB_0048658f
    FLD double ptr [ESP]                ; 00485c64
    FCOS                                ; 00485c67
    FLD float ptr [ESP + 0x1f4]         ; 00485c69
    FMUL ST0                            ; 00485c70
    FLD float ptr [ESP + 0x1f0]         ; 00485c72
    FMUL ST0                            ; 00485c79
    FADDP                               ; 00485c7b
    FLD float ptr [ESP + 0x1f8]         ; 00485c7d
    FMUL ST0                            ; 00485c84
    FADDP                               ; 00485c86
    FSQRT                               ; 00485c88
    FLD float ptr [ESP + 0x134]         ; 00485c8a
    FMUL ST0                            ; 00485c91
    FLD float ptr [ESP + 0x130]         ; 00485c93
    FMUL ST0                            ; 00485c9a
    FADDP                               ; 00485c9c
    FLD float ptr [ESP + 0x138]         ; 00485c9e
    FMUL ST0                            ; 00485ca5
    FADDP                               ; 00485ca7
    FSQRT                               ; 00485ca9
    FMULP                               ; 00485cab
    FDIVR float ptr [ESP + 0x20]        ; 00485cad
    FXCH                                ; 00485cb1
    FSTP float ptr [ESP + 0x18]         ; 00485cb3
    FST float ptr [ESP + 0x2c4]         ; 00485cb7
    FCOMP float ptr [ESP + 0x18]        ; 00485cbe
    FNSTSW AX                           ; 00485cc2
    SAHF                                ; 00485cc4
    JBE 0x00485cde                      ; 00485cc5
        ;   XREF to: 00485cde (CONDITIONAL_JUMP)  ; LAB_00485cde
    FLD float ptr [ESP + 0x18]          ; 00485cc7
    FLD float ptr [ESP + 0x2c4]         ; 00485ccb
    FSUB ST0,ST1                        ; 00485cd2
    FLD1                                ; 00485cd4
    FSUBRP ST2,ST0                      ; 00485cd6
    FDIVRP                              ; 00485cd8
    FSTP float ptr [ESP + 0x28]         ; 00485cda
    MOV EAX,dword ptr [EBP + 0x14]      ; 00485cde
        ;   Label: LAB_00485cde
    FLD float ptr [EAX + 0x3c]          ; 00485ce1
    FPTAN                               ; 00485ce4
    FSTP ST0                            ; 00485ce6
    FSTP float ptr [ESP + 0x2cc]        ; 00485ce8
    PUSH 0x0                            ; 00485cef
        ;   Label: LAB_00485cef
    MOV EAX,[0x005ae704]                ; 00485cf1 | DAT_005ae704
    PUSH EAX                            ; 00485cf6 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 00485cf7
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00485cfc
    FLDZ                                ; 00485cff
    FLD float ptr [ESP + 0x28]          ; 00485d01
    FSTP double ptr [ESP + 0x10]        ; 00485d05
    FCOMP double ptr [ESP + 0x10]       ; 00485d09
    FNSTSW AX                           ; 00485d0d
    SAHF                                ; 00485d0f
    JNC 0x00486239                      ; 00485d10
        ;   XREF to: 00486239 (CONDITIONAL_JUMP)  ; LAB_00486239
    MOV EAX,[0x005b9354]                ; 00485d16 | DAT_005b9354
    CMP dword ptr [EAX + 0xc],0x0       ; 00485d1b | DAT_01c775f8
    JZ 0x00486239                       ; 00485d1f
        ;   XREF to: 00486239 (CONDITIONAL_JUMP)  ; LAB_00486239
    FLD double ptr [ESP + 0x10]         ; 00485d25
    FMUL double ptr [0x0058118c]        ; 00485d29 | DOUBLE_0058118c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00485d2f
    FLD float ptr [ESP + 0x28]          ; 00485d32
    FMUL float ptr [EAX + 0x18]         ; 00485d36
    FLD float ptr [ESP + 0x30]          ; 00485d39
    FLD ST0                             ; 00485d3d
    FLD1                                ; 00485d3f
    FSUBRP ST4,ST0                      ; 00485d41
    FMUL ST3                            ; 00485d43
    FLD float ptr [ESP + 0x1c]          ; 00485d45
    FMUL ST4                            ; 00485d49
    PUSH 0x1                            ; 00485d4b
    MOV ECX,dword ptr [0x005ae704]      ; 00485d4d | DAT_005ae704
    XOR ESI,ESI                         ; 00485d53
    PUSH ECX                            ; 00485d55 | DAT_01b4d738
    FXCH ST3                            ; 00485d56
    FSTP float ptr [ESP + 0x30]         ; 00485d58
    FSTP ST1                            ; 00485d5c
    FXCH ST2                            ; 00485d5e
    FSTP ST1                            ; 00485d60
    FXCH                                ; 00485d62
    FSTP float ptr [ESP + 0x38]         ; 00485d64
    FSTP float ptr [ESP + 0x24]         ; 00485d68
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00485d6c
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00485d71
    MOV EDI,0x80000                     ; 00485d74
    MOV dword ptr [ESP + 0x2f4],ESI     ; 00485d79
        ;   Label: LAB_00485d79
    FILD dword ptr [ESP + 0x2f4]        ; 00485d80
    FMUL float ptr [0x00581194]         ; 00485d87 | DOUBLE_00581194
    MOV EAX,dword ptr [EBP + 0x14]      ; 00485d8d
    FMUL float ptr [ESP + 0x24]         ; 00485d90
    FLD float ptr [EAX + 0x3c]          ; 00485d94
    FLDZ                                ; 00485d97
    FXCH ST2                            ; 00485d99
    FSTP float ptr [ESP + 0x34]         ; 00485d9b
    FXCH                                ; 00485d9f
    FCOMPP                              ; 00485da1
    FNSTSW AX                           ; 00485da3
    SAHF                                ; 00485da5
    JNC 0x004866b3                      ; 00485da6
        ;   XREF to: 004866b3 (CONDITIONAL_JUMP)  ; LAB_004866b3
    FLD float ptr [ESP + 0x2cc]         ; 00485dac
    FMUL float ptr [ESP + 0x34]         ; 00485db3
        ;   Label: LAB_00485db3
    FSTP float ptr [ESP + 0x2e8]        ; 00485db7
    FLD float ptr [ESP + 0x34]          ; 00485dbe
    FLD float ptr [ESP + 0xf8]          ; 00485dc2
    FMUL ST1                            ; 00485dc9
    FLD float ptr [ESP + 0x104]         ; 00485dcb
    FMUL ST2                            ; 00485dd2
    FLD float ptr [ESP + 0x110]         ; 00485dd4
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00485ddb
    FMULP ST3                           ; 00485de2
    MOV dword ptr [ESP + 0x280],EAX     ; 00485de4
    MOV EAX,dword ptr [ESP + 0x104]     ; 00485deb
    FXCH                                ; 00485df2
    FSTP float ptr [ESP + 0x160]        ; 00485df4
    MOV dword ptr [ESP + 0x284],EAX     ; 00485dfb
    MOV EAX,dword ptr [ESP + 0x110]     ; 00485e02
    FSTP float ptr [ESP + 0x164]        ; 00485e09
    MOV dword ptr [ESP + 0x288],EAX     ; 00485e10
    MOV EAX,dword ptr [EBP + 0x14]      ; 00485e17
    FSTP float ptr [ESP + 0x168]        ; 00485e1a
    FLD float ptr [EAX]                 ; 00485e21
    FADD float ptr [ESP + 0x160]        ; 00485e23
    FSTP float ptr [ESP + 0x1c0]        ; 00485e2a
    FLD float ptr [EAX + 0x4]           ; 00485e31
    FADD float ptr [ESP + 0x164]        ; 00485e34
    LEA EDX,[ESP + 0x1a8]               ; 00485e3b
    FSTP float ptr [ESP + 0x1c4]        ; 00485e42
    FLD float ptr [EAX + 0x8]           ; 00485e49
    FADD float ptr [ESP + 0x168]        ; 00485e4c
    LEA EAX,[ESP + 0x1c0]               ; 00485e53
    FSTP float ptr [ESP + 0x1c8]        ; 00485e5a
    CMP EDX,EAX                         ; 00485e61
    JZ 0x00485e8f                       ; 00485e63
        ;   XREF to: 00485e8f (CONDITIONAL_JUMP)  ; LAB_00485e8f
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00485e65
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00485e6c
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00485e73
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00485e7a
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 00485e81
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00485e88
    LEA EAX,[ESP + 0x1a8]               ; 00485e8f
        ;   Label: LAB_00485e8f
    PUSH EAX                            ; 00485e96
    MOV EBX,dword ptr [0x005ae704]      ; 00485e97 | DAT_005ae704
    PUSH EBX                            ; 00485e9d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00485e9e
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00485ea3
    LEA EAX,[ESP + 0x118]               ; 00485ea6
    PUSH EAX                            ; 00485ead
    MOV EAX,[0x005ae704]                ; 00485eae | DAT_005ae704
    PUSH EAX                            ; 00485eb3 | DAT_01b4d738
    LEA EBX,[ESP + 0x198]               ; 00485eb4
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0 ; 00485ebb
        ;   XREF to: 00460db0 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(CDemonRenderer * this_ptr, CVector3f * output)
    LEA EAX,[ESP + 0x120]               ; 00485ec0
    ADD ESP,0x8                         ; 00485ec7
    MOV EDX,dword ptr [0x005ae704]      ; 00485eca | DAT_005ae704
    MOV dword ptr [ESP + 0x2f4],ESI     ; 00485ed0
    PUSH 0x0                            ; 00485ed7
    FILD dword ptr [ESP + 0x2f8]        ; 00485ed9
    PUSH EAX                            ; 00485ee0
    FADD float ptr [ESP + 0x128]        ; 00485ee1
    PUSH EDX                            ; 00485ee8 | DAT_01b4d738
    FSTP float ptr [ESP + 0x12c]        ; 00485ee9
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00485ef0
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00485ef5
    MOV EDX,dword ptr [0x005ae704]      ; 00485ef8 | DAT_005ae704
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 00485efe
    XOR ECX,ECX                         ; 00485f05
    MOV dword ptr [ESP + 0x22c],EAX     ; 00485f07
    MOV dword ptr [ESP + 0x230],EAX     ; 00485f0e
    LEA EAX,[ESP + 0x22c]               ; 00485f15
    MOV dword ptr [ESP + 0x234],ECX     ; 00485f1c
    FLD float ptr [EAX]                 ; 00485f23
    FMUL float ptr [0x0059d1f8]         ; 00485f25 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00485f2b
    FLD float ptr [EAX + 0x4]           ; 00485f2d
    FMUL float ptr [0x0059d1f8]         ; 00485f30 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00485f36
    FLD float ptr [EAX + 0x8]           ; 00485f39
    FMUL float ptr [0x0059d1f8]         ; 00485f3c | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00485f42
    LEA EAX,[ESP + 0x190]               ; 00485f45
    PUSH EAX                            ; 00485f4c
    MOV EAX,dword ptr [EDX]             ; 00485f4d | DAT_01b4d738
    PUSH EAX                            ; 00485f4f
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00485f50
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00485f55
    MOV AH,byte ptr [ESP + 0x22f]       ; 00485f58
    XOR AH,0x80                         ; 00485f5f
    LEA EBX,[ESP + 0x250]               ; 00485f62
    MOV byte ptr [ESP + 0x22f],AH       ; 00485f69
    LEA EAX,[ESP + 0x22c]               ; 00485f70
    MOV EDX,dword ptr [0x005ae704]      ; 00485f77 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00485f7d
    FMUL float ptr [0x0059d1f8]         ; 00485f7f | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00485f85
    FLD float ptr [EAX + 0x4]           ; 00485f87
    FMUL float ptr [0x0059d1f8]         ; 00485f8a | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00485f90
    FLD float ptr [EAX + 0x8]           ; 00485f93
    FMUL float ptr [0x0059d1f8]         ; 00485f96 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00485f9c
    LEA EAX,[ESP + 0x250]               ; 00485f9f
    PUSH EAX                            ; 00485fa6
    MOV EAX,dword ptr [EDX]             ; 00485fa7 | DAT_01b4d738
    ADD EAX,0x30                        ; 00485fa9
    PUSH EAX                            ; 00485fac
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00485fad
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00485fb2
    MOV DL,byte ptr [ESP + 0x233]       ; 00485fb5
    LEA EBX,[ESP + 0x154]               ; 00485fbc
    XOR DL,0x80                         ; 00485fc3
    LEA EAX,[ESP + 0x22c]               ; 00485fc6
    MOV byte ptr [ESP + 0x233],DL       ; 00485fcd
    MOV EDX,dword ptr [0x005ae704]      ; 00485fd4 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00485fda
    FMUL float ptr [0x0059d1f8]         ; 00485fdc | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00485fe2
    FLD float ptr [EAX + 0x4]           ; 00485fe4
    FMUL float ptr [0x0059d1f8]         ; 00485fe7 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00485fed
    FLD float ptr [EAX + 0x8]           ; 00485ff0
    FMUL float ptr [0x0059d1f8]         ; 00485ff3 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00485ff9
    LEA EAX,[ESP + 0x154]               ; 00485ffc
    PUSH EAX                            ; 00486003
    MOV EAX,dword ptr [EDX]             ; 00486004 | DAT_01b4d738
    ADD EAX,0x60                        ; 00486006
    PUSH EAX                            ; 00486009
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048600a
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048600f
    MOV DH,byte ptr [ESP + 0x22f]       ; 00486012
    LEA EBX,[ESP + 0x19c]               ; 00486019
    XOR DH,0x80                         ; 00486020
    LEA EAX,[ESP + 0x22c]               ; 00486023
    MOV byte ptr [ESP + 0x22f],DH       ; 0048602a
    MOV EDX,dword ptr [0x005ae704]      ; 00486031 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00486037
    FMUL float ptr [0x0059d1f8]         ; 00486039 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 0048603f
    FLD float ptr [EAX + 0x4]           ; 00486041
    FMUL float ptr [0x0059d1f8]         ; 00486044 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 0048604a
    FLD float ptr [EAX + 0x8]           ; 0048604d
    FMUL float ptr [0x0059d1f8]         ; 00486050 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00486056
    LEA EAX,[ESP + 0x19c]               ; 00486059
    PUSH EAX                            ; 00486060
    MOV EAX,dword ptr [EDX]             ; 00486061 | DAT_01b4d738
    ADD EAX,0x90                        ; 00486063
    PUSH EAX                            ; 00486068
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00486069
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048606e
    PUSH 0x5b8574                       ; 00486071 | DAT_005b8574
    MOV EBX,dword ptr [0x005ae704]      ; 00486076 | DAT_005ae704
    PUSH EBX                            ; 0048607c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 0048607d
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00486082
    FLD float ptr [ESP + 0x28]          ; 00486085
    FMUL double ptr [0x0058119c]        ; 00486089 | DOUBLE_0058119c
    MOV EAX,0x4                         ; 0048608f
    XOR EDX,EDX                         ; 00486094
    MOV dword ptr [ESP + 0xcc],EAX      ; 00486096
    MOV dword ptr [ESP + 0xdc],EDX      ; 0048609d
    MOV dword ptr [ESP + 0xd8],EDX      ; 004860a4
    MOV dword ptr [ESP + 0xd4],EDX      ; 004860ab
    MOV dword ptr [ESP + 0xd0],EDX      ; 004860b2
    MOV dword ptr [ESP + 0xe0],EDX      ; 004860b9
    MOV EDX,dword ptr [0x005ae704]      ; 004860c0 | DAT_005ae704
    CALL crt_math.c_round_FUN_00563a30  ; 004860c6
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EBX,dword ptr [EDX]             ; 004860cb
    FISTP dword ptr [ESP + 0x29c]       ; 004860cd
    MOV EAX,dword ptr [ESP + 0x29c]     ; 004860d4
    MOV dword ptr [EBX + 0x2c],EAX      ; 004860db
    MOV EAX,dword ptr [EBP + 0x14]      ; 004860de
    MOV EBX,dword ptr [EDX]             ; 004860e1
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004860e3
    MOV dword ptr [EBX + 0x20],EAX      ; 004860e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004860e9
    MOV EBX,dword ptr [EDX]             ; 004860ec
    MOV EAX,dword ptr [EAX + 0x30]      ; 004860ee
    MOV dword ptr [EBX + 0x24],EAX      ; 004860f1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004860f4
    MOV EBX,dword ptr [EDX]             ; 004860f7
    MOV EAX,dword ptr [EAX + 0x34]      ; 004860f9
    MOV ECX,0x1                         ; 004860fc
    MOV dword ptr [EBX + 0x28],EAX      ; 00486101
    MOV dword ptr [ESP + 0xe4],ECX      ; 00486104
    MOV EBX,dword ptr [EDX]             ; 0048610b
    MOV EAX,dword ptr [ESP + 0x29c]     ; 0048610d
    MOV dword ptr [EBX + 0x5c],EAX      ; 00486114
    MOV EBX,dword ptr [EBP + 0x14]      ; 00486117
    MOV EAX,dword ptr [EDX]             ; 0048611a
    MOV EBX,dword ptr [EBX + 0x2c]      ; 0048611c
    MOV dword ptr [EAX + 0x50],EBX      ; 0048611f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00486122
    MOV EAX,dword ptr [EDX]             ; 00486125
    MOV EBX,dword ptr [EBX + 0x30]      ; 00486127
    MOV dword ptr [EAX + 0x54],EBX      ; 0048612a
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048612d
    MOV EAX,dword ptr [EDX]             ; 00486130
    MOV EBX,dword ptr [EBX + 0x34]      ; 00486132
    MOV dword ptr [EAX + 0x58],EBX      ; 00486135
    MOV dword ptr [ESP + 0xe8],0x2      ; 00486138
    MOV EBX,dword ptr [EDX]             ; 00486143
    MOV EAX,dword ptr [ESP + 0x29c]     ; 00486145
    MOV dword ptr [EBX + 0x8c],EAX      ; 0048614c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00486152
    MOV EAX,dword ptr [EDX]             ; 00486155
    MOV EBX,dword ptr [EBX + 0x2c]      ; 00486157
    MOV dword ptr [EAX + 0x80],EBX      ; 0048615a
    MOV EBX,dword ptr [EBP + 0x14]      ; 00486160
    MOV EAX,dword ptr [EDX]             ; 00486163
    MOV EBX,dword ptr [EBX + 0x30]      ; 00486165
    MOV dword ptr [EAX + 0x84],EBX      ; 00486168
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048616e
    MOV EAX,dword ptr [EDX]             ; 00486171
    MOV EBX,dword ptr [EBX + 0x34]      ; 00486173
    MOV dword ptr [EAX + 0x88],EBX      ; 00486176
    MOV dword ptr [ESP + 0xec],0x3      ; 0048617c
    MOV EBX,dword ptr [EDX]             ; 00486187
    MOV EAX,dword ptr [ESP + 0x29c]     ; 00486189
    MOV dword ptr [EBX + 0xbc],EAX      ; 00486190
    MOV EBX,dword ptr [EBP + 0x14]      ; 00486196
    MOV EAX,dword ptr [EDX]             ; 00486199
    MOV EBX,dword ptr [EBX + 0x2c]      ; 0048619b
    MOV dword ptr [EAX + 0xb0],EBX      ; 0048619e
    MOV EBX,dword ptr [EBP + 0x14]      ; 004861a4
    MOV EAX,dword ptr [EDX]             ; 004861a7
    MOV EBX,dword ptr [EBX + 0x30]      ; 004861a9
    MOV dword ptr [EAX + 0xb4],EBX      ; 004861ac
    MOV EBX,dword ptr [EBP + 0x14]      ; 004861b2
    MOV EAX,dword ptr [EDX]             ; 004861b5
    MOV EBX,dword ptr [EBX + 0x34]      ; 004861b7
    MOV dword ptr [EAX + 0xb8],EBX      ; 004861ba
    MOV EAX,dword ptr [EDX]             ; 004861c0
    MOV dword ptr [EAX + 0x18],0xf80000 ; 004861c2
    MOV EAX,dword ptr [EDX]             ; 004861c9
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 004861cb
    MOV EAX,dword ptr [EDX]             ; 004861d2
    MOV dword ptr [EAX + 0x48],EDI      ; 004861d4
    MOV EAX,dword ptr [EDX]             ; 004861d7
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 004861d9
    MOV EAX,dword ptr [EDX]             ; 004861e0
    MOV dword ptr [EAX + 0x78],EDI      ; 004861e2
    MOV EAX,dword ptr [EDX]             ; 004861e5
    MOV dword ptr [EAX + 0x7c],EDI      ; 004861e7
    MOV EAX,dword ptr [EDX]             ; 004861ea
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 004861ec
    MOV EAX,dword ptr [EDX]             ; 004861f6
    MOV dword ptr [EAX + 0xac],EDI      ; 004861f8
    LEA EAX,[ESP + 0xc8]                ; 004861fe
    PUSH EAX                            ; 00486205
    PUSH EDX                            ; 00486206
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080 ; 00486207
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0048620c
    MOV EDX,dword ptr [0x005ae704]      ; 0048620f | DAT_005ae704
    PUSH EDX                            ; 00486215 | DAT_01b4d738
    INC ESI                             ; 00486216
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00486217
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0048621c
    CMP ESI,0x19                        ; 0048621f
    JL 0x00485d79                       ; 00486222
        ;   XREF to: 00485d79 (CONDITIONAL_JUMP)  ; LAB_00485d79
    PUSH 0x0                            ; 00486228
    MOV ECX,dword ptr [0x005ae704]      ; 0048622a | DAT_005ae704
    PUSH ECX                            ; 00486230 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00486231
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00486236
    FLD float ptr [ESP + 0x30]          ; 00486239
        ;   Label: LAB_00486239
    FLDZ                                ; 0048623d
    FCOMPP                              ; 0048623f
    FNSTSW AX                           ; 00486241
    SAHF                                ; 00486243
    JNC 0x00486523                      ; 00486244
        ;   XREF to: 00486523 (CONDITIONAL_JUMP)  ; LAB_00486523
    PUSH 0x5b8544                       ; 0048624a | DAT_005b8544
    MOV EBX,dword ptr [0x005ae704]      ; 0048624f | DAT_005ae704
    PUSH EBX                            ; 00486255 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00486256
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0048625b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048625e
    PUSH ESI                            ; 00486261
    MOV EDI,dword ptr [0x005ae704]      ; 00486262 | DAT_005ae704
    PUSH EDI                            ; 00486268 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00486269
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0048626e
    PUSH 0x0                            ; 00486271
    LEA EAX,[ESP + 0x278]               ; 00486273
    PUSH EAX                            ; 0048627a
    MOV EAX,[0x005ae704]                ; 0048627b | DAT_005ae704
    PUSH EAX                            ; 00486280 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00486281
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    FLDZ                                ; 00486286
    FLD float ptr [ESI + 0x3c]          ; 00486288
    MOV ECX,0x8                         ; 0048628b
    ADD ESP,0xc                         ; 00486290
    MOV EAX,dword ptr [ESI + 0x38]      ; 00486293
    XOR EDX,EDX                         ; 00486296
    FSTP double ptr [ESP + 0x8]         ; 00486298
    MOV dword ptr [ESP + 0x2bc],EAX     ; 0048629c
    MOV dword ptr [ESP + 0x2d0],EDX     ; 004862a3
    MOV dword ptr [ESP + 0x2ec],ECX     ; 004862aa
    FCOMP double ptr [ESP + 0x8]        ; 004862b1
    FNSTSW AX                           ; 004862b5
    SAHF                                ; 004862b7
    JNC 0x004862e5                      ; 004862b8
        ;   XREF to: 004862e5 (CONDITIONAL_JUMP)  ; LAB_004862e5
    FLD double ptr [ESP + 0x8]          ; 004862ba
    FPTAN                               ; 004862be
    FSTP ST0                            ; 004862c0
    FMUL float ptr [ESP + 0x24]         ; 004862c2
    MOV EBX,0x1                         ; 004862c6
    MOV ESI,0x10                        ; 004862cb
    MOV dword ptr [ESP + 0x2d0],EBX     ; 004862d0
    MOV dword ptr [ESP + 0x2ec],ESI     ; 004862d7
    FSTP float ptr [ESP + 0x2bc]        ; 004862de
    MOV EAX,dword ptr [EBP + 0x14]      ; 004862e5
        ;   Label: LAB_004862e5
    PUSH dword ptr [EAX + 0x38]         ; 004862e8
    PUSH 0x0                            ; 004862eb
    CALL core_fire.cpp_computeScreenSpaceSize_FUN_004859a0 ; 004862ed
        ;   XREF to: 004859a0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_computeScreenSpaceSize_FUN_004859a0()
    MOV dword ptr [ESP + 0x300],EAX     ; 004862f2
    FLD float ptr [ESP + 0x300]         ; 004862f9
    ADD ESP,0x8                         ; 00486300
    PUSH dword ptr [ESP + 0x2bc]        ; 00486303
    PUSH dword ptr [ESP + 0x28]         ; 0048630a
    FSTP float ptr [ESP + 0x2dc]        ; 0048630e
    CALL core_fire.cpp_computeScreenSpaceSize_FUN_004859a0 ; 00486315
        ;   XREF to: 004859a0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_computeScreenSpaceSize_FUN_004859a0()
    MOV dword ptr [ESP + 0x300],EAX     ; 0048631a
    FLD float ptr [ESP + 0x300]         ; 00486321
    ADD ESP,0x8                         ; 00486328
    XOR EDI,EDI                         ; 0048632b
    FSTP float ptr [ESP + 0x2d8]        ; 0048632d
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 00486334
    MOV dword ptr [ESP + 0x2f0],EDI     ; 0048633b
    TEST EAX,EAX                        ; 00486342
    JL 0x00486514                       ; 00486344
        ;   XREF to: 00486514 (CONDITIONAL_JUMP)  ; LAB_00486514
    FLD float ptr [ESP + 0x24]          ; 0048634a
    FMUL float ptr [0x005811a4]         ; 0048634e | FLOAT_005811a4
    FDIV float ptr [0x005811a8]         ; 00486354 | FLOAT_005811a8
    MOV dword ptr [ESP + 0x2e0],0x100   ; 0048635a
    FSTP float ptr [ESP + 0x2c8]        ; 00486365
    MOV EAX,dword ptr [ESP + 0x2f0]     ; 0048636c
        ;   Label: LAB_0048636c
    MOV dword ptr [ESP + 0x2f4],EAX     ; 00486373
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 0048637a
    MOV dword ptr [ESP + 0x2f8],EAX     ; 00486381
    FILD dword ptr [ESP + 0x2f4]        ; 00486388
    FILD dword ptr [ESP + 0x2f8]        ; 0048638f
    FDIVP                               ; 00486396
    FMUL double ptr [0x0058118c]        ; 00486398 | DOUBLE_0058118c
    FMUL double ptr [0x005811ac]        ; 0048639e | DOUBLE_005811ac
    FLD ST0                             ; 004863a4
    FSIN                                ; 004863a6
    FXCH                                ; 004863a8
    FCOS                                ; 004863aa
    MOV EDX,dword ptr [0x005ae704]      ; 004863ac | DAT_005ae704
    MOV ESI,dword ptr [EDX]             ; 004863b2 | DAT_01b4d738
    MOV ECX,0xc                         ; 004863b4
    LEA EDI,[ESI + 0x90]                ; 004863b9
    MOVSD.REP ES:EDI,ESI                ; 004863bf
    FXCH                                ; 004863c1
    FST float ptr [ESP + 0x2a4]         ; 004863c3
    FLD float ptr [ESP + 0x2d4]         ; 004863ca
    FXCH                                ; 004863d1
    FMUL ST1                            ; 004863d3
    MOV ESI,dword ptr [EDX]             ; 004863d5 | DAT_01b4d738
    MOV ECX,0xc                         ; 004863d7
    LEA EDI,[ESI + 0x60]                ; 004863dc
    LEA ESI,[ESI + 0x30]                ; 004863df
    FXCH ST2                            ; 004863e2
    FST float ptr [ESP + 0x2a8]         ; 004863e4
    FMULP                               ; 004863eb
    MOVSD.REP ES:EDI,ESI                ; 004863ed
    XOR EAX,EAX                         ; 004863ef
    LEA EBX,[ESP + 0x268]               ; 004863f1
    MOV dword ptr [ESP + 0x24c],EAX     ; 004863f8
    LEA EAX,[ESP + 0x244]               ; 004863ff
    FXCH                                ; 00486406
    FSTP float ptr [ESP + 0x248]        ; 00486408
    FSTP float ptr [ESP + 0x244]        ; 0048640f
    FLD float ptr [EAX]                 ; 00486416
    FMUL float ptr [0x0059d1f8]         ; 00486418 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 0048641e
    FLD float ptr [EAX + 0x4]           ; 00486420
    FMUL float ptr [0x0059d1f8]         ; 00486423 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00486429
    FLD float ptr [EAX + 0x8]           ; 0048642c
    FMUL float ptr [0x0059d1f8]         ; 0048642f | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00486435
    LEA EAX,[ESP + 0x268]               ; 00486438
    PUSH EAX                            ; 0048643f
    MOV EAX,dword ptr [EDX]             ; 00486440 | DAT_01b4d738
    PUSH EAX                            ; 00486442
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00486443
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00486448
    FLD float ptr [ESP + 0x2d8]         ; 0048644b
    FLD float ptr [ESP + 0x2a8]         ; 00486452
    FMUL ST1                            ; 00486459
    FLD float ptr [ESP + 0x2a4]         ; 0048645b
    FMULP ST2                           ; 00486462
    LEA EBX,[ESP + 0x208]               ; 00486464
    LEA EAX,[ESP + 0x244]               ; 0048646b
    MOV EDX,dword ptr [0x005ae704]      ; 00486472 | DAT_005ae704
    FLD float ptr [ESP + 0x24]          ; 00486478
    FADD double ptr [0x005811c4]        ; 0048647c | DOUBLE_005811c4
    FXCH                                ; 00486482
    FSTP float ptr [ESP + 0x244]        ; 00486484
    FXCH                                ; 0048648b
    FSTP float ptr [ESP + 0x248]        ; 0048648d
    FSTP float ptr [ESP + 0x24c]        ; 00486494
    FLD float ptr [EAX]                 ; 0048649b
    FMUL float ptr [0x0059d1f8]         ; 0048649d | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 004864a3
    FLD float ptr [EAX + 0x4]           ; 004864a5
    FMUL float ptr [0x0059d1f8]         ; 004864a8 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 004864ae
    FLD float ptr [EAX + 0x8]           ; 004864b1
    FMUL float ptr [0x0059d1f8]         ; 004864b4 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 004864ba
    LEA EAX,[ESP + 0x208]               ; 004864bd
    PUSH EAX                            ; 004864c4
    MOV EAX,dword ptr [EDX]             ; 004864c5 | DAT_01b4d738
    ADD EAX,0x30                        ; 004864c7
    PUSH EAX                            ; 004864ca
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004864cb
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004864d0
    MOV EDX,dword ptr [ESP + 0x2f0]     ; 004864d3
    TEST EDX,EDX                        ; 004864da
    JNZ 0x004866c2                      ; 004864dc
        ;   XREF to: 004866c2 (CONDITIONAL_JUMP)  ; LAB_004866c2
    MOV EDX,dword ptr [ESP + 0x2e0]     ; 004864e2
        ;   Label: LAB_004864e2
    MOV ECX,dword ptr [ESP + 0x2f0]     ; 004864e9
    MOV EBX,dword ptr [ESP + 0x2ec]     ; 004864f0
    ADD EDX,0x100                       ; 004864f7
    INC ECX                             ; 004864fd
    MOV dword ptr [ESP + 0x2e0],EDX     ; 004864fe
    MOV dword ptr [ESP + 0x2f0],ECX     ; 00486505
    CMP ECX,EBX                         ; 0048650c
    JLE 0x0048636c                      ; 0048650e
        ;   XREF to: 0048636c (CONDITIONAL_JUMP)  ; LAB_0048636c
    MOV ESI,dword ptr [0x005ae704]      ; 00486514 | DAT_005ae704
        ;   Label: LAB_00486514
    PUSH ESI                            ; 0048651a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0048651b
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00486520
    FLD float ptr [ESP + 0x1c]          ; 00486523
        ;   Label: LAB_00486523
    FLDZ                                ; 00486527
    FCOMPP                              ; 00486529
    FNSTSW AX                           ; 0048652b
    SAHF                                ; 0048652d
    JC 0x004868f2                       ; 0048652e
        ;   XREF to: 004868f2 (CONDITIONAL_JUMP)  ; LAB_004868f2
    PUSH 0x0                            ; 00486534
        ;   Label: LAB_00486534
    MOV ESI,dword ptr [0x005ae704]      ; 00486536 | DAT_005ae704
    PUSH ESI                            ; 0048653c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0048653d
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00486542
    PUSH 0xffff                         ; 00486545
    MOV EDI,dword ptr [0x005ae704]      ; 0048654a | DAT_005ae704
    PUSH EDI                            ; 00486550 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00486551
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00486556
    MOV ESP,EBP                         ; 00486559
    POP EBP                             ; 0048655b
    POP EDI                             ; 0048655c
    POP ESI                             ; 0048655d
    POP EBX                             ; 0048655e
    RET                                 ; 0048655f
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00486560
        ;   Label: LAB_00486560
    MOV dword ptr [ESP + 0x1f0],EAX     ; 00486567
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0048656e
    MOV dword ptr [ESP + 0x1f4],EAX     ; 00486575
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0048657c
    MOV dword ptr [ESP + 0x1f8],EAX     ; 00486583
    JMP 0x00485ba0                      ; 0048658a
        ;   XREF to: 00485ba0 (UNCONDITIONAL_JUMP)  ; LAB_00485ba0
    LEA EAX,[ESP + 0x13c]               ; 0048658f
        ;   Label: LAB_0048658f
    PUSH EAX                            ; 00486596
    MOV EDI,dword ptr [0x005ae704]      ; 00486597 | DAT_005ae704
    PUSH EDI                            ; 0048659d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30 ; 0048659e
        ;   XREF to: 00460d30 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 004865a3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004865a6
    FLD float ptr [ESP + 0x13c]         ; 004865a9
    FSUB float ptr [EAX]                ; 004865b0
    FLD float ptr [ESP + 0x140]         ; 004865b2
    FXCH                                ; 004865b9
    FSTP float ptr [ESP + 0x13c]        ; 004865bb
    FSUB float ptr [EAX + 0x4]          ; 004865c2
    FLD float ptr [ESP + 0x144]         ; 004865c5
    FXCH                                ; 004865cc
    FSTP float ptr [ESP + 0x140]        ; 004865ce
    FSUB float ptr [EAX + 0x8]          ; 004865d5
    LEA EAX,[ESP + 0x13c]               ; 004865d8
    PUSH EAX                            ; 004865df
    LEA EAX,[ESP + 0x218]               ; 004865e0
    PUSH EAX                            ; 004865e7
    LEA EAX,[ESP + 0xf8]                ; 004865e8
    PUSH EAX                            ; 004865ef
    FSTP float ptr [ESP + 0x150]        ; 004865f0
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 004865f7
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    MOV EDX,EAX                         ; 004865fc
    LEA EAX,[ESP + 0x148]               ; 004865fe
    ADD ESP,0xc                         ; 00486605
    CMP EAX,EDX                         ; 00486608
    JZ 0x00486629                       ; 0048660a
        ;   XREF to: 00486629 (CONDITIONAL_JUMP)  ; LAB_00486629
    MOV EAX,dword ptr [EDX]             ; 0048660c
    MOV dword ptr [ESP + 0x13c],EAX     ; 0048660e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00486615
    MOV dword ptr [ESP + 0x140],EAX     ; 00486618
    MOV EAX,dword ptr [EDX + 0x8]       ; 0048661f
    MOV dword ptr [ESP + 0x144],EAX     ; 00486622
    FLD float ptr [ESP + 0x144]         ; 00486629
        ;   Label: LAB_00486629
    FMUL double ptr [0x00581184]        ; 00486630 | DOUBLE_00581184
    FDIV float ptr [ESP + 0x2c]         ; 00486636
    FLD float ptr [ESP + 0x140]         ; 0048663a
    FMUL ST0                            ; 00486641
    FLD float ptr [ESP + 0x13c]         ; 00486643
    FMUL ST0                            ; 0048664a
    FXCH ST2                            ; 0048664c
    FMUL double ptr [0x0058118c]        ; 0048664e | DOUBLE_0058118c
    FXCH                                ; 00486654
    FSTP float ptr [ESP + 0x2b0]        ; 00486656
    FXCH                                ; 0048665d
    FADD float ptr [ESP + 0x2b0]        ; 0048665f
    FXCH                                ; 00486666
    FST float ptr [ESP + 0x2b8]         ; 00486668
    FMUL float ptr [ESP + 0x2b8]        ; 0048666f
    FXCH                                ; 00486676
    FST float ptr [ESP + 0x2c0]         ; 00486678
    FXCH                                ; 0048667f
    FSTP float ptr [ESP + 0x2b4]        ; 00486681
    FCOMP float ptr [ESP + 0x2b4]       ; 00486688
    FNSTSW AX                           ; 0048668f
    SAHF                                ; 00486691
    JNC 0x00485cef                      ; 00486692
        ;   XREF to: 00485cef (CONDITIONAL_JUMP)  ; LAB_00485cef
    FLD float ptr [ESP + 0x2c0]         ; 00486698
    FDIV float ptr [ESP + 0x2b4]        ; 0048669f
    FLD1                                ; 004866a6
    FSUBRP                              ; 004866a8
    FSTP float ptr [ESP + 0x28]         ; 004866aa
    JMP 0x00485cef                      ; 004866ae
        ;   XREF to: 00485cef (UNCONDITIONAL_JUMP)  ; LAB_00485cef
    FLD float ptr [ESP + 0x2c]          ; 004866b3
        ;   Label: LAB_004866b3
    FDIVR double ptr [0x00581184]       ; 004866b7 | DOUBLE_00581184
    JMP 0x00485db3                      ; 004866bd
        ;   XREF to: 00485db3 (UNCONDITIONAL_JUMP)  ; LAB_00485db3
    FLD float ptr [ESP + 0x2c8]         ; 004866c2
        ;   Label: LAB_004866c2
    MOV ECX,0x4                         ; 004866c9
    MOV ESI,0x3                         ; 004866ce
    MOV EAX,dword ptr [EBP + 0x14]      ; 004866d3
    CALL crt_math.c_round_FUN_00563a30  ; 004866d6
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    XOR EBX,EBX                         ; 004866db
    MOV dword ptr [ESP + 0x3c],ECX      ; 004866dd
    MOV dword ptr [ESP + 0x4c],EBX      ; 004866e1
    MOV dword ptr [ESP + 0x48],EBX      ; 004866e5
    MOV dword ptr [ESP + 0x44],EBX      ; 004866e9
    MOV dword ptr [ESP + 0x40],EBX      ; 004866ed
    MOV dword ptr [ESP + 0x50],EBX      ; 004866f1
    MOV dword ptr [ESP + 0x74],ESI      ; 004866f5
    MOV ECX,0x1                         ; 004866f9
    MOV EBX,0x2                         ; 004866fe
    MOV dword ptr [ESP + 0x5c],ECX      ; 00486703
    MOV dword ptr [ESP + 0x68],EBX      ; 00486707
    FISTP dword ptr [ESP + 0x2dc]       ; 0048670b
    FLD float ptr [EAX + 0x3c]          ; 00486712
    FLDZ                                ; 00486715
    FCOMPP                              ; 00486717
    FNSTSW AX                           ; 00486719
    SAHF                                ; 0048671b
    JNC 0x0048685b                      ; 0048671c
        ;   XREF to: 0048685b (CONDITIONAL_JUMP)  ; LAB_0048685b
    MOV EDX,0x800000                    ; 00486722
    MOV dword ptr [ESP + 0x58],EDX      ; 00486727
    MOV dword ptr [ESP + 0x60],EDX      ; 0048672b
    MOV dword ptr [ESP + 0x64],EDX      ; 0048672f
    MOV dword ptr [ESP + 0x6c],EDX      ; 00486733
    MOV dword ptr [ESP + 0x70],EDX      ; 00486737
    MOV dword ptr [ESP + 0x78],EDX      ; 0048673b
    MOV dword ptr [ESP + 0x7c],EDX      ; 0048673f
    MOV dword ptr [ESP + 0x54],EDX      ; 00486743
    MOV EAX,[0x005ae704]                ; 00486747 | DAT_005ae704
        ;   Label: LAB_00486747
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048674c
    MOV EDX,dword ptr [EAX]             ; 0048674f | DAT_01b4d738
    MOV EBX,dword ptr [EBX + 0x2c]      ; 00486751
    MOV dword ptr [EDX + 0x20],EBX      ; 00486754
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486757
    MOV EBX,dword ptr [EAX]             ; 0048675a | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x30]      ; 0048675c
    MOV dword ptr [EBX + 0x24],EDX      ; 0048675f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486762
    MOV EBX,dword ptr [EAX]             ; 00486765 | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x34]      ; 00486767
    MOV dword ptr [EBX + 0x28],EDX      ; 0048676a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048676d
    MOV EBX,dword ptr [EAX]             ; 00486770 | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00486772
    MOV dword ptr [EBX + 0x50],EDX      ; 00486775
    MOV EBX,dword ptr [EBP + 0x14]      ; 00486778
    MOV EDX,dword ptr [EAX]             ; 0048677b | DAT_01b4d738
    MOV EBX,dword ptr [EBX + 0x30]      ; 0048677d
    MOV dword ptr [EDX + 0x54],EBX      ; 00486780
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486783
    MOV EBX,dword ptr [EAX]             ; 00486786 | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x34]      ; 00486788
    MOV dword ptr [EBX + 0x58],EDX      ; 0048678b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048678e
    MOV EBX,dword ptr [EAX]             ; 00486791 | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00486793
    MOV dword ptr [EBX + 0x80],EDX      ; 00486796
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048679c
    MOV EBX,dword ptr [EAX]             ; 0048679f | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x30]      ; 004867a1
    MOV dword ptr [EBX + 0x84],EDX      ; 004867a4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004867aa
    MOV EBX,dword ptr [EAX]             ; 004867ad | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x34]      ; 004867af
    MOV dword ptr [EBX + 0x88],EDX      ; 004867b2
    MOV EDX,dword ptr [EBP + 0x14]      ; 004867b8
    MOV EBX,dword ptr [EAX]             ; 004867bb | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004867bd
    MOV dword ptr [EBX + 0xb0],EDX      ; 004867c0
    MOV EDX,dword ptr [EBP + 0x14]      ; 004867c6
    MOV EBX,dword ptr [EAX]             ; 004867c9 | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x30]      ; 004867cb
    MOV dword ptr [EBX + 0xb4],EDX      ; 004867ce
    MOV EDX,dword ptr [EBP + 0x14]      ; 004867d4
    PUSH 0x1                            ; 004867d7
    MOV EBX,dword ptr [EAX]             ; 004867d9 | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x34]      ; 004867db
    PUSH EAX                            ; 004867de | DAT_01b4d738
    MOV dword ptr [EBX + 0xb8],EDX      ; 004867df
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 004867e5
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004867ea
    FLD float ptr [ESP + 0x30]          ; 004867ed
    FMUL double ptr [0x005811b4]        ; 004867f1 | DOUBLE_005811b4
    MOV EBX,dword ptr [ESP + 0x2d0]     ; 004867f7
    CALL crt_math.c_round_FUN_00563a30  ; 004867fe
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x2e4]       ; 00486803
    TEST EBX,EBX                        ; 0048680a
    JZ 0x004868c3                       ; 0048680c
        ;   XREF to: 004868c3 (CONDITIONAL_JUMP)  ; LAB_004868c3
    MOV EDX,dword ptr [0x005ae704]      ; 00486812 | DAT_005ae704
    MOV EBX,dword ptr [EDX]             ; 00486818 | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 0048681a
    MOV dword ptr [EBX + 0x2c],EAX      ; 00486821
    MOV EAX,dword ptr [EDX]             ; 00486824 | DAT_01b4d738
    MOV dword ptr [EAX + 0x5c],0x0      ; 00486826
    MOV EAX,dword ptr [EDX]             ; 0048682d | DAT_01b4d738
    MOV dword ptr [EAX + 0x8c],0x0      ; 0048682f
    MOV EBX,dword ptr [EDX]             ; 00486839 | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 0048683b
    MOV dword ptr [EBX + 0xbc],EAX      ; 00486842
    LEA EAX,[ESP + 0x38]                ; 00486848
    PUSH EAX                            ; 0048684c
    PUSH EDX                            ; 0048684d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150 ; 0048684e
        ;   XREF to: 00460150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00486853
    JMP 0x004864e2                      ; 00486856
        ;   XREF to: 004864e2 (UNCONDITIONAL_JUMP)  ; LAB_004864e2
    SHL EDX,0x8                         ; 0048685b
        ;   Label: LAB_0048685b
    MOV ECX,dword ptr [ESP + 0x2ec]     ; 0048685e
    MOV EAX,EDX                         ; 00486865
    SAR EDX,0x1f                        ; 00486867
    IDIV ECX                            ; 0048686a
    MOV EBX,dword ptr [0x01c094b8]      ; 0048686c | DAT_01c094b8
    ADD EAX,EBX                         ; 00486872
    SHL EAX,0x10                        ; 00486874
    MOV dword ptr [ESP + 0x58],EAX      ; 00486877
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 0048687b
    MOV dword ptr [ESP + 0x60],EAX      ; 00486882
    MOV EAX,dword ptr [ESP + 0x58]      ; 00486886
    MOV dword ptr [ESP + 0x64],EAX      ; 0048688a
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 0048688e
    MOV dword ptr [ESP + 0x6c],EAX      ; 00486895
    MOV EAX,dword ptr [ESP + 0x2e0]     ; 00486899
    MOV EDX,EAX                         ; 004868a0
    SAR EDX,0x1f                        ; 004868a2
    IDIV ECX                            ; 004868a5
    XOR EDI,EDI                         ; 004868a7
    ADD EAX,EBX                         ; 004868a9
    MOV dword ptr [ESP + 0x78],EDI      ; 004868ab
    SHL EAX,0x10                        ; 004868af
    MOV dword ptr [ESP + 0x54],EDI      ; 004868b2
    MOV dword ptr [ESP + 0x70],EAX      ; 004868b6
    MOV dword ptr [ESP + 0x7c],EAX      ; 004868ba
    JMP 0x00486747                      ; 004868be
        ;   XREF to: 00486747 (UNCONDITIONAL_JUMP)  ; LAB_00486747
    MOV ESI,dword ptr [ESP + 0x2e4]     ; 004868c3
        ;   Label: LAB_004868c3
    PUSH ESI                            ; 004868ca
    MOV EDI,dword ptr [0x005ae704]      ; 004868cb | DAT_005ae704
    PUSH EDI                            ; 004868d1 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004868d2
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004868d7
    LEA EAX,[ESP + 0x38]                ; 004868da
    PUSH EAX                            ; 004868de
    MOV EAX,[0x005ae704]                ; 004868df | DAT_005ae704
    PUSH EAX                            ; 004868e4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370 ; 004868e5
        ;   XREF to: 00460370 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370()
    ADD ESP,0x8                         ; 004868ea
    JMP 0x004864e2                      ; 004868ed
        ;   XREF to: 004864e2 (UNCONDITIONAL_JUMP)  ; LAB_004864e2
    FLD1                                ; 004868f2
        ;   Label: LAB_004868f2
    FLD float ptr [ESP + 0x16c]         ; 004868f4
    FXCH                                ; 004868fb
    FDIV float ptr [ESP + 0x24]         ; 004868fd
    FXCH                                ; 00486901
    FMUL ST1                            ; 00486903
    FLD float ptr [ESP + 0x170]         ; 00486905
    FMUL ST2                            ; 0048690c
    FLD float ptr [ESP + 0x174]         ; 0048690e
    FMULP ST3                           ; 00486915
    FXCH                                ; 00486917
    FST float ptr [ESP + 0x1d8]         ; 00486919
    FLD float ptr [0x005811bc]          ; 00486920 | DOUBLE_005811bc
    FXCH                                ; 00486926
    FMUL ST1                            ; 00486928
    FXCH ST2                            ; 0048692a
    FST float ptr [ESP + 0x1dc]         ; 0048692c
    FMUL ST1                            ; 00486933
    FXCH ST3                            ; 00486935
    FST float ptr [ESP + 0x1e0]         ; 00486937
    FMULP                               ; 0048693e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00486940
    FXCH                                ; 00486943
    FSTP float ptr [ESP + 0x1fc]        ; 00486945
    FXCH                                ; 0048694c
    FSTP float ptr [ESP + 0x200]        ; 0048694e
    FSTP float ptr [ESP + 0x204]        ; 00486955
    FLD float ptr [EAX + 0xc]           ; 0048695c
    FSUB float ptr [ESP + 0x1fc]        ; 0048695f
    ADD EAX,0x20                        ; 00486966
    FSTP float ptr [ESP + 0x1e4]        ; 00486969
    FLD float ptr [EAX + -0x10]         ; 00486970
    FSUB float ptr [ESP + 0x200]        ; 00486973
    PUSH EAX                            ; 0048697a
    FSTP float ptr [ESP + 0x1ec]        ; 0048697b
    FLD float ptr [EAX + -0xc]          ; 00486982
    LEA EAX,[ESP + 0x1b8]               ; 00486985
    FSUB float ptr [ESP + 0x208]        ; 0048698c
    PUSH EAX                            ; 00486993
    FSTP float ptr [ESP + 0x1f4]        ; 00486994
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0048699b
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    MOV EDX,EAX                         ; 004869a0
    LEA EAX,[ESP + 0x27c]               ; 004869a2
    ADD ESP,0x8                         ; 004869a9
    CMP EAX,EDX                         ; 004869ac
    JZ 0x004869cd                       ; 004869ae
        ;   XREF to: 004869cd (CONDITIONAL_JUMP)  ; LAB_004869cd
    MOV EAX,dword ptr [EDX]             ; 004869b0
    MOV dword ptr [ESP + 0x274],EAX     ; 004869b2
    MOV EAX,dword ptr [EDX + 0x4]       ; 004869b9
    MOV dword ptr [ESP + 0x278],EAX     ; 004869bc
    MOV EAX,dword ptr [EDX + 0x8]       ; 004869c3
    MOV dword ptr [ESP + 0x27c],EAX     ; 004869c6
    LEA EAX,[ESP + 0x1e4]               ; 004869cd
        ;   Label: LAB_004869cd
    PUSH EAX                            ; 004869d4
    MOV EDX,dword ptr [0x005ae704]      ; 004869d5 | DAT_005ae704
    PUSH EDX                            ; 004869db | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004869dc
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004869e1
    PUSH 0x0                            ; 004869e4
    LEA EAX,[ESP + 0x278]               ; 004869e6
    PUSH EAX                            ; 004869ed
    MOV ECX,dword ptr [0x005ae704]      ; 004869ee | DAT_005ae704
    PUSH ECX                            ; 004869f4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004869f5
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 004869fa
    PUSH 0x5b855c                       ; 004869fd | DAT_005b855c
    MOV EBX,dword ptr [0x005ae704]      ; 00486a02 | DAT_005ae704
    PUSH EBX                            ; 00486a08 | DAT_01b4d738
    MOV ESI,0x3e4ccccd                  ; 00486a09
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00486a0e
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EBX,[ESP + 0x180]               ; 00486a13
    MOV EDX,dword ptr [0x005ae704]      ; 00486a1a | DAT_005ae704
    ADD ESP,0x8                         ; 00486a20
    XOR EAX,EAX                         ; 00486a23
    MOV dword ptr [ESP + 0x25c],ESI     ; 00486a25
    MOV dword ptr [ESP + 0x264],EAX     ; 00486a2c
    LEA EAX,[ESP + 0x25c]               ; 00486a33
    MOV dword ptr [ESP + 0x260],ESI     ; 00486a3a
    FLD float ptr [EAX]                 ; 00486a41
    FMUL float ptr [0x0059d1f8]         ; 00486a43 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00486a49
    FLD float ptr [EAX + 0x4]           ; 00486a4b
    FMUL float ptr [0x0059d1f8]         ; 00486a4e | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00486a54
    FLD float ptr [EAX + 0x8]           ; 00486a57
    FMUL float ptr [0x0059d1f8]         ; 00486a5a | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00486a60
    LEA EAX,[ESP + 0x178]               ; 00486a63
    PUSH EAX                            ; 00486a6a
    MOV EAX,dword ptr [EDX]             ; 00486a6b | DAT_01b4d738
    PUSH EAX                            ; 00486a6d
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00486a6e
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00486a73
    MOV BL,byte ptr [ESP + 0x25f]       ; 00486a76
    XOR BL,0x80                         ; 00486a7d
    LEA EAX,[ESP + 0x25c]               ; 00486a80
    MOV byte ptr [ESP + 0x25f],BL       ; 00486a87
    LEA EBX,[ESP + 0x238]               ; 00486a8e
    MOV EDX,dword ptr [0x005ae704]      ; 00486a95 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00486a9b
    FMUL float ptr [0x0059d1f8]         ; 00486a9d | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00486aa3
    FLD float ptr [EAX + 0x4]           ; 00486aa5
    FMUL float ptr [0x0059d1f8]         ; 00486aa8 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00486aae
    FLD float ptr [EAX + 0x8]           ; 00486ab1
    FMUL float ptr [0x0059d1f8]         ; 00486ab4 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00486aba
    LEA EAX,[ESP + 0x238]               ; 00486abd
    PUSH EAX                            ; 00486ac4
    MOV EAX,dword ptr [EDX]             ; 00486ac5 | DAT_01b4d738
    ADD EAX,0x30                        ; 00486ac7
    PUSH EAX                            ; 00486aca
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00486acb
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00486ad0
    MOV BH,byte ptr [ESP + 0x263]       ; 00486ad3
    XOR BH,0x80                         ; 00486ada
    LEA EAX,[ESP + 0x25c]               ; 00486add
    MOV byte ptr [ESP + 0x263],BH       ; 00486ae4
    LEA EBX,[ESP + 0x124]               ; 00486aeb
    MOV EDX,dword ptr [0x005ae704]      ; 00486af2 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00486af8
    FMUL float ptr [0x0059d1f8]         ; 00486afa | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00486b00
    FLD float ptr [EAX + 0x4]           ; 00486b02
    FMUL float ptr [0x0059d1f8]         ; 00486b05 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00486b0b
    FLD float ptr [EAX + 0x8]           ; 00486b0e
    FMUL float ptr [0x0059d1f8]         ; 00486b11 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00486b17
    LEA EAX,[ESP + 0x124]               ; 00486b1a
    PUSH EAX                            ; 00486b21
    MOV EAX,dword ptr [EDX]             ; 00486b22 | DAT_01b4d738
    ADD EAX,0x60                        ; 00486b24
    PUSH EAX                            ; 00486b27
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00486b28
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00486b2d
    LEA EBX,[ESP + 0x148]               ; 00486b30
    MOV CL,byte ptr [ESP + 0x25f]       ; 00486b37
    LEA EAX,[ESP + 0x25c]               ; 00486b3e
    XOR CL,0x80                         ; 00486b45
    MOV EDX,dword ptr [0x005ae704]      ; 00486b48 | DAT_005ae704
    MOV byte ptr [ESP + 0x25f],CL       ; 00486b4e
    FLD float ptr [EAX]                 ; 00486b55
    FMUL float ptr [0x0059d1f8]         ; 00486b57 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00486b5d
    FLD float ptr [EAX + 0x4]           ; 00486b5f
    FMUL float ptr [0x0059d1f8]         ; 00486b62 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00486b68
    FLD float ptr [EAX + 0x8]           ; 00486b6b
    FMUL float ptr [0x0059d1f8]         ; 00486b6e | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00486b74
    LEA EAX,[ESP + 0x148]               ; 00486b77
    PUSH EAX                            ; 00486b7e
    MOV EAX,dword ptr [EDX]             ; 00486b7f | DAT_01b4d738
    ADD EAX,0x90                        ; 00486b81
    PUSH EAX                            ; 00486b86
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00486b87
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00486b8c
    MOV EDX,0x4                         ; 00486b8f
    MOV EBX,0x3                         ; 00486b94
    MOV ESI,0x80000                     ; 00486b99
    MOV EAX,0xf80000                    ; 00486b9e
    XOR ECX,ECX                         ; 00486ba3
    MOV dword ptr [ESP + 0x84],EDX      ; 00486ba5
    MOV dword ptr [ESP + 0x94],ECX      ; 00486bac
    MOV dword ptr [ESP + 0x90],ECX      ; 00486bb3
    MOV dword ptr [ESP + 0x8c],ECX      ; 00486bba
    MOV dword ptr [ESP + 0x88],ECX      ; 00486bc1
    MOV dword ptr [ESP + 0x98],ECX      ; 00486bc8
    MOV dword ptr [ESP + 0xbc],EBX      ; 00486bcf
    MOV dword ptr [ESP + 0x9c],ESI      ; 00486bd6
    MOV dword ptr [ESP + 0xa0],ESI      ; 00486bdd
    MOV dword ptr [ESP + 0xa8],EAX      ; 00486be4
    MOV dword ptr [ESP + 0xac],ESI      ; 00486beb
    MOV dword ptr [ESP + 0xb4],EAX      ; 00486bf2
    MOV dword ptr [ESP + 0xb8],EAX      ; 00486bf9
    MOV dword ptr [ESP + 0xc0],ESI      ; 00486c00
    MOV dword ptr [ESP + 0xc4],EAX      ; 00486c07
    MOV EDX,0x1                         ; 00486c0e
    MOV ECX,0x2                         ; 00486c13
    MOV EAX,[0x005ae704]                ; 00486c18 | DAT_005ae704
    MOV dword ptr [ESP + 0xa4],EDX      ; 00486c1d
    MOV dword ptr [ESP + 0xb0],ECX      ; 00486c24
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486c2b
    MOV EBX,dword ptr [EAX]             ; 00486c2e | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00486c30
    MOV dword ptr [EBX + 0x20],EDX      ; 00486c33
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486c36
    MOV EBX,dword ptr [EAX]             ; 00486c39 | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x30]      ; 00486c3b
    MOV dword ptr [EBX + 0x24],EDX      ; 00486c3e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486c41
    MOV EBX,dword ptr [EAX]             ; 00486c44 | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x34]      ; 00486c46
    MOV dword ptr [EBX + 0x28],EDX      ; 00486c49
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486c4c
    MOV EBX,dword ptr [EAX]             ; 00486c4f | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00486c51
    MOV dword ptr [EBX + 0x50],EDX      ; 00486c54
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486c57
    MOV EBX,dword ptr [EAX]             ; 00486c5a | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x30]      ; 00486c5c
    MOV dword ptr [EBX + 0x54],EDX      ; 00486c5f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486c62
    MOV EBX,dword ptr [EAX]             ; 00486c65 | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x34]      ; 00486c67
    MOV dword ptr [EBX + 0x58],EDX      ; 00486c6a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486c6d
    MOV EBX,dword ptr [EAX]             ; 00486c70 | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00486c72
    MOV dword ptr [EBX + 0x80],EDX      ; 00486c75
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486c7b
    MOV EBX,dword ptr [EAX]             ; 00486c7e | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x30]      ; 00486c80
    MOV dword ptr [EBX + 0x84],EDX      ; 00486c83
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486c89
    MOV EBX,dword ptr [EAX]             ; 00486c8c | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x34]      ; 00486c8e
    MOV dword ptr [EBX + 0x88],EDX      ; 00486c91
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486c97
    MOV EBX,dword ptr [EAX]             ; 00486c9a | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00486c9c
    MOV dword ptr [EBX + 0xb0],EDX      ; 00486c9f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486ca5
    MOV EBX,dword ptr [EAX]             ; 00486ca8 | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x30]      ; 00486caa
    MOV dword ptr [EBX + 0xb4],EDX      ; 00486cad
    MOV EDX,dword ptr [EBP + 0x14]      ; 00486cb3
    PUSH 0x1                            ; 00486cb6
    MOV EBX,dword ptr [EAX]             ; 00486cb8 | DAT_01b4d738
    MOV EDX,dword ptr [EDX + 0x34]      ; 00486cba
    PUSH EAX                            ; 00486cbd | DAT_01b4d738
    MOV dword ptr [EBX + 0xb8],EDX      ; 00486cbe
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00486cc4
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00486cc9
    PUSH 0x471fff00                     ; 00486ccc
    PUSH 0x47000000                     ; 00486cd1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00486cd6
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x300],EAX     ; 00486cdb
    FLD float ptr [ESP + 0x300]         ; 00486ce2
    ADD ESP,0x8                         ; 00486ce9
    FMUL float ptr [ESP + 0x1c]         ; 00486cec
    CALL crt_math.c_round_FUN_00563a30  ; 00486cf0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x2f4]       ; 00486cf5
    MOV EAX,dword ptr [ESP + 0x2f4]     ; 00486cfc
    PUSH EAX                            ; 00486d03
    MOV EDX,dword ptr [0x005ae704]      ; 00486d04 | DAT_005ae704
    PUSH EDX                            ; 00486d0a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00486d0b
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00486d10
    LEA EAX,[ESP + 0x80]                ; 00486d13
    PUSH EAX                            ; 00486d1a
    MOV ECX,dword ptr [0x005ae704]      ; 00486d1b | DAT_005ae704
    PUSH ECX                            ; 00486d21 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370 ; 00486d22
        ;   XREF to: 00460370 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370()
    ADD ESP,0x8                         ; 00486d27
    MOV EBX,dword ptr [0x005ae704]      ; 00486d2a | DAT_005ae704
    PUSH EBX                            ; 00486d30 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00486d31
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00486d36
    JMP 0x00486534                      ; 00486d39
        ;   XREF to: 00486534 (UNCONDITIONAL_JUMP)  ; LAB_00486534


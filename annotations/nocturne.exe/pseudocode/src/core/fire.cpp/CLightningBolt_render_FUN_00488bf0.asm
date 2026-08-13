; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLightningBolt_render_FUN_00488bf0(CLightningBolt *this_ptr)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xdc]:1  local_dc
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a8d2
;
; Referenced Globals:
;   double DOUBLE_00581424 = 256
;   double DOUBLE_0058142c = 0.25
;   float FLOAT_0059d1f8 = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_005b8b14
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c505c
;   undefined4 DAT_005c5060
;   undefined4 DAT_005c5064
;   undefined4 DAT_005c5068
;   undefined4 DAT_005c506c
;   ... and 11 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   crt_stdlib.c_rand_FUN_0056488c
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;   engine_special.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00488bf0
        ;   Label: core_fire.cpp_CLightningBolt_render_FUN_00488bf0
    SUB ESP,0xd8                        ; 00488bf1
    MOV EBP,dword ptr [ESP + 0xe0]      ; 00488bf7
    FLD float ptr [EBP + 0x14]          ; 00488bfe
    FLDZ                                ; 00488c01
    FCOMPP                              ; 00488c03
    FNSTSW AX                           ; 00488c05
    SAHF                                ; 00488c07
    JC 0x00488c12                       ; 00488c08
        ;   XREF to: 00488c12 (CONDITIONAL_JUMP)  ; LAB_00488c12
    ADD ESP,0xd8                        ; 00488c0a
    POP EBP                             ; 00488c10
    RET                                 ; 00488c11
    PUSH EDI                            ; 00488c12
        ;   Label: LAB_00488c12
    PUSH ESI                            ; 00488c13
    PUSH EBX                            ; 00488c14
    CALL crt_stdlib.c_rand_FUN_0056488c ; 00488c15
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    MOV EDX,EAX                         ; 00488c1a
    MOV EBX,0x6                         ; 00488c1c
    SAR EDX,0x1f                        ; 00488c21
    IDIV EBX                            ; 00488c24
    LEA EAX,[EDX*0x4 + 0x0]             ; 00488c26
    SUB EAX,EDX                         ; 00488c2d
    SHL EAX,0x3                         ; 00488c2f
    ADD EAX,0x5b8b14                    ; 00488c32 | DAT_005b8b14
    PUSH EAX                            ; 00488c37
    MOV EDX,dword ptr [0x005ae704]      ; 00488c38 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00488c3e | DAT_01b4d738
    MOV ESI,0x3                         ; 00488c3f
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00488c44
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV ECX,0x4                         ; 00488c49
    ADD ESP,0x8                         ; 00488c4e
    XOR EBX,EBX                         ; 00488c51
    MOV dword ptr [ESP + 0x10],ECX      ; 00488c53
    MOV dword ptr [ESP + 0x20],EBX      ; 00488c57
    MOV dword ptr [ESP + 0x1c],EBX      ; 00488c5b
    MOV dword ptr [ESP + 0x18],EBX      ; 00488c5f
    MOV dword ptr [ESP + 0x14],EBX      ; 00488c63
    MOV dword ptr [ESP + 0x24],EBX      ; 00488c67
    MOV dword ptr [ESP + 0x30],ESI      ; 00488c6b
    MOV ECX,0x1                         ; 00488c6f
    MOV EBX,0x2                         ; 00488c74
    MOV dword ptr [ESP + 0x28],ECX      ; 00488c79
    MOV dword ptr [ESP + 0x2c],EBX      ; 00488c7d
    CALL crt_stdlib.c_rand_FUN_0056488c ; 00488c81
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    TEST AL,0x1                         ; 00488c86
    JZ 0x00488f36                       ; 00488c88
        ;   XREF to: 00488f36 (CONDITIONAL_JUMP)  ; LAB_00488f36
    MOV EDX,0x80000                     ; 00488c8e
    MOV EBX,0xf80000                    ; 00488c93
    MOV dword ptr [0x005c5030],EDX      ; 00488c98 | DAT_005c5030
    MOV dword ptr [0x005c505c],EBX      ; 00488c9e | DAT_005c505c
    MOV dword ptr [0x005c5060],EDX      ; 00488ca4 | DAT_005c5060
    MOV dword ptr [0x005c508c],EBX      ; 00488caa | DAT_005c508c
    MOV dword ptr [0x005c5090],EBX      ; 00488cb0 | DAT_005c5090
    MOV dword ptr [0x005c50bc],EDX      ; 00488cb6 | DAT_005c50bc
    MOV dword ptr [0x005c50c0],EBX      ; 00488cbc | DAT_005c50c0
    MOV dword ptr [0x005c502c],EDX      ; 00488cc2 | DAT_005c502c
    MOV EBX,0xffff                      ; 00488cc8
        ;   Label: LAB_00488cc8
    MOV dword ptr [0x005c5034],EBX      ; 00488ccd | DAT_005c5034
    MOV dword ptr [0x005c5038],EBX      ; 00488cd3 | DAT_005c5038
    MOV dword ptr [0x005c503c],EBX      ; 00488cd9 | DAT_005c503c
    MOV dword ptr [0x005c5064],EBX      ; 00488cdf | DAT_005c5064
    MOV dword ptr [0x005c5068],EBX      ; 00488ce5 | DAT_005c5068
    MOV dword ptr [0x005c506c],EBX      ; 00488ceb | DAT_005c506c
    MOV dword ptr [0x005c5094],EBX      ; 00488cf1 | DAT_005c5094
    MOV dword ptr [0x005c5098],EBX      ; 00488cf7 | DAT_005c5098
    MOV dword ptr [0x005c509c],EBX      ; 00488cfd | DAT_005c509c
    MOV dword ptr [0x005c50c4],EBX      ; 00488d03 | DAT_005c50c4
    MOV dword ptr [0x005c50c8],EBX      ; 00488d09 | DAT_005c50c8
    PUSH EBX                            ; 00488d0f
    MOV dword ptr [0x005c50cc],EBX      ; 00488d10 | DAT_005c50cc
    MOV EBX,dword ptr [0x005ae704]      ; 00488d16 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00488d1c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00488d1d
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00488d22
    PUSH 0x1                            ; 00488d25
    MOV ESI,dword ptr [0x005ae704]      ; 00488d27 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 00488d2d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00488d2e
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00488d33
    MOV EDI,dword ptr [EBP]             ; 00488d36
    LEA ESI,[EBP + 0x4]                 ; 00488d39
    TEST EDI,EDI                        ; 00488d3c
    JNZ 0x00488f7d                      ; 00488d3e
        ;   XREF to: 00488f7d (CONDITIONAL_JUMP)  ; LAB_00488f7d
    PUSH ESI                            ; 00488d44
    MOV EBX,dword ptr [0x005ae704]      ; 00488d45 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00488d4b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00488d4c
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00488d51
    LEA EAX,[ESP + 0xc4]                ; 00488d54
    PUSH EAX                            ; 00488d5b
    MOV ESI,dword ptr [0x005ae704]      ; 00488d5c | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 00488d62 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0 ; 00488d63
        ;   XREF to: 00460db0 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 00488d68
    PUSH EDI                            ; 00488d6b
    LEA EAX,[ESP + 0xc8]                ; 00488d6c
    PUSH EAX                            ; 00488d73
    MOV EAX,[0x005ae704]                ; 00488d74 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 00488d79 | DAT_01b4d738
    MOV dword ptr [ESP + 0xd0],EDI      ; 00488d7a
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00488d81
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00488d86
    MOV dword ptr [ESP + 0x34],EDI      ; 00488d89
    MOV dword ptr [ESP + 0x38],EDI      ; 00488d8d
    MOV dword ptr [ESP + 0x3c],EDI      ; 00488d91
    FLD float ptr [EBP + 0x18]          ; 00488d95
    FLDZ                                ; 00488d98
    FCOMPP                              ; 00488d9a
    FNSTSW AX                           ; 00488d9c
    SAHF                                ; 00488d9e
    JC 0x00488f71                       ; 00488d9f
        ;   XREF to: 00488f71 (CONDITIONAL_JUMP)  ; LAB_00488f71
    FLD float ptr [EBP + 0x10]          ; 00488da5
    FMUL double ptr [0x0058142c]        ; 00488da8 | DOUBLE_0058142c
    FSTP float ptr [ESP + 0x34]         ; 00488dae
    MOV EAX,dword ptr [EBP + 0x10]      ; 00488db2
        ;   Label: LAB_00488db2
    LEA EBX,[ESP + 0x88]                ; 00488db5
    MOV dword ptr [ESP + 0x38],EAX      ; 00488dbc
    LEA EAX,[ESP + 0x34]                ; 00488dc0
    MOV EDX,dword ptr [0x005ae704]      ; 00488dc4 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00488dca
    FMUL float ptr [0x0059d1f8]         ; 00488dcc | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00488dd2
    FLD float ptr [EAX + 0x4]           ; 00488dd4
    FMUL float ptr [0x0059d1f8]         ; 00488dd7 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00488ddd
    FLD float ptr [EAX + 0x8]           ; 00488de0
    FMUL float ptr [0x0059d1f8]         ; 00488de3 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00488de9
    LEA EAX,[ESP + 0x88]                ; 00488dec
    PUSH EAX                            ; 00488df3
    MOV EAX,dword ptr [EDX]             ; 00488df4 | DAT_01b4d738
    PUSH EAX                            ; 00488df6
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00488df7
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00488dfc
    MOV AH,byte ptr [ESP + 0x37]        ; 00488dff
    XOR AH,0x80                         ; 00488e03
    LEA EBX,[ESP + 0xa0]                ; 00488e06
    MOV byte ptr [ESP + 0x37],AH        ; 00488e0d
    LEA EAX,[ESP + 0x34]                ; 00488e11
    MOV EDX,dword ptr [0x005ae704]      ; 00488e15 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00488e1b
    FMUL float ptr [0x0059d1f8]         ; 00488e1d | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00488e23
    FLD float ptr [EAX + 0x4]           ; 00488e25
    FMUL float ptr [0x0059d1f8]         ; 00488e28 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00488e2e
    FLD float ptr [EAX + 0x8]           ; 00488e31
    FMUL float ptr [0x0059d1f8]         ; 00488e34 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00488e3a
    LEA EAX,[ESP + 0xa0]                ; 00488e3d
    PUSH EAX                            ; 00488e44
    MOV EAX,dword ptr [EDX]             ; 00488e45 | DAT_01b4d738
    ADD EAX,0x30                        ; 00488e47
    PUSH EAX                            ; 00488e4a
    XOR ESI,ESI                         ; 00488e4b
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00488e4d
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0xc0]                ; 00488e52
    LEA EAX,[ESP + 0x3c]                ; 00488e59
    ADD ESP,0x8                         ; 00488e5d
    MOV EDX,dword ptr [0x005ae704]      ; 00488e60 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x38],ESI      ; 00488e66
    FLD float ptr [EAX]                 ; 00488e6a
    FMUL float ptr [0x0059d1f8]         ; 00488e6c | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00488e72
    FLD float ptr [EAX + 0x4]           ; 00488e74
    FMUL float ptr [0x0059d1f8]         ; 00488e77 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00488e7d
    FLD float ptr [EAX + 0x8]           ; 00488e80
    FMUL float ptr [0x0059d1f8]         ; 00488e83 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00488e89
    LEA EAX,[ESP + 0xb8]                ; 00488e8c
    PUSH EAX                            ; 00488e93
    MOV EAX,dword ptr [EDX]             ; 00488e94 | DAT_01b4d738
    ADD EAX,0x60                        ; 00488e96
    PUSH EAX                            ; 00488e99
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00488e9a
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00488e9f
    MOV DL,byte ptr [ESP + 0x37]        ; 00488ea2
    LEA EBX,[ESP + 0xd0]                ; 00488ea6
    XOR DL,0x80                         ; 00488ead
    LEA EAX,[ESP + 0x34]                ; 00488eb0
    MOV byte ptr [ESP + 0x37],DL        ; 00488eb4
    MOV EDX,dword ptr [0x005ae704]      ; 00488eb8 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00488ebe
    FMUL float ptr [0x0059d1f8]         ; 00488ec0 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00488ec6
    FLD float ptr [EAX + 0x4]           ; 00488ec8
    FMUL float ptr [0x0059d1f8]         ; 00488ecb | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00488ed1
    FLD float ptr [EAX + 0x8]           ; 00488ed4
    FMUL float ptr [0x0059d1f8]         ; 00488ed7 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00488edd
    LEA EAX,[ESP + 0xd0]                ; 00488ee0
    PUSH EAX                            ; 00488ee7
    MOV EAX,dword ptr [EDX]             ; 00488ee8 | DAT_01b4d738
    ADD EAX,0x90                        ; 00488eea
    PUSH EAX                            ; 00488eef
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00488ef0
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00488ef5
    LEA EAX,[ESP + 0xc]                 ; 00488ef8
    PUSH EAX                            ; 00488efc
    MOV EDI,dword ptr [0x005ae704]      ; 00488efd | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 00488f03 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 00488f04
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00488f09
    MOV EBP,dword ptr [0x005ae704]      ; 00488f0c | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 00488f12 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00488f13
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00488f18
    PUSH 0x0                            ; 00488f1b
        ;   Label: LAB_00488f1b
    MOV EAX,[0x005ae704]                ; 00488f1d | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 00488f22 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00488f23
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00488f28
    POP EBX                             ; 00488f2b
    POP ESI                             ; 00488f2c
    POP EDI                             ; 00488f2d
    ADD ESP,0xd8                        ; 00488f2e
    POP EBP                             ; 00488f34
    RET                                 ; 00488f35
    MOV EAX,0x80000                     ; 00488f36
        ;   Label: LAB_00488f36
    MOV EDI,0xf80000                    ; 00488f3b
    MOV [0x005c5030],EAX                ; 00488f40 | DAT_005c5030
    MOV [0x005c505c],EAX                ; 00488f45 | DAT_005c505c
    MOV [0x005c5060],EAX                ; 00488f4a | DAT_005c5060
    MOV [0x005c508c],EAX                ; 00488f4f | DAT_005c508c
    MOV dword ptr [0x005c5090],EDI      ; 00488f54 | DAT_005c5090
    MOV dword ptr [0x005c50bc],EDI      ; 00488f5a | DAT_005c50bc
    MOV dword ptr [0x005c50c0],EDI      ; 00488f60 | DAT_005c50c0
    MOV dword ptr [0x005c502c],EDI      ; 00488f66 | DAT_005c502c
    JMP 0x00488cc8                      ; 00488f6c
        ;   XREF to: 00488cc8 (UNCONDITIONAL_JUMP)  ; LAB_00488cc8
    MOV EAX,dword ptr [EBP + 0x18]      ; 00488f71
        ;   Label: LAB_00488f71
    MOV dword ptr [ESP + 0x34],EAX      ; 00488f74
    JMP 0x00488db2                      ; 00488f78
        ;   XREF to: 00488db2 (UNCONDITIONAL_JUMP)  ; LAB_00488db2
    MOV EAX,[0x005ae704]                ; 00488f7d | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_00488f7d
    LEA EBX,[ESP + 0x4c]                ; 00488f82
    MOV EDX,dword ptr [EAX]             ; 00488f86 | DAT_01b4d738
    MOV EAX,ESI                         ; 00488f88
    FLD float ptr [EAX]                 ; 00488f8a
    FMUL float ptr [0x0059d1f8]         ; 00488f8c | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00488f92
    FLD float ptr [EAX + 0x4]           ; 00488f94
    FMUL float ptr [0x0059d1f8]         ; 00488f97 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00488f9d
    FLD float ptr [EAX + 0x8]           ; 00488fa0
    FMUL float ptr [0x0059d1f8]         ; 00488fa3 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00488fa9
    LEA EAX,[ESP + 0x4c]                ; 00488fac
    PUSH EAX                            ; 00488fb0
    PUSH EDX                            ; 00488fb1
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 00488fb2
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 00488fb7 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 00488fbc | DAT_01b4d738
    ADD ESP,0x8                         ; 00488fbe
    LEA EDX,[EAX + 0x30]                ; 00488fc1
    LEA EBX,[ESP + 0x7c]                ; 00488fc4
    MOV EAX,ESI                         ; 00488fc8
    FLD float ptr [EAX]                 ; 00488fca
    FMUL float ptr [0x0059d1f8]         ; 00488fcc | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00488fd2
    FLD float ptr [EAX + 0x4]           ; 00488fd4
    FMUL float ptr [0x0059d1f8]         ; 00488fd7 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00488fdd
    FLD float ptr [EAX + 0x8]           ; 00488fe0
    FMUL float ptr [0x0059d1f8]         ; 00488fe3 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00488fe9
    LEA EAX,[ESP + 0x7c]                ; 00488fec
    PUSH EAX                            ; 00488ff0
    PUSH EDX                            ; 00488ff1
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 00488ff2
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 00488ff7 | g_CDemonRenderer_PTR_005ae704
    LEA EDI,[EBP + 0x1c]                ; 00488ffc
    MOV EAX,dword ptr [EAX]             ; 00488fff | DAT_01b4d738
    ADD ESP,0x8                         ; 00489001
    LEA EDX,[EAX + 0x60]                ; 00489004
    LEA EBX,[ESP + 0xac]                ; 00489007
    MOV EAX,EDI                         ; 0048900e
    FLD float ptr [EAX]                 ; 00489010
    FMUL float ptr [0x0059d1f8]         ; 00489012 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489018
    FLD float ptr [EAX + 0x4]           ; 0048901a
    FMUL float ptr [0x0059d1f8]         ; 0048901d | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489023
    FLD float ptr [EAX + 0x8]           ; 00489026
    FMUL float ptr [0x0059d1f8]         ; 00489029 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048902f
    LEA EAX,[ESP + 0xac]                ; 00489032
    PUSH EAX                            ; 00489039
    PUSH EDX                            ; 0048903a
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 0048903b
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 00489040 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 00489045 | DAT_01b4d738
    ADD ESP,0x8                         ; 00489047
    LEA EDX,[EAX + 0x90]                ; 0048904a
    LEA EBX,[ESP + 0x58]                ; 00489050
    MOV EAX,EDI                         ; 00489054
    FLD float ptr [EAX]                 ; 00489056
    FMUL float ptr [0x0059d1f8]         ; 00489058 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 0048905e
    FLD float ptr [EAX + 0x4]           ; 00489060
    FMUL float ptr [0x0059d1f8]         ; 00489063 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489069
    FLD float ptr [EAX + 0x8]           ; 0048906c
    FMUL float ptr [0x0059d1f8]         ; 0048906f | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489075
    LEA EAX,[ESP + 0x58]                ; 00489078
    PUSH EAX                            ; 0048907c
    PUSH EDX                            ; 0048907d
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 0048907e
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x18]          ; 00489083
    MOV EDX,dword ptr [0x005ae704]      ; 00489086 | g_CDemonRenderer_PTR_005ae704
    FLD double ptr [0x00581424]         ; 0048908c | DOUBLE_00581424
    FXCH                                ; 00489092
    FMUL ST1                            ; 00489094
    MOV EAX,dword ptr [EDX]             ; 00489096 | DAT_01b4d738
    FLD float ptr [EBP + 0x28]          ; 00489098
    ADD ESP,0x8                         ; 0048909b
    MOV dword ptr [EAX + 0x10],0x80000000 ; 0048909e
    FXCH                                ; 004890a5
    CALL crt_math.c_round_FUN_00563a30  ; 004890a7
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EBX,dword ptr [EDX]             ; 004890ac
    FISTP dword ptr [ESP + 0xdc]        ; 004890ae
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004890b5
    SUB dword ptr [EBX + 0x4],EAX       ; 004890bc
    MOV EAX,dword ptr [EDX]             ; 004890bf
    MOV dword ptr [EAX + 0x40],0x80000000 ; 004890c1
    MOV EBX,dword ptr [EDX]             ; 004890c8
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004890ca
    ADD dword ptr [EBX + 0x34],EAX      ; 004890d1
    MOV EAX,dword ptr [EDX]             ; 004890d4
    FMULP                               ; 004890d6
    MOV dword ptr [EAX + 0x70],0x80000000 ; 004890d8
    CALL crt_math.c_round_FUN_00563a30  ; 004890df
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EBX,dword ptr [EDX]             ; 004890e4
    FISTP dword ptr [ESP + 0xe0]        ; 004890e6
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004890ed
    ADD dword ptr [EBX + 0x64],EAX      ; 004890f4
    MOV EAX,dword ptr [EDX]             ; 004890f7
    MOV dword ptr [EAX + 0xa0],0x80000000 ; 004890f9
    MOV EBX,dword ptr [EDX]             ; 00489103
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00489105
    MOV ECX,dword ptr [EBX + 0x94]      ; 0048910c
    SUB ECX,EAX                         ; 00489112
    LEA EAX,[ESP + 0xc]                 ; 00489114
    PUSH EAX                            ; 00489118
    PUSH EDX                            ; 00489119
    MOV dword ptr [EBX + 0x94],ECX      ; 0048911a
    LEA EBX,[ESP + 0x9c]                ; 00489120
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 00489127
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EDX,dword ptr [0x005ae704]      ; 0048912c | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0x8                         ; 00489132
    MOV EAX,ESI                         ; 00489135
    MOV EDX,dword ptr [EDX]             ; 00489137 | DAT_01b4d738
    FLD float ptr [EAX]                 ; 00489139
    FMUL float ptr [0x0059d1f8]         ; 0048913b | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489141
    FLD float ptr [EAX + 0x4]           ; 00489143
    FMUL float ptr [0x0059d1f8]         ; 00489146 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 0048914c
    FLD float ptr [EAX + 0x8]           ; 0048914f
    FMUL float ptr [0x0059d1f8]         ; 00489152 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489158
    LEA EAX,[ESP + 0x94]                ; 0048915b
    PUSH EAX                            ; 00489162
    PUSH EDX                            ; 00489163
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 00489164
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 00489169 | g_CDemonRenderer_PTR_005ae704
    LEA EBX,[ESP + 0x78]                ; 0048916e
    ADD ESP,0x8                         ; 00489172
    MOV EDX,dword ptr [EAX]             ; 00489175 | DAT_01b4d738
    MOV EAX,ESI                         ; 00489177
    FLD float ptr [EAX]                 ; 00489179
    FMUL float ptr [0x0059d1f8]         ; 0048917b | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489181
    FLD float ptr [EAX + 0x4]           ; 00489183
    FMUL float ptr [0x0059d1f8]         ; 00489186 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 0048918c
    FLD float ptr [EAX + 0x8]           ; 0048918f
    FMUL float ptr [0x0059d1f8]         ; 00489192 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489198
    LEA EAX,[ESP + 0x70]                ; 0048919b
    PUSH EAX                            ; 0048919f
    ADD EDX,0x30                        ; 004891a0
    PUSH EDX                            ; 004891a3
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004891a4
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 004891a9 | g_CDemonRenderer_PTR_005ae704
    LEA EBX,[ESP + 0x48]                ; 004891ae
    ADD ESP,0x8                         ; 004891b2
    MOV EDX,dword ptr [EAX]             ; 004891b5 | DAT_01b4d738
    MOV EAX,EDI                         ; 004891b7
    FLD float ptr [EAX]                 ; 004891b9
    FMUL float ptr [0x0059d1f8]         ; 004891bb | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 004891c1
    FLD float ptr [EAX + 0x4]           ; 004891c3
    FMUL float ptr [0x0059d1f8]         ; 004891c6 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 004891cc
    FLD float ptr [EAX + 0x8]           ; 004891cf
    FMUL float ptr [0x0059d1f8]         ; 004891d2 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 004891d8
    LEA EAX,[ESP + 0x40]                ; 004891db
    PUSH EAX                            ; 004891df
    ADD EDX,0x60                        ; 004891e0
    PUSH EDX                            ; 004891e3
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004891e4
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 004891e9 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 004891ee | DAT_01b4d738
    ADD ESP,0x8                         ; 004891f0
    LEA EDX,[EAX + 0x90]                ; 004891f3
    LEA EBX,[ESP + 0x64]                ; 004891f9
    MOV EAX,EDI                         ; 004891fd
    FLD float ptr [EAX]                 ; 004891ff
    FMUL float ptr [0x0059d1f8]         ; 00489201 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489207
    FLD float ptr [EAX + 0x4]           ; 00489209
    FMUL float ptr [0x0059d1f8]         ; 0048920c | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489212
    FLD float ptr [EAX + 0x8]           ; 00489215
    FMUL float ptr [0x0059d1f8]         ; 00489218 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048921e
    LEA EAX,[ESP + 0x64]                ; 00489221
    PUSH EAX                            ; 00489225
    PUSH EDX                            ; 00489226
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 00489227
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048922c
    MOV ESI,dword ptr [0x005ae704]      ; 0048922f | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [ESI]             ; 00489235 | DAT_01b4d738
    MOV dword ptr [EAX + 0x10],0x80000000 ; 00489237
    MOV EDX,dword ptr [ESI]             ; 0048923e | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00489240
    SUB dword ptr [EDX],EAX             ; 00489247
    MOV EAX,dword ptr [ESI]             ; 00489249 | DAT_01b4d738
    MOV dword ptr [EAX + 0x40],0x80000000 ; 0048924b
    MOV EDX,dword ptr [ESI]             ; 00489252 | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00489254
    ADD dword ptr [EDX + 0x30],EAX      ; 0048925b
    MOV EAX,dword ptr [ESI]             ; 0048925e | DAT_01b4d738
    MOV dword ptr [EAX + 0x70],0x80000000 ; 00489260
    MOV EDX,dword ptr [ESI]             ; 00489267 | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00489269
    ADD dword ptr [EDX + 0x60],EAX      ; 00489270
    MOV EAX,dword ptr [ESI]             ; 00489273 | DAT_01b4d738
    MOV dword ptr [EAX + 0xa0],0x80000000 ; 00489275
    MOV EDX,dword ptr [ESI]             ; 0048927f | DAT_01b4d738
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00489281
    MOV ECX,dword ptr [EDX + 0x90]      ; 00489288
    SUB ECX,EAX                         ; 0048928e
    LEA EAX,[ESP + 0xc]                 ; 00489290
    PUSH EAX                            ; 00489294
    PUSH ESI                            ; 00489295 | DAT_01b4d738
    MOV dword ptr [EDX + 0x90],ECX      ; 00489296
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 0048929c
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004892a1
    JMP 0x00488f1b                      ; 004892a4
        ;   XREF to: 00488f1b (UNCONDITIONAL_JUMP)  ; LAB_00488f1b


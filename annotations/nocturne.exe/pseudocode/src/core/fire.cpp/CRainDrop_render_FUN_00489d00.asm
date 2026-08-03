; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_CRainDrop_render_FUN_00489d00(CVector3f *param_1)
;
; Local Variables:
; undefined        Stack[-0xa8]:1  local_a8
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
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   double DOUBLE_00581464 = 4
;   float FLOAT_0059d1f8 = 256
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b8bbc
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c5040
;   undefined4 DAT_005c505c
;   undefined4 DAT_005c5060
;   undefined4 DAT_005c5070
;   undefined4 DAT_005c508c
;   undefined4 DAT_005c5090
;   undefined4 DAT_005c50a0
;   undefined4 DAT_005c50bc
;   ... and 7 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
;   core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_FUN_00460d90
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;   engine_special.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489d00
        ;   Label: core_fire.cpp_CRainDrop_render_FUN_00489d00
    PUSH ESI                            ; 00489d01
    PUSH EBP                            ; 00489d02
    SUB ESP,0x9c                        ; 00489d03
    MOV EBP,dword ptr [ESP + 0xac]      ; 00489d09
    MOV ESI,dword ptr [0x005ae704]      ; 00489d10 | DAT_005ae704
    LEA EBX,[ESP + 0x34]                ; 00489d16
    MOV EAX,EBP                         ; 00489d1a
    MOV ESI,dword ptr [ESI]             ; 00489d1c | DAT_01b4d738
    FLD float ptr [EAX]                 ; 00489d1e
    FMUL float ptr [0x0059d1f8]         ; 00489d20 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489d26
    FLD float ptr [EAX + 0x4]           ; 00489d28
    FMUL float ptr [0x0059d1f8]         ; 00489d2b | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489d31
    FLD float ptr [EAX + 0x8]           ; 00489d34
    FMUL float ptr [0x0059d1f8]         ; 00489d37 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489d3d
    LEA EAX,[ESP + 0x34]                ; 00489d40
    PUSH EAX                            ; 00489d44
    PUSH ESI                            ; 00489d45
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 00489d46
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00489d4b
    PUSH ESI                            ; 00489d4e
    MOV EDX,dword ptr [0x005ae704]      ; 00489d4f | DAT_005ae704
    PUSH EDX                            ; 00489d55 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80 ; 00489d56
        ;   XREF to: 00461f80 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 00489d5b
    TEST EAX,EAX                        ; 00489d5e
    JNZ 0x00489d6c                      ; 00489d60
        ;   XREF to: 00489d6c (CONDITIONAL_JUMP)  ; LAB_00489d6c
    ADD ESP,0x9c                        ; 00489d62
    POP EBP                             ; 00489d68
    POP ESI                             ; 00489d69
    POP EBX                             ; 00489d6a
    RET                                 ; 00489d6b
    PUSH EDI                            ; 00489d6c
        ;   Label: LAB_00489d6c
    PUSH EBP                            ; 00489d6d
    MOV ECX,dword ptr [0x005ae704]      ; 00489d6e | DAT_005ae704
    PUSH ECX                            ; 00489d74 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00489d75
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00489d7a
    MOV EBX,dword ptr [0x005ae704]      ; 00489d7d | DAT_005ae704
    PUSH EBX                            ; 00489d83 | DAT_01b4d738
    LEA ESI,[ESP + 0x78]                ; 00489d84
    LEA EDI,[ESP + 0x90]                ; 00489d88
    CALL engine_drender.cpp_FUN_00460d90 ; 00489d8f
        ;   XREF to: 00460d90 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00460d90()
    ADD ESP,0x4                         ; 00489d94
    LEA ESI,[ESP + 0x74]                ; 00489d97
    LEA EAX,[ESP + 0x8c]                ; 00489d9b
    PUSH 0x0                            ; 00489da2
    MOVSD ES:EDI,ESI                    ; 00489da4
    MOVSD ES:EDI,ESI                    ; 00489da5
    MOVSD ES:EDI,ESI                    ; 00489da6
    PUSH EAX                            ; 00489da7
    MOV ESI,dword ptr [0x005ae704]      ; 00489da8 | DAT_005ae704
    PUSH ESI                            ; 00489dae | DAT_01b4d738
    LEA EBX,[ESP + 0x50]                ; 00489daf
    MOV EDI,0xbe000000                  ; 00489db3
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50 ; 00489db8
        ;   XREF to: 00460a50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    LEA EAX,[ESP + 0x5c]                ; 00489dbd
    MOV ESI,dword ptr [0x005ae704]      ; 00489dc1 | DAT_005ae704
    ADD ESP,0xc                         ; 00489dc7
    XOR EDX,EDX                         ; 00489dca
    MOV dword ptr [ESP + 0x50],EDI      ; 00489dcc
    MOV dword ptr [ESP + 0x54],EDI      ; 00489dd0
    MOV dword ptr [ESP + 0x58],EDX      ; 00489dd4
    FLD float ptr [EAX]                 ; 00489dd8
    FMUL float ptr [0x0059d1f8]         ; 00489dda | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489de0
    FLD float ptr [EAX + 0x4]           ; 00489de2
    FMUL float ptr [0x0059d1f8]         ; 00489de5 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489deb
    FLD float ptr [EAX + 0x8]           ; 00489dee
    FMUL float ptr [0x0059d1f8]         ; 00489df1 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489df7
    LEA EAX,[ESP + 0x44]                ; 00489dfa
    PUSH EAX                            ; 00489dfe
    MOV EAX,dword ptr [ESI]             ; 00489dff | DAT_01b4d738
    PUSH EAX                            ; 00489e01
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00489e02
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    XOR ESI,ESI                         ; 00489e07
    MOV ECX,0x3e000000                  ; 00489e09
    LEA EBX,[ESP + 0x34]                ; 00489e0e
    ADD ESP,0x8                         ; 00489e12
    LEA EAX,[ESP + 0x50]                ; 00489e15
    MOV dword ptr [ESP + 0x50],ECX      ; 00489e19
    MOV dword ptr [ESP + 0x54],EDI      ; 00489e1d
    MOV dword ptr [ESP + 0x58],ESI      ; 00489e21
    MOV ESI,dword ptr [0x005ae704]      ; 00489e25 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00489e2b
    FMUL float ptr [0x0059d1f8]         ; 00489e2d | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489e33
    FLD float ptr [EAX + 0x4]           ; 00489e35
    FMUL float ptr [0x0059d1f8]         ; 00489e38 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489e3e
    FLD float ptr [EAX + 0x8]           ; 00489e41
    FMUL float ptr [0x0059d1f8]         ; 00489e44 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489e4a
    LEA EAX,[ESP + 0x2c]                ; 00489e4d
    PUSH EAX                            ; 00489e51
    MOV EAX,dword ptr [ESI]             ; 00489e52 | DAT_01b4d738
    ADD EAX,0x30                        ; 00489e54
    PUSH EAX                            ; 00489e57
    MOV EDI,0x3e000000                  ; 00489e58
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00489e5d
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x005ae704]      ; 00489e62 | DAT_005ae704
    ADD ESP,0x8                         ; 00489e68
    XOR EDX,EDX                         ; 00489e6b
    MOV dword ptr [ESP + 0x50],EDI      ; 00489e6d
    MOV dword ptr [ESP + 0x54],EDI      ; 00489e71
    MOV dword ptr [ESP + 0x58],EDX      ; 00489e75
    LEA EBX,[ESP + 0x68]                ; 00489e79
    LEA EAX,[ESP + 0x50]                ; 00489e7d
    FLD float ptr [EAX]                 ; 00489e81
    FMUL float ptr [0x0059d1f8]         ; 00489e83 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489e89
    FLD float ptr [EAX + 0x4]           ; 00489e8b
    FMUL float ptr [0x0059d1f8]         ; 00489e8e | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489e94
    FLD float ptr [EAX + 0x8]           ; 00489e97
    FMUL float ptr [0x0059d1f8]         ; 00489e9a | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489ea0
    LEA EAX,[ESP + 0x68]                ; 00489ea3
    PUSH EAX                            ; 00489ea7
    MOV EAX,dword ptr [ESI]             ; 00489ea8 | DAT_01b4d738
    ADD EAX,0x60                        ; 00489eaa
    PUSH EAX                            ; 00489ead
    XOR ESI,ESI                         ; 00489eae
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00489eb0
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0xbe000000                  ; 00489eb5
    LEA EBX,[ESP + 0x64]                ; 00489eba
    ADD ESP,0x8                         ; 00489ebe
    LEA EAX,[ESP + 0x50]                ; 00489ec1
    MOV dword ptr [ESP + 0x50],ECX      ; 00489ec5
    MOV dword ptr [ESP + 0x54],EDI      ; 00489ec9
    MOV dword ptr [ESP + 0x58],ESI      ; 00489ecd
    MOV ESI,dword ptr [0x005ae704]      ; 00489ed1 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00489ed7
    FMUL float ptr [0x0059d1f8]         ; 00489ed9 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489edf
    FLD float ptr [EAX + 0x4]           ; 00489ee1
    FMUL float ptr [0x0059d1f8]         ; 00489ee4 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489eea
    FLD float ptr [EAX + 0x8]           ; 00489eed
    FMUL float ptr [0x0059d1f8]         ; 00489ef0 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489ef6
    LEA EAX,[ESP + 0x5c]                ; 00489ef9
    PUSH EAX                            ; 00489efd
    MOV EAX,dword ptr [ESI]             ; 00489efe | DAT_01b4d738
    ADD EAX,0x90                        ; 00489f00
    PUSH EAX                            ; 00489f05
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00489f06
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00489f0b
    PUSH 0x5b8bbc                       ; 00489f0e | DAT_005b8bbc
    MOV EDI,dword ptr [0x005ae704]      ; 00489f13 | DAT_005ae704
    PUSH EDI                            ; 00489f19 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00489f1a
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00489f1f
    PUSH 0x0                            ; 00489f22
    PUSH EBP                            ; 00489f24
    MOV EAX,[0x007f7370]                ; 00489f25 | DAT_007f7370
    PUSH EAX                            ; 00489f2a
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670 ; 00489f2b
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670()
    FLD float ptr [EBP + 0x18]          ; 00489f30
    FMUL double ptr [0x00581464]        ; 00489f33 | DOUBLE_00581464
    MOV EAX,0xffff                      ; 00489f39
    MOV EDX,dword ptr [0x01c038f4]      ; 00489f3e | DAT_01c038f4
    ADD ESP,0xc                         ; 00489f44
    SUB EAX,EDX                         ; 00489f47
    MOV dword ptr [ESP + 0x9c],EAX      ; 00489f49
    FILD dword ptr [ESP + 0x9c]         ; 00489f50
    FMULP                               ; 00489f57
    MOV ESI,0xd00000                    ; 00489f59
    MOV EBX,0xdc0000                    ; 00489f5e
    MOV ECX,0x800000                    ; 00489f63
    MOV dword ptr [0x005c5030],EBX      ; 00489f68 | DAT_005c5030
    MOV dword ptr [0x005c505c],ESI      ; 00489f6e | DAT_005c505c
    MOV dword ptr [0x005c5060],EBX      ; 00489f74 | DAT_005c5060
    MOV dword ptr [0x005c502c],ECX      ; 00489f7a | DAT_005c502c
    MOV dword ptr [0x005c508c],ECX      ; 00489f80 | DAT_005c508c
    MOV dword ptr [0x005c50bc],ECX      ; 00489f86 | DAT_005c50bc
    MOV EDX,0x900000                    ; 00489f8c
    MOV dword ptr [ESP + 0x98],EAX      ; 00489f91
    MOV dword ptr [0x005c5090],EDX      ; 00489f98 | DAT_005c5090
    CALL crt_math.c_round_FUN_00563a30  ; 00489f9e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x98]        ; 00489fa3
    MOV EAX,dword ptr [ESP + 0x98]      ; 00489faa
    MOV dword ptr [0x005c50c0],EDX      ; 00489fb1 | DAT_005c50c0
    MOV [0x005c5040],EAX                ; 00489fb7 | DAT_005c5040
    MOV [0x005c5070],EAX                ; 00489fbc | DAT_005c5070
    MOV [0x005c50a0],EAX                ; 00489fc1 | DAT_005c50a0
    MOV [0x005c50d0],EAX                ; 00489fc6 | DAT_005c50d0
    LEA EBX,[ESP + 0x80]                ; 00489fcb
    MOV EAX,EBP                         ; 00489fd2
    FLD float ptr [EAX]                 ; 00489fd4
    FMUL float ptr [0x0059d1f8]         ; 00489fd6 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489fdc
    FLD float ptr [EAX + 0x4]           ; 00489fde
    FMUL float ptr [0x0059d1f8]         ; 00489fe1 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489fe7
    FLD float ptr [EAX + 0x8]           ; 00489fea
    FMUL float ptr [0x0059d1f8]         ; 00489fed | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489ff3
    PUSH 0x4                            ; 00489ff6
    PUSH 0x0                            ; 00489ff8
    PUSH 0x1c08d14                      ; 00489ffa | DAT_01c08d14
    LEA EAX,[ESP + 0x8c]                ; 00489fff
    PUSH EAX                            ; 0048a006
    MOV ESI,dword ptr [0x005be368]      ; 0048a007 | g_CDemonSet_PTR_005be368
    PUSH ESI                            ; 0048a00d | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50 ; 0048a00e
        ;   XREF to: 0050bb50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 0048a013
    PUSH 0x1                            ; 0048a016
    MOV EDI,dword ptr [0x005ae704]      ; 0048a018 | DAT_005ae704
    PUSH EDI                            ; 0048a01e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0048a01f
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0048a024
    XOR EAX,EAX                         ; 0048a027
    MOV EBP,0x4                         ; 0048a029
    MOV dword ptr [ESP + 0x18],EAX      ; 0048a02e
    MOV dword ptr [ESP + 0x14],EAX      ; 0048a032
    MOV dword ptr [ESP + 0x10],EAX      ; 0048a036
    MOV dword ptr [ESP + 0xc],EAX       ; 0048a03a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048a03e
    MOV EAX,0x3                         ; 0048a042
    MOV EDI,0x1                         ; 0048a047
    MOV dword ptr [ESP + 0x28],EAX      ; 0048a04c
    LEA EAX,[ESP + 0x4]                 ; 0048a050
    MOV EDX,dword ptr [0x005ae704]      ; 0048a054 | DAT_005ae704
    PUSH EAX                            ; 0048a05a
    MOV dword ptr [ESP + 0xc],EBP       ; 0048a05b
    MOV EBP,0x2                         ; 0048a05f
    PUSH EDX                            ; 0048a064 | DAT_01b4d738
    MOV dword ptr [ESP + 0x28],EDI      ; 0048a065
    MOV dword ptr [ESP + 0x2c],EBP      ; 0048a069
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080 ; 0048a06d
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0048a072
    XOR EBX,EBX                         ; 0048a075
    PUSH EBX                            ; 0048a077
    MOV ECX,dword ptr [0x005ae704]      ; 0048a078 | DAT_005ae704
    PUSH ECX                            ; 0048a07e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0048a07f
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0048a084
    MOV EBX,dword ptr [0x005ae704]      ; 0048a087 | DAT_005ae704
    PUSH EBX                            ; 0048a08d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0048a08e
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0048a093
    POP EDI                             ; 0048a096
    ADD ESP,0x9c                        ; 0048a097
    POP EBP                             ; 0048a09d
    POP ESI                             ; 0048a09e
    POP EBX                             ; 0048a09f
    RET                                 ; 0048a0a0


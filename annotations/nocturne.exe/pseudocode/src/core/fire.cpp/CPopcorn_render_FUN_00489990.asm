; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CPopcorn_render_FUN_00489990(CPopcorn *this_ptr)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xa0]:1  local_a0
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
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   float FLOAT_0059d1f8 = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_005b8ba4
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
;   undefined4 DAT_005c50c0
;   ... and 6 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
;   core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50
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

    PUSH EBX                            ; 00489990
        ;   Label: core_fire.cpp_CPopcorn_render_FUN_00489990
    PUSH ESI                            ; 00489991
    PUSH EBP                            ; 00489992
    SUB ESP,0x94                        ; 00489993
    MOV EBP,dword ptr [ESP + 0xa4]      ; 00489999
    MOV ESI,dword ptr [0x005ae704]      ; 004899a0 | g_CDemonRenderer_PTR_005ae704
    LEA EBX,[ESP + 0x64]                ; 004899a6
    MOV EAX,EBP                         ; 004899aa
    MOV ESI,dword ptr [ESI]             ; 004899ac | DAT_01b4d738
    FLD float ptr [EAX]                 ; 004899ae
    FMUL float ptr [0x0059d1f8]         ; 004899b0 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 004899b6
    FLD float ptr [EAX + 0x4]           ; 004899b8
    FMUL float ptr [0x0059d1f8]         ; 004899bb | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 004899c1
    FLD float ptr [EAX + 0x8]           ; 004899c4
    FMUL float ptr [0x0059d1f8]         ; 004899c7 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 004899cd
    LEA EAX,[ESP + 0x64]                ; 004899d0
    PUSH EAX                            ; 004899d4
    PUSH ESI                            ; 004899d5
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004899d6
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004899db
    PUSH ESI                            ; 004899de
    MOV EDX,dword ptr [0x005ae704]      ; 004899df | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004899e5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80 ; 004899e6
        ;   XREF to: 00461f80 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004899eb
    TEST EAX,EAX                        ; 004899ee
    JNZ 0x004899fc                      ; 004899f0
        ;   XREF to: 004899fc (CONDITIONAL_JUMP)  ; LAB_004899fc
    ADD ESP,0x94                        ; 004899f2
    POP EBP                             ; 004899f8
    POP ESI                             ; 004899f9
    POP EBX                             ; 004899fa
    RET                                 ; 004899fb
    PUSH EDI                            ; 004899fc
        ;   Label: LAB_004899fc
    PUSH EBP                            ; 004899fd
    MOV ECX,dword ptr [0x005ae704]      ; 004899fe | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00489a04 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00489a05
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00489a0a
    MOV EBX,dword ptr [0x005ae704]      ; 00489a0d | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00489a13 | DAT_01b4d738
    LEA ESI,[ESP + 0x78]                ; 00489a14
    LEA EDI,[ESP + 0x48]                ; 00489a18
    CALL engine_drender.cpp_FUN_00460d90 ; 00489a1c
        ;   XREF to: 00460d90 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00460d90()
    ADD ESP,0x4                         ; 00489a21
    LEA ESI,[ESP + 0x74]                ; 00489a24
    LEA EAX,[ESP + 0x44]                ; 00489a28
    PUSH 0x0                            ; 00489a2c
    MOVSD ES:EDI,ESI                    ; 00489a2e
    MOVSD ES:EDI,ESI                    ; 00489a2f
    MOVSD ES:EDI,ESI                    ; 00489a30
    PUSH EAX                            ; 00489a31
    MOV ESI,dword ptr [0x005ae704]      ; 00489a32 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 00489a38 | DAT_01b4d738
    LEA EBX,[ESP + 0x44]                ; 00489a39
    MOV EDI,0xbe000000                  ; 00489a3d
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50 ; 00489a42
        ;   XREF to: 00460a50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    LEA EAX,[ESP + 0x68]                ; 00489a47
    MOV ESI,dword ptr [0x005ae704]      ; 00489a4b | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0xc                         ; 00489a51
    XOR EDX,EDX                         ; 00489a54
    MOV dword ptr [ESP + 0x5c],EDI      ; 00489a56
    MOV dword ptr [ESP + 0x60],EDI      ; 00489a5a
    MOV dword ptr [ESP + 0x64],EDX      ; 00489a5e
    FLD float ptr [EAX]                 ; 00489a62
    FMUL float ptr [0x0059d1f8]         ; 00489a64 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489a6a
    FLD float ptr [EAX + 0x4]           ; 00489a6c
    FMUL float ptr [0x0059d1f8]         ; 00489a6f | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489a75
    FLD float ptr [EAX + 0x8]           ; 00489a78
    FMUL float ptr [0x0059d1f8]         ; 00489a7b | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489a81
    LEA EAX,[ESP + 0x38]                ; 00489a84
    PUSH EAX                            ; 00489a88
    MOV EAX,dword ptr [ESI]             ; 00489a89 | DAT_01b4d738
    PUSH EAX                            ; 00489a8b
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00489a8c
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    XOR ESI,ESI                         ; 00489a91
    MOV ECX,0x3e000000                  ; 00489a93
    LEA EBX,[ESP + 0x94]                ; 00489a98
    ADD ESP,0x8                         ; 00489a9f
    LEA EAX,[ESP + 0x5c]                ; 00489aa2
    MOV dword ptr [ESP + 0x5c],ECX      ; 00489aa6
    MOV dword ptr [ESP + 0x60],EDI      ; 00489aaa
    MOV dword ptr [ESP + 0x64],ESI      ; 00489aae
    MOV ESI,dword ptr [0x005ae704]      ; 00489ab2 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00489ab8
    FMUL float ptr [0x0059d1f8]         ; 00489aba | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489ac0
    FLD float ptr [EAX + 0x4]           ; 00489ac2
    FMUL float ptr [0x0059d1f8]         ; 00489ac5 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489acb
    FLD float ptr [EAX + 0x8]           ; 00489ace
    FMUL float ptr [0x0059d1f8]         ; 00489ad1 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489ad7
    LEA EAX,[ESP + 0x8c]                ; 00489ada
    PUSH EAX                            ; 00489ae1
    MOV EAX,dword ptr [ESI]             ; 00489ae2 | DAT_01b4d738
    ADD EAX,0x30                        ; 00489ae4
    PUSH EAX                            ; 00489ae7
    MOV EDI,0x3e000000                  ; 00489ae8
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00489aed
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x005ae704]      ; 00489af2 | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0x8                         ; 00489af8
    XOR EDX,EDX                         ; 00489afb
    MOV dword ptr [ESP + 0x5c],EDI      ; 00489afd
    MOV dword ptr [ESP + 0x60],EDI      ; 00489b01
    MOV dword ptr [ESP + 0x64],EDX      ; 00489b05
    LEA EBX,[ESP + 0x2c]                ; 00489b09
    LEA EAX,[ESP + 0x5c]                ; 00489b0d
    FLD float ptr [EAX]                 ; 00489b11
    FMUL float ptr [0x0059d1f8]         ; 00489b13 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489b19
    FLD float ptr [EAX + 0x4]           ; 00489b1b
    FMUL float ptr [0x0059d1f8]         ; 00489b1e | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489b24
    FLD float ptr [EAX + 0x8]           ; 00489b27
    FMUL float ptr [0x0059d1f8]         ; 00489b2a | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489b30
    LEA EAX,[ESP + 0x2c]                ; 00489b33
    PUSH EAX                            ; 00489b37
    MOV EAX,dword ptr [ESI]             ; 00489b38 | DAT_01b4d738
    ADD EAX,0x60                        ; 00489b3a
    PUSH EAX                            ; 00489b3d
    XOR ESI,ESI                         ; 00489b3e
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00489b40
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0xbe000000                  ; 00489b45
    LEA EBX,[ESP + 0x58]                ; 00489b4a
    ADD ESP,0x8                         ; 00489b4e
    LEA EAX,[ESP + 0x5c]                ; 00489b51
    MOV dword ptr [ESP + 0x5c],ECX      ; 00489b55
    MOV dword ptr [ESP + 0x60],EDI      ; 00489b59
    MOV dword ptr [ESP + 0x64],ESI      ; 00489b5d
    MOV ESI,dword ptr [0x005ae704]      ; 00489b61 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00489b67
    FMUL float ptr [0x0059d1f8]         ; 00489b69 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489b6f
    FLD float ptr [EAX + 0x4]           ; 00489b71
    FMUL float ptr [0x0059d1f8]         ; 00489b74 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489b7a
    FLD float ptr [EAX + 0x8]           ; 00489b7d
    FMUL float ptr [0x0059d1f8]         ; 00489b80 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489b86
    LEA EAX,[ESP + 0x50]                ; 00489b89
    PUSH EAX                            ; 00489b8d
    MOV EAX,dword ptr [ESI]             ; 00489b8e | DAT_01b4d738
    ADD EAX,0x90                        ; 00489b90
    PUSH EAX                            ; 00489b95
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00489b96
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00489b9b
    PUSH 0x5b8ba4                       ; 00489b9e | DAT_005b8ba4
    MOV EDI,dword ptr [0x005ae704]      ; 00489ba3 | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 00489ba9 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00489baa
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00489baf
    PUSH 0x0                            ; 00489bb2
    PUSH EBP                            ; 00489bb4
    MOV EAX,[0x007f7370]                ; 00489bb5 | DAT_007f7370
    PUSH EAX                            ; 00489bba
    MOV EBX,0xf80000                    ; 00489bbb
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670 ; 00489bc0
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    MOV EAX,0xffff                      ; 00489bc5
    MOV ECX,0x80000                     ; 00489bca
    MOV EDX,dword ptr [0x01c038f4]      ; 00489bcf | DAT_01c038f4
    ADD ESP,0xc                         ; 00489bd5
    MOV dword ptr [0x005c5030],EBX      ; 00489bd8 | DAT_005c5030
    MOV dword ptr [0x005c505c],EBX      ; 00489bde | DAT_005c505c
    MOV dword ptr [0x005c5060],EBX      ; 00489be4 | DAT_005c5060
    MOV dword ptr [0x005c508c],EBX      ; 00489bea | DAT_005c508c
    LEA EBX,[ESP + 0x80]                ; 00489bf0
    MOV dword ptr [0x005c502c],ECX      ; 00489bf7 | DAT_005c502c
    MOV dword ptr [0x005c5090],ECX      ; 00489bfd | DAT_005c5090
    SUB EAX,EDX                         ; 00489c03
    MOV dword ptr [0x005c50bc],ECX      ; 00489c05 | DAT_005c50bc
    MOV [0x005c5040],EAX                ; 00489c0b | DAT_005c5040
    MOV [0x005c5070],EAX                ; 00489c10 | DAT_005c5070
    MOV [0x005c50a0],EAX                ; 00489c15 | DAT_005c50a0
    MOV [0x005c50d0],EAX                ; 00489c1a | DAT_005c50d0
    MOV EAX,EBP                         ; 00489c1f
    MOV dword ptr [0x005c50c0],ECX      ; 00489c21 | DAT_005c50c0
    FLD float ptr [EAX]                 ; 00489c27
    FMUL float ptr [0x0059d1f8]         ; 00489c29 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00489c2f
    FLD float ptr [EAX + 0x4]           ; 00489c31
    FMUL float ptr [0x0059d1f8]         ; 00489c34 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00489c3a
    FLD float ptr [EAX + 0x8]           ; 00489c3d
    FMUL float ptr [0x0059d1f8]         ; 00489c40 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00489c46
    PUSH 0x4                            ; 00489c49
    PUSH 0x0                            ; 00489c4b
    PUSH 0x1c08d14                      ; 00489c4d | DAT_01c08d14
    LEA EAX,[ESP + 0x8c]                ; 00489c52
    PUSH EAX                            ; 00489c59
    MOV ESI,dword ptr [0x005be368]      ; 00489c5a | g_CDemonSet_PTR_005be368
    PUSH ESI                            ; 00489c60 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50 ; 00489c61
        ;   XREF to: 0050bb50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00489c66
    PUSH 0x1                            ; 00489c69
    MOV EDI,dword ptr [0x005ae704]      ; 00489c6b | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 00489c71 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00489c72
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00489c77
    XOR EAX,EAX                         ; 00489c7a
    MOV EBP,0x4                         ; 00489c7c
    MOV dword ptr [ESP + 0x18],EAX      ; 00489c81
    MOV dword ptr [ESP + 0x14],EAX      ; 00489c85
    MOV dword ptr [ESP + 0x10],EAX      ; 00489c89
    MOV dword ptr [ESP + 0xc],EAX       ; 00489c8d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00489c91
    MOV EAX,0x3                         ; 00489c95
    MOV EDI,0x1                         ; 00489c9a
    MOV dword ptr [ESP + 0x28],EAX      ; 00489c9f
    LEA EAX,[ESP + 0x4]                 ; 00489ca3
    MOV EDX,dword ptr [0x005ae704]      ; 00489ca7 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 00489cad
    MOV dword ptr [ESP + 0xc],EBP       ; 00489cae
    MOV EBP,0x2                         ; 00489cb2
    PUSH EDX                            ; 00489cb7 | DAT_01b4d738
    MOV dword ptr [ESP + 0x28],EDI      ; 00489cb8
    MOV dword ptr [ESP + 0x2c],EBP      ; 00489cbc
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080 ; 00489cc0
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00489cc5
    XOR EBX,EBX                         ; 00489cc8
    PUSH EBX                            ; 00489cca
    MOV ECX,dword ptr [0x005ae704]      ; 00489ccb | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00489cd1 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00489cd2
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00489cd7
    MOV EBX,dword ptr [0x005ae704]      ; 00489cda | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00489ce0 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00489ce1
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00489ce6
    POP EDI                             ; 00489ce9
    ADD ESP,0x94                        ; 00489cea
    POP EBP                             ; 00489cf0
    POP ESI                             ; 00489cf1
    POP EBX                             ; 00489cf2
    RET                                 ; 00489cf3


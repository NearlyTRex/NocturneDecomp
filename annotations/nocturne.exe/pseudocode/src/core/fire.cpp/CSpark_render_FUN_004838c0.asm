; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSpark_render_FUN_004838c0(CSpark *this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
; Local Variables:
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
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   double DOUBLE_005810dc = 0.700000000000000
;   float FLOAT_0059d1f8 = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_005b84cc
;   undefined4 DAT_005b84e4
;   undefined4 DAT_005b84fc
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c5040
;   undefined4 DAT_005c5064
;   undefined4 DAT_005c5068
;   undefined4 DAT_005c506c
;   undefined4 DAT_005c5070
;   undefined4 DAT_005c5094
;   ... and 11 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;   engine_special.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004838c0
        ;   Label: core_fire.cpp_CSpark_render_FUN_004838c0
    PUSH ESI                            ; 004838c1
    PUSH EDI                            ; 004838c2
    PUSH EBP                            ; 004838c3
    MOV EBP,ESP                         ; 004838c4
    SUB ESP,0xc4                        ; 004838c6
    AND ESP,0xfffffff8                  ; 004838cc
    MOV ESI,dword ptr [EBP + 0x14]      ; 004838cf
    MOV EDI,dword ptr [0x005ae704]      ; 004838d2 | g_CDemonRenderer_PTR_005ae704
    LEA EBX,[ESP + 0x68]                ; 004838d8
    MOV EAX,ESI                         ; 004838dc
    MOV EDI,dword ptr [EDI]             ; 004838de | DAT_01b4d738
    FLD float ptr [EAX]                 ; 004838e0
    FMUL float ptr [0x0059d1f8]         ; 004838e2 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 004838e8
    FLD float ptr [EAX + 0x4]           ; 004838ea
    FMUL float ptr [0x0059d1f8]         ; 004838ed | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 004838f3
    FLD float ptr [EAX + 0x8]           ; 004838f6
    FMUL float ptr [0x0059d1f8]         ; 004838f9 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 004838ff
    LEA EAX,[ESP + 0x68]                ; 00483902
    PUSH EAX                            ; 00483906
    MOV EDX,0x3ecccccd                  ; 00483907
    PUSH EDI                            ; 0048390c
    MOV dword ptr [ESP + 0xc0],EDX      ; 0048390d
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 00483914
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00483919
    PUSH EDI                            ; 0048391c
    MOV ECX,dword ptr [0x005ae704]      ; 0048391d | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00483923 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80 ; 00483924
        ;   XREF to: 00461f80 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 00483929
    TEST EAX,EAX                        ; 0048392c
    JNZ 0x00483dfb                      ; 0048392e
        ;   XREF to: 00483dfb (CONDITIONAL_JUMP)  ; LAB_00483dfb
    MOV ESP,EBP                         ; 00483934
        ;   Label: LAB_00483934
    POP EBP                             ; 00483936
    POP EDI                             ; 00483937
    POP ESI                             ; 00483938
    POP EBX                             ; 00483939
    RET                                 ; 0048393a
    PUSH 0x5b84cc                       ; 0048393b | DAT_005b84cc
        ;   Label: LAB_0048393b
    MOV EDI,dword ptr [0x005ae704]      ; 00483940 | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 00483946 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00483947
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_00483947
    ADD ESP,0x8                         ; 0048394c
    PUSH 0x0                            ; 0048394f
        ;   Label: LAB_0048394f
    PUSH ESI                            ; 00483951
    MOV EAX,[0x007f7370]                ; 00483952 | DAT_007f7370
    PUSH EAX                            ; 00483957
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670 ; 00483958
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    MOV EDX,0xffff                      ; 0048395d
    MOV ECX,dword ptr [0x01c038f4]      ; 00483962 | DAT_01c038f4
    ADD ESP,0xc                         ; 00483968
    MOV EAX,dword ptr [ESI + 0x38]      ; 0048396b
    SUB EDX,ECX                         ; 0048396e
    MOV EBX,0xffff                      ; 00483970
    IMUL EDX                            ; 00483975
    SHRD EAX,EDX,0x10                   ; 00483977
    PUSH 0x1                            ; 0048397b
    MOV [0x005c5040],EAX                ; 0048397d | DAT_005c5040
    MOV [0x005c5070],EAX                ; 00483982 | DAT_005c5070
    MOV [0x005c50a0],EAX                ; 00483987 | DAT_005c50a0
    MOV [0x005c50d0],EAX                ; 0048398c | DAT_005c50d0
    MOV dword ptr [0x005c5034],EBX      ; 00483991 | DAT_005c5034
    MOV dword ptr [0x005c5038],EBX      ; 00483997 | DAT_005c5038
    MOV dword ptr [0x005c503c],EBX      ; 0048399d | DAT_005c503c
    MOV dword ptr [0x005c5064],EBX      ; 004839a3 | DAT_005c5064
    MOV dword ptr [0x005c5068],EBX      ; 004839a9 | DAT_005c5068
    MOV dword ptr [0x005c506c],EBX      ; 004839af | DAT_005c506c
    MOV dword ptr [0x005c5094],EBX      ; 004839b5 | DAT_005c5094
    MOV dword ptr [0x005c5098],EBX      ; 004839bb | DAT_005c5098
    MOV dword ptr [0x005c509c],EBX      ; 004839c1 | DAT_005c509c
    MOV EAX,[0x005ae704]                ; 004839c7 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [0x005c50c4],EBX      ; 004839cc | DAT_005c50c4
    PUSH EAX                            ; 004839d2 | DAT_01b4d738
    MOV dword ptr [0x005c50c8],EBX      ; 004839d3 | DAT_005c50c8
    MOV dword ptr [0x005c50cc],EBX      ; 004839d9 | DAT_005c50cc
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 004839df
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004839e4
    PUSH 0x1c08d20                      ; 004839e7
    MOV EDX,dword ptr [0x005ae704]      ; 004839ec | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004839f2 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080 ; 004839f3
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004839f8
    PUSH 0x0                            ; 004839fb
    MOV ECX,dword ptr [0x005ae704]      ; 004839fd | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00483a03 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00483a04
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00483a09
    MOV EBX,dword ptr [0x005ae704]      ; 00483a0c | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00483a12 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00483a13
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00483a18
    MOV EAX,dword ptr [ESI]             ; 00483a1b
    MOV dword ptr [ESP + 0x80],EAX      ; 00483a1d
    LEA EAX,[ESI + 0x4]                 ; 00483a24
    MOV EAX,dword ptr [EAX]             ; 00483a27
    MOV dword ptr [ESP + 0x84],EAX      ; 00483a29
    LEA EAX,[ESI + 0x8]                 ; 00483a30
    MOV EAX,dword ptr [EAX]             ; 00483a33
    LEA EDX,[ESI + 0xc]                 ; 00483a35
    MOV dword ptr [ESP + 0x88],EAX      ; 00483a38
    MOV EAX,dword ptr [EDX]             ; 00483a3f
    MOV dword ptr [ESP + 0x38],EAX      ; 00483a41
    LEA EAX,[EDX + 0x4]                 ; 00483a45
    MOV EAX,dword ptr [EAX]             ; 00483a48
    MOV dword ptr [ESP + 0x3c],EAX      ; 00483a4a
    LEA EAX,[EDX + 0x8]                 ; 00483a4e
    MOV EDI,0x3f800000                  ; 00483a51
    MOV EAX,dword ptr [EAX]             ; 00483a56
    MOV dword ptr [ESP + 0x4],EDI       ; 00483a58
    MOV dword ptr [ESP + 0x40],EAX      ; 00483a5c
    MOV EAX,0x3ccccccd                  ; 00483a60
    XOR EDI,EDI                         ; 00483a65
    MOV dword ptr [ESP],EAX             ; 00483a67
    FLD float ptr [ESP]                 ; 00483a6a
        ;   Label: LAB_00483a6a
    FLD ST0                             ; 00483a6d
    FLD double ptr [0x005810dc]         ; 00483a6f | DOUBLE_005810dc
    FXCH                                ; 00483a75
    FMUL ST1                            ; 00483a77
    FLD float ptr [ESP + 0x4]           ; 00483a79
    FMUL ST2                            ; 00483a7d
    FLD float ptr [ESP + 0x38]          ; 00483a7f
    FXCH ST2                            ; 00483a83
    FSTP ST4                            ; 00483a85
    FXCH ST3                            ; 00483a87
    FSTP float ptr [ESP]                ; 00483a89
    FMUL float ptr [ESP]                ; 00483a8c
    FLD float ptr [ESP]                 ; 00483a8f
    FMUL float ptr [ESI + 0x1c]         ; 00483a92
    FLD float ptr [ESP + 0x40]          ; 00483a95
    FXCH                                ; 00483a99
    FSUBR float ptr [ESP + 0x3c]        ; 00483a9b
    FXCH                                ; 00483a9f
    FMUL float ptr [ESP]                ; 00483aa1
    FXCH                                ; 00483aa4
    FST float ptr [ESP + 0x3c]          ; 00483aa6
    FMUL float ptr [ESP]                ; 00483aaa
    FLD float ptr [ESP + 0x80]          ; 00483aad
    FLD float ptr [ESP + 0x84]          ; 00483ab4
    LEA EAX,[ESP + 0x80]                ; 00483abb
    MOV EDX,dword ptr [0x005ae704]      ; 00483ac2 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 00483ac8
    FXCH ST5                            ; 00483ac9
    FSTP ST6                            ; 00483acb
    FXCH ST5                            ; 00483acd
    FSTP float ptr [ESP + 0x8]          ; 00483acf
    FLD float ptr [ESP + 0x8c]          ; 00483ad3
    PUSH EDX                            ; 00483ada | DAT_01b4d738
    FXCH ST3                            ; 00483adb
    FSTP float ptr [ESP + 0x34]         ; 00483add
    FXCH                                ; 00483ae1
    FSTP float ptr [ESP + 0x3c]         ; 00483ae3
    FXCH ST3                            ; 00483ae7
    FSUB float ptr [ESP + 0x34]         ; 00483ae9
    FXCH                                ; 00483aed
    FSUB float ptr [ESP + 0x3c]         ; 00483aef
    FXCH                                ; 00483af3
    FSTP float ptr [ESP + 0x88]         ; 00483af5
    FXCH ST2                            ; 00483afc
    FSTP float ptr [ESP + 0x38]         ; 00483afe
    FSUB float ptr [ESP + 0x38]         ; 00483b02
    FXCH                                ; 00483b06
    FSTP float ptr [ESP + 0x90]         ; 00483b08
    FSTP float ptr [ESP + 0x8c]         ; 00483b0f
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00483b16
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00483b1b
    PUSH 0x0                            ; 00483b1e
    PUSH 0x1c08d08                      ; 00483b20 | DAT_01c08d08
    MOV ECX,dword ptr [0x005ae704]      ; 00483b25 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00483b2b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50 ; 00483b2c
        ;   XREF to: 00460a50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00483b31
    XOR EBX,EBX                         ; 00483b34
    FLD float ptr [ESP + 0xb8]          ; 00483b36
    FCHS                                ; 00483b3d
    FMUL float ptr [ESP + 0x4]          ; 00483b3f
    MOV dword ptr [ESP + 0x94],EBX      ; 00483b43
    FSTP float ptr [ESP + 0x8c]         ; 00483b4a
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00483b51
    LEA EBX,[ESP + 0x98]                ; 00483b58
    MOV dword ptr [ESP + 0xbc],EAX      ; 00483b5f
    MOV dword ptr [ESP + 0x90],EAX      ; 00483b66
    LEA EAX,[ESP + 0x8c]                ; 00483b6d
    MOV EDX,dword ptr [0x005ae704]      ; 00483b74 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00483b7a
    FMUL float ptr [0x0059d1f8]         ; 00483b7c | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00483b82
    FLD float ptr [EAX + 0x4]           ; 00483b84
    FMUL float ptr [0x0059d1f8]         ; 00483b87 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00483b8d
    FLD float ptr [EAX + 0x8]           ; 00483b90
    FMUL float ptr [0x0059d1f8]         ; 00483b93 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00483b99
    LEA EAX,[ESP + 0x98]                ; 00483b9c
    PUSH EAX                            ; 00483ba3
    MOV EAX,dword ptr [EDX]             ; 00483ba4 | DAT_01b4d738
    PUSH EAX                            ; 00483ba6
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00483ba7
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00483bac
    FLD float ptr [ESP + 0xb8]          ; 00483baf
    FMUL float ptr [ESP + 0x4]          ; 00483bb6
    FSTP float ptr [ESP + 0xc0]         ; 00483bba
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00483bc1
    MOV dword ptr [ESP + 0x8c],EAX      ; 00483bc8
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00483bcf
    MOV dword ptr [ESP + 0x90],EAX      ; 00483bd6
    XOR EAX,EAX                         ; 00483bdd
    MOV EDX,dword ptr [0x005ae704]      ; 00483bdf | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x94],EAX      ; 00483be5
    LEA EBX,[ESP + 0x14]                ; 00483bec
    LEA EAX,[ESP + 0x8c]                ; 00483bf0
    FLD float ptr [EAX]                 ; 00483bf7
    FMUL float ptr [0x0059d1f8]         ; 00483bf9 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00483bff
    FLD float ptr [EAX + 0x4]           ; 00483c01
    FMUL float ptr [0x0059d1f8]         ; 00483c04 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00483c0a
    FLD float ptr [EAX + 0x8]           ; 00483c0d
    FMUL float ptr [0x0059d1f8]         ; 00483c10 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00483c16
    LEA EAX,[ESP + 0x14]                ; 00483c19
    PUSH EAX                            ; 00483c1d
    MOV EAX,dword ptr [EDX]             ; 00483c1e | DAT_01b4d738
    ADD EAX,0x30                        ; 00483c20
    PUSH EAX                            ; 00483c23
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00483c24
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x58]                ; 00483c29
    ADD ESP,0x8                         ; 00483c2d
    XOR EDX,EDX                         ; 00483c30
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00483c32
    MOV dword ptr [ESP + 0x94],EDX      ; 00483c39
    MOV dword ptr [ESP + 0x8c],EAX      ; 00483c40
    MOV dword ptr [ESP + 0x90],EAX      ; 00483c47
    LEA EAX,[ESP + 0x8c]                ; 00483c4e
    MOV EDX,dword ptr [0x005ae704]      ; 00483c55 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00483c5b
    FMUL float ptr [0x0059d1f8]         ; 00483c5d | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00483c63
    FLD float ptr [EAX + 0x4]           ; 00483c65
    FMUL float ptr [0x0059d1f8]         ; 00483c68 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00483c6e
    FLD float ptr [EAX + 0x8]           ; 00483c71
    FMUL float ptr [0x0059d1f8]         ; 00483c74 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00483c7a
    LEA EAX,[ESP + 0x50]                ; 00483c7d
    PUSH EAX                            ; 00483c81
    MOV EAX,dword ptr [EDX]             ; 00483c82 | DAT_01b4d738
    ADD EAX,0x60                        ; 00483c84
    PUSH EAX                            ; 00483c87
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00483c88
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00483c8d
    LEA EBX,[ESP + 0x8]                 ; 00483c90
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00483c94
    MOV EDX,dword ptr [0x005ae704]      ; 00483c9b | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [ESP + 0x8c],EAX      ; 00483ca1
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00483ca8
    XOR ECX,ECX                         ; 00483caf
    MOV dword ptr [ESP + 0x90],EAX      ; 00483cb1
    LEA EAX,[ESP + 0x8c]                ; 00483cb8
    MOV dword ptr [ESP + 0x94],ECX      ; 00483cbf
    FLD float ptr [EAX]                 ; 00483cc6
    FMUL float ptr [0x0059d1f8]         ; 00483cc8 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00483cce
    FLD float ptr [EAX + 0x4]           ; 00483cd0
    FMUL float ptr [0x0059d1f8]         ; 00483cd3 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00483cd9
    FLD float ptr [EAX + 0x8]           ; 00483cdc
    FMUL float ptr [0x0059d1f8]         ; 00483cdf | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00483ce5
    LEA EAX,[ESP + 0x8]                 ; 00483ce8
    PUSH EAX                            ; 00483cec
    MOV EAX,dword ptr [EDX]             ; 00483ced | DAT_01b4d738
    ADD EAX,0x90                        ; 00483cef
    PUSH EAX                            ; 00483cf4
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00483cf5
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00483cfa
    PUSH 0x0                            ; 00483cfd
    PUSH ESI                            ; 00483cff
    MOV EBX,dword ptr [0x007f7370]      ; 00483d00 | DAT_007f7370
    PUSH EBX                            ; 00483d06
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670 ; 00483d07
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    MOV EDX,0xffff                      ; 00483d0c
    MOV ECX,dword ptr [0x01c038f4]      ; 00483d11 | DAT_01c038f4
    ADD ESP,0xc                         ; 00483d17
    MOV EAX,dword ptr [ESI + 0x38]      ; 00483d1a
    SUB EDX,ECX                         ; 00483d1d
    MOV EBX,0xffff                      ; 00483d1f
    IMUL EDX                            ; 00483d24
    SHRD EAX,EDX,0x10                   ; 00483d26
    PUSH 0x1                            ; 00483d2a
    MOV [0x005c5040],EAX                ; 00483d2c | DAT_005c5040
    MOV dword ptr [0x005c5034],EBX      ; 00483d31 | DAT_005c5034
    MOV dword ptr [0x005c5038],EBX      ; 00483d37 | DAT_005c5038
    MOV dword ptr [0x005c503c],EBX      ; 00483d3d | DAT_005c503c
    MOV dword ptr [0x005c5064],EBX      ; 00483d43 | DAT_005c5064
    MOV dword ptr [0x005c5068],EBX      ; 00483d49 | DAT_005c5068
    MOV dword ptr [0x005c506c],EBX      ; 00483d4f | DAT_005c506c
    MOV dword ptr [0x005c5094],EBX      ; 00483d55 | DAT_005c5094
    MOV dword ptr [0x005c5098],EBX      ; 00483d5b | DAT_005c5098
    MOV dword ptr [0x005c509c],EBX      ; 00483d61 | DAT_005c509c
    MOV dword ptr [0x005c50c4],EBX      ; 00483d67 | DAT_005c50c4
    MOV dword ptr [0x005c50c8],EBX      ; 00483d6d | DAT_005c50c8
    MOV dword ptr [0x005c50cc],EBX      ; 00483d73 | DAT_005c50cc
    MOV EBX,dword ptr [0x005ae704]      ; 00483d79 | g_CDemonRenderer_PTR_005ae704
    MOV [0x005c5070],EAX                ; 00483d7f | DAT_005c5070
    PUSH EBX                            ; 00483d84 | DAT_01b4d738
    MOV [0x005c50a0],EAX                ; 00483d85 | DAT_005c50a0
    MOV [0x005c50d0],EAX                ; 00483d8a | DAT_005c50d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00483d8f
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00483d94
    PUSH 0x1c08d20                      ; 00483d97
    MOV EAX,[0x005ae704]                ; 00483d9c | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 00483da1 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080 ; 00483da2
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00483da7
    PUSH 0x0                            ; 00483daa
    MOV EDX,dword ptr [0x005ae704]      ; 00483dac | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00483db2 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00483db3
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00483db8
    MOV ECX,dword ptr [0x005ae704]      ; 00483dbb | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00483dc1 | DAT_01b4d738
    INC EDI                             ; 00483dc2
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00483dc3
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00483dc8
    CMP EDI,0x3                         ; 00483dcb
    JGE 0x00483934                      ; 00483dce
        ;   XREF to: 00483934 (CONDITIONAL_JUMP)  ; LAB_00483934
    JMP 0x00483a6a                      ; 00483dd4
        ;   XREF to: 00483a6a (UNCONDITIONAL_JUMP)  ; LAB_00483a6a
    PUSH 0x5b84e4                       ; 00483dd9 | DAT_005b84e4
        ;   Label: LAB_00483dd9
    MOV EBX,dword ptr [0x005ae704]      ; 00483dde | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00483de4 | DAT_01b4d738
    JMP 0x00483947                      ; 00483de5
        ;   XREF to: 00483947 (UNCONDITIONAL_JUMP)  ; LAB_00483947
    PUSH 0x5b84fc                       ; 00483dea | DAT_005b84fc
        ;   Label: LAB_00483dea
    MOV ECX,dword ptr [0x005ae704]      ; 00483def | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00483df5 | DAT_01b4d738
    JMP 0x00483947                      ; 00483df6
        ;   XREF to: 00483947 (UNCONDITIONAL_JUMP)  ; LAB_00483947
    PUSH ESI                            ; 00483dfb
        ;   Label: LAB_00483dfb
    MOV EBX,dword ptr [0x005ae704]      ; 00483dfc | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00483e02 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00483e03
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00483e08
    PUSH 0x0                            ; 00483e0b
    PUSH 0x1c08d08                      ; 00483e0d | DAT_01c08d08
    MOV EDI,dword ptr [0x005ae704]      ; 00483e12 | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 00483e18 | DAT_01b4d738
    LEA EBX,[ESP + 0x80]                ; 00483e19
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50 ; 00483e20
        ;   XREF to: 00460a50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    MOV EAX,0xbecccccd                  ; 00483e25
    MOV EDX,dword ptr [0x005ae704]      ; 00483e2a | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0xc                         ; 00483e30
    XOR ECX,ECX                         ; 00483e33
    MOV dword ptr [ESP + 0x8c],EAX      ; 00483e35
    MOV dword ptr [ESP + 0x90],EAX      ; 00483e3c
    LEA EAX,[ESP + 0x8c]                ; 00483e43
    MOV dword ptr [ESP + 0x94],ECX      ; 00483e4a
    FLD float ptr [EAX]                 ; 00483e51
    FMUL float ptr [0x0059d1f8]         ; 00483e53 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00483e59
    FLD float ptr [EAX + 0x4]           ; 00483e5b
    FMUL float ptr [0x0059d1f8]         ; 00483e5e | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00483e64
    FLD float ptr [EAX + 0x8]           ; 00483e67
    FMUL float ptr [0x0059d1f8]         ; 00483e6a | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00483e70
    LEA EAX,[ESP + 0x74]                ; 00483e73
    PUSH EAX                            ; 00483e77
    MOV EAX,dword ptr [EDX]             ; 00483e78 | DAT_01b4d738
    PUSH EAX                            ; 00483e7a
    MOV EDI,0xbecccccd                  ; 00483e7b
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00483e80
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3ecccccd                  ; 00483e85
    MOV EDX,dword ptr [0x005ae704]      ; 00483e8a | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0x8                         ; 00483e90
    XOR EAX,EAX                         ; 00483e93
    MOV dword ptr [ESP + 0x8c],EBX      ; 00483e95
    MOV dword ptr [ESP + 0x94],EAX      ; 00483e9c
    LEA EBX,[ESP + 0x20]                ; 00483ea3
    LEA EAX,[ESP + 0x8c]                ; 00483ea7
    MOV dword ptr [ESP + 0x90],EDI      ; 00483eae
    FLD float ptr [EAX]                 ; 00483eb5
    FMUL float ptr [0x0059d1f8]         ; 00483eb7 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00483ebd
    FLD float ptr [EAX + 0x4]           ; 00483ebf
    FMUL float ptr [0x0059d1f8]         ; 00483ec2 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00483ec8
    FLD float ptr [EAX + 0x8]           ; 00483ecb
    FMUL float ptr [0x0059d1f8]         ; 00483ece | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00483ed4
    LEA EAX,[ESP + 0x20]                ; 00483ed7
    PUSH EAX                            ; 00483edb
    MOV EAX,dword ptr [EDX]             ; 00483edc | DAT_01b4d738
    ADD EAX,0x30                        ; 00483ede
    PUSH EAX                            ; 00483ee1
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00483ee2
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3ecccccd                  ; 00483ee7
    LEA EAX,[ESP + 0x94]                ; 00483eec
    ADD ESP,0x8                         ; 00483ef3
    XOR EBX,EBX                         ; 00483ef6
    MOV dword ptr [ESP + 0x8c],EDX      ; 00483ef8
    MOV dword ptr [ESP + 0x90],EDX      ; 00483eff
    MOV dword ptr [ESP + 0x94],EBX      ; 00483f06
    LEA EBX,[ESP + 0x44]                ; 00483f0d
    MOV EDX,dword ptr [0x005ae704]      ; 00483f11 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00483f17
    FMUL float ptr [0x0059d1f8]         ; 00483f19 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00483f1f
    FLD float ptr [EAX + 0x4]           ; 00483f21
    FMUL float ptr [0x0059d1f8]         ; 00483f24 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00483f2a
    FLD float ptr [EAX + 0x8]           ; 00483f2d
    FMUL float ptr [0x0059d1f8]         ; 00483f30 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00483f36
    LEA EAX,[ESP + 0x44]                ; 00483f39
    PUSH EAX                            ; 00483f3d
    MOV EAX,dword ptr [EDX]             ; 00483f3e | DAT_01b4d738
    ADD EAX,0x60                        ; 00483f40
    PUSH EAX                            ; 00483f43
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00483f44
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3ecccccd                  ; 00483f49
    LEA EBX,[ESP + 0x64]                ; 00483f4e
    ADD ESP,0x8                         ; 00483f52
    XOR EDX,EDX                         ; 00483f55
    MOV dword ptr [ESP + 0x8c],EDI      ; 00483f57
    MOV dword ptr [ESP + 0x90],EAX      ; 00483f5e
    MOV dword ptr [ESP + 0x94],EDX      ; 00483f65
    LEA EAX,[ESP + 0x8c]                ; 00483f6c
    MOV EDX,dword ptr [0x005ae704]      ; 00483f73 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 00483f79
    FMUL float ptr [0x0059d1f8]         ; 00483f7b | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00483f81
    FLD float ptr [EAX + 0x4]           ; 00483f83
    FMUL float ptr [0x0059d1f8]         ; 00483f86 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00483f8c
    FLD float ptr [EAX + 0x8]           ; 00483f8f
    FMUL float ptr [0x0059d1f8]         ; 00483f92 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00483f98
    LEA EAX,[ESP + 0x5c]                ; 00483f9b
    PUSH EAX                            ; 00483f9f
    MOV EAX,dword ptr [EDX]             ; 00483fa0 | DAT_01b4d738
    ADD EAX,0x90                        ; 00483fa2
    PUSH EAX                            ; 00483fa7
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00483fa8
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,dword ptr [ESI + 0x44]      ; 00483fad
    ADD ESP,0x8                         ; 00483fb0
    CMP EAX,0x1                         ; 00483fb3
    JNC 0x00483fc5                      ; 00483fb6
        ;   XREF to: 00483fc5 (CONDITIONAL_JUMP)  ; LAB_00483fc5
    TEST EAX,EAX                        ; 00483fb8
    JZ 0x0048393b                       ; 00483fba
        ;   XREF to: 0048393b (CONDITIONAL_JUMP)  ; LAB_0048393b
    JMP 0x0048394f                      ; 00483fc0
        ;   XREF to: 0048394f (UNCONDITIONAL_JUMP)  ; LAB_0048394f
    JBE 0x00483dd9                      ; 00483fc5
        ;   XREF to: 00483dd9 (CONDITIONAL_JUMP)  ; LAB_00483dd9
        ;   Label: LAB_00483fc5
    CMP EAX,0x2                         ; 00483fcb
    JZ 0x00483dea                       ; 00483fce
        ;   XREF to: 00483dea (CONDITIONAL_JUMP)  ; LAB_00483dea
    JMP 0x0048394f                      ; 00483fd4
        ;   XREF to: 0048394f (UNCONDITIONAL_JUMP)  ; LAB_0048394f


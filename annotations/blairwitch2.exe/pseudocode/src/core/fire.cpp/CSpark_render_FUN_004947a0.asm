; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSpark_render_FUN_004947a0(CSpark *this_ptr)
;
; Parameters:
; CSpark *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_00494790 = 00494819
;   double g_DOUBLE_005d53aa = 0.700000000000000
;   float g_FLOAT_005f64e4 = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_0060b280 = 01ba5c50
;   SMRGLTextureBasic g_SMRGLTextureBasic_0061510c
;   SMRGLTextureBasic g_SMRGLTextureBasic_00615124
;   SMRGLTextureBasic g_SMRGLTextureBasic_0061513c
;   undefined4 DAT_00615154
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].r
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].g
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].b
;   undefined4 g_SRenderVertex_ARRAY_00622014[0].a
;   undefined4 g_SRenderVertex_ARRAY_00622014[1].r
;   undefined4 g_SRenderVertex_ARRAY_00622014[1].g
;   undefined4 g_SRenderVertex_ARRAY_00622014[1].b
;   ... and 13 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_pop_FUN_0046b4a0
;   engine_special.cpp_transformAndProjectPoint_FUN_0055d723
;   engine_special.cpp_transformPoint_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004947a0
        ;   Label: core_fire.cpp_CSpark_render_FUN_004947a0
    PUSH ESI                            ; 004947a1
    PUSH EDI                            ; 004947a2
    PUSH EBP                            ; 004947a3
    MOV EBP,ESP                         ; 004947a4
    SUB ESP,0xe8                        ; 004947a6
    AND ESP,0xfffffff8                  ; 004947ac
    MOV ESI,dword ptr [0x0060b280]      ; 004947af | g_CDemonRenderer_PTR_0060b280
    LEA EBX,[ESP + 0x44]                ; 004947b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004947b9
    MOV ESI,dword ptr [ESI]             ; 004947bc | g_CDemonRenderer_01ba5c50
    FLD float ptr [EAX]                 ; 004947be
    FMUL float ptr [0x005f64e4]         ; 004947c0 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX]               ; 004947c6
    FLD float ptr [EAX + 0x4]           ; 004947c8
    FMUL float ptr [0x005f64e4]         ; 004947cb | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004947d1
    FLD float ptr [EAX + 0x8]           ; 004947d4
    FMUL float ptr [0x005f64e4]         ; 004947d7 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004947dd
    LEA EAX,[ESP + 0x44]                ; 004947e0
    PUSH EAX                            ; 004947e4
    MOV EDX,0x3ecccccd                  ; 004947e5
    PUSH ESI                            ; 004947ea
    MOV dword ptr [ESP + 0xdc],EDX      ; 004947eb
    CALL engine_special.cpp_transformPoint_FUN_0055d9ec ; 004947f2
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformPoint_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004947f7
    PUSH ESI                            ; 004947fa
    MOV ECX,dword ptr [0x0060b280]      ; 004947fb | g_CDemonRenderer_PTR_0060b280
    PUSH ECX                            ; 00494801 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0 ; 00494802
        ;   XREF to: 0046cad0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 00494807
    TEST EAX,EAX                        ; 0049480a
    JNZ 0x00494d03                      ; 0049480c
        ;   XREF to: 00494d03 (CONDITIONAL_JUMP)  ; LAB_00494d03
    MOV ESP,EBP                         ; 00494812
        ;   Label: LAB_00494812
    POP EBP                             ; 00494814
    POP EDI                             ; 00494815
    POP ESI                             ; 00494816
    POP EBX                             ; 00494817
    RET                                 ; 00494818
    PUSH 0x61510c                       ; 00494819 | g_SMRGLTextureBasic_0061510c
        ;   Label: caseD_0
    MOV EBX,dword ptr [0x0060b280]      ; 0049481e | g_CDemonRenderer_PTR_0060b280
    PUSH EBX                            ; 00494824 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 00494825
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_00494825
    ADD ESP,0x8                         ; 0049482a
    PUSH 0x0                            ; 0049482d
        ;   Label: default
    MOV ESI,dword ptr [EBP + 0x14]      ; 0049482f
    MOV EAX,[0x007bda74]                ; 00494832 | g_CDemonCamera_PTR_007bda74
    PUSH ESI                            ; 00494837
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00494838
    PUSH EAX                            ; 0049483b
    CALL dword ptr [EDX + 0x4]          ; 0049483c
    MOV EDX,0xffff                      ; 0049483f
    MOV EDI,dword ptr [0x01c38aec]      ; 00494844 | g_INT_01c38aec
    ADD ESP,0xc                         ; 0049484a
    MOV EAX,dword ptr [ESI + 0x40]      ; 0049484d
    SUB EDX,EDI                         ; 00494850
    IMUL EDX                            ; 00494852
    SHRD EAX,EDX,0x10                   ; 00494854
    MOV [0x00622040],EAX                ; 00494858 | g_SRenderVertex_ARRAY_00622014[0].a
    MOV [0x00622070],EAX                ; 0049485d | g_SRenderVertex_ARRAY_00622014[1].a
    MOV [0x006220a0],EAX                ; 00494862 | g_SRenderVertex_ARRAY_00622014[2].a
    MOV [0x006220d0],EAX                ; 00494867 | g_SRenderVertex_ARRAY_00622014[3].a
    MOV EAX,0xffff                      ; 0049486c
    PUSH 0x1                            ; 00494871
    MOV [0x00622034],EAX                ; 00494873 | g_SRenderVertex_ARRAY_00622014[0].r
    MOV [0x00622038],EAX                ; 00494878 | g_SRenderVertex_ARRAY_00622014[0].g
    MOV [0x0062203c],EAX                ; 0049487d | g_SRenderVertex_ARRAY_00622014[0].b
    MOV [0x00622064],EAX                ; 00494882 | g_SRenderVertex_ARRAY_00622014[1].r
    MOV [0x00622068],EAX                ; 00494887 | g_SRenderVertex_ARRAY_00622014[1].g
    MOV [0x0062206c],EAX                ; 0049488c | g_SRenderVertex_ARRAY_00622014[1].b
    MOV [0x00622094],EAX                ; 00494891 | g_SRenderVertex_ARRAY_00622014[2].r
    MOV [0x00622098],EAX                ; 00494896 | g_SRenderVertex_ARRAY_00622014[2].g
    MOV [0x0062209c],EAX                ; 0049489b | g_SRenderVertex_ARRAY_00622014[2].b
    MOV [0x006220c4],EAX                ; 004948a0 | g_SRenderVertex_ARRAY_00622014[3].r
    MOV [0x006220c8],EAX                ; 004948a5 | g_SRenderVertex_ARRAY_00622014[3].g
    MOV [0x006220cc],EAX                ; 004948aa | g_SRenderVertex_ARRAY_00622014[3].b
    MOV EAX,[0x0060b280]                ; 004948af | g_CDemonRenderer_PTR_0060b280
    PUSH EAX                            ; 004948b4 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 004948b5
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004948ba
    PUSH 0x1c3ded0                      ; 004948bd
    MOV EDX,dword ptr [0x0060b280]      ; 004948c2 | g_CDemonRenderer_PTR_0060b280
    PUSH EDX                            ; 004948c8 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 004948c9
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004948ce
    PUSH 0x0                            ; 004948d1
    MOV ECX,dword ptr [0x0060b280]      ; 004948d3 | g_CDemonRenderer_PTR_0060b280
    PUSH ECX                            ; 004948d9 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 004948da
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004948df
    MOV EBX,dword ptr [0x0060b280]      ; 004948e2 | g_CDemonRenderer_PTR_0060b280
    PUSH EBX                            ; 004948e8 | g_CDemonRenderer_01ba5c50
    LEA EDI,[ESP + 0x18]                ; 004948e9
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 004948ed
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 004948f2
    XOR EAX,EAX                         ; 004948f5
    MOVSD ES:EDI,ESI                    ; 004948f7
    MOVSD ES:EDI,ESI                    ; 004948f8
    MOVSD ES:EDI,ESI                    ; 004948f9
    MOV dword ptr [ESP + 0xe0],EAX      ; 004948fa
    MOV ESI,dword ptr [EBP + 0x14]      ; 00494901
    LEA EDI,[ESP + 0x80]                ; 00494904
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049490b
    LEA ESI,[ESI + 0xc]                 ; 0049490e
    ADD EAX,0x18                        ; 00494911
    MOVSD ES:EDI,ESI                    ; 00494914
    MOVSD ES:EDI,ESI                    ; 00494915
    MOVSD ES:EDI,ESI                    ; 00494916
    MOV dword ptr [ESP + 0xdc],EAX      ; 00494917
    MOV ESI,0x3f800000                  ; 0049491e
    MOV EDI,0x3ccccccd                  ; 00494923
    MOV dword ptr [ESP + 0x4],ESI       ; 00494928
    MOV dword ptr [ESP],EDI             ; 0049492c
    FLD float ptr [ESP]                 ; 0049492f
        ;   Label: LAB_0049492f
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00494932
    FLD ST0                             ; 00494939
    FLD double ptr [0x005d53aa]         ; 0049493b | g_DOUBLE_005d53aa
    FXCH                                ; 00494941
    FMUL ST1                            ; 00494943
    FLD float ptr [EAX]                 ; 00494945
    FXCH                                ; 00494947
    FSTP ST3                            ; 00494949
    FXCH ST2                            ; 0049494b
    FSTP float ptr [ESP]                ; 0049494d
    FXCH                                ; 00494950
    FMUL float ptr [ESP]                ; 00494952
    FLD float ptr [EAX + 0x4]           ; 00494955
    FMUL float ptr [ESP]                ; 00494958
    FLD float ptr [EAX + 0x8]           ; 0049495b
    FMUL float ptr [ESP]                ; 0049495e
    FLD float ptr [ESP + 0x4]           ; 00494961
    FLD float ptr [ESP + 0x80]          ; 00494965
    LEA EDI,[ESP + 0x5c]                ; 0049496c
    LEA ESI,[ESP + 0x2c]                ; 00494970
    FXCH ST4                            ; 00494974
    FSTP float ptr [ESP + 0x2c]         ; 00494976
    FXCH ST2                            ; 0049497a
    FSTP float ptr [ESP + 0x30]         ; 0049497c
    FSTP float ptr [ESP + 0x34]         ; 00494980
    MOVSD ES:EDI,ESI                    ; 00494984
    MOVSD ES:EDI,ESI                    ; 00494985
    MOVSD ES:EDI,ESI                    ; 00494986
    FLD ST0                             ; 00494987
    FXCH ST2                            ; 00494989
    FSUB float ptr [ESP + 0x5c]         ; 0049498b
    FXCH ST2                            ; 0049498f
    FMULP ST3                           ; 00494991
    FXCH                                ; 00494993
    FST float ptr [ESP + 0x80]          ; 00494995
    FMUL float ptr [ESP]                ; 0049499c
    FLD float ptr [ESP + 0x88]          ; 0049499f
    FLD float ptr [ESP + 0x84]          ; 004949a6
    FSUB float ptr [ESP + 0x60]         ; 004949ad
    FXCH                                ; 004949b1
    FSUB float ptr [ESP + 0x64]         ; 004949b3
    FXCH                                ; 004949b7
    FST float ptr [ESP + 0x84]          ; 004949b9
    FMUL float ptr [ESP]                ; 004949c0
    FXCH                                ; 004949c3
    FST float ptr [ESP + 0x88]          ; 004949c5
    FMUL float ptr [ESP]                ; 004949cc
    FLD float ptr [ESP + 0x14]          ; 004949cf
    FLD float ptr [ESP + 0x18]          ; 004949d3
    FXCH ST6                            ; 004949d7
    FSTP ST5                            ; 004949d9
    FXCH ST4                            ; 004949db
    FSTP float ptr [ESP + 0x4]          ; 004949dd
    FLD float ptr [ESP + 0x1c]          ; 004949e1
    LEA EAX,[ESP + 0x14]                ; 004949e5
    MOV EDX,dword ptr [0x0060b280]      ; 004949e9 | g_CDemonRenderer_PTR_0060b280
    PUSH EAX                            ; 004949ef
    LEA EDI,[ESP + 0x6c]                ; 004949f0
    LEA ESI,[ESP + 0xc]                 ; 004949f4
    FXCH ST3                            ; 004949f8
    FSTP float ptr [ESP + 0xc]          ; 004949fa
    FXCH                                ; 004949fe
    FSTP float ptr [ESP + 0x10]         ; 00494a00
    FSTP float ptr [ESP + 0x14]         ; 00494a04
    MOVSD ES:EDI,ESI                    ; 00494a08
    MOVSD ES:EDI,ESI                    ; 00494a09
    MOVSD ES:EDI,ESI                    ; 00494a0a
    PUSH EDX                            ; 00494a0b | g_CDemonRenderer_01ba5c50
    FXCH                                ; 00494a0c
    FSUB float ptr [ESP + 0x70]         ; 00494a0e
    FXCH ST2                            ; 00494a12
    FSUB float ptr [ESP + 0x74]         ; 00494a14
    FXCH                                ; 00494a18
    FSUB float ptr [ESP + 0x78]         ; 00494a1a
    FXCH ST2                            ; 00494a1e
    FSTP float ptr [ESP + 0x1c]         ; 00494a20
    FSTP float ptr [ESP + 0x20]         ; 00494a24
    FSTP float ptr [ESP + 0x24]         ; 00494a28
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00494a2c
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00494a31
    PUSH 0x0                            ; 00494a34
    PUSH 0x1c3deb8                      ; 00494a36 | g_CVector3i_01c3deb8
    MOV ECX,dword ptr [0x0060b280]      ; 00494a3b | g_CDemonRenderer_PTR_0060b280
    PUSH ECX                            ; 00494a41 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 00494a42
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00494a47
    XOR EBX,EBX                         ; 00494a4a
    FLD float ptr [ESP + 0xd4]          ; 00494a4c
    FCHS                                ; 00494a53
    FMUL float ptr [ESP + 0x4]          ; 00494a55
    MOV dword ptr [ESP + 0x28],EBX      ; 00494a59
    FSTP float ptr [ESP + 0x20]         ; 00494a5d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00494a61
    LEA EBX,[ESP + 0x38]                ; 00494a65
    MOV dword ptr [ESP + 0xd8],EAX      ; 00494a69
    MOV dword ptr [ESP + 0x24],EAX      ; 00494a70
    LEA EAX,[ESP + 0x20]                ; 00494a74
    MOV EDX,dword ptr [0x0060b280]      ; 00494a78 | g_CDemonRenderer_PTR_0060b280
    FLD float ptr [EAX]                 ; 00494a7e
    FMUL float ptr [0x005f64e4]         ; 00494a80 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX]               ; 00494a86
    FLD float ptr [EAX + 0x4]           ; 00494a88
    FMUL float ptr [0x005f64e4]         ; 00494a8b | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00494a91
    FLD float ptr [EAX + 0x8]           ; 00494a94
    FMUL float ptr [0x005f64e4]         ; 00494a97 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00494a9d
    LEA EAX,[ESP + 0x38]                ; 00494aa0
    PUSH EAX                            ; 00494aa4
    MOV EAX,dword ptr [EDX]             ; 00494aa5 | g_CDemonRenderer_01ba5c50
    PUSH EAX                            ; 00494aa7
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 00494aa8
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00494aad
    FLD float ptr [ESP + 0xd4]          ; 00494ab0
    FMUL float ptr [ESP + 0x4]          ; 00494ab7
    XOR ESI,ESI                         ; 00494abb
    FSTP float ptr [ESP + 0xd0]         ; 00494abd
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00494ac4
    LEA EBX,[ESP + 0x74]                ; 00494acb
    MOV dword ptr [ESP + 0x20],EAX      ; 00494acf
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00494ad3
    MOV EDX,dword ptr [0x0060b280]      ; 00494ada | g_CDemonRenderer_PTR_0060b280
    MOV dword ptr [ESP + 0x24],EAX      ; 00494ae0
    LEA EAX,[ESP + 0x20]                ; 00494ae4
    MOV dword ptr [ESP + 0x28],ESI      ; 00494ae8
    FLD float ptr [EAX]                 ; 00494aec
    FMUL float ptr [0x005f64e4]         ; 00494aee | g_FLOAT_005f64e4
    FISTP dword ptr [EBX]               ; 00494af4
    FLD float ptr [EAX + 0x4]           ; 00494af6
    FMUL float ptr [0x005f64e4]         ; 00494af9 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00494aff
    FLD float ptr [EAX + 0x8]           ; 00494b02
    FMUL float ptr [0x005f64e4]         ; 00494b05 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00494b0b
    LEA EAX,[ESP + 0x74]                ; 00494b0e
    PUSH EAX                            ; 00494b12
    MOV EAX,dword ptr [EDX]             ; 00494b13 | g_CDemonRenderer_01ba5c50
    ADD EAX,0x30                        ; 00494b15
    PUSH EAX                            ; 00494b18
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 00494b19
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00494b1e
    LEA EBX,[ESP + 0xa4]                ; 00494b21
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00494b28
    MOV EDX,dword ptr [0x0060b280]      ; 00494b2f | g_CDemonRenderer_PTR_0060b280
    MOV dword ptr [ESP + 0x20],EAX      ; 00494b35
    MOV dword ptr [ESP + 0x24],EAX      ; 00494b39
    LEA EAX,[ESP + 0x20]                ; 00494b3d
    MOV dword ptr [ESP + 0x28],ESI      ; 00494b41
    FLD float ptr [EAX]                 ; 00494b45
    FMUL float ptr [0x005f64e4]         ; 00494b47 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX]               ; 00494b4d
    FLD float ptr [EAX + 0x4]           ; 00494b4f
    FMUL float ptr [0x005f64e4]         ; 00494b52 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00494b58
    FLD float ptr [EAX + 0x8]           ; 00494b5b
    FMUL float ptr [0x005f64e4]         ; 00494b5e | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00494b64
    LEA EAX,[ESP + 0xa4]                ; 00494b67
    PUSH EAX                            ; 00494b6e
    MOV EAX,dword ptr [EDX]             ; 00494b6f | g_CDemonRenderer_01ba5c50
    ADD EAX,0x60                        ; 00494b71
    PUSH EAX                            ; 00494b74
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 00494b75
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00494b7a
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00494b7d
    MOV EDX,dword ptr [0x0060b280]      ; 00494b84 | g_CDemonRenderer_PTR_0060b280
    MOV dword ptr [ESP + 0x20],EAX      ; 00494b8a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00494b8e
    MOV dword ptr [ESP + 0x28],ESI      ; 00494b95
    MOV dword ptr [ESP + 0x24],EAX      ; 00494b99
    LEA EBX,[ESP + 0x98]                ; 00494b9d
    LEA EAX,[ESP + 0x20]                ; 00494ba4
    FLD float ptr [EAX]                 ; 00494ba8
    FMUL float ptr [0x005f64e4]         ; 00494baa | g_FLOAT_005f64e4
    FISTP dword ptr [EBX]               ; 00494bb0
    FLD float ptr [EAX + 0x4]           ; 00494bb2
    FMUL float ptr [0x005f64e4]         ; 00494bb5 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00494bbb
    FLD float ptr [EAX + 0x8]           ; 00494bbe
    FMUL float ptr [0x005f64e4]         ; 00494bc1 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00494bc7
    LEA EAX,[ESP + 0x98]                ; 00494bca
    PUSH EAX                            ; 00494bd1
    MOV EAX,dword ptr [EDX]             ; 00494bd2 | g_CDemonRenderer_01ba5c50
    ADD EAX,0x90                        ; 00494bd4
    PUSH EAX                            ; 00494bd9
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 00494bda
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00494bdf
    PUSH ESI                            ; 00494be2
    MOV ECX,dword ptr [EBP + 0x14]      ; 00494be3
    MOV EAX,[0x007bda74]                ; 00494be6 | g_CDemonCamera_PTR_007bda74
    PUSH ECX                            ; 00494beb
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00494bec
    PUSH EAX                            ; 00494bef
    CALL dword ptr [EDX + 0x4]          ; 00494bf0
    MOV EDX,0xffff                      ; 00494bf3
    ADD ESP,0xc                         ; 00494bf8
    MOV EBX,dword ptr [0x01c38aec]      ; 00494bfb | g_INT_01c38aec
    MOV EAX,dword ptr [EBP + 0x14]      ; 00494c01
    SUB EDX,EBX                         ; 00494c04
    MOV EAX,dword ptr [EAX + 0x40]      ; 00494c06
    MOV ESI,0xffff                      ; 00494c09
    IMUL EDX                            ; 00494c0e
    SHRD EAX,EDX,0x10                   ; 00494c10
    PUSH 0x1                            ; 00494c14
    MOV [0x00622040],EAX                ; 00494c16 | g_SRenderVertex_ARRAY_00622014[0].a
    MOV dword ptr [0x00622034],ESI      ; 00494c1b | g_SRenderVertex_ARRAY_00622014[0].r
    MOV dword ptr [0x00622038],ESI      ; 00494c21 | g_SRenderVertex_ARRAY_00622014[0].g
    MOV dword ptr [0x0062203c],ESI      ; 00494c27 | g_SRenderVertex_ARRAY_00622014[0].b
    MOV dword ptr [0x00622064],ESI      ; 00494c2d | g_SRenderVertex_ARRAY_00622014[1].r
    MOV dword ptr [0x00622068],ESI      ; 00494c33 | g_SRenderVertex_ARRAY_00622014[1].g
    MOV dword ptr [0x0062206c],ESI      ; 00494c39 | g_SRenderVertex_ARRAY_00622014[1].b
    MOV dword ptr [0x00622094],ESI      ; 00494c3f | g_SRenderVertex_ARRAY_00622014[2].r
    MOV dword ptr [0x00622098],ESI      ; 00494c45 | g_SRenderVertex_ARRAY_00622014[2].g
    MOV dword ptr [0x0062209c],ESI      ; 00494c4b | g_SRenderVertex_ARRAY_00622014[2].b
    MOV dword ptr [0x006220c4],ESI      ; 00494c51 | g_SRenderVertex_ARRAY_00622014[3].r
    MOV dword ptr [0x006220c8],ESI      ; 00494c57 | g_SRenderVertex_ARRAY_00622014[3].g
    MOV dword ptr [0x006220cc],ESI      ; 00494c5d | g_SRenderVertex_ARRAY_00622014[3].b
    MOV ESI,dword ptr [0x0060b280]      ; 00494c63 | g_CDemonRenderer_PTR_0060b280
    MOV [0x00622070],EAX                ; 00494c69 | g_SRenderVertex_ARRAY_00622014[1].a
    PUSH ESI                            ; 00494c6e | g_CDemonRenderer_01ba5c50
    MOV [0x006220a0],EAX                ; 00494c6f | g_SRenderVertex_ARRAY_00622014[2].a
    MOV [0x006220d0],EAX                ; 00494c74 | g_SRenderVertex_ARRAY_00622014[3].a
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00494c79
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00494c7e
    PUSH 0x1c3ded0                      ; 00494c81
    MOV EDI,dword ptr [0x0060b280]      ; 00494c86 | g_CDemonRenderer_PTR_0060b280
    PUSH EDI                            ; 00494c8c | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 00494c8d
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00494c92
    PUSH 0x0                            ; 00494c95
    MOV EAX,[0x0060b280]                ; 00494c97 | g_CDemonRenderer_PTR_0060b280
    PUSH EAX                            ; 00494c9c | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00494c9d
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00494ca2
    MOV EDX,dword ptr [0x0060b280]      ; 00494ca5 | g_CDemonRenderer_PTR_0060b280
    PUSH EDX                            ; 00494cab | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 00494cac
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00494cb1
    MOV ECX,dword ptr [ESP + 0xe0]      ; 00494cb4
    INC ECX                             ; 00494cbb
    MOV dword ptr [ESP + 0xe0],ECX      ; 00494cbc
    CMP ECX,0x3                         ; 00494cc3
    JGE 0x00494812                      ; 00494cc6
        ;   XREF to: 00494812 (CONDITIONAL_JUMP)  ; LAB_00494812
    JMP 0x0049492f                      ; 00494ccc
        ;   XREF to: 0049492f (UNCONDITIONAL_JUMP)  ; LAB_0049492f
    PUSH 0x615124                       ; 00494cd1 | g_SMRGLTextureBasic_00615124
        ;   Label: caseD_1
    MOV ECX,dword ptr [0x0060b280]      ; 00494cd6 | g_CDemonRenderer_PTR_0060b280
    PUSH ECX                            ; 00494cdc | g_CDemonRenderer_01ba5c50
    JMP 0x00494825                      ; 00494cdd
        ;   XREF to: 00494825 (UNCONDITIONAL_JUMP)  ; LAB_00494825
    PUSH 0x61513c                       ; 00494ce2 | g_SMRGLTextureBasic_0061513c
        ;   Label: caseD_2
    MOV EDX,dword ptr [0x0060b280]      ; 00494ce7 | g_CDemonRenderer_PTR_0060b280
    PUSH EDX                            ; 00494ced | g_CDemonRenderer_01ba5c50
    JMP 0x00494825                      ; 00494cee
        ;   XREF to: 00494825 (UNCONDITIONAL_JUMP)  ; LAB_00494825
    PUSH 0x615154                       ; 00494cf3 | DAT_00615154
        ;   Label: caseD_3
    MOV EAX,[0x0060b280]                ; 00494cf8 | g_CDemonRenderer_PTR_0060b280
    PUSH EAX                            ; 00494cfd | g_CDemonRenderer_01ba5c50
    JMP 0x00494825                      ; 00494cfe
        ;   XREF to: 00494825 (UNCONDITIONAL_JUMP)  ; LAB_00494825
    MOV EBX,dword ptr [EBP + 0x14]      ; 00494d03
        ;   Label: LAB_00494d03
    PUSH EBX                            ; 00494d06
    MOV ESI,dword ptr [0x0060b280]      ; 00494d07 | g_CDemonRenderer_PTR_0060b280
    PUSH ESI                            ; 00494d0d | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00494d0e
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00494d13
    PUSH 0x0                            ; 00494d16
    PUSH 0x1c3deb8                      ; 00494d18 | g_CVector3i_01c3deb8
    MOV EDI,dword ptr [0x0060b280]      ; 00494d1d | g_CDemonRenderer_PTR_0060b280
    PUSH EDI                            ; 00494d23 | g_CDemonRenderer_01ba5c50
    LEA EBX,[ESP + 0x5c]                ; 00494d24
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 00494d28
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    MOV EAX,0xbecccccd                  ; 00494d2d
    MOV EDX,dword ptr [0x0060b280]      ; 00494d32 | g_CDemonRenderer_PTR_0060b280
    ADD ESP,0xc                         ; 00494d38
    XOR ECX,ECX                         ; 00494d3b
    MOV dword ptr [ESP + 0x20],EAX      ; 00494d3d
    MOV dword ptr [ESP + 0x24],EAX      ; 00494d41
    LEA EAX,[ESP + 0x20]                ; 00494d45
    MOV dword ptr [ESP + 0x28],ECX      ; 00494d49
    FLD float ptr [EAX]                 ; 00494d4d
    FMUL float ptr [0x005f64e4]         ; 00494d4f | g_FLOAT_005f64e4
    FISTP dword ptr [EBX]               ; 00494d55
    FLD float ptr [EAX + 0x4]           ; 00494d57
    FMUL float ptr [0x005f64e4]         ; 00494d5a | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00494d60
    FLD float ptr [EAX + 0x8]           ; 00494d63
    FMUL float ptr [0x005f64e4]         ; 00494d66 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00494d6c
    LEA EAX,[ESP + 0x50]                ; 00494d6f
    PUSH EAX                            ; 00494d73
    MOV EAX,dword ptr [EDX]             ; 00494d74 | g_CDemonRenderer_01ba5c50
    PUSH EAX                            ; 00494d76
    MOV ESI,0xbecccccd                  ; 00494d77
    XOR EDI,EDI                         ; 00494d7c
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 00494d7e
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3ecccccd                  ; 00494d83
    LEA EAX,[ESP + 0x28]                ; 00494d88
    ADD ESP,0x8                         ; 00494d8c
    MOV EDX,dword ptr [0x0060b280]      ; 00494d8f | g_CDemonRenderer_PTR_0060b280
    MOV dword ptr [ESP + 0x20],EBX      ; 00494d95
    MOV dword ptr [ESP + 0x24],ESI      ; 00494d99
    LEA EBX,[ESP + 0xb0]                ; 00494d9d
    MOV dword ptr [ESP + 0x28],EDI      ; 00494da4
    FLD float ptr [EAX]                 ; 00494da8
    FMUL float ptr [0x005f64e4]         ; 00494daa | g_FLOAT_005f64e4
    FISTP dword ptr [EBX]               ; 00494db0
    FLD float ptr [EAX + 0x4]           ; 00494db2
    FMUL float ptr [0x005f64e4]         ; 00494db5 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00494dbb
    FLD float ptr [EAX + 0x8]           ; 00494dbe
    FMUL float ptr [0x005f64e4]         ; 00494dc1 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00494dc7
    LEA EAX,[ESP + 0xb0]                ; 00494dca
    PUSH EAX                            ; 00494dd1
    MOV EAX,dword ptr [EDX]             ; 00494dd2 | g_CDemonRenderer_01ba5c50
    ADD EAX,0x30                        ; 00494dd4
    PUSH EAX                            ; 00494dd7
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 00494dd8
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0x3ecccccd                  ; 00494ddd
    LEA EBX,[ESP + 0xc4]                ; 00494de2
    ADD ESP,0x8                         ; 00494de9
    MOV EDX,dword ptr [0x0060b280]      ; 00494dec | g_CDemonRenderer_PTR_0060b280
    MOV dword ptr [ESP + 0x20],EAX      ; 00494df2
    MOV dword ptr [ESP + 0x24],EAX      ; 00494df6
    LEA EAX,[ESP + 0x20]                ; 00494dfa
    MOV dword ptr [ESP + 0x28],EDI      ; 00494dfe
    FLD float ptr [EAX]                 ; 00494e02
    FMUL float ptr [0x005f64e4]         ; 00494e04 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX]               ; 00494e0a
    FLD float ptr [EAX + 0x4]           ; 00494e0c
    FMUL float ptr [0x005f64e4]         ; 00494e0f | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00494e15
    FLD float ptr [EAX + 0x8]           ; 00494e18
    FMUL float ptr [0x005f64e4]         ; 00494e1b | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00494e21
    LEA EAX,[ESP + 0xbc]                ; 00494e24
    PUSH EAX                            ; 00494e2b
    MOV EAX,dword ptr [EDX]             ; 00494e2c | g_CDemonRenderer_01ba5c50
    ADD EAX,0x60                        ; 00494e2e
    PUSH EAX                            ; 00494e31
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 00494e32
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x94]                ; 00494e37
    LEA EAX,[ESP + 0x28]                ; 00494e3e
    ADD ESP,0x8                         ; 00494e42
    MOV EDX,dword ptr [0x0060b280]      ; 00494e45 | g_CDemonRenderer_PTR_0060b280
    MOV dword ptr [ESP + 0x20],ESI      ; 00494e4b
    MOV ESI,0x3ecccccd                  ; 00494e4f
    MOV dword ptr [ESP + 0x28],EDI      ; 00494e54
    MOV dword ptr [ESP + 0x24],ESI      ; 00494e58
    FLD float ptr [EAX]                 ; 00494e5c
    FMUL float ptr [0x005f64e4]         ; 00494e5e | g_FLOAT_005f64e4
    FISTP dword ptr [EBX]               ; 00494e64
    FLD float ptr [EAX + 0x4]           ; 00494e66
    FMUL float ptr [0x005f64e4]         ; 00494e69 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00494e6f
    FLD float ptr [EAX + 0x8]           ; 00494e72
    FMUL float ptr [0x005f64e4]         ; 00494e75 | g_FLOAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00494e7b
    LEA EAX,[ESP + 0x8c]                ; 00494e7e
    PUSH EAX                            ; 00494e85
    MOV EAX,dword ptr [EDX]             ; 00494e86 | g_CDemonRenderer_01ba5c50
    ADD EAX,0x90                        ; 00494e88
    PUSH EAX                            ; 00494e8d
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0055d723 ; 00494e8e
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00494e93
    MOV EAX,dword ptr [EBP + 0x14]      ; 00494e96
    MOV EAX,dword ptr [EAX + 0x4c]      ; 00494e99
    CMP EAX,0x3                         ; 00494e9c
    JA 0x0049482d                       ; 00494e9f
        ;   XREF to: 0049482d (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x494790]  ; 00494ea5 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD


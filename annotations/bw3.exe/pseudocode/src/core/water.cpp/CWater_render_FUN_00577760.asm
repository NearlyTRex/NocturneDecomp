; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_water_cpp_CWater_render_FUN_00577760(CWater *this_ptr,int render_mode)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_mode
; Local Variables:
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
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 at 00533dc0
;   core_set.cpp_CDemonSet_renderScene_FUN_00535da0 at 0053611d
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534fec
;
; Referenced Globals:
;   double g_DOUBLE_005d71bb = 65536
;   float g_FLOAT_005d71c3 = 3.141593
;   double g_DOUBLE_005d71cb = 0.5
;   double g_DOUBLE_005d71d3 = 2
;   float g_FLOAT_005e5e7c = 256
;   CDemonRenderer* g_CDemonRenderer_PTR_005f2afc = 01bdd7e4
;   CGame* g_CGamePtr = 01d2130c
;   float g_FLOAT_00606b24 = 0.25
;   int g_INT_00606b28 = 0x2000
;   SMRGLTextureBasic[16] g_SMRGLTextureBasic_ARRAY_00606cac
;   SMRGLPrimitiveQuad g_SMRGLPrimitiveQuad_00606e2c
;   undefined4 g_SMRGLPrimitiveQuad_00606e2c.vertices[0].texture_u
;   undefined4 g_SMRGLPrimitiveQuad_00606e2c.vertices[0].texture_v
;   undefined4 g_SMRGLPrimitiveQuad_00606e2c.vertices[1].texture_u
;   undefined4 g_SMRGLPrimitiveQuad_00606e2c.vertices[1].texture_v
;   ... and 26 more
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_special.cpp_transformAndProjectPoint_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577760
        ;   Label: core_water.cpp_CWater_render_FUN_00577760
    PUSH ESI                            ; 00577761
    PUSH EDI                            ; 00577762
    PUSH EBP                            ; 00577763
    SUB ESP,0x68                        ; 00577764
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00577767
    TEST dword ptr [ESI + 0x4],0x7fffffff ; 0057776b
    JZ 0x00577c29                       ; 00577772
        ;   XREF to: 00577c29 (CONDITIONAL_JUMP)  ; LAB_00577c29
    MOV ECX,dword ptr [0x02cfd974]      ; 00577778 | g_INT_02cfd974
    ADD ECX,dword ptr [0x01c5fad0]      ; 0057777e | g_INT_01c5fad0
    MOV EBX,dword ptr [0x00606b28]      ; 00577784 | g_INT_00606b28
    MOV dword ptr [0x02cfd974],ECX      ; 0057778a | g_INT_02cfd974
    CMP ECX,EBX                         ; 00577790
    JG 0x00577c31                       ; 00577792
        ;   XREF to: 00577c31 (CONDITIONAL_JUMP)  ; LAB_00577c31
    MOV EAX,[0x005fe9dc]                ; 00577798 | g_CGamePtr
        ;   Label: LAB_00577798
    MOV EAX,dword ptr [EAX + 0x314]     ; 0057779d | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x4c],EAX      ; 005777a3
    FLD float ptr [0x02cfd960]          ; 005777a7 | g_FLOAT_02cfd960
    FMUL float ptr [ESP + 0x4c]         ; 005777ad
    FLD float ptr [0x02cfd964]          ; 005777b1 | g_FLOAT_02cfd964
    FMUL float ptr [ESP + 0x4c]         ; 005777b7
    FXCH                                ; 005777bb
    FLD double ptr [0x005d71bb]         ; 005777bd | g_DOUBLE_005d71bb
    FXCH                                ; 005777c3
    FMUL ST1                            ; 005777c5
    FXCH ST2                            ; 005777c7
    FMULP                               ; 005777c9
    FILD dword ptr [0x02d059ac]         ; 005777cb | g_INT_02d059ac
    FILD dword ptr [0x02d059b0]         ; 005777d1 | g_INT_02d059b0
    FXCH ST3                            ; 005777d7
    FADD ST0,ST1                        ; 005777d9
    FXCH ST2                            ; 005777db
    FADD ST0,ST3                        ; 005777dd
    FXCH ST2                            ; 005777df
    FSTP ST1                            ; 005777e1
    FXCH                                ; 005777e3
    FSTP ST2                            ; 005777e5
    CALL crt_math.c_round_FUN_005a3120  ; 005777e7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FXCH                                ; 005777ec
    CALL crt_math.c_round_FUN_005a3120  ; 005777ee
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FXCH                                ; 005777f3
    FISTP dword ptr [0x02d059ac]        ; 005777f5 | g_INT_02d059ac
    MOV ECX,dword ptr [0x02d059ac]      ; 005777fb | g_INT_02d059ac
    FISTP dword ptr [0x02d059b0]        ; 00577801 | g_INT_02d059b0
    CMP ECX,0x1000000                   ; 00577807
    JL 0x0057781b                       ; 0057780d
        ;   XREF to: 0057781b (CONDITIONAL_JUMP)  ; LAB_0057781b
    LEA EBX,[ECX + 0xff000000]          ; 0057780f
    MOV dword ptr [0x02d059ac],EBX      ; 00577815 | g_INT_02d059ac
    CMP dword ptr [0x02d059ac],0x0      ; 0057781b | g_INT_02d059ac
        ;   Label: LAB_0057781b
    JL 0x00577c5e                       ; 00577822
        ;   XREF to: 00577c5e (CONDITIONAL_JUMP)  ; LAB_00577c5e
    MOV EBP,dword ptr [0x02d059b0]      ; 00577828 | g_INT_02d059b0
        ;   Label: LAB_00577828
    CMP EBP,0x1000000                   ; 0057782e
    JL 0x00577841                       ; 00577834
        ;   XREF to: 00577841 (CONDITIONAL_JUMP)  ; LAB_00577841
    LEA EAX,[EBP + 0xff000000]          ; 00577836
    MOV [0x02d059b0],EAX                ; 0057783c | g_INT_02d059b0
    CMP dword ptr [0x02d059b0],0x0      ; 00577841 | g_INT_02d059b0
        ;   Label: LAB_00577841
    JL 0x00577c69                       ; 00577848
        ;   XREF to: 00577c69 (CONDITIONAL_JUMP)  ; LAB_00577c69
    MOV EAX,[0x02d059ac]                ; 0057784e | g_INT_02d059ac
        ;   Label: LAB_0057784e
    MOV [0x00606e48],EAX                ; 00577853 | g_SMRGLPrimitiveQuad_00606e2c.vertices[0].texture_u
    MOV EAX,[0x02d059b0]                ; 00577858 | g_INT_02d059b0
    MOV [0x00606e4c],EAX                ; 0057785d | g_SMRGLPrimitiveQuad_00606e2c.vertices[0].texture_v
    MOV EAX,[0x02d059ac]                ; 00577862 | g_INT_02d059ac
    ADD EAX,0x1000000                   ; 00577867
    MOV [0x00606e54],EAX                ; 0057786c | g_SMRGLPrimitiveQuad_00606e2c.vertices[1].texture_u
    MOV EAX,[0x02d059b0]                ; 00577871 | g_INT_02d059b0
    MOV [0x00606e58],EAX                ; 00577876 | g_SMRGLPrimitiveQuad_00606e2c.vertices[1].texture_v
    MOV EAX,[0x00606e54]                ; 0057787b | g_SMRGLPrimitiveQuad_00606e2c.vertices[1].texture_u
    MOV [0x00606e60],EAX                ; 00577880 | g_SMRGLPrimitiveQuad_00606e2c.vertices[2].texture_u
    MOV EAX,[0x02d059b0]                ; 00577885 | g_INT_02d059b0
    ADD EAX,0x1000000                   ; 0057788a
    MOV [0x00606e64],EAX                ; 0057788f | g_SMRGLPrimitiveQuad_00606e2c.vertices[2].texture_v
    MOV EAX,[0x02d059ac]                ; 00577894 | g_INT_02d059ac
    MOV EDX,0xffff                      ; 00577899
    MOV [0x00606e6c],EAX                ; 0057789e | g_SMRGLPrimitiveQuad_00606e2c.vertices[3].texture_u
    MOV EAX,[0x00606e64]                ; 005778a3 | g_SMRGLPrimitiveQuad_00606e2c.vertices[2].texture_v
    MOV EBX,dword ptr [0x00606b28]      ; 005778a8 | g_INT_00606b28
    MOV [0x00606e70],EAX                ; 005778ae | g_SMRGLPrimitiveQuad_00606e2c.vertices[3].texture_v
    MOV EAX,[0x02cfd974]                ; 005778b3 | g_INT_02cfd974
    IMUL EDX                            ; 005778b8
    IDIV EBX                            ; 005778ba
    MOV [0x02d059a4],EAX                ; 005778bc | g_INT_02d059a4
    CMP EAX,0xffff                      ; 005778c1
    JLE 0x00577c74                      ; 005778c6
        ;   XREF to: 00577c74 (CONDITIONAL_JUMP)  ; LAB_00577c74
    MOV dword ptr [0x02d059a4],0xffff   ; 005778cc | g_INT_02d059a4
    MOV EDX,dword ptr [0x02cfd978]      ; 005778d6 | g_INT_02cfd978
        ;   Label: LAB_005778d6
    LEA EAX,[EDX*0x4 + 0x0]             ; 005778dc
    SUB EAX,EDX                         ; 005778e3
    SHL EAX,0x3                         ; 005778e5
    ADD EAX,0x606cac                    ; 005778e8 | g_SMRGLTextureBasic_ARRAY_00606cac
    PUSH EAX                            ; 005778ed
    MOV EDI,dword ptr [0x005f2afc]      ; 005778ee | g_CDemonRenderer_PTR_005f2afc
    PUSH EDI                            ; 005778f4 | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 005778f5
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x005fe9dc]                ; 005778fa | g_CGamePtr | g_CGameInstance
    FLD float ptr [EAX + 0x314]         ; 005778ff | g_CGameInstance.delta_time_float
    FMUL float ptr [0x005d71c3]         ; 00577905 | g_FLOAT_005d71c3
    FMUL double ptr [0x005d71cb]        ; 0057790b | g_DOUBLE_005d71cb
    FMUL double ptr [0x005d71d3]        ; 00577911 | g_DOUBLE_005d71d3
    XOR EBP,EBP                         ; 00577917
    MOV EDX,dword ptr [0x02cfd97c]      ; 00577919 | g_INT_02cfd97c
    ADD ESP,0x8                         ; 0057791f
    MOV dword ptr [0x01c6e24c],EBP      ; 00577922 | g_INT_01c6e24c
    FLD float ptr [0x02d059a8]          ; 00577928 | g_FLOAT_02d059a8
    FXCH                                ; 0057792e
    FADD ST0,ST1                        ; 00577930
    MOV dword ptr [ESP + 0x54],EBP      ; 00577932
    FSTP ST1                            ; 00577936
    FSTP float ptr [0x02d059a8]         ; 00577938 | g_FLOAT_02d059a8
    TEST EDX,EDX                        ; 0057793e
    JLE 0x00577c29                      ; 00577940
        ;   XREF to: 00577c29 (CONDITIONAL_JUMP)  ; LAB_00577c29
    MOV dword ptr [ESP + 0x58],EBP      ; 00577946
    MOV EBP,dword ptr [ESP + 0x58]      ; 0057794a
        ;   Label: LAB_0057794a
    MOV EDI,dword ptr [ESP + 0x58]      ; 0057794e
    MOV EBP,dword ptr [EBP + 0x2cfd980] ; 00577952 | g_INT_ARRAY_02cfd980
    MOV EDI,dword ptr [EDI + 0x2d01980] ; 00577958 | g_INT_ARRAY_02d01980
    MOV dword ptr [ESP + 0x60],EBP      ; 0057795e
    MOV dword ptr [ESP + 0x64],EDI      ; 00577962
    FILD dword ptr [ESP + 0x60]         ; 00577966
    FST float ptr [ESP + 0x5c]          ; 0057796a
    FMUL float ptr [ESI + 0x8]          ; 0057796e
    FILD dword ptr [ESP + 0x64]         ; 00577971
    FXCH                                ; 00577975
    FSTP float ptr [ESP]                ; 00577977
    MOV EAX,dword ptr [ESI + 0x4]       ; 0057797a
    FSTP float ptr [ESP + 0x50]         ; 0057797d
    MOV dword ptr [ESP + 0x4],EAX       ; 00577981
    FLD float ptr [ESP + 0x50]          ; 00577985
    FMUL float ptr [ESI + 0x8]          ; 00577989
    FLD float ptr [ESP]                 ; 0057798c
    FADD float ptr [0x02cfd968]         ; 0057798f | g_FLOAT_02cfd968
    FLD float ptr [ESP + 0x4]           ; 00577995
    MOV EAX,ESP                         ; 00577999
    FXCH ST2                            ; 0057799b
    FSTP float ptr [ESP + 0x8]          ; 0057799d
    FSTP float ptr [ESP]                ; 005779a1
    PUSH EAX                            ; 005779a4
    FADD float ptr [0x02cfd96c]         ; 005779a5 | g_FLOAT_02cfd96c
    FLD float ptr [ESP + 0xc]           ; 005779ab
    FXCH                                ; 005779af
    FSTP float ptr [ESP + 0x8]          ; 005779b1
    MOV EAX,[0x005f2afc]                ; 005779b5 | g_CDemonRenderer_PTR_005f2afc
    FADD float ptr [0x02cfd970]         ; 005779ba | g_FLOAT_02cfd970
    PUSH EAX                            ; 005779c0 | g_CDemonRenderer_01bdd7e4
    FSTP float ptr [ESP + 0x10]         ; 005779c1
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 005779c5
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005779ca
    XOR EDX,EDX                         ; 005779cd
    MOV dword ptr [ESP],EDX             ; 005779cf
    MOV dword ptr [ESP + 0x4],EDX       ; 005779d2
    MOV dword ptr [ESP + 0x8],EDX       ; 005779d6
    CMP dword ptr [ESI],0x0             ; 005779da
    JZ 0x00577a0b                       ; 005779dd
        ;   XREF to: 00577a0b (CONDITIONAL_JUMP)  ; LAB_00577a0b
    FLD float ptr [0x005d71c3]          ; 005779df | g_FLOAT_005d71c3
    FLD float ptr [ESP + 0x50]          ; 005779e5
    FMUL ST1                            ; 005779e9
    FMUL double ptr [0x005d71cb]        ; 005779eb | g_DOUBLE_005d71cb
    FLD float ptr [ESP + 0x5c]          ; 005779f1
    FMULP ST2                           ; 005779f5
    FADDP                               ; 005779f7
    FADD float ptr [0x02d059a8]         ; 005779f9 | g_FLOAT_02d059a8
    FSIN                                ; 005779ff
    FMUL float ptr [0x00606b24]         ; 00577a01 | g_FLOAT_00606b24
    FSTP float ptr [ESP + 0x4]          ; 00577a07
    LEA EBX,[ESP + 0x30]                ; 00577a0b
        ;   Label: LAB_00577a0b
    MOV EAX,ESP                         ; 00577a0f
    MOV EDX,dword ptr [0x005f2afc]      ; 00577a11 | g_CDemonRenderer_PTR_005f2afc
    FLD float ptr [EAX]                 ; 00577a17
    FMUL float ptr [0x005e5e7c]         ; 00577a19 | g_FLOAT_005e5e7c
    FISTP dword ptr [EBX]               ; 00577a1f
    FLD float ptr [EAX + 0x4]           ; 00577a21
    FMUL float ptr [0x005e5e7c]         ; 00577a24 | g_FLOAT_005e5e7c
    FISTP dword ptr [EBX + 0x4]         ; 00577a2a
    FLD float ptr [EAX + 0x8]           ; 00577a2d
    FMUL float ptr [0x005e5e7c]         ; 00577a30 | g_FLOAT_005e5e7c
    FISTP dword ptr [EBX + 0x8]         ; 00577a36
    LEA EAX,[ESP + 0x30]                ; 00577a39
    PUSH EAX                            ; 00577a3d
    MOV EAX,dword ptr [EDX]             ; 00577a3e | g_CDemonRenderer_01bdd7e4
    PUSH EAX                            ; 00577a40
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005632a3 ; 00577a41
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00577a46
    MOV EAX,dword ptr [ESI + 0x8]       ; 00577a49
    MOV dword ptr [ESP],EAX             ; 00577a4c
    CMP dword ptr [ESI],0x0             ; 00577a4f
    JZ 0x00577a8b                       ; 00577a52
        ;   XREF to: 00577a8b (CONDITIONAL_JUMP)  ; LAB_00577a8b
    MOV dword ptr [ESP + 0x64],EDI      ; 00577a54
    FLD float ptr [0x005d71c3]          ; 00577a58 | g_FLOAT_005d71c3
    FILD dword ptr [ESP + 0x64]         ; 00577a5e
    FMUL ST1                            ; 00577a62
    LEA EAX,[EBP + 0x1]                 ; 00577a64
    FMUL double ptr [0x005d71cb]        ; 00577a67 | g_DOUBLE_005d71cb
    MOV dword ptr [ESP + 0x64],EAX      ; 00577a6d
    FILD dword ptr [ESP + 0x64]         ; 00577a71
    FMULP ST2                           ; 00577a75
    FADDP                               ; 00577a77
    FADD float ptr [0x02d059a8]         ; 00577a79 | g_FLOAT_02d059a8
    FSIN                                ; 00577a7f
    FMUL float ptr [0x00606b24]         ; 00577a81 | g_FLOAT_00606b24
    FSTP float ptr [ESP + 0x4]          ; 00577a87
    LEA EBX,[ESP + 0x18]                ; 00577a8b
        ;   Label: LAB_00577a8b
    MOV EAX,ESP                         ; 00577a8f
    MOV EDX,dword ptr [0x005f2afc]      ; 00577a91 | g_CDemonRenderer_PTR_005f2afc
    FLD float ptr [EAX]                 ; 00577a97
    FMUL float ptr [0x005e5e7c]         ; 00577a99 | g_FLOAT_005e5e7c
    FISTP dword ptr [EBX]               ; 00577a9f
    FLD float ptr [EAX + 0x4]           ; 00577aa1
    FMUL float ptr [0x005e5e7c]         ; 00577aa4 | g_FLOAT_005e5e7c
    FISTP dword ptr [EBX + 0x4]         ; 00577aaa
    FLD float ptr [EAX + 0x8]           ; 00577aad
    FMUL float ptr [0x005e5e7c]         ; 00577ab0 | g_FLOAT_005e5e7c
    FISTP dword ptr [EBX + 0x8]         ; 00577ab6
    LEA EAX,[ESP + 0x18]                ; 00577ab9
    PUSH EAX                            ; 00577abd
    MOV EAX,dword ptr [EDX]             ; 00577abe | g_CDemonRenderer_01bdd7e4
    ADD EAX,0x30                        ; 00577ac0
    PUSH EAX                            ; 00577ac3
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005632a3 ; 00577ac4
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00577ac9
    MOV EAX,dword ptr [ESI + 0x8]       ; 00577acc
    MOV dword ptr [ESP + 0x8],EAX       ; 00577acf
    CMP dword ptr [ESI],0x0             ; 00577ad3
    JZ 0x00577b12                       ; 00577ad6
        ;   XREF to: 00577b12 (CONDITIONAL_JUMP)  ; LAB_00577b12
    LEA EAX,[EDI + 0x1]                 ; 00577ad8
    MOV dword ptr [ESP + 0x64],EAX      ; 00577adb
    FLD float ptr [0x005d71c3]          ; 00577adf | g_FLOAT_005d71c3
    FILD dword ptr [ESP + 0x64]         ; 00577ae5
    FMUL ST1                            ; 00577ae9
    LEA EBX,[EBP + 0x1]                 ; 00577aeb
    FMUL double ptr [0x005d71cb]        ; 00577aee | g_DOUBLE_005d71cb
    MOV dword ptr [ESP + 0x64],EBX      ; 00577af4
    FILD dword ptr [ESP + 0x64]         ; 00577af8
    FMULP ST2                           ; 00577afc
    FADDP                               ; 00577afe
    FADD float ptr [0x02d059a8]         ; 00577b00 | g_FLOAT_02d059a8
    FSIN                                ; 00577b06
    FMUL float ptr [0x00606b24]         ; 00577b08 | g_FLOAT_00606b24
    FSTP float ptr [ESP + 0x4]          ; 00577b0e
    LEA EBX,[ESP + 0xc]                 ; 00577b12
        ;   Label: LAB_00577b12
    MOV EAX,ESP                         ; 00577b16
    MOV EDX,dword ptr [0x005f2afc]      ; 00577b18 | g_CDemonRenderer_PTR_005f2afc
    FLD float ptr [EAX]                 ; 00577b1e
    FMUL float ptr [0x005e5e7c]         ; 00577b20 | g_FLOAT_005e5e7c
    FISTP dword ptr [EBX]               ; 00577b26
    FLD float ptr [EAX + 0x4]           ; 00577b28
    FMUL float ptr [0x005e5e7c]         ; 00577b2b | g_FLOAT_005e5e7c
    FISTP dword ptr [EBX + 0x4]         ; 00577b31
    FLD float ptr [EAX + 0x8]           ; 00577b34
    FMUL float ptr [0x005e5e7c]         ; 00577b37 | g_FLOAT_005e5e7c
    FISTP dword ptr [EBX + 0x8]         ; 00577b3d
    LEA EAX,[ESP + 0xc]                 ; 00577b40
    PUSH EAX                            ; 00577b44
    MOV EAX,dword ptr [EDX]             ; 00577b45 | g_CDemonRenderer_01bdd7e4
    ADD EAX,0x60                        ; 00577b47
    PUSH EAX                            ; 00577b4a
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005632a3 ; 00577b4b
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00577b50
    XOR EBX,EBX                         ; 00577b53
    MOV dword ptr [ESP],EBX             ; 00577b55
    CMP dword ptr [ESI],0x0             ; 00577b58
    JZ 0x00577b92                       ; 00577b5b
        ;   XREF to: 00577b92 (CONDITIONAL_JUMP)  ; LAB_00577b92
    INC EDI                             ; 00577b5d
    MOV dword ptr [ESP + 0x64],EDI      ; 00577b5e
    FLD float ptr [0x005d71c3]          ; 00577b62 | g_FLOAT_005d71c3
    FILD dword ptr [ESP + 0x64]         ; 00577b68
    FMUL ST1                            ; 00577b6c
    FMUL double ptr [0x005d71cb]        ; 00577b6e | g_DOUBLE_005d71cb
    MOV dword ptr [ESP + 0x64],EBP      ; 00577b74
    FILD dword ptr [ESP + 0x64]         ; 00577b78
    FMULP ST2                           ; 00577b7c
    FADDP                               ; 00577b7e
    FADD float ptr [0x02d059a8]         ; 00577b80 | g_FLOAT_02d059a8
    FSIN                                ; 00577b86
    FMUL float ptr [0x00606b24]         ; 00577b88 | g_FLOAT_00606b24
    FSTP float ptr [ESP + 0x4]          ; 00577b8e
    LEA EBX,[ESP + 0x24]                ; 00577b92
        ;   Label: LAB_00577b92
    MOV EAX,ESP                         ; 00577b96
    MOV EDX,dword ptr [0x005f2afc]      ; 00577b98 | g_CDemonRenderer_PTR_005f2afc
    FLD float ptr [EAX]                 ; 00577b9e
    FMUL float ptr [0x005e5e7c]         ; 00577ba0 | g_FLOAT_005e5e7c
    FISTP dword ptr [EBX]               ; 00577ba6
    FLD float ptr [EAX + 0x4]           ; 00577ba8
    FMUL float ptr [0x005e5e7c]         ; 00577bab | g_FLOAT_005e5e7c
    FISTP dword ptr [EBX + 0x4]         ; 00577bb1
    FLD float ptr [EAX + 0x8]           ; 00577bb4
    FMUL float ptr [0x005e5e7c]         ; 00577bb7 | g_FLOAT_005e5e7c
    FISTP dword ptr [EBX + 0x8]         ; 00577bbd
    LEA EAX,[ESP + 0x24]                ; 00577bc0
    PUSH EAX                            ; 00577bc4
    MOV EAX,dword ptr [EDX]             ; 00577bc5 | g_CDemonRenderer_01bdd7e4
    ADD EAX,0x90                        ; 00577bc7
    PUSH EAX                            ; 00577bcc
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005632a3 ; 00577bcd
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [ESI]             ; 00577bd2
    ADD ESP,0x8                         ; 00577bd4
    TEST EDX,EDX                        ; 00577bd7
    JZ 0x00577c89                       ; 00577bd9
        ;   XREF to: 00577c89 (CONDITIONAL_JUMP)  ; LAB_00577c89
    PUSH 0xc000                         ; 00577bdf
    MOV ECX,dword ptr [0x005f2afc]      ; 00577be4 | g_CDemonRenderer_PTR_005f2afc
    PUSH ECX                            ; 00577bea | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00577beb
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00577bf0
    PUSH 0x606e2c                       ; 00577bf3 | g_SMRGLPrimitiveQuad_00606e2c
    MOV EBX,dword ptr [0x005f2afc]      ; 00577bf8 | g_CDemonRenderer_PTR_005f2afc
    PUSH EBX                            ; 00577bfe | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800 ; 00577bff
        ;   XREF to: 0046c800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00577c04
        ;   Label: LAB_00577c04
    MOV ECX,dword ptr [ESP + 0x58]      ; 00577c07
    MOV EBX,dword ptr [ESP + 0x54]      ; 00577c0b
    MOV EDI,dword ptr [0x02cfd97c]      ; 00577c0f | g_INT_02cfd97c
    ADD ECX,0x4                         ; 00577c15
    INC EBX                             ; 00577c18
    MOV dword ptr [ESP + 0x58],ECX      ; 00577c19
    MOV dword ptr [ESP + 0x54],EBX      ; 00577c1d
    CMP EBX,EDI                         ; 00577c21
    JL 0x0057794a                       ; 00577c23
        ;   XREF to: 0057794a (CONDITIONAL_JUMP)  ; LAB_0057794a
    ADD ESP,0x68                        ; 00577c29
        ;   Label: LAB_00577c29
    POP EBP                             ; 00577c2c
    POP EDI                             ; 00577c2d
    POP ESI                             ; 00577c2e
    POP EBX                             ; 00577c2f
    RET                                 ; 00577c30
    MOV EDI,ECX                         ; 00577c31
        ;   Label: LAB_00577c31
    MOV EBP,dword ptr [0x02cfd978]      ; 00577c33 | g_INT_02cfd978
    SUB EDI,EBX                         ; 00577c39
    INC EBP                             ; 00577c3b
    MOV dword ptr [0x02cfd974],EDI      ; 00577c3c | g_INT_02cfd974
    MOV dword ptr [0x02cfd978],EBP      ; 00577c42 | g_INT_02cfd978
    CMP EBP,0x10                        ; 00577c48
    JL 0x00577798                       ; 00577c4b
        ;   XREF to: 00577798 (CONDITIONAL_JUMP)  ; LAB_00577798
    XOR EDX,EDX                         ; 00577c51
    MOV dword ptr [0x02cfd978],EDX      ; 00577c53 | g_INT_02cfd978
    JMP 0x00577798                      ; 00577c59
        ;   XREF to: 00577798 (UNCONDITIONAL_JUMP)  ; LAB_00577798
    INC byte ptr [0x02d059af]           ; 00577c5e | g_INT_02d059ac+3
        ;   Label: LAB_00577c5e
    JMP 0x00577828                      ; 00577c64
        ;   XREF to: 00577828 (UNCONDITIONAL_JUMP)  ; LAB_00577828
    INC byte ptr [0x02d059b3]           ; 00577c69 | g_INT_02d059b0+3
        ;   Label: LAB_00577c69
    JMP 0x0057784e                      ; 00577c6f
        ;   XREF to: 0057784e (UNCONDITIONAL_JUMP)  ; LAB_0057784e
    TEST EAX,EAX                        ; 00577c74
        ;   Label: LAB_00577c74
    JGE 0x005778d6                      ; 00577c76
        ;   XREF to: 005778d6 (CONDITIONAL_JUMP)  ; LAB_005778d6
    XOR ECX,ECX                         ; 00577c7c
    MOV dword ptr [0x02d059a4],ECX      ; 00577c7e | g_INT_02d059a4
    JMP 0x005778d6                      ; 00577c84
        ;   XREF to: 005778d6 (UNCONDITIONAL_JUMP)  ; LAB_005778d6
    CMP dword ptr [0x01c6cee8],0x0      ; 00577c89 | g_INT_01c6cee8
        ;   Label: LAB_00577c89
    JNZ 0x00577cb2                      ; 00577c90
        ;   XREF to: 00577cb2 (CONDITIONAL_JUMP)  ; LAB_00577cb2
    CMP dword ptr [ESP + 0x80],0x0      ; 00577c92
    JZ 0x00577cd8                       ; 00577c9a
        ;   XREF to: 00577cd8 (CONDITIONAL_JUMP)  ; LAB_00577cd8
    PUSH 0x606e2c                       ; 00577c9c | g_SMRGLPrimitiveQuad_00606e2c
    MOV EBP,dword ptr [0x005f2afc]      ; 00577ca1 | g_CDemonRenderer_PTR_005f2afc
    PUSH EBP                            ; 00577ca7 | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20 ; 00577ca8
        ;   XREF to: 0046bc20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x00577c04                      ; 00577cad
        ;   XREF to: 00577c04 (UNCONDITIONAL_JUMP)  ; LAB_00577c04
    PUSH 0x1                            ; 00577cb2
        ;   Label: LAB_00577cb2
    MOV EAX,[0x005f2afc]                ; 00577cb4 | g_CDemonRenderer_PTR_005f2afc
    PUSH EAX                            ; 00577cb9 | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0 ; 00577cba
        ;   XREF to: 0046d3c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 00577cbf
    PUSH 0x606e2c                       ; 00577cc2 | g_SMRGLPrimitiveQuad_00606e2c
    MOV EDX,dword ptr [0x005f2afc]      ; 00577cc7 | g_CDemonRenderer_PTR_005f2afc
    PUSH EDX                            ; 00577ccd | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 ; 00577cce
        ;   XREF to: 0046b2c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x00577c04                      ; 00577cd3
        ;   XREF to: 00577c04 (UNCONDITIONAL_JUMP)  ; LAB_00577c04
    PUSH 0x606e2c                       ; 00577cd8 | g_SMRGLPrimitiveQuad_00606e2c
        ;   Label: LAB_00577cd8
    MOV EDI,dword ptr [0x005f2afc]      ; 00577cdd | g_CDemonRenderer_PTR_005f2afc
    PUSH EDI                            ; 00577ce3 | g_CDemonRenderer_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60 ; 00577ce4
        ;   XREF to: 0046be60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    JMP 0x00577c04                      ; 00577ce9
        ;   XREF to: 00577c04 (UNCONDITIONAL_JUMP)  ; LAB_00577c04


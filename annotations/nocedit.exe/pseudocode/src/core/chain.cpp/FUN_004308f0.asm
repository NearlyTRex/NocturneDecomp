; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_chain.cpp_FUN_004308f0()
;
; Local Variables:
; undefined1       Stack[-0x90]:1  local_90
;
; Referenced Globals:
;   undefined4 DAT_0065b9e0
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 DAT_00f80000
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004308f0
        ;   Label: core_chain.cpp_FUN_004308f0
    PUSH EDI                            ; 004308f1
    PUSH EBP                            ; 004308f2
    SUB ESP,0xac                        ; 004308f3
    MOV EDX,dword ptr [0x006703ec]      ; 004308f9 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 004308ff | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00430900
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00430905
    TEST EAX,EAX                        ; 00430908
    JZ 0x00430918                       ; 0043090a
        ;   XREF to: 00430918 (CONDITIONAL_JUMP)  ; LAB_00430918
    XOR EAX,EAX                         ; 0043090c
        ;   Label: LAB_0043090c
    ADD ESP,0xac                        ; 0043090e
    POP EBP                             ; 00430914
    POP EDI                             ; 00430915
    POP EBX                             ; 00430916
    RET                                 ; 00430917
    MOV ECX,dword ptr [ESP + 0xbc]      ; 00430918
        ;   Label: LAB_00430918
    PUSH ECX                            ; 0043091f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00430920
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00430925
    LEA EAX,[ESP + 0x28]                ; 00430928
    PUSH EAX                            ; 0043092c
    MOV EBX,dword ptr [ESP + 0xc0]      ; 0043092d
    MOV EDX,dword ptr [ESP + 0xc0]      ; 00430934
    PUSH EBX                            ; 0043093b
    MOV EDX,dword ptr [EDX + 0x154]     ; 0043093c
    CALL dword ptr [EDX + 0x14]         ; 00430942
    ADD ESP,0x8                         ; 00430945
    PUSH EAX                            ; 00430948
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00430949
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0043094e
    PUSH EBX                            ; 00430951
    MOV dword ptr [EBX + 0x574],EAX     ; 00430952
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00430958
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    MOV EDI,dword ptr [EBX + 0x574]     ; 0043095d
    ADD ESP,0x4                         ; 00430963
    TEST EDI,EDI                        ; 00430966
    JZ 0x0043090c                       ; 00430968
        ;   XREF to: 0043090c (CONDITIONAL_JUMP)  ; LAB_0043090c
    PUSH ESI                            ; 0043096a
    LEA EAX,[EBX + 0x16c]               ; 0043096b
    PUSH EAX                            ; 00430971
    MOV EBP,dword ptr [0x006703ec]      ; 00430972 | g_CDemonRendererPtr2
    PUSH EBP                            ; 00430978 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00430979
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0043097e
    PUSH 0x0                            ; 00430981
    MOV EAX,[0x006703ec]                ; 00430983 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 00430988 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 00430989
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    MOV EDX,0x4                         ; 0043098e
    MOV EAX,0x1                         ; 00430993
    ADD ESP,0x8                         ; 00430998
    MOV EBX,dword ptr [0x006703ec]      ; 0043099b | g_CDemonRendererInstance | g_CDemonRendererPtr2
    XOR ECX,ECX                         ; 004309a1
    PUSH 0xffff                         ; 004309a3
    MOV dword ptr [ESP + 0xc],EDX       ; 004309a8
    MOV dword ptr [ESP + 0x1c],ECX      ; 004309ac
    MOV dword ptr [ESP + 0x18],ECX      ; 004309b0
    MOV dword ptr [ESP + 0x14],ECX      ; 004309b4
    MOV dword ptr [ESP + 0x10],ECX      ; 004309b8
    MOV dword ptr [ESP + 0x20],ECX      ; 004309bc
    MOV dword ptr [ESP + 0x24],EAX      ; 004309c0
    MOV EDX,0x2                         ; 004309c4
    MOV ECX,0x3                         ; 004309c9
    PUSH EBX                            ; 004309ce | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x2c],EDX      ; 004309cf
    MOV dword ptr [ESP + 0x30],ECX      ; 004309d3
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004309d7
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004309dc
    XOR ESI,ESI                         ; 004309df
    PUSH ESI                            ; 004309e1
    MOV ESI,dword ptr [0x006703ec]      ; 004309e2 | g_CDemonRendererPtr2
    PUSH ESI                            ; 004309e8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004309e9
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004309ee
    XOR EBP,EBP                         ; 004309f1
    MOV EDI,dword ptr [ESP + 0xc0]      ; 004309f3
    MOV ESI,dword ptr [ESP + 0xc0]      ; 004309fa
    ADD EDI,0x28c                       ; 00430a01
    ADD ESI,0x2b0                       ; 00430a07
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00430a0d
        ;   Label: LAB_00430a0d
    MOV EAX,dword ptr [EAX + 0x158]     ; 00430a14
    DEC EAX                             ; 00430a1a
    CMP EBP,EAX                         ; 00430a1b
    JGE 0x00430e9f                      ; 00430a1d
        ;   XREF to: 00430e9f (CONDITIONAL_JUMP)  ; LAB_00430e9f
    MOV EAX,[0x006703ec]                ; 00430a23 | g_CDemonRendererPtr2
    LEA EBX,[ESP + 0x80]                ; 00430a28
    MOV EDX,dword ptr [EAX]             ; 00430a2f | g_CDemonRendererInstance
    MOV EAX,EDI                         ; 00430a31
    FLD float ptr [EAX]                 ; 00430a33
    FMUL float ptr [0x0065b9e0]         ; 00430a35 | DAT_0065b9e0
    FISTP dword ptr [EBX]               ; 00430a3b
    FLD float ptr [EAX + 0x4]           ; 00430a3d
    FMUL float ptr [0x0065b9e0]         ; 00430a40 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x4]         ; 00430a46
    FLD float ptr [EAX + 0x8]           ; 00430a49
    FMUL float ptr [0x0065b9e0]         ; 00430a4c | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x8]         ; 00430a52
    LEA EAX,[ESP + 0x80]                ; 00430a55
    PUSH EAX                            ; 00430a5c
    PUSH EDX                            ; 00430a5d
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 00430a5e
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 00430a63 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 00430a68 | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 00430a6a
    LEA EDX,[EAX + 0x30]                ; 00430a6d
    LEA EBX,[ESP + 0x44]                ; 00430a70
    MOV EAX,EDI                         ; 00430a74
    FLD float ptr [EAX]                 ; 00430a76
    FMUL float ptr [0x0065b9e0]         ; 00430a78 | DAT_0065b9e0
    FISTP dword ptr [EBX]               ; 00430a7e
    FLD float ptr [EAX + 0x4]           ; 00430a80
    FMUL float ptr [0x0065b9e0]         ; 00430a83 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x4]         ; 00430a89
    FLD float ptr [EAX + 0x8]           ; 00430a8c
    FMUL float ptr [0x0065b9e0]         ; 00430a8f | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x8]         ; 00430a95
    LEA EAX,[ESP + 0x44]                ; 00430a98
    PUSH EAX                            ; 00430a9c
    PUSH EDX                            ; 00430a9d
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 00430a9e
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 00430aa3 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 00430aa8 | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 00430aaa
    LEA EDX,[EAX + 0x60]                ; 00430aad
    LEA EBX,[ESP + 0x74]                ; 00430ab0
    MOV EAX,ESI                         ; 00430ab4
    FLD float ptr [EAX]                 ; 00430ab6
    FMUL float ptr [0x0065b9e0]         ; 00430ab8 | DAT_0065b9e0
    FISTP dword ptr [EBX]               ; 00430abe
    FLD float ptr [EAX + 0x4]           ; 00430ac0
    FMUL float ptr [0x0065b9e0]         ; 00430ac3 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x4]         ; 00430ac9
    FLD float ptr [EAX + 0x8]           ; 00430acc
    FMUL float ptr [0x0065b9e0]         ; 00430acf | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x8]         ; 00430ad5
    LEA EAX,[ESP + 0x74]                ; 00430ad8
    PUSH EAX                            ; 00430adc
    PUSH EDX                            ; 00430add
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 00430ade
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 00430ae3 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 00430ae8 | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 00430aea
    LEA EDX,[EAX + 0x90]                ; 00430aed
    LEA EBX,[ESP + 0xa4]                ; 00430af3
    MOV EAX,ESI                         ; 00430afa
    FLD float ptr [EAX]                 ; 00430afc
    FMUL float ptr [0x0065b9e0]         ; 00430afe | DAT_0065b9e0
    FISTP dword ptr [EBX]               ; 00430b04
    FLD float ptr [EAX + 0x4]           ; 00430b06
    FMUL float ptr [0x0065b9e0]         ; 00430b09 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x4]         ; 00430b0f
    FLD float ptr [EAX + 0x8]           ; 00430b12
    FMUL float ptr [0x0065b9e0]         ; 00430b15 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x8]         ; 00430b1b
    LEA EAX,[ESP + 0xa4]                ; 00430b1e
    PUSH EAX                            ; 00430b25
    PUSH EDX                            ; 00430b26
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 00430b27
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 00430b2c | g_CDemonRendererPtr2
    MOV EBX,dword ptr [EAX]             ; 00430b31 | g_CDemonRendererInstance
    SUB dword ptr [EBX + 0x4],0x40      ; 00430b33
    MOV EBX,dword ptr [EAX]             ; 00430b37 | g_CDemonRendererInstance
    ADD dword ptr [EBX + 0x34],0x40     ; 00430b39
    MOV EBX,dword ptr [EAX]             ; 00430b3d | g_CDemonRendererInstance
    ADD dword ptr [EBX + 0x64],0x40     ; 00430b3f
    MOV EBX,dword ptr [EAX]             ; 00430b43 | g_CDemonRendererInstance
    SUB dword ptr [EBX + 0x94],0x40     ; 00430b45
    MOV EDX,dword ptr [EAX]             ; 00430b4c | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x10],0x80000000 ; 00430b4e
    MOV EDX,dword ptr [EAX]             ; 00430b55 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x40],0x80000000 ; 00430b57
    MOV EDX,dword ptr [EAX]             ; 00430b5e | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x70],0x80000000 ; 00430b60
    MOV EDX,dword ptr [EAX]             ; 00430b67 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xa0],0x80000000 ; 00430b69
    MOV EDX,dword ptr [EAX]             ; 00430b73 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x18],0x80000  ; 00430b75
    MOV EDX,dword ptr [EAX]             ; 00430b7c | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x1c],0x80000  ; 00430b7e
    MOV EDX,dword ptr [EAX]             ; 00430b85 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x48],0x80000  ; 00430b87
    MOV EDX,dword ptr [EAX]             ; 00430b8e | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 00430b90 | DAT_00f80000
    MOV EDX,dword ptr [EAX]             ; 00430b97 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x78],0xf80000 ; 00430b99 | DAT_00f80000
    MOV EDX,dword ptr [EAX]             ; 00430ba0 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 00430ba2 | DAT_00f80000
    MOV EDX,dword ptr [EAX]             ; 00430ba9 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xa8],0xf80000 ; 00430bab | DAT_00f80000
    MOV EAX,dword ptr [EAX]             ; 00430bb5 | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 00430bb7
    LEA EBX,[ESP + 0x50]                ; 00430bba
    MOV dword ptr [EAX + 0xac],0x80000  ; 00430bbe
    MOV EAX,EDI                         ; 00430bc8
    FLD float ptr [EAX]                 ; 00430bca
    FMUL float ptr [0x0065b9e0]         ; 00430bcc | DAT_0065b9e0
    FISTP dword ptr [EBX]               ; 00430bd2
    FLD float ptr [EAX + 0x4]           ; 00430bd4
    FMUL float ptr [0x0065b9e0]         ; 00430bd7 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x4]         ; 00430bdd
    FLD float ptr [EAX + 0x8]           ; 00430be0
    FMUL float ptr [0x0065b9e0]         ; 00430be3 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x8]         ; 00430be9
    PUSH 0x2                            ; 00430bec
    PUSH 0x0                            ; 00430bee
    PUSH 0x0                            ; 00430bf0
    LEA EAX,[ESP + 0x5c]                ; 00430bf2
    PUSH EAX                            ; 00430bf6
    MOV EBX,dword ptr [0x006810c8]      ; 00430bf7 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 00430bfd | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 ; 00430bfe
        ;   XREF to: 0056e110 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00430c03
    LEA EBX,[ESP + 0x50]                ; 00430c06
    MOV EAX,ESI                         ; 00430c0a
    FLD float ptr [EAX]                 ; 00430c0c
    FMUL float ptr [0x0065b9e0]         ; 00430c0e | DAT_0065b9e0
    FISTP dword ptr [EBX]               ; 00430c14
    FLD float ptr [EAX + 0x4]           ; 00430c16
    FMUL float ptr [0x0065b9e0]         ; 00430c19 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x4]         ; 00430c1f
    FLD float ptr [EAX + 0x8]           ; 00430c22
    FMUL float ptr [0x0065b9e0]         ; 00430c25 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x8]         ; 00430c2b
    PUSH 0x2                            ; 00430c2e
    PUSH 0x2                            ; 00430c30
    PUSH 0x0                            ; 00430c32
    LEA EAX,[ESP + 0x5c]                ; 00430c34
    PUSH EAX                            ; 00430c38
    MOV EAX,[0x006810c8]                ; 00430c39 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 00430c3e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 ; 00430c3f
        ;   XREF to: 0056e110 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00430c44
    LEA EAX,[ESP + 0x4]                 ; 00430c47
    PUSH EAX                            ; 00430c4b
    MOV EDX,dword ptr [0x006703ec]      ; 00430c4c | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 00430c52 | g_CDemonRendererInstance
    LEA EBX,[ESP + 0x94]                ; 00430c53
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 00430c5a
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV EDX,dword ptr [0x006703ec]      ; 00430c5f | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 00430c65
    MOV EAX,EDI                         ; 00430c68
    MOV EDX,dword ptr [EDX]             ; 00430c6a | g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 00430c6c
    FMUL float ptr [0x0065b9e0]         ; 00430c6e | DAT_0065b9e0
    FISTP dword ptr [EBX]               ; 00430c74
    FLD float ptr [EAX + 0x4]           ; 00430c76
    FMUL float ptr [0x0065b9e0]         ; 00430c79 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x4]         ; 00430c7f
    FLD float ptr [EAX + 0x8]           ; 00430c82
    FMUL float ptr [0x0065b9e0]         ; 00430c85 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x8]         ; 00430c8b
    LEA EAX,[ESP + 0x8c]                ; 00430c8e
    PUSH EAX                            ; 00430c95
    PUSH EDX                            ; 00430c96
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 00430c97
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 00430c9c | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 00430ca1 | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 00430ca3
    LEA EDX,[EAX + 0x30]                ; 00430ca6
    LEA EBX,[ESP + 0x5c]                ; 00430ca9
    MOV EAX,EDI                         ; 00430cad
    FLD float ptr [EAX]                 ; 00430caf
    FMUL float ptr [0x0065b9e0]         ; 00430cb1 | DAT_0065b9e0
    FISTP dword ptr [EBX]               ; 00430cb7
    FLD float ptr [EAX + 0x4]           ; 00430cb9
    FMUL float ptr [0x0065b9e0]         ; 00430cbc | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x4]         ; 00430cc2
    FLD float ptr [EAX + 0x8]           ; 00430cc5
    FMUL float ptr [0x0065b9e0]         ; 00430cc8 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x8]         ; 00430cce
    LEA EAX,[ESP + 0x5c]                ; 00430cd1
    PUSH EAX                            ; 00430cd5
    PUSH EDX                            ; 00430cd6
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 00430cd7
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00430cdc
    MOV EAX,[0x006703ec]                ; 00430cdf | g_CDemonRendererPtr2
    LEA EBX,[ESP + 0x68]                ; 00430ce4
    MOV EDX,dword ptr [EAX]             ; 00430ce8 | g_CDemonRendererInstance
    MOV EAX,ESI                         ; 00430cea
    FLD float ptr [EAX]                 ; 00430cec
    FMUL float ptr [0x0065b9e0]         ; 00430cee | DAT_0065b9e0
    FISTP dword ptr [EBX]               ; 00430cf4
    FLD float ptr [EAX + 0x4]           ; 00430cf6
    FMUL float ptr [0x0065b9e0]         ; 00430cf9 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x4]         ; 00430cff
    FLD float ptr [EAX + 0x8]           ; 00430d02
    FMUL float ptr [0x0065b9e0]         ; 00430d05 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x8]         ; 00430d0b
    LEA EAX,[ESP + 0x68]                ; 00430d0e
    PUSH EAX                            ; 00430d12
    ADD EDX,0x60                        ; 00430d13
    PUSH EDX                            ; 00430d16
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 00430d17
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 00430d1c | g_CDemonRendererPtr2
    LEA EBX,[ESP + 0xa0]                ; 00430d21
    ADD ESP,0x8                         ; 00430d28
    MOV EDX,dword ptr [EAX]             ; 00430d2b | g_CDemonRendererInstance
    MOV EAX,ESI                         ; 00430d2d
    FLD float ptr [EAX]                 ; 00430d2f
    FMUL float ptr [0x0065b9e0]         ; 00430d31 | DAT_0065b9e0
    FISTP dword ptr [EBX]               ; 00430d37
    FLD float ptr [EAX + 0x4]           ; 00430d39
    FMUL float ptr [0x0065b9e0]         ; 00430d3c | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x4]         ; 00430d42
    FLD float ptr [EAX + 0x8]           ; 00430d45
    FMUL float ptr [0x0065b9e0]         ; 00430d48 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x8]         ; 00430d4e
    LEA EAX,[ESP + 0x98]                ; 00430d51
    PUSH EAX                            ; 00430d58
    ADD EDX,0x90                        ; 00430d59
    PUSH EDX                            ; 00430d5f
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 00430d60
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 00430d65 | g_CDemonRendererPtr2
    MOV EBX,dword ptr [EAX]             ; 00430d6a | g_CDemonRendererInstance
    SUB dword ptr [EBX],0x40            ; 00430d6c
    MOV EBX,dword ptr [EAX]             ; 00430d6f | g_CDemonRendererInstance
    ADD dword ptr [EBX + 0x30],0x40     ; 00430d71
    MOV EBX,dword ptr [EAX]             ; 00430d75 | g_CDemonRendererInstance
    ADD dword ptr [EBX + 0x60],0x40     ; 00430d77
    MOV EBX,dword ptr [EAX]             ; 00430d7b | g_CDemonRendererInstance
    SUB dword ptr [EBX + 0x90],0x40     ; 00430d7d
    MOV EDX,dword ptr [EAX]             ; 00430d84 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x10],0x80000000 ; 00430d86
    MOV EDX,dword ptr [EAX]             ; 00430d8d | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x40],0x80000000 ; 00430d8f
    MOV EDX,dword ptr [EAX]             ; 00430d96 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x70],0x80000000 ; 00430d98
    MOV EDX,dword ptr [EAX]             ; 00430d9f | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xa0],0x80000000 ; 00430da1
    MOV EDX,dword ptr [EAX]             ; 00430dab | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x18],0x80000  ; 00430dad
    MOV EDX,dword ptr [EAX]             ; 00430db4 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x1c],0x80000  ; 00430db6
    MOV EDX,dword ptr [EAX]             ; 00430dbd | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x48],0x80000  ; 00430dbf
    MOV EDX,dword ptr [EAX]             ; 00430dc6 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 00430dc8 | DAT_00f80000
    MOV EDX,dword ptr [EAX]             ; 00430dcf | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x78],0xf80000 ; 00430dd1 | DAT_00f80000
    MOV EDX,dword ptr [EAX]             ; 00430dd8 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 00430dda | DAT_00f80000
    MOV EDX,dword ptr [EAX]             ; 00430de1 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xa8],0xf80000 ; 00430de3 | DAT_00f80000
    MOV EAX,dword ptr [EAX]             ; 00430ded | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 00430def
    LEA EBX,[ESP + 0x50]                ; 00430df2
    MOV dword ptr [EAX + 0xac],0x80000  ; 00430df6
    MOV EAX,EDI                         ; 00430e00
    FLD float ptr [EAX]                 ; 00430e02
    FMUL float ptr [0x0065b9e0]         ; 00430e04 | DAT_0065b9e0
    FISTP dword ptr [EBX]               ; 00430e0a
    FLD float ptr [EAX + 0x4]           ; 00430e0c
    FMUL float ptr [0x0065b9e0]         ; 00430e0f | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x4]         ; 00430e15
    FLD float ptr [EAX + 0x8]           ; 00430e18
    FMUL float ptr [0x0065b9e0]         ; 00430e1b | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x8]         ; 00430e21
    PUSH 0x2                            ; 00430e24
    PUSH 0x0                            ; 00430e26
    PUSH 0x0                            ; 00430e28
    LEA EAX,[ESP + 0x5c]                ; 00430e2a
    PUSH EAX                            ; 00430e2e
    MOV ECX,dword ptr [0x006810c8]      ; 00430e2f | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 00430e35 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 ; 00430e36
        ;   XREF to: 0056e110 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00430e3b
    LEA EBX,[ESP + 0x50]                ; 00430e3e
    MOV EAX,ESI                         ; 00430e42
    FLD float ptr [EAX]                 ; 00430e44
    FMUL float ptr [0x0065b9e0]         ; 00430e46 | DAT_0065b9e0
    FISTP dword ptr [EBX]               ; 00430e4c
    FLD float ptr [EAX + 0x4]           ; 00430e4e
    FMUL float ptr [0x0065b9e0]         ; 00430e51 | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x4]         ; 00430e57
    FLD float ptr [EAX + 0x8]           ; 00430e5a
    FMUL float ptr [0x0065b9e0]         ; 00430e5d | DAT_0065b9e0
    FISTP dword ptr [EBX + 0x8]         ; 00430e63
    PUSH 0x2                            ; 00430e66
    PUSH 0x2                            ; 00430e68
    PUSH 0x0                            ; 00430e6a
    LEA EAX,[ESP + 0x5c]                ; 00430e6c
    PUSH EAX                            ; 00430e70
    MOV EBX,dword ptr [0x006810c8]      ; 00430e71 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 00430e77 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 ; 00430e78
        ;   XREF to: 0056e110 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00430e7d
    LEA EAX,[ESP + 0x4]                 ; 00430e80
    PUSH EAX                            ; 00430e84
    MOV EAX,[0x006703ec]                ; 00430e85 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    ADD EDI,0x24                        ; 00430e8a
    PUSH EAX                            ; 00430e8d | g_CDemonRendererInstance
    INC EBP                             ; 00430e8e
    ADD ESI,0x24                        ; 00430e8f
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 00430e92
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 00430e97
    JMP 0x00430a0d                      ; 00430e9a
        ;   XREF to: 00430a0d (UNCONDITIONAL_JUMP)  ; LAB_00430a0d
    MOV EAX,0x1                         ; 00430e9f
        ;   Label: LAB_00430e9f
    POP ESI                             ; 00430ea4
    ADD ESP,0xac                        ; 00430ea5
    POP EBP                             ; 00430eab
    POP EDI                             ; 00430eac
    POP EBX                             ; 00430ead
    RET                                 ; 00430eae


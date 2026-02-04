; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_FUN_0040dec0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x4c]:1  local_4c
;
; XREF[5]:
;   core_barrier.cpp_CBarrier_FUN_00414240 at 004142c5
;   core_conveyor.cpp_CConveyor_renderTransparent_FUN_00441f60 at 00441ffe
;   core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70 at 0046fbed
;   core_hero.cpp_CHeroPlaceholder_renderTransparent_FUN_004f3c90 at 004f3d09
;   core_trigger.cpp_CTrigger_FUN_005e00d0 at 005e060e
;
; Referenced Globals:
;   float FLOAT_006597b0 = 256
;   SMRGLTextureBasic DAT_0066e158
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   undefined4 DAT_00800000
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040dec0
        ;   Label: core_actor.cpp_CDemonActor_FUN_0040dec0
    PUSH ESI                            ; 0040dec1
    PUSH EDI                            ; 0040dec2
    PUSH EBP                            ; 0040dec3
    SUB ESP,0x64                        ; 0040dec4
    LEA EAX,[ESP + 0x28]                ; 0040dec7
    MOV EDX,dword ptr [ESP + 0x78]      ; 0040decb
    PUSH EAX                            ; 0040decf
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0040ded0
    MOV EDX,dword ptr [EDX + 0x154]     ; 0040ded4
    PUSH ECX                            ; 0040deda
    CALL dword ptr [EDX + 0x14]         ; 0040dedb
    ADD ESP,0x8                         ; 0040dede
    MOV EBX,dword ptr [ESP + 0x78]      ; 0040dee1
    PUSH EBX                            ; 0040dee5
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0040dee6
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0040deeb
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0040deee
    SHL EAX,0x8                         ; 0040def2
    MOV dword ptr [ESP + 0x5c],EAX      ; 0040def5
    MOV EAX,dword ptr [ESP + 0x80]      ; 0040def9
    XOR EDI,EDI                         ; 0040df00
    SHL EAX,0x8                         ; 0040df02
    XOR ESI,ESI                         ; 0040df05
    MOV dword ptr [ESP + 0x60],EAX      ; 0040df07
    MOV EAX,dword ptr [ESP + 0x88]      ; 0040df0b
    MOV EBP,dword ptr [ESP + 0x84]      ; 0040df12
    SHL EAX,0x8                         ; 0040df19
    SHL EBP,0x8                         ; 0040df1c
    MOV dword ptr [ESP + 0x58],EAX      ; 0040df1f
    PUSH EDI                            ; 0040df23
        ;   Label: LAB_0040df23
    LEA EAX,[ESP + 0x44]                ; 0040df24
    PUSH EAX                            ; 0040df28
    LEA EAX,[ESP + 0x30]                ; 0040df29
    PUSH EAX                            ; 0040df2d
    LEA EBX,[ESP + 0x58]                ; 0040df2e
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 0040df32
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 0040df37
    LEA EAX,[ESP + 0x40]                ; 0040df3a
    MOV EDX,dword ptr [0x006703ec]      ; 0040df3e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 0040df44
    FMUL float ptr [0x006597b0]         ; 0040df46 | FLOAT_006597b0
    FISTP dword ptr [EBX]               ; 0040df4c
    FLD float ptr [EAX + 0x4]           ; 0040df4e
    FMUL float ptr [0x006597b0]         ; 0040df51 | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x4]         ; 0040df57
    FLD float ptr [EAX + 0x8]           ; 0040df5a
    FMUL float ptr [0x006597b0]         ; 0040df5d | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x8]         ; 0040df63
    LEA EAX,[ESP + 0x4c]                ; 0040df66
    PUSH EAX                            ; 0040df6a
    MOV EAX,dword ptr [EDX]             ; 0040df6b | g_CDemonRendererInstance
    ADD EAX,ESI                         ; 0040df6d
    PUSH EAX                            ; 0040df6f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0040df70
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 0040df75 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    ADD ESP,0x8                         ; 0040df7a
    MOV EDX,dword ptr [EAX]             ; 0040df7d | g_CDemonRendererInstance
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0040df7f
    MOV dword ptr [EDX + ESI*0x1 + 0x20],EBX ; 0040df83
    MOV EBX,dword ptr [EAX]             ; 0040df87 | g_CDemonRendererInstance
    MOV EDX,dword ptr [ESP + 0x60]      ; 0040df89
    MOV dword ptr [ESI + EBX*0x1 + 0x24],EDX ; 0040df8d
    MOV EDX,dword ptr [EAX]             ; 0040df91 | g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x28],EBP ; 0040df93
    MOV EDX,dword ptr [EAX]             ; 0040df97 | g_CDemonRendererInstance
    MOV EBX,dword ptr [ESP + 0x58]      ; 0040df99
    MOV dword ptr [EDX + ESI*0x1 + 0x2c],EBX ; 0040df9d
    MOV EBX,dword ptr [EAX]             ; 0040dfa1 | g_CDemonRendererInstance
    MOV dword ptr [ESI + EBX*0x1 + 0x18],0x800000 ; 0040dfa3 | DAT_00800000
    ADD ESI,0x30                        ; 0040dfab
    MOV EDX,dword ptr [EAX]             ; 0040dfae | g_CDemonRendererInstance
    INC EDI                             ; 0040dfb0
    MOV dword ptr [EDX + ESI*0x1 + -0x14],0x800000 ; 0040dfb1 | DAT_00800000
    CMP EDI,0x8                         ; 0040dfb9
    JL 0x0040df23                       ; 0040dfbc
        ;   XREF to: 0040df23 (CONDITIONAL_JUMP)  ; LAB_0040df23
    PUSH 0x66e158                       ; 0040dfc2 | DAT_0066e158
    MOV ESI,0x4                         ; 0040dfc7
    PUSH EAX                            ; 0040dfcc | g_CDemonRendererInstance
    MOV EBX,0x2                         ; 0040dfcd
    XOR EDI,EDI                         ; 0040dfd2
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0040dfd4
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EAX,[ESP + 0x8]                 ; 0040dfd9
    ADD ESP,0x8                         ; 0040dfdd
    MOV EBP,dword ptr [0x006703ec]      ; 0040dfe0 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x4],ESI       ; 0040dfe6
    MOV dword ptr [ESP + 0x14],EDI      ; 0040dfea
    MOV dword ptr [ESP + 0x10],EDI      ; 0040dfee
    MOV dword ptr [ESP + 0xc],EDI       ; 0040dff2
    MOV dword ptr [ESP + 0x8],EDI       ; 0040dff6
    MOV dword ptr [ESP + 0x18],EDI      ; 0040dffa
    MOV dword ptr [ESP + 0x1c],EBX      ; 0040dffe
    PUSH EAX                            ; 0040e002
    MOV ESI,0x6                         ; 0040e003
    MOV EDI,0x4                         ; 0040e008
    MOV EBX,0x5                         ; 0040e00d
    PUSH EBP                            ; 0040e012 | g_CDemonRendererInstance
    MOV EBP,0x1                         ; 0040e013
    MOV dword ptr [ESP + 0x28],ESI      ; 0040e018
    MOV dword ptr [ESP + 0x2c],EDI      ; 0040e01c
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 0040e020
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV EAX,0x1                         ; 0040e025
    MOV EDX,0x3                         ; 0040e02a
    MOV ECX,0x7                         ; 0040e02f
    ADD ESP,0x8                         ; 0040e034
    MOV ESI,dword ptr [0x006703ec]      ; 0040e037 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x18],EAX      ; 0040e03d
    MOV EAX,ESP                         ; 0040e041
    XOR EDI,EDI                         ; 0040e043
    PUSH EAX                            ; 0040e045
    MOV dword ptr [ESP + 0x20],EDX      ; 0040e046
    MOV dword ptr [ESP + 0x24],ECX      ; 0040e04a
    PUSH ESI                            ; 0040e04e | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x2c],EBX      ; 0040e04f
    MOV EBX,0x4                         ; 0040e053
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 0040e058
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV EAX,0x3                         ; 0040e05d
    MOV EDX,0x2                         ; 0040e062
    MOV ESI,0x5                         ; 0040e067
    ADD ESP,0x8                         ; 0040e06c
    MOV ECX,dword ptr [0x006703ec]      ; 0040e06f | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x20],EAX      ; 0040e075
    MOV EAX,ESP                         ; 0040e079
    MOV dword ptr [ESP + 0x18],EDI      ; 0040e07b
    PUSH EAX                            ; 0040e07f
    MOV dword ptr [ESP + 0x20],EBP      ; 0040e080
    MOV dword ptr [ESP + 0x28],EDX      ; 0040e084
    PUSH ECX                            ; 0040e088 | g_CDemonRendererInstance
    MOV EDI,0x7                         ; 0040e089
    MOV EBP,0x6                         ; 0040e08e
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 0040e093
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 0040e098
    MOV EAX,ESP                         ; 0040e09b
    MOV dword ptr [ESP + 0x18],EBX      ; 0040e09d
    PUSH EAX                            ; 0040e0a1
    MOV EAX,[0x006703ec]                ; 0040e0a2 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x20],ESI      ; 0040e0a7
    PUSH EAX                            ; 0040e0ab | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x28],EDI      ; 0040e0ac
    MOV dword ptr [ESP + 0x2c],EBP      ; 0040e0b0
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 0040e0b4
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV EDX,0x2                         ; 0040e0b9
    MOV ECX,0x3                         ; 0040e0be
    ADD ESP,0x8                         ; 0040e0c3
    MOV EAX,ESP                         ; 0040e0c6
    MOV dword ptr [ESP + 0x20],EDI      ; 0040e0c8
    PUSH EAX                            ; 0040e0cc
    MOV EDI,dword ptr [0x006703ec]      ; 0040e0cd | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x1c],EDX      ; 0040e0d3
    PUSH EDI                            ; 0040e0d7 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x24],ECX      ; 0040e0d8
    MOV dword ptr [ESP + 0x2c],EBP      ; 0040e0dc
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 0040e0e0
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    MOV EAX,0x1                         ; 0040e0e5
    ADD ESP,0x8                         ; 0040e0ea
    MOV dword ptr [ESP + 0x1c],EAX      ; 0040e0ed
    MOV EAX,ESP                         ; 0040e0f1
    MOV dword ptr [ESP + 0x24],EBX      ; 0040e0f3
    PUSH EAX                            ; 0040e0f7
    MOV EBX,dword ptr [0x006703ec]      ; 0040e0f8 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    XOR EBP,EBP                         ; 0040e0fe
    PUSH EBX                            ; 0040e100 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x20],EBP      ; 0040e101
    MOV dword ptr [ESP + 0x28],ESI      ; 0040e105
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 0040e109
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 0040e10e
    MOV ESI,dword ptr [ESP + 0x78]      ; 0040e111
    PUSH ESI                            ; 0040e115
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0040e116
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e11b
    ADD ESP,0x64                        ; 0040e11e
    POP EBP                             ; 0040e121
    POP EDI                             ; 0040e122
    POP ESI                             ; 0040e123
    POP EBX                             ; 0040e124
    RET                                 ; 0040e125


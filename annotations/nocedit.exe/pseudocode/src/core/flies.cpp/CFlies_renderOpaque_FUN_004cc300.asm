; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004cc300(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x58]:1  local_58
;
; Referenced Globals:
;   double DOUBLE_0062a42e = 0.015625
;   float FLOAT_0062a436 = 64
;   double DOUBLE_0062a43e = 0.5
;   float FLOAT_0065e500 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   SMRGLTextureBasic SMRGLTextureBasic_0067b514
;   undefined4 DAT_00800000
;   CDemonRenderer g_CDemonRendererInstance
;   int g_UseExternalRenderer
;   float g_PerspectiveReciprocal
;   int INT_02d7a7c0
;   undefined4 DAT_02d7a800
;   undefined4 DAT_02d7a804
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_flies.cpp_CFlies_FUN_004cc230
;   core_spline.cpp_FUN_005b90a0
;   core_spline.cpp_FUN_005b92d0
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
;   engine_prim.c_replaceWWithDepth_FUN_00552110
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc300
        ;   Label: core_flies.cpp_CFlies_renderOpaque_FUN_004cc300
    PUSH ESI                            ; 004cc301
    PUSH EDI                            ; 004cc302
    PUSH EBP                            ; 004cc303
    MOV EBP,ESP                         ; 004cc304
    SUB ESP,0x8c                        ; 004cc306
    AND ESP,0xfffffff8                  ; 004cc30c
    MOV EDX,dword ptr [0x006703ec]      ; 004cc30f | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 004cc315 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004cc316
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004cc31b
    TEST EAX,EAX                        ; 004cc31e
    JZ 0x004cc32b                       ; 004cc320
        ;   XREF to: 004cc32b (CONDITIONAL_JUMP)  ; LAB_004cc32b
    XOR EAX,EAX                         ; 004cc322
    MOV ESP,EBP                         ; 004cc324
    POP EBP                             ; 004cc326
    POP EDI                             ; 004cc327
    POP ESI                             ; 004cc328
    POP EBX                             ; 004cc329
    RET                                 ; 004cc32a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cc32b
        ;   Label: LAB_004cc32b
    PUSH EAX                            ; 004cc32e
    MOV dword ptr [EAX + 0x2a1c],0x0    ; 004cc32f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004cc339
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 004cc33e
    LEA EAX,[ESP + 0x48]                ; 004cc341
    PUSH EAX                            ; 004cc345
    MOV EBX,dword ptr [EBP + 0x14]      ; 004cc346
    MOV EDX,dword ptr [EBP + 0x14]      ; 004cc349
    PUSH EBX                            ; 004cc34c
    MOV EDX,dword ptr [EDX + 0x154]     ; 004cc34d
    CALL dword ptr [EDX + 0x14]         ; 004cc353
    ADD ESP,0x8                         ; 004cc356
    PUSH EAX                            ; 004cc359
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004cc35a
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004cc35f
    MOV dword ptr [ESP + 0x78],EAX      ; 004cc362
    TEST EAX,EAX                        ; 004cc366
    JZ 0x004cc5b8                       ; 004cc368
        ;   XREF to: 004cc5b8 (CONDITIONAL_JUMP)  ; LAB_004cc5b8
    MOV ESI,dword ptr [0x02d7a7c0]      ; 004cc36e | INT_02d7a7c0
    MOV dword ptr [EBX + 0x2a1c],0x1    ; 004cc374
    TEST ESI,ESI                        ; 004cc37e
    JNZ 0x004cc3c7                      ; 004cc380
        ;   XREF to: 004cc3c7 (CONDITIONAL_JUMP)  ; LAB_004cc3c7
    MOV ESI,0x2d7a808                   ; 004cc382 | DAT_02d7a808
    XOR EBX,EBX                         ; 004cc387
    MOV dword ptr [ESP + 0x88],EBX      ; 004cc389
        ;   Label: LAB_004cc389
    FILD dword ptr [ESP + 0x88]         ; 004cc390
    FADD double ptr [0x0062a43e]        ; 004cc397 | DOUBLE_0062a43e
    FMUL double ptr [0x0062a42e]        ; 004cc39d | DOUBLE_0062a42e
    PUSH 0x0                            ; 004cc3a3
    SUB ESP,0x4                         ; 004cc3a5
    FSTP float ptr [ESP]                ; 004cc3a8
    PUSH ESI                            ; 004cc3ab | DAT_02d7a808 | DAT_02d7a828
    INC EBX                             ; 004cc3ac
    CALL core_spline.cpp_FUN_005b90a0   ; 004cc3ad
        ;   XREF to: 005b90a0 (UNCONDITIONAL_CALL)  ; void core_spline.cpp_FUN_005b90a0()
    ADD ESP,0xc                         ; 004cc3b2
    ADD ESI,0x20                        ; 004cc3b5
    CMP EBX,0x40                        ; 004cc3b8
    JL 0x004cc389                       ; 004cc3bb
        ;   XREF to: 004cc389 (CONDITIONAL_JUMP)  ; LAB_004cc389
    MOV dword ptr [0x02d7a7c0],0x1      ; 004cc3bd | INT_02d7a7c0
    MOV EAX,[0x02d03e94]                ; 004cc3c7 | g_UseExternalRenderer
        ;   Label: LAB_004cc3c7
    TEST EAX,EAX                        ; 004cc3cc
    JZ 0x004cc5cf                       ; 004cc3ce
        ;   XREF to: 004cc5cf (CONDITIONAL_JUMP)  ; LAB_004cc5cf
    MOV ECX,0x3                         ; 004cc3d4
    MOV ESI,0x800000                    ; 004cc3d9 | DAT_00800000
    MOV EAX,[0x006703ec]                ; 004cc3de | g_CDemonRendererInstance | g_CDemonRendererPtr2
    XOR EBX,EBX                         ; 004cc3e3
    MOV dword ptr [ESP + 0x4],ECX       ; 004cc3e5
    MOV dword ptr [ESP + 0x14],EBX      ; 004cc3e9
    MOV dword ptr [ESP + 0x10],EBX      ; 004cc3ed
    MOV dword ptr [ESP + 0xc],EBX       ; 004cc3f1
    MOV dword ptr [ESP + 0x8],EBX       ; 004cc3f5
    MOV dword ptr [ESP + 0x18],EBX      ; 004cc3f9
    MOV dword ptr [ESP + 0x1c],ESI      ; 004cc3fd | DAT_00800000
    MOV dword ptr [ESP + 0x20],ESI      ; 004cc401 | DAT_00800000
    MOV dword ptr [ESP + 0x28],ESI      ; 004cc405 | DAT_00800000
    MOV dword ptr [ESP + 0x2c],ESI      ; 004cc409 | DAT_00800000
    MOV dword ptr [ESP + 0x34],ESI      ; 004cc40d | DAT_00800000
    MOV dword ptr [ESP + 0x38],ESI      ; 004cc411 | DAT_00800000
    MOV ECX,0x1                         ; 004cc415
    MOV EBX,0x2                         ; 004cc41a
    MOV dword ptr [ESP + 0x24],ECX      ; 004cc41f
    MOV dword ptr [ESP + 0x30],EBX      ; 004cc423
    MOV EDX,dword ptr [EAX]             ; 004cc427 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x20],0x0      ; 004cc429
    MOV EDX,dword ptr [EAX]             ; 004cc430 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x24],0x0      ; 004cc432
    MOV EDX,dword ptr [EAX]             ; 004cc439 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x28],0x0      ; 004cc43b
    MOV EDX,dword ptr [EAX]             ; 004cc442 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x50],0x0      ; 004cc444
    MOV EDX,dword ptr [EAX]             ; 004cc44b | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x54],0x0      ; 004cc44d
    MOV EDX,dword ptr [EAX]             ; 004cc454 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x58],0x0      ; 004cc456
    MOV EDX,dword ptr [EAX]             ; 004cc45d | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x80],0x0      ; 004cc45f
    MOV EDX,dword ptr [EAX]             ; 004cc469 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x84],0x0      ; 004cc46b
    MOV EDX,dword ptr [EAX]             ; 004cc475 | g_CDemonRendererInstance
    MOV ESI,dword ptr [0x02d051f4]      ; 004cc477 | g_PerspectiveReciprocal
    MOV dword ptr [EDX + 0x88],0x0      ; 004cc47d
    MOV EDX,0xffff                      ; 004cc487
    MOV EBX,dword ptr [EAX]             ; 004cc48c | g_CDemonRendererInstance
    SUB EDX,ESI                         ; 004cc48e
    MOV dword ptr [EBX + 0x2c],EDX      ; 004cc490
    MOV EBX,dword ptr [EAX]             ; 004cc493 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x5c],EDX      ; 004cc495
    MOV EAX,dword ptr [EAX]             ; 004cc498 | g_CDemonRendererInstance
    PUSH 0x67b514                       ; 004cc49a | SMRGLTextureBasic_0067b514
    MOV dword ptr [EAX + 0x8c],EDX      ; 004cc49f
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 004cc4a5
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
    ADD ESP,0x4                         ; 004cc4aa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cc4ad
        ;   Label: LAB_004cc4ad
    XOR EDI,EDI                         ; 004cc4b0
    MOV EDX,dword ptr [EAX + 0x164]     ; 004cc4b2
    MOV dword ptr [ESP + 0x7c],EDI      ; 004cc4b8
    TEST EDX,EDX                        ; 004cc4bc
    JLE 0x004cc5b8                      ; 004cc4be
        ;   XREF to: 004cc5b8 (CONDITIONAL_JUMP)  ; LAB_004cc5b8
    ADD EAX,0x168                       ; 004cc4c4
    MOV dword ptr [ESP + 0x80],EAX      ; 004cc4c9
    MOV EAX,dword ptr [ESP + 0x80]      ; 004cc4d0
        ;   Label: LAB_004cc4d0
    FLD float ptr [EAX]                 ; 004cc4d7
    FMUL float ptr [0x0062a436]         ; 004cc4d9 | FLOAT_0062a436
    CALL crt_math.c_round_FUN_005fe6b0  ; 004cc4df
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x84]        ; 004cc4e4
    MOV EDI,dword ptr [ESP + 0x84]      ; 004cc4eb
    TEST EDI,EDI                        ; 004cc4f2
    JL 0x004cc61a                       ; 004cc4f4
        ;   XREF to: 004cc61a (CONDITIONAL_JUMP)  ; LAB_004cc61a
    CMP EDI,0x40                        ; 004cc4fa
    JL 0x004cc50a                       ; 004cc4fd
        ;   XREF to: 004cc50a (CONDITIONAL_JUMP)  ; LAB_004cc50a
    MOV dword ptr [ESP + 0x84],0x3f     ; 004cc4ff
    LEA EDX,[EAX + 0x28]                ; 004cc50a
        ;   Label: LAB_004cc50a
    PUSH EDX                            ; 004cc50d
    LEA EDX,[EAX + 0x1c]                ; 004cc50e
    PUSH EDX                            ; 004cc511
    LEA EDX,[EAX + 0x10]                ; 004cc512
    PUSH EDX                            ; 004cc515
    ADD EAX,0x4                         ; 004cc516
    PUSH EAX                            ; 004cc519
    LEA EAX,[ESP + 0x70]                ; 004cc51a
    PUSH EAX                            ; 004cc51e
    MOV EAX,dword ptr [ESP + 0x98]      ; 004cc51f
    SHL EAX,0x5                         ; 004cc526
    ADD EAX,0x2d7a808                   ; 004cc529 | DAT_02d7afe8 | DAT_02d7a808
    PUSH EAX                            ; 004cc52e | DAT_02d7afe8
    LEA EBX,[ESP + 0x84]                ; 004cc52f
    CALL core_spline.cpp_FUN_005b92d0   ; 004cc536
        ;   XREF to: 005b92d0 (UNCONDITIONAL_CALL)  ; float * core_spline.cpp_FUN_005b92d0()
    ADD ESP,0x18                        ; 004cc53b
    LEA EAX,[ESP + 0x60]                ; 004cc53e
    MOV EDX,dword ptr [0x006703ec]      ; 004cc542 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004cc548
    FMUL float ptr [0x0065e500]         ; 004cc54a | FLOAT_0065e500
    FISTP dword ptr [EBX]               ; 004cc550
    FLD float ptr [EAX + 0x4]           ; 004cc552
    FMUL float ptr [0x0065e500]         ; 004cc555 | FLOAT_0065e500
    FISTP dword ptr [EBX + 0x4]         ; 004cc55b
    FLD float ptr [EAX + 0x8]           ; 004cc55e
    FMUL float ptr [0x0065e500]         ; 004cc561 | FLOAT_0065e500
    FISTP dword ptr [EBX + 0x8]         ; 004cc567
    LEA EAX,[ESP + 0x6c]                ; 004cc56a
    PUSH EAX                            ; 004cc56e
    MOV EAX,dword ptr [EDX]             ; 004cc56f | g_CDemonRendererInstance
    PUSH EAX                            ; 004cc571
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004cc572
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 004cc577 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EBX,dword ptr [EAX]             ; 004cc57c | g_CDemonRendererInstance
    MOV DL,byte ptr [EBX + 0x13]        ; 004cc57e
    ADD ESP,0x8                         ; 004cc581
    TEST DL,0x80                        ; 004cc584
    JZ 0x004cc628                       ; 004cc587
        ;   XREF to: 004cc628 (CONDITIONAL_JUMP)  ; LAB_004cc628
    MOV ECX,dword ptr [ESP + 0x80]      ; 004cc58d
        ;   Label: LAB_004cc58d
    MOV EBX,dword ptr [ESP + 0x7c]      ; 004cc594
    MOV EDX,dword ptr [EBP + 0x14]      ; 004cc598
    ADD ECX,0x34                        ; 004cc59b
    INC EBX                             ; 004cc59e
    MOV ESI,dword ptr [EDX + 0x164]     ; 004cc59f
    MOV dword ptr [ESP + 0x80],ECX      ; 004cc5a5
    MOV dword ptr [ESP + 0x7c],EBX      ; 004cc5ac
    CMP EBX,ESI                         ; 004cc5b0
    JL 0x004cc4d0                       ; 004cc5b2
        ;   XREF to: 004cc4d0 (CONDITIONAL_JUMP)  ; LAB_004cc4d0
    MOV ESI,dword ptr [EBP + 0x14]      ; 004cc5b8
        ;   Label: LAB_004cc5b8
    PUSH ESI                            ; 004cc5bb
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004cc5bc
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cc5c1
    MOV EAX,dword ptr [ESP + 0x78]      ; 004cc5c4
    MOV ESP,EBP                         ; 004cc5c8
    POP EBP                             ; 004cc5ca
    POP EDI                             ; 004cc5cb
    POP ESI                             ; 004cc5cc
    POP EBX                             ; 004cc5cd
    RET                                 ; 004cc5ce
    PUSH EAX                            ; 004cc5cf
        ;   Label: LAB_004cc5cf
    PUSH EAX                            ; 004cc5d0
    PUSH EAX                            ; 004cc5d1
    MOV EDX,dword ptr [0x006703ec]      ; 004cc5d2 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 004cc5d8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970 ; 004cc5d9
        ;   XREF to: 0048c970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV EAX,[0x02d051f4]                ; 004cc5de | g_PerspectiveReciprocal
    SAR EAX,0x8                         ; 004cc5e3
    MOV [0x02d7a800],EAX                ; 004cc5e6 | DAT_02d7a800
    MOV EDX,dword ptr [0x02d7a800]      ; 004cc5eb | DAT_02d7a800
    SHL EAX,0x8                         ; 004cc5f1
    OR EDX,EAX                          ; 004cc5f4
    MOV EAX,[0x02d7a800]                ; 004cc5f6 | DAT_02d7a800
    SHL EAX,0x10                        ; 004cc5fb
    OR EDX,EAX                          ; 004cc5fe
    MOV EAX,EDX                         ; 004cc600
    ADD ESP,0x10                        ; 004cc602
    XOR EAX,0xffffff                    ; 004cc605
    MOV dword ptr [0x02d7a800],EDX      ; 004cc60a | DAT_02d7a800
    MOV [0x02d7a804],EAX                ; 004cc610 | DAT_02d7a804
    JMP 0x004cc4ad                      ; 004cc615
        ;   XREF to: 004cc4ad (UNCONDITIONAL_JUMP)  ; LAB_004cc4ad
    XOR EBX,EBX                         ; 004cc61a
        ;   Label: LAB_004cc61a
    MOV dword ptr [ESP + 0x84],EBX      ; 004cc61c
    JMP 0x004cc50a                      ; 004cc623
        ;   XREF to: 004cc50a (UNCONDITIONAL_JUMP)  ; LAB_004cc50a
    MOV EDX,dword ptr [0x02d03e94]      ; 004cc628 | g_UseExternalRenderer
        ;   Label: LAB_004cc628
    MOV EDI,dword ptr [EBX + 0x14]      ; 004cc62e
    MOV ESI,dword ptr [EBX + 0x10]      ; 004cc631
    SAR EDI,0x10                        ; 004cc634
    SAR ESI,0x10                        ; 004cc637
    TEST EDX,EDX                        ; 004cc63a
    JZ 0x004cc6ad                       ; 004cc63c
        ;   XREF to: 004cc6ad (CONDITIONAL_JUMP)  ; LAB_004cc6ad
    MOV EDX,dword ptr [0x00679394]      ; 004cc63e | g_WindowWidth
    DEC EDX                             ; 004cc644
    CMP ESI,EDX                         ; 004cc645
    JGE 0x004cc58d                      ; 004cc647
        ;   XREF to: 004cc58d (CONDITIONAL_JUMP)  ; LAB_004cc58d
    MOV EDX,dword ptr [0x00679398]      ; 004cc64d | g_WindowHeight
    DEC EDX                             ; 004cc653
    CMP EDI,EDX                         ; 004cc654
    JGE 0x004cc58d                      ; 004cc656
        ;   XREF to: 004cc58d (CONDITIONAL_JUMP)  ; LAB_004cc58d
    MOV word ptr [EBX + 0x10],0x0       ; 004cc65c
    MOV word ptr [EBX + 0x14],0x0       ; 004cc662
    MOV ESI,dword ptr [EAX]             ; 004cc668 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 004cc66a
    LEA EDI,[ESI + 0x30]                ; 004cc66f
    MOV ESI,EBX                         ; 004cc672
    MOVSD.REP ES:EDI,ESI                ; 004cc674
    MOV ESI,dword ptr [EAX]             ; 004cc676 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 004cc678
    LEA EDI,[ESI + 0x60]                ; 004cc67d
    MOV ESI,EBX                         ; 004cc680
    MOVSD.REP ES:EDI,ESI                ; 004cc682
    MOV EBX,dword ptr [EAX]             ; 004cc684 | g_CDemonRendererInstance
    INC word ptr [EBX + 0x42]           ; 004cc686
    MOV EBX,dword ptr [EAX]             ; 004cc68a | g_CDemonRendererInstance
    PUSH 0x3e7                          ; 004cc68c
    LEA EDX,[ESP + 0x4]                 ; 004cc691
    MOV CX,word ptr [EBX + 0x76]        ; 004cc695
    PUSH EDX                            ; 004cc699
    INC ECX                             ; 004cc69a
    PUSH EAX                            ; 004cc69b | g_CDemonRendererInstance
    MOV word ptr [EBX + 0x76],CX        ; 004cc69c
    CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 ; 004cc6a0
        ;   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
    ADD ESP,0xc                         ; 004cc6a5
    JMP 0x004cc58d                      ; 004cc6a8
        ;   XREF to: 004cc58d (UNCONDITIONAL_JUMP)  ; LAB_004cc58d
    PUSH 0x1                            ; 004cc6ad
        ;   Label: LAB_004cc6ad
    PUSH EBX                            ; 004cc6af
    CALL engine_prim.c_replaceWWithDepth_FUN_00552110 ; 004cc6b0
        ;   XREF to: 00552110 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 004cc6b5
    MOV EAX,dword ptr [EBX + 0x8]       ; 004cc6b8
    TEST ESI,ESI                        ; 004cc6bb
    JL 0x004cc58d                       ; 004cc6bd
        ;   XREF to: 004cc58d (CONDITIONAL_JUMP)  ; LAB_004cc58d
    CMP ESI,dword ptr [0x00679394]      ; 004cc6c3 | g_WindowWidth
    JGE 0x004cc58d                      ; 004cc6c9
        ;   XREF to: 004cc58d (CONDITIONAL_JUMP)  ; LAB_004cc58d
    TEST EDI,EDI                        ; 004cc6cf
    JL 0x004cc58d                       ; 004cc6d1
        ;   XREF to: 004cc58d (CONDITIONAL_JUMP)  ; LAB_004cc58d
    CMP EDI,dword ptr [0x00679398]      ; 004cc6d7 | g_WindowHeight
    JGE 0x004cc58d                      ; 004cc6dd
        ;   XREF to: 004cc58d (CONDITIONAL_JUMP)  ; LAB_004cc58d
    PUSH EAX                            ; 004cc6e3
    PUSH EDI                            ; 004cc6e4
    PUSH ESI                            ; 004cc6e5
    CALL core_flies.cpp_CFlies_FUN_004cc230 ; 004cc6e6
        ;   XREF to: 004cc230 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_CFlies_FUN_004cc230(CFlies * this_ptr)
    ADD ESP,0xc                         ; 004cc6eb
    JMP 0x004cc58d                      ; 004cc6ee
        ;   XREF to: 004cc58d (UNCONDITIONAL_JUMP)  ; LAB_004cc58d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_0048f490(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x58]:1  local_58
;
; Referenced Globals:
;   double DOUBLE_00581717 = 0.015625
;   float FLOAT_0058171f = 64
;   double DOUBLE_00581727 = 0.5
;   undefined4 DAT_0059da10
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 DAT_005b9214
;   undefined4 DAT_01b4d738
;   int g_UseExternalRenderer
;   undefined4 DAT_01c038f4
;   undefined4 DAT_01c70714
;   undefined4 DAT_01c70754
;   undefined4 DAT_01c70758
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_flies.cpp_drawFlyPixel_FUN_0048f3c0
;   core_spline.cpp_computeSplineBasis_FUN_00533ce0
;   core_spline.cpp_evaluateSplinePoint3D_FUN_00533f10
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
;   engine_prim.c_replaceWWithDepth_FUN_004f99d0
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f490
        ;   Label: core_flies.cpp_CFlies_renderOpaque_FUN_0048f490
    PUSH ESI                            ; 0048f491
    PUSH EDI                            ; 0048f492
    PUSH EBP                            ; 0048f493
    MOV EBP,ESP                         ; 0048f494
    SUB ESP,0x8c                        ; 0048f496
    AND ESP,0xfffffff8                  ; 0048f49c
    MOV EDX,dword ptr [0x005ae704]      ; 0048f49f | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0048f4a5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0048f4a6
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0048f4ab
    TEST EAX,EAX                        ; 0048f4ae
    JZ 0x0048f4bb                       ; 0048f4b0
        ;   XREF to: 0048f4bb (CONDITIONAL_JUMP)  ; LAB_0048f4bb
    XOR EAX,EAX                         ; 0048f4b2
    MOV ESP,EBP                         ; 0048f4b4
    POP EBP                             ; 0048f4b6
    POP EDI                             ; 0048f4b7
    POP ESI                             ; 0048f4b8
    POP EBX                             ; 0048f4b9
    RET                                 ; 0048f4ba
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048f4bb
        ;   Label: LAB_0048f4bb
    PUSH EAX                            ; 0048f4be
    MOV dword ptr [EAX + 0x2a14],0x0    ; 0048f4bf
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0048f4c9
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0048f4ce
    PUSH 0x0                            ; 0048f4d1
    LEA EAX,[ESP + 0x4c]                ; 0048f4d3
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f4d7
    PUSH EAX                            ; 0048f4da
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048f4db
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0048f4de
    PUSH EBX                            ; 0048f4e4
    CALL dword ptr [EDX + 0x14]         ; 0048f4e5
    ADD ESP,0x8                         ; 0048f4e8
    PUSH EAX                            ; 0048f4eb
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0048f4ec
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0048f4f1
    MOV dword ptr [ESP + 0x78],EAX      ; 0048f4f4
    TEST EAX,EAX                        ; 0048f4f8
    JZ 0x0048f74a                       ; 0048f4fa
        ;   XREF to: 0048f74a (CONDITIONAL_JUMP)  ; LAB_0048f74a
    MOV ESI,dword ptr [0x01c70714]      ; 0048f500 | DAT_01c70714
    MOV dword ptr [EBX + 0x2a14],0x1    ; 0048f506
    TEST ESI,ESI                        ; 0048f510
    JNZ 0x0048f559                      ; 0048f512
        ;   XREF to: 0048f559 (CONDITIONAL_JUMP)  ; LAB_0048f559
    MOV ESI,0x1c7075c                   ; 0048f514
    XOR EBX,EBX                         ; 0048f519
    MOV dword ptr [ESP + 0x88],EBX      ; 0048f51b
        ;   Label: LAB_0048f51b
    FILD dword ptr [ESP + 0x88]         ; 0048f522
    FADD double ptr [0x00581727]        ; 0048f529 | DOUBLE_00581727
    FMUL double ptr [0x00581717]        ; 0048f52f | DOUBLE_00581717
    PUSH 0x0                            ; 0048f535
    SUB ESP,0x4                         ; 0048f537
    FSTP float ptr [ESP]                ; 0048f53a
    PUSH ESI                            ; 0048f53d
    INC EBX                             ; 0048f53e
    CALL core_spline.cpp_computeSplineBasis_FUN_00533ce0 ; 0048f53f
        ;   XREF to: 00533ce0 (UNCONDITIONAL_CALL)  ; void core_spline.cpp_computeSplineBasis_FUN_00533ce0(float * out_basis, float t, float tension)
    ADD ESP,0xc                         ; 0048f544
    ADD ESI,0x20                        ; 0048f547
    CMP EBX,0x40                        ; 0048f54a
    JL 0x0048f51b                       ; 0048f54d
        ;   XREF to: 0048f51b (CONDITIONAL_JUMP)  ; LAB_0048f51b
    MOV dword ptr [0x01c70714],0x1      ; 0048f54f | DAT_01c70714
    MOV EAX,[0x01c02594]                ; 0048f559 | g_UseExternalRenderer
        ;   Label: LAB_0048f559
    TEST EAX,EAX                        ; 0048f55e
    JZ 0x0048f761                       ; 0048f560
        ;   XREF to: 0048f761 (CONDITIONAL_JUMP)  ; LAB_0048f761
    MOV ECX,0x3                         ; 0048f566
    MOV ESI,0x800000                    ; 0048f56b
    MOV EAX,[0x005ae704]                ; 0048f570 | g_CDemonRenderer_PTR_005ae704
    XOR EBX,EBX                         ; 0048f575
    MOV dword ptr [ESP + 0x4],ECX       ; 0048f577
    MOV dword ptr [ESP + 0x14],EBX      ; 0048f57b
    MOV dword ptr [ESP + 0x10],EBX      ; 0048f57f
    MOV dword ptr [ESP + 0xc],EBX       ; 0048f583
    MOV dword ptr [ESP + 0x8],EBX       ; 0048f587
    MOV dword ptr [ESP + 0x18],EBX      ; 0048f58b
    MOV dword ptr [ESP + 0x1c],ESI      ; 0048f58f
    MOV dword ptr [ESP + 0x20],ESI      ; 0048f593
    MOV dword ptr [ESP + 0x28],ESI      ; 0048f597
    MOV dword ptr [ESP + 0x2c],ESI      ; 0048f59b
    MOV dword ptr [ESP + 0x34],ESI      ; 0048f59f
    MOV dword ptr [ESP + 0x38],ESI      ; 0048f5a3
    MOV ECX,0x1                         ; 0048f5a7
    MOV EBX,0x2                         ; 0048f5ac
    MOV dword ptr [ESP + 0x24],ECX      ; 0048f5b1
    MOV dword ptr [ESP + 0x30],EBX      ; 0048f5b5
    MOV EDX,dword ptr [EAX]             ; 0048f5b9 | DAT_01b4d738
    MOV dword ptr [EDX + 0x20],0x0      ; 0048f5bb
    MOV EDX,dword ptr [EAX]             ; 0048f5c2 | DAT_01b4d738
    MOV dword ptr [EDX + 0x24],0x0      ; 0048f5c4
    MOV EDX,dword ptr [EAX]             ; 0048f5cb | DAT_01b4d738
    MOV dword ptr [EDX + 0x28],0x0      ; 0048f5cd
    MOV EDX,dword ptr [EAX]             ; 0048f5d4 | DAT_01b4d738
    MOV dword ptr [EDX + 0x50],0x0      ; 0048f5d6
    MOV EDX,dword ptr [EAX]             ; 0048f5dd | DAT_01b4d738
    MOV dword ptr [EDX + 0x54],0x0      ; 0048f5df
    MOV EDX,dword ptr [EAX]             ; 0048f5e6 | DAT_01b4d738
    MOV dword ptr [EDX + 0x58],0x0      ; 0048f5e8
    MOV EDX,dword ptr [EAX]             ; 0048f5ef | DAT_01b4d738
    MOV dword ptr [EDX + 0x80],0x0      ; 0048f5f1
    MOV EDX,dword ptr [EAX]             ; 0048f5fb | DAT_01b4d738
    MOV dword ptr [EDX + 0x84],0x0      ; 0048f5fd
    MOV EDX,dword ptr [EAX]             ; 0048f607 | DAT_01b4d738
    MOV ESI,dword ptr [0x01c038f4]      ; 0048f609 | DAT_01c038f4
    MOV dword ptr [EDX + 0x88],0x0      ; 0048f60f
    MOV EDX,0xffff                      ; 0048f619
    MOV EBX,dword ptr [EAX]             ; 0048f61e | DAT_01b4d738
    SUB EDX,ESI                         ; 0048f620
    MOV dword ptr [EBX + 0x2c],EDX      ; 0048f622
    MOV EBX,dword ptr [EAX]             ; 0048f625 | DAT_01b4d738
    MOV dword ptr [EBX + 0x5c],EDX      ; 0048f627
    MOV EAX,dword ptr [EAX]             ; 0048f62a | DAT_01b4d738
    PUSH 0x5b9214                       ; 0048f62c | DAT_005b9214
    MOV dword ptr [EAX + 0x8c],EDX      ; 0048f631
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 0048f637
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_00545920(SMRGLTextureBasic * texture)
    ADD ESP,0x4                         ; 0048f63c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048f63f
        ;   Label: LAB_0048f63f
    XOR EDI,EDI                         ; 0048f642
    MOV EDX,dword ptr [EAX + 0x15c]     ; 0048f644
    MOV dword ptr [ESP + 0x7c],EDI      ; 0048f64a
    TEST EDX,EDX                        ; 0048f64e
    JLE 0x0048f74a                      ; 0048f650
        ;   XREF to: 0048f74a (CONDITIONAL_JUMP)  ; LAB_0048f74a
    ADD EAX,0x160                       ; 0048f656
    MOV dword ptr [ESP + 0x80],EAX      ; 0048f65b
    MOV EAX,dword ptr [ESP + 0x80]      ; 0048f662
        ;   Label: LAB_0048f662
    FLD float ptr [EAX]                 ; 0048f669
    FMUL float ptr [0x0058171f]         ; 0048f66b | FLOAT_0058171f
    CALL crt_math.c_round_FUN_00563a30  ; 0048f671
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x84]        ; 0048f676
    MOV EDI,dword ptr [ESP + 0x84]      ; 0048f67d
    TEST EDI,EDI                        ; 0048f684
    JL 0x0048f7ac                       ; 0048f686
        ;   XREF to: 0048f7ac (CONDITIONAL_JUMP)  ; LAB_0048f7ac
    CMP EDI,0x40                        ; 0048f68c
    JL 0x0048f69c                       ; 0048f68f
        ;   XREF to: 0048f69c (CONDITIONAL_JUMP)  ; LAB_0048f69c
    MOV dword ptr [ESP + 0x84],0x3f     ; 0048f691
    LEA EDX,[EAX + 0x28]                ; 0048f69c
        ;   Label: LAB_0048f69c
    PUSH EDX                            ; 0048f69f
    LEA EDX,[EAX + 0x1c]                ; 0048f6a0
    PUSH EDX                            ; 0048f6a3
    LEA EDX,[EAX + 0x10]                ; 0048f6a4
    PUSH EDX                            ; 0048f6a7
    ADD EAX,0x4                         ; 0048f6a8
    PUSH EAX                            ; 0048f6ab
    LEA EAX,[ESP + 0x70]                ; 0048f6ac
    PUSH EAX                            ; 0048f6b0
    MOV EAX,dword ptr [ESP + 0x98]      ; 0048f6b1
    SHL EAX,0x5                         ; 0048f6b8
    ADD EAX,0x1c7075c                   ; 0048f6bb
    PUSH EAX                            ; 0048f6c0
    LEA EBX,[ESP + 0x84]                ; 0048f6c1
    CALL core_spline.cpp_evaluateSplinePoint3D_FUN_00533f10 ; 0048f6c8
        ;   XREF to: 00533f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_spline.cpp_evaluateSplinePoint3D_FUN_00533f10(float * basis, CVector3f * out, CVector3f * p0, CVector3f * p1, ...)
    ADD ESP,0x18                        ; 0048f6cd
    LEA EAX,[ESP + 0x60]                ; 0048f6d0
    MOV EDX,dword ptr [0x005ae704]      ; 0048f6d4 | g_CDemonRenderer_PTR_005ae704
    FLD float ptr [EAX]                 ; 0048f6da
    FMUL float ptr [0x0059da10]         ; 0048f6dc | DAT_0059da10
    FISTP dword ptr [EBX]               ; 0048f6e2
    FLD float ptr [EAX + 0x4]           ; 0048f6e4
    FMUL float ptr [0x0059da10]         ; 0048f6e7 | DAT_0059da10
    FISTP dword ptr [EBX + 0x4]         ; 0048f6ed
    FLD float ptr [EAX + 0x8]           ; 0048f6f0
    FMUL float ptr [0x0059da10]         ; 0048f6f3 | DAT_0059da10
    FISTP dword ptr [EBX + 0x8]         ; 0048f6f9
    LEA EAX,[ESP + 0x6c]                ; 0048f6fc
    PUSH EAX                            ; 0048f700
    MOV EAX,dword ptr [EDX]             ; 0048f701 | DAT_01b4d738
    PUSH EAX                            ; 0048f703
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0048f704
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 0048f709 | g_CDemonRenderer_PTR_005ae704
    MOV EBX,dword ptr [EAX]             ; 0048f70e | DAT_01b4d738
    MOV DL,byte ptr [EBX + 0x13]        ; 0048f710
    ADD ESP,0x8                         ; 0048f713
    TEST DL,0x80                        ; 0048f716
    JZ 0x0048f7ba                       ; 0048f719
        ;   XREF to: 0048f7ba (CONDITIONAL_JUMP)  ; LAB_0048f7ba
    MOV ECX,dword ptr [ESP + 0x80]      ; 0048f71f
        ;   Label: LAB_0048f71f
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0048f726
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f72a
    ADD ECX,0x34                        ; 0048f72d
    INC EBX                             ; 0048f730
    MOV ESI,dword ptr [EDX + 0x15c]     ; 0048f731
    MOV dword ptr [ESP + 0x80],ECX      ; 0048f737
    MOV dword ptr [ESP + 0x7c],EBX      ; 0048f73e
    CMP EBX,ESI                         ; 0048f742
    JL 0x0048f662                       ; 0048f744
        ;   XREF to: 0048f662 (CONDITIONAL_JUMP)  ; LAB_0048f662
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048f74a
        ;   Label: LAB_0048f74a
    PUSH ESI                            ; 0048f74d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0048f74e
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0048f753
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048f756
    MOV ESP,EBP                         ; 0048f75a
    POP EBP                             ; 0048f75c
    POP EDI                             ; 0048f75d
    POP ESI                             ; 0048f75e
    POP EBX                             ; 0048f75f
    RET                                 ; 0048f760
    PUSH EAX                            ; 0048f761
        ;   Label: LAB_0048f761
    PUSH EAX                            ; 0048f762
    PUSH EAX                            ; 0048f763
    MOV EDX,dword ptr [0x005ae704]      ; 0048f764 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0048f76a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20 ; 0048f76b
        ;   XREF to: 00460f20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV EAX,[0x01c038f4]                ; 0048f770 | DAT_01c038f4
    SAR EAX,0x8                         ; 0048f775
    MOV [0x01c70754],EAX                ; 0048f778 | DAT_01c70754
    MOV EDX,dword ptr [0x01c70754]      ; 0048f77d | DAT_01c70754
    SHL EAX,0x8                         ; 0048f783
    OR EDX,EAX                          ; 0048f786
    MOV EAX,[0x01c70754]                ; 0048f788 | DAT_01c70754
    SHL EAX,0x10                        ; 0048f78d
    OR EDX,EAX                          ; 0048f790
    MOV EAX,EDX                         ; 0048f792
    ADD ESP,0x10                        ; 0048f794
    XOR EAX,0xffffff                    ; 0048f797
    MOV dword ptr [0x01c70754],EDX      ; 0048f79c | DAT_01c70754
    MOV [0x01c70758],EAX                ; 0048f7a2 | DAT_01c70758
    JMP 0x0048f63f                      ; 0048f7a7
        ;   XREF to: 0048f63f (UNCONDITIONAL_JUMP)  ; LAB_0048f63f
    XOR EBX,EBX                         ; 0048f7ac
        ;   Label: LAB_0048f7ac
    MOV dword ptr [ESP + 0x84],EBX      ; 0048f7ae
    JMP 0x0048f69c                      ; 0048f7b5
        ;   XREF to: 0048f69c (UNCONDITIONAL_JUMP)  ; LAB_0048f69c
    MOV EDX,dword ptr [0x01c02594]      ; 0048f7ba | g_UseExternalRenderer
        ;   Label: LAB_0048f7ba
    MOV EDI,dword ptr [EBX + 0x14]      ; 0048f7c0
    MOV ESI,dword ptr [EBX + 0x10]      ; 0048f7c3
    SAR EDI,0x10                        ; 0048f7c6
    SAR ESI,0x10                        ; 0048f7c9
    TEST EDX,EDX                        ; 0048f7cc
    JZ 0x0048f83f                       ; 0048f7ce
        ;   XREF to: 0048f83f (CONDITIONAL_JUMP)  ; LAB_0048f83f
    MOV EDX,dword ptr [0x005b761c]      ; 0048f7d0 | g_WindowWidth
    DEC EDX                             ; 0048f7d6
    CMP ESI,EDX                         ; 0048f7d7
    JGE 0x0048f71f                      ; 0048f7d9
        ;   XREF to: 0048f71f (CONDITIONAL_JUMP)  ; LAB_0048f71f
    MOV EDX,dword ptr [0x005b7620]      ; 0048f7df | g_WindowHeight
    DEC EDX                             ; 0048f7e5
    CMP EDI,EDX                         ; 0048f7e6
    JGE 0x0048f71f                      ; 0048f7e8
        ;   XREF to: 0048f71f (CONDITIONAL_JUMP)  ; LAB_0048f71f
    MOV word ptr [EBX + 0x10],0x0       ; 0048f7ee
    MOV word ptr [EBX + 0x14],0x0       ; 0048f7f4
    MOV ESI,dword ptr [EAX]             ; 0048f7fa | DAT_01b4d738
    MOV ECX,0xc                         ; 0048f7fc
    LEA EDI,[ESI + 0x30]                ; 0048f801
    MOV ESI,EBX                         ; 0048f804
    MOVSD.REP ES:EDI,ESI                ; 0048f806
    MOV ESI,dword ptr [EAX]             ; 0048f808 | DAT_01b4d738
    MOV ECX,0xc                         ; 0048f80a
    LEA EDI,[ESI + 0x60]                ; 0048f80f
    MOV ESI,EBX                         ; 0048f812
    MOVSD.REP ES:EDI,ESI                ; 0048f814
    MOV EBX,dword ptr [EAX]             ; 0048f816 | DAT_01b4d738
    INC word ptr [EBX + 0x42]           ; 0048f818
    MOV EBX,dword ptr [EAX]             ; 0048f81c | DAT_01b4d738
    PUSH 0x3e7                          ; 0048f81e
    LEA EDX,[ESP + 0x4]                 ; 0048f823
    MOV CX,word ptr [EBX + 0x76]        ; 0048f827
    PUSH EDX                            ; 0048f82b
    INC ECX                             ; 0048f82c
    PUSH EAX                            ; 0048f82d | DAT_01b4d738
    MOV word ptr [EBX + 0x76],CX        ; 0048f82e
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460 ; 0048f832
        ;   XREF to: 0045f460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 0048f837
    JMP 0x0048f71f                      ; 0048f83a
        ;   XREF to: 0048f71f (UNCONDITIONAL_JUMP)  ; LAB_0048f71f
    PUSH 0x1                            ; 0048f83f
        ;   Label: LAB_0048f83f
    PUSH EBX                            ; 0048f841
    CALL engine_prim.c_replaceWWithDepth_FUN_004f99d0 ; 0048f842
        ;   XREF to: 004f99d0 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_004f99d0(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0048f847
    MOV EAX,dword ptr [EBX + 0x8]       ; 0048f84a
    TEST ESI,ESI                        ; 0048f84d
    JL 0x0048f71f                       ; 0048f84f
        ;   XREF to: 0048f71f (CONDITIONAL_JUMP)  ; LAB_0048f71f
    CMP ESI,dword ptr [0x005b761c]      ; 0048f855 | g_WindowWidth
    JGE 0x0048f71f                      ; 0048f85b
        ;   XREF to: 0048f71f (CONDITIONAL_JUMP)  ; LAB_0048f71f
    TEST EDI,EDI                        ; 0048f861
    JL 0x0048f71f                       ; 0048f863
        ;   XREF to: 0048f71f (CONDITIONAL_JUMP)  ; LAB_0048f71f
    CMP EDI,dword ptr [0x005b7620]      ; 0048f869 | g_WindowHeight
    JGE 0x0048f71f                      ; 0048f86f
        ;   XREF to: 0048f71f (CONDITIONAL_JUMP)  ; LAB_0048f71f
    PUSH EAX                            ; 0048f875
    PUSH EDI                            ; 0048f876
    PUSH ESI                            ; 0048f877
    CALL core_flies.cpp_drawFlyPixel_FUN_0048f3c0 ; 0048f878
        ;   XREF to: 0048f3c0 (UNCONDITIONAL_CALL)  ; void core_flies.cpp_drawFlyPixel_FUN_0048f3c0(int screen_x, int screen_y, int z_depth)
    ADD ESP,0xc                         ; 0048f87d
    JMP 0x0048f71f                      ; 0048f880
        ;   XREF to: 0048f71f (UNCONDITIONAL_JUMP)  ; LAB_0048f71f


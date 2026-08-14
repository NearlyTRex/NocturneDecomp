; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_curtain_cpp_CCurtain_FUN_0043f330(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[1]:
;   core_curtain.cpp_CCurtain_renderOpaque_FUN_0043f610 at 0043f624
;
; Referenced Globals:
;   undefined4 DAT_0059bc70
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   int g_RelativeZ
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0
;   core_set.cpp_CDemonSet_FUN_0050ddd0
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0043f330
        ;   Label: core_curtain.cpp_CCurtain_FUN_0043f330
    PUSH EBP                            ; 0043f331
    SUB ESP,0x34                        ; 0043f332
    MOV ESI,dword ptr [ESP + 0x40]      ; 0043f335
    PUSH ESI                            ; 0043f339
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0043f33a
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0043f33f
    PUSH 0x0                            ; 0043f342
    LEA EAX,[ESP + 0x4]                 ; 0043f344
    PUSH EAX                            ; 0043f348
    MOV EDX,dword ptr [ESI + 0x14c]     ; 0043f349
    PUSH ESI                            ; 0043f34f
    CALL dword ptr [EDX + 0x14]         ; 0043f350
    ADD ESP,0x8                         ; 0043f353
    PUSH EAX                            ; 0043f356
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0043f357
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0043f35c
    MOV dword ptr [ESP + 0x30],EAX      ; 0043f35f
    TEST EAX,EAX                        ; 0043f363
    JZ 0x0043f5f0                       ; 0043f365
        ;   XREF to: 0043f5f0 (CONDITIONAL_JUMP)  ; LAB_0043f5f0
    MOV EDX,dword ptr [0x005ae704]      ; 0043f36b | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0043f371 | DAT_01b4d738
    MOV dword ptr [ESI + 0x65b28],0x1   ; 0043f372
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0043f37c
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0043f381
    TEST EAX,EAX                        ; 0043f384
    JZ 0x0043f39e                       ; 0043f386
        ;   XREF to: 0043f39e (CONDITIONAL_JUMP)  ; LAB_0043f39e
    CMP dword ptr [ESI + 0x178],0x0     ; 0043f388
    JZ 0x0043f39e                       ; 0043f38f
        ;   XREF to: 0043f39e (CONDITIONAL_JUMP)  ; LAB_0043f39e
    CMP dword ptr [ESI + 0x65b2c],0x0   ; 0043f391
    JZ 0x0043f4e7                       ; 0043f398
        ;   XREF to: 0043f4e7 (CONDITIONAL_JUMP)  ; LAB_0043f4e7
    PUSH EDI                            ; 0043f39e
        ;   Label: LAB_0043f39e
    PUSH EBX                            ; 0043f39f
    MOV EDI,dword ptr [ESI + 0x174]     ; 0043f3a0
    PUSH EDI                            ; 0043f3a6
    MOV EBP,dword ptr [0x005ae704]      ; 0043f3a7 | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 0043f3ad | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 0043f3ae
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0043f3b3
    LEA EAX,[ESI + 0x15c]               ; 0043f3b6
    PUSH EAX                            ; 0043f3bc
    MOV EAX,[0x005ae704]                ; 0043f3bd | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 0043f3c2 | DAT_01b4d738
    XOR EDI,EDI                         ; 0043f3c3
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 0043f3c5
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EDX,[ESI + 0x200]               ; 0043f3ca
    ADD ESP,0x8                         ; 0043f3d0
    LEA EBP,[ESI + 0x1c72c]             ; 0043f3d3
    MOV EBX,dword ptr [ESI + 0x1fc]     ; 0043f3d9
    MOV ECX,EBP                         ; 0043f3df
    TEST EBX,EBX                        ; 0043f3e1
    JLE 0x0043f420                      ; 0043f3e3
        ;   XREF to: 0043f420 (CONDITIONAL_JUMP)  ; LAB_0043f420
    MOV EBX,ECX                         ; 0043f3e5
        ;   Label: LAB_0043f3e5
    MOV EAX,EDX                         ; 0043f3e7
    FLD float ptr [EAX]                 ; 0043f3e9
    FMUL float ptr [0x0059bc70]         ; 0043f3eb | DAT_0059bc70
    FISTP dword ptr [EBX]               ; 0043f3f1
    FLD float ptr [EAX + 0x4]           ; 0043f3f3
    FMUL float ptr [0x0059bc70]         ; 0043f3f6 | DAT_0059bc70
    FISTP dword ptr [EBX + 0x4]         ; 0043f3fc
    FLD float ptr [EAX + 0x8]           ; 0043f3ff
    FMUL float ptr [0x0059bc70]         ; 0043f402 | DAT_0059bc70
    FISTP dword ptr [EBX + 0x8]         ; 0043f408
    INC EDI                             ; 0043f40b
    ADD EDX,0x74                        ; 0043f40c
    MOV EAX,dword ptr [ESI + 0x1fc]     ; 0043f40f
    ADD ECX,0xc                         ; 0043f415
    CMP EDI,EAX                         ; 0043f418
    JL 0x0043f3e5                       ; 0043f41a
        ;   XREF to: 0043f3e5 (CONDITIONAL_JUMP)  ; LAB_0043f3e5
    LEA EAX,[EAX]                       ; 0043f41c
    PUSH EBP                            ; 0043f420
        ;   Label: LAB_0043f420
    MOV EDX,dword ptr [ESI + 0x1fc]     ; 0043f421
    PUSH EDX                            ; 0043f427
    MOV ECX,dword ptr [0x005be368]      ; 0043f428 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 0043f42e | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200 ; 0043f42f
        ;   XREF to: 0050c200 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 0043f434
    PUSH 0x1                            ; 0043f437
    MOV EBX,dword ptr [0x005ae704]      ; 0043f439 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 0043f43f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 0043f440
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    MOV EDI,dword ptr [0x01c039c0]      ; 0043f445 | g_RelativeZ
    ADD ESP,0x8                         ; 0043f44b
    XOR EDX,EDX                         ; 0043f44e
    TEST EDI,EDI                        ; 0043f450
    SETL AL                             ; 0043f452
    MOV DL,AL                           ; 0043f455
    TEST EDI,EDI                        ; 0043f457
    SETG AL                             ; 0043f459
    MOVZX EBP,AL                        ; 0043f45c
    CMP dword ptr [ESI + 0x178],0x0     ; 0043f45f
    JZ 0x0043f516                       ; 0043f466
        ;   XREF to: 0043f516 (CONDITIONAL_JUMP)  ; LAB_0043f516
    TEST EDX,EDX                        ; 0043f46c
    JZ 0x0043f542                       ; 0043f46e
        ;   XREF to: 0043f542 (CONDITIONAL_JUMP)  ; LAB_0043f542
    MOV EDX,dword ptr [ESI + 0x1c724]   ; 0043f474
        ;   Label: LAB_0043f474
    IMUL EDX,dword ptr [ESI + 0x1c728]  ; 0043f47a
    PUSH 0x0                            ; 0043f481
    PUSH 0x4                            ; 0043f483
    LEA EAX,[ESI + 0x1c72c]             ; 0043f485
    PUSH EAX                            ; 0043f48b
    LEA EBX,[ESI + 0x1f60c]             ; 0043f48c
    PUSH EBX                            ; 0043f492
    LEA EAX,[EDX + EDX*0x1]             ; 0043f493
    PUSH EAX                            ; 0043f496
    MOV EDI,dword ptr [ESI + 0x1fc]     ; 0043f497
    PUSH EDI                            ; 0043f49d
    MOV EAX,[0x005be368]                ; 0043f49e | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 0043f4a3 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 ; 0043f4a4
        ;   XREF to: 0050c2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    MOV EDX,dword ptr [ESI + 0x174]     ; 0043f4a9
    ADD ESP,0x1c                        ; 0043f4af
    CMP EDX,0xfde8                      ; 0043f4b2
    JG 0x0043f520                       ; 0043f4b8
        ;   XREF to: 0043f520 (CONDITIONAL_JUMP)  ; LAB_0043f520
    XOR EDI,EDI                         ; 0043f4ba
    MOV EAX,dword ptr [ESI + 0x1c728]   ; 0043f4bc
        ;   Label: LAB_0043f4bc
    MOV EDX,dword ptr [ESI + 0x1c724]   ; 0043f4c2
    IMUL EDX,EAX                        ; 0043f4c8
    ADD EDX,EDX                         ; 0043f4cb
    CMP EDI,EDX                         ; 0043f4cd
    JGE 0x0043f542                      ; 0043f4cf
        ;   XREF to: 0043f542 (CONDITIONAL_JUMP)  ; LAB_0043f542
    PUSH EBX                            ; 0043f4d1
    MOV EDX,dword ptr [0x005ae704]      ; 0043f4d2 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0043f4d8 | DAT_01b4d738
    INC EDI                             ; 0043f4d9
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370 ; 0043f4da
        ;   XREF to: 00460370 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD EBX,0x48                        ; 0043f4df
    ADD ESP,0x8                         ; 0043f4e2
    JMP 0x0043f4bc                      ; 0043f4e5
        ;   XREF to: 0043f4bc (UNCONDITIONAL_JUMP)  ; LAB_0043f4bc
    LEA EAX,[ESP + 0x18]                ; 0043f4e7
        ;   Label: LAB_0043f4e7
    PUSH EAX                            ; 0043f4eb
    MOV EDX,dword ptr [ESI + 0x14c]     ; 0043f4ec
    PUSH ESI                            ; 0043f4f2
    CALL dword ptr [EDX + 0x14]         ; 0043f4f3
    ADD ESP,0x8                         ; 0043f4f6
    PUSH EAX                            ; 0043f4f9
    CALL core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0 ; 0043f4fa
        ;   XREF to: 0041dcc0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0043f4ff
    PUSH ESI                            ; 0043f502
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0043f503
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 0043f508
    ADD ESP,0x4                         ; 0043f50d
    ADD ESP,0x34                        ; 0043f510
    POP EBP                             ; 0043f513
    POP ESI                             ; 0043f514
    RET                                 ; 0043f515
    MOV EBP,0x1                         ; 0043f516
        ;   Label: LAB_0043f516
    JMP 0x0043f474                      ; 0043f51b
        ;   XREF to: 0043f474 (UNCONDITIONAL_JUMP)  ; LAB_0043f474
    MOV EDX,dword ptr [ESI + 0x1c724]   ; 0043f520
        ;   Label: LAB_0043f520
    IMUL EDX,dword ptr [ESI + 0x1c728]  ; 0043f526
    PUSH -0x1                           ; 0043f52d
    ADD EDX,EDX                         ; 0043f52f
    PUSH EDX                            ; 0043f531
    PUSH EBX                            ; 0043f532
    MOV EBX,dword ptr [0x005be368]      ; 0043f533 | g_CDemonSet_PTR_005be368
    PUSH EBX                            ; 0043f539 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_FUN_0050ddd0 ; 0043f53a
        ;   XREF to: 0050ddd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050ddd0(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 0043f53f
    TEST EBP,EBP                        ; 0043f542
        ;   Label: LAB_0043f542
    JZ 0x0043f5dd                       ; 0043f544
        ;   XREF to: 0043f5dd (CONDITIONAL_JUMP)  ; LAB_0043f5dd
    MOV EDX,dword ptr [ESI + 0x1c724]   ; 0043f54a
    IMUL EDX,dword ptr [ESI + 0x1c728]  ; 0043f550
    PUSH 0x0                            ; 0043f557
    PUSH 0x4                            ; 0043f559
    LEA EAX,[ESI + 0x1c72c]             ; 0043f55b
    PUSH EAX                            ; 0043f561
    LEA EDI,[ESI + 0x4288c]             ; 0043f562
    PUSH EDI                            ; 0043f568
    ADD EDX,EDX                         ; 0043f569
    PUSH EDX                            ; 0043f56b
    MOV EBX,dword ptr [ESI + 0x1fc]     ; 0043f56c
    PUSH EBX                            ; 0043f572
    MOV EBP,dword ptr [0x005be368]      ; 0043f573 | g_CDemonSet_PTR_005be368
    PUSH EBP                            ; 0043f579 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 ; 0043f57a
        ;   XREF to: 0050c2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    MOV EAX,dword ptr [ESI + 0x174]     ; 0043f57f
    ADD ESP,0x1c                        ; 0043f585
    CMP EAX,0xfde8                      ; 0043f588
    JG 0x0043f5bb                       ; 0043f58d
        ;   XREF to: 0043f5bb (CONDITIONAL_JUMP)  ; LAB_0043f5bb
    XOR EBX,EBX                         ; 0043f58f
    MOV EBP,dword ptr [ESI + 0x1c728]   ; 0043f591
        ;   Label: LAB_0043f591
    MOV EDX,dword ptr [ESI + 0x1c724]   ; 0043f597
    IMUL EDX,EBP                        ; 0043f59d
    ADD EDX,EDX                         ; 0043f5a0
    CMP EBX,EDX                         ; 0043f5a2
    JGE 0x0043f5dd                      ; 0043f5a4
        ;   XREF to: 0043f5dd (CONDITIONAL_JUMP)  ; LAB_0043f5dd
    PUSH EDI                            ; 0043f5a6
    MOV EAX,[0x005ae704]                ; 0043f5a7 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 0043f5ac | DAT_01b4d738
    INC EBX                             ; 0043f5ad
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370 ; 0043f5ae
        ;   XREF to: 00460370 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD EDI,0x48                        ; 0043f5b3
    ADD ESP,0x8                         ; 0043f5b6
    JMP 0x0043f591                      ; 0043f5b9
        ;   XREF to: 0043f591 (UNCONDITIONAL_JUMP)  ; LAB_0043f591
    MOV EDX,dword ptr [ESI + 0x1c724]   ; 0043f5bb
        ;   Label: LAB_0043f5bb
    IMUL EDX,dword ptr [ESI + 0x1c728]  ; 0043f5c1
    PUSH -0x1                           ; 0043f5c8
    ADD EDX,EDX                         ; 0043f5ca
    PUSH EDX                            ; 0043f5cc
    PUSH EDI                            ; 0043f5cd
    MOV EBX,dword ptr [0x005be368]      ; 0043f5ce | g_CDemonSet_PTR_005be368
    PUSH EBX                            ; 0043f5d4 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_FUN_0050ddd0 ; 0043f5d5
        ;   XREF to: 0050ddd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0050ddd0(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 0043f5da
    PUSH 0x0                            ; 0043f5dd
        ;   Label: LAB_0043f5dd
    MOV EDX,dword ptr [0x005ae704]      ; 0043f5df | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0043f5e5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 0043f5e6
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0043f5eb
    POP EBX                             ; 0043f5ee
    POP EDI                             ; 0043f5ef
    PUSH ESI                            ; 0043f5f0
        ;   Label: LAB_0043f5f0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0043f5f1
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0043f5f6
    MOV EAX,dword ptr [ESP + 0x30]      ; 0043f5f9
    ADD ESP,0x34                        ; 0043f5fd
    POP EBP                             ; 0043f600
    POP ESI                             ; 0043f601
    RET                                 ; 0043f602


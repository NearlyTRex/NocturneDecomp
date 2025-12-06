; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_wateract.cpp_CWaterActor_FUN_005eb280(CWaterActor * this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00665310
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   SMRGLTextureBasic DAT_006846f0
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;   CVector3f g_ZeroVector
;   undefined4 DAT_03f90a88
;   undefined4 DAT_03f90a8c
;   undefined4 DAT_03f90a90
;   undefined4 DAT_03f90a94
;   undefined4 DAT_03f90a98
;   undefined4 DAT_03f90a9c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_set.cpp_CDemonSet_FUN_0056e3e0
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
;   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005eb280
        ;   Label: core_wateract.cpp_CWaterActor_FUN_005eb280
    PUSH EBP                            ; 005eb281
    SUB ESP,0x1c                        ; 005eb282
    MOV ESI,dword ptr [ESP + 0x28]      ; 005eb285
    MOV EDX,dword ptr [0x006703ec]      ; 005eb289 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 005eb28f | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005eb290 | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005eb295
    TEST EAX,EAX                        ; 005eb298
    JZ 0x005eb2a4                       ; 005eb29a | LAB_005eb2a4
        ;   XREF to: 005eb2a4 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005eb29c
    ADD ESP,0x1c                        ; 005eb29e
    POP EBP                             ; 005eb2a1
    POP ESI                             ; 005eb2a2
    RET                                 ; 005eb2a3
    PUSH ESI                            ; 005eb2a4
        ;   Label: LAB_005eb2a4
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005eb2a5 | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005eb2aa
    MOV EDX,ESP                         ; 005eb2ad
    PUSH EDX                            ; 005eb2af
    MOV EAX,dword ptr [ESI + 0x154]     ; 005eb2b0
    PUSH ESI                            ; 005eb2b6
    CALL dword ptr [EAX + 0x14]         ; 005eb2b7
    ADD ESP,0x8                         ; 005eb2ba
    PUSH EAX                            ; 005eb2bd
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005eb2be | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005eb2c3
    MOV dword ptr [ESP + 0x18],EAX      ; 005eb2c6
    TEST EAX,EAX                        ; 005eb2ca
    JZ 0x005eb462                       ; 005eb2cc | LAB_005eb462
        ;   XREF to: 005eb462 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005eb2d2
    PUSH EBX                            ; 005eb2d3
    MOV ECX,dword ptr [ESI + 0x164]     ; 005eb2d4
    PUSH ECX                            ; 005eb2da
    MOV EBX,dword ptr [0x006703ec]      ; 005eb2db | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 005eb2e1 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 005eb2e2 | void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005eb2e7
    PUSH 0x0                            ; 005eb2ea
    MOV EDI,dword ptr [0x006703ec]      ; 005eb2ec | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 005eb2f2 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 005eb2f3 | void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [ESI + 0x2b228]   ; 005eb2f8
    LEA EAX,[EDX*0x4 + 0x0]             ; 005eb2fe
    SUB EAX,EDX                         ; 005eb305
    SHL EAX,0x3                         ; 005eb307
    ADD ESP,0x8                         ; 005eb30a
    ADD EAX,0x6846f0                    ; 005eb30d | SMRGLTextureBasic DAT_006846f0
    PUSH EAX                            ; 005eb312
    MOV EBP,dword ptr [0x006703ec]      ; 005eb313 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBP                            ; 005eb319 | CDemonRenderer g_CDemonRendererInstance
    XOR EDI,EDI                         ; 005eb31a
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005eb31c | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [ESI + 0x298]     ; 005eb321
    ADD ESP,0x8                         ; 005eb327
    TEST EAX,EAX                        ; 005eb32a
    JLE 0x005eb370                      ; 005eb32c | LAB_005eb370
        ;   XREF to: 005eb370 (CONDITIONAL_JUMP)
    MOV ECX,0x3f90a88                   ; 005eb32e | undefined4 DAT_03f90a88
    LEA EDX,[ESI + 0x29c]               ; 005eb333
    MOV EBX,ECX                         ; 005eb339
        ;   Label: LAB_005eb339
    MOV EAX,EDX                         ; 005eb33b
    FLD float ptr [EAX]                 ; 005eb33d
    FMUL float ptr [0x00665310]         ; 005eb33f | DAT_00665310
    FISTP dword ptr [EBX]               ; 005eb345 | undefined4 DAT_03f90a88 | DAT_03f90a94
    FLD float ptr [EAX + 0x4]           ; 005eb347
    FMUL float ptr [0x00665310]         ; 005eb34a | DAT_00665310
    FISTP dword ptr [EBX + 0x4]         ; 005eb350 | undefined4 DAT_03f90a8c | DAT_03f90a98
    FLD float ptr [EAX + 0x8]           ; 005eb353
    FMUL float ptr [0x00665310]         ; 005eb356 | DAT_00665310
    FISTP dword ptr [EBX + 0x8]         ; 005eb35c | undefined4 DAT_03f90a90 | DAT_03f90a9c
    INC EDI                             ; 005eb35f
    ADD EDX,0x20                        ; 005eb360
    MOV EBX,dword ptr [ESI + 0x298]     ; 005eb363
    ADD ECX,0xc                         ; 005eb369 | undefined4 DAT_03f90a94
    CMP EDI,EBX                         ; 005eb36c
    JL 0x005eb339                       ; 005eb36e | LAB_005eb339
        ;   XREF to: 005eb339 (CONDITIONAL_JUMP)
    PUSH 0x3f90a88                      ; 005eb370 | undefined4 DAT_03f90a88
        ;   Label: LAB_005eb370
    MOV EDI,dword ptr [ESI + 0x298]     ; 005eb375
    PUSH EDI                            ; 005eb37b
    MOV EBP,dword ptr [0x006810c8]      ; 005eb37c | CDemonSet * g_CDemonSetPtr
    PUSH EBP                            ; 005eb382 | CDemonSet g_CDemonSetInstance
    XOR EBX,EBX                         ; 005eb383
    CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 ; 005eb385 | void core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0(CDemonSet * this_ptr, int vertex_count, int * input_vertices)
        ;   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [ESI + 0x298]     ; 005eb38a
    ADD ESP,0xc                         ; 005eb390
    TEST EAX,EAX                        ; 005eb393
    JLE 0x005eb420                      ; 005eb395 | LAB_005eb420
        ;   XREF to: 005eb420 (CONDITIONAL_JUMP)
    LEA EBP,[ESI + 0x2a8]               ; 005eb39b
    XOR EDI,EDI                         ; 005eb3a1
    PUSH EBX                            ; 005eb3a3
        ;   Label: LAB_005eb3a3
    PUSH 0x3f87558                      ; 005eb3a4 | CVector3f g_ZeroVector
    PUSH EBP                            ; 005eb3a9
    MOV EDX,dword ptr [0x006810c8]      ; 005eb3aa | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EDX                            ; 005eb3b0 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056e3e0 ; 005eb3b1 | void core_set.cpp_CDemonSet_FUN_0056e3e0(CDemonSet * this_ptr)
        ;   XREF to: 0056e3e0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x006703ec]      ; 005eb3b6 | CDemonRenderer * g_CDemonRendererPtr
    ADD ESP,0x10                        ; 005eb3bc
    MOV EAX,dword ptr [ESI + 0x28c]     ; 005eb3bf
    MOV ECX,dword ptr [ECX]             ; 005eb3c5 | CDemonRenderer g_CDemonRendererInstance
    SHL EAX,0x8                         ; 005eb3c7
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x20] ; 005eb3ca
    IMUL EDX                            ; 005eb3ce
    SHRD EAX,EDX,0x10                   ; 005eb3d0
    MOV dword ptr [ECX + EDI*0x1 + 0x20],EAX ; 005eb3d4
    MOV EAX,dword ptr [ESI + 0x290]     ; 005eb3d8
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x24] ; 005eb3de
    SHL EAX,0x8                         ; 005eb3e2
    IMUL EDX                            ; 005eb3e5
    SHRD EAX,EDX,0x10                   ; 005eb3e7
    MOV dword ptr [ECX + EDI*0x1 + 0x24],EAX ; 005eb3eb
    MOV EAX,dword ptr [ESI + 0x294]     ; 005eb3ef
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x28] ; 005eb3f5
    SHL EAX,0x8                         ; 005eb3f9
    ADD EDI,0x30                        ; 005eb3fc
    IMUL EDX                            ; 005eb3ff
    SHRD EAX,EDX,0x10                   ; 005eb401
    MOV dword ptr [ECX + EDI*0x1 + -0x8],EAX ; 005eb405
    INC EBX                             ; 005eb409
    MOV ECX,dword ptr [ESI + 0x298]     ; 005eb40a
    ADD EBP,0x20                        ; 005eb410
    CMP EBX,ECX                         ; 005eb413
    JL 0x005eb3a3                       ; 005eb415 | LAB_005eb3a3
        ;   XREF to: 005eb3a3 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005eb417
    LEA EDX,[EDX]                       ; 005eb41d
    MOV EDI,dword ptr [ESI + 0x164]     ; 005eb420
        ;   Label: LAB_005eb420
    LEA EBX,[ESI + 0x7fa8]              ; 005eb426
    CMP EDI,0xfde8                      ; 005eb42c
    JLE 0x005eb475                      ; 005eb432 | LAB_005eb475
        ;   XREF to: 005eb475 (CONDITIONAL_JUMP)
    PUSH -0x1                           ; 005eb434
    MOV EAX,dword ptr [ESI + 0x2b234]   ; 005eb436
    PUSH EAX                            ; 005eb43c
    PUSH EBX                            ; 005eb43d
    MOV EDX,dword ptr [0x006810c8]      ; 005eb43e | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EDX                            ; 005eb444 | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 ; 005eb445 | void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
        ;   XREF to: 00570770 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005eb44a
    LEA EAX,[EAX]                       ; 005eb44d
    PUSH 0x0                            ; 005eb450
        ;   Label: LAB_005eb450
    MOV EAX,[0x006703ec]                ; 005eb452 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 005eb457 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 005eb458 | void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005eb45d
    POP EBX                             ; 005eb460
    POP EDI                             ; 005eb461
    PUSH ESI                            ; 005eb462
        ;   Label: LAB_005eb462
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005eb463 | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005eb468
    MOV EAX,dword ptr [ESP + 0x18]      ; 005eb46b
    ADD ESP,0x1c                        ; 005eb46f
    POP EBP                             ; 005eb472
    POP ESI                             ; 005eb473
    RET                                 ; 005eb474
    MOV EBP,dword ptr [ESI + 0x2b234]   ; 005eb475
        ;   Label: LAB_005eb475
    XOR EDI,EDI                         ; 005eb47b
    TEST EBP,EBP                        ; 005eb47d
    JLE 0x005eb450                      ; 005eb47f | LAB_005eb450
        ;   XREF to: 005eb450 (CONDITIONAL_JUMP)
    PUSH 0x267                          ; 005eb481
        ;   Label: LAB_005eb481
    PUSH EBX                            ; 005eb486
    MOV ECX,dword ptr [0x006703ec]      ; 005eb487 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 005eb48d | CDemonRenderer g_CDemonRendererInstance
    INC EDI                             ; 005eb48e
    CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 ; 005eb48f | void engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
        ;   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)
    ADD EBX,0x48                        ; 005eb494
    MOV EBP,dword ptr [ESI + 0x2b234]   ; 005eb497
    ADD ESP,0xc                         ; 005eb49d
    CMP EDI,EBP                         ; 005eb4a0
    JL 0x005eb481                       ; 005eb4a2 | LAB_005eb481
        ;   XREF to: 005eb481 (CONDITIONAL_JUMP)
    JMP 0x005eb450                      ; 005eb4a4 | LAB_005eb450
        ;   XREF to: 005eb450 (UNCONDITIONAL_JUMP)


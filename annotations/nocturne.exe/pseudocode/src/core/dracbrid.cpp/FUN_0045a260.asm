; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_dracbrid_cpp_FUN_0045a260(CCharacter *param_1)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
;
; Referenced Globals:
;   double DOUBLE_0057d756 = 0.5
;   float FLOAT_0059c408 = 1
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cd4318
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20
;   core_motion.cpp_CMotionController_render_FUN_004e22b0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045a260
        ;   Label: core_dracbrid.cpp_FUN_0045a260
    PUSH ESI                            ; 0045a261
    PUSH EDI                            ; 0045a262
    PUSH EBP                            ; 0045a263
    MOV EBP,ESP                         ; 0045a264
    SUB ESP,0x24                        ; 0045a266
    AND ESP,0xfffffff8                  ; 0045a269
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045a26c
    MOV EDX,dword ptr [0x005ae704]      ; 0045a26f | DAT_005ae704
    PUSH EDX                            ; 0045a275 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0 ; 0045a276
        ;   XREF to: 004613b0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0045a27b
    MOV ESI,EAX                         ; 0045a27e
    TEST EAX,EAX                        ; 0045a280
    JZ 0x0045a296                       ; 0045a282
        ;   XREF to: 0045a296 (CONDITIONAL_JUMP)  ; LAB_0045a296
    CMP dword ptr [EBX + 0xbdb0],0x2    ; 0045a284
        ;   Label: LAB_0045a284
    JNZ 0x0045a29e                      ; 0045a28b
        ;   XREF to: 0045a29e (CONDITIONAL_JUMP)  ; LAB_0045a29e
    XOR EAX,EAX                         ; 0045a28d
        ;   Label: LAB_0045a28d
    MOV ESP,EBP                         ; 0045a28f
    POP EBP                             ; 0045a291
    POP EDI                             ; 0045a292
    POP ESI                             ; 0045a293
    POP EBX                             ; 0045a294
    RET                                 ; 0045a295
    MOV dword ptr [EBX + 0x2618],EAX    ; 0045a296
        ;   Label: LAB_0045a296
    JMP 0x0045a284                      ; 0045a29c
        ;   XREF to: 0045a284 (UNCONDITIONAL_JUMP)  ; LAB_0045a284
    MOV EDI,dword ptr [0x005ae704]      ; 0045a29e | DAT_005ae704
        ;   Label: LAB_0045a29e
    PUSH EDI                            ; 0045a2a4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0045a2a5
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0045a2aa
    TEST EAX,EAX                        ; 0045a2ad
    JZ 0x0045a2ba                       ; 0045a2af
        ;   XREF to: 0045a2ba (CONDITIONAL_JUMP)  ; LAB_0045a2ba
    CMP dword ptr [EBX + 0xbdb0],0x0    ; 0045a2b1
    JNZ 0x0045a28d                      ; 0045a2b8
        ;   XREF to: 0045a28d (CONDITIONAL_JUMP)  ; LAB_0045a28d
    TEST ESI,ESI                        ; 0045a2ba
        ;   Label: LAB_0045a2ba
    JNZ 0x0045a28d                      ; 0045a2bc
        ;   XREF to: 0045a28d (CONDITIONAL_JUMP)  ; LAB_0045a28d
    CMP dword ptr [EBX + 0x2404],0x0    ; 0045a2be
    JNZ 0x0045a28d                      ; 0045a2c5
        ;   XREF to: 0045a28d (CONDITIONAL_JUMP)  ; LAB_0045a28d
    PUSH EBX                            ; 0045a2c7
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0045a2c8
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 0045a2cd
    PUSH ESI                            ; 0045a2d0
    LEA EDX,[ESP + 0x10]                ; 0045a2d1
    PUSH EDX                            ; 0045a2d5
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0045a2d6
    PUSH EBX                            ; 0045a2dc
    CALL dword ptr [EAX + 0x14]         ; 0045a2dd
    ADD ESP,0x8                         ; 0045a2e0
    PUSH EAX                            ; 0045a2e3
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0045a2e4
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0045a2e9
    MOV ESI,EAX                         ; 0045a2ec
    TEST EAX,EAX                        ; 0045a2ee
    JZ 0x0045a348                       ; 0045a2f0
        ;   XREF to: 0045a348 (CONDITIONAL_JUMP)  ; LAB_0045a348
    MOV ECX,dword ptr [EBX + 0xbdb0]    ; 0045a2f2
    MOV dword ptr [EBX + 0x2618],0x1    ; 0045a2f8
    TEST ECX,ECX                        ; 0045a302
    JNZ 0x0045a365                      ; 0045a304
        ;   XREF to: 0045a365 (CONDITIONAL_JUMP)  ; LAB_0045a365
    CMP dword ptr [EBX + 0xbe4c],0x0    ; 0045a306
    JZ 0x0045a35a                       ; 0045a30d
        ;   XREF to: 0045a35a (CONDITIONAL_JUMP)  ; LAB_0045a35a
    CMP dword ptr [0x01cd4318],0x0      ; 0045a30f | DAT_01cd4318
        ;   Label: LAB_0045a30f
    JZ 0x0045a348                       ; 0045a316
        ;   XREF to: 0045a348 (CONDITIONAL_JUMP)  ; LAB_0045a348
    MOV EDI,dword ptr [0x005ae704]      ; 0045a318 | DAT_005ae704
    PUSH EDI                            ; 0045a31e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0045a31f
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0045a324
    TEST EAX,EAX                        ; 0045a327
    JNZ 0x0045a348                      ; 0045a329
        ;   XREF to: 0045a348 (CONDITIONAL_JUMP)  ; LAB_0045a348
    PUSH EBX                            ; 0045a32b
    LEA EAX,[EBX + 0x150]               ; 0045a32c
    PUSH EAX                            ; 0045a332
    CALL core_motion.cpp_CMotionController_render_FUN_004e22b0 ; 0045a333
        ;   XREF to: 004e22b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_004e22b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045a338
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0045a33b
    PUSH EBX                            ; 0045a341
    CALL dword ptr [EAX + 0x50]         ; 0045a342
    ADD ESP,0x4                         ; 0045a345
    PUSH EBX                            ; 0045a348
        ;   Label: LAB_0045a348
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0045a349
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0045a34e
    MOV EAX,ESI                         ; 0045a351
    MOV ESP,EBP                         ; 0045a353
    POP EBP                             ; 0045a355
    POP EDI                             ; 0045a356
    POP ESI                             ; 0045a357
    POP EBX                             ; 0045a358
    RET                                 ; 0045a359
    PUSH EBX                            ; 0045a35a
        ;   Label: LAB_0045a35a
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20 ; 0045a35b
        ;   XREF to: 00425c20 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0045a360
    JMP 0x0045a30f                      ; 0045a363
        ;   XREF to: 0045a30f (UNCONDITIONAL_JUMP)  ; LAB_0045a30f
    CMP ECX,0x1                         ; 0045a365
        ;   Label: LAB_0045a365
    JNZ 0x0045a409                      ; 0045a368
        ;   XREF to: 0045a409 (CONDITIONAL_JUMP)  ; LAB_0045a409
    FLD float ptr [EBX + 0xbdb4]        ; 0045a36e
    FLD1                                ; 0045a374
    FSUBRP                              ; 0045a376
    FDIV float ptr [0x0059c408]         ; 0045a378 | FLOAT_0059c408
    FSTP float ptr [ESP + 0x8]          ; 0045a37e
    FLD float ptr [ESP + 0x8]           ; 0045a382
        ;   Label: LAB_0045a382
    FLDZ                                ; 0045a386
    FXCH                                ; 0045a388
    FSTP double ptr [ESP]               ; 0045a38a
    FCOMP double ptr [ESP]              ; 0045a38d
    FNSTSW AX                           ; 0045a390
    SAHF                                ; 0045a392
    JNC 0x0045a30f                      ; 0045a393
        ;   XREF to: 0045a30f (CONDITIONAL_JUMP)  ; LAB_0045a30f
    PUSH 0x0                            ; 0045a399
    MOV EDX,dword ptr [0x005ae704]      ; 0045a39b | DAT_005ae704
    PUSH EDX                            ; 0045a3a1 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0045a3a2
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0045a3a7
    MOV ECX,dword ptr [0x005ae704]      ; 0045a3aa | DAT_005ae704
    PUSH dword ptr [ESP + 0x8]          ; 0045a3b0
    PUSH ECX                            ; 0045a3b4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020 ; 0045a3b5
        ;   XREF to: 00461020 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020(CDemonRenderer * this_ptr, float render_alpha)
    ADD ESP,0x8                         ; 0045a3ba
    PUSH 0x1                            ; 0045a3bd
    MOV EDI,dword ptr [0x005ae704]      ; 0045a3bf | DAT_005ae704
    PUSH EDI                            ; 0045a3c5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0 ; 0045a3c6
        ;   XREF to: 004619f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0045a3cb
    LEA EDX,[EBX + 0x150]               ; 0045a3ce
    FLD double ptr [ESP]                ; 0045a3d4
    FCOMP double ptr [0x0057d756]       ; 0045a3d7 | DOUBLE_0057d756
    FNSTSW AX                           ; 0045a3dd
    SAHF                                ; 0045a3df
    JBE 0x0045a437                      ; 0045a3e0
        ;   XREF to: 0045a437 (CONDITIONAL_JUMP)  ; LAB_0045a437
    PUSH 0x0                            ; 0045a3e2
    PUSH 0x1                            ; 0045a3e4
    PUSH 0x2e7                          ; 0045a3e6
    PUSH -0x1                           ; 0045a3eb
        ;   Label: LAB_0045a3eb
    PUSH EDX                            ; 0045a3ed
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0 ; 0045a3ee
        ;   XREF to: 0051d9d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 0045a3f3
    MOV EAX,[0x005ae704]                ; 0045a3f6 | DAT_005ae704
    PUSH EAX                            ; 0045a3fb | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0 ; 0045a3fc
        ;   XREF to: 00461db0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0045a401
    JMP 0x0045a30f                      ; 0045a404
        ;   XREF to: 0045a30f (UNCONDITIONAL_JUMP)  ; LAB_0045a30f
    FLD float ptr [EBX + 0xbdb4]        ; 0045a409
        ;   Label: LAB_0045a409
    FSUBR double ptr [0x0057d756]       ; 0045a40f | DOUBLE_0057d756
    FDIV float ptr [0x0059c408]         ; 0045a415 | FLOAT_0059c408
    FST float ptr [ESP + 0x8]           ; 0045a41b
    FLDZ                                ; 0045a41f
    FCOMPP                              ; 0045a421
    FNSTSW AX                           ; 0045a423
    SAHF                                ; 0045a425
    JBE 0x0045a382                      ; 0045a426
        ;   XREF to: 0045a382 (CONDITIONAL_JUMP)  ; LAB_0045a382
    XOR EAX,EAX                         ; 0045a42c
    MOV dword ptr [ESP + 0x8],EAX       ; 0045a42e
    JMP 0x0045a382                      ; 0045a432
        ;   XREF to: 0045a382 (UNCONDITIONAL_JUMP)  ; LAB_0045a382
    PUSH 0x0                            ; 0045a437
        ;   Label: LAB_0045a437
    PUSH 0x1                            ; 0045a439
    PUSH 0x267                          ; 0045a43b
    JMP 0x0045a3eb                      ; 0045a440
        ;   XREF to: 0045a3eb (UNCONDITIONAL_JUMP)  ; LAB_0045a3eb


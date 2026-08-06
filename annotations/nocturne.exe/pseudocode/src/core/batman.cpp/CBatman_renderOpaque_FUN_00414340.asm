; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_batman_cpp_CBatman_renderOpaque_FUN_00414340(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
;
; Referenced Globals:
;   double DOUBLE_00578c9f = 0.5
;   float FLOAT_0059a158 = 1
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
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

    PUSH EBX                            ; 00414340
        ;   Label: core_batman.cpp_CBatman_renderOpaque_FUN_00414340
    PUSH ESI                            ; 00414341
    PUSH EDI                            ; 00414342
    PUSH EBP                            ; 00414343
    MOV EBP,ESP                         ; 00414344
    SUB ESP,0x24                        ; 00414346
    AND ESP,0xfffffff8                  ; 00414349
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041434c
    MOV EDX,dword ptr [0x005ae704]      ; 0041434f | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00414355 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0 ; 00414356
        ;   XREF to: 004613b0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041435b
    MOV ESI,EAX                         ; 0041435e
    TEST EAX,EAX                        ; 00414360
    JZ 0x00414376                       ; 00414362
        ;   XREF to: 00414376 (CONDITIONAL_JUMP)  ; LAB_00414376
    CMP dword ptr [EBX + 0xbdc0],0x2    ; 00414364
        ;   Label: LAB_00414364
    JNZ 0x0041437e                      ; 0041436b
        ;   XREF to: 0041437e (CONDITIONAL_JUMP)  ; LAB_0041437e
    XOR EAX,EAX                         ; 0041436d
        ;   Label: LAB_0041436d
    MOV ESP,EBP                         ; 0041436f
    POP EBP                             ; 00414371
    POP EDI                             ; 00414372
    POP ESI                             ; 00414373
    POP EBX                             ; 00414374
    RET                                 ; 00414375
    MOV dword ptr [EBX + 0x2618],EAX    ; 00414376
        ;   Label: LAB_00414376
    JMP 0x00414364                      ; 0041437c
        ;   XREF to: 00414364 (UNCONDITIONAL_JUMP)  ; LAB_00414364
    MOV EDI,dword ptr [0x005ae704]      ; 0041437e | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_0041437e
    PUSH EDI                            ; 00414384 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00414385
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041438a
    TEST EAX,EAX                        ; 0041438d
    JZ 0x0041439a                       ; 0041438f
        ;   XREF to: 0041439a (CONDITIONAL_JUMP)  ; LAB_0041439a
    CMP dword ptr [EBX + 0xbdc0],0x0    ; 00414391
    JNZ 0x0041436d                      ; 00414398
        ;   XREF to: 0041436d (CONDITIONAL_JUMP)  ; LAB_0041436d
    TEST ESI,ESI                        ; 0041439a
        ;   Label: LAB_0041439a
    JNZ 0x0041436d                      ; 0041439c
        ;   XREF to: 0041436d (CONDITIONAL_JUMP)  ; LAB_0041436d
    CMP dword ptr [EBX + 0x2404],0x0    ; 0041439e
    JNZ 0x0041436d                      ; 004143a5
        ;   XREF to: 0041436d (CONDITIONAL_JUMP)  ; LAB_0041436d
    PUSH EBX                            ; 004143a7
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004143a8
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 004143ad
    PUSH ESI                            ; 004143b0
    LEA EDX,[ESP + 0x10]                ; 004143b1
    PUSH EDX                            ; 004143b5
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004143b6
    PUSH EBX                            ; 004143bc
    CALL dword ptr [EAX + 0x14]         ; 004143bd
    ADD ESP,0x8                         ; 004143c0
    PUSH EAX                            ; 004143c3
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004143c4
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 004143c9
    MOV ESI,EAX                         ; 004143cc
    TEST EAX,EAX                        ; 004143ce
    JZ 0x00414428                       ; 004143d0
        ;   XREF to: 00414428 (CONDITIONAL_JUMP)  ; LAB_00414428
    MOV ECX,dword ptr [EBX + 0xbdc0]    ; 004143d2
    MOV dword ptr [EBX + 0x2618],0x1    ; 004143d8
    TEST ECX,ECX                        ; 004143e2
    JNZ 0x0041443a                      ; 004143e4
        ;   XREF to: 0041443a (CONDITIONAL_JUMP)  ; LAB_0041443a
    PUSH EBX                            ; 004143e6
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20 ; 004143e7
        ;   XREF to: 00425c20 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004143ec
        ;   Label: LAB_004143ec
    CMP dword ptr [0x01cd4318],0x0      ; 004143ef | DAT_01cd4318
        ;   Label: LAB_004143ef
    JZ 0x00414428                       ; 004143f6
        ;   XREF to: 00414428 (CONDITIONAL_JUMP)  ; LAB_00414428
    MOV ECX,dword ptr [0x005ae704]      ; 004143f8 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004143fe | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004143ff
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00414404
    TEST EAX,EAX                        ; 00414407
    JNZ 0x00414428                      ; 00414409
        ;   XREF to: 00414428 (CONDITIONAL_JUMP)  ; LAB_00414428
    PUSH EBX                            ; 0041440b
    LEA EAX,[EBX + 0x150]               ; 0041440c
    PUSH EAX                            ; 00414412
    CALL core_motion.cpp_CMotionController_render_FUN_004e22b0 ; 00414413
        ;   XREF to: 004e22b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_004e22b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00414418
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0041441b
    PUSH EBX                            ; 00414421
    CALL dword ptr [EAX + 0x50]         ; 00414422
    ADD ESP,0x4                         ; 00414425
    PUSH EBX                            ; 00414428
        ;   Label: LAB_00414428
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00414429
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041442e
    MOV EAX,ESI                         ; 00414431
    MOV ESP,EBP                         ; 00414433
    POP EBP                             ; 00414435
    POP EDI                             ; 00414436
    POP ESI                             ; 00414437
    POP EBX                             ; 00414438
    RET                                 ; 00414439
    CMP ECX,0x1                         ; 0041443a
        ;   Label: LAB_0041443a
    JNZ 0x004144d7                      ; 0041443d
        ;   XREF to: 004144d7 (CONDITIONAL_JUMP)  ; LAB_004144d7
    FLD float ptr [EBX + 0xbdc4]        ; 00414443
    FLD1                                ; 00414449
    FSUBRP                              ; 0041444b
    FDIV float ptr [0x0059a158]         ; 0041444d | FLOAT_0059a158
    FSTP float ptr [ESP + 0x8]          ; 00414453
    FLD float ptr [ESP + 0x8]           ; 00414457
        ;   Label: LAB_00414457
    FLDZ                                ; 0041445b
    FXCH                                ; 0041445d
    FSTP double ptr [ESP]               ; 0041445f
    FCOMP double ptr [ESP]              ; 00414462
    FNSTSW AX                           ; 00414465
    SAHF                                ; 00414467
    JNC 0x004143ef                      ; 00414468
        ;   XREF to: 004143ef (CONDITIONAL_JUMP)  ; LAB_004143ef
    PUSH 0x0                            ; 0041446a
    MOV EDX,dword ptr [0x005ae704]      ; 0041446c | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00414472 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00414473
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00414478
    MOV ECX,dword ptr [0x005ae704]      ; 0041447b | g_CDemonRenderer_PTR_005ae704
    PUSH dword ptr [ESP + 0x8]          ; 00414481
    PUSH ECX                            ; 00414485 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020 ; 00414486
        ;   XREF to: 00461020 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlphaNormalized_FUN_00461020(CDemonRenderer * this_ptr, float render_alpha)
    ADD ESP,0x8                         ; 0041448b
    PUSH 0x1                            ; 0041448e
    MOV EDI,dword ptr [0x005ae704]      ; 00414490 | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 00414496 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0 ; 00414497
        ;   XREF to: 004619f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0041449c
    LEA EDX,[EBX + 0x150]               ; 0041449f
    FLD double ptr [ESP]                ; 004144a5
    FCOMP double ptr [0x00578c9f]       ; 004144a8 | DOUBLE_00578c9f
    FNSTSW AX                           ; 004144ae
    SAHF                                ; 004144b0
    JBE 0x00414505                      ; 004144b1
        ;   XREF to: 00414505 (CONDITIONAL_JUMP)  ; LAB_00414505
    PUSH 0x0                            ; 004144b3
    PUSH 0x1                            ; 004144b5
    PUSH 0x2e7                          ; 004144b7
    PUSH -0x1                           ; 004144bc
        ;   Label: LAB_004144bc
    PUSH EDX                            ; 004144be
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0 ; 004144bf
        ;   XREF to: 0051d9d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 004144c4
    MOV EAX,[0x005ae704]                ; 004144c7 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 004144cc | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0 ; 004144cd
        ;   XREF to: 00461db0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(CDemonRenderer * this_ptr)
    JMP 0x004143ec                      ; 004144d2
        ;   XREF to: 004143ec (UNCONDITIONAL_JUMP)  ; LAB_004143ec
    FLD float ptr [EBX + 0xbdc4]        ; 004144d7
        ;   Label: LAB_004144d7
    FSUBR double ptr [0x00578c9f]       ; 004144dd | DOUBLE_00578c9f
    FDIV float ptr [0x0059a158]         ; 004144e3 | FLOAT_0059a158
    FST float ptr [ESP + 0x8]           ; 004144e9
    FLDZ                                ; 004144ed
    FCOMPP                              ; 004144ef
    FNSTSW AX                           ; 004144f1
    SAHF                                ; 004144f3
    JBE 0x00414457                      ; 004144f4
        ;   XREF to: 00414457 (CONDITIONAL_JUMP)  ; LAB_00414457
    XOR EAX,EAX                         ; 004144fa
    MOV dword ptr [ESP + 0x8],EAX       ; 004144fc
    JMP 0x00414457                      ; 00414500
        ;   XREF to: 00414457 (UNCONDITIONAL_JUMP)  ; LAB_00414457
    PUSH 0x0                            ; 00414505
        ;   Label: LAB_00414505
    PUSH 0x1                            ; 00414507
    PUSH 0x267                          ; 00414509
    JMP 0x004144bc                      ; 0041450e
        ;   XREF to: 004144bc (UNCONDITIONAL_JUMP)  ; LAB_004144bc


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_batman_cpp_CBatman_renderOpaque_FUN_004173b0(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x2c]:1  local_2c
;
; Referenced Globals:
;   double DOUBLE_006158ed = 0.5
;   float FLOAT_0065a778 = 1
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02f43978
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0
;   core_motion.cpp_CMotionController_render_FUN_0052e700
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004173b0
        ;   Label: core_batman.cpp_CBatman_renderOpaque_FUN_004173b0
    PUSH ESI                            ; 004173b1
    PUSH EDI                            ; 004173b2
    PUSH EBP                            ; 004173b3
    MOV EBP,ESP                         ; 004173b4
    SUB ESP,0x24                        ; 004173b6
    AND ESP,0xfffffff8                  ; 004173b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004173bc
    MOV EDX,dword ptr [0x006703ec]      ; 004173bf | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 004173c5 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00 ; 004173c6
        ;   XREF to: 0048ce00 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004173cb
    MOV ESI,EAX                         ; 004173ce
    TEST EAX,EAX                        ; 004173d0
    JZ 0x004173e6                       ; 004173d2
        ;   XREF to: 004173e6 (CONDITIONAL_JUMP)  ; LAB_004173e6
    CMP dword ptr [EBX + 0xbf58],0x2    ; 004173d4
        ;   Label: LAB_004173d4
    JNZ 0x004173ee                      ; 004173db
        ;   XREF to: 004173ee (CONDITIONAL_JUMP)  ; LAB_004173ee
    XOR EAX,EAX                         ; 004173dd
        ;   Label: LAB_004173dd
    MOV ESP,EBP                         ; 004173df
    POP EBP                             ; 004173e1
    POP EDI                             ; 004173e2
    POP ESI                             ; 004173e3
    POP EBX                             ; 004173e4
    RET                                 ; 004173e5
    MOV dword ptr [EBX + 0x2620],EAX    ; 004173e6
        ;   Label: LAB_004173e6
    JMP 0x004173d4                      ; 004173ec
        ;   XREF to: 004173d4 (UNCONDITIONAL_JUMP)  ; LAB_004173d4
    MOV EDI,dword ptr [0x006703ec]      ; 004173ee | g_CDemonRendererPtr2
        ;   Label: LAB_004173ee
    PUSH EDI                            ; 004173f4 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004173f5
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004173fa
    TEST EAX,EAX                        ; 004173fd
    JZ 0x0041740a                       ; 004173ff
        ;   XREF to: 0041740a (CONDITIONAL_JUMP)  ; LAB_0041740a
    CMP dword ptr [EBX + 0xbf58],0x0    ; 00417401
    JNZ 0x004173dd                      ; 00417408
        ;   XREF to: 004173dd (CONDITIONAL_JUMP)  ; LAB_004173dd
    TEST ESI,ESI                        ; 0041740a
        ;   Label: LAB_0041740a
    JNZ 0x004173dd                      ; 0041740c
        ;   XREF to: 004173dd (CONDITIONAL_JUMP)  ; LAB_004173dd
    CMP dword ptr [EBX + 0x240c],0x0    ; 0041740e
    JNZ 0x004173dd                      ; 00417415
        ;   XREF to: 004173dd (CONDITIONAL_JUMP)  ; LAB_004173dd
    PUSH EBX                            ; 00417417
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00417418
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0041741d
    LEA EDX,[ESP + 0xc]                 ; 00417420
    PUSH EDX                            ; 00417424
    MOV EAX,dword ptr [EBX + 0x154]     ; 00417425
    PUSH EBX                            ; 0041742b
    CALL dword ptr [EAX + 0x14]         ; 0041742c
    ADD ESP,0x8                         ; 0041742f
    PUSH EAX                            ; 00417432
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00417433
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00417438
    MOV ESI,EAX                         ; 0041743b
    TEST EAX,EAX                        ; 0041743d
    JZ 0x00417497                       ; 0041743f
        ;   XREF to: 00417497 (CONDITIONAL_JUMP)  ; LAB_00417497
    MOV ECX,dword ptr [EBX + 0xbf58]    ; 00417441
    MOV dword ptr [EBX + 0x2620],0x1    ; 00417447
    TEST ECX,ECX                        ; 00417451
    JNZ 0x004174a9                      ; 00417453
        ;   XREF to: 004174a9 (CONDITIONAL_JUMP)  ; LAB_004174a9
    PUSH EBX                            ; 00417455
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0 ; 00417456
        ;   XREF to: 00429aa0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041745b
        ;   Label: LAB_0041745b
    CMP dword ptr [0x02f43978],0x0      ; 0041745e | DAT_02f43978
        ;   Label: LAB_0041745e
    JZ 0x00417497                       ; 00417465
        ;   XREF to: 00417497 (CONDITIONAL_JUMP)  ; LAB_00417497
    MOV ECX,dword ptr [0x006703ec]      ; 00417467 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0041746d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0041746e
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00417473
    TEST EAX,EAX                        ; 00417476
    JNZ 0x00417497                      ; 00417478
        ;   XREF to: 00417497 (CONDITIONAL_JUMP)  ; LAB_00417497
    PUSH EBX                            ; 0041747a
    LEA EAX,[EBX + 0x158]               ; 0041747b
    PUSH EAX                            ; 00417481
    CALL core_motion.cpp_CMotionController_render_FUN_0052e700 ; 00417482
        ;   XREF to: 0052e700 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_0052e700(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00417487
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041748a
    PUSH EBX                            ; 00417490
    CALL dword ptr [EAX + 0x50]         ; 00417491
    ADD ESP,0x4                         ; 00417494
    PUSH EBX                            ; 00417497
        ;   Label: LAB_00417497
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00417498
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041749d
    MOV EAX,ESI                         ; 004174a0
    MOV ESP,EBP                         ; 004174a2
    POP EBP                             ; 004174a4
    POP EDI                             ; 004174a5
    POP ESI                             ; 004174a6
    POP EBX                             ; 004174a7
    RET                                 ; 004174a8
    CMP ECX,0x1                         ; 004174a9
        ;   Label: LAB_004174a9
    JNZ 0x00417546                      ; 004174ac
        ;   XREF to: 00417546 (CONDITIONAL_JUMP)  ; LAB_00417546
    FLD float ptr [EBX + 0xbf5c]        ; 004174b2
    FLD1                                ; 004174b8
    FSUBRP                              ; 004174ba
    FDIV float ptr [0x0065a778]         ; 004174bc | FLOAT_0065a778
    FSTP float ptr [ESP + 0x8]          ; 004174c2
    FLD float ptr [ESP + 0x8]           ; 004174c6
        ;   Label: LAB_004174c6
    FLDZ                                ; 004174ca
    FXCH                                ; 004174cc
    FSTP double ptr [ESP]               ; 004174ce
    FCOMP double ptr [ESP]              ; 004174d1
    FNSTSW AX                           ; 004174d4
    SAHF                                ; 004174d6
    JNC 0x0041745e                      ; 004174d7
        ;   XREF to: 0041745e (CONDITIONAL_JUMP)  ; LAB_0041745e
    PUSH 0x0                            ; 004174d9
    MOV EDX,dword ptr [0x006703ec]      ; 004174db | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 004174e1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004174e2
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004174e7
    MOV ECX,dword ptr [0x006703ec]      ; 004174ea | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH dword ptr [ESP + 0x8]          ; 004174f0
    PUSH ECX                            ; 004174f4 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70 ; 004174f5
        ;   XREF to: 0048ca70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70(CDemonRenderer * this_ptr, float render_alpha)
    ADD ESP,0x8                         ; 004174fa
    PUSH 0x1                            ; 004174fd
    MOV EDI,dword ptr [0x006703ec]      ; 004174ff | g_CDemonRendererPtr2
    PUSH EDI                            ; 00417505 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0 ; 00417506
        ;   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0041750b
    LEA EDX,[EBX + 0x158]               ; 0041750e
    FLD double ptr [ESP]                ; 00417514
    FCOMP double ptr [0x006158ed]       ; 00417517 | DOUBLE_006158ed
    FNSTSW AX                           ; 0041751d
    SAHF                                ; 0041751f
    JBE 0x00417574                      ; 00417520
        ;   XREF to: 00417574 (CONDITIONAL_JUMP)  ; LAB_00417574
    PUSH 0x0                            ; 00417522
    PUSH 0x1                            ; 00417524
    PUSH 0x2e7                          ; 00417526
    PUSH -0x1                           ; 0041752b
        ;   Label: LAB_0041752b
    PUSH EDX                            ; 0041752d
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 ; 0041752e
        ;   XREF to: 005a0150 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00417533
    MOV EAX,[0x006703ec]                ; 00417536 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0041753b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 ; 0041753c
        ;   XREF to: 0048da80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(CDemonRenderer * this_ptr)
    JMP 0x0041745b                      ; 00417541
        ;   XREF to: 0041745b (UNCONDITIONAL_JUMP)  ; LAB_0041745b
    FLD float ptr [EBX + 0xbf5c]        ; 00417546
        ;   Label: LAB_00417546
    FSUBR double ptr [0x006158ed]       ; 0041754c | DOUBLE_006158ed
    FDIV float ptr [0x0065a778]         ; 00417552 | FLOAT_0065a778
    FST float ptr [ESP + 0x8]           ; 00417558
    FLDZ                                ; 0041755c
    FCOMPP                              ; 0041755e
    FNSTSW AX                           ; 00417560
    SAHF                                ; 00417562
    JBE 0x004174c6                      ; 00417563
        ;   XREF to: 004174c6 (CONDITIONAL_JUMP)  ; LAB_004174c6
    XOR EAX,EAX                         ; 00417569
    MOV dword ptr [ESP + 0x8],EAX       ; 0041756b
    JMP 0x004174c6                      ; 0041756f
        ;   XREF to: 004174c6 (UNCONDITIONAL_JUMP)  ; LAB_004174c6
    PUSH 0x0                            ; 00417574
        ;   Label: LAB_00417574
    PUSH 0x1                            ; 00417576
    PUSH 0x267                          ; 00417578
    JMP 0x0041752b                      ; 0041757d
        ;   XREF to: 0041752b (UNCONDITIONAL_JUMP)  ; LAB_0041752b


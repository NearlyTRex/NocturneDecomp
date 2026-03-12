; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0x20]:24  local_20
;
; XREF[12]:
;   core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_0041d180 at 0041d199
;   core_colonel.cpp_CColonel_renderOpaque_FUN_004404a0 at 004404a5
;   core_gabriela.cpp_CGabriella_renderOpaque_FUN_004d6140 at 004d614a
;   core_gargoyle.cpp_CGargoyle_renderOpaque_FUN_004e53f0 at 004e5443
;   core_haystack.cpp_CHaystack_renderOpaque_FUN_004f1b60 at 004f1b65
;   core_hostage.cpp_CHostage_renderOpaque_FUN_004f4b40 at 004f4b86
;   core_icepick.cpp_CIcePick_renderOpaque_FUN_004f95a0 at 004f95a5
;   core_scat.cpp_CScat_renderOpaque_FUN_00557df0 at 00557df9
;   core_stranger.cpp_CStranger_renderOpaque_FUN_005c3150 at 005c3166
;   core_svetlana.cpp_CSvetlana_renderOpaque_FUN_005d9bc0 at 005d9bf4
;   ... and 2 more
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   int INT_02f43978
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0
;   core_motion.cpp_CMotionController_render_FUN_0052e700
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a2c0
        ;   Label: core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
    PUSH EBP                            ; 0042a2c1
    SUB ESP,0x18                        ; 0042a2c2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0042a2c5
    MOV EDX,dword ptr [0x006703ec]      ; 0042a2c9 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0042a2cf | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00 ; 0042a2d0
        ;   XREF to: 0048ce00 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042a2d5
    TEST EAX,EAX                        ; 0042a2d8
    JZ 0x0042a379                       ; 0042a2da
        ;   XREF to: 0042a379 (CONDITIONAL_JUMP)  ; LAB_0042a379
    CMP dword ptr [EBX + 0x240c],0x0    ; 0042a2e0
        ;   Label: LAB_0042a2e0
    JNZ 0x0042a384                      ; 0042a2e7
        ;   XREF to: 0042a384 (CONDITIONAL_JUMP)  ; LAB_0042a384
    PUSH EDI                            ; 0042a2ed
    PUSH ESI                            ; 0042a2ee
    PUSH EBX                            ; 0042a2ef
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0042a2f0
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0042a2f5
    LEA EDX,[ESP + 0x8]                 ; 0042a2f8
    PUSH EDX                            ; 0042a2fc
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042a2fd
    PUSH EBX                            ; 0042a303
    CALL dword ptr [EAX + 0x14]         ; 0042a304
    ADD ESP,0x8                         ; 0042a307
    PUSH EAX                            ; 0042a30a
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0042a30b
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0042a310
    MOV ESI,EAX                         ; 0042a313
    TEST EAX,EAX                        ; 0042a315
    JZ 0x0042a366                       ; 0042a317
        ;   XREF to: 0042a366 (CONDITIONAL_JUMP)  ; LAB_0042a366
    PUSH EBX                            ; 0042a319
    MOV dword ptr [EBX + 0x2620],0x1    ; 0042a31a
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0 ; 0042a324
        ;   XREF to: 00429aa0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0(CCharacter * this_ptr)
    MOV EDI,dword ptr [0x02f43978]      ; 0042a329 | INT_02f43978
    ADD ESP,0x4                         ; 0042a32f
    TEST EDI,EDI                        ; 0042a332
    JZ 0x0042a366                       ; 0042a334
        ;   XREF to: 0042a366 (CONDITIONAL_JUMP)  ; LAB_0042a366
    MOV EBP,dword ptr [0x006703ec]      ; 0042a336 | g_CDemonRendererPtr2
    PUSH EBP                            ; 0042a33c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0042a33d
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042a342
    TEST EAX,EAX                        ; 0042a345
    JNZ 0x0042a366                      ; 0042a347
        ;   XREF to: 0042a366 (CONDITIONAL_JUMP)  ; LAB_0042a366
    PUSH EBX                            ; 0042a349
    LEA EAX,[EBX + 0x158]               ; 0042a34a
    PUSH EAX                            ; 0042a350
    CALL core_motion.cpp_CMotionController_render_FUN_0052e700 ; 0042a351
        ;   XREF to: 0052e700 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_0052e700(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0042a356
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042a359
    PUSH EBX                            ; 0042a35f
    CALL dword ptr [EAX + 0x50]         ; 0042a360
    ADD ESP,0x4                         ; 0042a363
    PUSH EBX                            ; 0042a366
        ;   Label: LAB_0042a366
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0042a367
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042a36c
    MOV EAX,ESI                         ; 0042a36f
    POP ESI                             ; 0042a371
    POP EDI                             ; 0042a372
    ADD ESP,0x18                        ; 0042a373
    POP EBP                             ; 0042a376
    POP EBX                             ; 0042a377
    RET                                 ; 0042a378
    MOV dword ptr [EBX + 0x2620],EAX    ; 0042a379
        ;   Label: LAB_0042a379
    JMP 0x0042a2e0                      ; 0042a37f
        ;   XREF to: 0042a2e0 (UNCONDITIONAL_JUMP)  ; LAB_0042a2e0
    XOR EAX,EAX                         ; 0042a384
        ;   Label: LAB_0042a384
    ADD ESP,0x18                        ; 0042a386
    POP EBP                             ; 0042a389
    POP EBX                             ; 0042a38a
    RET                                 ; 0042a38b


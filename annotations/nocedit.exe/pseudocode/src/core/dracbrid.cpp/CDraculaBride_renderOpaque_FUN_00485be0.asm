; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0(CDraculaBride * this_ptr)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x2c]:1  local_2c
;
; Referenced Globals:
;   double DOUBLE_00621b16 = 0.5
;   undefined4 DAT_0065cd88
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_02f43978
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_charactr.cpp_CCharacter_FUN_00429aa0
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

    PUSH EBX                            ; 00485be0
        ;   Label: core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0
    PUSH ESI                            ; 00485be1
    PUSH EDI                            ; 00485be2
    PUSH EBP                            ; 00485be3
    MOV EBP,ESP                         ; 00485be4
    SUB ESP,0x24                        ; 00485be6
    AND ESP,0xfffffff8                  ; 00485be9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00485bec
    MOV EDX,dword ptr [0x006703ec]      ; 00485bef | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 00485bf5 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00 ; 00485bf6 | int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer * this_ptr)
        ;   XREF to: 0048ce00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00485bfb
    MOV ESI,EAX                         ; 00485bfe
    TEST EAX,EAX                        ; 00485c00
    JZ 0x00485c16                       ; 00485c02 | LAB_00485c16
        ;   XREF to: 00485c16 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbf48],0x2    ; 00485c04
        ;   Label: LAB_00485c04
    JNZ 0x00485c1e                      ; 00485c0b | LAB_00485c1e
        ;   XREF to: 00485c1e (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00485c0d
        ;   Label: LAB_00485c0d
    MOV ESP,EBP                         ; 00485c0f
    POP EBP                             ; 00485c11
    POP EDI                             ; 00485c12
    POP ESI                             ; 00485c13
    POP EBX                             ; 00485c14
    RET                                 ; 00485c15
    MOV dword ptr [EBX + 0x2620],EAX    ; 00485c16
        ;   Label: LAB_00485c16
    JMP 0x00485c04                      ; 00485c1c | LAB_00485c04
        ;   XREF to: 00485c04 (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x006703ec]      ; 00485c1e | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_00485c1e
    PUSH EDI                            ; 00485c24 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00485c25 | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00485c2a
    TEST EAX,EAX                        ; 00485c2d
    JZ 0x00485c3a                       ; 00485c2f | LAB_00485c3a
        ;   XREF to: 00485c3a (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbf48],0x0    ; 00485c31
    JNZ 0x00485c0d                      ; 00485c38 | LAB_00485c0d
        ;   XREF to: 00485c0d (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 00485c3a
        ;   Label: LAB_00485c3a
    JNZ 0x00485c0d                      ; 00485c3c | LAB_00485c0d
        ;   XREF to: 00485c0d (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x240c],0x0    ; 00485c3e
    JNZ 0x00485c0d                      ; 00485c45 | LAB_00485c0d
        ;   XREF to: 00485c0d (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00485c47
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00485c48 | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00485c4d
    LEA EDX,[ESP + 0xc]                 ; 00485c50
    PUSH EDX                            ; 00485c54
    MOV EAX,dword ptr [EBX + 0x154]     ; 00485c55
    PUSH EBX                            ; 00485c5b
    CALL dword ptr [EAX + 0x14]         ; 00485c5c
    ADD ESP,0x8                         ; 00485c5f
    PUSH EAX                            ; 00485c62
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00485c63 | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00485c68
    MOV ESI,EAX                         ; 00485c6b
    TEST EAX,EAX                        ; 00485c6d
    JZ 0x00485cc7                       ; 00485c6f | LAB_00485cc7
        ;   XREF to: 00485cc7 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0xbf48]    ; 00485c71
    MOV dword ptr [EBX + 0x2620],0x1    ; 00485c77
    TEST ECX,ECX                        ; 00485c81
    JNZ 0x00485ce4                      ; 00485c83 | LAB_00485ce4
        ;   XREF to: 00485ce4 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xbfe4],0x0    ; 00485c85
    JZ 0x00485cd9                       ; 00485c8c | LAB_00485cd9
        ;   XREF to: 00485cd9 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02f43978],0x0      ; 00485c8e | undefined4 DAT_02f43978
        ;   Label: LAB_00485c8e
    JZ 0x00485cc7                       ; 00485c95 | LAB_00485cc7
        ;   XREF to: 00485cc7 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x006703ec]      ; 00485c97 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 00485c9d | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00485c9e | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00485ca3
    TEST EAX,EAX                        ; 00485ca6
    JNZ 0x00485cc7                      ; 00485ca8 | LAB_00485cc7
        ;   XREF to: 00485cc7 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00485caa
    LEA EAX,[EBX + 0x158]               ; 00485cab
    PUSH EAX                            ; 00485cb1
    CALL core_motion.cpp_CMotionController_render_FUN_0052e700 ; 00485cb2 | void core_motion.cpp_CMotionController_render_FUN_0052e700(CMotionController * this_ptr, CDemonActor * actor)
        ;   XREF to: 0052e700 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00485cb7
    MOV EAX,dword ptr [EBX + 0x154]     ; 00485cba
    PUSH EBX                            ; 00485cc0
    CALL dword ptr [EAX + 0x50]         ; 00485cc1
    ADD ESP,0x4                         ; 00485cc4
    PUSH EBX                            ; 00485cc7
        ;   Label: LAB_00485cc7
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00485cc8 | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00485ccd
    MOV EAX,ESI                         ; 00485cd0
    MOV ESP,EBP                         ; 00485cd2
    POP EBP                             ; 00485cd4
    POP EDI                             ; 00485cd5
    POP ESI                             ; 00485cd6
    POP EBX                             ; 00485cd7
    RET                                 ; 00485cd8
    PUSH EBX                            ; 00485cd9
        ;   Label: LAB_00485cd9
    CALL core_charactr.cpp_CCharacter_FUN_00429aa0 ; 00485cda | void core_charactr.cpp_CCharacter_FUN_00429aa0(CCharacter * this_ptr)
        ;   XREF to: 00429aa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00485cdf
    JMP 0x00485c8e                      ; 00485ce2 | LAB_00485c8e
        ;   XREF to: 00485c8e (UNCONDITIONAL_JUMP)
    CMP ECX,0x1                         ; 00485ce4
        ;   Label: LAB_00485ce4
    JNZ 0x00485d88                      ; 00485ce7 | LAB_00485d88
        ;   XREF to: 00485d88 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbf4c]        ; 00485ced
    FLD1                                ; 00485cf3
    FSUBRP                              ; 00485cf5
    FDIV float ptr [0x0065cd88]         ; 00485cf7 | undefined4 DAT_0065cd88
    FSTP float ptr [ESP + 0x8]          ; 00485cfd
    FLD float ptr [ESP + 0x8]           ; 00485d01
        ;   Label: LAB_00485d01
    FLDZ                                ; 00485d05
    FXCH                                ; 00485d07
    FSTP double ptr [ESP]               ; 00485d09
    FCOMP double ptr [ESP]              ; 00485d0c
    FNSTSW AX                           ; 00485d0f
    SAHF                                ; 00485d11
    JNC 0x00485c8e                      ; 00485d12 | LAB_00485c8e
        ;   XREF to: 00485c8e (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00485d18
    MOV EDX,dword ptr [0x006703ec]      ; 00485d1a | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 00485d20 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 00485d21 | void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00485d26
    MOV ECX,dword ptr [0x006703ec]      ; 00485d29 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH dword ptr [ESP + 0x8]          ; 00485d2f
    PUSH ECX                            ; 00485d33 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70 ; 00485d34 | void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70(CDemonRenderer * this_ptr, float render_alpha)
        ;   XREF to: 0048ca70 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00485d39
    PUSH 0x1                            ; 00485d3c
    MOV EDI,dword ptr [0x006703ec]      ; 00485d3e | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 00485d44 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0 ; 00485d45 | void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(CDemonRenderer * this_ptr, int enable_advanced_mode)
        ;   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00485d4a
    LEA EDX,[EBX + 0x158]               ; 00485d4d
    FLD double ptr [ESP]                ; 00485d53
    FCOMP double ptr [0x00621b16]       ; 00485d56 | double DOUBLE_00621b16
    FNSTSW AX                           ; 00485d5c
    SAHF                                ; 00485d5e
    JBE 0x00485db6                      ; 00485d5f | LAB_00485db6
        ;   XREF to: 00485db6 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00485d61
    PUSH 0x1                            ; 00485d63
    PUSH 0x2e7                          ; 00485d65
    PUSH -0x1                           ; 00485d6a
        ;   Label: LAB_00485d6a
    PUSH EDX                            ; 00485d6c
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 ; 00485d6d | void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
        ;   XREF to: 005a0150 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00485d72
    MOV EAX,[0x006703ec]                ; 00485d75 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 00485d7a | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 ; 00485d7b | void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(CDemonRenderer * this_ptr)
        ;   XREF to: 0048da80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00485d80
    JMP 0x00485c8e                      ; 00485d83 | LAB_00485c8e
        ;   XREF to: 00485c8e (UNCONDITIONAL_JUMP)
    FLD float ptr [EBX + 0xbf4c]        ; 00485d88
        ;   Label: LAB_00485d88
    FSUBR double ptr [0x00621b16]       ; 00485d8e | double DOUBLE_00621b16
    FDIV float ptr [0x0065cd88]         ; 00485d94 | undefined4 DAT_0065cd88
    FST float ptr [ESP + 0x8]           ; 00485d9a
    FLDZ                                ; 00485d9e
    FCOMPP                              ; 00485da0
    FNSTSW AX                           ; 00485da2
    SAHF                                ; 00485da4
    JBE 0x00485d01                      ; 00485da5 | LAB_00485d01
        ;   XREF to: 00485d01 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00485dab
    MOV dword ptr [ESP + 0x8],EAX       ; 00485dad
    JMP 0x00485d01                      ; 00485db1 | LAB_00485d01
        ;   XREF to: 00485d01 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 00485db6
        ;   Label: LAB_00485db6
    PUSH 0x1                            ; 00485db8
    PUSH 0x267                          ; 00485dba
    JMP 0x00485d6a                      ; 00485dbf | LAB_00485d6a
        ;   XREF to: 00485d6a (UNCONDITIONAL_JUMP)


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_00413ae0(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0x40]:24  local_40
; CVector3i        Stack[-0x28]:12  local_28
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   double DOUBLE_00615091 = 65000
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   float FLOAT_008224dc
;   CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance
;   CDemonRenderer g_CDemonRendererInstance
;   int INT_02f43978
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_render_FUN_0052e700
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
;   crt_math.c_round_FUN_005fe6b0
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413ae0
        ;   Label: core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0
    PUSH ESI                            ; 00413ae1
    PUSH EDI                            ; 00413ae2
    PUSH EBP                            ; 00413ae3
    MOV EBP,ESP                         ; 00413ae4
    SUB ESP,0x34                        ; 00413ae6
    AND ESP,0xfffffff8                  ; 00413ae9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00413aec
    CMP dword ptr [EBX + 0x1fccc],0x0   ; 00413aef
    JNZ 0x00413b05                      ; 00413af6
        ;   XREF to: 00413b05 (CONDITIONAL_JUMP)  ; LAB_00413b05
    CMP dword ptr [EBX + 0xbe28],0x2    ; 00413af8
    JZ 0x00413c99                       ; 00413aff
        ;   XREF to: 00413c99 (CONDITIONAL_JUMP)  ; LAB_00413c99
    LEA EDI,[EBX + 0x158]               ; 00413b05
        ;   Label: LAB_00413b05
    PUSH EDI                            ; 00413b0b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00413b0c
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00413b11
    MOV ESI,dword ptr [EAX + 0x24]      ; 00413b14
    MOV EAX,dword ptr [EDI + 0x8]       ; 00413b17
    PUSH EDI                            ; 00413b1a
    MOV dword ptr [ESP + 0x30],EAX      ; 00413b1b
    MOV dword ptr [ESP + 0x8],EAX       ; 00413b1f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00413b23
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00413b28
    FILD dword ptr [EAX + 0x64]         ; 00413b2b
    FSTP float ptr [ESP]                ; 00413b2e
    CMP ESI,0x6                         ; 00413b31
    JNC 0x00413cb8                      ; 00413b34
        ;   XREF to: 00413cb8 (CONDITIONAL_JUMP)  ; LAB_00413cb8
    CMP ESI,0x5                         ; 00413b3a
    JNZ 0x00413cc3                      ; 00413b3d
        ;   XREF to: 00413cc3 (CONDITIONAL_JUMP)  ; LAB_00413cc3
    FLD float ptr [ESP + 0x4]           ; 00413b43
        ;   Label: LAB_00413b43
    FMUL double ptr [0x00615091]        ; 00413b47 | DOUBLE_00615091
    FDIV float ptr [ESP]                ; 00413b4d
    CALL crt_math.c_round_FUN_005fe6b0  ; 00413b50
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
        ;   Label: LAB_00413b50
    FISTP dword ptr [ESP + 0x30]        ; 00413b55
    CMP dword ptr [EBX + 0x1fcd0],0x0   ; 00413b59
        ;   Label: LAB_00413b59
    JZ 0x00413bd7                       ; 00413b60
        ;   XREF to: 00413bd7 (CONDITIONAL_JUMP)  ; LAB_00413bd7
    MOV EDX,dword ptr [ESP + 0x30]      ; 00413b62
    ADD EDX,EDX                         ; 00413b66
    MOV ESI,0x3                         ; 00413b68
    MOV EAX,EDX                         ; 00413b6d
    SAR EDX,0x1f                        ; 00413b6f
    IDIV ESI                            ; 00413b72
    PUSH EAX                            ; 00413b74
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 00413b75
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 00413b7a
    LEA EAX,[EBX + 0x20]                ; 00413b7d
    PUSH EAX                            ; 00413b80
    MOV EAX,[0x006703ec]                ; 00413b81 | g_CDemonRendererPtr2
    PUSH EAX                            ; 00413b86 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00413b87
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00413b8c
    XOR EDX,EDX                         ; 00413b8f
    MOV EAX,[0x008224dc]                ; 00413b91 | FLOAT_008224dc
    PUSH EDX                            ; 00413b96
    MOV dword ptr [ESP + 0x28],EAX      ; 00413b97
    LEA EAX,[ESP + 0x24]                ; 00413b9b
    PUSH EAX                            ; 00413b9f
    MOV ESI,dword ptr [0x006703ec]      ; 00413ba0 | g_CDemonRendererPtr2
    PUSH ESI                            ; 00413ba6 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x2c],EDX      ; 00413ba7
    MOV dword ptr [ESP + 0x34],EDX      ; 00413bab
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00413baf
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00413bb4
    PUSH 0x23                           ; 00413bb7
    PUSH 0x0                            ; 00413bb9
    PUSH 0x82251c                       ; 00413bbb | g_CKeyFramedModelInstanceInstance
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00413bc0
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00413bc5
    MOV EDI,dword ptr [0x006703ec]      ; 00413bc8 | g_CDemonRendererPtr2
    PUSH EDI                            ; 00413bce | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 00413bcf
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    PUSH EBX                            ; 00413bd7
        ;   Label: LAB_00413bd7
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00413bd8
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00413bdd
    LEA EAX,[ESP + 0x8]                 ; 00413be0
    PUSH EAX                            ; 00413be4
    MOV EDX,dword ptr [EBX + 0x154]     ; 00413be5
    PUSH EBX                            ; 00413beb
    CALL dword ptr [EDX + 0x14]         ; 00413bec
    ADD ESP,0x8                         ; 00413bef
    PUSH EAX                            ; 00413bf2
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00413bf3
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00413bf8
    MOV EDI,EAX                         ; 00413bfb
    TEST EAX,EAX                        ; 00413bfd
    JZ 0x00413c87                       ; 00413bff
        ;   XREF to: 00413c87 (CONDITIONAL_JUMP)  ; LAB_00413c87
    PUSH 0x1                            ; 00413c05
    MOV EAX,[0x006703ec]                ; 00413c07 | g_CDemonRendererPtr2
    PUSH EAX                            ; 00413c0c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 00413c0d
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00413c12
    MOV EDX,dword ptr [ESP + 0x30]      ; 00413c15
    PUSH EDX                            ; 00413c19
    MOV ECX,dword ptr [0x006703ec]      ; 00413c1a | g_CDemonRendererPtr2
    PUSH ECX                            ; 00413c20 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 00413c21
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00413c26
    PUSH 0x1                            ; 00413c29
    MOV ESI,dword ptr [0x006703ec]      ; 00413c2b | g_CDemonRendererPtr2
    PUSH ESI                            ; 00413c31 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0 ; 00413c32
        ;   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 00413c37
    PUSH 0x0                            ; 00413c3a
    PUSH 0x1                            ; 00413c3c
    PUSH 0x2e7                          ; 00413c3e
    PUSH -0x1                           ; 00413c43
    LEA ESI,[EBX + 0x158]               ; 00413c45
    PUSH ESI                            ; 00413c4b
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 ; 00413c4c
        ;   XREF to: 005a0150 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00413c51
    MOV EAX,[0x006703ec]                ; 00413c54 | g_CDemonRendererPtr2
    PUSH EAX                            ; 00413c59 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 ; 00413c5a
        ;   XREF to: 0048da80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(CDemonRenderer * this_ptr)
    MOV EDX,dword ptr [0x02f43978]      ; 00413c5f | INT_02f43978
    ADD ESP,0x4                         ; 00413c65
    TEST EDX,EDX                        ; 00413c68
    JZ 0x00413c76                       ; 00413c6a
        ;   XREF to: 00413c76 (CONDITIONAL_JUMP)  ; LAB_00413c76
    PUSH EBX                            ; 00413c6c
    PUSH ESI                            ; 00413c6d
    CALL core_motion.cpp_CMotionController_render_FUN_0052e700 ; 00413c6e
        ;   XREF to: 0052e700 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_0052e700(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00413c73
    PUSH 0x0                            ; 00413c76
        ;   Label: LAB_00413c76
    MOV ECX,dword ptr [0x006703ec]      ; 00413c78 | g_CDemonRendererPtr2
    PUSH ECX                            ; 00413c7e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 00413c7f
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00413c84
    PUSH EBX                            ; 00413c87
        ;   Label: LAB_00413c87
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 00413c88
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00413c8d
    MOV EAX,EDI                         ; 00413c90
    MOV ESP,EBP                         ; 00413c92
    POP EBP                             ; 00413c94
    POP EDI                             ; 00413c95
    POP ESI                             ; 00413c96
    POP EBX                             ; 00413c97
    RET                                 ; 00413c98
    XOR EAX,EAX                         ; 00413c99
        ;   Label: LAB_00413c99
    MOV ESP,EBP                         ; 00413c9b
    POP EBP                             ; 00413c9d
    POP EDI                             ; 00413c9e
    POP ESI                             ; 00413c9f
    POP EBX                             ; 00413ca0
    RET                                 ; 00413ca1
    FLD float ptr [ESP]                 ; 00413ca2
        ;   Label: LAB_00413ca2
    FLD ST0                             ; 00413ca5
    FSUB float ptr [ESP + 0x2c]         ; 00413ca7
    FMUL double ptr [0x00615091]        ; 00413cab | DOUBLE_00615091
    FDIVRP                              ; 00413cb1
    JMP 0x00413b50                      ; 00413cb3
        ;   XREF to: 00413b50 (UNCONDITIONAL_JUMP)  ; LAB_00413b50
    JBE 0x00413b43                      ; 00413cb8
        ;   XREF to: 00413b43 (CONDITIONAL_JUMP)  ; LAB_00413b43
        ;   Label: LAB_00413cb8
    CMP ESI,0x7                         ; 00413cbe
    JZ 0x00413ca2                       ; 00413cc1
        ;   XREF to: 00413ca2 (CONDITIONAL_JUMP)  ; LAB_00413ca2
    MOV dword ptr [ESP + 0x30],0xfde8   ; 00413cc3
        ;   Label: LAB_00413cc3
    JMP 0x00413b59                      ; 00413ccb
        ;   XREF to: 00413b59 (UNCONDITIONAL_JUMP)  ; LAB_00413b59


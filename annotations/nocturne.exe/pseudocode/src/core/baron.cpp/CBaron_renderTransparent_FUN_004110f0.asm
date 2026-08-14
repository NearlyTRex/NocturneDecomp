; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_baron_cpp_CBaron_renderTransparent_FUN_004110f0(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   double DOUBLE_005786c0 = 65000
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_0076432c
;   undefined4 DAT_0076436c
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cd4318
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_render_FUN_004e22b0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
;   crt_math.c_round_FUN_00563a30
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004110f0
        ;   Label: core_baron.cpp_CBaron_renderTransparent_FUN_004110f0
    PUSH ESI                            ; 004110f1
    PUSH EDI                            ; 004110f2
    PUSH EBP                            ; 004110f3
    MOV EBP,ESP                         ; 004110f4
    SUB ESP,0x34                        ; 004110f6
    AND ESP,0xfffffff8                  ; 004110f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004110fc
    CMP dword ptr [EBX + 0x1fb34],0x0   ; 004110ff
    JNZ 0x00411115                      ; 00411106
        ;   XREF to: 00411115 (CONDITIONAL_JUMP)  ; LAB_00411115
    CMP dword ptr [EBX + 0xbc90],0x2    ; 00411108
    JZ 0x004112ab                       ; 0041110f
        ;   XREF to: 004112ab (CONDITIONAL_JUMP)  ; LAB_004112ab
    LEA EDI,[EBX + 0x150]               ; 00411115
        ;   Label: LAB_00411115
    PUSH EDI                            ; 0041111b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0041111c
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00411121
    MOV ESI,dword ptr [EAX + 0x24]      ; 00411124
    MOV EAX,dword ptr [EDI + 0x8]       ; 00411127
    PUSH EDI                            ; 0041112a
    MOV dword ptr [ESP + 0x30],EAX      ; 0041112b
    MOV dword ptr [ESP + 0x8],EAX       ; 0041112f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00411133
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00411138
    FILD dword ptr [EAX + 0x64]         ; 0041113b
    FSTP float ptr [ESP]                ; 0041113e
    CMP ESI,0x6                         ; 00411141
    JNC 0x004112ca                      ; 00411144
        ;   XREF to: 004112ca (CONDITIONAL_JUMP)  ; LAB_004112ca
    CMP ESI,0x5                         ; 0041114a
    JNZ 0x004112d5                      ; 0041114d
        ;   XREF to: 004112d5 (CONDITIONAL_JUMP)  ; LAB_004112d5
    FLD float ptr [ESP + 0x4]           ; 00411153
        ;   Label: LAB_00411153
    FMUL double ptr [0x005786c0]        ; 00411157 | DOUBLE_005786c0
    FDIV float ptr [ESP]                ; 0041115d
    CALL crt_math.c_round_FUN_00563a30  ; 00411160
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
        ;   Label: LAB_00411160
    FISTP dword ptr [ESP + 0x30]        ; 00411165
    CMP dword ptr [EBX + 0x1fb38],0x0   ; 00411169
        ;   Label: LAB_00411169
    JZ 0x004111e7                       ; 00411170
        ;   XREF to: 004111e7 (CONDITIONAL_JUMP)  ; LAB_004111e7
    MOV EDX,dword ptr [ESP + 0x30]      ; 00411172
    ADD EDX,EDX                         ; 00411176
    MOV ESI,0x3                         ; 00411178
    MOV EAX,EDX                         ; 0041117d
    SAR EDX,0x1f                        ; 0041117f
    IDIV ESI                            ; 00411182
    PUSH EAX                            ; 00411184
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 00411185
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    ADD ESP,0x4                         ; 0041118a
    LEA EAX,[EBX + 0x20]                ; 0041118d
    PUSH EAX                            ; 00411190
    MOV EAX,[0x005ae704]                ; 00411191 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 00411196 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00411197
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0041119c
    XOR EDX,EDX                         ; 0041119f
    MOV EAX,[0x0076432c]                ; 004111a1 | DAT_0076432c
    PUSH EDX                            ; 004111a6
    MOV dword ptr [ESP + 0x28],EAX      ; 004111a7
    LEA EAX,[ESP + 0x24]                ; 004111ab
    PUSH EAX                            ; 004111af
    MOV ESI,dword ptr [0x005ae704]      ; 004111b0 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 004111b6 | DAT_01b4d738
    MOV dword ptr [ESP + 0x2c],EDX      ; 004111b7
    MOV dword ptr [ESP + 0x34],EDX      ; 004111bb
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004111bf
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 004111c4
    PUSH 0x23                           ; 004111c7
    PUSH 0x0                            ; 004111c9
    PUSH 0x76436c                       ; 004111cb | DAT_0076436c
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004111d0
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004111d5
    MOV EDI,dword ptr [0x005ae704]      ; 004111d8 | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 004111de | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004111df
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004111e4
    PUSH EBX                            ; 004111e7
        ;   Label: LAB_004111e7
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004111e8
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004111ed
    PUSH 0x0                            ; 004111f0
    LEA EAX,[ESP + 0xc]                 ; 004111f2
    PUSH EAX                            ; 004111f6
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004111f7
    PUSH EBX                            ; 004111fd
    CALL dword ptr [EDX + 0x14]         ; 004111fe
    ADD ESP,0x8                         ; 00411201
    PUSH EAX                            ; 00411204
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00411205
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0041120a
    MOV EDI,EAX                         ; 0041120d
    TEST EAX,EAX                        ; 0041120f
    JZ 0x00411299                       ; 00411211
        ;   XREF to: 00411299 (CONDITIONAL_JUMP)  ; LAB_00411299
    PUSH 0x1                            ; 00411217
    MOV EAX,[0x005ae704]                ; 00411219 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 0041121e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0041121f
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00411224
    MOV EDX,dword ptr [ESP + 0x30]      ; 00411227
    PUSH EDX                            ; 0041122b
    MOV ECX,dword ptr [0x005ae704]      ; 0041122c | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00411232 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00411233
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00411238
    PUSH 0x1                            ; 0041123b
    MOV ESI,dword ptr [0x005ae704]      ; 0041123d | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 00411243 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0 ; 00411244
        ;   XREF to: 004619f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 00411249
    PUSH 0x0                            ; 0041124c
    PUSH 0x1                            ; 0041124e
    PUSH 0x2e7                          ; 00411250
    PUSH -0x1                           ; 00411255
    LEA ESI,[EBX + 0x150]               ; 00411257
    PUSH ESI                            ; 0041125d
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0 ; 0041125e
        ;   XREF to: 0051d9d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00411263
    MOV EAX,[0x005ae704]                ; 00411266 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 0041126b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0 ; 0041126c
        ;   XREF to: 00461db0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(CDemonRenderer * this_ptr)
    MOV EDX,dword ptr [0x01cd4318]      ; 00411271 | DAT_01cd4318
    ADD ESP,0x4                         ; 00411277
    TEST EDX,EDX                        ; 0041127a
    JZ 0x00411288                       ; 0041127c
        ;   XREF to: 00411288 (CONDITIONAL_JUMP)  ; LAB_00411288
    PUSH EBX                            ; 0041127e
    PUSH ESI                            ; 0041127f
    CALL core_motion.cpp_CMotionController_render_FUN_004e22b0 ; 00411280
        ;   XREF to: 004e22b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_render_FUN_004e22b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00411285
    PUSH 0x0                            ; 00411288
        ;   Label: LAB_00411288
    MOV ECX,dword ptr [0x005ae704]      ; 0041128a | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 00411290 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00411291
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00411296
    PUSH EBX                            ; 00411299
        ;   Label: LAB_00411299
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0041129a
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041129f
    MOV EAX,EDI                         ; 004112a2
    MOV ESP,EBP                         ; 004112a4
    POP EBP                             ; 004112a6
    POP EDI                             ; 004112a7
    POP ESI                             ; 004112a8
    POP EBX                             ; 004112a9
    RET                                 ; 004112aa
    XOR EAX,EAX                         ; 004112ab
        ;   Label: LAB_004112ab
    MOV ESP,EBP                         ; 004112ad
    POP EBP                             ; 004112af
    POP EDI                             ; 004112b0
    POP ESI                             ; 004112b1
    POP EBX                             ; 004112b2
    RET                                 ; 004112b3
    FLD float ptr [ESP]                 ; 004112b4
        ;   Label: LAB_004112b4
    FLD ST0                             ; 004112b7
    FSUB float ptr [ESP + 0x2c]         ; 004112b9
    FMUL double ptr [0x005786c0]        ; 004112bd | DOUBLE_005786c0
    FDIVRP                              ; 004112c3
    JMP 0x00411160                      ; 004112c5
        ;   XREF to: 00411160 (UNCONDITIONAL_JUMP)  ; LAB_00411160
    JBE 0x00411153                      ; 004112ca
        ;   XREF to: 00411153 (CONDITIONAL_JUMP)  ; LAB_00411153
        ;   Label: LAB_004112ca
    CMP ESI,0x7                         ; 004112d0
    JZ 0x004112b4                       ; 004112d3
        ;   XREF to: 004112b4 (CONDITIONAL_JUMP)  ; LAB_004112b4
    MOV dword ptr [ESP + 0x30],0xfde8   ; 004112d5
        ;   Label: LAB_004112d5
    JMP 0x00411169                      ; 004112dd
        ;   XREF to: 00411169 (UNCONDITIONAL_JUMP)  ; LAB_00411169


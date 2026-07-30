; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_vessel_cpp_CCryptVessel_renderOpaque_FUN_00550210(int param_1)
;
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
;
; Referenced Globals:
;   double DOUBLE_005974a3 = 65535
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550210
        ;   Label: core_vessel.cpp_CCryptVessel_renderOpaque_FUN_00550210
    PUSH ESI                            ; 00550211
    PUSH EDI                            ; 00550212
    PUSH EBP                            ; 00550213
    MOV EBP,ESP                         ; 00550214
    SUB ESP,0x24                        ; 00550216
    AND ESP,0xfffffff8                  ; 00550219
    MOV EBX,dword ptr [EBP + 0x14]      ; 0055021c
    LEA EAX,[EBX + 0x20]                ; 0055021f
    PUSH EAX                            ; 00550222
    MOV EDX,dword ptr [0x005ae704]      ; 00550223 | DAT_005ae704
    PUSH EDX                            ; 00550229 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0055022a
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0055022f
    PUSH 0x0                            ; 00550232
    LEA ESI,[EBX + 0x30]                ; 00550234
    PUSH ESI                            ; 00550237
    MOV ECX,dword ptr [0x005ae704]      ; 00550238 | DAT_005ae704
    PUSH ECX                            ; 0055023e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0055023f
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00550244
    PUSH 0x0                            ; 00550247
    LEA EAX,[ESP + 0xc]                 ; 00550249
    PUSH EAX                            ; 0055024d
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0055024e
    PUSH EBX                            ; 00550254
    CALL dword ptr [EDX + 0x14]         ; 00550255
    ADD ESP,0x8                         ; 00550258
    PUSH EAX                            ; 0055025b
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0055025c
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 00550261
    MOV EDI,dword ptr [0x005ae704]      ; 00550264 | DAT_005ae704
    PUSH EDI                            ; 0055026a | DAT_01b4d738
    MOV dword ptr [EBX + 0x7d8],EAX     ; 0055026b
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00550271
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    MOV EAX,dword ptr [EBX + 0x7d8]     ; 00550276
    ADD ESP,0x4                         ; 0055027c
    TEST EAX,EAX                        ; 0055027f
    JNZ 0x00550290                      ; 00550281
        ;   XREF to: 00550290 (CONDITIONAL_JUMP)  ; LAB_00550290
    MOV EAX,dword ptr [EBX + 0x7d8]     ; 00550283
    MOV ESP,EBP                         ; 00550289
    POP EBP                             ; 0055028b
    POP EDI                             ; 0055028c
    POP ESI                             ; 0055028d
    POP EBX                             ; 0055028e
    RET                                 ; 0055028f
    PUSH 0x0                            ; 00550290
        ;   Label: LAB_00550290
    PUSH ESI                            ; 00550292
    MOV EDX,dword ptr [0x005ae704]      ; 00550293 | DAT_005ae704
    PUSH EDX                            ; 00550299 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0055029a
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0055029f
    PUSH 0xffff                         ; 005502a2
    MOV ECX,dword ptr [0x005ae704]      ; 005502a7 | DAT_005ae704
    PUSH ECX                            ; 005502ad | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 005502ae
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    MOV ESI,dword ptr [EBX + 0x3b0]     ; 005502b3
    ADD ESP,0x8                         ; 005502b9
    CMP ESI,0x3                         ; 005502bc
    JZ 0x00550353                       ; 005502bf
        ;   XREF to: 00550353 (CONDITIONAL_JUMP)  ; LAB_00550353
    FLDZ                                ; 005502c5
    FLD float ptr [EBX + 0x3b4]         ; 005502c7
    FSTP double ptr [ESP]               ; 005502cd
    FCOMP double ptr [ESP]              ; 005502d0
    FNSTSW AX                           ; 005502d3
    SAHF                                ; 005502d5
    JNC 0x00550353                      ; 005502d6
        ;   XREF to: 00550353 (CONDITIONAL_JUMP)  ; LAB_00550353
    FLD double ptr [0x005974a3]         ; 005502d8 | DOUBLE_005974a3
    FLD double ptr [ESP]                ; 005502de
    FMUL ST1                            ; 005502e1
    FSUBP                               ; 005502e3
    CALL crt_math.c_round_FUN_00563a30  ; 005502e5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x20]        ; 005502ea
    MOV EDI,dword ptr [ESP + 0x20]      ; 005502ee
    PUSH EDI                            ; 005502f2
    MOV EAX,[0x005ae704]                ; 005502f3 | DAT_005ae704
    PUSH EAX                            ; 005502f8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 005502f9
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005502fe
    PUSH 0x0                            ; 00550301
    MOV EDX,dword ptr [0x005ae704]      ; 00550303 | DAT_005ae704
    PUSH EDX                            ; 00550309 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0 ; 0055030a
        ;   XREF to: 004619f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0055030f
    PUSH 0x2e7                          ; 00550312
    LEA EAX,[EBX + 0x150]               ; 00550317
    PUSH 0x0                            ; 0055031d
    PUSH EAX                            ; 0055031f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00550320
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00550325
    MOV ECX,dword ptr [0x005ae704]      ; 00550328 | DAT_005ae704
    PUSH ECX                            ; 0055032e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0 ; 0055032f
        ;   XREF to: 00461db0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00550334
    MOV ESI,dword ptr [0x005ae704]      ; 00550337 | DAT_005ae704
        ;   Label: LAB_00550337
    PUSH ESI                            ; 0055033d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0055033e
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00550343
    MOV EAX,dword ptr [EBX + 0x7d8]     ; 00550346
    MOV ESP,EBP                         ; 0055034c
    POP EBP                             ; 0055034e
    POP EDI                             ; 0055034f
    POP ESI                             ; 00550350
    POP EBX                             ; 00550351
    RET                                 ; 00550352
    PUSH -0x1                           ; 00550353
        ;   Label: LAB_00550353
    LEA EAX,[EBX + 0x150]               ; 00550355
    PUSH 0x0                            ; 0055035b
    PUSH EAX                            ; 0055035d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0055035e
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00550363
    JMP 0x00550337                      ; 00550366
        ;   XREF to: 00550337 (UNCONDITIONAL_JUMP)  ; LAB_00550337


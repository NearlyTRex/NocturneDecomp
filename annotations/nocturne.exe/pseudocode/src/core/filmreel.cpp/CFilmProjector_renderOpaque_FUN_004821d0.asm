; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_filmreel_cpp_CFilmProjector_renderOpaque_FUN_004821d0(CFilmProjector *this_ptr)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004821d0
        ;   Label: core_filmreel.cpp_CFilmProjector_renderOpaque_FUN_004821d0
    PUSH ESI                            ; 004821d1
    PUSH EBP                            ; 004821d2
    SUB ESP,0x30                        ; 004821d3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004821d6
    PUSH EBX                            ; 004821da
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004821db
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 004821e0
    PUSH 0x0                            ; 004821e3
    LEA EAX,[ESP + 0x4]                 ; 004821e5
    PUSH EAX                            ; 004821e9
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004821ea
    PUSH EBX                            ; 004821f0
    CALL dword ptr [ESI + 0x14]         ; 004821f1
    ADD ESP,0x8                         ; 004821f4
    PUSH EAX                            ; 004821f7
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004821f8
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 004821fd
    MOV ESI,EAX                         ; 00482200
    TEST EAX,EAX                        ; 00482202
    JNZ 0x00482218                      ; 00482204
        ;   XREF to: 00482218 (CONDITIONAL_JUMP)  ; LAB_00482218
    PUSH EBX                            ; 00482206
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00482207
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0048220c
    MOV EAX,ESI                         ; 0048220f
    ADD ESP,0x30                        ; 00482211
    POP EBP                             ; 00482214
    POP ESI                             ; 00482215
    POP EBX                             ; 00482216
    RET                                 ; 00482217
    PUSH EDI                            ; 00482218
        ;   Label: LAB_00482218
    XOR EDX,EDX                         ; 00482219
    MOV dword ptr [ESP + 0x28],EDX      ; 0048221b
    MOV EAX,dword ptr [EBX + 0x3d0]     ; 0048221f
    MOV dword ptr [ESP + 0x30],EAX      ; 00482225
    LEA EAX,[ESP + 0x1c]                ; 00482229
    MOV dword ptr [ESP + 0x2c],EDX      ; 0048222d
    PUSH EAX                            ; 00482231
    MOV dword ptr [ESP + 0x20],EDX      ; 00482232
    MOV dword ptr [ESP + 0x28],EDX      ; 00482236
    PUSH 0x2dd1184                      ; 0048223a | DAT_02dd1184
    MOV EDX,dword ptr [0x005ae704]      ; 0048223f | DAT_005ae704
    MOV EBP,0x40000000                  ; 00482245
    PUSH EDX                            ; 0048224a | DAT_01b4d738
    MOV dword ptr [ESP + 0x2c],EBP      ; 0048224b
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0048224f
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00482254
    PUSH 0x2dd1184                      ; 00482257 | DAT_02dd1184
    LEA EAX,[ESP + 0x2c]                ; 0048225c
    PUSH EAX                            ; 00482260
    MOV ECX,dword ptr [0x005ae704]      ; 00482261 | DAT_005ae704
    PUSH ECX                            ; 00482267 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00482268
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0048226d
    PUSH -0x1                           ; 00482270
    LEA EAX,[EBX + 0x1ec]               ; 00482272
    PUSH 0x0                            ; 00482278
    PUSH EAX                            ; 0048227a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0048227b
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00482280
    MOV EDI,dword ptr [0x005ae704]      ; 00482283 | DAT_005ae704
    PUSH EDI                            ; 00482289 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0048228a
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0048228f
    MOV EBP,dword ptr [0x005ae704]      ; 00482292 | DAT_005ae704
    PUSH EBP                            ; 00482298 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00482299
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0048229e
    POP EDI                             ; 004822a1
    PUSH EBX                            ; 004822a2
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004822a3
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004822a8
    MOV EAX,ESI                         ; 004822ab
    ADD ESP,0x30                        ; 004822ad
    POP EBP                             ; 004822b0
    POP ESI                             ; 004822b1
    POP EBX                             ; 004822b2
    RET                                 ; 004822b3


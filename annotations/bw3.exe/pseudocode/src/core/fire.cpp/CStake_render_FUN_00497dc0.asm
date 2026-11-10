; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_render_FUN_00497dc0(CStake *this_ptr)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004a1e90 at 004a1f1d
;   core_fire.cpp_CFireEffect_render_FUN_004a1ad0 at 004a1e7f
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_matrix.c_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497dc0
        ;   Label: core_fire.cpp_CStake_render_FUN_00497dc0
    PUSH ESI                            ; 00497dc1
    PUSH EDI                            ; 00497dc2
    PUSH EBP                            ; 00497dc3
    SUB ESP,0x18                        ; 00497dc4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00497dc7
    ADD EBP,0x4                         ; 00497dcb
    PUSH EBP                            ; 00497dce
    MOV EDX,dword ptr [0x005f2afc]      ; 00497dcf | DAT_005f2afc
    PUSH EDX                            ; 00497dd5 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 00497dd6
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00497ddb
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00497dde
    PUSH 0x0                            ; 00497de2
    ADD EBX,0x10                        ; 00497de4
    PUSH EBX                            ; 00497de7
    MOV ECX,dword ptr [0x005f2afc]      ; 00497de8 | DAT_005f2afc
    PUSH ECX                            ; 00497dee | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 00497def
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00497df4
    PUSH 0x1c73698                      ; 00497df7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00497dfc
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00497e01
    MOV EDI,ESP                         ; 00497e04
    LEA ESI,[EAX + 0x338]               ; 00497e06
    PUSH 0x0                            ; 00497e0c
    LEA EAX,[ESP + 0x4]                 ; 00497e0e
    MOV ECX,0x6                         ; 00497e12
    PUSH EAX                            ; 00497e17
    MOVSD.REP ES:EDI,ESI                ; 00497e18
    CALL core_box.cpp_FUN_0041daf0      ; 00497e1a
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 00497e1f
    TEST EAX,EAX                        ; 00497e22
    JNZ 0x00497e3d                      ; 00497e24
        ;   XREF to: 00497e3d (CONDITIONAL_JUMP)  ; LAB_00497e3d
    MOV ESI,dword ptr [0x005f2afc]      ; 00497e26 | DAT_005f2afc
        ;   Label: LAB_00497e26
    PUSH ESI                            ; 00497e2c | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00497e2d
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00497e32
    ADD ESP,0x18                        ; 00497e35
    POP EBP                             ; 00497e38
    POP EDI                             ; 00497e39
    POP ESI                             ; 00497e3a
    POP EBX                             ; 00497e3b
    RET                                 ; 00497e3c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00497e3d
        ;   Label: LAB_00497e3d
    ADD EAX,0x1c                        ; 00497e41
    PUSH EAX                            ; 00497e44
    LEA EAX,[ESP + 0x10]                ; 00497e45
    PUSH EAX                            ; 00497e49
    LEA EAX,[ESP + 0x8]                 ; 00497e4a
    PUSH EAX                            ; 00497e4e
    PUSH EBX                            ; 00497e4f
    PUSH EBP                            ; 00497e50
    MOV EBX,dword ptr [0x00603b28]      ; 00497e51 | g_CDemonSetPtr
    PUSH EBX                            ; 00497e57 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0 ; 00497e58
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 00497e5d
    PUSH -0x1                           ; 00497e60
    PUSH 0x0                            ; 00497e62
    PUSH 0x1c73698                      ; 00497e64
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 00497e69
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00497e6e
    JMP 0x00497e26                      ; 00497e71
        ;   XREF to: 00497e26 (UNCONDITIONAL_JUMP)  ; LAB_00497e26


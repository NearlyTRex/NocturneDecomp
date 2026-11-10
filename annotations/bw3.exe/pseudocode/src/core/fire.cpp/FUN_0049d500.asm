; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_fire_cpp_FUN_0049d500(int param_1)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004a1ad0 at 004a1d9e
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_matrix.c_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d500
        ;   Label: core_fire.cpp_FUN_0049d500
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049d501
    FLD float ptr [EBX + 0x3dc]         ; 0049d505
    FLDZ                                ; 0049d50b
    FCOMPP                              ; 0049d50d
    FNSTSW AX                           ; 0049d50f
    SAHF                                ; 0049d511
    JC 0x0049d521                       ; 0049d512
        ;   XREF to: 0049d521 (CONDITIONAL_JUMP)  ; LAB_0049d521
    POP EBX                             ; 0049d514
    LEA EAX,[EAX]                       ; 0049d515
    LEA EDX,[EDX]                       ; 0049d51b
    MOV EBX,EBX                         ; 0049d51e
    RET                                 ; 0049d520
    LEA EAX,[EBX + 0x180]               ; 0049d521
        ;   Label: LAB_0049d521
    PUSH EAX                            ; 0049d527
    MOV EDX,dword ptr [0x005f2afc]      ; 0049d528 | DAT_005f2afc
    PUSH EDX                            ; 0049d52e | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0049d52f
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049d534
    PUSH 0x0                            ; 0049d537
    LEA EAX,[EBX + 0x18c]               ; 0049d539
    PUSH EAX                            ; 0049d53f
    MOV ECX,dword ptr [0x005f2afc]      ; 0049d540 | DAT_005f2afc
    PUSH ECX                            ; 0049d546 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0049d547
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049d54c
    PUSH -0x1                           ; 0049d54f
    ADD EBX,0x4                         ; 0049d551
    PUSH 0x0                            ; 0049d554
    PUSH EBX                            ; 0049d556
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 0049d557
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0049d55c
    MOV EBX,dword ptr [0x005f2afc]      ; 0049d55f | DAT_005f2afc
    PUSH EBX                            ; 0049d565 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0049d566
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0049d56b
    POP EBX                             ; 0049d56e
    RET                                 ; 0049d56f


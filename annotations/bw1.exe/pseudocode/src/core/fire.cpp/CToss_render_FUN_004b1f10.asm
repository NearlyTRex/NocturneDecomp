; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CToss_render_FUN_004b1f10(CToss *this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b53ce
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_matrix.c_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1f10
        ;   Label: core_fire.cpp_CToss_render_FUN_004b1f10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b1f11
    FLD float ptr [EBX + 0x3dc]         ; 004b1f15
    FLDZ                                ; 004b1f1b
    FCOMPP                              ; 004b1f1d
    FNSTSW AX                           ; 004b1f1f
    SAHF                                ; 004b1f21
    JC 0x004b1f26                       ; 004b1f22
        ;   XREF to: 004b1f26 (CONDITIONAL_JUMP)  ; LAB_004b1f26
    POP EBX                             ; 004b1f24
    RET                                 ; 004b1f25
    LEA EAX,[EBX + 0x180]               ; 004b1f26
        ;   Label: LAB_004b1f26
    PUSH EAX                            ; 004b1f2c
    MOV EDX,dword ptr [0x00612560]      ; 004b1f2d | DAT_00612560
    PUSH EDX                            ; 004b1f33 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004b1f34
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004b1f39
    PUSH 0x0                            ; 004b1f3c
    LEA EAX,[EBX + 0x18c]               ; 004b1f3e
    PUSH EAX                            ; 004b1f44
    MOV ECX,dword ptr [0x00612560]      ; 004b1f45 | DAT_00612560
    PUSH ECX                            ; 004b1f4b | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004b1f4c
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004b1f51
    PUSH -0x1                           ; 004b1f54
    ADD EBX,0x4                         ; 004b1f56
    PUSH 0x0                            ; 004b1f59
    PUSH EBX                            ; 004b1f5b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004b1f5c
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004b1f61
    MOV EBX,dword ptr [0x00612560]      ; 004b1f64 | DAT_00612560
    PUSH EBX                            ; 004b1f6a | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004b1f6b
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b1f70
    POP EBX                             ; 004b1f73
    RET                                 ; 004b1f74


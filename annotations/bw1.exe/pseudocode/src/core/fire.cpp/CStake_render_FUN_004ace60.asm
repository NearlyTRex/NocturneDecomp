; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_render_FUN_004ace60(CStake *this_ptr)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[2]:
;   core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0 at 004b552d
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b5490
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_matrix.c_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ace60
        ;   Label: core_fire.cpp_CStake_render_FUN_004ace60
    PUSH ESI                            ; 004ace61
    PUSH EDI                            ; 004ace62
    PUSH EBP                            ; 004ace63
    SUB ESP,0x18                        ; 004ace64
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004ace67
    ADD EBP,0x4                         ; 004ace6b
    PUSH EBP                            ; 004ace6e
    MOV EDX,dword ptr [0x00612560]      ; 004ace6f | DAT_00612560
    PUSH EDX                            ; 004ace75 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004ace76
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004ace7b
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004ace7e
    PUSH 0x0                            ; 004ace82
    ADD EBX,0x10                        ; 004ace84
    PUSH EBX                            ; 004ace87
    MOV ECX,dword ptr [0x00612560]      ; 004ace88 | DAT_00612560
    PUSH ECX                            ; 004ace8e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004ace8f
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004ace94
    PUSH 0x1c570b8                      ; 004ace97
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004ace9c
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004acea1
    MOV EDI,ESP                         ; 004acea4
    LEA ESI,[EAX + 0x338]               ; 004acea6
    PUSH 0x0                            ; 004aceac
    LEA EAX,[ESP + 0x4]                 ; 004aceae
    MOV ECX,0x6                         ; 004aceb2
    PUSH EAX                            ; 004aceb7
    MOVSD.REP ES:EDI,ESI                ; 004aceb8
    CALL core_box.cpp_FUN_004207b0      ; 004aceba
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004acebf
    TEST EAX,EAX                        ; 004acec2
    JNZ 0x004acedd                      ; 004acec4
        ;   XREF to: 004acedd (CONDITIONAL_JUMP)  ; LAB_004acedd
    MOV ESI,dword ptr [0x00612560]      ; 004acec6 | DAT_00612560
        ;   Label: LAB_004acec6
    PUSH ESI                            ; 004acecc | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004acecd
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004aced2
    ADD ESP,0x18                        ; 004aced5
    POP EBP                             ; 004aced8
    POP EDI                             ; 004aced9
    POP ESI                             ; 004aceda
    POP EBX                             ; 004acedb
    RET                                 ; 004acedc
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004acedd
        ;   Label: LAB_004acedd
    ADD EAX,0x1c                        ; 004acee1
    PUSH EAX                            ; 004acee4
    LEA EAX,[ESP + 0x10]                ; 004acee5
    PUSH EAX                            ; 004acee9
    LEA EAX,[ESP + 0x8]                 ; 004aceea
    PUSH EAX                            ; 004aceee
    PUSH EBX                            ; 004aceef
    PUSH EBP                            ; 004acef0
    MOV EBX,dword ptr [0x00622c18]      ; 004acef1 | g_CDemonSetPtr
    PUSH EBX                            ; 004acef7 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30 ; 004acef8
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 004acefd
    PUSH -0x1                           ; 004acf00
    PUSH 0x0                            ; 004acf02
    PUSH 0x1c570b8                      ; 004acf04
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004acf09
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004acf0e
    JMP 0x004acec6                      ; 004acf11
        ;   XREF to: 004acec6 (UNCONDITIONAL_JUMP)  ; LAB_004acec6


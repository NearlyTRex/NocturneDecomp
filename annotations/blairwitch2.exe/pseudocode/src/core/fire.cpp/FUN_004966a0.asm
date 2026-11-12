; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004966a0(CVector3f *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004966a0
        ;   Label: core_fire.cpp_FUN_004966a0
    PUSH ESI                            ; 004966a1
    PUSH EDI                            ; 004966a2
    PUSH EBP                            ; 004966a3
    SUB ESP,0x18                        ; 004966a4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004966a7
    PUSH EBX                            ; 004966ab
    MOV EDX,dword ptr [0x0060b280]      ; 004966ac | DAT_0060b280
    PUSH EDX                            ; 004966b2 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 004966b3
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004966b8
    PUSH 0x0                            ; 004966bb
    LEA EAX,[EBX + 0x40]                ; 004966bd
    PUSH EAX                            ; 004966c0
    MOV ECX,dword ptr [0x0060b280]      ; 004966c1 | DAT_0060b280
    PUSH ECX                            ; 004966c7 | DAT_01ba5c50
    LEA EDI,[ESP + 0xc]                 ; 004966c8
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 004966cc
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004966d1
    MOV ECX,0x6                         ; 004966d4
    MOV ESI,dword ptr [EBX + 0x4c]      ; 004966d9
    PUSH 0x0                            ; 004966dc
    LEA EAX,[ESP + 0x4]                 ; 004966de
    MOV ESI,dword ptr [ESI + 0x350]     ; 004966e2
    PUSH EAX                            ; 004966e8
    MOVSD.REP ES:EDI,ESI                ; 004966e9
    CALL core_box.cpp_FUN_0041a840      ; 004966eb
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 004966f0
    TEST EAX,EAX                        ; 004966f3
    JNZ 0x0049670e                      ; 004966f5
        ;   XREF to: 0049670e (CONDITIONAL_JUMP)  ; LAB_0049670e
    MOV EBP,dword ptr [0x0060b280]      ; 004966f7 | DAT_0060b280
        ;   Label: LAB_004966f7
    PUSH EBP                            ; 004966fd | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 004966fe
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00496703
    ADD ESP,0x18                        ; 00496706
    POP EBP                             ; 00496709
    POP EDI                             ; 0049670a
    POP ESI                             ; 0049670b
    POP EBX                             ; 0049670c
    RET                                 ; 0049670d
    PUSH 0x0                            ; 0049670e
        ;   Label: LAB_0049670e
    LEA EAX,[ESP + 0x10]                ; 00496710
    PUSH EAX                            ; 00496714
    LEA EAX,[ESP + 0x8]                 ; 00496715
    PUSH EAX                            ; 00496719
    PUSH 0x265370c                      ; 0049671a | DAT_0265370c
    PUSH EBX                            ; 0049671f
    MOV ESI,dword ptr [0x0061b5a8]      ; 00496720 | g_CDemonSetPtr
    PUSH ESI                            ; 00496726 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980 ; 00496727
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 0049672c
    PUSH -0x1                           ; 0049672f
    PUSH 0x0                            ; 00496731
    PUSH 0x0                            ; 00496733
    MOV EDI,dword ptr [EBX + 0x4c]      ; 00496735
    PUSH EDI                            ; 00496738
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0 ; 00496739
        ;   XREF to: 0044e6a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 0049673e
    JMP 0x004966f7                      ; 00496741
        ;   XREF to: 004966f7 (UNCONDITIONAL_JUMP)  ; LAB_004966f7


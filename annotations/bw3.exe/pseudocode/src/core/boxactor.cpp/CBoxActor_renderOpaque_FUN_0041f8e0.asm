; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CBoxActor_renderOpaque_FUN_0041f8e0(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f2af8
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f8e0
        ;   Label: core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041f8e0
    PUSH EBP                            ; 0041f8e1
    SUB ESP,0x30                        ; 0041f8e2
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0041f8e5
    LEA EAX,[EBX + 0x158]               ; 0041f8e9
    PUSH EAX                            ; 0041f8ef
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0041f8f0
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 0041f8f5
    ADD ESP,0x4                         ; 0041f8fb
    CMP EDX,0x1                         ; 0041f8fe
    JGE 0x0041f90b                      ; 0041f901
        ;   XREF to: 0041f90b (CONDITIONAL_JUMP)  ; LAB_0041f90b
    XOR EAX,EAX                         ; 0041f903
    ADD ESP,0x30                        ; 0041f905
        ;   Label: LAB_0041f905
    POP EBP                             ; 0041f908
    POP EBX                             ; 0041f909
    RET                                 ; 0041f90a
    MOV ECX,dword ptr [0x005f2afc]      ; 0041f90b | DAT_005f2afc
        ;   Label: LAB_0041f90b
    PUSH ECX                            ; 0041f911
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0041f912
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041f917
    TEST EAX,EAX                        ; 0041f91a
    JNZ 0x0041f927                      ; 0041f91c
        ;   XREF to: 0041f927 (CONDITIONAL_JUMP)  ; LAB_0041f927
    CMP dword ptr [EBX + 0xfc],0x0      ; 0041f91e
    JNZ 0x0041f905                      ; 0041f925
        ;   XREF to: 0041f905 (CONDITIONAL_JUMP)  ; LAB_0041f905
    CMP dword ptr [EBX + 0x5f4],0x0     ; 0041f927
        ;   Label: LAB_0041f927
    JZ 0x0041f9c2                       ; 0041f92e
        ;   XREF to: 0041f9c2 (CONDITIONAL_JUMP)  ; LAB_0041f9c2
    PUSH EDI                            ; 0041f934
        ;   Label: LAB_0041f934
    PUSH ESI                            ; 0041f935
    LEA EAX,[EBX + 0x20]                ; 0041f936
    PUSH EAX                            ; 0041f939
    MOV EAX,[0x005f2af8]                ; 0041f93a | DAT_005f2af8
    PUSH EAX                            ; 0041f93f
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0041f940
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0041f945
    PUSH 0x0                            ; 0041f948
    LEA EAX,[EBX + 0x30]                ; 0041f94a
    PUSH EAX                            ; 0041f94d
    MOV EDX,dword ptr [0x005f2af8]      ; 0041f94e | DAT_005f2af8
    PUSH EDX                            ; 0041f954
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0041f955
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0041f95a
    PUSH 0x0                            ; 0041f95d
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041f95f
    PUSH EBX                            ; 0041f965
    LEA ESI,[ESP + 0x10]                ; 0041f966
    LEA EDI,[ESP + 0x28]                ; 0041f96a
    CALL dword ptr [EAX + 0x1c]         ; 0041f96e
    MOV ECX,0x6                         ; 0041f971
    ADD ESP,0x4                         ; 0041f976
    LEA EAX,[ESP + 0x24]                ; 0041f979
    LEA ESI,[ESP + 0xc]                 ; 0041f97d
    PUSH EAX                            ; 0041f981
    MOVSD.REP ES:EDI,ESI                ; 0041f982
    CALL core_box.cpp_FUN_0041daf0      ; 0041f984
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0041f989
    MOV ESI,EAX                         ; 0041f98c
    TEST EAX,EAX                        ; 0041f98e
    JZ 0x0041f9a9                       ; 0041f990
        ;   XREF to: 0041f9a9 (CONDITIONAL_JUMP)  ; LAB_0041f9a9
    PUSH -0x1                           ; 0041f992
    ADD EBX,0x158                       ; 0041f994
    PUSH dword ptr [EBX + 0x1b8]        ; 0041f99a
    PUSH EBX                            ; 0041f9a0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 0041f9a1
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0041f9a6
    MOV ECX,dword ptr [0x005f2af8]      ; 0041f9a9 | DAT_005f2af8
        ;   Label: LAB_0041f9a9
    PUSH ECX                            ; 0041f9af
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 0041f9b0
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0041f9b5
    MOV EAX,ESI                         ; 0041f9b8
    POP ESI                             ; 0041f9ba
    POP EDI                             ; 0041f9bb
    ADD ESP,0x30                        ; 0041f9bc
    POP EBP                             ; 0041f9bf
    POP EBX                             ; 0041f9c0
    RET                                 ; 0041f9c1
    MOV EBP,dword ptr [0x005f2afc]      ; 0041f9c2 | DAT_005f2afc
        ;   Label: LAB_0041f9c2
    PUSH EBP                            ; 0041f9c8
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0041f9c9
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041f9ce
    TEST EAX,EAX                        ; 0041f9d1
    JZ 0x0041f934                       ; 0041f9d3
        ;   XREF to: 0041f934 (CONDITIONAL_JUMP)  ; LAB_0041f934
    XOR EAX,EAX                         ; 0041f9d9
    ADD ESP,0x30                        ; 0041f9db
    POP EBP                             ; 0041f9de
    POP EBX                             ; 0041f9df
    RET                                 ; 0041f9e0


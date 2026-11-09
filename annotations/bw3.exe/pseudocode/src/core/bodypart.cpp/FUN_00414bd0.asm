; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bodypart_cpp_FUN_00414bd0(CBodyPart *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   undefined4 g_CDemonSetInstance.field1420440_0x15ac98
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_matrix.c_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00414bd0
        ;   Label: core_bodypart.cpp_FUN_00414bd0
    SUB ESP,0x34                        ; 00414bd1
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00414bd4
    CMP dword ptr [EBP + 0x158],0x1     ; 00414bd8
    JLE 0x00414c04                      ; 00414bdf
        ;   XREF to: 00414c04 (CONDITIONAL_JUMP)  ; LAB_00414c04
    CMP dword ptr [EBP + 0xf30],0x0     ; 00414be1
    JZ 0x00414bfd                       ; 00414be8
        ;   XREF to: 00414bfd (CONDITIONAL_JUMP)  ; LAB_00414bfd
    CMP dword ptr [EBP + 0x74c],0x0     ; 00414bea
    JLE 0x00414bfd                      ; 00414bf1
        ;   XREF to: 00414bfd (CONDITIONAL_JUMP)  ; LAB_00414bfd
    MOV EAX,0x1                         ; 00414bf3
    ADD ESP,0x34                        ; 00414bf8
    POP EBP                             ; 00414bfb
    RET                                 ; 00414bfc
    XOR EAX,EAX                         ; 00414bfd
        ;   Label: LAB_00414bfd
    ADD ESP,0x34                        ; 00414bff
    POP EBP                             ; 00414c02
    RET                                 ; 00414c03
    PUSH EDI                            ; 00414c04
        ;   Label: LAB_00414c04
    PUSH ESI                            ; 00414c05
    PUSH EBX                            ; 00414c06
    MOV EAX,[0x00603b28]                ; 00414c07 | g_CDemonSetPtr
    MOV EBX,dword ptr [EBP + 0xcb0]     ; 00414c0c
    PUSH EBP                            ; 00414c12
    MOV dword ptr [EAX + 0x15ac98],EBX  ; 00414c13 | g_CDemonSetInstance.field1420440_0x15ac98
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00414c19
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00414c1e
    PUSH 0x0                            ; 00414c21
    MOV EAX,dword ptr [EBP + 0x154]     ; 00414c23
    PUSH EBP                            ; 00414c29
    LEA ESI,[ESP + 0x14]                ; 00414c2a
    LEA EDI,[ESP + 0x2c]                ; 00414c2e
    CALL dword ptr [EAX + 0x1c]         ; 00414c32
    MOV ECX,0x6                         ; 00414c35
    ADD ESP,0x4                         ; 00414c3a
    LEA EAX,[ESP + 0x28]                ; 00414c3d
    LEA ESI,[ESP + 0x10]                ; 00414c41
    PUSH EAX                            ; 00414c45
    MOVSD.REP ES:EDI,ESI                ; 00414c46
    CALL core_box.cpp_FUN_0041daf0      ; 00414c48
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 00414c4d
    MOV dword ptr [EBP + 0xf30],EAX     ; 00414c50
    TEST EAX,EAX                        ; 00414c56
    JZ 0x00414cf0                       ; 00414c58
        ;   XREF to: 00414cf0 (CONDITIONAL_JUMP)  ; LAB_00414cf0
    CMP dword ptr [EBP + 0xcb4],0x0     ; 00414c5e
    JNZ 0x00414d1c                      ; 00414c65
        ;   XREF to: 00414d1c (CONDITIONAL_JUMP)  ; LAB_00414d1c
    PUSH -0x1                           ; 00414c6b
        ;   Label: LAB_00414c6b
    PUSH EBP                            ; 00414c6d
    CALL core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60 ; 00414c6e
        ;   XREF to: 00414a60 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60(CBodyPart * this_ptr, int render_flags)
    ADD ESP,0x8                         ; 00414c73
    MOV EDI,dword ptr [EBP + 0x28c]     ; 00414c76
        ;   Label: LAB_00414c76
    XOR EBX,EBX                         ; 00414c7c
    TEST EDI,EDI                        ; 00414c7e
    JLE 0x00414cf0                      ; 00414c80
        ;   XREF to: 00414cf0 (CONDITIONAL_JUMP)  ; LAB_00414cf0
    LEA EAX,[EBP + 0x290]               ; 00414c82
    LEA ESI,[EBP + 0x2a8]               ; 00414c88
    MOV dword ptr [ESP + 0x3c],EAX      ; 00414c8e
    LEA EDI,[EBP + 0x29c]               ; 00414c92
    IMUL EAX,EBX,0x194                  ; 00414c98
        ;   Label: LAB_00414c98
    ADD EAX,dword ptr [ESP + 0x3c]      ; 00414c9e
    PUSH EAX                            ; 00414ca2
    PUSH EDI                            ; 00414ca3
    MOV EAX,[0x005f2afc]                ; 00414ca4 | DAT_005f2afc
    PUSH EAX                            ; 00414ca9 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 00414caa
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00414caf
    PUSH -0x1                           ; 00414cb2
    PUSH 0x0                            ; 00414cb4
    PUSH ESI                            ; 00414cb6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 00414cb7
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00414cbc
    MOV EDX,dword ptr [0x005f2afc]      ; 00414cbf | DAT_005f2afc
    INC EBX                             ; 00414cc5
    PUSH EDX                            ; 00414cc6 | DAT_01bdd7e4
    ADD EDI,0x194                       ; 00414cc7
    ADD ESI,0x194                       ; 00414ccd
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00414cd3
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    MOV ECX,dword ptr [EBP + 0x28c]     ; 00414cd8
    ADD ESP,0x4                         ; 00414cde
    CMP EBX,ECX                         ; 00414ce1
    JL 0x00414c98                       ; 00414ce3
        ;   XREF to: 00414c98 (CONDITIONAL_JUMP)  ; LAB_00414c98
    LEA EAX,[EAX]                       ; 00414ce5
    LEA EDX,[EDX]                       ; 00414ceb
    MOV EBX,EBX                         ; 00414cee
    MOV EBX,dword ptr [0x005f2afc]      ; 00414cf0 | DAT_005f2afc
        ;   Label: LAB_00414cf0
    PUSH EBX                            ; 00414cf6 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00414cf7
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    MOV EAX,[0x00603b28]                ; 00414cfc | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 00414d01 | g_CDemonSetInstance.field1420440_0x15ac98
    ADD ESP,0x4                         ; 00414d0b
    MOV EAX,dword ptr [EBP + 0xf30]     ; 00414d0e
    POP EBX                             ; 00414d14
    POP ESI                             ; 00414d15
    POP EDI                             ; 00414d16
    ADD ESP,0x34                        ; 00414d17
    POP EBP                             ; 00414d1a
    RET                                 ; 00414d1b
    MOV ESI,dword ptr [0x005f2afc]      ; 00414d1c | DAT_005f2afc
        ;   Label: LAB_00414d1c
    PUSH ESI                            ; 00414d22 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 00414d23
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00414d28
    TEST EAX,EAX                        ; 00414d2b
    JNZ 0x00414c6b                      ; 00414d2d
        ;   XREF to: 00414c6b (CONDITIONAL_JUMP)  ; LAB_00414c6b
    JMP 0x00414c76                      ; 00414d33
        ;   XREF to: 00414c76 (UNCONDITIONAL_JUMP)  ; LAB_00414c76


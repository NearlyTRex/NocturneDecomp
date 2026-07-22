; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)
;
;
; XREF[9]:
;   FUN_0045a260 at 0045a3ee
;   FUN_004d5b20 at 004d5b7b
;   FUN_00541640 at 005416c0
;   FUN_0054dac0 at 0054db36
;   core_baron.cpp_FUN_004110f0 at 0041125e
;   core_batman.cpp_FUN_00414340 at 004144bf
;   core_charactr.cpp_CCharacter_renderBurn_FUN_00426e80 at 00427040
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20 at 00425c95
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860 at 004d5969
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0051a700
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0
;   core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_0051db70
;   core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0051db20
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0051dad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d9d0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
    PUSH ESI                            ; 0051d9d1
    PUSH EDI                            ; 0051d9d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051d9d3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051d9d7
    MOV ESI,EAX                         ; 0051d9db
    TEST EAX,EAX                        ; 0051d9dd
    JL 0x0051da17                       ; 0051d9df
        ;   XREF to: 0051da17 (CONDITIONAL_JUMP)  ; LAB_0051da17
    PUSH ESI                            ; 0051d9e1
        ;   Label: LAB_0051d9e1
    PUSH EBX                            ; 0051d9e2
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0051dad0 ; 0051d9e3
        ;   XREF to: 0051dad0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0051dad0()
    ADD ESP,0x8                         ; 0051d9e8
    CMP dword ptr [ESP + 0x1c],0x0      ; 0051d9eb
    JNZ 0x0051da34                      ; 0051d9f0
        ;   XREF to: 0051da34 (CONDITIONAL_JUMP)  ; LAB_0051da34
    CMP dword ptr [ESP + 0x18],0x0      ; 0051d9f2
    JL 0x0051da40                       ; 0051d9f7
        ;   XREF to: 0051da40 (CONDITIONAL_JUMP)  ; LAB_0051da40
    TEST byte ptr [ESP + 0x19],0x1      ; 0051d9f9
    JZ 0x0051da40                       ; 0051d9fe
        ;   XREF to: 0051da40 (CONDITIONAL_JUMP)  ; LAB_0051da40
    MOV ESI,dword ptr [ESP + 0x20]      ; 0051da00
        ;   Label: LAB_0051da00
    PUSH ESI                            ; 0051da04
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0051da05
    PUSH EDI                            ; 0051da09
    PUSH EBX                            ; 0051da0a
    CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0 ; 0051da0b
        ;   XREF to: 0051dbc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_0051dbc0()
    ADD ESP,0xc                         ; 0051da10
    POP EDI                             ; 0051da13
    POP ESI                             ; 0051da14
    POP EBX                             ; 0051da15
    RET                                 ; 0051da16
    LEA EAX,[EBX + 0x2238]              ; 0051da17
        ;   Label: LAB_0051da17
    PUSH EAX                            ; 0051da1d
    PUSH EBX                            ; 0051da1e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051da1f
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    ADD ESP,0x4                         ; 0051da24
    PUSH EAX                            ; 0051da27
    CALL core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0051a700 ; 0051da28
        ;   XREF to: 0051a700 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0051a700()
    ADD ESP,0x8                         ; 0051da2d
    MOV ESI,EAX                         ; 0051da30
    JMP 0x0051d9e1                      ; 0051da32
        ;   XREF to: 0051d9e1 (UNCONDITIONAL_JUMP)  ; LAB_0051d9e1
    PUSH ESI                            ; 0051da34
        ;   Label: LAB_0051da34
    PUSH EBX                            ; 0051da35
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0051db20 ; 0051da36
        ;   XREF to: 0051db20 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0051db20()
    ADD ESP,0x8                         ; 0051da3b
    JMP 0x0051da00                      ; 0051da3e
        ;   XREF to: 0051da00 (UNCONDITIONAL_JUMP)  ; LAB_0051da00
    PUSH ESI                            ; 0051da40
        ;   Label: LAB_0051da40
    PUSH EBX                            ; 0051da41
    CALL core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_0051db70 ; 0051da42
        ;   XREF to: 0051db70 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_0051db70()
    ADD ESP,0x8                         ; 0051da47
    JMP 0x0051da00                      ; 0051da4a
        ;   XREF to: 0051da00 (UNCONDITIONAL_JUMP)  ; LAB_0051da00


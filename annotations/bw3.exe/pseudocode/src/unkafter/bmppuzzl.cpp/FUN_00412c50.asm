; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_bmppuzzl_cpp_FUN_00412c50(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005b67c6
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6e24c
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1420932_0x15ae84
;   undefined4 g_CDemonSetInstance.field1420936_0x15ae88
;   undefined4 g_CDemonSetInstance.field1420940_0x15ae8c
;   undefined4 g_CDemonSetInstance.field1420944_0x15ae90
;   undefined4 g_CDemonSetInstance.field1420948_0x15ae94
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
;   engine_drender.cpp_FUN_0046cb90
;   engine_matrix.c_FUN_0046d090
;   engine_matrix.c_FUN_0046d2f0
;   engine_matrix.c_pop_FUN_0046d080
;   engine_matrix.c_popViewport_FUN_0046d320
;   engine_special.cpp_fillDepthRegion_FUN_00560ec2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412c50
        ;   Label: unkafter_bmppuzzl.cpp_FUN_00412c50
    PUSH ESI                            ; 00412c51
    PUSH EDI                            ; 00412c52
    PUSH EBP                            ; 00412c53
    SUB ESP,0x60                        ; 00412c54
    MOV EDX,dword ptr [0x005fba18]      ; 00412c57 | DAT_005fba18
    MOV EBP,0xfc                        ; 00412c5d
    CMP EDX,0x280                       ; 00412c62
    JLE 0x00412cb8                      ; 00412c68
        ;   XREF to: 00412cb8 (CONDITIONAL_JUMP)  ; LAB_00412cb8
    MOV EDX,dword ptr [ESP + 0x78]      ; 00412c6a
    LEA EAX,[EDX*0x4 + 0x0]             ; 00412c6e
    ADD EDX,EAX                         ; 00412c75
    SHL EDX,0x7                         ; 00412c77
    MOV ECX,dword ptr [0x005fba18]      ; 00412c7a | DAT_005fba18
    MOV EAX,EDX                         ; 00412c80
    SAR EDX,0x1f                        ; 00412c82
    IDIV ECX                            ; 00412c85
    MOV dword ptr [ESP + 0x78],EAX      ; 00412c87
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00412c8b
    SHL EAX,0x5                         ; 00412c8f
    MOV EDX,EAX                         ; 00412c92
    SHL EAX,0x4                         ; 00412c94
    SUB EAX,EDX                         ; 00412c97
    MOV EDX,EAX                         ; 00412c99
    MOV EBX,dword ptr [0x005fba1c]      ; 00412c9b | DAT_005fba1c
    SAR EDX,0x1f                        ; 00412ca1
    IDIV EBX                            ; 00412ca4
    MOV dword ptr [ESP + 0x7c],EAX      ; 00412ca6
    MOV EAX,0x27600                     ; 00412caa
    MOV EDX,EAX                         ; 00412caf
    SAR EDX,0x1f                        ; 00412cb1
    IDIV ECX                            ; 00412cb4
    MOV EBP,EAX                         ; 00412cb6
    MOV EAX,[0x00603b28]                ; 00412cb8 | g_CDemonSetPtr
        ;   Label: LAB_00412cb8
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 00412cbd | g_CDemonSetInstance.field1420932_0x15ae84
    MOV dword ptr [EAX + 0x15ae88],0xffffb7d5 ; 00412cc7 | g_CDemonSetInstance.field1420936_0x15ae88
    MOV dword ptr [EAX + 0x15ae8c],0xffffb7d5 ; 00412cd1 | g_CDemonSetInstance.field1420940_0x15ae8c
    MOV dword ptr [EAX + 0x15ae90],0x482b ; 00412cdb | g_CDemonSetInstance.field1420944_0x15ae90
    MOV dword ptr [EAX + 0x15ae94],0x7d00 ; 00412ce5 | g_CDemonSetInstance.field1420948_0x15ae94
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00412cef
    ADD EAX,EBP                         ; 00412cf3
    DEC EAX                             ; 00412cf5
    PUSH EAX                            ; 00412cf6
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00412cf7
    MOV EDI,dword ptr [ESP + 0x80]      ; 00412cfb
    ADD EAX,EBP                         ; 00412d02
    PUSH EDI                            ; 00412d04
    DEC EAX                             ; 00412d05
    PUSH EAX                            ; 00412d06
    MOV EAX,dword ptr [ESP + 0x84]      ; 00412d07
    PUSH EAX                            ; 00412d0e
    CALL engine_special.cpp_fillDepthRegion_FUN_00560ec2 ; 00412d0f
        ;   XREF to: 00560ec2 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_fillDepthRegion_FUN_00560ec2(int left, int right, int top, int bottom)
    ADD ESP,0x10                        ; 00412d14
    MOV EBX,dword ptr [ESP + 0x74]      ; 00412d17
    ADD EBX,0x8ec                       ; 00412d1b
    PUSH EBX                            ; 00412d21
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00412d22
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00412d27
    MOV EDI,ESP                         ; 00412d2a
    MOV ECX,0x6                         ; 00412d2c
    PUSH EBP                            ; 00412d31
    MOV ESI,dword ptr [EAX + 0x350]     ; 00412d32
    MOV EDX,dword ptr [ESP + 0x80]      ; 00412d38
    PUSH EBP                            ; 00412d3f
    MOVSD.REP ES:EDI,ESI                ; 00412d40
    PUSH EDX                            ; 00412d42
    MOV ECX,dword ptr [ESP + 0x84]      ; 00412d43
    PUSH ECX                            ; 00412d4a
    MOV ESI,dword ptr [0x005f2afc]      ; 00412d4b | DAT_005f2afc
    PUSH ESI                            ; 00412d51 | DAT_01bdd7e4
    CALL engine_matrix.c_FUN_0046d2f0   ; 00412d52
        ;   XREF to: 0046d2f0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d2f0()
    MOV EAX,0xc0000000                  ; 00412d57
    ADD ESP,0x14                        ; 00412d5c
    MOV dword ptr [ESP + 0x2c],EAX      ; 00412d5f
    LEA EAX,[ESP + 0x24]                ; 00412d63
    PUSH EAX                            ; 00412d67
    MOV EDX,dword ptr [0x005f2afc]      ; 00412d68 | DAT_005f2afc
    XOR EDI,EDI                         ; 00412d6e
    PUSH EDX                            ; 00412d70 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x2c],EDI      ; 00412d71
    MOV dword ptr [ESP + 0x30],EDI      ; 00412d75
    CALL engine_drender.cpp_FUN_0046cb90 ; 00412d79
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_FUN_0046cb90(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 00412d7e
    MOV ECX,dword ptr [0x005f2afc]      ; 00412d81 | DAT_005f2afc
    PUSH 0x42100000                     ; 00412d87
    PUSH ECX                            ; 00412d8c | DAT_01bdd7e4
    CALL engine_matrix.c_FUN_0046d090   ; 00412d8d
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d090()
    ADD ESP,0x8                         ; 00412d92
    PUSH 0x2cfd900                      ; 00412d95 | DAT_02cfd900
    MOV ESI,dword ptr [0x005f2afc]      ; 00412d9a | DAT_005f2afc
    PUSH ESI                            ; 00412da0 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10 ; 00412da1
        ;   XREF to: 0046cc10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00412da6
    PUSH 0x2cfd900                      ; 00412da9 | DAT_02cfd900
    MOV EDI,dword ptr [0x005f2afc]      ; 00412dae | DAT_005f2afc
    PUSH EDI                            ; 00412db4 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x44]                ; 00412db5
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 00412db9
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00412dbe
    LEA EDI,[ESP + 0x48]                ; 00412dc1
    FLD float ptr [ESP]                 ; 00412dc5
    FLD float ptr [ESP + 0x4]           ; 00412dc8
    FLD float ptr [ESP + 0x8]           ; 00412dcc
    FXCH ST2                            ; 00412dd0
    FADD float ptr [ESP + 0xc]          ; 00412dd2
    FXCH                                ; 00412dd6
    FADD float ptr [ESP + 0x10]         ; 00412dd8
    FXCH ST2                            ; 00412ddc
    FADD float ptr [ESP + 0x14]         ; 00412dde
    FXCH                                ; 00412de2
    FSTP float ptr [ESP + 0x3c]         ; 00412de4
    FXCH                                ; 00412de8
    FSTP float ptr [ESP + 0x40]         ; 00412dea
    FSTP float ptr [ESP + 0x44]         ; 00412dee
    MOVSD ES:EDI,ESI                    ; 00412df2
    MOVSD ES:EDI,ESI                    ; 00412df3
    MOVSD ES:EDI,ESI                    ; 00412df4
    FLD float ptr [0x005b67c6]          ; 00412df5 | DAT_005b67c6
    FLD float ptr [ESP + 0x48]          ; 00412dfb
    FMUL ST1                            ; 00412dff
    FLD float ptr [ESP + 0x4c]          ; 00412e01
    FMUL ST2                            ; 00412e05
    FLD float ptr [ESP + 0x50]          ; 00412e07
    FMULP ST3                           ; 00412e0b
    XOR EBP,EBP                         ; 00412e0d
    MOV EAX,dword ptr [ESP + 0x80]      ; 00412e0f
    PUSH EBP                            ; 00412e16
    MOV dword ptr [ESP + 0x60],EAX      ; 00412e17
    LEA EAX,[ESP + 0x58]                ; 00412e1b
    MOV dword ptr [0x01c6e24c],EBP      ; 00412e1f | DAT_01c6e24c
    PUSH EAX                            ; 00412e25
    LEA EDI,[ESP + 0x20]                ; 00412e26
    LEA ESI,[ESP + 0x38]                ; 00412e2a
    MOV EAX,[0x005f2afc]                ; 00412e2e | DAT_005f2afc
    FXCH                                ; 00412e33
    FSTP float ptr [ESP + 0x38]         ; 00412e35
    FSTP float ptr [ESP + 0x3c]         ; 00412e39
    FSTP float ptr [ESP + 0x40]         ; 00412e3d
    PUSH EAX                            ; 00412e41 | DAT_01bdd7e4
    MOVSD ES:EDI,ESI                    ; 00412e42
    MOVSD ES:EDI,ESI                    ; 00412e43
    MOVSD ES:EDI,ESI                    ; 00412e44
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 00412e45
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00412e4a
    LEA EAX,[ESP + 0x18]                ; 00412e4d
    PUSH EAX                            ; 00412e51
    PUSH 0x2cfd900                      ; 00412e52 | DAT_02cfd900
    MOV EDX,dword ptr [0x005f2afc]      ; 00412e57 | DAT_005f2afc
    PUSH EDX                            ; 00412e5d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 00412e5e
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00412e63
    CMP dword ptr [ESP + 0x84],0x0      ; 00412e66
    JNZ 0x00412eca                      ; 00412e6e
        ;   XREF to: 00412eca (CONDITIONAL_JUMP)  ; LAB_00412eca
    MOV EAX,dword ptr [ESP + 0x74]      ; 00412e70
    PUSH -0x1                           ; 00412e74
    ADD EAX,0xa68                       ; 00412e76
    PUSH 0x0                            ; 00412e7b
    PUSH EAX                            ; 00412e7d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 00412e7e
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
        ;   Label: LAB_00412e7e
    ADD ESP,0xc                         ; 00412e83
    MOV EBX,dword ptr [0x005f2afc]      ; 00412e86 | DAT_005f2afc
    PUSH EBX                            ; 00412e8c | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00412e8d
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00412e92
    MOV ESI,dword ptr [0x005f2afc]      ; 00412e95 | DAT_005f2afc
    PUSH ESI                            ; 00412e9b | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00412e9c
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00412ea1
    MOV EDI,dword ptr [0x005f2afc]      ; 00412ea4 | DAT_005f2afc
    PUSH EDI                            ; 00412eaa | DAT_01bdd7e4
    CALL engine_matrix.c_popViewport_FUN_0046d320 ; 00412eab
        ;   XREF to: 0046d320 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_popViewport_FUN_0046d320()
    MOV EAX,[0x00603b28]                ; 00412eb0 | g_CDemonSetPtr | g_CDemonSetInstance
    ADD ESP,0x4                         ; 00412eb5
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 00412eb8 | g_CDemonSetInstance.field1420932_0x15ae84
    ADD ESP,0x60                        ; 00412ec2
    POP EBP                             ; 00412ec5
    POP EDI                             ; 00412ec6
    POP ESI                             ; 00412ec7
    POP EBX                             ; 00412ec8
    RET                                 ; 00412ec9
    PUSH -0x1                           ; 00412eca
        ;   Label: LAB_00412eca
    PUSH 0x0                            ; 00412ecc
    PUSH EBX                            ; 00412ece
    JMP 0x00412e7e                      ; 00412ecf
        ;   XREF to: 00412e7e (UNCONDITIONAL_JUMP)  ; LAB_00412e7e


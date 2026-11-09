; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_vessel_cpp_FUN_00576c90(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d70c7
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
;   engine_matrix.c_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576c90
        ;   Label: core_vessel.cpp_FUN_00576c90
    PUSH ESI                            ; 00576c91
    PUSH EDI                            ; 00576c92
    PUSH EBP                            ; 00576c93
    MOV EBP,ESP                         ; 00576c94
    SUB ESP,0x40                        ; 00576c96
    AND ESP,0xfffffff8                  ; 00576c99
    MOV EBX,dword ptr [EBP + 0x14]      ; 00576c9c
    LEA EAX,[EBX + 0x20]                ; 00576c9f
    PUSH EAX                            ; 00576ca2
    MOV EDX,dword ptr [0x005f2afc]      ; 00576ca3 | DAT_005f2afc
    PUSH EDX                            ; 00576ca9 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 00576caa
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00576caf
    PUSH 0x0                            ; 00576cb2
    LEA EAX,[EBX + 0x30]                ; 00576cb4
    PUSH EAX                            ; 00576cb7
    MOV ESI,dword ptr [0x005f2afc]      ; 00576cb8 | DAT_005f2afc
    PUSH ESI                            ; 00576cbe | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x48],EAX      ; 00576cbf
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 00576cc3
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00576cc8
    PUSH 0x0                            ; 00576ccb
    MOV EAX,dword ptr [EBX + 0x154]     ; 00576ccd
    PUSH EBX                            ; 00576cd3
    LEA ESI,[ESP + 0x28]                ; 00576cd4
    LEA EDI,[ESP + 0x10]                ; 00576cd8
    CALL dword ptr [EAX + 0x1c]         ; 00576cdc
    MOV ECX,0x6                         ; 00576cdf
    ADD ESP,0x4                         ; 00576ce4
    LEA EAX,[ESP + 0xc]                 ; 00576ce7
    LEA ESI,[ESP + 0x24]                ; 00576ceb
    PUSH EAX                            ; 00576cef
    MOVSD.REP ES:EDI,ESI                ; 00576cf0
    CALL core_box.cpp_FUN_0041daf0      ; 00576cf2
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 00576cf7
    MOV EDI,dword ptr [0x005f2afc]      ; 00576cfa | DAT_005f2afc
    PUSH EDI                            ; 00576d00 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x7e8],EAX     ; 00576d01
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00576d07
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    MOV EAX,dword ptr [EBX + 0x7e8]     ; 00576d0c
    ADD ESP,0x4                         ; 00576d12
    TEST EAX,EAX                        ; 00576d15
    JNZ 0x00576d26                      ; 00576d17
        ;   XREF to: 00576d26 (CONDITIONAL_JUMP)  ; LAB_00576d26
    MOV EAX,dword ptr [EBX + 0x7e8]     ; 00576d19
    MOV ESP,EBP                         ; 00576d1f
    POP EBP                             ; 00576d21
    POP EDI                             ; 00576d22
    POP ESI                             ; 00576d23
    POP EBX                             ; 00576d24
    RET                                 ; 00576d25
    PUSH 0x0                            ; 00576d26
        ;   Label: LAB_00576d26
    MOV EDX,dword ptr [ESP + 0x40]      ; 00576d28
    PUSH EDX                            ; 00576d2c
    MOV ECX,dword ptr [0x005f2afc]      ; 00576d2d | DAT_005f2afc
    PUSH ECX                            ; 00576d33 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 00576d34
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00576d39
    PUSH 0xffff                         ; 00576d3c
    MOV ESI,dword ptr [0x005f2afc]      ; 00576d41 | DAT_005f2afc
    PUSH ESI                            ; 00576d47 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00576d48
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    MOV EDI,dword ptr [EBX + 0x3b8]     ; 00576d4d
    ADD ESP,0x8                         ; 00576d53
    CMP EDI,0x3                         ; 00576d56
    JZ 0x00576dee                       ; 00576d59
        ;   XREF to: 00576dee (CONDITIONAL_JUMP)  ; LAB_00576dee
    FLDZ                                ; 00576d5f
    FLD float ptr [EBX + 0x3bc]         ; 00576d61
    FSTP double ptr [ESP]               ; 00576d67
    FCOMP double ptr [ESP]              ; 00576d6a
    FNSTSW AX                           ; 00576d6d
    SAHF                                ; 00576d6f
    JNC 0x00576dee                      ; 00576d70
        ;   XREF to: 00576dee (CONDITIONAL_JUMP)  ; LAB_00576dee
    FLD double ptr [0x005d70c7]         ; 00576d72 | DAT_005d70c7
    FLD double ptr [ESP]                ; 00576d78
    FMUL ST1                            ; 00576d7b
    FSUBP                               ; 00576d7d
    CALL crt_math.c_round_FUN_005a3120  ; 00576d7f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x38]        ; 00576d84
    MOV EAX,dword ptr [ESP + 0x38]      ; 00576d88
    PUSH EAX                            ; 00576d8c
    MOV EDX,dword ptr [0x005f2afc]      ; 00576d8d | DAT_005f2afc
    PUSH EDX                            ; 00576d93 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00576d94
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00576d99
    PUSH 0x0                            ; 00576d9c
    MOV ECX,dword ptr [0x005f2afc]      ; 00576d9e | DAT_005f2afc
    PUSH ECX                            ; 00576da4 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120 ; 00576da5
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 00576daa
    PUSH 0x2e7                          ; 00576dad
    LEA EAX,[EBX + 0x158]               ; 00576db2
    PUSH 0x0                            ; 00576db8
    PUSH EAX                            ; 00576dba
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 00576dbb
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00576dc0
    MOV ESI,dword ptr [0x005f2afc]      ; 00576dc3 | DAT_005f2afc
    PUSH ESI                            ; 00576dc9 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 ; 00576dca
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00576dcf
    MOV EDI,dword ptr [0x005f2afc]      ; 00576dd2 | DAT_005f2afc
        ;   Label: LAB_00576dd2
    PUSH EDI                            ; 00576dd8 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00576dd9
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00576dde
    MOV EAX,dword ptr [EBX + 0x7e8]     ; 00576de1
    MOV ESP,EBP                         ; 00576de7
    POP EBP                             ; 00576de9
    POP EDI                             ; 00576dea
    POP ESI                             ; 00576deb
    POP EBX                             ; 00576dec
    RET                                 ; 00576ded
    PUSH -0x1                           ; 00576dee
        ;   Label: LAB_00576dee
    LEA EAX,[EBX + 0x158]               ; 00576df0
    PUSH 0x0                            ; 00576df6
    PUSH EAX                            ; 00576df8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 00576df9
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00576dfe
    JMP 0x00576dd2                      ; 00576e01
        ;   XREF to: 00576dd2 (UNCONDITIONAL_JUMP)  ; LAB_00576dd2


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_00576e10(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_MENUCLD2_RAW_005d70ce+1
;   undefined4 s_MENUCLD2_RAW_005d70ce+2
;   undefined4 s_MENUCLD2_RAW_005d70ce+3
;   undefined4 s_MENUCLD2_RAW_005d70ce+4
;   TerminatedCString s_BWATER_d_RAW_005d70dc
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   core_flame.cpp_FUN_004a6090
;   crt_math.c_round_FUN_005a3120
;   crt_unknown.c_FUN_005a28c0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_matrix.c_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576e10
        ;   Label: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_00576e10
    PUSH ESI                            ; 00576e11
    PUSH EDI                            ; 00576e12
    PUSH EBP                            ; 00576e13
    MOV EBP,ESP                         ; 00576e14
    SUB ESP,0x1c                        ; 00576e16
    MOV EBX,dword ptr [EBP + 0x14]      ; 00576e19
    CMP dword ptr [EBX + 0x7e8],0x0     ; 00576e1c
    JZ 0x00576f61                       ; 00576e23
        ;   XREF to: 00576f61 (CONDITIONAL_JUMP)  ; LAB_00576f61
    CMP dword ptr [EBX + 0x3b4],0x1     ; 00576e29
    JZ 0x00576f6a                       ; 00576e30
        ;   XREF to: 00576f6a (CONDITIONAL_JUMP)  ; LAB_00576f6a
    LEA EAX,[EBX + 0x20]                ; 00576e36
        ;   Label: LAB_00576e36
    PUSH EAX                            ; 00576e39
    MOV ESI,dword ptr [0x005f2afc]      ; 00576e3a | DAT_005f2afc
    PUSH ESI                            ; 00576e40 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 00576e41
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00576e46
    PUSH 0x0                            ; 00576e49
    LEA EAX,[EBX + 0x30]                ; 00576e4b
    PUSH EAX                            ; 00576e4e
    MOV EDI,dword ptr [0x005f2afc]      ; 00576e4f | DAT_005f2afc
    PUSH EDI                            ; 00576e55 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 00576e56
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    XOR EAX,EAX                         ; 00576e5b
    MOV dword ptr [EBP + -0x10],EAX     ; 00576e5d
    MOV dword ptr [EBP + -0x8],EAX      ; 00576e60
    MOV ESI,0x400ccccd                  ; 00576e63
    MOV EAX,dword ptr [EBX + 0x668]     ; 00576e68
    ADD ESP,0xc                         ; 00576e6e
    MOV dword ptr [EBP + -0xc],EAX      ; 00576e71
    LEA EAX,[EBP + -0x1c]               ; 00576e74
    XOR EDX,EDX                         ; 00576e77
    PUSH EAX                            ; 00576e79
    LEA EAX,[EBP + -0x10]               ; 00576e7a
    XOR ECX,ECX                         ; 00576e7d
    PUSH EAX                            ; 00576e7f
    MOV EAX,[0x005f2afc]                ; 00576e80 | DAT_005f2afc
    MOV dword ptr [EBP + -0x1c],ECX     ; 00576e85
    PUSH EAX                            ; 00576e88 | DAT_01bdd7e4
    MOV dword ptr [EBP + -0x18],ESI     ; 00576e89
    MOV dword ptr [EBP + -0x14],EDX     ; 00576e8c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 00576e8f
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00576e94
    PUSH 0xffff                         ; 00576e97
    MOV EDX,dword ptr [0x005f2afc]      ; 00576e9c | DAT_005f2afc
    PUSH EDX                            ; 00576ea2 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00576ea3
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00576ea8
    MOV ECX,dword ptr [EBX + 0x3b4]     ; 00576eab
    LEA EAX,[EBX + 0x66c]               ; 00576eb1
    CMP ECX,0x2                         ; 00576eb7
    JZ 0x00576f93                       ; 00576eba
        ;   XREF to: 00576f93 (CONDITIONAL_JUMP)  ; LAB_00576f93
    PUSH EAX                            ; 00576ec0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00576ec1
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00576ec6
    MOV ESI,0x5d70cf                    ; 00576ec9 | s_MENUCLD2_RAW_005d70ce+1
    LEA EDI,[EAX + 0x12c]               ; 00576ece
    PUSH EDI                            ; 00576ed4
    MOV AL,byte ptr [ESI]               ; 00576ed5 | s_MENUCLD2_RAW_005d70ce+1 | s_MENUCLD2_RAW_005d70ce+3
        ;   Label: LAB_00576ed5
    MOV byte ptr [EDI],AL               ; 00576ed7
    CMP AL,0x0                          ; 00576ed9
    JZ 0x00576eed                       ; 00576edb
        ;   XREF to: 00576eed (CONDITIONAL_JUMP)  ; LAB_00576eed
    MOV AL,byte ptr [ESI + 0x1]         ; 00576edd | s_MENUCLD2_RAW_005d70ce+2 | s_MENUCLD2_RAW_005d70ce+4
    ADD ESI,0x2                         ; 00576ee0
    MOV byte ptr [EDI + 0x1],AL         ; 00576ee3
    ADD EDI,0x2                         ; 00576ee6
    CMP AL,0x0                          ; 00576ee9
    JNZ 0x00576ed5                      ; 00576eeb
        ;   XREF to: 00576ed5 (CONDITIONAL_JUMP)  ; LAB_00576ed5
    POP EDI                             ; 00576eed
        ;   Label: LAB_00576eed
    CMP dword ptr [EBX + 0x3b4],0x0     ; 00576eee
    JNZ 0x00576f7e                      ; 00576ef5
        ;   XREF to: 00576f7e (CONDITIONAL_JUMP)  ; LAB_00576f7e
    PUSH 0x1                            ; 00576efb
    MOV EDX,dword ptr [0x005f2afc]      ; 00576efd | DAT_005f2afc
    PUSH EDX                            ; 00576f03 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00576f04
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00576f09
        ;   Label: LAB_00576f09
    PUSH 0x267                          ; 00576f0c
    ADD EBX,0x66c                       ; 00576f11
    PUSH 0x0                            ; 00576f17
    PUSH EBX                            ; 00576f19
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 00576f1a
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00576f1f
    PUSH 0x0                            ; 00576f22
    MOV ECX,dword ptr [0x005f2afc]      ; 00576f24 | DAT_005f2afc
    PUSH ECX                            ; 00576f2a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00576f2b
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00576f30
    MOV EBX,dword ptr [0x005f2afc]      ; 00576f33 | DAT_005f2afc
    PUSH EBX                            ; 00576f39 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00576f3a
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00576f3f
    MOV ESI,dword ptr [0x005f2afc]      ; 00576f42 | DAT_005f2afc
    PUSH ESI                            ; 00576f48 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00576f49
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    MOV EAX,0x1                         ; 00576f4e
    ADD ESP,0x4                         ; 00576f53
    MOV ESP,EBP                         ; 00576f56
    POP EBP                             ; 00576f58
    POP EDI                             ; 00576f59
    POP ESI                             ; 00576f5a
    POP EBX                             ; 00576f5b
    LEA EAX,[EAX]                       ; 00576f5c
    XOR EAX,EAX                         ; 00576f61
        ;   Label: LAB_00576f61
    MOV ESP,EBP                         ; 00576f63
    POP EBP                             ; 00576f65
    POP EDI                             ; 00576f66
    POP ESI                             ; 00576f67
    POP EBX                             ; 00576f68
    RET                                 ; 00576f69
    LEA EAX,[EBX + 0x3c4]               ; 00576f6a
        ;   Label: LAB_00576f6a
    PUSH EAX                            ; 00576f70
    CALL core_flame.cpp_FUN_004a6090    ; 00576f71
        ;   XREF to: 004a6090 (UNCONDITIONAL_CALL)  ; int core_flame.cpp_FUN_004a6090(CFlame * this_ptr)
    ADD ESP,0x4                         ; 00576f76
    JMP 0x00576e36                      ; 00576f79
        ;   XREF to: 00576e36 (UNCONDITIONAL_JUMP)  ; LAB_00576e36
    PUSH 0x4000                         ; 00576f7e
        ;   Label: LAB_00576f7e
    MOV EAX,[0x005f2afc]                ; 00576f83 | DAT_005f2afc
    PUSH EAX                            ; 00576f88 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00576f89
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    JMP 0x00576f09                      ; 00576f8e
        ;   XREF to: 00576f09 (UNCONDITIONAL_JUMP)  ; LAB_00576f09
    FLD float ptr [EBX + 0x7ec]         ; 00576f93
        ;   Label: LAB_00576f93
    CALL crt_math.c_round_FUN_005a3120  ; 00576f99
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH EAX                            ; 00576f9e
    FISTP dword ptr [EBP + -0x4]        ; 00576f9f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00576fa2
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV EDI,dword ptr [EBP + -0x4]      ; 00576fa7
    ADD ESP,0x4                         ; 00576faa
    AND EDI,0xf                         ; 00576fad
    PUSH EDI                            ; 00576fb0
    PUSH 0x5d70dc                       ; 00576fb1 | = "BWATER%d.RAW"
    ADD EAX,0x12c                       ; 00576fb6
    PUSH EAX                            ; 00576fbb
    CALL crt_unknown.c_FUN_005a28c0     ; 00576fbc
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 00576fc1
    PUSH 0xbb80                         ; 00576fc4
    MOV ESI,dword ptr [0x005f2afc]      ; 00576fc9 | DAT_005f2afc
    PUSH ESI                            ; 00576fcf | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00576fd0
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    JMP 0x00576f09                      ; 00576fd5
        ;   XREF to: 00576f09 (UNCONDITIONAL_JUMP)  ; LAB_00576f09


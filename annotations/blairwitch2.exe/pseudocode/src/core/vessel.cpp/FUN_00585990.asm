; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_vessel_cpp_FUN_00585990(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_MENUCLD2_RAW_005ede09+1
;   undefined4 s_MENUCLD2_RAW_005ede09+2
;   undefined4 s_MENUCLD2_RAW_005ede09+3
;   undefined4 s_MENUCLD2_RAW_005ede09+4
;   TerminatedCString s_BWATER_d_RAW_005ede17
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   core_flame.cpp_FUN_0049f850
;   crt_math.c_round_FUN_005b7ff0
;   crt_unknown.c_FUN_005b7790
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_matrix.c_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585990
        ;   Label: core_vessel.cpp_FUN_00585990
    PUSH ESI                            ; 00585991
    PUSH EDI                            ; 00585992
    PUSH EBP                            ; 00585993
    MOV EBP,ESP                         ; 00585994
    SUB ESP,0x1c                        ; 00585996
    MOV EBX,dword ptr [EBP + 0x14]      ; 00585999
    CMP dword ptr [EBX + 0xaa0],0x0     ; 0058599c
    JZ 0x00585ae1                       ; 005859a3
        ;   XREF to: 00585ae1 (CONDITIONAL_JUMP)  ; LAB_00585ae1
    CMP dword ptr [EBX + 0x510],0x1     ; 005859a9
    JZ 0x00585aea                       ; 005859b0
        ;   XREF to: 00585aea (CONDITIONAL_JUMP)  ; LAB_00585aea
    LEA EAX,[EBX + 0x20]                ; 005859b6
        ;   Label: LAB_005859b6
    PUSH EAX                            ; 005859b9
    MOV ESI,dword ptr [0x0060b280]      ; 005859ba | DAT_0060b280
    PUSH ESI                            ; 005859c0 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 005859c1
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005859c6
    PUSH 0x0                            ; 005859c9
    LEA EAX,[EBX + 0x30]                ; 005859cb
    PUSH EAX                            ; 005859ce
    MOV EDI,dword ptr [0x0060b280]      ; 005859cf | DAT_0060b280
    PUSH EDI                            ; 005859d5 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 005859d6
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    XOR EAX,EAX                         ; 005859db
    MOV dword ptr [EBP + -0x10],EAX     ; 005859dd
    MOV dword ptr [EBP + -0x8],EAX      ; 005859e0
    MOV ESI,0x400ccccd                  ; 005859e3
    MOV EAX,dword ptr [EBX + 0x920]     ; 005859e8
    ADD ESP,0xc                         ; 005859ee
    MOV dword ptr [EBP + -0xc],EAX      ; 005859f1
    LEA EAX,[EBP + -0x1c]               ; 005859f4
    XOR EDX,EDX                         ; 005859f7
    PUSH EAX                            ; 005859f9
    LEA EAX,[EBP + -0x10]               ; 005859fa
    XOR ECX,ECX                         ; 005859fd
    PUSH EAX                            ; 005859ff
    MOV EAX,[0x0060b280]                ; 00585a00 | DAT_0060b280
    MOV dword ptr [EBP + -0x1c],ECX     ; 00585a05
    PUSH EAX                            ; 00585a08 | DAT_01ba5c50
    MOV dword ptr [EBP + -0x18],ESI     ; 00585a09
    MOV dword ptr [EBP + -0x14],EDX     ; 00585a0c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 00585a0f
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00585a14
    PUSH 0xffff                         ; 00585a17
    MOV EDX,dword ptr [0x0060b280]      ; 00585a1c | DAT_0060b280
    PUSH EDX                            ; 00585a22 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00585a23
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00585a28
    MOV ECX,dword ptr [EBX + 0x510]     ; 00585a2b
    LEA EAX,[EBX + 0x924]               ; 00585a31
    CMP ECX,0x2                         ; 00585a37
    JZ 0x00585b13                       ; 00585a3a
        ;   XREF to: 00585b13 (CONDITIONAL_JUMP)  ; LAB_00585b13
    PUSH EAX                            ; 00585a40
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00585a41
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00585a46
    MOV ESI,0x5ede0a                    ; 00585a49 | s_MENUCLD2_RAW_005ede09+1
    LEA EDI,[EAX + 0x12c]               ; 00585a4e
    PUSH EDI                            ; 00585a54
    MOV AL,byte ptr [ESI]               ; 00585a55 | s_MENUCLD2_RAW_005ede09+1 | s_MENUCLD2_RAW_005ede09+3
        ;   Label: LAB_00585a55
    MOV byte ptr [EDI],AL               ; 00585a57
    CMP AL,0x0                          ; 00585a59
    JZ 0x00585a6d                       ; 00585a5b
        ;   XREF to: 00585a6d (CONDITIONAL_JUMP)  ; LAB_00585a6d
    MOV AL,byte ptr [ESI + 0x1]         ; 00585a5d | s_MENUCLD2_RAW_005ede09+2 | s_MENUCLD2_RAW_005ede09+4
    ADD ESI,0x2                         ; 00585a60
    MOV byte ptr [EDI + 0x1],AL         ; 00585a63
    ADD EDI,0x2                         ; 00585a66
    CMP AL,0x0                          ; 00585a69
    JNZ 0x00585a55                      ; 00585a6b
        ;   XREF to: 00585a55 (CONDITIONAL_JUMP)  ; LAB_00585a55
    POP EDI                             ; 00585a6d
        ;   Label: LAB_00585a6d
    CMP dword ptr [EBX + 0x510],0x0     ; 00585a6e
    JNZ 0x00585afe                      ; 00585a75
        ;   XREF to: 00585afe (CONDITIONAL_JUMP)  ; LAB_00585afe
    PUSH 0x1                            ; 00585a7b
    MOV EDX,dword ptr [0x0060b280]      ; 00585a7d | DAT_0060b280
    PUSH EDX                            ; 00585a83 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00585a84
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00585a89
        ;   Label: LAB_00585a89
    PUSH 0x267                          ; 00585a8c
    ADD EBX,0x924                       ; 00585a91
    PUSH 0x0                            ; 00585a97
    PUSH EBX                            ; 00585a99
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 00585a9a
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00585a9f
    PUSH 0x0                            ; 00585aa2
    MOV ECX,dword ptr [0x0060b280]      ; 00585aa4 | DAT_0060b280
    PUSH ECX                            ; 00585aaa | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00585aab
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00585ab0
    MOV EBX,dword ptr [0x0060b280]      ; 00585ab3 | DAT_0060b280
    PUSH EBX                            ; 00585ab9 | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 00585aba
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00585abf
    MOV ESI,dword ptr [0x0060b280]      ; 00585ac2 | DAT_0060b280
    PUSH ESI                            ; 00585ac8 | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 00585ac9
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    MOV EAX,0x1                         ; 00585ace
    ADD ESP,0x4                         ; 00585ad3
    MOV ESP,EBP                         ; 00585ad6
    POP EBP                             ; 00585ad8
    POP EDI                             ; 00585ad9
    POP ESI                             ; 00585ada
    POP EBX                             ; 00585adb
    LEA EAX,[EAX]                       ; 00585adc
    XOR EAX,EAX                         ; 00585ae1
        ;   Label: LAB_00585ae1
    MOV ESP,EBP                         ; 00585ae3
    POP EBP                             ; 00585ae5
    POP EDI                             ; 00585ae6
    POP ESI                             ; 00585ae7
    POP EBX                             ; 00585ae8
    RET                                 ; 00585ae9
    LEA EAX,[EBX + 0x520]               ; 00585aea
        ;   Label: LAB_00585aea
    PUSH EAX                            ; 00585af0
    CALL core_flame.cpp_FUN_0049f850    ; 00585af1
        ;   XREF to: 0049f850 (UNCONDITIONAL_CALL)  ; int core_flame.cpp_FUN_0049f850(CFlame * this_ptr)
    ADD ESP,0x4                         ; 00585af6
    JMP 0x005859b6                      ; 00585af9
        ;   XREF to: 005859b6 (UNCONDITIONAL_JUMP)  ; LAB_005859b6
    PUSH 0x4000                         ; 00585afe
        ;   Label: LAB_00585afe
    MOV EAX,[0x0060b280]                ; 00585b03 | DAT_0060b280
    PUSH EAX                            ; 00585b08 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00585b09
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    JMP 0x00585a89                      ; 00585b0e
        ;   XREF to: 00585a89 (UNCONDITIONAL_JUMP)  ; LAB_00585a89
    FLD float ptr [EBX + 0xaa4]         ; 00585b13
        ;   Label: LAB_00585b13
    CALL crt_math.c_round_FUN_005b7ff0  ; 00585b19
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH EAX                            ; 00585b1e
    FISTP dword ptr [EBP + -0x4]        ; 00585b1f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00585b22
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV EDI,dword ptr [EBP + -0x4]      ; 00585b27
    ADD ESP,0x4                         ; 00585b2a
    AND EDI,0xf                         ; 00585b2d
    PUSH EDI                            ; 00585b30
    PUSH 0x5ede17                       ; 00585b31 | = "BWATER%d.RAW"
    ADD EAX,0x12c                       ; 00585b36
    PUSH EAX                            ; 00585b3b
    CALL crt_unknown.c_FUN_005b7790     ; 00585b3c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 00585b41
    PUSH 0xbb80                         ; 00585b44
    MOV ESI,dword ptr [0x0060b280]      ; 00585b49 | DAT_0060b280
    PUSH ESI                            ; 00585b4f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00585b50
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    JMP 0x00585a89                      ; 00585b55
        ;   XREF to: 00585a89 (UNCONDITIONAL_JUMP)  ; LAB_00585a89


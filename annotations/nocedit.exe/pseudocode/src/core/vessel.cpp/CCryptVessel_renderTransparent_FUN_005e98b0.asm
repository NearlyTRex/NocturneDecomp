; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_005e98b0(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_MENUCLD2_RAW_00657069
;   undefined4 s_ENUCLD2.RAW_0065706a
;   undefined4 s_NUCLD2.RAW_0065706b
;   undefined4 s_UCLD2.RAW_0065706c
;   TerminatedCString s_BWATER_d_RAW_00657076
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_flame.cpp_CFlame_FUN_004ca110
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e98b0
        ;   Label: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_005e98b0
    PUSH ESI                            ; 005e98b1
    PUSH EDI                            ; 005e98b2
    PUSH EBP                            ; 005e98b3
    MOV EBP,ESP                         ; 005e98b4
    SUB ESP,0x1c                        ; 005e98b6
    MOV EBX,dword ptr [EBP + 0x14]      ; 005e98b9
    CMP dword ptr [EBX + 0x7e8],0x0     ; 005e98bc
    JZ 0x005e9a01                       ; 005e98c3
        ;   XREF to: 005e9a01 (CONDITIONAL_JUMP)  ; LAB_005e9a01
    CMP dword ptr [EBX + 0x3b4],0x1     ; 005e98c9
    JZ 0x005e9a0a                       ; 005e98d0
        ;   XREF to: 005e9a0a (CONDITIONAL_JUMP)  ; LAB_005e9a0a
    LEA EAX,[EBX + 0x20]                ; 005e98d6
        ;   Label: LAB_005e98d6
    PUSH EAX                            ; 005e98d9
    MOV ESI,dword ptr [0x006703ec]      ; 005e98da | g_CDemonRendererPtr2
    PUSH ESI                            ; 005e98e0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 005e98e1
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005e98e6
    PUSH 0x0                            ; 005e98e9
    LEA EAX,[EBX + 0x30]                ; 005e98eb
    PUSH EAX                            ; 005e98ee
    MOV EDI,dword ptr [0x006703ec]      ; 005e98ef | g_CDemonRendererPtr2
    PUSH EDI                            ; 005e98f5 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005e98f6
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    XOR EAX,EAX                         ; 005e98fb
    MOV dword ptr [EBP + -0x10],EAX     ; 005e98fd
    MOV dword ptr [EBP + -0x8],EAX      ; 005e9900
    MOV ESI,0x400ccccd                  ; 005e9903
    MOV EAX,dword ptr [EBX + 0x668]     ; 005e9908
    ADD ESP,0xc                         ; 005e990e
    MOV dword ptr [EBP + -0xc],EAX      ; 005e9911
    LEA EAX,[EBP + -0x1c]               ; 005e9914
    XOR EDX,EDX                         ; 005e9917
    PUSH EAX                            ; 005e9919
    LEA EAX,[EBP + -0x10]               ; 005e991a
    XOR ECX,ECX                         ; 005e991d
    PUSH EAX                            ; 005e991f
    MOV EAX,[0x006703ec]                ; 005e9920 | g_CDemonRendererPtr2
    MOV dword ptr [EBP + -0x1c],ECX     ; 005e9925
    PUSH EAX                            ; 005e9928 | g_CDemonRendererInstance
    MOV dword ptr [EBP + -0x18],ESI     ; 005e9929
    MOV dword ptr [EBP + -0x14],EDX     ; 005e992c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005e992f
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 005e9934
    PUSH 0xffff                         ; 005e9937
    MOV EDX,dword ptr [0x006703ec]      ; 005e993c | g_CDemonRendererPtr2
    PUSH EDX                            ; 005e9942 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 005e9943
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005e9948
    MOV ECX,dword ptr [EBX + 0x3b4]     ; 005e994b
    LEA EAX,[EBX + 0x66c]               ; 005e9951
    CMP ECX,0x2                         ; 005e9957
    JZ 0x005e9a33                       ; 005e995a
        ;   XREF to: 005e9a33 (CONDITIONAL_JUMP)  ; LAB_005e9a33
    PUSH EAX                            ; 005e9960
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005e9961
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e9966
    MOV ESI,0x657069                    ; 005e9969 | = "MENUCLD2.RAW"
    LEA EDI,[EAX + 0x12c]               ; 005e996e
    PUSH EDI                            ; 005e9974
    MOV AL,byte ptr [ESI]               ; 005e9975 | = "MENUCLD2.RAW" | s_NUCLD2.RAW_0065706b
        ;   Label: LAB_005e9975
    MOV byte ptr [EDI],AL               ; 005e9977
    CMP AL,0x0                          ; 005e9979
    JZ 0x005e998d                       ; 005e997b
        ;   XREF to: 005e998d (CONDITIONAL_JUMP)  ; LAB_005e998d
    MOV AL,byte ptr [ESI + 0x1]         ; 005e997d | s_ENUCLD2.RAW_0065706a | s_UCLD2.RAW_0065706c
    ADD ESI,0x2                         ; 005e9980
    MOV byte ptr [EDI + 0x1],AL         ; 005e9983
    ADD EDI,0x2                         ; 005e9986
    CMP AL,0x0                          ; 005e9989
    JNZ 0x005e9975                      ; 005e998b
        ;   XREF to: 005e9975 (CONDITIONAL_JUMP)  ; LAB_005e9975
    POP EDI                             ; 005e998d
        ;   Label: LAB_005e998d
    CMP dword ptr [EBX + 0x3b4],0x0     ; 005e998e
    JNZ 0x005e9a1e                      ; 005e9995
        ;   XREF to: 005e9a1e (CONDITIONAL_JUMP)  ; LAB_005e9a1e
    PUSH 0x1                            ; 005e999b
    MOV EDX,dword ptr [0x006703ec]      ; 005e999d | g_CDemonRendererPtr2
    PUSH EDX                            ; 005e99a3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 005e99a4
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005e99a9
        ;   Label: LAB_005e99a9
    PUSH 0x267                          ; 005e99ac
    ADD EBX,0x66c                       ; 005e99b1
    PUSH 0x0                            ; 005e99b7
    PUSH EBX                            ; 005e99b9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005e99ba
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005e99bf
    PUSH 0x0                            ; 005e99c2
    MOV ECX,dword ptr [0x006703ec]      ; 005e99c4 | g_CDemonRendererPtr2
    PUSH ECX                            ; 005e99ca | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 005e99cb
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005e99d0
    MOV EBX,dword ptr [0x006703ec]      ; 005e99d3 | g_CDemonRendererPtr2
    PUSH EBX                            ; 005e99d9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 005e99da
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    ADD ESP,0x4                         ; 005e99df
    MOV ESI,dword ptr [0x006703ec]      ; 005e99e2 | g_CDemonRendererPtr2
    PUSH ESI                            ; 005e99e8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 005e99e9
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    MOV EAX,0x1                         ; 005e99ee
    ADD ESP,0x4                         ; 005e99f3
    MOV ESP,EBP                         ; 005e99f6
    POP EBP                             ; 005e99f8
    POP EDI                             ; 005e99f9
    POP ESI                             ; 005e99fa
    POP EBX                             ; 005e99fb
    LEA EAX,[EAX]                       ; 005e99fc
    XOR EAX,EAX                         ; 005e9a01
        ;   Label: LAB_005e9a01
    MOV ESP,EBP                         ; 005e9a03
    POP EBP                             ; 005e9a05
    POP EDI                             ; 005e9a06
    POP ESI                             ; 005e9a07
    POP EBX                             ; 005e9a08
    RET                                 ; 005e9a09
    LEA EAX,[EBX + 0x3c4]               ; 005e9a0a
        ;   Label: LAB_005e9a0a
    PUSH EAX                            ; 005e9a10
    CALL core_flame.cpp_CFlame_FUN_004ca110 ; 005e9a11
        ;   XREF to: 004ca110 (UNCONDITIONAL_CALL)  ; float core_flame.cpp_CFlame_FUN_004ca110(CFlame * this_ptr)
    ADD ESP,0x4                         ; 005e9a16
    JMP 0x005e98d6                      ; 005e9a19
        ;   XREF to: 005e98d6 (UNCONDITIONAL_JUMP)  ; LAB_005e98d6
    PUSH 0x4000                         ; 005e9a1e
        ;   Label: LAB_005e9a1e
    MOV EAX,[0x006703ec]                ; 005e9a23 | g_CDemonRendererPtr2
    PUSH EAX                            ; 005e9a28 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 005e9a29
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    JMP 0x005e99a9                      ; 005e9a2e
        ;   XREF to: 005e99a9 (UNCONDITIONAL_JUMP)  ; LAB_005e99a9
    FLD float ptr [EBX + 0x7ec]         ; 005e9a33
        ;   Label: LAB_005e9a33
    CALL crt_math.c_round_FUN_005fe6b0  ; 005e9a39
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EAX                            ; 005e9a3e
    FISTP dword ptr [EBP + -0x4]        ; 005e9a3f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005e9a42
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDI,dword ptr [EBP + -0x4]      ; 005e9a47
    ADD ESP,0x4                         ; 005e9a4a
    AND EDI,0xf                         ; 005e9a4d
    PUSH EDI                            ; 005e9a50
    PUSH 0x657076                       ; 005e9a51 | = "BWATER%d.RAW"
    ADD EAX,0x12c                       ; 005e9a56
    PUSH EAX                            ; 005e9a5b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005e9a5c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005e9a61
    PUSH 0xbb80                         ; 005e9a64
    MOV ESI,dword ptr [0x006703ec]      ; 005e9a69 | g_CDemonRendererPtr2
    PUSH ESI                            ; 005e9a6f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 005e9a70
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    JMP 0x005e99a9                      ; 005e9a75
        ;   XREF to: 005e99a9 (UNCONDITIONAL_JUMP)  ; LAB_005e99a9


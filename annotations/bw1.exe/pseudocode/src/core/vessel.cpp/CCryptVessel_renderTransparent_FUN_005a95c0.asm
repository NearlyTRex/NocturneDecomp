; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_005a95c0(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_MENUCLD2_RAW_005f9165+1
;   undefined4 s_MENUCLD2_RAW_005f9165+2
;   undefined4 s_MENUCLD2_RAW_005f9165+3
;   undefined4 s_MENUCLD2_RAW_005f9165+4
;   TerminatedCString s_BWATER_d_RAW_005f9173
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   core_flame.cpp_CFlame_renderTransparent_FUN_004b8100
;   crt_math.c_round_FUN_005c03a0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_matrix.c_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a95c0
        ;   Label: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_005a95c0
    PUSH ESI                            ; 005a95c1
    PUSH EDI                            ; 005a95c2
    PUSH EBP                            ; 005a95c3
    MOV EBP,ESP                         ; 005a95c4
    SUB ESP,0x1c                        ; 005a95c6
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a95c9
    CMP dword ptr [EBX + 0x7e8],0x0     ; 005a95cc
    JZ 0x005a9711                       ; 005a95d3
        ;   XREF to: 005a9711 (CONDITIONAL_JUMP)  ; LAB_005a9711
    CMP dword ptr [EBX + 0x3b4],0x1     ; 005a95d9
    JZ 0x005a971a                       ; 005a95e0
        ;   XREF to: 005a971a (CONDITIONAL_JUMP)  ; LAB_005a971a
    LEA EAX,[EBX + 0x20]                ; 005a95e6
        ;   Label: LAB_005a95e6
    PUSH EAX                            ; 005a95e9
    MOV ESI,dword ptr [0x00612560]      ; 005a95ea | DAT_00612560
    PUSH ESI                            ; 005a95f0 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 005a95f1
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005a95f6
    PUSH 0x0                            ; 005a95f9
    LEA EAX,[EBX + 0x30]                ; 005a95fb
    PUSH EAX                            ; 005a95fe
    MOV EDI,dword ptr [0x00612560]      ; 005a95ff | DAT_00612560
    PUSH EDI                            ; 005a9605 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 005a9606
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    XOR EAX,EAX                         ; 005a960b
    MOV dword ptr [EBP + -0x10],EAX     ; 005a960d
    MOV dword ptr [EBP + -0x8],EAX      ; 005a9610
    MOV ESI,0x400ccccd                  ; 005a9613
    MOV EAX,dword ptr [EBX + 0x668]     ; 005a9618
    ADD ESP,0xc                         ; 005a961e
    MOV dword ptr [EBP + -0xc],EAX      ; 005a9621
    LEA EAX,[EBP + -0x1c]               ; 005a9624
    XOR EDX,EDX                         ; 005a9627
    PUSH EAX                            ; 005a9629
    LEA EAX,[EBP + -0x10]               ; 005a962a
    XOR ECX,ECX                         ; 005a962d
    PUSH EAX                            ; 005a962f
    MOV EAX,[0x00612560]                ; 005a9630 | DAT_00612560
    MOV dword ptr [EBP + -0x1c],ECX     ; 005a9635
    PUSH EAX                            ; 005a9638 | DAT_01bc120c
    MOV dword ptr [EBP + -0x18],ESI     ; 005a9639
    MOV dword ptr [EBP + -0x14],EDX     ; 005a963c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 005a963f
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 005a9644
    PUSH 0xffff                         ; 005a9647
    MOV EDX,dword ptr [0x00612560]      ; 005a964c | DAT_00612560
    PUSH EDX                            ; 005a9652 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 005a9653
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005a9658
    MOV ECX,dword ptr [EBX + 0x3b4]     ; 005a965b
    LEA EAX,[EBX + 0x66c]               ; 005a9661
    CMP ECX,0x2                         ; 005a9667
    JZ 0x005a9743                       ; 005a966a
        ;   XREF to: 005a9743 (CONDITIONAL_JUMP)  ; LAB_005a9743
    PUSH EAX                            ; 005a9670
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005a9671
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a9676
    MOV ESI,0x5f9166                    ; 005a9679 | s_MENUCLD2_RAW_005f9165+1
    LEA EDI,[EAX + 0x12c]               ; 005a967e
    PUSH EDI                            ; 005a9684
    MOV AL,byte ptr [ESI]               ; 005a9685 | s_MENUCLD2_RAW_005f9165+1 | s_MENUCLD2_RAW_005f9165+3
        ;   Label: LAB_005a9685
    MOV byte ptr [EDI],AL               ; 005a9687
    CMP AL,0x0                          ; 005a9689
    JZ 0x005a969d                       ; 005a968b
        ;   XREF to: 005a969d (CONDITIONAL_JUMP)  ; LAB_005a969d
    MOV AL,byte ptr [ESI + 0x1]         ; 005a968d | s_MENUCLD2_RAW_005f9165+2 | s_MENUCLD2_RAW_005f9165+4
    ADD ESI,0x2                         ; 005a9690
    MOV byte ptr [EDI + 0x1],AL         ; 005a9693
    ADD EDI,0x2                         ; 005a9696
    CMP AL,0x0                          ; 005a9699
    JNZ 0x005a9685                      ; 005a969b
        ;   XREF to: 005a9685 (CONDITIONAL_JUMP)  ; LAB_005a9685
    POP EDI                             ; 005a969d
        ;   Label: LAB_005a969d
    CMP dword ptr [EBX + 0x3b4],0x0     ; 005a969e
    JNZ 0x005a972e                      ; 005a96a5
        ;   XREF to: 005a972e (CONDITIONAL_JUMP)  ; LAB_005a972e
    PUSH 0x1                            ; 005a96ab
    MOV EDX,dword ptr [0x00612560]      ; 005a96ad | DAT_00612560
    PUSH EDX                            ; 005a96b3 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 005a96b4
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005a96b9
        ;   Label: LAB_005a96b9
    PUSH 0x267                          ; 005a96bc
    ADD EBX,0x66c                       ; 005a96c1
    PUSH 0x0                            ; 005a96c7
    PUSH EBX                            ; 005a96c9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 005a96ca
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005a96cf
    PUSH 0x0                            ; 005a96d2
    MOV ECX,dword ptr [0x00612560]      ; 005a96d4 | DAT_00612560
    PUSH ECX                            ; 005a96da | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 005a96db
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005a96e0
    MOV EBX,dword ptr [0x00612560]      ; 005a96e3 | DAT_00612560
    PUSH EBX                            ; 005a96e9 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 005a96ea
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 005a96ef
    MOV ESI,dword ptr [0x00612560]      ; 005a96f2 | DAT_00612560
    PUSH ESI                            ; 005a96f8 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 005a96f9
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    MOV EAX,0x1                         ; 005a96fe
    ADD ESP,0x4                         ; 005a9703
    MOV ESP,EBP                         ; 005a9706
    POP EBP                             ; 005a9708
    POP EDI                             ; 005a9709
    POP ESI                             ; 005a970a
    POP EBX                             ; 005a970b
    LEA EAX,[EAX]                       ; 005a970c
    XOR EAX,EAX                         ; 005a9711
        ;   Label: LAB_005a9711
    MOV ESP,EBP                         ; 005a9713
    POP EBP                             ; 005a9715
    POP EDI                             ; 005a9716
    POP ESI                             ; 005a9717
    POP EBX                             ; 005a9718
    RET                                 ; 005a9719
    LEA EAX,[EBX + 0x3c4]               ; 005a971a
        ;   Label: LAB_005a971a
    PUSH EAX                            ; 005a9720
    CALL core_flame.cpp_CFlame_renderTransparent_FUN_004b8100 ; 005a9721
        ;   XREF to: 004b8100 (UNCONDITIONAL_CALL)  ; int core_flame.cpp_CFlame_renderTransparent_FUN_004b8100(CFlame * this_ptr)
    ADD ESP,0x4                         ; 005a9726
    JMP 0x005a95e6                      ; 005a9729
        ;   XREF to: 005a95e6 (UNCONDITIONAL_JUMP)  ; LAB_005a95e6
    PUSH 0x4000                         ; 005a972e
        ;   Label: LAB_005a972e
    MOV EAX,[0x00612560]                ; 005a9733 | DAT_00612560
    PUSH EAX                            ; 005a9738 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 005a9739
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    JMP 0x005a96b9                      ; 005a973e
        ;   XREF to: 005a96b9 (UNCONDITIONAL_JUMP)  ; LAB_005a96b9
    FLD float ptr [EBX + 0x7ec]         ; 005a9743
        ;   Label: LAB_005a9743
    CALL crt_math.c_round_FUN_005c03a0  ; 005a9749
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EAX                            ; 005a974e
    FISTP dword ptr [EBP + -0x4]        ; 005a974f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005a9752
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV EDI,dword ptr [EBP + -0x4]      ; 005a9757
    ADD ESP,0x4                         ; 005a975a
    AND EDI,0xf                         ; 005a975d
    PUSH EDI                            ; 005a9760
    PUSH 0x5f9173                       ; 005a9761 | = "BWATER%d.RAW"
    ADD EAX,0x12c                       ; 005a9766
    PUSH EAX                            ; 005a976b
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005a976c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 005a9771
    PUSH 0xbb80                         ; 005a9774
    MOV ESI,dword ptr [0x00612560]      ; 005a9779 | DAT_00612560
    PUSH ESI                            ; 005a977f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 005a9780
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    JMP 0x005a96b9                      ; 005a9785
        ;   XREF to: 005a96b9 (UNCONDITIONAL_JUMP)  ; LAB_005a96b9


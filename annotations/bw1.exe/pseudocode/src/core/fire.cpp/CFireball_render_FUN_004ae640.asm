; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireball_render_FUN_004ae640(CFireball *this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005df244
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c3ec
;   undefined4 DAT_0061c41c
;   undefined4 DAT_0061c4ac
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629040
;   undefined4 DAT_0062905c
;   undefined4 DAT_00629060
;   ... and 22 more
;
; Called Functions:
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae640
        ;   Label: core_fire.cpp_CFireball_render_FUN_004ae640
    PUSH ESI                            ; 004ae641
    PUSH EDI                            ; 004ae642
    PUSH EBP                            ; 004ae643
    MOV EBP,ESP                         ; 004ae644
    SUB ESP,0xf4                        ; 004ae646
    AND ESP,0xfffffff8                  ; 004ae64c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ae64f
    MOV EDX,0x3f000000                  ; 004ae652
    MOV ECX,dword ptr [EAX + 0x4c]      ; 004ae657
    MOV dword ptr [ESP + 0xe4],EDX      ; 004ae65a
    TEST ECX,ECX                        ; 004ae661
    JZ 0x004ae734                       ; 004ae663
        ;   XREF to: 004ae734 (CONDITIONAL_JUMP)  ; LAB_004ae734
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ae669
        ;   Label: LAB_004ae669
    CMP dword ptr [EAX + 0x4c],0x2      ; 004ae66c
    JNZ 0x004ae67d                      ; 004ae670
        ;   XREF to: 004ae67d (CONDITIONAL_JUMP)  ; LAB_004ae67d
    MOV dword ptr [ESP + 0xe4],0x3f2a7efa ; 004ae672
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ae67d
        ;   Label: LAB_004ae67d
    PUSH EAX                            ; 004ae680
    MOV EDX,dword ptr [0x00612560]      ; 004ae681 | DAT_00612560
    PUSH EDX                            ; 004ae687 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004ae688
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004ae68d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ae690
    PUSH 0x0                            ; 004ae693
    ADD EAX,0x54                        ; 004ae695
    PUSH EAX                            ; 004ae698
    MOV ECX,dword ptr [0x00612560]      ; 004ae699 | DAT_00612560
    PUSH ECX                            ; 004ae69f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004ae6a0
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004ae6a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ae6a8
    MOV EBX,dword ptr [EAX + 0x4c]      ; 004ae6ab
    TEST EBX,EBX                        ; 004ae6ae
    JNZ 0x004ae744                      ; 004ae6b0
        ;   XREF to: 004ae744 (CONDITIONAL_JUMP)  ; LAB_004ae744
    MOV EBX,0x1c57234                   ; 004ae6b6
    PUSH EBX                            ; 004ae6bb
        ;   Label: LAB_004ae6bb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004ae6bc
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ae6c1
    LEA EDI,[ESP + 0x8]                 ; 004ae6c4
    MOV ESI,dword ptr [EAX + 0x350]     ; 004ae6c8
    PUSH 0x0                            ; 004ae6ce
    LEA EAX,[ESP + 0xc]                 ; 004ae6d0
    MOV ECX,0x6                         ; 004ae6d4
    PUSH EAX                            ; 004ae6d9
    MOVSD.REP ES:EDI,ESI                ; 004ae6da
    CALL core_box.cpp_FUN_004207b0      ; 004ae6dc
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004ae6e1
    MOV ESI,EAX                         ; 004ae6e4
    TEST EAX,EAX                        ; 004ae6e6
    JZ 0x004ae71a                       ; 004ae6e8
        ;   XREF to: 004ae71a (CONDITIONAL_JUMP)  ; LAB_004ae71a
    PUSH 0x0                            ; 004ae6ea
    LEA EAX,[ESP + 0x18]                ; 004ae6ec
    PUSH EAX                            ; 004ae6f0
    LEA EAX,[ESP + 0x10]                ; 004ae6f1
    PUSH EAX                            ; 004ae6f5
    PUSH 0x2c8af28                      ; 004ae6f6 | DAT_02c8af28
    MOV EDI,dword ptr [EBP + 0x14]      ; 004ae6fb
    PUSH EDI                            ; 004ae6fe
    MOV EAX,[0x00622c18]                ; 004ae6ff | g_CDemonSetPtr
    PUSH EAX                            ; 004ae704 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30 ; 004ae705
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 004ae70a
    PUSH -0x1                           ; 004ae70d
    PUSH 0x0                            ; 004ae70f
    PUSH EBX                            ; 004ae711
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004ae712
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004ae717
    MOV EDX,dword ptr [0x00612560]      ; 004ae71a | DAT_00612560
        ;   Label: LAB_004ae71a
    PUSH EDX                            ; 004ae720 | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004ae721
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004ae726
    TEST ESI,ESI                        ; 004ae729
    JNZ 0x004ae75d                      ; 004ae72b
        ;   XREF to: 004ae75d (CONDITIONAL_JUMP)  ; LAB_004ae75d
    MOV ESP,EBP                         ; 004ae72d
        ;   Label: LAB_004ae72d
    POP EBP                             ; 004ae72f
    POP EDI                             ; 004ae730
    POP ESI                             ; 004ae731
    POP EBX                             ; 004ae732
    RET                                 ; 004ae733
    MOV dword ptr [ESP + 0xe4],0x40800000 ; 004ae734
        ;   Label: LAB_004ae734
    JMP 0x004ae669                      ; 004ae73f
        ;   XREF to: 004ae669 (UNCONDITIONAL_JUMP)  ; LAB_004ae669
    CMP EBX,0x1                         ; 004ae744
        ;   Label: LAB_004ae744
    JNZ 0x004ae753                      ; 004ae747
        ;   XREF to: 004ae753 (CONDITIONAL_JUMP)  ; LAB_004ae753
    MOV EBX,0x1c573b0                   ; 004ae749
    JMP 0x004ae6bb                      ; 004ae74e
        ;   XREF to: 004ae6bb (UNCONDITIONAL_JUMP)  ; LAB_004ae6bb
    MOV EBX,0x1c5752c                   ; 004ae753
        ;   Label: LAB_004ae753
    JMP 0x004ae6bb                      ; 004ae758
        ;   XREF to: 004ae6bb (UNCONDITIONAL_JUMP)  ; LAB_004ae6bb
    MOV ECX,dword ptr [0x00612560]      ; 004ae75d | DAT_00612560
        ;   Label: LAB_004ae75d
    PUSH ECX                            ; 004ae763 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 004ae764
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004ae769
    TEST EAX,EAX                        ; 004ae76c
    JNZ 0x004ae72d                      ; 004ae76e
        ;   XREF to: 004ae72d (CONDITIONAL_JUMP)  ; LAB_004ae72d
    MOV EBX,0x80000                     ; 004ae770
    PUSH EAX                            ; 004ae775
    MOV ESI,0xf80000                    ; 004ae776
    MOV EDI,dword ptr [0x00612560]      ; 004ae77b | DAT_00612560
    PUSH 0x1c57078                      ; 004ae781 | DAT_01c57078
    MOV dword ptr [0x0062902c],EBX      ; 004ae786 | DAT_0062902c
    MOV dword ptr [0x00629030],ESI      ; 004ae78c | DAT_00629030
    MOV dword ptr [0x0062905c],ESI      ; 004ae792 | DAT_0062905c
    MOV dword ptr [0x00629060],ESI      ; 004ae798 | DAT_00629060
    MOV dword ptr [0x0062908c],ESI      ; 004ae79e | DAT_0062908c
    MOV dword ptr [0x00629090],EBX      ; 004ae7a4 | DAT_00629090
    PUSH EDI                            ; 004ae7aa | DAT_01bc120c
    MOV dword ptr [0x006290bc],EBX      ; 004ae7ab | DAT_006290bc
    MOV dword ptr [0x006290c0],EBX      ; 004ae7b1 | DAT_006290c0
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004ae7b7
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004ae7bc
    FLD float ptr [ESP + 0xe4]          ; 004ae7bf
    FCHS                                ; 004ae7c6
    FSTP float ptr [ESP + 0x5c]         ; 004ae7c8
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004ae7cc
    MOV dword ptr [ESP + 0xdc],EAX      ; 004ae7d0
    MOV dword ptr [ESP + 0x60],EAX      ; 004ae7d7
    XOR EAX,EAX                         ; 004ae7db
    LEA EBX,[ESP + 0x44]                ; 004ae7dd
    MOV dword ptr [ESP + 0x64],EAX      ; 004ae7e1
    LEA EAX,[ESP + 0x5c]                ; 004ae7e5
    MOV EDX,dword ptr [0x00612560]      ; 004ae7e9 | DAT_00612560
    FLD float ptr [EAX]                 ; 004ae7ef
    FMUL float ptr [0x005fff94]         ; 004ae7f1 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ae7f7
    FLD float ptr [EAX + 0x4]           ; 004ae7f9
    FMUL float ptr [0x005fff94]         ; 004ae7fc | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ae802
    FLD float ptr [EAX + 0x8]           ; 004ae805
    FMUL float ptr [0x005fff94]         ; 004ae808 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ae80e
    LEA EAX,[ESP + 0x44]                ; 004ae811
    PUSH EAX                            ; 004ae815
    MOV EAX,dword ptr [EDX]             ; 004ae816 | DAT_01bc120c
    PUSH EAX                            ; 004ae818
    CALL engine_special.cpp_FUN_00580173 ; 004ae819
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ae81e
    LEA EBX,[ESP + 0x68]                ; 004ae821
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004ae825
    XOR EDX,EDX                         ; 004ae82c
    MOV dword ptr [ESP + 0x5c],EAX      ; 004ae82e
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004ae832
    MOV dword ptr [ESP + 0x64],EDX      ; 004ae839
    MOV dword ptr [ESP + 0x60],EAX      ; 004ae83d
    LEA EAX,[ESP + 0x5c]                ; 004ae841
    MOV EDX,dword ptr [0x00612560]      ; 004ae845 | DAT_00612560
    FLD float ptr [EAX]                 ; 004ae84b
    FMUL float ptr [0x005fff94]         ; 004ae84d | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ae853
    FLD float ptr [EAX + 0x4]           ; 004ae855
    FMUL float ptr [0x005fff94]         ; 004ae858 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ae85e
    FLD float ptr [EAX + 0x8]           ; 004ae861
    FMUL float ptr [0x005fff94]         ; 004ae864 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ae86a
    LEA EAX,[ESP + 0x68]                ; 004ae86d
    PUSH EAX                            ; 004ae871
    MOV EAX,dword ptr [EDX]             ; 004ae872 | DAT_01bc120c
    ADD EAX,0x30                        ; 004ae874
    PUSH EAX                            ; 004ae877
    CALL engine_special.cpp_FUN_00580173 ; 004ae878
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x94]                ; 004ae87d
    ADD ESP,0x8                         ; 004ae884
    MOV EDX,dword ptr [0x00612560]      ; 004ae887 | DAT_00612560
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004ae88d
    XOR ECX,ECX                         ; 004ae894
    MOV dword ptr [ESP + 0x5c],EAX      ; 004ae896
    MOV dword ptr [ESP + 0x60],EAX      ; 004ae89a
    LEA EAX,[ESP + 0x5c]                ; 004ae89e
    MOV dword ptr [ESP + 0x64],ECX      ; 004ae8a2
    FLD float ptr [EAX]                 ; 004ae8a6
    FMUL float ptr [0x005fff94]         ; 004ae8a8 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ae8ae
    FLD float ptr [EAX + 0x4]           ; 004ae8b0
    FMUL float ptr [0x005fff94]         ; 004ae8b3 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ae8b9
    FLD float ptr [EAX + 0x8]           ; 004ae8bc
    FMUL float ptr [0x005fff94]         ; 004ae8bf | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ae8c5
    LEA EAX,[ESP + 0x8c]                ; 004ae8c8
    PUSH EAX                            ; 004ae8cf
    MOV EAX,dword ptr [EDX]             ; 004ae8d0 | DAT_01bc120c
    ADD EAX,0x60                        ; 004ae8d2
    PUSH EAX                            ; 004ae8d5
    CALL engine_special.cpp_FUN_00580173 ; 004ae8d6
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ae8db
    XOR EBX,EBX                         ; 004ae8de
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004ae8e0
    MOV dword ptr [ESP + 0x64],EBX      ; 004ae8e7
    MOV dword ptr [ESP + 0x5c],EAX      ; 004ae8eb
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004ae8ef
    LEA EBX,[ESP + 0x80]                ; 004ae8f6
    MOV dword ptr [ESP + 0x60],EAX      ; 004ae8fd
    LEA EAX,[ESP + 0x5c]                ; 004ae901
    MOV EDX,dword ptr [0x00612560]      ; 004ae905 | DAT_00612560
    FLD float ptr [EAX]                 ; 004ae90b
    FMUL float ptr [0x005fff94]         ; 004ae90d | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ae913
    FLD float ptr [EAX + 0x4]           ; 004ae915
    FMUL float ptr [0x005fff94]         ; 004ae918 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ae91e
    FLD float ptr [EAX + 0x8]           ; 004ae921
    FMUL float ptr [0x005fff94]         ; 004ae924 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ae92a
    LEA EAX,[ESP + 0x80]                ; 004ae92d
    PUSH EAX                            ; 004ae934
    MOV EAX,dword ptr [EDX]             ; 004ae935 | DAT_01bc120c
    ADD EAX,0x90                        ; 004ae937
    PUSH EAX                            ; 004ae93c
    CALL engine_special.cpp_FUN_00580173 ; 004ae93d
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ae942
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ae945
    MOV ESI,dword ptr [EAX + 0x4c]      ; 004ae948
    CMP ESI,0x1                         ; 004ae94b
    JNZ 0x004aee2e                      ; 004ae94e
        ;   XREF to: 004aee2e (CONDITIONAL_JUMP)  ; LAB_004aee2e
    PUSH 0x61c4ac                       ; 004ae954 | DAT_0061c4ac
    MOV ECX,dword ptr [0x00612560]      ; 004ae959 | DAT_00612560
    PUSH ECX                            ; 004ae95f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004ae960
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004ae960
    ADD ESP,0x8                         ; 004ae965
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ae968
    MOV EDX,0xffff                      ; 004ae96b
    MOV EBX,dword ptr [0x01c51cac]      ; 004ae970 | DAT_01c51cac
    MOV EAX,dword ptr [EAX + 0x40]      ; 004ae976
    SUB EDX,EBX                         ; 004ae979
    MOV ESI,0xffff                      ; 004ae97b
    IMUL EDX                            ; 004ae980
    SHRD EAX,EDX,0x10                   ; 004ae982
    PUSH 0x1                            ; 004ae986
    MOV [0x00629040],EAX                ; 004ae988 | DAT_00629040
    MOV dword ptr [0x00629034],ESI      ; 004ae98d | DAT_00629034
    MOV dword ptr [0x00629038],ESI      ; 004ae993 | DAT_00629038
    MOV dword ptr [0x0062903c],ESI      ; 004ae999 | DAT_0062903c
    MOV dword ptr [0x00629064],ESI      ; 004ae99f | DAT_00629064
    MOV dword ptr [0x00629068],ESI      ; 004ae9a5 | DAT_00629068
    MOV dword ptr [0x0062906c],ESI      ; 004ae9ab | DAT_0062906c
    MOV dword ptr [0x00629094],ESI      ; 004ae9b1 | DAT_00629094
    MOV dword ptr [0x00629098],ESI      ; 004ae9b7 | DAT_00629098
    MOV dword ptr [0x0062909c],ESI      ; 004ae9bd | DAT_0062909c
    MOV dword ptr [0x006290c4],ESI      ; 004ae9c3 | DAT_006290c4
    MOV dword ptr [0x006290c8],ESI      ; 004ae9c9 | DAT_006290c8
    MOV dword ptr [0x006290cc],ESI      ; 004ae9cf | DAT_006290cc
    MOV ESI,dword ptr [0x00612560]      ; 004ae9d5 | DAT_00612560
    MOV [0x00629070],EAX                ; 004ae9db | DAT_00629070
    PUSH ESI                            ; 004ae9e0 | DAT_01bc120c
    MOV [0x006290a0],EAX                ; 004ae9e1 | DAT_006290a0
    MOV [0x006290d0],EAX                ; 004ae9e6 | DAT_006290d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004ae9eb
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004ae9f0
    PUSH 0x1c57090                      ; 004ae9f3
    MOV EDI,dword ptr [0x00612560]      ; 004ae9f8 | DAT_00612560
    PUSH EDI                            ; 004ae9fe | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 004ae9ff
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004aea04
    PUSH 0x0                            ; 004aea07
    MOV EAX,[0x00612560]                ; 004aea09 | DAT_00612560
    PUSH EAX                            ; 004aea0e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004aea0f
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004aea14
    MOV EDX,dword ptr [0x00612560]      ; 004aea17 | DAT_00612560
    PUSH EDX                            ; 004aea1d | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004aea1e
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004aea23
    MOV EAX,dword ptr [EBP + 0x14]      ; 004aea26
    MOV ECX,dword ptr [EAX + 0x4c]      ; 004aea29
    CMP ECX,0x1                         ; 004aea2c
    JZ 0x004ae72d                       ; 004aea2f
        ;   XREF to: 004ae72d (CONDITIONAL_JUMP)  ; LAB_004ae72d
    CMP ECX,0x2                         ; 004aea35
    JZ 0x004ae72d                       ; 004aea38
        ;   XREF to: 004ae72d (CONDITIONAL_JUMP)  ; LAB_004ae72d
    LEA EDI,[ESP + 0x38]                ; 004aea3e
    MOV ESI,EAX                         ; 004aea42
    MOVSD ES:EDI,ESI                    ; 004aea44
    MOVSD ES:EDI,ESI                    ; 004aea45
    MOVSD ES:EDI,ESI                    ; 004aea46
    MOV ESI,EAX                         ; 004aea47
    LEA EDI,[ESP + 0x20]                ; 004aea49
    LEA ESI,[ESI + 0xc]                 ; 004aea4d
    XOR EAX,EAX                         ; 004aea50
    MOVSD ES:EDI,ESI                    ; 004aea52
    MOVSD ES:EDI,ESI                    ; 004aea53
    MOVSD ES:EDI,ESI                    ; 004aea54
    MOV dword ptr [ESP + 0xf0],EAX      ; 004aea55
    MOV ESI,0x3f800000                  ; 004aea5c
    MOV EDI,0x3dcccccd                  ; 004aea61
    MOV EAX,dword ptr [EBP + 0x14]      ; 004aea66
    MOV dword ptr [ESP + 0x4],ESI       ; 004aea69
    ADD EAX,0x18                        ; 004aea6d
    MOV dword ptr [ESP],EDI             ; 004aea70
    MOV dword ptr [ESP + 0xec],EAX      ; 004aea73
    FLD float ptr [ESP]                 ; 004aea7a
        ;   Label: LAB_004aea7a
    MOV EAX,dword ptr [ESP + 0xec]      ; 004aea7d
    FLD ST0                             ; 004aea84
    FLD double ptr [0x005df244]         ; 004aea86 | DAT_005df244
    FXCH                                ; 004aea8c
    FMUL ST1                            ; 004aea8e
    FLD float ptr [EAX]                 ; 004aea90
    FXCH                                ; 004aea92
    FSTP ST3                            ; 004aea94
    FXCH ST2                            ; 004aea96
    FSTP float ptr [ESP]                ; 004aea98
    FXCH                                ; 004aea9b
    FMUL float ptr [ESP]                ; 004aea9d
    FLD float ptr [EAX + 0x4]           ; 004aeaa0
    FMUL float ptr [ESP]                ; 004aeaa3
    FLD float ptr [EAX + 0x8]           ; 004aeaa6
    FMUL float ptr [ESP]                ; 004aeaa9
    FLD float ptr [ESP + 0x4]           ; 004aeaac
    FLD float ptr [ESP + 0x20]          ; 004aeab0
    LEA EDI,[ESP + 0xb0]                ; 004aeab4
    LEA ESI,[ESP + 0xa4]                ; 004aeabb
    FXCH ST4                            ; 004aeac2
    FSTP float ptr [ESP + 0xa4]         ; 004aeac4
    FXCH ST2                            ; 004aeacb
    FSTP float ptr [ESP + 0xa8]         ; 004aeacd
    FSTP float ptr [ESP + 0xac]         ; 004aead4
    MOVSD ES:EDI,ESI                    ; 004aeadb
    MOVSD ES:EDI,ESI                    ; 004aeadc
    MOVSD ES:EDI,ESI                    ; 004aeadd
    FLD ST0                             ; 004aeade
    FXCH ST2                            ; 004aeae0
    FSUB float ptr [ESP + 0xb0]         ; 004aeae2
    FXCH ST2                            ; 004aeae9
    FMULP ST3                           ; 004aeaeb
    FXCH                                ; 004aeaed
    FST float ptr [ESP + 0x20]          ; 004aeaef
    FMUL float ptr [ESP]                ; 004aeaf3
    FLD float ptr [ESP + 0x28]          ; 004aeaf6
    FLD float ptr [ESP + 0x24]          ; 004aeafa
    FSUB float ptr [ESP + 0xb4]         ; 004aeafe
    FXCH                                ; 004aeb05
    FSUB float ptr [ESP + 0xb8]         ; 004aeb07
    FXCH                                ; 004aeb0e
    FST float ptr [ESP + 0x24]          ; 004aeb10
    FMUL float ptr [ESP]                ; 004aeb14
    FXCH                                ; 004aeb17
    FST float ptr [ESP + 0x28]          ; 004aeb19
    FMUL float ptr [ESP]                ; 004aeb1d
    FLD float ptr [ESP + 0x38]          ; 004aeb20
    FLD float ptr [ESP + 0x3c]          ; 004aeb24
    FXCH ST6                            ; 004aeb28
    FSTP ST5                            ; 004aeb2a
    FXCH ST4                            ; 004aeb2c
    FSTP float ptr [ESP + 0x4]          ; 004aeb2e
    FLD float ptr [ESP + 0x40]          ; 004aeb32
    LEA EAX,[ESP + 0x38]                ; 004aeb36
    MOV EDX,dword ptr [0x00612560]      ; 004aeb3a | DAT_00612560
    PUSH EAX                            ; 004aeb40
    LEA EDI,[ESP + 0x54]                ; 004aeb41
    LEA ESI,[ESP + 0xc0]                ; 004aeb45
    FXCH ST3                            ; 004aeb4c
    FSTP float ptr [ESP + 0xc0]         ; 004aeb4e
    FXCH                                ; 004aeb55
    FSTP float ptr [ESP + 0xc4]         ; 004aeb57
    FSTP float ptr [ESP + 0xc8]         ; 004aeb5e
    MOVSD ES:EDI,ESI                    ; 004aeb65
    MOVSD ES:EDI,ESI                    ; 004aeb66
    MOVSD ES:EDI,ESI                    ; 004aeb67
    PUSH EDX                            ; 004aeb68 | DAT_01bc120c
    FXCH                                ; 004aeb69
    FSUB float ptr [ESP + 0x58]         ; 004aeb6b
    FXCH ST2                            ; 004aeb6f
    FSUB float ptr [ESP + 0x5c]         ; 004aeb71
    FXCH                                ; 004aeb75
    FSUB float ptr [ESP + 0x60]         ; 004aeb77
    FXCH ST2                            ; 004aeb7b
    FSTP float ptr [ESP + 0x40]         ; 004aeb7d
    FSTP float ptr [ESP + 0x44]         ; 004aeb81
    FSTP float ptr [ESP + 0x48]         ; 004aeb85
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004aeb89
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004aeb8e
    PUSH 0x0                            ; 004aeb91
    PUSH 0x1c57078                      ; 004aeb93 | DAT_01c57078
    MOV ECX,dword ptr [0x00612560]      ; 004aeb98 | DAT_00612560
    PUSH ECX                            ; 004aeb9e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004aeb9f
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004aeba4
    XOR EBX,EBX                         ; 004aeba7
    FLD float ptr [ESP + 0xe4]          ; 004aeba9
    FCHS                                ; 004aebb0
    FMUL float ptr [ESP + 0x4]          ; 004aebb2
    MOV dword ptr [ESP + 0x64],EBX      ; 004aebb6
    FSTP float ptr [ESP + 0x5c]         ; 004aebba
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004aebbe
    LEA EBX,[ESP + 0x2c]                ; 004aebc2
    MOV dword ptr [ESP + 0xe8],EAX      ; 004aebc6
    MOV dword ptr [ESP + 0x60],EAX      ; 004aebcd
    LEA EAX,[ESP + 0x5c]                ; 004aebd1
    MOV EDX,dword ptr [0x00612560]      ; 004aebd5 | DAT_00612560
    FLD float ptr [EAX]                 ; 004aebdb
    FMUL float ptr [0x005fff94]         ; 004aebdd | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004aebe3
    FLD float ptr [EAX + 0x4]           ; 004aebe5
    FMUL float ptr [0x005fff94]         ; 004aebe8 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004aebee
    FLD float ptr [EAX + 0x8]           ; 004aebf1
    FMUL float ptr [0x005fff94]         ; 004aebf4 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004aebfa
    LEA EAX,[ESP + 0x2c]                ; 004aebfd
    PUSH EAX                            ; 004aec01
    MOV EAX,dword ptr [EDX]             ; 004aec02 | DAT_01bc120c
    PUSH EAX                            ; 004aec04
    CALL engine_special.cpp_FUN_00580173 ; 004aec05
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004aec0a
    FLD float ptr [ESP + 0xe4]          ; 004aec0d
    FMUL float ptr [ESP + 0x4]          ; 004aec14
    XOR ESI,ESI                         ; 004aec18
    FSTP float ptr [ESP + 0xdc]         ; 004aec1a
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004aec21
    LEA EBX,[ESP + 0xc8]                ; 004aec28
    MOV dword ptr [ESP + 0x5c],EAX      ; 004aec2f
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004aec33
    MOV EDX,dword ptr [0x00612560]      ; 004aec3a | DAT_00612560
    MOV dword ptr [ESP + 0x60],EAX      ; 004aec40
    LEA EAX,[ESP + 0x5c]                ; 004aec44
    MOV dword ptr [ESP + 0x64],ESI      ; 004aec48
    FLD float ptr [EAX]                 ; 004aec4c
    FMUL float ptr [0x005fff94]         ; 004aec4e | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004aec54
    FLD float ptr [EAX + 0x4]           ; 004aec56
    FMUL float ptr [0x005fff94]         ; 004aec59 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004aec5f
    FLD float ptr [EAX + 0x8]           ; 004aec62
    FMUL float ptr [0x005fff94]         ; 004aec65 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004aec6b
    LEA EAX,[ESP + 0xc8]                ; 004aec6e
    PUSH EAX                            ; 004aec75
    MOV EAX,dword ptr [EDX]             ; 004aec76 | DAT_01bc120c
    ADD EAX,0x30                        ; 004aec78
    PUSH EAX                            ; 004aec7b
    CALL engine_special.cpp_FUN_00580173 ; 004aec7c
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004aec81
    LEA EBX,[ESP + 0x74]                ; 004aec84
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004aec88
    MOV EDX,dword ptr [0x00612560]      ; 004aec8f | DAT_00612560
    MOV dword ptr [ESP + 0x5c],EAX      ; 004aec95
    MOV dword ptr [ESP + 0x60],EAX      ; 004aec99
    LEA EAX,[ESP + 0x5c]                ; 004aec9d
    MOV dword ptr [ESP + 0x64],ESI      ; 004aeca1
    FLD float ptr [EAX]                 ; 004aeca5
    FMUL float ptr [0x005fff94]         ; 004aeca7 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004aecad
    FLD float ptr [EAX + 0x4]           ; 004aecaf
    FMUL float ptr [0x005fff94]         ; 004aecb2 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004aecb8
    FLD float ptr [EAX + 0x8]           ; 004aecbb
    FMUL float ptr [0x005fff94]         ; 004aecbe | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004aecc4
    LEA EAX,[ESP + 0x74]                ; 004aecc7
    PUSH EAX                            ; 004aeccb
    MOV EAX,dword ptr [EDX]             ; 004aeccc | DAT_01bc120c
    ADD EAX,0x60                        ; 004aecce
    PUSH EAX                            ; 004aecd1
    CALL engine_special.cpp_FUN_00580173 ; 004aecd2
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004aecd7
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004aecda
    MOV EDX,dword ptr [0x00612560]      ; 004aece1 | DAT_00612560
    MOV dword ptr [ESP + 0x5c],EAX      ; 004aece7
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004aeceb
    MOV dword ptr [ESP + 0x64],ESI      ; 004aecf2
    MOV dword ptr [ESP + 0x60],EAX      ; 004aecf6
    LEA EBX,[ESP + 0x98]                ; 004aecfa
    LEA EAX,[ESP + 0x5c]                ; 004aed01
    FLD float ptr [EAX]                 ; 004aed05
    FMUL float ptr [0x005fff94]         ; 004aed07 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004aed0d
    FLD float ptr [EAX + 0x4]           ; 004aed0f
    FMUL float ptr [0x005fff94]         ; 004aed12 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004aed18
    FLD float ptr [EAX + 0x8]           ; 004aed1b
    FMUL float ptr [0x005fff94]         ; 004aed1e | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004aed24
    LEA EAX,[ESP + 0x98]                ; 004aed27
    PUSH EAX                            ; 004aed2e
    MOV EAX,dword ptr [EDX]             ; 004aed2f | DAT_01bc120c
    ADD EAX,0x90                        ; 004aed31
    PUSH EAX                            ; 004aed36
    CALL engine_special.cpp_FUN_00580173 ; 004aed37
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004aed3c
    PUSH ESI                            ; 004aed3f
    MOV ECX,dword ptr [EBP + 0x14]      ; 004aed40
    MOV EAX,[0x007c6120]                ; 004aed43 | DAT_007c6120
    PUSH ECX                            ; 004aed48
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004aed49
    PUSH EAX                            ; 004aed4c
    CALL dword ptr [EDX + 0x4]          ; 004aed4d
    MOV EDX,0xffff                      ; 004aed50
    ADD ESP,0xc                         ; 004aed55
    MOV EBX,dword ptr [0x01c51cac]      ; 004aed58 | DAT_01c51cac
    MOV EAX,dword ptr [EBP + 0x14]      ; 004aed5e
    SUB EDX,EBX                         ; 004aed61
    MOV EAX,dword ptr [EAX + 0x40]      ; 004aed63
    MOV ESI,0xffff                      ; 004aed66
    IMUL EDX                            ; 004aed6b
    SHRD EAX,EDX,0x10                   ; 004aed6d
    PUSH 0x1                            ; 004aed71
    MOV [0x00629040],EAX                ; 004aed73 | DAT_00629040
    MOV dword ptr [0x00629034],ESI      ; 004aed78 | DAT_00629034
    MOV dword ptr [0x00629038],ESI      ; 004aed7e | DAT_00629038
    MOV dword ptr [0x0062903c],ESI      ; 004aed84 | DAT_0062903c
    MOV dword ptr [0x00629064],ESI      ; 004aed8a | DAT_00629064
    MOV dword ptr [0x00629068],ESI      ; 004aed90 | DAT_00629068
    MOV dword ptr [0x0062906c],ESI      ; 004aed96 | DAT_0062906c
    MOV dword ptr [0x00629094],ESI      ; 004aed9c | DAT_00629094
    MOV dword ptr [0x00629098],ESI      ; 004aeda2 | DAT_00629098
    MOV dword ptr [0x0062909c],ESI      ; 004aeda8 | DAT_0062909c
    MOV dword ptr [0x006290c4],ESI      ; 004aedae | DAT_006290c4
    MOV dword ptr [0x006290c8],ESI      ; 004aedb4 | DAT_006290c8
    MOV dword ptr [0x006290cc],ESI      ; 004aedba | DAT_006290cc
    MOV ESI,dword ptr [0x00612560]      ; 004aedc0 | DAT_00612560
    MOV [0x00629070],EAX                ; 004aedc6 | DAT_00629070
    PUSH ESI                            ; 004aedcb | DAT_01bc120c
    MOV [0x006290a0],EAX                ; 004aedcc | DAT_006290a0
    MOV [0x006290d0],EAX                ; 004aedd1 | DAT_006290d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004aedd6
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004aeddb
    PUSH 0x1c57090                      ; 004aedde
    MOV EDI,dword ptr [0x00612560]      ; 004aede3 | DAT_00612560
    PUSH EDI                            ; 004aede9 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 004aedea
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004aedef
    PUSH 0x0                            ; 004aedf2
    MOV EAX,[0x00612560]                ; 004aedf4 | DAT_00612560
    PUSH EAX                            ; 004aedf9 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004aedfa
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004aedff
    MOV EDX,dword ptr [0x00612560]      ; 004aee02 | DAT_00612560
    PUSH EDX                            ; 004aee08 | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004aee09
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004aee0e
    MOV ECX,dword ptr [ESP + 0xf0]      ; 004aee11
    INC ECX                             ; 004aee18
    MOV dword ptr [ESP + 0xf0],ECX      ; 004aee19
    CMP ECX,0x3                         ; 004aee20
    JGE 0x004ae72d                      ; 004aee23
        ;   XREF to: 004ae72d (CONDITIONAL_JUMP)  ; LAB_004ae72d
    JMP 0x004aea7a                      ; 004aee29
        ;   XREF to: 004aea7a (UNCONDITIONAL_JUMP)  ; LAB_004aea7a
    CMP ESI,0x2                         ; 004aee2e
        ;   Label: LAB_004aee2e
    JNZ 0x004aee44                      ; 004aee31
        ;   XREF to: 004aee44 (CONDITIONAL_JUMP)  ; LAB_004aee44
    PUSH 0x61c41c                       ; 004aee33 | DAT_0061c41c
    MOV EDX,dword ptr [0x00612560]      ; 004aee38 | DAT_00612560
    PUSH EDX                            ; 004aee3e | DAT_01bc120c
    JMP 0x004ae960                      ; 004aee3f
        ;   XREF to: 004ae960 (UNCONDITIONAL_JUMP)  ; LAB_004ae960
    PUSH 0x61c3ec                       ; 004aee44 | DAT_0061c3ec
        ;   Label: LAB_004aee44
    MOV EAX,[0x00612560]                ; 004aee49 | DAT_00612560
    PUSH EAX                            ; 004aee4e | DAT_01bc120c
    JMP 0x004ae960                      ; 004aee4f
        ;   XREF to: 004ae960 (UNCONDITIONAL_JUMP)  ; LAB_004ae960


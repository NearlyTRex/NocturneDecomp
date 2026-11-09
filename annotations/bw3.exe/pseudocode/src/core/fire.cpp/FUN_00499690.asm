; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_00499690(CVector3f *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c0580
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fc9ac
;   undefined4 DAT_005fc9dc
;   undefined4 DAT_005fca9c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b040
;   undefined4 DAT_0060b05c
;   undefined4 DAT_0060b060
;   ... and 22 more
;
; Called Functions:
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_matrix.c_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499690
        ;   Label: core_fire.cpp_FUN_00499690
    PUSH ESI                            ; 00499691
    PUSH EDI                            ; 00499692
    PUSH EBP                            ; 00499693
    MOV EBP,ESP                         ; 00499694
    SUB ESP,0xf4                        ; 00499696
    AND ESP,0xfffffff8                  ; 0049969c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049969f
    MOV EDX,0x3f000000                  ; 004996a2
    MOV ECX,dword ptr [EAX + 0x4c]      ; 004996a7
    MOV dword ptr [ESP + 0xe4],EDX      ; 004996aa
    TEST ECX,ECX                        ; 004996b1
    JZ 0x00499784                       ; 004996b3
        ;   XREF to: 00499784 (CONDITIONAL_JUMP)  ; LAB_00499784
    MOV EAX,dword ptr [EBP + 0x14]      ; 004996b9
        ;   Label: LAB_004996b9
    CMP dword ptr [EAX + 0x4c],0x2      ; 004996bc
    JNZ 0x004996cd                      ; 004996c0
        ;   XREF to: 004996cd (CONDITIONAL_JUMP)  ; LAB_004996cd
    MOV dword ptr [ESP + 0xe4],0x3f2a7efa ; 004996c2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004996cd
        ;   Label: LAB_004996cd
    PUSH EAX                            ; 004996d0
    MOV EDX,dword ptr [0x005f2afc]      ; 004996d1 | DAT_005f2afc
    PUSH EDX                            ; 004996d7 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004996d8
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004996dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004996e0
    PUSH 0x0                            ; 004996e3
    ADD EAX,0x54                        ; 004996e5
    PUSH EAX                            ; 004996e8
    MOV ECX,dword ptr [0x005f2afc]      ; 004996e9 | DAT_005f2afc
    PUSH ECX                            ; 004996ef | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 004996f0
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004996f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004996f8
    MOV EBX,dword ptr [EAX + 0x4c]      ; 004996fb
    TEST EBX,EBX                        ; 004996fe
    JNZ 0x00499794                      ; 00499700
        ;   XREF to: 00499794 (CONDITIONAL_JUMP)  ; LAB_00499794
    MOV EBX,0x1c73814                   ; 00499706
    PUSH EBX                            ; 0049970b
        ;   Label: LAB_0049970b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0049970c
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00499711
    LEA EDI,[ESP + 0x8]                 ; 00499714
    MOV ESI,dword ptr [EAX + 0x350]     ; 00499718
    PUSH 0x0                            ; 0049971e
    LEA EAX,[ESP + 0xc]                 ; 00499720
    MOV ECX,0x6                         ; 00499724
    PUSH EAX                            ; 00499729
    MOVSD.REP ES:EDI,ESI                ; 0049972a
    CALL core_box.cpp_FUN_0041daf0      ; 0049972c
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 00499731
    MOV ESI,EAX                         ; 00499734
    TEST EAX,EAX                        ; 00499736
    JZ 0x0049976a                       ; 00499738
        ;   XREF to: 0049976a (CONDITIONAL_JUMP)  ; LAB_0049976a
    PUSH 0x0                            ; 0049973a
    LEA EAX,[ESP + 0x18]                ; 0049973c
    PUSH EAX                            ; 00499740
    LEA EAX,[ESP + 0x10]                ; 00499741
    PUSH EAX                            ; 00499745
    PUSH 0x2cfd900                      ; 00499746 | DAT_02cfd900
    MOV EDI,dword ptr [EBP + 0x14]      ; 0049974b
    PUSH EDI                            ; 0049974e
    MOV EAX,[0x00603b28]                ; 0049974f | g_CDemonSetPtr
    PUSH EAX                            ; 00499754 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0 ; 00499755
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 0049975a
    PUSH -0x1                           ; 0049975d
    PUSH 0x0                            ; 0049975f
    PUSH EBX                            ; 00499761
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 00499762
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00499767
    MOV EDX,dword ptr [0x005f2afc]      ; 0049976a | DAT_005f2afc
        ;   Label: LAB_0049976a
    PUSH EDX                            ; 00499770 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00499771
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00499776
    TEST ESI,ESI                        ; 00499779
    JNZ 0x004997ad                      ; 0049977b
        ;   XREF to: 004997ad (CONDITIONAL_JUMP)  ; LAB_004997ad
    MOV ESP,EBP                         ; 0049977d
        ;   Label: LAB_0049977d
    POP EBP                             ; 0049977f
    POP EDI                             ; 00499780
    POP ESI                             ; 00499781
    POP EBX                             ; 00499782
    RET                                 ; 00499783
    MOV dword ptr [ESP + 0xe4],0x40800000 ; 00499784
        ;   Label: LAB_00499784
    JMP 0x004996b9                      ; 0049978f
        ;   XREF to: 004996b9 (UNCONDITIONAL_JUMP)  ; LAB_004996b9
    CMP EBX,0x1                         ; 00499794
        ;   Label: LAB_00499794
    JNZ 0x004997a3                      ; 00499797
        ;   XREF to: 004997a3 (CONDITIONAL_JUMP)  ; LAB_004997a3
    MOV EBX,0x1c73990                   ; 00499799
    JMP 0x0049970b                      ; 0049979e
        ;   XREF to: 0049970b (UNCONDITIONAL_JUMP)  ; LAB_0049970b
    MOV EBX,0x1c73b0c                   ; 004997a3
        ;   Label: LAB_004997a3
    JMP 0x0049970b                      ; 004997a8
        ;   XREF to: 0049970b (UNCONDITIONAL_JUMP)  ; LAB_0049970b
    MOV ECX,dword ptr [0x005f2afc]      ; 004997ad | DAT_005f2afc
        ;   Label: LAB_004997ad
    PUSH ECX                            ; 004997b3 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 004997b4
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004997b9
    TEST EAX,EAX                        ; 004997bc
    JNZ 0x0049977d                      ; 004997be
        ;   XREF to: 0049977d (CONDITIONAL_JUMP)  ; LAB_0049977d
    MOV EBX,0x80000                     ; 004997c0
    PUSH EAX                            ; 004997c5
    MOV ESI,0xf80000                    ; 004997c6
    MOV EDI,dword ptr [0x005f2afc]      ; 004997cb | DAT_005f2afc
    PUSH 0x1c73658                      ; 004997d1 | DAT_01c73658
    MOV dword ptr [0x0060b02c],EBX      ; 004997d6 | DAT_0060b02c
    MOV dword ptr [0x0060b030],ESI      ; 004997dc | DAT_0060b030
    MOV dword ptr [0x0060b05c],ESI      ; 004997e2 | DAT_0060b05c
    MOV dword ptr [0x0060b060],ESI      ; 004997e8 | DAT_0060b060
    MOV dword ptr [0x0060b08c],ESI      ; 004997ee | DAT_0060b08c
    MOV dword ptr [0x0060b090],EBX      ; 004997f4 | DAT_0060b090
    PUSH EDI                            ; 004997fa | DAT_01bdd7e4
    MOV dword ptr [0x0060b0bc],EBX      ; 004997fb | DAT_0060b0bc
    MOV dword ptr [0x0060b0c0],EBX      ; 00499801 | DAT_0060b0c0
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 00499807
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0049980c
    FLD float ptr [ESP + 0xe4]          ; 0049980f
    FCHS                                ; 00499816
    FSTP float ptr [ESP + 0x5c]         ; 00499818
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0049981c
    MOV dword ptr [ESP + 0xdc],EAX      ; 00499820
    MOV dword ptr [ESP + 0x60],EAX      ; 00499827
    XOR EAX,EAX                         ; 0049982b
    LEA EBX,[ESP + 0x44]                ; 0049982d
    MOV dword ptr [ESP + 0x64],EAX      ; 00499831
    LEA EAX,[ESP + 0x5c]                ; 00499835
    MOV EDX,dword ptr [0x005f2afc]      ; 00499839 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049983f
    FMUL float ptr [0x005df8e4]         ; 00499841 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00499847
    FLD float ptr [EAX + 0x4]           ; 00499849
    FMUL float ptr [0x005df8e4]         ; 0049984c | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00499852
    FLD float ptr [EAX + 0x8]           ; 00499855
    FMUL float ptr [0x005df8e4]         ; 00499858 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049985e
    LEA EAX,[ESP + 0x44]                ; 00499861
    PUSH EAX                            ; 00499865
    MOV EAX,dword ptr [EDX]             ; 00499866 | DAT_01bdd7e4
    PUSH EAX                            ; 00499868
    CALL engine_special.cpp_FUN_005632a3 ; 00499869
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049986e
    LEA EBX,[ESP + 0x68]                ; 00499871
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00499875
    XOR EDX,EDX                         ; 0049987c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0049987e
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00499882
    MOV dword ptr [ESP + 0x64],EDX      ; 00499889
    MOV dword ptr [ESP + 0x60],EAX      ; 0049988d
    LEA EAX,[ESP + 0x5c]                ; 00499891
    MOV EDX,dword ptr [0x005f2afc]      ; 00499895 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049989b
    FMUL float ptr [0x005df8e4]         ; 0049989d | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004998a3
    FLD float ptr [EAX + 0x4]           ; 004998a5
    FMUL float ptr [0x005df8e4]         ; 004998a8 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004998ae
    FLD float ptr [EAX + 0x8]           ; 004998b1
    FMUL float ptr [0x005df8e4]         ; 004998b4 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004998ba
    LEA EAX,[ESP + 0x68]                ; 004998bd
    PUSH EAX                            ; 004998c1
    MOV EAX,dword ptr [EDX]             ; 004998c2 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004998c4
    PUSH EAX                            ; 004998c7
    CALL engine_special.cpp_FUN_005632a3 ; 004998c8
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x94]                ; 004998cd
    ADD ESP,0x8                         ; 004998d4
    MOV EDX,dword ptr [0x005f2afc]      ; 004998d7 | DAT_005f2afc
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004998dd
    XOR ECX,ECX                         ; 004998e4
    MOV dword ptr [ESP + 0x5c],EAX      ; 004998e6
    MOV dword ptr [ESP + 0x60],EAX      ; 004998ea
    LEA EAX,[ESP + 0x5c]                ; 004998ee
    MOV dword ptr [ESP + 0x64],ECX      ; 004998f2
    FLD float ptr [EAX]                 ; 004998f6
    FMUL float ptr [0x005df8e4]         ; 004998f8 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004998fe
    FLD float ptr [EAX + 0x4]           ; 00499900
    FMUL float ptr [0x005df8e4]         ; 00499903 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00499909
    FLD float ptr [EAX + 0x8]           ; 0049990c
    FMUL float ptr [0x005df8e4]         ; 0049990f | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00499915
    LEA EAX,[ESP + 0x8c]                ; 00499918
    PUSH EAX                            ; 0049991f
    MOV EAX,dword ptr [EDX]             ; 00499920 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 00499922
    PUSH EAX                            ; 00499925
    CALL engine_special.cpp_FUN_005632a3 ; 00499926
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049992b
    XOR EBX,EBX                         ; 0049992e
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00499930
    MOV dword ptr [ESP + 0x64],EBX      ; 00499937
    MOV dword ptr [ESP + 0x5c],EAX      ; 0049993b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0049993f
    LEA EBX,[ESP + 0x80]                ; 00499946
    MOV dword ptr [ESP + 0x60],EAX      ; 0049994d
    LEA EAX,[ESP + 0x5c]                ; 00499951
    MOV EDX,dword ptr [0x005f2afc]      ; 00499955 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049995b
    FMUL float ptr [0x005df8e4]         ; 0049995d | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00499963
    FLD float ptr [EAX + 0x4]           ; 00499965
    FMUL float ptr [0x005df8e4]         ; 00499968 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049996e
    FLD float ptr [EAX + 0x8]           ; 00499971
    FMUL float ptr [0x005df8e4]         ; 00499974 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049997a
    LEA EAX,[ESP + 0x80]                ; 0049997d
    PUSH EAX                            ; 00499984
    MOV EAX,dword ptr [EDX]             ; 00499985 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 00499987
    PUSH EAX                            ; 0049998c
    CALL engine_special.cpp_FUN_005632a3 ; 0049998d
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00499992
    MOV EAX,dword ptr [EBP + 0x14]      ; 00499995
    MOV ESI,dword ptr [EAX + 0x4c]      ; 00499998
    CMP ESI,0x1                         ; 0049999b
    JNZ 0x00499e7e                      ; 0049999e
        ;   XREF to: 00499e7e (CONDITIONAL_JUMP)  ; LAB_00499e7e
    PUSH 0x5fca9c                       ; 004999a4 | DAT_005fca9c
    MOV ECX,dword ptr [0x005f2afc]      ; 004999a9 | DAT_005f2afc
    PUSH ECX                            ; 004999af | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004999b0
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004999b0
    ADD ESP,0x8                         ; 004999b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004999b8
    MOV EDX,0xffff                      ; 004999bb
    MOV EBX,dword ptr [0x01c6e24c]      ; 004999c0 | DAT_01c6e24c
    MOV EAX,dword ptr [EAX + 0x40]      ; 004999c6
    SUB EDX,EBX                         ; 004999c9
    MOV ESI,0xffff                      ; 004999cb
    IMUL EDX                            ; 004999d0
    SHRD EAX,EDX,0x10                   ; 004999d2
    PUSH 0x1                            ; 004999d6
    MOV [0x0060b040],EAX                ; 004999d8 | DAT_0060b040
    MOV dword ptr [0x0060b034],ESI      ; 004999dd | DAT_0060b034
    MOV dword ptr [0x0060b038],ESI      ; 004999e3 | DAT_0060b038
    MOV dword ptr [0x0060b03c],ESI      ; 004999e9 | DAT_0060b03c
    MOV dword ptr [0x0060b064],ESI      ; 004999ef | DAT_0060b064
    MOV dword ptr [0x0060b068],ESI      ; 004999f5 | DAT_0060b068
    MOV dword ptr [0x0060b06c],ESI      ; 004999fb | DAT_0060b06c
    MOV dword ptr [0x0060b094],ESI      ; 00499a01 | DAT_0060b094
    MOV dword ptr [0x0060b098],ESI      ; 00499a07 | DAT_0060b098
    MOV dword ptr [0x0060b09c],ESI      ; 00499a0d | DAT_0060b09c
    MOV dword ptr [0x0060b0c4],ESI      ; 00499a13 | DAT_0060b0c4
    MOV dword ptr [0x0060b0c8],ESI      ; 00499a19 | DAT_0060b0c8
    MOV dword ptr [0x0060b0cc],ESI      ; 00499a1f | DAT_0060b0cc
    MOV ESI,dword ptr [0x005f2afc]      ; 00499a25 | DAT_005f2afc
    MOV [0x0060b070],EAX                ; 00499a2b | DAT_0060b070
    PUSH ESI                            ; 00499a30 | DAT_01bdd7e4
    MOV [0x0060b0a0],EAX                ; 00499a31 | DAT_0060b0a0
    MOV [0x0060b0d0],EAX                ; 00499a36 | DAT_0060b0d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00499a3b
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00499a40
    PUSH 0x1c73670                      ; 00499a43
    MOV EDI,dword ptr [0x005f2afc]      ; 00499a48 | DAT_005f2afc
    PUSH EDI                            ; 00499a4e | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 00499a4f
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00499a54
    PUSH 0x0                            ; 00499a57
    MOV EAX,[0x005f2afc]                ; 00499a59 | DAT_005f2afc
    PUSH EAX                            ; 00499a5e | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00499a5f
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00499a64
    MOV EDX,dword ptr [0x005f2afc]      ; 00499a67 | DAT_005f2afc
    PUSH EDX                            ; 00499a6d | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00499a6e
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00499a73
    MOV EAX,dword ptr [EBP + 0x14]      ; 00499a76
    MOV ECX,dword ptr [EAX + 0x4c]      ; 00499a79
    CMP ECX,0x1                         ; 00499a7c
    JZ 0x0049977d                       ; 00499a7f
        ;   XREF to: 0049977d (CONDITIONAL_JUMP)  ; LAB_0049977d
    CMP ECX,0x2                         ; 00499a85
    JZ 0x0049977d                       ; 00499a88
        ;   XREF to: 0049977d (CONDITIONAL_JUMP)  ; LAB_0049977d
    LEA EDI,[ESP + 0x38]                ; 00499a8e
    MOV ESI,EAX                         ; 00499a92
    MOVSD ES:EDI,ESI                    ; 00499a94
    MOVSD ES:EDI,ESI                    ; 00499a95
    MOVSD ES:EDI,ESI                    ; 00499a96
    MOV ESI,EAX                         ; 00499a97
    LEA EDI,[ESP + 0x20]                ; 00499a99
    LEA ESI,[ESI + 0xc]                 ; 00499a9d
    XOR EAX,EAX                         ; 00499aa0
    MOVSD ES:EDI,ESI                    ; 00499aa2
    MOVSD ES:EDI,ESI                    ; 00499aa3
    MOVSD ES:EDI,ESI                    ; 00499aa4
    MOV dword ptr [ESP + 0xf0],EAX      ; 00499aa5
    MOV ESI,0x3f800000                  ; 00499aac
    MOV EDI,0x3dcccccd                  ; 00499ab1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00499ab6
    MOV dword ptr [ESP + 0x4],ESI       ; 00499ab9
    ADD EAX,0x18                        ; 00499abd
    MOV dword ptr [ESP],EDI             ; 00499ac0
    MOV dword ptr [ESP + 0xec],EAX      ; 00499ac3
    FLD float ptr [ESP]                 ; 00499aca
        ;   Label: LAB_00499aca
    MOV EAX,dword ptr [ESP + 0xec]      ; 00499acd
    FLD ST0                             ; 00499ad4
    FLD double ptr [0x005c0580]         ; 00499ad6 | DAT_005c0580
    FXCH                                ; 00499adc
    FMUL ST1                            ; 00499ade
    FLD float ptr [EAX]                 ; 00499ae0
    FXCH                                ; 00499ae2
    FSTP ST3                            ; 00499ae4
    FXCH ST2                            ; 00499ae6
    FSTP float ptr [ESP]                ; 00499ae8
    FXCH                                ; 00499aeb
    FMUL float ptr [ESP]                ; 00499aed
    FLD float ptr [EAX + 0x4]           ; 00499af0
    FMUL float ptr [ESP]                ; 00499af3
    FLD float ptr [EAX + 0x8]           ; 00499af6
    FMUL float ptr [ESP]                ; 00499af9
    FLD float ptr [ESP + 0x4]           ; 00499afc
    FLD float ptr [ESP + 0x20]          ; 00499b00
    LEA EDI,[ESP + 0xb0]                ; 00499b04
    LEA ESI,[ESP + 0xa4]                ; 00499b0b
    FXCH ST4                            ; 00499b12
    FSTP float ptr [ESP + 0xa4]         ; 00499b14
    FXCH ST2                            ; 00499b1b
    FSTP float ptr [ESP + 0xa8]         ; 00499b1d
    FSTP float ptr [ESP + 0xac]         ; 00499b24
    MOVSD ES:EDI,ESI                    ; 00499b2b
    MOVSD ES:EDI,ESI                    ; 00499b2c
    MOVSD ES:EDI,ESI                    ; 00499b2d
    FLD ST0                             ; 00499b2e
    FXCH ST2                            ; 00499b30
    FSUB float ptr [ESP + 0xb0]         ; 00499b32
    FXCH ST2                            ; 00499b39
    FMULP ST3                           ; 00499b3b
    FXCH                                ; 00499b3d
    FST float ptr [ESP + 0x20]          ; 00499b3f
    FMUL float ptr [ESP]                ; 00499b43
    FLD float ptr [ESP + 0x28]          ; 00499b46
    FLD float ptr [ESP + 0x24]          ; 00499b4a
    FSUB float ptr [ESP + 0xb4]         ; 00499b4e
    FXCH                                ; 00499b55
    FSUB float ptr [ESP + 0xb8]         ; 00499b57
    FXCH                                ; 00499b5e
    FST float ptr [ESP + 0x24]          ; 00499b60
    FMUL float ptr [ESP]                ; 00499b64
    FXCH                                ; 00499b67
    FST float ptr [ESP + 0x28]          ; 00499b69
    FMUL float ptr [ESP]                ; 00499b6d
    FLD float ptr [ESP + 0x38]          ; 00499b70
    FLD float ptr [ESP + 0x3c]          ; 00499b74
    FXCH ST6                            ; 00499b78
    FSTP ST5                            ; 00499b7a
    FXCH ST4                            ; 00499b7c
    FSTP float ptr [ESP + 0x4]          ; 00499b7e
    FLD float ptr [ESP + 0x40]          ; 00499b82
    LEA EAX,[ESP + 0x38]                ; 00499b86
    MOV EDX,dword ptr [0x005f2afc]      ; 00499b8a | DAT_005f2afc
    PUSH EAX                            ; 00499b90
    LEA EDI,[ESP + 0x54]                ; 00499b91
    LEA ESI,[ESP + 0xc0]                ; 00499b95
    FXCH ST3                            ; 00499b9c
    FSTP float ptr [ESP + 0xc0]         ; 00499b9e
    FXCH                                ; 00499ba5
    FSTP float ptr [ESP + 0xc4]         ; 00499ba7
    FSTP float ptr [ESP + 0xc8]         ; 00499bae
    MOVSD ES:EDI,ESI                    ; 00499bb5
    MOVSD ES:EDI,ESI                    ; 00499bb6
    MOVSD ES:EDI,ESI                    ; 00499bb7
    PUSH EDX                            ; 00499bb8 | DAT_01bdd7e4
    FXCH                                ; 00499bb9
    FSUB float ptr [ESP + 0x58]         ; 00499bbb
    FXCH ST2                            ; 00499bbf
    FSUB float ptr [ESP + 0x5c]         ; 00499bc1
    FXCH                                ; 00499bc5
    FSUB float ptr [ESP + 0x60]         ; 00499bc7
    FXCH ST2                            ; 00499bcb
    FSTP float ptr [ESP + 0x40]         ; 00499bcd
    FSTP float ptr [ESP + 0x44]         ; 00499bd1
    FSTP float ptr [ESP + 0x48]         ; 00499bd5
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 00499bd9
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00499bde
    PUSH 0x0                            ; 00499be1
    PUSH 0x1c73658                      ; 00499be3 | DAT_01c73658
    MOV ECX,dword ptr [0x005f2afc]      ; 00499be8 | DAT_005f2afc
    PUSH ECX                            ; 00499bee | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 00499bef
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00499bf4
    XOR EBX,EBX                         ; 00499bf7
    FLD float ptr [ESP + 0xe4]          ; 00499bf9
    FCHS                                ; 00499c00
    FMUL float ptr [ESP + 0x4]          ; 00499c02
    MOV dword ptr [ESP + 0x64],EBX      ; 00499c06
    FSTP float ptr [ESP + 0x5c]         ; 00499c0a
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00499c0e
    LEA EBX,[ESP + 0x2c]                ; 00499c12
    MOV dword ptr [ESP + 0xe8],EAX      ; 00499c16
    MOV dword ptr [ESP + 0x60],EAX      ; 00499c1d
    LEA EAX,[ESP + 0x5c]                ; 00499c21
    MOV EDX,dword ptr [0x005f2afc]      ; 00499c25 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00499c2b
    FMUL float ptr [0x005df8e4]         ; 00499c2d | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00499c33
    FLD float ptr [EAX + 0x4]           ; 00499c35
    FMUL float ptr [0x005df8e4]         ; 00499c38 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00499c3e
    FLD float ptr [EAX + 0x8]           ; 00499c41
    FMUL float ptr [0x005df8e4]         ; 00499c44 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00499c4a
    LEA EAX,[ESP + 0x2c]                ; 00499c4d
    PUSH EAX                            ; 00499c51
    MOV EAX,dword ptr [EDX]             ; 00499c52 | DAT_01bdd7e4
    PUSH EAX                            ; 00499c54
    CALL engine_special.cpp_FUN_005632a3 ; 00499c55
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00499c5a
    FLD float ptr [ESP + 0xe4]          ; 00499c5d
    FMUL float ptr [ESP + 0x4]          ; 00499c64
    XOR ESI,ESI                         ; 00499c68
    FSTP float ptr [ESP + 0xdc]         ; 00499c6a
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00499c71
    LEA EBX,[ESP + 0xc8]                ; 00499c78
    MOV dword ptr [ESP + 0x5c],EAX      ; 00499c7f
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00499c83
    MOV EDX,dword ptr [0x005f2afc]      ; 00499c8a | DAT_005f2afc
    MOV dword ptr [ESP + 0x60],EAX      ; 00499c90
    LEA EAX,[ESP + 0x5c]                ; 00499c94
    MOV dword ptr [ESP + 0x64],ESI      ; 00499c98
    FLD float ptr [EAX]                 ; 00499c9c
    FMUL float ptr [0x005df8e4]         ; 00499c9e | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00499ca4
    FLD float ptr [EAX + 0x4]           ; 00499ca6
    FMUL float ptr [0x005df8e4]         ; 00499ca9 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00499caf
    FLD float ptr [EAX + 0x8]           ; 00499cb2
    FMUL float ptr [0x005df8e4]         ; 00499cb5 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00499cbb
    LEA EAX,[ESP + 0xc8]                ; 00499cbe
    PUSH EAX                            ; 00499cc5
    MOV EAX,dword ptr [EDX]             ; 00499cc6 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 00499cc8
    PUSH EAX                            ; 00499ccb
    CALL engine_special.cpp_FUN_005632a3 ; 00499ccc
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00499cd1
    LEA EBX,[ESP + 0x74]                ; 00499cd4
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00499cd8
    MOV EDX,dword ptr [0x005f2afc]      ; 00499cdf | DAT_005f2afc
    MOV dword ptr [ESP + 0x5c],EAX      ; 00499ce5
    MOV dword ptr [ESP + 0x60],EAX      ; 00499ce9
    LEA EAX,[ESP + 0x5c]                ; 00499ced
    MOV dword ptr [ESP + 0x64],ESI      ; 00499cf1
    FLD float ptr [EAX]                 ; 00499cf5
    FMUL float ptr [0x005df8e4]         ; 00499cf7 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00499cfd
    FLD float ptr [EAX + 0x4]           ; 00499cff
    FMUL float ptr [0x005df8e4]         ; 00499d02 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00499d08
    FLD float ptr [EAX + 0x8]           ; 00499d0b
    FMUL float ptr [0x005df8e4]         ; 00499d0e | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00499d14
    LEA EAX,[ESP + 0x74]                ; 00499d17
    PUSH EAX                            ; 00499d1b
    MOV EAX,dword ptr [EDX]             ; 00499d1c | DAT_01bdd7e4
    ADD EAX,0x60                        ; 00499d1e
    PUSH EAX                            ; 00499d21
    CALL engine_special.cpp_FUN_005632a3 ; 00499d22
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00499d27
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00499d2a
    MOV EDX,dword ptr [0x005f2afc]      ; 00499d31 | DAT_005f2afc
    MOV dword ptr [ESP + 0x5c],EAX      ; 00499d37
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00499d3b
    MOV dword ptr [ESP + 0x64],ESI      ; 00499d42
    MOV dword ptr [ESP + 0x60],EAX      ; 00499d46
    LEA EBX,[ESP + 0x98]                ; 00499d4a
    LEA EAX,[ESP + 0x5c]                ; 00499d51
    FLD float ptr [EAX]                 ; 00499d55
    FMUL float ptr [0x005df8e4]         ; 00499d57 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 00499d5d
    FLD float ptr [EAX + 0x4]           ; 00499d5f
    FMUL float ptr [0x005df8e4]         ; 00499d62 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 00499d68
    FLD float ptr [EAX + 0x8]           ; 00499d6b
    FMUL float ptr [0x005df8e4]         ; 00499d6e | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 00499d74
    LEA EAX,[ESP + 0x98]                ; 00499d77
    PUSH EAX                            ; 00499d7e
    MOV EAX,dword ptr [EDX]             ; 00499d7f | DAT_01bdd7e4
    ADD EAX,0x90                        ; 00499d81
    PUSH EAX                            ; 00499d86
    CALL engine_special.cpp_FUN_005632a3 ; 00499d87
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00499d8c
    PUSH ESI                            ; 00499d8f
    MOV ECX,dword ptr [EBP + 0x14]      ; 00499d90
    MOV EAX,[0x007e2a54]                ; 00499d93 | DAT_007e2a54
    PUSH ECX                            ; 00499d98
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00499d99
    PUSH EAX                            ; 00499d9c
    CALL dword ptr [EDX + 0x4]          ; 00499d9d
    MOV EDX,0xffff                      ; 00499da0
    ADD ESP,0xc                         ; 00499da5
    MOV EBX,dword ptr [0x01c6e24c]      ; 00499da8 | DAT_01c6e24c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00499dae
    SUB EDX,EBX                         ; 00499db1
    MOV EAX,dword ptr [EAX + 0x40]      ; 00499db3
    MOV ESI,0xffff                      ; 00499db6
    IMUL EDX                            ; 00499dbb
    SHRD EAX,EDX,0x10                   ; 00499dbd
    PUSH 0x1                            ; 00499dc1
    MOV [0x0060b040],EAX                ; 00499dc3 | DAT_0060b040
    MOV dword ptr [0x0060b034],ESI      ; 00499dc8 | DAT_0060b034
    MOV dword ptr [0x0060b038],ESI      ; 00499dce | DAT_0060b038
    MOV dword ptr [0x0060b03c],ESI      ; 00499dd4 | DAT_0060b03c
    MOV dword ptr [0x0060b064],ESI      ; 00499dda | DAT_0060b064
    MOV dword ptr [0x0060b068],ESI      ; 00499de0 | DAT_0060b068
    MOV dword ptr [0x0060b06c],ESI      ; 00499de6 | DAT_0060b06c
    MOV dword ptr [0x0060b094],ESI      ; 00499dec | DAT_0060b094
    MOV dword ptr [0x0060b098],ESI      ; 00499df2 | DAT_0060b098
    MOV dword ptr [0x0060b09c],ESI      ; 00499df8 | DAT_0060b09c
    MOV dword ptr [0x0060b0c4],ESI      ; 00499dfe | DAT_0060b0c4
    MOV dword ptr [0x0060b0c8],ESI      ; 00499e04 | DAT_0060b0c8
    MOV dword ptr [0x0060b0cc],ESI      ; 00499e0a | DAT_0060b0cc
    MOV ESI,dword ptr [0x005f2afc]      ; 00499e10 | DAT_005f2afc
    MOV [0x0060b070],EAX                ; 00499e16 | DAT_0060b070
    PUSH ESI                            ; 00499e1b | DAT_01bdd7e4
    MOV [0x0060b0a0],EAX                ; 00499e1c | DAT_0060b0a0
    MOV [0x0060b0d0],EAX                ; 00499e21 | DAT_0060b0d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00499e26
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00499e2b
    PUSH 0x1c73670                      ; 00499e2e
    MOV EDI,dword ptr [0x005f2afc]      ; 00499e33 | DAT_005f2afc
    PUSH EDI                            ; 00499e39 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 00499e3a
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00499e3f
    PUSH 0x0                            ; 00499e42
    MOV EAX,[0x005f2afc]                ; 00499e44 | DAT_005f2afc
    PUSH EAX                            ; 00499e49 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00499e4a
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00499e4f
    MOV EDX,dword ptr [0x005f2afc]      ; 00499e52 | DAT_005f2afc
    PUSH EDX                            ; 00499e58 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 00499e59
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00499e5e
    MOV ECX,dword ptr [ESP + 0xf0]      ; 00499e61
    INC ECX                             ; 00499e68
    MOV dword ptr [ESP + 0xf0],ECX      ; 00499e69
    CMP ECX,0x3                         ; 00499e70
    JGE 0x0049977d                      ; 00499e73
        ;   XREF to: 0049977d (CONDITIONAL_JUMP)  ; LAB_0049977d
    JMP 0x00499aca                      ; 00499e79
        ;   XREF to: 00499aca (UNCONDITIONAL_JUMP)  ; LAB_00499aca
    CMP ESI,0x2                         ; 00499e7e
        ;   Label: LAB_00499e7e
    JNZ 0x00499e94                      ; 00499e81
        ;   XREF to: 00499e94 (CONDITIONAL_JUMP)  ; LAB_00499e94
    PUSH 0x5fc9dc                       ; 00499e83 | DAT_005fc9dc
    MOV EDX,dword ptr [0x005f2afc]      ; 00499e88 | DAT_005f2afc
    PUSH EDX                            ; 00499e8e | DAT_01bdd7e4
    JMP 0x004999b0                      ; 00499e8f
        ;   XREF to: 004999b0 (UNCONDITIONAL_JUMP)  ; LAB_004999b0
    PUSH 0x5fc9ac                       ; 00499e94 | DAT_005fc9ac
        ;   Label: LAB_00499e94
    MOV EAX,[0x005f2afc]                ; 00499e99 | DAT_005f2afc
    PUSH EAX                            ; 00499e9e | DAT_01bdd7e4
    JMP 0x004999b0                      ; 00499e9f
        ;   XREF to: 004999b0 (UNCONDITIONAL_JUMP)  ; LAB_004999b0


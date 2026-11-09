; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_wateract_cpp_FUN_005787f0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e5ec0
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0
;   core_set.cpp_FUN_005386d0
;   core_set.cpp_FUN_0053ab80
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005787f0
        ;   Label: core_wateract.cpp_FUN_005787f0
    SUB ESP,0x34                        ; 005787f1
    MOV EBP,dword ptr [ESP + 0x3c]      ; 005787f4
    MOV EDX,dword ptr [0x005f2afc]      ; 005787f8 | DAT_005f2afc
    PUSH EDX                            ; 005787fe
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 005787ff
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00578804
    TEST EAX,EAX                        ; 00578807
    JZ 0x00578812                       ; 00578809
        ;   XREF to: 00578812 (CONDITIONAL_JUMP)  ; LAB_00578812
    XOR EAX,EAX                         ; 0057880b
    ADD ESP,0x34                        ; 0057880d
    POP EBP                             ; 00578810
    RET                                 ; 00578811
    PUSH EDI                            ; 00578812
        ;   Label: LAB_00578812
    PUSH ESI                            ; 00578813
    PUSH EBP                            ; 00578814
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00578815
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057881a
    PUSH 0x0                            ; 0057881d
    MOV EAX,dword ptr [EBP + 0x154]     ; 0057881f
    PUSH EBP                            ; 00578825
    LEA ESI,[ESP + 0x10]                ; 00578826
    LEA EDI,[ESP + 0x28]                ; 0057882a
    CALL dword ptr [EAX + 0x1c]         ; 0057882e
    MOV ECX,0x6                         ; 00578831
    ADD ESP,0x4                         ; 00578836
    LEA EAX,[ESP + 0x24]                ; 00578839
    LEA ESI,[ESP + 0xc]                 ; 0057883d
    PUSH EAX                            ; 00578841
    MOVSD.REP ES:EDI,ESI                ; 00578842
    CALL core_box.cpp_FUN_0041daf0      ; 00578844
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 00578849
    MOV dword ptr [ESP + 0x38],EAX      ; 0057884c
    TEST EAX,EAX                        ; 00578850
    JZ 0x00578a01                       ; 00578852
        ;   XREF to: 00578a01 (CONDITIONAL_JUMP)  ; LAB_00578a01
    PUSH EBX                            ; 00578858
    MOV ECX,dword ptr [EBP + 0x164]     ; 00578859
    PUSH ECX                            ; 0057885f
    MOV EBX,dword ptr [0x005f2afc]      ; 00578860 | DAT_005f2afc
    PUSH EBX                            ; 00578866
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 00578867
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0057886c
    PUSH 0x0                            ; 0057886f
    MOV ESI,dword ptr [0x005f2afc]      ; 00578871 | DAT_005f2afc
    PUSH ESI                            ; 00578877
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00578878
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    MOV EDI,dword ptr [EBP + 0x298]     ; 0057887d
    ADD ESP,0x8                         ; 00578883
    TEST EDI,EDI                        ; 00578886
    JZ 0x00578a15                       ; 00578888
        ;   XREF to: 00578a15 (CONDITIONAL_JUMP)  ; LAB_00578a15
    MOV EDX,dword ptr [EBP + 0x2b22c]   ; 0057888e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00578894
    SUB EAX,EDX                         ; 0057889b
    SHL EAX,0x3                         ; 0057889d
    ADD EAX,0x607004                    ; 005788a0
    PUSH EAX                            ; 005788a5
    MOV EDX,dword ptr [0x005f2afc]      ; 005788a6 | DAT_005f2afc
    PUSH EDX                            ; 005788ac
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 005788ad
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_005788ad
    ADD ESP,0x8                         ; 005788b2
    MOV ECX,dword ptr [EBP + 0x29c]     ; 005788b5
    XOR ESI,ESI                         ; 005788bb
    TEST ECX,ECX                        ; 005788bd
    JLE 0x00578910                      ; 005788bf
        ;   XREF to: 00578910 (CONDITIONAL_JUMP)  ; LAB_00578910
    MOV ECX,0x2d06e08                   ; 005788c1
    LEA EDX,[EBP + 0x2a0]               ; 005788c6
    MOV EBX,ECX                         ; 005788cc
        ;   Label: LAB_005788cc
    MOV EAX,EDX                         ; 005788ce
    FLD float ptr [EAX]                 ; 005788d0
    FMUL float ptr [0x005e5ec0]         ; 005788d2 | DAT_005e5ec0
    FISTP dword ptr [EBX]               ; 005788d8
    FLD float ptr [EAX + 0x4]           ; 005788da
    FMUL float ptr [0x005e5ec0]         ; 005788dd | DAT_005e5ec0
    FISTP dword ptr [EBX + 0x4]         ; 005788e3
    FLD float ptr [EAX + 0x8]           ; 005788e6
    FMUL float ptr [0x005e5ec0]         ; 005788e9 | DAT_005e5ec0
    FISTP dword ptr [EBX + 0x8]         ; 005788ef
    INC ESI                             ; 005788f2
    ADD EDX,0x20                        ; 005788f3
    MOV EBX,dword ptr [EBP + 0x29c]     ; 005788f6
    ADD ECX,0xc                         ; 005788fc
    CMP ESI,EBX                         ; 005788ff
    JL 0x005788cc                       ; 00578901
        ;   XREF to: 005788cc (CONDITIONAL_JUMP)  ; LAB_005788cc
    LEA EAX,[EAX]                       ; 00578903
    LEA EDX,[EDX]                       ; 00578909
    NOP                                 ; 0057890f
    PUSH 0x2d06e08                      ; 00578910
        ;   Label: LAB_00578910
    MOV ESI,dword ptr [EBP + 0x29c]     ; 00578915
    PUSH ESI                            ; 0057891b
    MOV EDI,dword ptr [0x00603b28]      ; 0057891c | g_CDemonSetPtr
    PUSH EDI                            ; 00578922
    XOR EBX,EBX                         ; 00578923
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0 ; 00578925
        ;   XREF to: 00538ad0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EAX,dword ptr [EBP + 0x29c]     ; 0057892a
    ADD ESP,0xc                         ; 00578930
    TEST EAX,EAX                        ; 00578933
    JLE 0x005789c0                      ; 00578935
        ;   XREF to: 005789c0 (CONDITIONAL_JUMP)  ; LAB_005789c0
    LEA ESI,[EBP + 0x2ac]               ; 0057893b
    XOR EDI,EDI                         ; 00578941
    PUSH EBX                            ; 00578943
        ;   Label: LAB_00578943
    PUSH 0x2cfd900                      ; 00578944
    PUSH ESI                            ; 00578949
    MOV EDX,dword ptr [0x00603b28]      ; 0057894a | g_CDemonSetPtr
    PUSH EDX                            ; 00578950
    CALL core_set.cpp_FUN_005386d0      ; 00578951
        ;   XREF to: 005386d0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_005386d0()
    MOV EAX,[0x005f2afc]                ; 00578956 | DAT_005f2afc
    MOV ECX,dword ptr [EAX]             ; 0057895b
    ADD ESP,0x10                        ; 0057895d
    MOV EAX,dword ptr [EBP + 0x28c]     ; 00578960
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x20] ; 00578966
    SHL EAX,0x8                         ; 0057896a
    IMUL EDX                            ; 0057896d
    SHRD EAX,EDX,0x10                   ; 0057896f
    MOV dword ptr [ECX + EDI*0x1 + 0x20],EAX ; 00578973
    MOV EAX,dword ptr [EBP + 0x290]     ; 00578977
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x24] ; 0057897d
    SHL EAX,0x8                         ; 00578981
    IMUL EDX                            ; 00578984
    SHRD EAX,EDX,0x10                   ; 00578986
    MOV dword ptr [ECX + EDI*0x1 + 0x24],EAX ; 0057898a
    MOV EAX,dword ptr [EBP + 0x294]     ; 0057898e
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x28] ; 00578994
    SHL EAX,0x8                         ; 00578998
    ADD EDI,0x30                        ; 0057899b
    IMUL EDX                            ; 0057899e
    SHRD EAX,EDX,0x10                   ; 005789a0
    MOV dword ptr [ECX + EDI*0x1 + -0x8],EAX ; 005789a4
    INC EBX                             ; 005789a8
    MOV ECX,dword ptr [EBP + 0x29c]     ; 005789a9
    ADD ESI,0x20                        ; 005789af
    CMP EBX,ECX                         ; 005789b2
    JL 0x00578943                       ; 005789b4
        ;   XREF to: 00578943 (CONDITIONAL_JUMP)  ; LAB_00578943
    LEA EAX,[EAX]                       ; 005789b6
    LEA EDX,[EDX]                       ; 005789bc
    MOV ESI,dword ptr [EBP + 0x164]     ; 005789c0
        ;   Label: LAB_005789c0
    LEA EBX,[EBP + 0x7fac]              ; 005789c6
    CMP ESI,0xfde8                      ; 005789cc
    JLE 0x00578a38                      ; 005789d2
        ;   XREF to: 00578a38 (CONDITIONAL_JUMP)  ; LAB_00578a38
    PUSH -0x1                           ; 005789d4
    MOV EAX,dword ptr [EBP + 0x2b238]   ; 005789d6
    PUSH EAX                            ; 005789dc
    PUSH EBX                            ; 005789dd
    MOV EDX,dword ptr [0x00603b28]      ; 005789de | g_CDemonSetPtr
    PUSH EDX                            ; 005789e4
    CALL core_set.cpp_FUN_0053ab80      ; 005789e5
        ;   XREF to: 0053ab80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0053ab80(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 005789ea
    LEA EAX,[EAX]                       ; 005789ed
    PUSH 0x0                            ; 005789f0
        ;   Label: LAB_005789f0
    MOV EAX,[0x005f2afc]                ; 005789f2 | DAT_005f2afc
    PUSH EAX                            ; 005789f7
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 005789f8
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 005789fd
    POP EBX                             ; 00578a00
    PUSH EBP                            ; 00578a01
        ;   Label: LAB_00578a01
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00578a02
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00578a07
    MOV EAX,dword ptr [ESP + 0x38]      ; 00578a0a
    POP ESI                             ; 00578a0e
    POP EDI                             ; 00578a0f
    ADD ESP,0x34                        ; 00578a10
    POP EBP                             ; 00578a13
    RET                                 ; 00578a14
    MOV EDX,dword ptr [EBP + 0x2b22c]   ; 00578a15
        ;   Label: LAB_00578a15
    LEA EAX,[EDX*0x4 + 0x0]             ; 00578a1b
    SUB EAX,EDX                         ; 00578a22
    SHL EAX,0x3                         ; 00578a24
    ADD EAX,0x606e84                    ; 00578a27
    PUSH EAX                            ; 00578a2c
    MOV EAX,[0x005f2afc]                ; 00578a2d | DAT_005f2afc
    PUSH EAX                            ; 00578a32
    JMP 0x005788ad                      ; 00578a33
        ;   XREF to: 005788ad (UNCONDITIONAL_JUMP)  ; LAB_005788ad
    MOV EDI,dword ptr [EBP + 0x2b238]   ; 00578a38
        ;   Label: LAB_00578a38
    XOR ESI,ESI                         ; 00578a3e
    TEST EDI,EDI                        ; 00578a40
    JLE 0x005789f0                      ; 00578a42
        ;   XREF to: 005789f0 (CONDITIONAL_JUMP)  ; LAB_005789f0
    PUSH 0x267                          ; 00578a44
        ;   Label: LAB_00578a44
    PUSH EBX                            ; 00578a49
    MOV ECX,dword ptr [0x005f2afc]      ; 00578a4a | DAT_005f2afc
    PUSH ECX                            ; 00578a50
    INC ESI                             ; 00578a51
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0 ; 00578a52
        ;   XREF to: 0046b8f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD EBX,0x48                        ; 00578a57
    MOV EDI,dword ptr [EBP + 0x2b238]   ; 00578a5a
    ADD ESP,0xc                         ; 00578a60
    CMP ESI,EDI                         ; 00578a63
    JL 0x00578a44                       ; 00578a65
        ;   XREF to: 00578a44 (CONDITIONAL_JUMP)  ; LAB_00578a44
    JMP 0x005789f0                      ; 00578a67
        ;   XREF to: 005789f0 (UNCONDITIONAL_JUMP)  ; LAB_005789f0


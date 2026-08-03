; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_00482950(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a78c
;
; Referenced Globals:
;   TerminatedCString s_core_fire_cpp_00581078
;   TerminatedCString s_CSmokeParticle_render_Fr_00581089
;   float FLOAT_0059d1f8 = 256
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b80f4
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c505c
;   undefined4 DAT_005c5060
;   undefined4 DAT_005c508c
;   undefined4 DAT_005c5090
;   undefined4 DAT_005c50bc
;   undefined4 DAT_005c50c0
;   undefined4 DAT_007f7370
;   ... and 5 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
;   core_main.c_FUN_004c8440
;   core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;   engine_special.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482950
        ;   Label: core_fire.cpp_CSmokeParticle_render_FUN_00482950
    PUSH ESI                            ; 00482951
    PUSH EDI                            ; 00482952
    PUSH EBP                            ; 00482953
    SUB ESP,0x60                        ; 00482954
    MOV EDI,dword ptr [ESP + 0x74]      ; 00482957
    MOV ESI,dword ptr [0x005ae704]      ; 0048295b | DAT_005ae704
    LEA EBX,[ESP + 0xc]                 ; 00482961
    LEA EAX,[EDI + 0x4]                 ; 00482965
    MOV ESI,dword ptr [ESI]             ; 00482968 | DAT_01b4d738
    FLD float ptr [EAX]                 ; 0048296a
    FMUL float ptr [0x0059d1f8]         ; 0048296c | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00482972
    FLD float ptr [EAX + 0x4]           ; 00482974
    FMUL float ptr [0x0059d1f8]         ; 00482977 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 0048297d
    FLD float ptr [EAX + 0x8]           ; 00482980
    FMUL float ptr [0x0059d1f8]         ; 00482983 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00482989
    LEA EAX,[ESP + 0xc]                 ; 0048298c
    PUSH EAX                            ; 00482990
    PUSH ESI                            ; 00482991
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 00482992
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00482997
    PUSH ESI                            ; 0048299a
    MOV EDX,dword ptr [0x005ae704]      ; 0048299b | DAT_005ae704
    PUSH EDX                            ; 004829a1 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80 ; 004829a2
        ;   XREF to: 00461f80 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004829a7
    TEST EAX,EAX                        ; 004829aa
    JZ 0x00482c76                       ; 004829ac
        ;   XREF to: 00482c76 (CONDITIONAL_JUMP)  ; LAB_00482c76
    FLD float ptr [EDI + 0x18]          ; 004829b2
    CALL crt_math.c_round_FUN_00563a30  ; 004829b5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x58]        ; 004829ba
    MOV ECX,dword ptr [ESP + 0x58]      ; 004829be
    TEST ECX,ECX                        ; 004829c2
    JL 0x004829cb                       ; 004829c4
        ;   XREF to: 004829cb (CONDITIONAL_JUMP)  ; LAB_004829cb
    CMP ECX,0x28                        ; 004829c6
    JL 0x004829ee                       ; 004829c9
        ;   XREF to: 004829ee (CONDITIONAL_JUMP)  ; LAB_004829ee
    MOV ESI,0x581078                    ; 004829cb | = "..\\core\\fire.cpp"
        ;   Label: LAB_004829cb
    MOV EBP,0x11d                       ; 004829d0
    PUSH 0x581089                       ; 004829d5 | = "CSmokeParticle::render - Frame out of..."
    MOV dword ptr [0x01cc4800],ESI      ; 004829da | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004829e0 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004829e6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004829eb
    MOV EBX,dword ptr [ESP + 0x58]      ; 004829ee
        ;   Label: LAB_004829ee
    LEA EAX,[EBX*0x4 + 0x0]             ; 004829f2
    SUB EAX,EBX                         ; 004829f9
    SHL EAX,0x3                         ; 004829fb
    ADD EAX,0x5b80f4                    ; 004829fe | DAT_005b80f4
    PUSH EAX                            ; 00482a03
    MOV EAX,[0x005ae704]                ; 00482a04 | DAT_005ae704
    PUSH EAX                            ; 00482a09 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00482a0a
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00482a0f
    LEA ESI,[EDI + 0x4]                 ; 00482a12
    PUSH ESI                            ; 00482a15
    MOV EDX,dword ptr [0x005ae704]      ; 00482a16 | DAT_005ae704
    PUSH EDX                            ; 00482a1c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00482a1d
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00482a22
    PUSH 0x0                            ; 00482a25
    PUSH 0x1c08d08                      ; 00482a27
    MOV ECX,dword ptr [0x005ae704]      ; 00482a2c | DAT_005ae704
    PUSH ECX                            ; 00482a32 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50 ; 00482a33
        ;   XREF to: 00460a50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00482a38
    MOV EAX,dword ptr [EDI + 0x14]      ; 00482a3b
    XOR EBX,EBX                         ; 00482a3e
    MOV dword ptr [ESP + 0x5c],EAX      ; 00482a40
    MOV dword ptr [ESP + 0x20],EBX      ; 00482a44
    FLD float ptr [ESP + 0x5c]          ; 00482a48
    FCHS                                ; 00482a4c
    FSTP float ptr [ESP + 0x18]         ; 00482a4e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00482a52
    LEA EBX,[ESP + 0x48]                ; 00482a56
    MOV dword ptr [ESP + 0x54],EAX      ; 00482a5a
    MOV dword ptr [ESP + 0x1c],EAX      ; 00482a5e
    LEA EAX,[ESP + 0x18]                ; 00482a62
    MOV EDX,dword ptr [0x005ae704]      ; 00482a66 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00482a6c
    FMUL float ptr [0x0059d1f8]         ; 00482a6e | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00482a74
    FLD float ptr [EAX + 0x4]           ; 00482a76
    FMUL float ptr [0x0059d1f8]         ; 00482a79 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00482a7f
    FLD float ptr [EAX + 0x8]           ; 00482a82
    FMUL float ptr [0x0059d1f8]         ; 00482a85 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00482a8b
    LEA EAX,[ESP + 0x48]                ; 00482a8e
    PUSH EAX                            ; 00482a92
    MOV EAX,dword ptr [EDX]             ; 00482a93 | DAT_01b4d738
    PUSH EAX                            ; 00482a95
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00482a96
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00482a9b
    XOR EBP,EBP                         ; 00482a9e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00482aa0
    MOV EBX,ESP                         ; 00482aa4
    MOV dword ptr [ESP + 0x18],EAX      ; 00482aa6
    MOV EAX,dword ptr [ESP + 0x54]      ; 00482aaa
    MOV EDX,dword ptr [0x005ae704]      ; 00482aae | DAT_005ae704
    MOV dword ptr [ESP + 0x1c],EAX      ; 00482ab4
    LEA EAX,[ESP + 0x18]                ; 00482ab8
    MOV dword ptr [ESP + 0x20],EBP      ; 00482abc
    FLD float ptr [EAX]                 ; 00482ac0
    FMUL float ptr [0x0059d1f8]         ; 00482ac2 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00482ac8
    FLD float ptr [EAX + 0x4]           ; 00482aca
    FMUL float ptr [0x0059d1f8]         ; 00482acd | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00482ad3
    FLD float ptr [EAX + 0x8]           ; 00482ad6
    FMUL float ptr [0x0059d1f8]         ; 00482ad9 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00482adf
    MOV EAX,ESP                         ; 00482ae2
    PUSH EAX                            ; 00482ae4
    MOV EAX,dword ptr [EDX]             ; 00482ae5 | DAT_01b4d738
    ADD EAX,0x30                        ; 00482ae7
    PUSH EAX                            ; 00482aea
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00482aeb
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00482af0
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00482af3
    MOV dword ptr [ESP + 0x20],EBP      ; 00482af7
    MOV dword ptr [ESP + 0x18],EAX      ; 00482afb
    MOV dword ptr [ESP + 0x1c],EAX      ; 00482aff
    LEA EBX,[ESP + 0x3c]                ; 00482b03
    LEA EAX,[ESP + 0x18]                ; 00482b07
    MOV EDX,dword ptr [0x005ae704]      ; 00482b0b | DAT_005ae704
    FLD float ptr [EAX]                 ; 00482b11
    FMUL float ptr [0x0059d1f8]         ; 00482b13 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00482b19
    FLD float ptr [EAX + 0x4]           ; 00482b1b
    FMUL float ptr [0x0059d1f8]         ; 00482b1e | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00482b24
    FLD float ptr [EAX + 0x8]           ; 00482b27
    FMUL float ptr [0x0059d1f8]         ; 00482b2a | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00482b30
    LEA EAX,[ESP + 0x3c]                ; 00482b33
    PUSH EAX                            ; 00482b37
    MOV EAX,dword ptr [EDX]             ; 00482b38 | DAT_01b4d738
    ADD EAX,0x60                        ; 00482b3a
    PUSH EAX                            ; 00482b3d
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00482b3e
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00482b43
    MOV EAX,dword ptr [ESP + 0x54]      ; 00482b46
    LEA EBX,[ESP + 0x24]                ; 00482b4a
    MOV dword ptr [ESP + 0x18],EAX      ; 00482b4e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00482b52
    MOV EDX,dword ptr [0x005ae704]      ; 00482b56 | DAT_005ae704
    MOV dword ptr [ESP + 0x1c],EAX      ; 00482b5c
    LEA EAX,[ESP + 0x18]                ; 00482b60
    MOV dword ptr [ESP + 0x20],EBP      ; 00482b64
    FLD float ptr [EAX]                 ; 00482b68
    FMUL float ptr [0x0059d1f8]         ; 00482b6a | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00482b70
    FLD float ptr [EAX + 0x4]           ; 00482b72
    FMUL float ptr [0x0059d1f8]         ; 00482b75 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00482b7b
    FLD float ptr [EAX + 0x8]           ; 00482b7e
    FMUL float ptr [0x0059d1f8]         ; 00482b81 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00482b87
    LEA EAX,[ESP + 0x24]                ; 00482b8a
    PUSH EAX                            ; 00482b8e
    MOV EAX,dword ptr [EDX]             ; 00482b8f | DAT_01b4d738
    ADD EAX,0x90                        ; 00482b91
    PUSH EAX                            ; 00482b96
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00482b97
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x80000                     ; 00482b9c
    MOV EBX,0xf80000                    ; 00482ba1
    ADD ESP,0x8                         ; 00482ba6
    MOV EAX,ESI                         ; 00482ba9
    MOV dword ptr [0x005c502c],ECX      ; 00482bab | DAT_005c502c
    MOV dword ptr [0x005c5030],EBX      ; 00482bb1 | DAT_005c5030
    MOV dword ptr [0x005c505c],EBX      ; 00482bb7 | DAT_005c505c
    MOV dword ptr [0x005c5060],EBX      ; 00482bbd | DAT_005c5060
    MOV dword ptr [0x005c508c],EBX      ; 00482bc3 | DAT_005c508c
    MOV dword ptr [0x005c5090],ECX      ; 00482bc9 | DAT_005c5090
    MOV dword ptr [0x005c50bc],ECX      ; 00482bcf | DAT_005c50bc
    LEA EBX,[ESP + 0x30]                ; 00482bd5
    MOV dword ptr [0x005c50c0],ECX      ; 00482bd9 | DAT_005c50c0
    FLD float ptr [EAX]                 ; 00482bdf
    FMUL float ptr [0x0059d1f8]         ; 00482be1 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00482be7
    FLD float ptr [EAX + 0x4]           ; 00482be9
    FMUL float ptr [0x0059d1f8]         ; 00482bec | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00482bf2
    FLD float ptr [EAX + 0x8]           ; 00482bf5
    FMUL float ptr [0x0059d1f8]         ; 00482bf8 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00482bfe
    PUSH 0x4                            ; 00482c01
    PUSH EBP                            ; 00482c03
    PUSH 0x1c08d14                      ; 00482c04 | DAT_01c08d14
    LEA EAX,[ESP + 0x3c]                ; 00482c09
    PUSH EAX                            ; 00482c0d
    MOV EAX,[0x005be368]                ; 00482c0e | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 00482c13
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50 ; 00482c14
        ;   XREF to: 0050bb50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 00482c19
    PUSH EBP                            ; 00482c1c
    PUSH ESI                            ; 00482c1d
    MOV EDX,dword ptr [0x007f7370]      ; 00482c1e | DAT_007f7370
    PUSH EDX                            ; 00482c24
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670 ; 00482c25
        ;   XREF to: 00447670 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670()
    MOV EAX,0xffff                      ; 00482c2a
    MOV ECX,dword ptr [0x01c038f4]      ; 00482c2f | DAT_01c038f4
    ADD ESP,0xc                         ; 00482c35
    MOV EDX,dword ptr [EDI + 0x28]      ; 00482c38
    SUB EAX,ECX                         ; 00482c3b
    IMUL EDX                            ; 00482c3d
    SHRD EAX,EDX,0x10                   ; 00482c3f
    PUSH EAX                            ; 00482c43
    MOV EBX,dword ptr [0x005ae704]      ; 00482c44 | DAT_005ae704
    PUSH EBX                            ; 00482c4a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00482c4b
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00482c50
    PUSH 0x1c08d20                      ; 00482c53
    MOV ESI,dword ptr [0x005ae704]      ; 00482c58 | DAT_005ae704
    PUSH ESI                            ; 00482c5e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 00482c5f
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00482c64
    MOV EDI,dword ptr [0x005ae704]      ; 00482c67 | DAT_005ae704
    PUSH EDI                            ; 00482c6d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00482c6e
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00482c73
    ADD ESP,0x60                        ; 00482c76
        ;   Label: LAB_00482c76
    POP EBP                             ; 00482c79
    POP EDI                             ; 00482c7a
    POP ESI                             ; 00482c7b
    POP EBX                             ; 00482c7c
    RET                                 ; 00482c7d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireball_render_FUN_00495ca0(CFireball *this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d5402
;   undefined4 DAT_005f64e4
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061510c
;   undefined4 DAT_0061513c
;   undefined4 DAT_006151cc
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_00622034
;   undefined4 DAT_00622038
;   undefined4 DAT_0062203c
;   undefined4 DAT_00622040
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   ... and 22 more
;
; Called Functions:
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495ca0
        ;   Label: core_fire.cpp_CFireball_render_FUN_00495ca0
    PUSH ESI                            ; 00495ca1
    PUSH EDI                            ; 00495ca2
    PUSH EBP                            ; 00495ca3
    MOV EBP,ESP                         ; 00495ca4
    SUB ESP,0xf4                        ; 00495ca6
    AND ESP,0xfffffff8                  ; 00495cac
    MOV EAX,dword ptr [EBP + 0x14]      ; 00495caf
    MOV EDX,0x3f000000                  ; 00495cb2
    MOV ECX,dword ptr [EAX + 0x4c]      ; 00495cb7
    MOV dword ptr [ESP + 0xe4],EDX      ; 00495cba
    TEST ECX,ECX                        ; 00495cc1
    JZ 0x00495d94                       ; 00495cc3
        ;   XREF to: 00495d94 (CONDITIONAL_JUMP)  ; LAB_00495d94
    MOV EAX,dword ptr [EBP + 0x14]      ; 00495cc9
        ;   Label: LAB_00495cc9
    CMP dword ptr [EAX + 0x4c],0x2      ; 00495ccc
    JNZ 0x00495cdd                      ; 00495cd0
        ;   XREF to: 00495cdd (CONDITIONAL_JUMP)  ; LAB_00495cdd
    MOV dword ptr [ESP + 0xe4],0x3f2a7efa ; 00495cd2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00495cdd
        ;   Label: LAB_00495cdd
    PUSH EAX                            ; 00495ce0
    MOV EDX,dword ptr [0x0060b280]      ; 00495ce1 | DAT_0060b280
    PUSH EDX                            ; 00495ce7 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00495ce8
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00495ced
    MOV EAX,dword ptr [EBP + 0x14]      ; 00495cf0
    PUSH 0x0                            ; 00495cf3
    ADD EAX,0x54                        ; 00495cf5
    PUSH EAX                            ; 00495cf8
    MOV ECX,dword ptr [0x0060b280]      ; 00495cf9 | DAT_0060b280
    PUSH ECX                            ; 00495cff | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 00495d00
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00495d05
    MOV EAX,dword ptr [EBP + 0x14]      ; 00495d08
    MOV EBX,dword ptr [EAX + 0x4c]      ; 00495d0b
    TEST EBX,EBX                        ; 00495d0e
    JNZ 0x00495da4                      ; 00495d10
        ;   XREF to: 00495da4 (CONDITIONAL_JUMP)  ; LAB_00495da4
    MOV EBX,0x1c3e074                   ; 00495d16
    PUSH EBX                            ; 00495d1b
        ;   Label: LAB_00495d1b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00495d1c
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00495d21
    LEA EDI,[ESP + 0x8]                 ; 00495d24
    MOV ESI,dword ptr [EAX + 0x350]     ; 00495d28
    PUSH 0x0                            ; 00495d2e
    LEA EAX,[ESP + 0xc]                 ; 00495d30
    MOV ECX,0x6                         ; 00495d34
    PUSH EAX                            ; 00495d39
    MOVSD.REP ES:EDI,ESI                ; 00495d3a
    CALL core_box.cpp_FUN_0041a840      ; 00495d3c
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00495d41
    MOV ESI,EAX                         ; 00495d44
    TEST EAX,EAX                        ; 00495d46
    JZ 0x00495d7a                       ; 00495d48
        ;   XREF to: 00495d7a (CONDITIONAL_JUMP)  ; LAB_00495d7a
    PUSH 0x0                            ; 00495d4a
    LEA EAX,[ESP + 0x18]                ; 00495d4c
    PUSH EAX                            ; 00495d50
    LEA EAX,[ESP + 0x10]                ; 00495d51
    PUSH EAX                            ; 00495d55
    PUSH 0x265370c                      ; 00495d56 | DAT_0265370c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00495d5b
    PUSH EDI                            ; 00495d5e
    MOV EAX,[0x0061b5a8]                ; 00495d5f | g_CDemonSetPtr
    PUSH EAX                            ; 00495d64 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980 ; 00495d65
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 00495d6a
    PUSH -0x1                           ; 00495d6d
    PUSH 0x0                            ; 00495d6f
    PUSH EBX                            ; 00495d71
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 00495d72
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00495d77
    MOV EDX,dword ptr [0x0060b280]      ; 00495d7a | DAT_0060b280
        ;   Label: LAB_00495d7a
    PUSH EDX                            ; 00495d80 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 00495d81
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00495d86
    TEST ESI,ESI                        ; 00495d89
    JNZ 0x00495dbd                      ; 00495d8b
        ;   XREF to: 00495dbd (CONDITIONAL_JUMP)  ; LAB_00495dbd
    MOV ESP,EBP                         ; 00495d8d
        ;   Label: LAB_00495d8d
    POP EBP                             ; 00495d8f
    POP EDI                             ; 00495d90
    POP ESI                             ; 00495d91
    POP EBX                             ; 00495d92
    RET                                 ; 00495d93
    MOV dword ptr [ESP + 0xe4],0x40800000 ; 00495d94
        ;   Label: LAB_00495d94
    JMP 0x00495cc9                      ; 00495d9f
        ;   XREF to: 00495cc9 (UNCONDITIONAL_JUMP)  ; LAB_00495cc9
    CMP EBX,0x1                         ; 00495da4
        ;   Label: LAB_00495da4
    JNZ 0x00495db3                      ; 00495da7
        ;   XREF to: 00495db3 (CONDITIONAL_JUMP)  ; LAB_00495db3
    MOV EBX,0x1c3e1f0                   ; 00495da9
    JMP 0x00495d1b                      ; 00495dae
        ;   XREF to: 00495d1b (UNCONDITIONAL_JUMP)  ; LAB_00495d1b
    MOV EBX,0x1c3e36c                   ; 00495db3
        ;   Label: LAB_00495db3
    JMP 0x00495d1b                      ; 00495db8
        ;   XREF to: 00495d1b (UNCONDITIONAL_JUMP)  ; LAB_00495d1b
    MOV ECX,dword ptr [0x0060b280]      ; 00495dbd | DAT_0060b280
        ;   Label: LAB_00495dbd
    PUSH ECX                            ; 00495dc3 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00495dc4
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00495dc9
    TEST EAX,EAX                        ; 00495dcc
    JNZ 0x00495d8d                      ; 00495dce
        ;   XREF to: 00495d8d (CONDITIONAL_JUMP)  ; LAB_00495d8d
    MOV EBX,0x80000                     ; 00495dd0
    PUSH EAX                            ; 00495dd5
    MOV ESI,0xf80000                    ; 00495dd6
    MOV EDI,dword ptr [0x0060b280]      ; 00495ddb | DAT_0060b280
    PUSH 0x1c3deb8                      ; 00495de1 | DAT_01c3deb8
    MOV dword ptr [0x0062202c],EBX      ; 00495de6 | DAT_0062202c
    MOV dword ptr [0x00622030],ESI      ; 00495dec | DAT_00622030
    MOV dword ptr [0x0062205c],ESI      ; 00495df2 | DAT_0062205c
    MOV dword ptr [0x00622060],ESI      ; 00495df8 | DAT_00622060
    MOV dword ptr [0x0062208c],ESI      ; 00495dfe | DAT_0062208c
    MOV dword ptr [0x00622090],EBX      ; 00495e04 | DAT_00622090
    PUSH EDI                            ; 00495e0a | DAT_01ba5c50
    MOV dword ptr [0x006220bc],EBX      ; 00495e0b | DAT_006220bc
    MOV dword ptr [0x006220c0],EBX      ; 00495e11 | DAT_006220c0
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 00495e17
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00495e1c
    FLD float ptr [ESP + 0xe4]          ; 00495e1f
    FCHS                                ; 00495e26
    FSTP float ptr [ESP + 0x5c]         ; 00495e28
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00495e2c
    MOV dword ptr [ESP + 0xdc],EAX      ; 00495e30
    MOV dword ptr [ESP + 0x60],EAX      ; 00495e37
    XOR EAX,EAX                         ; 00495e3b
    LEA EBX,[ESP + 0x44]                ; 00495e3d
    MOV dword ptr [ESP + 0x64],EAX      ; 00495e41
    LEA EAX,[ESP + 0x5c]                ; 00495e45
    MOV EDX,dword ptr [0x0060b280]      ; 00495e49 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00495e4f
    FMUL float ptr [0x005f64e4]         ; 00495e51 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00495e57
    FLD float ptr [EAX + 0x4]           ; 00495e59
    FMUL float ptr [0x005f64e4]         ; 00495e5c | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00495e62
    FLD float ptr [EAX + 0x8]           ; 00495e65
    FMUL float ptr [0x005f64e4]         ; 00495e68 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00495e6e
    LEA EAX,[ESP + 0x44]                ; 00495e71
    PUSH EAX                            ; 00495e75
    MOV EAX,dword ptr [EDX]             ; 00495e76 | DAT_01ba5c50
    PUSH EAX                            ; 00495e78
    CALL engine_special.cpp_FUN_0055d723 ; 00495e79
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00495e7e
    LEA EBX,[ESP + 0x68]                ; 00495e81
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00495e85
    XOR EDX,EDX                         ; 00495e8c
    MOV dword ptr [ESP + 0x5c],EAX      ; 00495e8e
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00495e92
    MOV dword ptr [ESP + 0x64],EDX      ; 00495e99
    MOV dword ptr [ESP + 0x60],EAX      ; 00495e9d
    LEA EAX,[ESP + 0x5c]                ; 00495ea1
    MOV EDX,dword ptr [0x0060b280]      ; 00495ea5 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00495eab
    FMUL float ptr [0x005f64e4]         ; 00495ead | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00495eb3
    FLD float ptr [EAX + 0x4]           ; 00495eb5
    FMUL float ptr [0x005f64e4]         ; 00495eb8 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00495ebe
    FLD float ptr [EAX + 0x8]           ; 00495ec1
    FMUL float ptr [0x005f64e4]         ; 00495ec4 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00495eca
    LEA EAX,[ESP + 0x68]                ; 00495ecd
    PUSH EAX                            ; 00495ed1
    MOV EAX,dword ptr [EDX]             ; 00495ed2 | DAT_01ba5c50
    ADD EAX,0x30                        ; 00495ed4
    PUSH EAX                            ; 00495ed7
    CALL engine_special.cpp_FUN_0055d723 ; 00495ed8
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x94]                ; 00495edd
    ADD ESP,0x8                         ; 00495ee4
    MOV EDX,dword ptr [0x0060b280]      ; 00495ee7 | DAT_0060b280
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00495eed
    XOR ECX,ECX                         ; 00495ef4
    MOV dword ptr [ESP + 0x5c],EAX      ; 00495ef6
    MOV dword ptr [ESP + 0x60],EAX      ; 00495efa
    LEA EAX,[ESP + 0x5c]                ; 00495efe
    MOV dword ptr [ESP + 0x64],ECX      ; 00495f02
    FLD float ptr [EAX]                 ; 00495f06
    FMUL float ptr [0x005f64e4]         ; 00495f08 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00495f0e
    FLD float ptr [EAX + 0x4]           ; 00495f10
    FMUL float ptr [0x005f64e4]         ; 00495f13 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00495f19
    FLD float ptr [EAX + 0x8]           ; 00495f1c
    FMUL float ptr [0x005f64e4]         ; 00495f1f | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00495f25
    LEA EAX,[ESP + 0x8c]                ; 00495f28
    PUSH EAX                            ; 00495f2f
    MOV EAX,dword ptr [EDX]             ; 00495f30 | DAT_01ba5c50
    ADD EAX,0x60                        ; 00495f32
    PUSH EAX                            ; 00495f35
    CALL engine_special.cpp_FUN_0055d723 ; 00495f36
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00495f3b
    XOR EBX,EBX                         ; 00495f3e
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00495f40
    MOV dword ptr [ESP + 0x64],EBX      ; 00495f47
    MOV dword ptr [ESP + 0x5c],EAX      ; 00495f4b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00495f4f
    LEA EBX,[ESP + 0x80]                ; 00495f56
    MOV dword ptr [ESP + 0x60],EAX      ; 00495f5d
    LEA EAX,[ESP + 0x5c]                ; 00495f61
    MOV EDX,dword ptr [0x0060b280]      ; 00495f65 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00495f6b
    FMUL float ptr [0x005f64e4]         ; 00495f6d | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00495f73
    FLD float ptr [EAX + 0x4]           ; 00495f75
    FMUL float ptr [0x005f64e4]         ; 00495f78 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00495f7e
    FLD float ptr [EAX + 0x8]           ; 00495f81
    FMUL float ptr [0x005f64e4]         ; 00495f84 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00495f8a
    LEA EAX,[ESP + 0x80]                ; 00495f8d
    PUSH EAX                            ; 00495f94
    MOV EAX,dword ptr [EDX]             ; 00495f95 | DAT_01ba5c50
    ADD EAX,0x90                        ; 00495f97
    PUSH EAX                            ; 00495f9c
    CALL engine_special.cpp_FUN_0055d723 ; 00495f9d
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00495fa2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00495fa5
    MOV ESI,dword ptr [EAX + 0x4c]      ; 00495fa8
    CMP ESI,0x1                         ; 00495fab
    JNZ 0x0049648e                      ; 00495fae
        ;   XREF to: 0049648e (CONDITIONAL_JUMP)  ; LAB_0049648e
    PUSH 0x6151cc                       ; 00495fb4 | DAT_006151cc
    MOV ECX,dword ptr [0x0060b280]      ; 00495fb9 | DAT_0060b280
    PUSH ECX                            ; 00495fbf | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 00495fc0
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_00495fc0
    ADD ESP,0x8                         ; 00495fc5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00495fc8
    MOV EDX,0xffff                      ; 00495fcb
    MOV EBX,dword ptr [0x01c38aec]      ; 00495fd0 | DAT_01c38aec
    MOV EAX,dword ptr [EAX + 0x40]      ; 00495fd6
    SUB EDX,EBX                         ; 00495fd9
    MOV ESI,0xffff                      ; 00495fdb
    IMUL EDX                            ; 00495fe0
    SHRD EAX,EDX,0x10                   ; 00495fe2
    PUSH 0x1                            ; 00495fe6
    MOV [0x00622040],EAX                ; 00495fe8 | DAT_00622040
    MOV dword ptr [0x00622034],ESI      ; 00495fed | DAT_00622034
    MOV dword ptr [0x00622038],ESI      ; 00495ff3 | DAT_00622038
    MOV dword ptr [0x0062203c],ESI      ; 00495ff9 | DAT_0062203c
    MOV dword ptr [0x00622064],ESI      ; 00495fff | DAT_00622064
    MOV dword ptr [0x00622068],ESI      ; 00496005 | DAT_00622068
    MOV dword ptr [0x0062206c],ESI      ; 0049600b | DAT_0062206c
    MOV dword ptr [0x00622094],ESI      ; 00496011 | DAT_00622094
    MOV dword ptr [0x00622098],ESI      ; 00496017 | DAT_00622098
    MOV dword ptr [0x0062209c],ESI      ; 0049601d | DAT_0062209c
    MOV dword ptr [0x006220c4],ESI      ; 00496023 | DAT_006220c4
    MOV dword ptr [0x006220c8],ESI      ; 00496029 | DAT_006220c8
    MOV dword ptr [0x006220cc],ESI      ; 0049602f | DAT_006220cc
    MOV ESI,dword ptr [0x0060b280]      ; 00496035 | DAT_0060b280
    MOV [0x00622070],EAX                ; 0049603b | DAT_00622070
    PUSH ESI                            ; 00496040 | DAT_01ba5c50
    MOV [0x006220a0],EAX                ; 00496041 | DAT_006220a0
    MOV [0x006220d0],EAX                ; 00496046 | DAT_006220d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049604b
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00496050
    PUSH 0x1c3ded0                      ; 00496053
    MOV EDI,dword ptr [0x0060b280]      ; 00496058 | DAT_0060b280
    PUSH EDI                            ; 0049605e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 0049605f
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00496064
    PUSH 0x0                            ; 00496067
    MOV EAX,[0x0060b280]                ; 00496069 | DAT_0060b280
    PUSH EAX                            ; 0049606e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049606f
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00496074
    MOV EDX,dword ptr [0x0060b280]      ; 00496077 | DAT_0060b280
    PUSH EDX                            ; 0049607d | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0049607e
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00496083
    MOV EAX,dword ptr [EBP + 0x14]      ; 00496086
    MOV ECX,dword ptr [EAX + 0x4c]      ; 00496089
    CMP ECX,0x1                         ; 0049608c
    JZ 0x00495d8d                       ; 0049608f
        ;   XREF to: 00495d8d (CONDITIONAL_JUMP)  ; LAB_00495d8d
    CMP ECX,0x2                         ; 00496095
    JZ 0x00495d8d                       ; 00496098
        ;   XREF to: 00495d8d (CONDITIONAL_JUMP)  ; LAB_00495d8d
    LEA EDI,[ESP + 0x38]                ; 0049609e
    MOV ESI,EAX                         ; 004960a2
    MOVSD ES:EDI,ESI                    ; 004960a4
    MOVSD ES:EDI,ESI                    ; 004960a5
    MOVSD ES:EDI,ESI                    ; 004960a6
    MOV ESI,EAX                         ; 004960a7
    LEA EDI,[ESP + 0x20]                ; 004960a9
    LEA ESI,[ESI + 0xc]                 ; 004960ad
    XOR EAX,EAX                         ; 004960b0
    MOVSD ES:EDI,ESI                    ; 004960b2
    MOVSD ES:EDI,ESI                    ; 004960b3
    MOVSD ES:EDI,ESI                    ; 004960b4
    MOV dword ptr [ESP + 0xf0],EAX      ; 004960b5
    MOV ESI,0x3f800000                  ; 004960bc
    MOV EDI,0x3dcccccd                  ; 004960c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004960c6
    MOV dword ptr [ESP + 0x4],ESI       ; 004960c9
    ADD EAX,0x18                        ; 004960cd
    MOV dword ptr [ESP],EDI             ; 004960d0
    MOV dword ptr [ESP + 0xec],EAX      ; 004960d3
    FLD float ptr [ESP]                 ; 004960da
        ;   Label: LAB_004960da
    MOV EAX,dword ptr [ESP + 0xec]      ; 004960dd
    FLD ST0                             ; 004960e4
    FLD double ptr [0x005d5402]         ; 004960e6 | DAT_005d5402
    FXCH                                ; 004960ec
    FMUL ST1                            ; 004960ee
    FLD float ptr [EAX]                 ; 004960f0
    FXCH                                ; 004960f2
    FSTP ST3                            ; 004960f4
    FXCH ST2                            ; 004960f6
    FSTP float ptr [ESP]                ; 004960f8
    FXCH                                ; 004960fb
    FMUL float ptr [ESP]                ; 004960fd
    FLD float ptr [EAX + 0x4]           ; 00496100
    FMUL float ptr [ESP]                ; 00496103
    FLD float ptr [EAX + 0x8]           ; 00496106
    FMUL float ptr [ESP]                ; 00496109
    FLD float ptr [ESP + 0x4]           ; 0049610c
    FLD float ptr [ESP + 0x20]          ; 00496110
    LEA EDI,[ESP + 0xb0]                ; 00496114
    LEA ESI,[ESP + 0xa4]                ; 0049611b
    FXCH ST4                            ; 00496122
    FSTP float ptr [ESP + 0xa4]         ; 00496124
    FXCH ST2                            ; 0049612b
    FSTP float ptr [ESP + 0xa8]         ; 0049612d
    FSTP float ptr [ESP + 0xac]         ; 00496134
    MOVSD ES:EDI,ESI                    ; 0049613b
    MOVSD ES:EDI,ESI                    ; 0049613c
    MOVSD ES:EDI,ESI                    ; 0049613d
    FLD ST0                             ; 0049613e
    FXCH ST2                            ; 00496140
    FSUB float ptr [ESP + 0xb0]         ; 00496142
    FXCH ST2                            ; 00496149
    FMULP ST3                           ; 0049614b
    FXCH                                ; 0049614d
    FST float ptr [ESP + 0x20]          ; 0049614f
    FMUL float ptr [ESP]                ; 00496153
    FLD float ptr [ESP + 0x28]          ; 00496156
    FLD float ptr [ESP + 0x24]          ; 0049615a
    FSUB float ptr [ESP + 0xb4]         ; 0049615e
    FXCH                                ; 00496165
    FSUB float ptr [ESP + 0xb8]         ; 00496167
    FXCH                                ; 0049616e
    FST float ptr [ESP + 0x24]          ; 00496170
    FMUL float ptr [ESP]                ; 00496174
    FXCH                                ; 00496177
    FST float ptr [ESP + 0x28]          ; 00496179
    FMUL float ptr [ESP]                ; 0049617d
    FLD float ptr [ESP + 0x38]          ; 00496180
    FLD float ptr [ESP + 0x3c]          ; 00496184
    FXCH ST6                            ; 00496188
    FSTP ST5                            ; 0049618a
    FXCH ST4                            ; 0049618c
    FSTP float ptr [ESP + 0x4]          ; 0049618e
    FLD float ptr [ESP + 0x40]          ; 00496192
    LEA EAX,[ESP + 0x38]                ; 00496196
    MOV EDX,dword ptr [0x0060b280]      ; 0049619a | DAT_0060b280
    PUSH EAX                            ; 004961a0
    LEA EDI,[ESP + 0x54]                ; 004961a1
    LEA ESI,[ESP + 0xc0]                ; 004961a5
    FXCH ST3                            ; 004961ac
    FSTP float ptr [ESP + 0xc0]         ; 004961ae
    FXCH                                ; 004961b5
    FSTP float ptr [ESP + 0xc4]         ; 004961b7
    FSTP float ptr [ESP + 0xc8]         ; 004961be
    MOVSD ES:EDI,ESI                    ; 004961c5
    MOVSD ES:EDI,ESI                    ; 004961c6
    MOVSD ES:EDI,ESI                    ; 004961c7
    PUSH EDX                            ; 004961c8 | DAT_01ba5c50
    FXCH                                ; 004961c9
    FSUB float ptr [ESP + 0x58]         ; 004961cb
    FXCH ST2                            ; 004961cf
    FSUB float ptr [ESP + 0x5c]         ; 004961d1
    FXCH                                ; 004961d5
    FSUB float ptr [ESP + 0x60]         ; 004961d7
    FXCH ST2                            ; 004961db
    FSTP float ptr [ESP + 0x40]         ; 004961dd
    FSTP float ptr [ESP + 0x44]         ; 004961e1
    FSTP float ptr [ESP + 0x48]         ; 004961e5
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 004961e9
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004961ee
    PUSH 0x0                            ; 004961f1
    PUSH 0x1c3deb8                      ; 004961f3 | DAT_01c3deb8
    MOV ECX,dword ptr [0x0060b280]      ; 004961f8 | DAT_0060b280
    PUSH ECX                            ; 004961fe | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 004961ff
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00496204
    XOR EBX,EBX                         ; 00496207
    FLD float ptr [ESP + 0xe4]          ; 00496209
    FCHS                                ; 00496210
    FMUL float ptr [ESP + 0x4]          ; 00496212
    MOV dword ptr [ESP + 0x64],EBX      ; 00496216
    FSTP float ptr [ESP + 0x5c]         ; 0049621a
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0049621e
    LEA EBX,[ESP + 0x2c]                ; 00496222
    MOV dword ptr [ESP + 0xe8],EAX      ; 00496226
    MOV dword ptr [ESP + 0x60],EAX      ; 0049622d
    LEA EAX,[ESP + 0x5c]                ; 00496231
    MOV EDX,dword ptr [0x0060b280]      ; 00496235 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049623b
    FMUL float ptr [0x005f64e4]         ; 0049623d | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00496243
    FLD float ptr [EAX + 0x4]           ; 00496245
    FMUL float ptr [0x005f64e4]         ; 00496248 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049624e
    FLD float ptr [EAX + 0x8]           ; 00496251
    FMUL float ptr [0x005f64e4]         ; 00496254 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049625a
    LEA EAX,[ESP + 0x2c]                ; 0049625d
    PUSH EAX                            ; 00496261
    MOV EAX,dword ptr [EDX]             ; 00496262 | DAT_01ba5c50
    PUSH EAX                            ; 00496264
    CALL engine_special.cpp_FUN_0055d723 ; 00496265
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049626a
    FLD float ptr [ESP + 0xe4]          ; 0049626d
    FMUL float ptr [ESP + 0x4]          ; 00496274
    XOR ESI,ESI                         ; 00496278
    FSTP float ptr [ESP + 0xdc]         ; 0049627a
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00496281
    LEA EBX,[ESP + 0xc8]                ; 00496288
    MOV dword ptr [ESP + 0x5c],EAX      ; 0049628f
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00496293
    MOV EDX,dword ptr [0x0060b280]      ; 0049629a | DAT_0060b280
    MOV dword ptr [ESP + 0x60],EAX      ; 004962a0
    LEA EAX,[ESP + 0x5c]                ; 004962a4
    MOV dword ptr [ESP + 0x64],ESI      ; 004962a8
    FLD float ptr [EAX]                 ; 004962ac
    FMUL float ptr [0x005f64e4]         ; 004962ae | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 004962b4
    FLD float ptr [EAX + 0x4]           ; 004962b6
    FMUL float ptr [0x005f64e4]         ; 004962b9 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004962bf
    FLD float ptr [EAX + 0x8]           ; 004962c2
    FMUL float ptr [0x005f64e4]         ; 004962c5 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004962cb
    LEA EAX,[ESP + 0xc8]                ; 004962ce
    PUSH EAX                            ; 004962d5
    MOV EAX,dword ptr [EDX]             ; 004962d6 | DAT_01ba5c50
    ADD EAX,0x30                        ; 004962d8
    PUSH EAX                            ; 004962db
    CALL engine_special.cpp_FUN_0055d723 ; 004962dc
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004962e1
    LEA EBX,[ESP + 0x74]                ; 004962e4
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004962e8
    MOV EDX,dword ptr [0x0060b280]      ; 004962ef | DAT_0060b280
    MOV dword ptr [ESP + 0x5c],EAX      ; 004962f5
    MOV dword ptr [ESP + 0x60],EAX      ; 004962f9
    LEA EAX,[ESP + 0x5c]                ; 004962fd
    MOV dword ptr [ESP + 0x64],ESI      ; 00496301
    FLD float ptr [EAX]                 ; 00496305
    FMUL float ptr [0x005f64e4]         ; 00496307 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049630d
    FLD float ptr [EAX + 0x4]           ; 0049630f
    FMUL float ptr [0x005f64e4]         ; 00496312 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00496318
    FLD float ptr [EAX + 0x8]           ; 0049631b
    FMUL float ptr [0x005f64e4]         ; 0049631e | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00496324
    LEA EAX,[ESP + 0x74]                ; 00496327
    PUSH EAX                            ; 0049632b
    MOV EAX,dword ptr [EDX]             ; 0049632c | DAT_01ba5c50
    ADD EAX,0x60                        ; 0049632e
    PUSH EAX                            ; 00496331
    CALL engine_special.cpp_FUN_0055d723 ; 00496332
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00496337
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049633a
    MOV EDX,dword ptr [0x0060b280]      ; 00496341 | DAT_0060b280
    MOV dword ptr [ESP + 0x5c],EAX      ; 00496347
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0049634b
    MOV dword ptr [ESP + 0x64],ESI      ; 00496352
    MOV dword ptr [ESP + 0x60],EAX      ; 00496356
    LEA EBX,[ESP + 0x98]                ; 0049635a
    LEA EAX,[ESP + 0x5c]                ; 00496361
    FLD float ptr [EAX]                 ; 00496365
    FMUL float ptr [0x005f64e4]         ; 00496367 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049636d
    FLD float ptr [EAX + 0x4]           ; 0049636f
    FMUL float ptr [0x005f64e4]         ; 00496372 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00496378
    FLD float ptr [EAX + 0x8]           ; 0049637b
    FMUL float ptr [0x005f64e4]         ; 0049637e | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00496384
    LEA EAX,[ESP + 0x98]                ; 00496387
    PUSH EAX                            ; 0049638e
    MOV EAX,dword ptr [EDX]             ; 0049638f | DAT_01ba5c50
    ADD EAX,0x90                        ; 00496391
    PUSH EAX                            ; 00496396
    CALL engine_special.cpp_FUN_0055d723 ; 00496397
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049639c
    PUSH ESI                            ; 0049639f
    MOV ECX,dword ptr [EBP + 0x14]      ; 004963a0
    MOV EAX,[0x007bda74]                ; 004963a3 | DAT_007bda74
    PUSH ECX                            ; 004963a8
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004963a9
    PUSH EAX                            ; 004963ac
    CALL dword ptr [EDX + 0x4]          ; 004963ad
    MOV EDX,0xffff                      ; 004963b0
    ADD ESP,0xc                         ; 004963b5
    MOV EBX,dword ptr [0x01c38aec]      ; 004963b8 | DAT_01c38aec
    MOV EAX,dword ptr [EBP + 0x14]      ; 004963be
    SUB EDX,EBX                         ; 004963c1
    MOV EAX,dword ptr [EAX + 0x40]      ; 004963c3
    MOV ESI,0xffff                      ; 004963c6
    IMUL EDX                            ; 004963cb
    SHRD EAX,EDX,0x10                   ; 004963cd
    PUSH 0x1                            ; 004963d1
    MOV [0x00622040],EAX                ; 004963d3 | DAT_00622040
    MOV dword ptr [0x00622034],ESI      ; 004963d8 | DAT_00622034
    MOV dword ptr [0x00622038],ESI      ; 004963de | DAT_00622038
    MOV dword ptr [0x0062203c],ESI      ; 004963e4 | DAT_0062203c
    MOV dword ptr [0x00622064],ESI      ; 004963ea | DAT_00622064
    MOV dword ptr [0x00622068],ESI      ; 004963f0 | DAT_00622068
    MOV dword ptr [0x0062206c],ESI      ; 004963f6 | DAT_0062206c
    MOV dword ptr [0x00622094],ESI      ; 004963fc | DAT_00622094
    MOV dword ptr [0x00622098],ESI      ; 00496402 | DAT_00622098
    MOV dword ptr [0x0062209c],ESI      ; 00496408 | DAT_0062209c
    MOV dword ptr [0x006220c4],ESI      ; 0049640e | DAT_006220c4
    MOV dword ptr [0x006220c8],ESI      ; 00496414 | DAT_006220c8
    MOV dword ptr [0x006220cc],ESI      ; 0049641a | DAT_006220cc
    MOV ESI,dword ptr [0x0060b280]      ; 00496420 | DAT_0060b280
    MOV [0x00622070],EAX                ; 00496426 | DAT_00622070
    PUSH ESI                            ; 0049642b | DAT_01ba5c50
    MOV [0x006220a0],EAX                ; 0049642c | DAT_006220a0
    MOV [0x006220d0],EAX                ; 00496431 | DAT_006220d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00496436
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049643b
    PUSH 0x1c3ded0                      ; 0049643e
    MOV EDI,dword ptr [0x0060b280]      ; 00496443 | DAT_0060b280
    PUSH EDI                            ; 00496449 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 0049644a
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0049644f
    PUSH 0x0                            ; 00496452
    MOV EAX,[0x0060b280]                ; 00496454 | DAT_0060b280
    PUSH EAX                            ; 00496459 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049645a
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049645f
    MOV EDX,dword ptr [0x0060b280]      ; 00496462 | DAT_0060b280
    PUSH EDX                            ; 00496468 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 00496469
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0049646e
    MOV ECX,dword ptr [ESP + 0xf0]      ; 00496471
    INC ECX                             ; 00496478
    MOV dword ptr [ESP + 0xf0],ECX      ; 00496479
    CMP ECX,0x3                         ; 00496480
    JGE 0x00495d8d                      ; 00496483
        ;   XREF to: 00495d8d (CONDITIONAL_JUMP)  ; LAB_00495d8d
    JMP 0x004960da                      ; 00496489
        ;   XREF to: 004960da (UNCONDITIONAL_JUMP)  ; LAB_004960da
    CMP ESI,0x2                         ; 0049648e
        ;   Label: LAB_0049648e
    JNZ 0x004964a4                      ; 00496491
        ;   XREF to: 004964a4 (CONDITIONAL_JUMP)  ; LAB_004964a4
    PUSH 0x61513c                       ; 00496493 | DAT_0061513c
    MOV EDX,dword ptr [0x0060b280]      ; 00496498 | DAT_0060b280
    PUSH EDX                            ; 0049649e | DAT_01ba5c50
    JMP 0x00495fc0                      ; 0049649f
        ;   XREF to: 00495fc0 (UNCONDITIONAL_JUMP)  ; LAB_00495fc0
    PUSH 0x61510c                       ; 004964a4 | DAT_0061510c
        ;   Label: LAB_004964a4
    MOV EAX,[0x0060b280]                ; 004964a9 | DAT_0060b280
    PUSH EAX                            ; 004964ae | DAT_01ba5c50
    JMP 0x00495fc0                      ; 004964af
        ;   XREF to: 00495fc0 (UNCONDITIONAL_JUMP)  ; LAB_00495fc0


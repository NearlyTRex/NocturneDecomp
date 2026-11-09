; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0049a9f0(CVector3f *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b05c
;   undefined4 DAT_0060b060
;   undefined4 DAT_0060b08c
;   undefined4 DAT_0060b090
;   undefined4 DAT_01bdd7e4
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_00538400
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_matrix.c_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a9f0
        ;   Label: core_fire.cpp_FUN_0049a9f0
    PUSH ESI                            ; 0049a9f1
    PUSH EDI                            ; 0049a9f2
    PUSH EBP                            ; 0049a9f3
    SUB ESP,0x58                        ; 0049a9f4
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0049a9f7
    PUSH ESI                            ; 0049a9fb
    MOV EDX,dword ptr [0x005f2afc]      ; 0049a9fc | DAT_005f2afc
    PUSH EDX                            ; 0049aa02 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0049aa03
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049aa08
    PUSH 0x0                            ; 0049aa0b
    LEA EAX,[ESI + 0x8c]                ; 0049aa0d
    PUSH EAX                            ; 0049aa13
    MOV ECX,dword ptr [0x005f2afc]      ; 0049aa14 | DAT_005f2afc
    PUSH ECX                            ; 0049aa1a | DAT_01bdd7e4
    LEA EBX,[ESP + 0x4c]                ; 0049aa1b
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0049aa1f
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049aa24
    LEA EAX,[ESI + 0xb0]                ; 0049aa27
    MOV EDX,dword ptr [0x005f2afc]      ; 0049aa2d | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049aa33
    FMUL float ptr [0x005df8e4]         ; 0049aa35 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049aa3b
    FLD float ptr [EAX + 0x4]           ; 0049aa3d
    FMUL float ptr [0x005df8e4]         ; 0049aa40 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049aa46
    FLD float ptr [EAX + 0x8]           ; 0049aa49
    FMUL float ptr [0x005df8e4]         ; 0049aa4c | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049aa52
    LEA EAX,[ESP + 0x40]                ; 0049aa55
    PUSH EAX                            ; 0049aa59
    MOV EAX,dword ptr [EDX]             ; 0049aa5a | DAT_01bdd7e4
    PUSH EAX                            ; 0049aa5c
    CALL engine_special.cpp_FUN_005632a3 ; 0049aa5d
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x54]                ; 0049aa62
    ADD ESP,0x8                         ; 0049aa66
    LEA EAX,[ESI + 0xbc]                ; 0049aa69
    MOV EDX,dword ptr [0x005f2afc]      ; 0049aa6f | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049aa75
    FMUL float ptr [0x005df8e4]         ; 0049aa77 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049aa7d
    FLD float ptr [EAX + 0x4]           ; 0049aa7f
    FMUL float ptr [0x005df8e4]         ; 0049aa82 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049aa88
    FLD float ptr [EAX + 0x8]           ; 0049aa8b
    FMUL float ptr [0x005df8e4]         ; 0049aa8e | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049aa94
    LEA EAX,[ESP + 0x4c]                ; 0049aa97
    PUSH EAX                            ; 0049aa9b
    MOV EAX,dword ptr [EDX]             ; 0049aa9c | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0049aa9e
    PUSH EAX                            ; 0049aaa1
    CALL engine_special.cpp_FUN_005632a3 ; 0049aaa2
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x3c]                ; 0049aaa7
    ADD ESP,0x8                         ; 0049aaab
    LEA EAX,[ESI + 0xc8]                ; 0049aaae
    MOV EDX,dword ptr [0x005f2afc]      ; 0049aab4 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049aaba
    FMUL float ptr [0x005df8e4]         ; 0049aabc | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049aac2
    FLD float ptr [EAX + 0x4]           ; 0049aac4
    FMUL float ptr [0x005df8e4]         ; 0049aac7 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049aacd
    FLD float ptr [EAX + 0x8]           ; 0049aad0
    FMUL float ptr [0x005df8e4]         ; 0049aad3 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049aad9
    LEA EAX,[ESP + 0x34]                ; 0049aadc
    PUSH EAX                            ; 0049aae0
    MOV EAX,dword ptr [EDX]             ; 0049aae1 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0049aae3
    PUSH EAX                            ; 0049aae6
    CALL engine_special.cpp_FUN_005632a3 ; 0049aae7
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049aaec
    LEA EAX,[ESI + 0x44]                ; 0049aaef
    PUSH EAX                            ; 0049aaf2
    MOV EBX,dword ptr [0x005f2afc]      ; 0049aaf3 | DAT_005f2afc
    PUSH EBX                            ; 0049aaf9 | DAT_01bdd7e4
    MOV EDI,0x3                         ; 0049aafa
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0049aaff
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0049ab04
    XOR EBP,EBP                         ; 0049ab07
    MOV dword ptr [ESP + 0x4],EDI       ; 0049ab09
    MOV dword ptr [ESP + 0x14],EBP      ; 0049ab0d
    MOV dword ptr [ESP + 0x10],EBP      ; 0049ab11
    MOV dword ptr [ESP + 0xc],EBP       ; 0049ab15
    MOV dword ptr [ESP + 0x8],EBP       ; 0049ab19
    MOV dword ptr [ESP + 0x18],EBP      ; 0049ab1d
    MOV EDI,0x1                         ; 0049ab21
    MOV EBP,0x2                         ; 0049ab26
    MOV dword ptr [ESP + 0x1c],EDI      ; 0049ab2b
    MOV dword ptr [ESP + 0x20],EBP      ; 0049ab2f
    MOV EAX,dword ptr [ESI + 0x40]      ; 0049ab33
    PUSH EAX                            ; 0049ab36
    MOV EDX,dword ptr [0x005f2afc]      ; 0049ab37 | DAT_005f2afc
    PUSH EDX                            ; 0049ab3d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0049ab3e
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0049ab43
    LEA EBX,[ESP + 0x28]                ; 0049ab46
    MOV EAX,ESI                         ; 0049ab4a
    FLD float ptr [EAX]                 ; 0049ab4c
    FMUL float ptr [0x005df8e4]         ; 0049ab4e | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049ab54
    FLD float ptr [EAX + 0x4]           ; 0049ab56
    FMUL float ptr [0x005df8e4]         ; 0049ab59 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049ab5f
    FLD float ptr [EAX + 0x8]           ; 0049ab62
    FMUL float ptr [0x005df8e4]         ; 0049ab65 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049ab6b
    PUSH 0x3                            ; 0049ab6e
    PUSH 0x0                            ; 0049ab70
    PUSH 0x0                            ; 0049ab72
    LEA EAX,[ESP + 0x34]                ; 0049ab74
    PUSH EAX                            ; 0049ab78
    MOV ECX,dword ptr [0x00603b28]      ; 0049ab79 | g_CDemonSetPtr
    PUSH ECX                            ; 0049ab7f | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00538400 ; 0049ab80
        ;   XREF to: 00538400 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00538400(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    MOV EAX,dword ptr [ESI + 0x98]      ; 0049ab85
    MOV [0x0060b02c],EAX                ; 0049ab8b | DAT_0060b02c
    MOV EAX,dword ptr [ESI + 0xa4]      ; 0049ab90
    MOV [0x0060b030],EAX                ; 0049ab96 | DAT_0060b030
    MOV EAX,dword ptr [ESI + 0x9c]      ; 0049ab9b
    MOV EBX,dword ptr [0x005f2afc]      ; 0049aba1 | DAT_005f2afc
    MOV [0x0060b05c],EAX                ; 0049aba7 | DAT_0060b05c
    MOV EAX,dword ptr [ESI + 0xa8]      ; 0049abac
    ADD ESP,0x14                        ; 0049abb2
    MOV [0x0060b060],EAX                ; 0049abb5 | DAT_0060b060
    MOV EAX,dword ptr [ESI + 0xa0]      ; 0049abba
    PUSH 0x0                            ; 0049abc0
    MOV [0x0060b08c],EAX                ; 0049abc2 | DAT_0060b08c
    MOV EAX,dword ptr [ESI + 0xac]      ; 0049abc7
    PUSH EBX                            ; 0049abcd | DAT_01bdd7e4
    MOV [0x0060b090],EAX                ; 0049abce | DAT_0060b090
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0049abd3
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049abd8
    MOV EAX,ESP                         ; 0049abdb
    PUSH EAX                            ; 0049abdd
    MOV ESI,dword ptr [0x005f2afc]      ; 0049abde | DAT_005f2afc
    PUSH ESI                            ; 0049abe4 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730 ; 0049abe5
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0049abea
    MOV EDI,dword ptr [0x005f2afc]      ; 0049abed | DAT_005f2afc
    PUSH EDI                            ; 0049abf3 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0049abf4
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0049abf9
    ADD ESP,0x58                        ; 0049abfc
    POP EBP                             ; 0049abff
    POP EDI                             ; 0049ac00
    POP ESI                             ; 0049ac01
    POP EBX                             ; 0049ac02
    RET                                 ; 0049ac03


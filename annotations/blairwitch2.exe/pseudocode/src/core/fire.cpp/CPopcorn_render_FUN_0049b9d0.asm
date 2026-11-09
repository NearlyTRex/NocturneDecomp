; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CPopcorn_render_FUN_0049b9d0(CPopcorn *this_ptr)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f64e4
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061585c
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_00622040
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   undefined4 DAT_00622070
;   undefined4 DAT_0062208c
;   undefined4 DAT_00622090
;   undefined4 DAT_006220a0
;   undefined4 DAT_006220bc
;   undefined4 DAT_006220c0
;   ... and 6 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_005317c0
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_matrix.c_FUN_0046b650
;   engine_matrix.c_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b9d0
        ;   Label: core_fire.cpp_CPopcorn_render_FUN_0049b9d0
    PUSH ESI                            ; 0049b9d1
    PUSH EBP                            ; 0049b9d2
    SUB ESP,0x94                        ; 0049b9d3
    MOV EBP,dword ptr [ESP + 0xa4]      ; 0049b9d9
    MOV ESI,dword ptr [0x0060b280]      ; 0049b9e0 | DAT_0060b280
    LEA EBX,[ESP + 0x58]                ; 0049b9e6
    MOV EAX,EBP                         ; 0049b9ea
    MOV ESI,dword ptr [ESI]             ; 0049b9ec | DAT_01ba5c50
    FLD float ptr [EAX]                 ; 0049b9ee
    FMUL float ptr [0x005f64e4]         ; 0049b9f0 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049b9f6
    FLD float ptr [EAX + 0x4]           ; 0049b9f8
    FMUL float ptr [0x005f64e4]         ; 0049b9fb | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049ba01
    FLD float ptr [EAX + 0x8]           ; 0049ba04
    FMUL float ptr [0x005f64e4]         ; 0049ba07 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049ba0d
    LEA EAX,[ESP + 0x58]                ; 0049ba10
    PUSH EAX                            ; 0049ba14
    PUSH ESI                            ; 0049ba15
    CALL engine_special.cpp_FUN_0055d9ec ; 0049ba16
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049ba1b
    PUSH ESI                            ; 0049ba1e
    MOV EDX,dword ptr [0x0060b280]      ; 0049ba1f | DAT_0060b280
    PUSH EDX                            ; 0049ba25 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0 ; 0049ba26
        ;   XREF to: 0046cad0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 0049ba2b
    TEST EAX,EAX                        ; 0049ba2e
    JNZ 0x0049ba3c                      ; 0049ba30
        ;   XREF to: 0049ba3c (CONDITIONAL_JUMP)  ; LAB_0049ba3c
    ADD ESP,0x94                        ; 0049ba32
    POP EBP                             ; 0049ba38
    POP ESI                             ; 0049ba39
    POP EBX                             ; 0049ba3a
    RET                                 ; 0049ba3b
    PUSH EDI                            ; 0049ba3c
        ;   Label: LAB_0049ba3c
    PUSH EBP                            ; 0049ba3d
    MOV ECX,dword ptr [0x0060b280]      ; 0049ba3e | DAT_0060b280
    PUSH ECX                            ; 0049ba44 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0049ba45
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049ba4a
    MOV EBX,dword ptr [0x0060b280]      ; 0049ba4d | DAT_0060b280
    PUSH EBX                            ; 0049ba53 | DAT_01ba5c50
    LEA ESI,[ESP + 0x30]                ; 0049ba54
    LEA EDI,[ESP + 0x48]                ; 0049ba58
    CALL engine_matrix.c_FUN_0046b650   ; 0049ba5c
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b650()
    ADD ESP,0x4                         ; 0049ba61
    LEA ESI,[ESP + 0x2c]                ; 0049ba64
    LEA EAX,[ESP + 0x44]                ; 0049ba68
    PUSH 0x0                            ; 0049ba6c
    MOVSD ES:EDI,ESI                    ; 0049ba6e
    MOVSD ES:EDI,ESI                    ; 0049ba6f
    MOVSD ES:EDI,ESI                    ; 0049ba70
    PUSH EAX                            ; 0049ba71
    MOV ESI,dword ptr [0x0060b280]      ; 0049ba72 | DAT_0060b280
    PUSH ESI                            ; 0049ba78 | DAT_01ba5c50
    LEA EBX,[ESP + 0x98]                ; 0049ba79
    MOV EDI,0xbe000000                  ; 0049ba80
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300 ; 0049ba85
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    LEA EAX,[ESP + 0x80]                ; 0049ba8a
    MOV ESI,dword ptr [0x0060b280]      ; 0049ba91 | DAT_0060b280
    ADD ESP,0xc                         ; 0049ba97
    XOR EDX,EDX                         ; 0049ba9a
    MOV dword ptr [ESP + 0x74],EDI      ; 0049ba9c
    MOV dword ptr [ESP + 0x78],EDI      ; 0049baa0
    MOV dword ptr [ESP + 0x7c],EDX      ; 0049baa4
    FLD float ptr [EAX]                 ; 0049baa8
    FMUL float ptr [0x005f64e4]         ; 0049baaa | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049bab0
    FLD float ptr [EAX + 0x4]           ; 0049bab2
    FMUL float ptr [0x005f64e4]         ; 0049bab5 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049babb
    FLD float ptr [EAX + 0x8]           ; 0049babe
    FMUL float ptr [0x005f64e4]         ; 0049bac1 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049bac7
    LEA EAX,[ESP + 0x8c]                ; 0049baca
    PUSH EAX                            ; 0049bad1
    MOV EAX,dword ptr [ESI]             ; 0049bad2 | DAT_01ba5c50
    PUSH EAX                            ; 0049bad4
    CALL engine_special.cpp_FUN_0055d723 ; 0049bad5
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    XOR ESI,ESI                         ; 0049bada
    MOV ECX,0x3e000000                  ; 0049badc
    LEA EBX,[ESP + 0x70]                ; 0049bae1
    ADD ESP,0x8                         ; 0049bae5
    LEA EAX,[ESP + 0x74]                ; 0049bae8
    MOV dword ptr [ESP + 0x74],ECX      ; 0049baec
    MOV dword ptr [ESP + 0x78],EDI      ; 0049baf0
    MOV dword ptr [ESP + 0x7c],ESI      ; 0049baf4
    MOV ESI,dword ptr [0x0060b280]      ; 0049baf8 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049bafe
    FMUL float ptr [0x005f64e4]         ; 0049bb00 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049bb06
    FLD float ptr [EAX + 0x4]           ; 0049bb08
    FMUL float ptr [0x005f64e4]         ; 0049bb0b | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049bb11
    FLD float ptr [EAX + 0x8]           ; 0049bb14
    FMUL float ptr [0x005f64e4]         ; 0049bb17 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049bb1d
    LEA EAX,[ESP + 0x68]                ; 0049bb20
    PUSH EAX                            ; 0049bb24
    MOV EAX,dword ptr [ESI]             ; 0049bb25 | DAT_01ba5c50
    ADD EAX,0x30                        ; 0049bb27
    PUSH EAX                            ; 0049bb2a
    MOV EDI,0x3e000000                  ; 0049bb2b
    CALL engine_special.cpp_FUN_0055d723 ; 0049bb30
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x0060b280]      ; 0049bb35 | DAT_0060b280
    ADD ESP,0x8                         ; 0049bb3b
    XOR EDX,EDX                         ; 0049bb3e
    MOV dword ptr [ESP + 0x74],EDI      ; 0049bb40
    MOV dword ptr [ESP + 0x78],EDI      ; 0049bb44
    MOV dword ptr [ESP + 0x7c],EDX      ; 0049bb48
    LEA EBX,[ESP + 0x38]                ; 0049bb4c
    LEA EAX,[ESP + 0x74]                ; 0049bb50
    FLD float ptr [EAX]                 ; 0049bb54
    FMUL float ptr [0x005f64e4]         ; 0049bb56 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049bb5c
    FLD float ptr [EAX + 0x4]           ; 0049bb5e
    FMUL float ptr [0x005f64e4]         ; 0049bb61 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049bb67
    FLD float ptr [EAX + 0x8]           ; 0049bb6a
    FMUL float ptr [0x005f64e4]         ; 0049bb6d | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049bb73
    LEA EAX,[ESP + 0x38]                ; 0049bb76
    PUSH EAX                            ; 0049bb7a
    MOV EAX,dword ptr [ESI]             ; 0049bb7b | DAT_01ba5c50
    ADD EAX,0x60                        ; 0049bb7d
    PUSH EAX                            ; 0049bb80
    XOR ESI,ESI                         ; 0049bb81
    CALL engine_special.cpp_FUN_0055d723 ; 0049bb83
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0xbe000000                  ; 0049bb88
    LEA EBX,[ESP + 0x58]                ; 0049bb8d
    ADD ESP,0x8                         ; 0049bb91
    LEA EAX,[ESP + 0x74]                ; 0049bb94
    MOV dword ptr [ESP + 0x74],ECX      ; 0049bb98
    MOV dword ptr [ESP + 0x78],EDI      ; 0049bb9c
    MOV dword ptr [ESP + 0x7c],ESI      ; 0049bba0
    MOV ESI,dword ptr [0x0060b280]      ; 0049bba4 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049bbaa
    FMUL float ptr [0x005f64e4]         ; 0049bbac | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049bbb2
    FLD float ptr [EAX + 0x4]           ; 0049bbb4
    FMUL float ptr [0x005f64e4]         ; 0049bbb7 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049bbbd
    FLD float ptr [EAX + 0x8]           ; 0049bbc0
    FMUL float ptr [0x005f64e4]         ; 0049bbc3 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049bbc9
    LEA EAX,[ESP + 0x50]                ; 0049bbcc
    PUSH EAX                            ; 0049bbd0
    MOV EAX,dword ptr [ESI]             ; 0049bbd1 | DAT_01ba5c50
    ADD EAX,0x90                        ; 0049bbd3
    PUSH EAX                            ; 0049bbd8
    CALL engine_special.cpp_FUN_0055d723 ; 0049bbd9
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049bbde
    PUSH 0x61585c                       ; 0049bbe1 | DAT_0061585c
    MOV EDI,dword ptr [0x0060b280]      ; 0049bbe6 | DAT_0060b280
    PUSH EDI                            ; 0049bbec | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0049bbed
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0049bbf2
    PUSH 0x0                            ; 0049bbf5
    MOV EAX,[0x007bda74]                ; 0049bbf7 | DAT_007bda74
    PUSH EBP                            ; 0049bbfc
    MOV EBX,dword ptr [EAX + 0x3c]      ; 0049bbfd
    PUSH EAX                            ; 0049bc00
    CALL dword ptr [EBX + 0x4]          ; 0049bc01
    MOV EAX,0xffff                      ; 0049bc04
    MOV ECX,0x80000                     ; 0049bc09
    MOV EBX,0xf80000                    ; 0049bc0e
    MOV EDX,dword ptr [0x01c38aec]      ; 0049bc13 | DAT_01c38aec
    ADD ESP,0xc                         ; 0049bc19
    MOV dword ptr [0x0062202c],ECX      ; 0049bc1c | DAT_0062202c
    MOV dword ptr [0x00622030],EBX      ; 0049bc22 | DAT_00622030
    MOV dword ptr [0x0062205c],EBX      ; 0049bc28 | DAT_0062205c
    MOV dword ptr [0x00622060],EBX      ; 0049bc2e | DAT_00622060
    MOV dword ptr [0x0062208c],EBX      ; 0049bc34 | DAT_0062208c
    MOV dword ptr [0x00622090],ECX      ; 0049bc3a | DAT_00622090
    MOV dword ptr [0x006220bc],ECX      ; 0049bc40 | DAT_006220bc
    SUB EAX,EDX                         ; 0049bc46
    LEA EBX,[ESP + 0x80]                ; 0049bc48
    MOV [0x00622040],EAX                ; 0049bc4f | DAT_00622040
    MOV [0x00622070],EAX                ; 0049bc54 | DAT_00622070
    MOV [0x006220a0],EAX                ; 0049bc59 | DAT_006220a0
    MOV [0x006220d0],EAX                ; 0049bc5e | DAT_006220d0
    MOV EAX,EBP                         ; 0049bc63
    MOV dword ptr [0x006220c0],ECX      ; 0049bc65 | DAT_006220c0
    FLD float ptr [EAX]                 ; 0049bc6b
    FMUL float ptr [0x005f64e4]         ; 0049bc6d | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049bc73
    FLD float ptr [EAX + 0x4]           ; 0049bc75
    FMUL float ptr [0x005f64e4]         ; 0049bc78 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049bc7e
    FLD float ptr [EAX + 0x8]           ; 0049bc81
    FMUL float ptr [0x005f64e4]         ; 0049bc84 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049bc8a
    PUSH 0x4                            ; 0049bc8d
    PUSH 0x0                            ; 0049bc8f
    PUSH 0x1c3dec4                      ; 0049bc91 | DAT_01c3dec4
    LEA EAX,[ESP + 0x8c]                ; 0049bc96
    PUSH EAX                            ; 0049bc9d
    MOV ESI,dword ptr [0x0061b5a8]      ; 0049bc9e | g_CDemonSetPtr
    PUSH ESI                            ; 0049bca4 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_005317c0 ; 0049bca5
        ;   XREF to: 005317c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_005317c0(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 0049bcaa
    PUSH 0x1                            ; 0049bcad
    MOV EDI,dword ptr [0x0060b280]      ; 0049bcaf | DAT_0060b280
    PUSH EDI                            ; 0049bcb5 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049bcb6
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049bcbb
    XOR EAX,EAX                         ; 0049bcbe
    MOV EBP,0x4                         ; 0049bcc0
    MOV dword ptr [ESP + 0x18],EAX      ; 0049bcc5
    MOV dword ptr [ESP + 0x14],EAX      ; 0049bcc9
    MOV dword ptr [ESP + 0x10],EAX      ; 0049bccd
    MOV dword ptr [ESP + 0xc],EAX       ; 0049bcd1
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049bcd5
    MOV EAX,0x3                         ; 0049bcd9
    MOV EDI,0x1                         ; 0049bcde
    MOV dword ptr [ESP + 0x28],EAX      ; 0049bce3
    LEA EAX,[ESP + 0x4]                 ; 0049bce7
    MOV EDX,dword ptr [0x0060b280]      ; 0049bceb | DAT_0060b280
    PUSH EAX                            ; 0049bcf1
    MOV dword ptr [ESP + 0xc],EBP       ; 0049bcf2
    MOV EBP,0x2                         ; 0049bcf6
    PUSH EDX                            ; 0049bcfb | DAT_01ba5c50
    MOV dword ptr [ESP + 0x28],EDI      ; 0049bcfc
    MOV dword ptr [ESP + 0x2c],EBP      ; 0049bd00
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 0049bd04
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0049bd09
    XOR EBX,EBX                         ; 0049bd0c
    PUSH EBX                            ; 0049bd0e
    MOV ECX,dword ptr [0x0060b280]      ; 0049bd0f | DAT_0060b280
    PUSH ECX                            ; 0049bd15 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049bd16
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049bd1b
    MOV EBX,dword ptr [0x0060b280]      ; 0049bd1e | DAT_0060b280
    PUSH EBX                            ; 0049bd24 | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0049bd25
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0049bd2a
    POP EDI                             ; 0049bd2d
    ADD ESP,0x94                        ; 0049bd2e
    POP EBP                             ; 0049bd34
    POP ESI                             ; 0049bd35
    POP EBX                             ; 0049bd36
    RET                                 ; 0049bd37


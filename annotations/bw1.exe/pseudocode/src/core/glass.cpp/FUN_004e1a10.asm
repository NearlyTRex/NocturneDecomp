; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_glass_cpp_FUN_004e1a10(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00601450
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c51cac
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00553440
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e1a10
        ;   Label: core_glass.cpp_FUN_004e1a10
    PUSH EDI                            ; 004e1a11
    PUSH EBP                            ; 004e1a12
    SUB ESP,0x34                        ; 004e1a13
    MOV EBP,dword ptr [ESP + 0x44]      ; 004e1a16
    CMP dword ptr [EBP + 0x370],0x0     ; 004e1a1a
    JNZ 0x004e1a42                      ; 004e1a21
        ;   XREF to: 004e1a42 (CONDITIONAL_JUMP)  ; LAB_004e1a42
    CMP dword ptr [EBP + 0xfc],0x0      ; 004e1a23
    JNZ 0x004e1a42                      ; 004e1a2a
        ;   XREF to: 004e1a42 (CONDITIONAL_JUMP)  ; LAB_004e1a42
    CMP dword ptr [EBP + 0x17c],0xfde8  ; 004e1a2c
    JL 0x004e1a42                       ; 004e1a36
        ;   XREF to: 004e1a42 (CONDITIONAL_JUMP)  ; LAB_004e1a42
    MOV ESI,dword ptr [EBP + 0x180]     ; 004e1a38
    TEST ESI,ESI                        ; 004e1a3e
    JZ 0x004e1a4b                       ; 004e1a40
        ;   XREF to: 004e1a4b (CONDITIONAL_JUMP)  ; LAB_004e1a4b
    XOR EAX,EAX                         ; 004e1a42
        ;   Label: LAB_004e1a42
    ADD ESP,0x34                        ; 004e1a44
    POP EBP                             ; 004e1a47
    POP EDI                             ; 004e1a48
    POP ESI                             ; 004e1a49
    RET                                 ; 004e1a4a
    MOV EDI,dword ptr [0x00612560]      ; 004e1a4b | DAT_00612560
        ;   Label: LAB_004e1a4b
    PUSH EDI                            ; 004e1a51 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 004e1a52
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004e1a57
    TEST EAX,EAX                        ; 004e1a5a
    JNZ 0x004e1a42                      ; 004e1a5c
        ;   XREF to: 004e1a42 (CONDITIONAL_JUMP)  ; LAB_004e1a42
    PUSH EBX                            ; 004e1a5e
    PUSH EBP                            ; 004e1a5f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004e1a60
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e1a65
    PUSH ESI                            ; 004e1a68
    MOV EAX,dword ptr [EBP + 0x154]     ; 004e1a69
    PUSH EBP                            ; 004e1a6f
    LEA ESI,[ESP + 0x24]                ; 004e1a70
    LEA EDI,[ESP + 0xc]                 ; 004e1a74
    CALL dword ptr [EAX + 0x1c]         ; 004e1a78
    MOV ECX,0x6                         ; 004e1a7b
    ADD ESP,0x4                         ; 004e1a80
    LEA EAX,[ESP + 0x8]                 ; 004e1a83
    LEA ESI,[ESP + 0x20]                ; 004e1a87
    PUSH EAX                            ; 004e1a8b
    MOVSD.REP ES:EDI,ESI                ; 004e1a8c
    CALL core_box.cpp_FUN_004207b0      ; 004e1a8e
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004e1a93
    MOV dword ptr [ESP + 0x34],EAX      ; 004e1a96
    LEA EAX,[EBP + 0x164]               ; 004e1a9a
    PUSH EAX                            ; 004e1aa0
    MOV EAX,[0x00612560]                ; 004e1aa1 | DAT_00612560
    PUSH EAX                            ; 004e1aa6 | DAT_01bc120c
    XOR ESI,ESI                         ; 004e1aa7
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e1aa9
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA ECX,[EBP + 0x38c]               ; 004e1aae
    ADD ESP,0x8                         ; 004e1ab4
    LEA EDI,[EBP + 0x4b8]               ; 004e1ab7
    MOV EBX,dword ptr [EBP + 0xb34]     ; 004e1abd
    MOV EDX,EDI                         ; 004e1ac3
    TEST EBX,EBX                        ; 004e1ac5
    JLE 0x004e1b00                      ; 004e1ac7
        ;   XREF to: 004e1b00 (CONDITIONAL_JUMP)  ; LAB_004e1b00
    MOV EBX,EDX                         ; 004e1ac9
        ;   Label: LAB_004e1ac9
    MOV EAX,ECX                         ; 004e1acb
    FLD float ptr [EAX]                 ; 004e1acd
    FMUL float ptr [0x00601450]         ; 004e1acf | DAT_00601450
    FISTP dword ptr [EBX]               ; 004e1ad5
    FLD float ptr [EAX + 0x4]           ; 004e1ad7
    FMUL float ptr [0x00601450]         ; 004e1ada | DAT_00601450
    FISTP dword ptr [EBX + 0x4]         ; 004e1ae0
    FLD float ptr [EAX + 0x8]           ; 004e1ae3
    FMUL float ptr [0x00601450]         ; 004e1ae6 | DAT_00601450
    FISTP dword ptr [EBX + 0x8]         ; 004e1aec
    INC ESI                             ; 004e1aef
    ADD ECX,0xc                         ; 004e1af0
    MOV EAX,dword ptr [EBP + 0xb34]     ; 004e1af3
    ADD EDX,0xc                         ; 004e1af9
    CMP ESI,EAX                         ; 004e1afc
    JL 0x004e1ac9                       ; 004e1afe
        ;   XREF to: 004e1ac9 (CONDITIONAL_JUMP)  ; LAB_004e1ac9
    PUSH EDI                            ; 004e1b00
        ;   Label: LAB_004e1b00
    MOV EDX,dword ptr [EBP + 0xb34]     ; 004e1b01
    PUSH EDX                            ; 004e1b07
    MOV ECX,dword ptr [0x00622c18]      ; 004e1b08 | g_CDemonSetPtr
    PUSH ECX                            ; 004e1b0e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140 ; 004e1b0f
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EAX,0xffff                      ; 004e1b14
    MOV EBX,dword ptr [0x01c51cac]      ; 004e1b19 | DAT_01c51cac
    ADD ESP,0xc                         ; 004e1b1f
    MOV EDX,dword ptr [EBP + 0x17c]     ; 004e1b22
    SUB EAX,EBX                         ; 004e1b28
    IMUL EDX                            ; 004e1b2a
    SHRD EAX,EDX,0x10                   ; 004e1b2c
    PUSH EAX                            ; 004e1b30
    MOV ESI,dword ptr [0x00612560]      ; 004e1b31 | DAT_00612560
    PUSH ESI                            ; 004e1b37 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004e1b38
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004e1b3d
    PUSH 0x0                            ; 004e1b40
    PUSH 0x4                            ; 004e1b42
    PUSH EDI                            ; 004e1b44
    LEA EDI,[EBP + 0x6ac]               ; 004e1b45
    PUSH EDI                            ; 004e1b4b
    MOV EAX,dword ptr [EBP + 0xb38]     ; 004e1b4c
    PUSH EAX                            ; 004e1b52
    MOV EDX,dword ptr [EBP + 0xb34]     ; 004e1b53
    PUSH EDX                            ; 004e1b59
    MOV ECX,dword ptr [0x00622c18]      ; 004e1b5a | g_CDemonSetPtr
    PUSH ECX                            ; 004e1b60 | g_CDemonSetInstance
    XOR ESI,ESI                         ; 004e1b61
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00553440 ; 004e1b63
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    MOV EBX,dword ptr [EBP + 0xb38]     ; 004e1b68
    ADD ESP,0x1c                        ; 004e1b6e
    TEST EBX,EBX                        ; 004e1b71
    JLE 0x004e1bc0                      ; 004e1b73
        ;   XREF to: 004e1bc0 (CONDITIONAL_JUMP)  ; LAB_004e1bc0
    MOV EBX,EBP                         ; 004e1b75
    MOV EAX,[0x00612560]                ; 004e1b77 | DAT_00612560
        ;   Label: LAB_004e1b77
    MOV dword ptr [EBX + 0x6b4],0x0     ; 004e1b7c
    PUSH EDI                            ; 004e1b86
    MOV dword ptr [EBX + 0x6b8],0x0     ; 004e1b87
    INC ESI                             ; 004e1b91
    MOV dword ptr [EBX + 0x6bc],0x0     ; 004e1b92
    PUSH EAX                            ; 004e1b9c | DAT_01bc120c
    MOV dword ptr [EBX + 0x6c0],0x0     ; 004e1b9d
    ADD EBX,0x48                        ; 004e1ba7
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120 ; 004e1baa
        ;   XREF to: 00483120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD EDI,0x48                        ; 004e1baf
    MOV EDX,dword ptr [EBP + 0xb38]     ; 004e1bb2
    ADD ESP,0x8                         ; 004e1bb8
    CMP ESI,EDX                         ; 004e1bbb
    JL 0x004e1b77                       ; 004e1bbd
        ;   XREF to: 004e1b77 (CONDITIONAL_JUMP)  ; LAB_004e1b77
    NOP                                 ; 004e1bbf
    PUSH EBP                            ; 004e1bc0
        ;   Label: LAB_004e1bc0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004e1bc1
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e1bc6
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e1bc9
    POP EBX                             ; 004e1bcd
    ADD ESP,0x34                        ; 004e1bce
    POP EBP                             ; 004e1bd1
    POP EDI                             ; 004e1bd2
    POP ESI                             ; 004e1bd3
    RET                                 ; 004e1bd4


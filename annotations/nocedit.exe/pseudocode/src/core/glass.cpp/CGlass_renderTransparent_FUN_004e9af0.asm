; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_glass.cpp_CGlass_renderTransparent_FUN_004e9af0(CGlass * this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   float FLOAT_0065eed0 = 256
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   float g_PerspectiveReciprocal
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
;   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e9af0
        ;   Label: core_glass.cpp_CGlass_renderTransparent_FUN_004e9af0
    PUSH EBP                            ; 004e9af1
    SUB ESP,0x1c                        ; 004e9af2
    MOV EBP,dword ptr [ESP + 0x28]      ; 004e9af5
    CMP dword ptr [EBP + 0x370],0x0     ; 004e9af9
    JNZ 0x004e9b14                      ; 004e9b00 | LAB_004e9b14
        ;   XREF to: 004e9b14 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x17c],0x0     ; 004e9b02
    JZ 0x004e9b14                       ; 004e9b09 | LAB_004e9b14
        ;   XREF to: 004e9b14 (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x180],0x0     ; 004e9b0b
    JZ 0x004e9b1c                       ; 004e9b12 | LAB_004e9b1c
        ;   XREF to: 004e9b1c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004e9b14
        ;   Label: LAB_004e9b14
    ADD ESP,0x1c                        ; 004e9b16
    POP EBP                             ; 004e9b19
    POP ESI                             ; 004e9b1a
    RET                                 ; 004e9b1b
    MOV ESI,dword ptr [0x006703ec]      ; 004e9b1c | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_004e9b1c
    PUSH ESI                            ; 004e9b22 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004e9b23 | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e9b28
    TEST EAX,EAX                        ; 004e9b2b
    JNZ 0x004e9b14                      ; 004e9b2d | LAB_004e9b14
        ;   XREF to: 004e9b14 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004e9b2f
    PUSH EBX                            ; 004e9b30
    PUSH EBP                            ; 004e9b31
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004e9b32 | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e9b37
    LEA EAX,[ESP + 0x8]                 ; 004e9b3a
    PUSH EAX                            ; 004e9b3e
    MOV EDX,dword ptr [EBP + 0x154]     ; 004e9b3f
    PUSH EBP                            ; 004e9b45
    CALL dword ptr [EDX + 0x14]         ; 004e9b46
    ADD ESP,0x8                         ; 004e9b49
    PUSH EAX                            ; 004e9b4c
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004e9b4d | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e9b52
    MOV dword ptr [ESP + 0x20],EAX      ; 004e9b55
    LEA EAX,[EBP + 0x164]               ; 004e9b59
    PUSH EAX                            ; 004e9b5f
    MOV EDI,dword ptr [0x006703ec]      ; 004e9b60 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 004e9b66 | CDemonRenderer g_CDemonRendererInstance
    XOR ESI,ESI                         ; 004e9b67
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004e9b69 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    LEA EDX,[EBP + 0x38c]               ; 004e9b6e
    ADD ESP,0x8                         ; 004e9b74
    LEA EDI,[EBP + 0x4b8]               ; 004e9b77
    MOV EAX,dword ptr [EBP + 0xb34]     ; 004e9b7d
    MOV ECX,EDI                         ; 004e9b83
    TEST EAX,EAX                        ; 004e9b85
    JLE 0x004e9bc0                      ; 004e9b87 | LAB_004e9bc0
        ;   XREF to: 004e9bc0 (CONDITIONAL_JUMP)
    MOV EBX,ECX                         ; 004e9b89
        ;   Label: LAB_004e9b89
    MOV EAX,EDX                         ; 004e9b8b
    FLD float ptr [EAX]                 ; 004e9b8d
    FMUL float ptr [0x0065eed0]         ; 004e9b8f | float FLOAT_0065eed0
    FISTP dword ptr [EBX]               ; 004e9b95
    FLD float ptr [EAX + 0x4]           ; 004e9b97
    FMUL float ptr [0x0065eed0]         ; 004e9b9a | float FLOAT_0065eed0
    FISTP dword ptr [EBX + 0x4]         ; 004e9ba0
    FLD float ptr [EAX + 0x8]           ; 004e9ba3
    FMUL float ptr [0x0065eed0]         ; 004e9ba6 | float FLOAT_0065eed0
    FISTP dword ptr [EBX + 0x8]         ; 004e9bac
    INC ESI                             ; 004e9baf
    ADD EDX,0xc                         ; 004e9bb0
    MOV EBX,dword ptr [EBP + 0xb34]     ; 004e9bb3
    ADD ECX,0xc                         ; 004e9bb9
    CMP ESI,EBX                         ; 004e9bbc
    JL 0x004e9b89                       ; 004e9bbe | LAB_004e9b89
        ;   XREF to: 004e9b89 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004e9bc0
        ;   Label: LAB_004e9bc0
    MOV ESI,dword ptr [EBP + 0xb34]     ; 004e9bc1
    PUSH ESI                            ; 004e9bc7
    MOV EAX,[0x006810c8]                ; 004e9bc8 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EAX                            ; 004e9bcd | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 ; 004e9bce | void core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0(CDemonSet * this_ptr, int vertex_count, int * input_vertices)
        ;   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
    MOV EAX,0xffff                      ; 004e9bd3
    MOV EDX,dword ptr [0x02d051f4]      ; 004e9bd8 | float g_PerspectiveReciprocal
    ADD ESP,0xc                         ; 004e9bde
    SUB EAX,EDX                         ; 004e9be1
    MOV EDX,dword ptr [EBP + 0x17c]     ; 004e9be3
    IMUL EDX                            ; 004e9be9
    SHRD EAX,EDX,0x10                   ; 004e9beb
    PUSH EAX                            ; 004e9bef
    MOV ECX,dword ptr [0x006703ec]      ; 004e9bf0 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 004e9bf6 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004e9bf7 | void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e9bfc
    PUSH 0x0                            ; 004e9bff
    PUSH 0x4                            ; 004e9c01
    PUSH EDI                            ; 004e9c03
    LEA EDI,[EBP + 0x6ac]               ; 004e9c04
    PUSH EDI                            ; 004e9c0a
    MOV EBX,dword ptr [EBP + 0xb38]     ; 004e9c0b
    PUSH EBX                            ; 004e9c11
    MOV ESI,dword ptr [EBP + 0xb34]     ; 004e9c12
    PUSH ESI                            ; 004e9c18
    MOV EAX,[0x006810c8]                ; 004e9c19 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EAX                            ; 004e9c1e | CDemonSet g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 ; 004e9c1f | float core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, SInputFace * tri_data_ptr, ...)
        ;   XREF to: 0056eac0 (UNCONDITIONAL_CALL)
    XOR ESI,ESI                         ; 004e9c24
    MOV EDX,dword ptr [EBP + 0xb38]     ; 004e9c26
    ADD ESP,0x1c                        ; 004e9c2c
    TEST EDX,EDX                        ; 004e9c2f
    JLE 0x004e9c80                      ; 004e9c31 | LAB_004e9c80
        ;   XREF to: 004e9c80 (CONDITIONAL_JUMP)
    MOV EBX,EBP                         ; 004e9c33
    MOV ECX,dword ptr [0x006703ec]      ; 004e9c35 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_004e9c35
    MOV dword ptr [EBX + 0x6b4],0x0     ; 004e9c3b
    PUSH EDI                            ; 004e9c45
    MOV dword ptr [EBX + 0x6b8],0x0     ; 004e9c46
    INC ESI                             ; 004e9c50
    MOV dword ptr [EBX + 0x6bc],0x0     ; 004e9c51
    PUSH ECX                            ; 004e9c5b | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x6c0],0x0     ; 004e9c5c
    ADD EBX,0x48                        ; 004e9c66
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 ; 004e9c69 | void engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)
    ADD EDI,0x48                        ; 004e9c6e
    MOV EAX,dword ptr [EBP + 0xb38]     ; 004e9c71
    ADD ESP,0x8                         ; 004e9c77
    CMP ESI,EAX                         ; 004e9c7a
    JL 0x004e9c35                       ; 004e9c7c | LAB_004e9c35
        ;   XREF to: 004e9c35 (CONDITIONAL_JUMP)
    MOV EAX,EAX                         ; 004e9c7e
    PUSH EBP                            ; 004e9c80
        ;   Label: LAB_004e9c80
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004e9c81 | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e9c86
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e9c89
    POP EBX                             ; 004e9c8d
    POP EDI                             ; 004e9c8e
    ADD ESP,0x1c                        ; 004e9c8f
    POP EBP                             ; 004e9c92
    POP ESI                             ; 004e9c93
    RET                                 ; 004e9c94


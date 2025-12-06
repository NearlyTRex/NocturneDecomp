; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(CGlass * this_ptr)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_glass.cpp_CGlass_renderBackground_FUN_004e9e90 at 004ea01a
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a421
;
; Referenced Globals:
;   float FLOAT_0065eed0 = 256
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004e9ca0
        ;   Label: core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0
    SUB ESP,0x24                        ; 004e9ca1
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e9ca4
    PUSH EDX                            ; 004e9ca8
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004e9ca9 | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e9cae
    MOV EAX,ESP                         ; 004e9cb1
    PUSH EAX                            ; 004e9cb3
    MOV ECX,dword ptr [ESP + 0x30]      ; 004e9cb4
    MOV EDX,dword ptr [ESP + 0x30]      ; 004e9cb8
    PUSH ECX                            ; 004e9cbc
    MOV EDX,dword ptr [EDX + 0x154]     ; 004e9cbd
    CALL dword ptr [EDX + 0x14]         ; 004e9cc3
    ADD ESP,0x8                         ; 004e9cc6
    PUSH EAX                            ; 004e9cc9
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004e9cca | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e9ccf
    TEST EAX,EAX                        ; 004e9cd2
    JZ 0x004e9e65                       ; 004e9cd4 | LAB_004e9e65
        ;   XREF to: 004e9e65 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004e9cda
    PUSH ESI                            ; 004e9cdb
    PUSH EBX                            ; 004e9cdc
    MOV EBX,dword ptr [0x006703ec]      ; 004e9cdd | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 004e9ce3 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004e9ce4 | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e9ce9
    MOV EBX,dword ptr [ESP + 0x38]      ; 004e9cec
    ADD EBX,0x374                       ; 004e9cf0
    TEST EAX,EAX                        ; 004e9cf6
    JZ 0x004e9e77                       ; 004e9cf8 | LAB_004e9e77
        ;   XREF to: 004e9e77 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004e9cfe
    MOV EDI,dword ptr [0x006703ec]      ; 004e9d00 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 004e9d06 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0 ; 004e9d07 | void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer * this_ptr, int value)
        ;   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e9d0c
    PUSH EBX                            ; 004e9d0f
    MOV EBP,dword ptr [0x006703ec]      ; 004e9d10 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBP                            ; 004e9d16 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004e9d17 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e9d1c
    PUSH 0x1                            ; 004e9d1f
    MOV EAX,[0x006703ec]                ; 004e9d21 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 004e9d26 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0 ; 004e9d27 | void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer * this_ptr, int value)
        ;   XREF to: 0048cac0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e9d2c
        ;   Label: LAB_004e9d2c
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e9d2f
    MOV EDX,dword ptr [EAX + 0xb34]     ; 004e9d33
    XOR EBP,EBP                         ; 004e9d39
    TEST EDX,EDX                        ; 004e9d3b
    JLE 0x004e9dd0                      ; 004e9d3d | LAB_004e9dd0
        ;   XREF to: 004e9dd0 (CONDITIONAL_JUMP)
    LEA EDI,[EAX + 0x38c]               ; 004e9d43
    XOR ESI,ESI                         ; 004e9d49
    LEA EBX,[ESP + 0x24]                ; 004e9d4b
        ;   Label: LAB_004e9d4b
    MOV EAX,EDI                         ; 004e9d4f
    MOV EDX,dword ptr [0x006703ec]      ; 004e9d51 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 004e9d57
    FMUL float ptr [0x0065eed0]         ; 004e9d59 | float FLOAT_0065eed0
    FISTP dword ptr [EBX]               ; 004e9d5f
    FLD float ptr [EAX + 0x4]           ; 004e9d61
    FMUL float ptr [0x0065eed0]         ; 004e9d64 | float FLOAT_0065eed0
    FISTP dword ptr [EBX + 0x4]         ; 004e9d6a
    FLD float ptr [EAX + 0x8]           ; 004e9d6d
    FMUL float ptr [0x0065eed0]         ; 004e9d70 | float FLOAT_0065eed0
    FISTP dword ptr [EBX + 0x8]         ; 004e9d76
    LEA EAX,[ESP + 0x24]                ; 004e9d79
    PUSH EAX                            ; 004e9d7d
    MOV EAX,dword ptr [EDX]             ; 004e9d7e | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,ESI                         ; 004e9d80
    PUSH EAX                            ; 004e9d82
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004e9d83 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    MOV EAX,[0x006703ec]                ; 004e9d88 | CDemonRenderer * g_CDemonRendererPtr
    MOV EDX,dword ptr [EAX]             ; 004e9d8d | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 004e9d8f
    MOV EBX,dword ptr [EAX]             ; 004e9d97 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESI + EBX*0x1 + 0x24],0xffff ; 004e9d99
    MOV EAX,dword ptr [EAX]             ; 004e9da1 | CDemonRenderer g_CDemonRendererInstance
    ADD ESP,0x8                         ; 004e9da3
    MOV dword ptr [ESI + EAX*0x1 + 0x28],0xffff ; 004e9da6
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e9dae
    INC EBP                             ; 004e9db2
    ADD EDI,0xc                         ; 004e9db3
    MOV EBX,dword ptr [EAX + 0xb34]     ; 004e9db6
    ADD ESI,0x30                        ; 004e9dbc
    CMP EBP,EBX                         ; 004e9dbf
    JL 0x004e9d4b                       ; 004e9dc1 | LAB_004e9d4b
        ;   XREF to: 004e9d4b (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004e9dc3
    LEA EDX,[EDX]                       ; 004e9dc9
    NOP                                 ; 004e9dcf
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e9dd0
        ;   Label: LAB_004e9dd0
    MOV ESI,dword ptr [EAX + 0x17c]     ; 004e9dd4
    PUSH ESI                            ; 004e9dda
    MOV EDI,dword ptr [0x006703ec]      ; 004e9ddb | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 004e9de1 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004e9de2 | void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e9de7
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e9dea
    MOV EBP,dword ptr [EAX + 0xb38]     ; 004e9dee
    XOR EBX,EBX                         ; 004e9df4
    TEST EBP,EBP                        ; 004e9df6
    JLE 0x004e9e50                      ; 004e9df8 | LAB_004e9e50
        ;   XREF to: 004e9e50 (CONDITIONAL_JUMP)
    LEA EDI,[EAX + 0x6ac]               ; 004e9dfa
    MOV ESI,EAX                         ; 004e9e00
    MOV dword ptr [ESI + 0x6b4],0x0     ; 004e9e02
        ;   Label: LAB_004e9e02
    PUSH EDI                            ; 004e9e0c
    MOV dword ptr [ESI + 0x6b8],0x0     ; 004e9e0d
    MOV EAX,[0x006703ec]                ; 004e9e17 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    MOV dword ptr [ESI + 0x6bc],0x0     ; 004e9e1c
    PUSH EAX                            ; 004e9e26 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESI + 0x6c0],0x0     ; 004e9e27
    CALL engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550 ; 004e9e31 | void engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 0048b550 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e9e36
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e9e39
    ADD ESI,0x48                        ; 004e9e3d
    INC EBX                             ; 004e9e40
    MOV EDX,dword ptr [EAX + 0xb38]     ; 004e9e41
    ADD EDI,0x48                        ; 004e9e47
    CMP EBX,EDX                         ; 004e9e4a
    JL 0x004e9e02                       ; 004e9e4c | LAB_004e9e02
        ;   XREF to: 004e9e02 (CONDITIONAL_JUMP)
    MOV EAX,EAX                         ; 004e9e4e
    MOV ECX,dword ptr [ESP + 0x38]      ; 004e9e50
        ;   Label: LAB_004e9e50
    PUSH ECX                            ; 004e9e54
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004e9e55 | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e9e5a
    POP EBX                             ; 004e9e5d
    POP ESI                             ; 004e9e5e
    POP EDI                             ; 004e9e5f
    ADD ESP,0x24                        ; 004e9e60
    POP EBP                             ; 004e9e63
    RET                                 ; 004e9e64
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004e9e65
        ;   Label: LAB_004e9e65
    PUSH ECX                            ; 004e9e69
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004e9e6a | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e9e6f
    ADD ESP,0x24                        ; 004e9e72
    POP EBP                             ; 004e9e75
    RET                                 ; 004e9e76
    PUSH EBX                            ; 004e9e77
        ;   Label: LAB_004e9e77
    MOV ESI,dword ptr [0x006703ec]      ; 004e9e78 | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 004e9e7e | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004e9e7f | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    JMP 0x004e9d2c                      ; 004e9e84 | LAB_004e9d2c
        ;   XREF to: 004e9d2c (UNCONDITIONAL_JUMP)


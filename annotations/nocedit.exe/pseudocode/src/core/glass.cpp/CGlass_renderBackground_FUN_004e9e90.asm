; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_glass.cpp_CGlass_renderBackground_FUN_004e9e90(CGlass * this_ptr, int layer_flag)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Referenced Globals:
;   float FLOAT_0065eed0 = 256
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0
;   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004e9e90
        ;   Label: core_glass.cpp_CGlass_renderBackground_FUN_004e9e90
    PUSH EBP                            ; 004e9e91
    SUB ESP,0x18                        ; 004e9e92
    MOV EBP,dword ptr [ESP + 0x24]      ; 004e9e95
    MOV EAX,dword ptr [ESP + 0x28]      ; 004e9e99
    CMP dword ptr [EBP + 0x370],0x0     ; 004e9e9d
    JZ 0x004ea003                       ; 004e9ea4 | LAB_004ea003
        ;   XREF to: 004ea003 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 004e9eaa
    JNZ 0x004e9ebb                      ; 004e9eac | LAB_004e9ebb
        ;   XREF to: 004e9ebb (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0xb3c],0x0     ; 004e9eae
    JZ 0x004e9feb                       ; 004e9eb5 | LAB_004e9feb
        ;   XREF to: 004e9feb (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004e9ebb
        ;   Label: LAB_004e9ebb
    MOV dword ptr [EBP + 0xb3c],0x0     ; 004e9ebc
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004e9ec6 | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e9ecb
    MOV EAX,ESP                         ; 004e9ece
    PUSH EAX                            ; 004e9ed0
    MOV EDX,dword ptr [EBP + 0x154]     ; 004e9ed1
    PUSH EBP                            ; 004e9ed7
    CALL dword ptr [EDX + 0x14]         ; 004e9ed8
    ADD ESP,0x8                         ; 004e9edb
    PUSH EAX                            ; 004e9ede
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004e9edf | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [EBP + 0x180]     ; 004e9ee4
    ADD ESP,0x4                         ; 004e9eea
    TEST EDI,EDI                        ; 004e9eed
    JZ 0x004e9ff1                       ; 004e9eef | LAB_004e9ff1
        ;   XREF to: 004e9ff1 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + 0x374]               ; 004e9ef5
    PUSH EAX                            ; 004e9efb
    MOV EDX,dword ptr [0x006703ec]      ; 004e9efc | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 004e9f02 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004e9f03 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004e9f03
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e9f08
    PUSH ESI                            ; 004e9f0b
    PUSH EBX                            ; 004e9f0c
    LEA ECX,[EBP + 0x38c]               ; 004e9f0d
    MOV EBX,dword ptr [EBP + 0xb34]     ; 004e9f13
    LEA EDI,[EBP + 0x4b8]               ; 004e9f19
    XOR ESI,ESI                         ; 004e9f1f
    MOV EDX,EDI                         ; 004e9f21
    TEST EBX,EBX                        ; 004e9f23
    JLE 0x004e9f60                      ; 004e9f25 | LAB_004e9f60
        ;   XREF to: 004e9f60 (CONDITIONAL_JUMP)
    MOV EBX,EDX                         ; 004e9f27
        ;   Label: LAB_004e9f27
    MOV EAX,ECX                         ; 004e9f29
    FLD float ptr [EAX]                 ; 004e9f2b
    FMUL float ptr [0x0065eed0]         ; 004e9f2d | float FLOAT_0065eed0
    FISTP dword ptr [EBX]               ; 004e9f33
    FLD float ptr [EAX + 0x4]           ; 004e9f35
    FMUL float ptr [0x0065eed0]         ; 004e9f38 | float FLOAT_0065eed0
    FISTP dword ptr [EBX + 0x4]         ; 004e9f3e
    FLD float ptr [EAX + 0x8]           ; 004e9f41
    FMUL float ptr [0x0065eed0]         ; 004e9f44 | float FLOAT_0065eed0
    FISTP dword ptr [EBX + 0x8]         ; 004e9f4a
    INC ESI                             ; 004e9f4d
    ADD ECX,0xc                         ; 004e9f4e
    MOV EAX,dword ptr [EBP + 0xb34]     ; 004e9f51
    ADD EDX,0xc                         ; 004e9f57
    CMP ESI,EAX                         ; 004e9f5a
    JL 0x004e9f27                       ; 004e9f5c | LAB_004e9f27
        ;   XREF to: 004e9f27 (CONDITIONAL_JUMP)
    MOV EAX,EAX                         ; 004e9f5e
    PUSH EDI                            ; 004e9f60
        ;   Label: LAB_004e9f60
    MOV EDX,dword ptr [EBP + 0xb34]     ; 004e9f61
    PUSH EDX                            ; 004e9f67
    MOV ECX,dword ptr [0x006810c8]      ; 004e9f68 | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH ECX                            ; 004e9f6e | CDemonSet g_CDemonSetInstance
    XOR EDI,EDI                         ; 004e9f6f
    CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 ; 004e9f71 | void core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0(CDemonSet * this_ptr, int vertex_count, int * input_vertices)
        ;   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [EBP + 0xb38]     ; 004e9f76
    ADD ESP,0xc                         ; 004e9f7c
    TEST EBX,EBX                        ; 004e9f7f
    JLE 0x004e9fe0                      ; 004e9f81 | LAB_004e9fe0
        ;   XREF to: 004e9fe0 (CONDITIONAL_JUMP)
    LEA ESI,[EBP + 0x6ac]               ; 004e9f83
    MOV EBX,EBP                         ; 004e9f89
    PUSH 0xc1                           ; 004e9f8b
        ;   Label: LAB_004e9f8b
    MOV dword ptr [EBX + 0x6b4],0x0     ; 004e9f90
    MOV EAX,[0x006703ec]                ; 004e9f9a | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    MOV dword ptr [EBX + 0x6b8],0x0     ; 004e9f9f
    PUSH ESI                            ; 004e9fa9
    INC EDI                             ; 004e9faa
    MOV dword ptr [EBX + 0x6bc],0x0     ; 004e9fab
    PUSH EAX                            ; 004e9fb5 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x6c0],0x0     ; 004e9fb6
    ADD EBX,0x48                        ; 004e9fc0
    CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 ; 004e9fc3 | void engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
        ;   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)
    ADD ESI,0x48                        ; 004e9fc8
    MOV EDX,dword ptr [EBP + 0xb38]     ; 004e9fcb
    ADD ESP,0xc                         ; 004e9fd1
    CMP EDI,EDX                         ; 004e9fd4
    JL 0x004e9f8b                       ; 004e9fd6 | LAB_004e9f8b
        ;   XREF to: 004e9f8b (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004e9fd8
    MOV EDX,EDX                         ; 004e9fde
    PUSH EBP                            ; 004e9fe0
        ;   Label: LAB_004e9fe0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004e9fe1 | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e9fe6
    POP EBX                             ; 004e9fe9
    POP ESI                             ; 004e9fea
    ADD ESP,0x18                        ; 004e9feb
        ;   Label: LAB_004e9feb
    POP EBP                             ; 004e9fee
    POP EDI                             ; 004e9fef
    RET                                 ; 004e9ff0
    LEA EAX,[EBP + 0x164]               ; 004e9ff1
        ;   Label: LAB_004e9ff1
    PUSH EAX                            ; 004e9ff7
    MOV EAX,[0x006703ec]                ; 004e9ff8 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 004e9ffd | CDemonRenderer g_CDemonRendererInstance
    JMP 0x004e9f03                      ; 004e9ffe | LAB_004e9f03
        ;   XREF to: 004e9f03 (UNCONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 004ea003
        ;   Label: LAB_004ea003
    JZ 0x004e9feb                       ; 004ea005 | LAB_004e9feb
        ;   XREF to: 004e9feb (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x180],0x0     ; 004ea007
    JZ 0x004e9feb                       ; 004ea00e | LAB_004e9feb
        ;   XREF to: 004e9feb (CONDITIONAL_JUMP)
    CMP dword ptr [EBP + 0x1e8],0x0     ; 004ea010
    JZ 0x004e9feb                       ; 004ea017 | LAB_004e9feb
        ;   XREF to: 004e9feb (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004ea019
    CALL core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0 ; 004ea01a | void core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(CGlass * this_ptr)
        ;   XREF to: 004e9ca0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004ea01f
    ADD ESP,0x18                        ; 004ea022
    POP EBP                             ; 004ea025
    POP EDI                             ; 004ea026
    RET                                 ; 004ea027


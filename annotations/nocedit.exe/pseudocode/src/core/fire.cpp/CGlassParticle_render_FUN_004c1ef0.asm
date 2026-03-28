; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGlassParticle_render_FUN_004c1ef0(CGlassParticle *this_ptr)
;
; Parameters:
; CGlassParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; SMRGLHeaderPrimitive Stack[-0x68]:24  SStack_68
; CVector3i        Stack[-0x40]:12  local_40
; CVector3i        Stack[-0x34]:12  local_34
; CVector3i        Stack[-0x28]:12  local_28
; CVector3i        Stack[-0x1c]:12  local_1c
;
; Referenced Globals:
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[1].u
;   undefined4 g_RenderVertexBuffer[1].v
;   undefined4 g_RenderVertexBuffer[2].u
;   undefined4 g_RenderVertexBuffer[2].v
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1ef0
        ;   Label: core_fire.cpp_CGlassParticle_render_FUN_004c1ef0
    PUSH ESI                            ; 004c1ef1
    PUSH EDI                            ; 004c1ef2
    PUSH EBP                            ; 004c1ef3
    SUB ESP,0x58                        ; 004c1ef4
    MOV ESI,dword ptr [ESP + 0x6c]      ; 004c1ef7
    PUSH ESI                            ; 004c1efb
    MOV EDX,dword ptr [0x006703ec]      ; 004c1efc | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c1f02 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c1f03
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c1f08
    PUSH 0x0                            ; 004c1f0b
    LEA EAX,[ESI + 0x54]                ; 004c1f0d
    PUSH EAX                            ; 004c1f10
    MOV ECX,dword ptr [0x006703ec]      ; 004c1f11 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c1f17 | g_CDemonRendererInstance
    LEA EBX,[ESP + 0x4c]                ; 004c1f18
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c1f1c
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c1f21
    LEA EAX,[ESI + 0x78]                ; 004c1f24
    MOV EDX,dword ptr [0x006703ec]      ; 004c1f27 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c1f2d
    FMUL float ptr [0x0065dca8]         ; 004c1f2f | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c1f35
    FLD float ptr [EAX + 0x4]           ; 004c1f37
    FMUL float ptr [0x0065dca8]         ; 004c1f3a | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c1f40
    FLD float ptr [EAX + 0x8]           ; 004c1f43
    FMUL float ptr [0x0065dca8]         ; 004c1f46 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c1f4c
    LEA EAX,[ESP + 0x40]                ; 004c1f4f
    PUSH EAX                            ; 004c1f53
    MOV EAX,dword ptr [EDX]             ; 004c1f54 | g_CDemonRendererInstance
    PUSH EAX                            ; 004c1f56
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c1f57
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x54]                ; 004c1f5c
    ADD ESP,0x8                         ; 004c1f60
    LEA EAX,[ESI + 0x84]                ; 004c1f63
    MOV EDX,dword ptr [0x006703ec]      ; 004c1f69 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c1f6f
    FMUL float ptr [0x0065dca8]         ; 004c1f71 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c1f77
    FLD float ptr [EAX + 0x4]           ; 004c1f79
    FMUL float ptr [0x0065dca8]         ; 004c1f7c | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c1f82
    FLD float ptr [EAX + 0x8]           ; 004c1f85
    FMUL float ptr [0x0065dca8]         ; 004c1f88 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c1f8e
    LEA EAX,[ESP + 0x4c]                ; 004c1f91
    PUSH EAX                            ; 004c1f95
    MOV EAX,dword ptr [EDX]             ; 004c1f96 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c1f98
    PUSH EAX                            ; 004c1f9b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c1f9c
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x3c]                ; 004c1fa1
    ADD ESP,0x8                         ; 004c1fa5
    LEA EAX,[ESI + 0x90]                ; 004c1fa8
    MOV EDX,dword ptr [0x006703ec]      ; 004c1fae | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c1fb4
    FMUL float ptr [0x0065dca8]         ; 004c1fb6 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c1fbc
    FLD float ptr [EAX + 0x4]           ; 004c1fbe
    FMUL float ptr [0x0065dca8]         ; 004c1fc1 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c1fc7
    FLD float ptr [EAX + 0x8]           ; 004c1fca
    FMUL float ptr [0x0065dca8]         ; 004c1fcd | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c1fd3
    LEA EAX,[ESP + 0x34]                ; 004c1fd6
    PUSH EAX                            ; 004c1fda
    MOV EAX,dword ptr [EDX]             ; 004c1fdb | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004c1fdd
    PUSH EAX                            ; 004c1fe0
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c1fe1
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c1fe6
    LEA EAX,[ESI + 0x3c]                ; 004c1fe9
    PUSH EAX                            ; 004c1fec
    MOV EBX,dword ptr [0x006703ec]      ; 004c1fed | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c1ff3 | g_CDemonRendererInstance
    MOV EDI,0x3                         ; 004c1ff4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c1ff9
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c1ffe
    XOR EBP,EBP                         ; 004c2001
    MOV dword ptr [ESP + 0x4],EDI       ; 004c2003
    MOV dword ptr [ESP + 0x14],EBP      ; 004c2007
    MOV dword ptr [ESP + 0x10],EBP      ; 004c200b
    MOV dword ptr [ESP + 0xc],EBP       ; 004c200f
    MOV dword ptr [ESP + 0x8],EBP       ; 004c2013
    MOV dword ptr [ESP + 0x18],EBP      ; 004c2017
    MOV EDI,0x1                         ; 004c201b
    MOV EBP,0x2                         ; 004c2020
    MOV dword ptr [ESP + 0x1c],EDI      ; 004c2025
    MOV dword ptr [ESP + 0x20],EBP      ; 004c2029
    MOV EAX,dword ptr [ESI + 0x38]      ; 004c202d
    PUSH EAX                            ; 004c2030
    MOV EDX,dword ptr [0x006703ec]      ; 004c2031 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c2037 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 004c2038
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004c203d
    LEA EBX,[ESP + 0x28]                ; 004c2040
    MOV EAX,ESI                         ; 004c2044
    FLD float ptr [EAX]                 ; 004c2046
    FMUL float ptr [0x0065dca8]         ; 004c2048 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c204e
    FLD float ptr [EAX + 0x4]           ; 004c2050
    FMUL float ptr [0x0065dca8]         ; 004c2053 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c2059
    FLD float ptr [EAX + 0x8]           ; 004c205c
    FMUL float ptr [0x0065dca8]         ; 004c205f | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c2065
    PUSH 0x3                            ; 004c2068
    PUSH 0x0                            ; 004c206a
    PUSH 0x0                            ; 004c206c
    LEA EAX,[ESP + 0x34]                ; 004c206e
    PUSH EAX                            ; 004c2072
    MOV ECX,dword ptr [0x006810c8]      ; 004c2073 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 004c2079 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 ; 004c207a
        ;   XREF to: 0056e110 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    MOV EAX,dword ptr [ESI + 0x60]      ; 004c207f
    MOV [0x0068802c],EAX                ; 004c2082 | g_RenderVertexBuffer[0].u
    MOV EAX,dword ptr [ESI + 0x6c]      ; 004c2087
    MOV [0x00688030],EAX                ; 004c208a | g_RenderVertexBuffer[0].v
    MOV EAX,dword ptr [ESI + 0x64]      ; 004c208f
    MOV EBX,dword ptr [0x006703ec]      ; 004c2092 | g_CDemonRendererPtr2
    MOV [0x0068805c],EAX                ; 004c2098 | g_RenderVertexBuffer[1].u
    MOV EAX,dword ptr [ESI + 0x70]      ; 004c209d
    ADD ESP,0x14                        ; 004c20a0
    MOV [0x00688060],EAX                ; 004c20a3 | g_RenderVertexBuffer[1].v
    MOV EAX,dword ptr [ESI + 0x68]      ; 004c20a8
    PUSH 0x0                            ; 004c20ab
    MOV [0x0068808c],EAX                ; 004c20ad | g_RenderVertexBuffer[2].u
    MOV EAX,dword ptr [ESI + 0x74]      ; 004c20b2
    PUSH EBX                            ; 004c20b5 | g_CDemonRendererInstance
    MOV [0x00688090],EAX                ; 004c20b6 | g_RenderVertexBuffer[2].v
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c20bb
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c20c0
    MOV EAX,ESP                         ; 004c20c3
    PUSH EAX                            ; 004c20c5
    MOV ESI,dword ptr [0x006703ec]      ; 004c20c6 | g_CDemonRendererPtr2
    PUSH ESI                            ; 004c20cc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 004c20cd
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c20d2
    MOV EDI,dword ptr [0x006703ec]      ; 004c20d5 | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c20db | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c20dc
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)


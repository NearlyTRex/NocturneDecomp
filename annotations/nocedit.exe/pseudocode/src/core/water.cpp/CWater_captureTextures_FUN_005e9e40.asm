; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_water_cpp_CWater_captureTextures_FUN_005e9e40(CWater *this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_loadAssets_FUN_0056fb80 at 0056fb8c
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic[16] g_WaterTextures
;   undefined4 g_WaterTextures[1].base.type
;   SMRGLPrimitiveQuad g_WaterRenderQuad
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e9e40
        ;   Label: core_water.cpp_CWater_captureTextures_FUN_005e9e40
    PUSH ESI                            ; 005e9e41
    MOV EBX,0x6844f8                    ; 005e9e42 | g_WaterTextures
    LEA ESI,[EBX + 0x180]               ; 005e9e47 | g_WaterRenderQuad
    PUSH EBX                            ; 005e9e4d | g_WaterTextures | g_WaterTextures[1].base.type
        ;   Label: LAB_005e9e4d
    MOV EDX,dword ptr [0x006703ec]      ; 005e9e4e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 005e9e54 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005e9e55
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 005e9e5a | g_WaterTextures[1].base.type
    ADD ESP,0x8                         ; 005e9e5d
    CMP EBX,ESI                         ; 005e9e60
    JNZ 0x005e9e4d                      ; 005e9e62
        ;   XREF to: 005e9e4d (CONDITIONAL_JUMP)  ; LAB_005e9e4d
    POP ESI                             ; 005e9e64
    POP EBX                             ; 005e9e65
    RET                                 ; 005e9e66


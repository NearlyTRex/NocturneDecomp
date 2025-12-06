; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_water.cpp_CWater_captureTextures_FUN_005e9e40(CWater * this_ptr)
;
; Parameters:
; CWater *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_0056fb80 at 0056fb8c
;
; Referenced Globals:
;   SMRGLTextureBasic[16] g_WaterTextures
;   undefined4 DAT_00684510
;   SMRGLTextureBasic* g_WaterTexturesEnd = 00000000
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
    MOV EBX,0x6844f8                    ; 005e9e42 | SMRGLTextureBasic[16] g_WaterTextures
    LEA ESI,[EBX + 0x180]               ; 005e9e47 | SMRGLTextureBasic * g_WaterTexturesEnd
    PUSH EBX                            ; 005e9e4d | SMRGLTextureBasic[16] g_WaterTextures
        ;   Label: LAB_005e9e4d
    MOV EDX,dword ptr [0x006703ec]      ; 005e9e4e | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 005e9e54 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005e9e55 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD EBX,0x18                        ; 005e9e5a | DAT_00684510
    ADD ESP,0x8                         ; 005e9e5d
    CMP EBX,ESI                         ; 005e9e60
    JNZ 0x005e9e4d                      ; 005e9e62 | LAB_005e9e4d
        ;   XREF to: 005e9e4d (CONDITIONAL_JUMP)
    POP ESI                             ; 005e9e64
    POP EBX                             ; 005e9e65
    RET                                 ; 005e9e66


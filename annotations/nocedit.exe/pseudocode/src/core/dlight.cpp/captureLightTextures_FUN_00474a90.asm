; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_captureLightTextures_FUN_00474a90(void)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_loadAssets_FUN_0056fb80 at 0056fb80
;
; Referenced Globals:
;   undefined4 g_LightTextures[1].base.type
;   undefined4 g_LightTextures[2].base.type
;   undefined4 g_LightTextures[4].base.type
;   SMRGLTextureBasic* g_LightTexturesEnd = 00000000
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474a90
        ;   Label: core_dlight.cpp_captureLightTextures_FUN_00474a90
    PUSH ESI                            ; 00474a91
    PUSH 0x66fef0                       ; 00474a92 | g_LightTextures[1].base.type
    MOV EDX,dword ptr [0x006703ec]      ; 00474a97 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 00474a9d | g_CDemonRendererInstance
    MOV EBX,0x66ff08                    ; 00474a9e | g_LightTextures[2].base.type
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00474aa3
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA ESI,[EBX + 0x1b0]               ; 00474aa8 | g_LightTexturesEnd
    ADD ESP,0x8                         ; 00474aae
    PUSH EBX                            ; 00474ab1 | g_LightTextures[2].base.type | g_LightTextures[4].base.type
        ;   Label: LAB_00474ab1
    MOV ECX,dword ptr [0x006703ec]      ; 00474ab2 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00474ab8 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00474ab9
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x30                        ; 00474abe | g_LightTextures[4].base.type
    ADD ESP,0x8                         ; 00474ac1
    CMP EBX,ESI                         ; 00474ac4
    JNZ 0x00474ab1                      ; 00474ac6
        ;   XREF to: 00474ab1 (CONDITIONAL_JUMP)  ; LAB_00474ab1
    POP ESI                             ; 00474ac8
    POP EBX                             ; 00474ac9
    RET                                 ; 00474aca


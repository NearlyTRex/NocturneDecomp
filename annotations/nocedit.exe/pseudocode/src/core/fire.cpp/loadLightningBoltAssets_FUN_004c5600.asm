; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_loadLightningBoltAssets_FUN_004c5600(void)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0 at 004c7b0b
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic[6] g_FireEffectLightningBoltTextures
;   undefined4 DAT_0067ae0c
;   SMRGLTextureBasic g_FireEffectPopcornTexture
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5600
        ;   Label: core_fire.cpp_loadLightningBoltAssets_FUN_004c5600
    PUSH ESI                            ; 004c5601
    MOV EBX,0x67adf4                    ; 004c5602 | g_FireEffectLightningBoltTextures
    LEA ESI,[EBX + 0x90]                ; 004c5607 | g_FireEffectPopcornTexture
    PUSH EBX                            ; 004c560d | g_FireEffectLightningBoltTextures | DAT_0067ae0c
        ;   Label: LAB_004c560d
    MOV EDX,dword ptr [0x006703ec]      ; 004c560e | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c5614 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c5615
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x18                        ; 004c561a | DAT_0067ae0c
    ADD ESP,0x8                         ; 004c561d
    CMP EBX,ESI                         ; 004c5620
    JNZ 0x004c560d                      ; 004c5622
        ;   XREF to: 004c560d (CONDITIONAL_JUMP)  ; LAB_004c560d
    POP ESI                             ; 004c5624
    POP EBX                             ; 004c5625
    RET                                 ; 004c5626


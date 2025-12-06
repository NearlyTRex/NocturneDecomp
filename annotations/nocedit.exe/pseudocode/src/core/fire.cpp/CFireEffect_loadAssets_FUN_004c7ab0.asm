; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0(CFireEffect * this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_FUN_004e07a0 at 004e07b7
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   SMRGLTextureBasic g_FireEffectBlackHoleTexture
;   SMRGLTextureBasic g_FireEffectSparkTexture
;   SMRGLTextureBasic g_FireEffectBlueSparkTexture
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_fire.cpp_loadDebrisAssets_FUN_004c38d0
;   core_fire.cpp_loadDynamiteAssets_FUN_004c41d0
;   core_fire.cpp_loadFireBallAssets_FUN_004c0ad0
;   core_fire.cpp_loadGunFlameTextures_FUN_004c4d50
;   core_fire.cpp_loadGunFlashAssets_FUN_004c1be0
;   core_fire.cpp_loadLightningBoltAssets_FUN_004c5600
;   core_fire.cpp_loadRockAssets_FUN_004c17e0
;   core_fire.cpp_loadStakeAssets_FUN_004bfe00
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7ab0
        ;   Label: core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0
    PUSH 0x67a794                       ; 004c7ab1 | SMRGLTextureBasic g_FireEffectBlackHoleTexture
    MOV EDX,dword ptr [0x006703ec]      ; 004c7ab6 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 004c7abc | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c7abd | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c7ac2
    PUSH 0x67a7ac                       ; 004c7ac5 | SMRGLTextureBasic g_FireEffectSparkTexture
    MOV ECX,dword ptr [0x006703ec]      ; 004c7aca | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 004c7ad0 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c7ad1 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c7ad6
    PUSH 0x67a7c4                       ; 004c7ad9 | SMRGLTextureBasic g_FireEffectBlueSparkTexture
    MOV EBX,dword ptr [0x006703ec]      ; 004c7ade | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 004c7ae4 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c7ae5 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004c7aea
    CALL core_fire.cpp_loadStakeAssets_FUN_004bfe00 ; 004c7aed | void core_fire.cpp_loadStakeAssets_FUN_004bfe00()
        ;   XREF to: 004bfe00 (UNCONDITIONAL_CALL)
    CALL core_fire.cpp_loadFireBallAssets_FUN_004c0ad0 ; 004c7af2 | void core_fire.cpp_loadFireBallAssets_FUN_004c0ad0()
        ;   XREF to: 004c0ad0 (UNCONDITIONAL_CALL)
    CALL core_fire.cpp_loadRockAssets_FUN_004c17e0 ; 004c7af7 | void core_fire.cpp_loadRockAssets_FUN_004c17e0()
        ;   XREF to: 004c17e0 (UNCONDITIONAL_CALL)
    CALL core_fire.cpp_loadDynamiteAssets_FUN_004c41d0 ; 004c7afc | undefined core_fire.cpp_loadDynamiteAssets_FUN_004c41d0()
        ;   XREF to: 004c41d0 (UNCONDITIONAL_CALL)
    CALL core_fire.cpp_loadGunFlameTextures_FUN_004c4d50 ; 004c7b01 | void core_fire.cpp_loadGunFlameTextures_FUN_004c4d50()
        ;   XREF to: 004c4d50 (UNCONDITIONAL_CALL)
    CALL core_fire.cpp_loadGunFlashAssets_FUN_004c1be0 ; 004c7b06 | void core_fire.cpp_loadGunFlashAssets_FUN_004c1be0()
        ;   XREF to: 004c1be0 (UNCONDITIONAL_CALL)
    CALL core_fire.cpp_loadLightningBoltAssets_FUN_004c5600 ; 004c7b0b | void core_fire.cpp_loadLightningBoltAssets_FUN_004c5600()
        ;   XREF to: 004c5600 (UNCONDITIONAL_CALL)
    CALL core_fire.cpp_loadDebrisAssets_FUN_004c38d0 ; 004c7b10 | void core_fire.cpp_loadDebrisAssets_FUN_004c38d0()
        ;   XREF to: 004c38d0 (UNCONDITIONAL_CALL)
    POP EBX                             ; 004c7b15
    RET                                 ; 004c7b16


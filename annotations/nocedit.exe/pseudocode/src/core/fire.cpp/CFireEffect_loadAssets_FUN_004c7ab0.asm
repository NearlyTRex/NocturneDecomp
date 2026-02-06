; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_004c7ab0(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_loadAssets_FUN_004e07a0 at 004e07b7
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
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
    PUSH 0x67a794                       ; 004c7ab1 | g_FireEffectBlackHoleTexture
    MOV EDX,dword ptr [0x006703ec]      ; 004c7ab6 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c7abc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c7abd
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c7ac2
    PUSH 0x67a7ac                       ; 004c7ac5 | g_FireEffectSparkTexture
    MOV ECX,dword ptr [0x006703ec]      ; 004c7aca | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c7ad0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c7ad1
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c7ad6
    PUSH 0x67a7c4                       ; 004c7ad9 | g_FireEffectBlueSparkTexture
    MOV EBX,dword ptr [0x006703ec]      ; 004c7ade | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c7ae4 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c7ae5
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c7aea
    CALL core_fire.cpp_loadStakeAssets_FUN_004bfe00 ; 004c7aed
        ;   XREF to: 004bfe00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadStakeAssets_FUN_004bfe00()
    CALL core_fire.cpp_loadFireBallAssets_FUN_004c0ad0 ; 004c7af2
        ;   XREF to: 004c0ad0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadFireBallAssets_FUN_004c0ad0()
    CALL core_fire.cpp_loadRockAssets_FUN_004c17e0 ; 004c7af7
        ;   XREF to: 004c17e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadRockAssets_FUN_004c17e0()
    CALL core_fire.cpp_loadDynamiteAssets_FUN_004c41d0 ; 004c7afc
        ;   XREF to: 004c41d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadDynamiteAssets_FUN_004c41d0()
    CALL core_fire.cpp_loadGunFlameTextures_FUN_004c4d50 ; 004c7b01
        ;   XREF to: 004c4d50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadGunFlameTextures_FUN_004c4d50()
    CALL core_fire.cpp_loadGunFlashAssets_FUN_004c1be0 ; 004c7b06
        ;   XREF to: 004c1be0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadGunFlashAssets_FUN_004c1be0()
    CALL core_fire.cpp_loadLightningBoltAssets_FUN_004c5600 ; 004c7b0b
        ;   XREF to: 004c5600 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadLightningBoltAssets_FUN_004c5600()
    CALL core_fire.cpp_loadDebrisAssets_FUN_004c38d0 ; 004c7b10
        ;   XREF to: 004c38d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadDebrisAssets_FUN_004c38d0()
    POP EBX                             ; 004c7b15
    RET                                 ; 004c7b16


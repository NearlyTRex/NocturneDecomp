; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20(void)
;
;
; XREF[3]:
;   wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0 at 005b66f3
;   wincore_windll.cpp_kill_FUN_005b71e0 at 005b71f5
;   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 at 005b6fa1
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_init* g_APIDLL_init
;   APIDLL_kill* g_APIDLL_kill
;   APIDLL_toggle* g_APIDLL_toggle
;   void* g_APIDLL_setVideoMode
;   APIDLL_setVideoMode2* g_APIDLL_setVideoMode2
;   APIDLL_restoreVideoMode* g_APIDLL_restoreVideoMode
;   APIDLL_beginScene* g_APIDLL_beginScene
;   APIDLL_endScene* g_APIDLL_endScene
;   APIDLL_lockFrame* g_APIDLL_lockFrame
;   APIDLL_unlockFrame* g_APIDLL_unlockFrame
;   APIDLL_selectTexture* g_APIDLL_selectTexture
;   APIDLL_updateTexture* g_APIDLL_updateTexture
;   APIDLL_setMipMapLevel* g_APIDLL_setMipMapLevel
;   APIDLL_drawPolygon* g_APIDLL_drawPolygon
;   ... and 45 more
;
; Called Functions:
;   wincore_wddvmem.cpp_freeLibrary_FUN_005ede00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b5d20
        ;   Label: wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
    PUSH EBP                            ; 005b5d21
    XOR EDX,EDX                         ; 005b5d22
    MOV EBX,dword ptr [0x03f6b97c]      ; 005b5d24 | g_RendererDLLHandle
    MOV dword ptr [0x02d03e94],EDX      ; 005b5d2a | g_UseExternalRenderer
    MOV dword ptr [0x03f6b978],EDX      ; 005b5d30 | g_ExternalRendererActive
    TEST EBX,EBX                        ; 005b5d36
    JNZ 0x005b5e99                      ; 005b5d38
        ;   XREF to: 005b5e99 (CONDITIONAL_JUMP)  ; LAB_005b5e99
    XOR EBP,EBP                         ; 005b5d3e
        ;   Label: LAB_005b5d3e
    MOV dword ptr [0x03f6b890],EBP      ; 005b5d40 | g_APIDLL_kill
    MOV dword ptr [0x03f6b894],EBP      ; 005b5d46 | g_APIDLL_toggle
    MOV dword ptr [0x03f6b898],EBP      ; 005b5d4c | g_APIDLL_setVideoMode
    MOV dword ptr [0x03f6b89c],EBP      ; 005b5d52 | g_APIDLL_setVideoMode2
    MOV dword ptr [0x03f6b8a0],EBP      ; 005b5d58 | g_APIDLL_restoreVideoMode
    MOV dword ptr [0x03f6b8a4],EBP      ; 005b5d5e | g_APIDLL_beginScene
    MOV dword ptr [0x03f6b8a8],EBP      ; 005b5d64 | g_APIDLL_endScene
    MOV dword ptr [0x03f6b8ac],EBP      ; 005b5d6a | g_APIDLL_lockFrame
    MOV dword ptr [0x03f6b8b0],EBP      ; 005b5d70 | g_APIDLL_unlockFrame
    MOV dword ptr [0x03f6b8b4],EBP      ; 005b5d76 | g_APIDLL_selectTexture
    MOV dword ptr [0x03f6b8b8],EBP      ; 005b5d7c | g_APIDLL_updateTexture
    MOV dword ptr [0x03f6b8c4],EBP      ; 005b5d82 | g_APIDLL_setMipMapLevel
    MOV dword ptr [0x03f6b8c8],EBP      ; 005b5d88 | g_APIDLL_drawPolygon
    MOV dword ptr [0x03f6b8cc],EBP      ; 005b5d8e | g_APIDLL_drawPolygon2
    MOV dword ptr [0x03f6b8d0],EBP      ; 005b5d94 | g_APIDLL_drawPolyList
    MOV dword ptr [0x03f6b8d4],EBP      ; 005b5d9a | g_APIDLL_drawPolyList2
    MOV dword ptr [0x03f6b8d8],EBP      ; 005b5da0 | g_APIDLL_drawPolyList3
    MOV dword ptr [0x03f6b8dc],EBP      ; 005b5da6 | g_APIDLL_addParticle
    MOV dword ptr [0x03f6b8e0],EBP      ; 005b5dac | g_APIDLL_flushParticleList
    MOV dword ptr [0x03f6b8e4],EBP      ; 005b5db2 | g_APIDLL_add3dLine
    MOV dword ptr [0x03f6b8e8],EBP      ; 005b5db8 | g_APIDLL_flushLineList
    MOV dword ptr [0x03f6b8ec],EBP      ; 005b5dbe | g_APIDLL_clear
    MOV dword ptr [0x03f6b8f0],EBP      ; 005b5dc4 | g_APIDLL_setFogColor
    MOV dword ptr [0x03f6b8f4],EBP      ; 005b5dca | g_APIDLL_sync
    MOV dword ptr [0x03f6b8f8],EBP      ; 005b5dd0 | g_APIDLL_clearZBuffer
    MOV dword ptr [0x03f6b8fc],EBP      ; 005b5dd6 | g_APIDLL_clearZBox
    MOV dword ptr [0x03f6b900],EBP      ; 005b5ddc | g_APIDLL_setColorTable16
    MOV dword ptr [0x03f6b904],EBP      ; 005b5de2 | g_APIDLL_GetDisplayContext
    MOV dword ptr [0x03f6b908],EBP      ; 005b5de8 | g_APIDLL_ReleaseDisplayContext
    MOV dword ptr [0x03f6b90c],EBP      ; 005b5dee | g_APIDLL_masterZBuffer
    MOV dword ptr [0x03f6b910],EBP      ; 005b5df4 | g_APIDLL_restoreZBuffer
    MOV dword ptr [0x03f6b914],EBP      ; 005b5dfa | g_APIDLL_getVideoMemory
    MOV dword ptr [0x03f6b918],EBP      ; 005b5e00 | g_APIDLL_selectCard
    MOV dword ptr [0x03f6b91c],EBP      ; 005b5e06 | g_APIDLL_buildCardList
    MOV dword ptr [0x03f6b920],EBP      ; 005b5e0c | g_APIDLL_lockHoldBuffer
    MOV dword ptr [0x03f6b924],EBP      ; 005b5e12 | g_APIDLL_unlockHoldBuffer
    MOV dword ptr [0x03f6b928],EBP      ; 005b5e18 | g_APIDLL_lockTexture
    MOV dword ptr [0x03f6b92c],EBP      ; 005b5e1e | g_APIDLL_unlockTexture
    MOV dword ptr [0x03f6b930],EBP      ; 005b5e24 | g_APIDLL_getTextureInfo
    MOV dword ptr [0x03f6b934],EBP      ; 005b5e2a | g_APIDLL_setVideoModeX
    MOV dword ptr [0x03f6b938],EBP      ; 005b5e30 | g_APIDLL_restoreVideoModeX
    MOV dword ptr [0x03f6b93c],EBP      ; 005b5e36 | g_APIDLL_lockFrameX
    MOV dword ptr [0x03f6b940],EBP      ; 005b5e3c | g_APIDLL_unlockFrameX
    MOV dword ptr [0x03f6b944],EBP      ; 005b5e42 | g_APIDLL_toggleX
    MOV dword ptr [0x03f6b948],EBP      ; 005b5e48 | g_APIDLL_setViewport
    MOV dword ptr [0x03f6b94c],EBP      ; 005b5e4e | g_APIDLL_setLightConstants
    MOV dword ptr [0x03f6b950],EBP      ; 005b5e54 | g_APIDLL_setLightVector
    MOV dword ptr [0x03f6b954],EBP      ; 005b5e5a | g_APIDLL_setAmbientLight
    MOV dword ptr [0x03f6b958],EBP      ; 005b5e60 | g_APIDLL_setTransform
    MOV dword ptr [0x03f6b95c],EBP      ; 005b5e66 | g_APIDLL_polyList
    MOV dword ptr [0x03f6b960],EBP      ; 005b5e6c | g_APIDLL_getTextureHandle
    MOV dword ptr [0x03f6b964],EBP      ; 005b5e72 | g_APIDLL_selectTextureByHandle
    MOV dword ptr [0x03f6b968],EBP      ; 005b5e78 | g_APIDLL_enableCulling
    MOV dword ptr [0x03f6b96c],EBP      ; 005b5e7e | g_APIDLL_enableClipping
    MOV dword ptr [0x03f6b970],EBP      ; 005b5e84 | g_APIDLL_setTextureClamp
    MOV dword ptr [0x03f6b974],EBP      ; 005b5e8a | g_APIDLL_setFog
    MOV dword ptr [0x03f6b88c],EBP      ; 005b5e90 | g_APIDLL_init
    POP EBP                             ; 005b5e96
    POP EBX                             ; 005b5e97
    RET                                 ; 005b5e98
    PUSH EDI                            ; 005b5e99
        ;   Label: LAB_005b5e99
    PUSH EBX                            ; 005b5e9a
    CALL wincore_wddvmem.cpp_freeLibrary_FUN_005ede00 ; 005b5e9b
        ;   XREF to: 005ede00 (UNCONDITIONAL_CALL)  ; BOOL wincore_wddvmem.cpp_freeLibrary_FUN_005ede00(HMODULE hLibModule)
    XOR EDI,EDI                         ; 005b5ea0
    ADD ESP,0x4                         ; 005b5ea2
    MOV dword ptr [0x03f6b97c],EDI      ; 005b5ea5 | g_RendererDLLHandle
    POP EDI                             ; 005b5eab
    JMP 0x005b5d3e                      ; 005b5eac
        ;   XREF to: 005b5d3e (UNCONDITIONAL_JUMP)  ; LAB_005b5d3e


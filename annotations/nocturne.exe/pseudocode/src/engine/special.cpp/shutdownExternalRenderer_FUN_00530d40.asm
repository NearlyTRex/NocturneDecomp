; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_shutdownExternalRenderer_FUN_00530d40(void)
;
;
; XREF[3]:
;   engine_special.cpp_initializeExternalRenderer_FUN_00530e60 at 00531750
;   engine_special.cpp_kill_FUN_005322b0 at 005322c5
;   engine_special.cpp_loadExternalRenderer_FUN_00531780 at 0053226f
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_init* g_APIDLL_init
;   APIDLL_kill* g_APIDLL_kill
;   APIDLL_toggle* g_APIDLL_toggle
;   APIDLL_setVideoMode* g_APIDLL_setVideoMode
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
;   ... and 24 more
;
; Called Functions:
;   wincore_wddvmem.cpp_freeLibrary_FUN_00553d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530d40
        ;   Label: engine_special.cpp_shutdownExternalRenderer_FUN_00530d40
    PUSH EBP                            ; 00530d41
    XOR EDX,EDX                         ; 00530d42
    MOV EBX,dword ptr [0x02dc9e08]      ; 00530d44 | g_RendererDLLHandle
    MOV dword ptr [0x01c02594],EDX      ; 00530d4a | g_UseExternalRenderer
    MOV dword ptr [0x02dc9e04],EDX      ; 00530d50 | g_LoadedExternalDLLRenderer
    TEST EBX,EBX                        ; 00530d56
    JNZ 0x00530e3b                      ; 00530d58
        ;   XREF to: 00530e3b (CONDITIONAL_JUMP)  ; LAB_00530e3b
    XOR EBP,EBP                         ; 00530d5e
        ;   Label: LAB_00530d5e
    MOV dword ptr [0x02dc9d78],EBP      ; 00530d60 | g_APIDLL_kill
    MOV dword ptr [0x02dc9d7c],EBP      ; 00530d66 | g_APIDLL_toggle
    MOV dword ptr [0x02dc9d80],EBP      ; 00530d6c | g_APIDLL_setVideoMode
    MOV dword ptr [0x02dc9d84],EBP      ; 00530d72 | g_APIDLL_setVideoMode2
    MOV dword ptr [0x02dc9d88],EBP      ; 00530d78 | g_APIDLL_restoreVideoMode
    MOV dword ptr [0x02dc9d8c],EBP      ; 00530d7e | g_APIDLL_beginScene
    MOV dword ptr [0x02dc9d90],EBP      ; 00530d84 | g_APIDLL_endScene
    MOV dword ptr [0x02dc9d94],EBP      ; 00530d8a | g_APIDLL_lockFrame
    MOV dword ptr [0x02dc9d98],EBP      ; 00530d90 | g_APIDLL_unlockFrame
    MOV dword ptr [0x02dc9d9c],EBP      ; 00530d96 | g_APIDLL_selectTexture
    MOV dword ptr [0x02dc9da0],EBP      ; 00530d9c | g_APIDLL_updateTexture
    MOV dword ptr [0x02dc9da4],EBP      ; 00530da2 | g_APIDLL_setMipMapLevel
    MOV dword ptr [0x02dc9da8],EBP      ; 00530da8 | g_APIDLL_drawPolygon
    MOV dword ptr [0x02dc9dac],EBP      ; 00530dae | g_APIDLL_drawPolygon2
    MOV dword ptr [0x02dc9db0],EBP      ; 00530db4 | g_APIDLL_drawPolyList
    MOV dword ptr [0x02dc9db4],EBP      ; 00530dba | g_APIDLL_drawPolyList2
    MOV dword ptr [0x02dc9db8],EBP      ; 00530dc0 | g_APIDLL_addParticle
    MOV dword ptr [0x02dc9dbc],EBP      ; 00530dc6 | g_APIDLL_flushParticleList
    MOV dword ptr [0x02dc9dc0],EBP      ; 00530dcc | g_APIDLL_add3dLine
    MOV dword ptr [0x02dc9dc4],EBP      ; 00530dd2 | g_APIDLL_flushLineList
    MOV dword ptr [0x02dc9dc8],EBP      ; 00530dd8 | g_APIDLL_clear
    MOV dword ptr [0x02dc9dcc],EBP      ; 00530dde | g_APIDLL_setFogColor
    MOV dword ptr [0x02dc9dd0],EBP      ; 00530de4 | g_APIDLL_sync
    MOV dword ptr [0x02dc9dd4],EBP      ; 00530dea | g_APIDLL_clearZBuffer
    MOV dword ptr [0x02dc9dd8],EBP      ; 00530df0 | g_APIDLL_clearZBox
    MOV dword ptr [0x02dc9ddc],EBP      ; 00530df6 | g_APIDLL_setColorTable16
    MOV dword ptr [0x02dc9de0],EBP      ; 00530dfc | g_APIDLL_getDisplayContext
    MOV dword ptr [0x02dc9de4],EBP      ; 00530e02 | g_APIDLL_releaseDisplayContext
    MOV dword ptr [0x02dc9de8],EBP      ; 00530e08 | g_APIDLL_masterZBuffer
    MOV dword ptr [0x02dc9dec],EBP      ; 00530e0e | g_APIDLL_restoreZBuffer
    MOV dword ptr [0x02dc9df0],EBP      ; 00530e14 | g_APIDLL_getVideoMemory
    MOV dword ptr [0x02dc9df4],EBP      ; 00530e1a | g_APIDLL_selectCard
    MOV dword ptr [0x02dc9df8],EBP      ; 00530e20 | g_APIDLL_buildCardList
    MOV dword ptr [0x02dc9dfc],EBP      ; 00530e26 | g_APIDLL_lockHoldBuffer
    MOV dword ptr [0x02dc9e00],EBP      ; 00530e2c | g_APIDLL_unlockHoldBuffer
    MOV dword ptr [0x02dc9d74],EBP      ; 00530e32 | g_APIDLL_init
    POP EBP                             ; 00530e38
    POP EBX                             ; 00530e39
    RET                                 ; 00530e3a
    PUSH EDI                            ; 00530e3b
        ;   Label: LAB_00530e3b
    PUSH EBX                            ; 00530e3c
    CALL wincore_wddvmem.cpp_freeLibrary_FUN_00553d20 ; 00530e3d
        ;   XREF to: 00553d20 (UNCONDITIONAL_CALL)  ; BOOL wincore_wddvmem.cpp_freeLibrary_FUN_00553d20(HMODULE hLibModule)
    XOR EDI,EDI                         ; 00530e42
    ADD ESP,0x4                         ; 00530e44
    MOV dword ptr [0x02dc9e08],EDI      ; 00530e47 | g_RendererDLLHandle
    POP EDI                             ; 00530e4d
    JMP 0x00530d5e                      ; 00530e4e
        ;   XREF to: 00530d5e (UNCONDITIONAL_JUMP)  ; LAB_00530d5e


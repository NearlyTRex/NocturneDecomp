; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_loadAssets_FUN_0049d1c0(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_loadAssets_FUN_004bb050 at 004bb067
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_006150f4
;   undefined4 DAT_0061510c
;   undefined4 DAT_00615124
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_fire.cpp_loadDebrisAssets_FUN_00498c90
;   core_fire.cpp_loadDynamiteAssets_FUN_004995e0
;   core_fire.cpp_loadFireBallAssets_FUN_00495900
;   core_fire.cpp_loadGunFlameAssets_FUN_0049a150
;   core_fire.cpp_loadGunFlashAssets_FUN_00496c40
;   core_fire.cpp_loadLightningBoltAssets_FUN_0049aab0
;   core_fire.cpp_loadRockAssets_FUN_00496610
;   core_fire.cpp_loadStakeAssets_FUN_00494130
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   unkaddr_0059d350.cpp_FUN_0059d5f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d1c0
        ;   Label: core_fire.cpp_CFireEffect_loadAssets_FUN_0049d1c0
    PUSH 0x6150f4                       ; 0049d1c1 | DAT_006150f4
    MOV EDX,dword ptr [0x0060b280]      ; 0049d1c6 | DAT_0060b280
    PUSH EDX                            ; 0049d1cc | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0049d1cd
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0049d1d2
    PUSH 0x61510c                       ; 0049d1d5 | DAT_0061510c
    MOV ECX,dword ptr [0x0060b280]      ; 0049d1da | DAT_0060b280
    PUSH ECX                            ; 0049d1e0 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0049d1e1
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0049d1e6
    PUSH 0x615124                       ; 0049d1e9 | DAT_00615124
    MOV EBX,dword ptr [0x0060b280]      ; 0049d1ee | DAT_0060b280
    PUSH EBX                            ; 0049d1f4 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0049d1f5
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0049d1fa
    CALL core_fire.cpp_loadStakeAssets_FUN_00494130 ; 0049d1fd
        ;   XREF to: 00494130 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadStakeAssets_FUN_00494130()
    CALL core_fire.cpp_loadFireBallAssets_FUN_00495900 ; 0049d202
        ;   XREF to: 00495900 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadFireBallAssets_FUN_00495900()
    CALL core_fire.cpp_loadRockAssets_FUN_00496610 ; 0049d207
        ;   XREF to: 00496610 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadRockAssets_FUN_00496610()
    CALL core_fire.cpp_loadDynamiteAssets_FUN_004995e0 ; 0049d20c
        ;   XREF to: 004995e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadDynamiteAssets_FUN_004995e0()
    CALL core_fire.cpp_loadGunFlameAssets_FUN_0049a150 ; 0049d211
        ;   XREF to: 0049a150 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadGunFlameAssets_FUN_0049a150()
    CALL core_fire.cpp_loadGunFlashAssets_FUN_00496c40 ; 0049d216
        ;   XREF to: 00496c40 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadGunFlashAssets_FUN_00496c40()
    CALL core_fire.cpp_loadLightningBoltAssets_FUN_0049aab0 ; 0049d21b
        ;   XREF to: 0049aab0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadLightningBoltAssets_FUN_0049aab0()
    CALL core_fire.cpp_loadDebrisAssets_FUN_00498c90 ; 0049d220
        ;   XREF to: 00498c90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_loadDebrisAssets_FUN_00498c90()
    CALL unkaddr_0059d350.cpp_FUN_0059d5f0 ; 0049d225
        ;   XREF to: 0059d5f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d5f0()
    POP EBX                             ; 0049d22a
    RET                                 ; 0049d22b


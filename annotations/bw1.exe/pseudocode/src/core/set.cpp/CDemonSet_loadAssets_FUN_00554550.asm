; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_loadAssets_FUN_00554550(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_loadAssets_FUN_004d5e40 at 004d5e48
;
; Referenced Globals:
;   CWater* g_CWaterPtr = 02c8afb0
;   CWater g_CWaterInstance
;
; Called Functions:
;   core_dlight.cpp_captureLightTextures_FUN_00464150
;   core_water.cpp_CWater_captureTextures_FUN_005a9a10
;
; *****************************************************************************

section .text

    CALL core_dlight.cpp_captureLightTextures_FUN_00464150 ; 00554550
        ;   XREF to: 00464150 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_captureLightTextures_FUN_00464150()
        ;   Label: core_set.cpp_CDemonSet_loadAssets_FUN_00554550
    MOV EDX,dword ptr [0x00625c90]      ; 00554555 | g_CWaterPtr
    PUSH EDX                            ; 0055455b | g_CWaterInstance
    CALL core_water.cpp_CWater_captureTextures_FUN_005a9a10 ; 0055455c
        ;   XREF to: 005a9a10 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_captureTextures_FUN_005a9a10(CWater * this_ptr)
    ADD ESP,0x4                         ; 00554561
    RET                                 ; 00554564


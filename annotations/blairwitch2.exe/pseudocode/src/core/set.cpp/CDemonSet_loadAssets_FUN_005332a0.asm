; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_loadAssets_FUN_005332a0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_loadAssets_FUN_004bb050 at 004bb058
;
; Referenced Globals:
;   CWater* g_CWaterPtr = 02653790
;   CWater g_CWaterInstance
;
; Called Functions:
;   core_dlight.cpp_captureLightTextures_FUN_0044b920
;   core_water.cpp_CWater_captureTextures_FUN_00585de0
;
; *****************************************************************************

section .text

    CALL core_dlight.cpp_captureLightTextures_FUN_0044b920 ; 005332a0
        ;   XREF to: 0044b920 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_captureLightTextures_FUN_0044b920()
        ;   Label: core_set.cpp_CDemonSet_loadAssets_FUN_005332a0
    MOV EDX,dword ptr [0x0061e520]      ; 005332a5 | g_CWaterPtr
    PUSH EDX                            ; 005332ab | g_CWaterInstance
    CALL core_water.cpp_CWater_captureTextures_FUN_00585de0 ; 005332ac
        ;   XREF to: 00585de0 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_captureTextures_FUN_00585de0(CWater * this_ptr)
    ADD ESP,0x4                         ; 005332b1
    RET                                 ; 005332b4


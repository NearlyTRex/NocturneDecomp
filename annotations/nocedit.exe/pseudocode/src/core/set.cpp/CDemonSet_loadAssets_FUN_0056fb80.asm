; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_loadAssets_FUN_0056fb80(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_loadAssets_FUN_004e07a0 at 004e07a8
;
; Referenced Globals:
;   CWater* g_CWaterPtr = 03f875e0
;   CWater g_CWaterInstance
;
; Called Functions:
;   core_dlight.cpp_captureLightTextures_FUN_00474a90
;   core_water.cpp_CWater_captureTextures_FUN_005e9e40
;
; *****************************************************************************

section .text

    CALL core_dlight.cpp_captureLightTextures_FUN_00474a90 ; 0056fb80
        ;   XREF to: 00474a90 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_captureLightTextures_FUN_00474a90()
        ;   Label: core_set.cpp_CDemonSet_loadAssets_FUN_0056fb80
    MOV EDX,dword ptr [0x006844f0]      ; 0056fb85 | g_CWaterInstance | g_CWaterPtr
    PUSH EDX                            ; 0056fb8b | g_CWaterInstance
    CALL core_water.cpp_CWater_captureTextures_FUN_005e9e40 ; 0056fb8c
        ;   XREF to: 005e9e40 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_captureTextures_FUN_005e9e40(CWater * this_ptr)
    ADD ESP,0x4                         ; 0056fb91
    RET                                 ; 0056fb94


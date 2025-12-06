; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_FUN_0056fb80(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_FUN_004e07a0 at 004e07a8
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

    CALL core_dlight.cpp_captureLightTextures_FUN_00474a90 ; 0056fb80 | void core_dlight.cpp_captureLightTextures_FUN_00474a90()
        ;   Label: core_set.cpp_CDemonSet_FUN_0056fb80
        ;   XREF to: 00474a90 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x006844f0]      ; 0056fb85 | CWater g_CWaterInstance | CWater * g_CWaterPtr
    PUSH EDX                            ; 0056fb8b | CWater g_CWaterInstance
    CALL core_water.cpp_CWater_captureTextures_FUN_005e9e40 ; 0056fb8c | void core_water.cpp_CWater_captureTextures_FUN_005e9e40(CWater * this_ptr)
        ;   XREF to: 005e9e40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056fb91
    RET                                 ; 0056fb94


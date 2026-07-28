; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_loadAssets_FUN_0050d280(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_loadAssets_FUN_004a3660 at 004a3668
;
; Referenced Globals:
;   undefined4 DAT_005c11ec
;   undefined4 DAT_02dd1210
;
; Called Functions:
;   core_dlight.cpp_captureLightTextures_FUN_004504e0
;   core_water.cpp_CWater_captureTextures_FUN_005507d0
;
; *****************************************************************************

section .text

    CALL core_dlight.cpp_captureLightTextures_FUN_004504e0 ; 0050d280
        ;   XREF to: 004504e0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_captureLightTextures_FUN_004504e0()
        ;   Label: core_set.cpp_CDemonSet_loadAssets_FUN_0050d280
    MOV EDX,dword ptr [0x005c11ec]      ; 0050d285 | DAT_005c11ec
    PUSH EDX                            ; 0050d28b | DAT_02dd1210
    CALL core_water.cpp_CWater_captureTextures_FUN_005507d0 ; 0050d28c
        ;   XREF to: 005507d0 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_captureTextures_FUN_005507d0(CWater * this_ptr)
    ADD ESP,0x4                         ; 0050d291
    RET                                 ; 0050d294


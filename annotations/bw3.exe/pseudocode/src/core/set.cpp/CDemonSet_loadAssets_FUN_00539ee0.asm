; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_loadAssets_FUN_00539ee0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_loadAssets_FUN_004bd430 at 004bd438
;
; Referenced Globals:
;   CWater* g_CWaterPtr = 02cfd950
;   CWater g_CWaterInstance
;
; Called Functions:
;   core_dlight.cpp_captureLightTextures_FUN_0045de60
;   core_water.cpp_CWater_captureTextures_FUN_00577260
;
; *****************************************************************************

section .text

    CALL core_dlight.cpp_captureLightTextures_FUN_0045de60 ; 00539ee0
        ;   XREF to: 0045de60 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_captureLightTextures_FUN_0045de60()
        ;   Label: core_set.cpp_CDemonSet_loadAssets_FUN_00539ee0
    MOV EDX,dword ptr [0x00606b20]      ; 00539ee5 | g_CWaterPtr
    PUSH EDX                            ; 00539eeb | g_CWaterInstance
    CALL core_water.cpp_CWater_captureTextures_FUN_00577260 ; 00539eec
        ;   XREF to: 00577260 (UNCONDITIONAL_CALL)  ; void core_water.cpp_CWater_captureTextures_FUN_00577260(CWater * this_ptr)
    ADD ESP,0x4                         ; 00539ef1
    RET                                 ; 00539ef4


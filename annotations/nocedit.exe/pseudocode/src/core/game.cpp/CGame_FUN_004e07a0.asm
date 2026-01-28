; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_CGame_FUN_004e07a0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db2a7
;
; Referenced Globals:
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CGore* g_CGorePtr = 02d83364
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CFireEffect g_CFireEffectInstance
;   CGore g_CGoreInstance
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0
;   core_gore.cpp_CGore_FUN_004ede60
;   core_inv.cpp_loadInventory_FUN_004fd220
;   core_set.cpp_CDemonSet_FUN_0056fb80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e07a0
        ;   Label: core_game.cpp_CGame_FUN_004e07a0
    MOV EDX,dword ptr [0x006810c8]      ; 004e07a1 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004e07a7 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056fb80 ; 004e07a8
        ;   XREF to: 0056fb80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056fb80(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e07ad
    MOV ECX,dword ptr [0x0067a3d0]      ; 004e07b0 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH ECX                            ; 004e07b6 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0 ; 004e07b7
        ;   XREF to: 004c7ab0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004e07bc
    MOV EBX,dword ptr [0x0067b9a0]      ; 004e07bf | g_CGoreInstance | g_CGorePtr
    PUSH EBX                            ; 004e07c5 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004ede60 ; 004e07c6
        ;   XREF to: 004ede60 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004ede60(CGore * this_ptr)
    ADD ESP,0x4                         ; 004e07cb
    CALL core_inv.cpp_loadInventory_FUN_004fd220 ; 004e07ce
        ;   XREF to: 004fd220 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_loadInventory_FUN_004fd220()
    POP EBX                             ; 004e07d3
    RET                                 ; 004e07d4


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_gabriela.cpp_CGabriella_FUN_004d6b30 at 004d6d18
;   core_stranger.cpp_CStranger_FUN_005c48b0 at 005c4af3
;
; Referenced Globals:
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020
;
; *****************************************************************************

section .text

    MOV EAX,[0x02db87d0]                ; 004e0bd0 | g_LocalHeroIndex
        ;   Label: core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004e0bd5 | g_HeroActors
    ADD EAX,0x1f738                     ; 004e0bdc
    PUSH EAX                            ; 004e0be1
    CALL core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020 ; 004e0be2
        ;   XREF to: 00500020 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_00500020(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004e0be7
    RET                                 ; 004e0bea


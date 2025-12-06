; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_CGame_FUN_004e0bb0(CGame * this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004d2ea0 at 004d33df
;
; Referenced Globals:
;   CHero*[4] g_HeroActors
;   int g_LocalHeroIndex
;
; Called Functions:
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
;
; *****************************************************************************

section .text

    MOV EAX,[0x02db87d0]                ; 004e0bb0 | int g_LocalHeroIndex
        ;   Label: core_game.cpp_CGame_FUN_004e0bb0
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 004e0bb5 | CHero *[4] g_HeroActors
    PUSH 0x0                            ; 004e0bbc
    ADD EAX,0x1f738                     ; 004e0bbe
    PUSH EAX                            ; 004e0bc3
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0 ; 004e0bc4 | void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(CInventory * this_ptr, int reset_both)
        ;   XREF to: 004fffa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e0bc9
    RET                                 ; 004e0bcc


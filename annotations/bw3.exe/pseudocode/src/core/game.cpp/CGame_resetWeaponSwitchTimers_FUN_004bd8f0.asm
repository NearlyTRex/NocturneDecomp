; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004bd8f0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   int g_INT_01d5ba14
;
; Called Functions:
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340
;
; *****************************************************************************

section .text

    MOV EAX,[0x01d5ba14]                ; 004bd8f0 | g_INT_01d5ba14
        ;   Label: core_game.cpp_CGame_resetWeaponSwitchTimers_FUN_004bd8f0
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bd8f5
    PUSH 0x0                            ; 004bd8fc
    ADD EAX,0x206e8                     ; 004bd8fe
    PUSH EAX                            ; 004bd903
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340 ; 004bd904
        ;   XREF to: 004dd340 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(CInventory * this_ptr, int reset_both)
    ADD ESP,0x8                         ; 004bd909
    RET                                 ; 004bd90c


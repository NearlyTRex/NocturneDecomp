; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_health.cpp_FUN_004d20c0 at 004d2110
;   core_prye.cpp_CPrye_processDamage_FUN_00523e50 at 0052403d
;   core_weapon.cpp_CWeapon_fire_FUN_0057b880 at 0057b8dd
;
; Referenced Globals:
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd3c0
;
; *****************************************************************************

section .text

    MOV EAX,[0x01d5ba14]                ; 004bd910 | DAT_01d5ba14
        ;   Label: core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004bd915
    ADD EAX,0x206e8                     ; 004bd91c
    PUSH EAX                            ; 004bd921
    CALL core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd3c0 ; 004bd922
        ;   XREF to: 004dd3c0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd3c0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004bd927
    RET                                 ; 004bd92a


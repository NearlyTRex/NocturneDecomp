; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004d6300(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c6b85
;
; Referenced Globals:
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0
;
; *****************************************************************************

section .text

    MOV EAX,[0x01d06ab4]                ; 004d6300 | DAT_01d06ab4
        ;   Label: core_game.cpp_CGame_resetWeaponSwitchTimers_FUN_004d6300
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d6305
    PUSH 0x0                            ; 004d630c
    ADD EAX,0x1fae8                     ; 004d630e
    PUSH EAX                            ; 004d6313
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0 ; 004d6314
        ;   XREF to: 004fa6c0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0(CInventory * this_ptr, int reset_both)
    ADD ESP,0x8                         ; 004d6319
    RET                                 ; 004d631c


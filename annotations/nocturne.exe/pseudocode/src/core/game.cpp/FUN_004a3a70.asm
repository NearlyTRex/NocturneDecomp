; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004a3a70(void)
;
;
; XREF[1]:
;   core_gabriela.cpp_FUN_00495a20 at 00495f5f
;
; Referenced Globals:
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20
;
; *****************************************************************************

section .text

    MOV EAX,[0x01cae0e8]                ; 004a3a70 | DAT_01cae0e8
        ;   Label: core_game.cpp_FUN_004a3a70
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004a3a75
    PUSH 0x0                            ; 004a3a7c
    ADD EAX,0x1f5a0                     ; 004a3a7e
    PUSH EAX                            ; 004a3a83
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20 ; 004a3a84
        ;   XREF to: 004c1d20 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20()
    ADD ESP,0x8                         ; 004a3a89
    RET                                 ; 004a3a8c


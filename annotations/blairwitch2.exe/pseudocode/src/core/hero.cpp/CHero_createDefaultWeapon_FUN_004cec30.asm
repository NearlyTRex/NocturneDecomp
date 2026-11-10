; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_createDefaultWeapon_FUN_004cec30(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hero.cpp_FUN_004ce240 at 004ce37a
;
; Called Functions:
;   core_inv.cpp_CInventory_initialize_FUN_004da900
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cec30
        ;   Label: core_hero.cpp_CHero_createDefaultWeapon_FUN_004cec30
    ADD EAX,0x2437c                     ; 004cec34
    PUSH EAX                            ; 004cec39
    CALL core_inv.cpp_CInventory_initialize_FUN_004da900 ; 004cec3a
        ;   XREF to: 004da900 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004da900(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004cec3f
    RET                                 ; 004cec42


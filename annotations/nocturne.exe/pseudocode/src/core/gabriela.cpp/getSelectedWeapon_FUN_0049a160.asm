; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * __cdecl core_gabriela_cpp_getSelectedWeapon_FUN_0049a160(CInventory *inventory_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   inventory_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00503330
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049a160
        ;   Label: core_gabriela.cpp_getSelectedWeapon_FUN_0049a160
    MOV EAX,dword ptr [EAX + 0x330]     ; 0049a164
    RET                                 ; 0049a16a


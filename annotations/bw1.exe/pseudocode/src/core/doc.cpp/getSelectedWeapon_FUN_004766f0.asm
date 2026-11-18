; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * __cdecl core_doc_cpp_getSelectedWeapon_FUN_004766f0(CInventory *inventory_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   inventory_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00548f94
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004766f0
        ;   Label: core_doc.cpp_getSelectedWeapon_FUN_004766f0
    MOV EAX,dword ptr [EAX + 0x338]     ; 004766f4
    RET                                 ; 004766fa


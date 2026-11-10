; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInventory * __cdecl core_inv_cpp_CInventory_dtor_FUN_004f6f80(CInventory *this_ptr,uint flags)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_hero.cpp_FUN_004ea980 at 004ea9aa
;
; Called Functions:
;   core_inv.cpp_CInventory_clear_FUN_004f6fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6f80
        ;   Label: core_inv.cpp_CInventory_dtor_FUN_004f6f80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f6f81
    PUSH EBX                            ; 004f6f85
    CALL core_inv.cpp_CInventory_clear_FUN_004f6fa0 ; 004f6f86
        ;   XREF to: 004f6fa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004f6fa0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004f6f8b
    MOV EAX,EBX                         ; 004f6f8e
    POP EBX                             ; 004f6f90
    RET                                 ; 004f6f91


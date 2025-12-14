; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_inv.cpp_CInventory_dtor_FUN_004fd0c0(CInventory * this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hero.cpp_CHero_dtor_FUN_004f2470 at 004f249e
;
; Called Functions:
;   core_inv.cpp_CInventory_clear_FUN_004fd0e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd0c0
        ;   Label: core_inv.cpp_CInventory_dtor_FUN_004fd0c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fd0c1
    PUSH EBX                            ; 004fd0c5
    CALL core_inv.cpp_CInventory_clear_FUN_004fd0e0 ; 004fd0c6
        ;   XREF to: 004fd0e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004fd0e0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004fd0cb
    MOV EAX,EBX                         ; 004fd0ce
    POP EBX                             ; 004fd0d0
    RET                                 ; 004fd0d1


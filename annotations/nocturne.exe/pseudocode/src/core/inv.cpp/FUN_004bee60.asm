; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInventory * __cdecl core_inv_cpp_FUN_004bee60(CInventory *this_ptr,uint flags)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_hero.cpp_CHero_dtor_FUN_004b4800 at 004b482e
;
; Called Functions:
;   core_inv.cpp_CInventory_clear_FUN_004bee80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bee60
        ;   Label: core_inv.cpp_FUN_004bee60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bee61
    PUSH EBX                            ; 004bee65
    CALL core_inv.cpp_CInventory_clear_FUN_004bee80 ; 004bee66
        ;   XREF to: 004bee80 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004bee80(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004bee6b
    MOV EAX,EBX                         ; 004bee6e
    POP EBX                             ; 004bee70
    RET                                 ; 004bee71


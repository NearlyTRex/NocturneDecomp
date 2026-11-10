; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInventory * __cdecl core_inv_cpp_CInventory_dtor_FUN_004da840(CInventory *this_ptr,uint flags)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_hero.cpp_CHero_dtor_FUN_004ce3d0 at 004ce3fe
;
; Called Functions:
;   core_inv.cpp_CInventory_clear_FUN_004da860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da840
        ;   Label: core_inv.cpp_CInventory_dtor_FUN_004da840
    MOV EBX,dword ptr [ESP + 0x8]       ; 004da841
    PUSH EBX                            ; 004da845
    CALL core_inv.cpp_CInventory_clear_FUN_004da860 ; 004da846
        ;   XREF to: 004da860 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004da860(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004da84b
    MOV EAX,EBX                         ; 004da84e
    POP EBX                             ; 004da850
    RET                                 ; 004da851


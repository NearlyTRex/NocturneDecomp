; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInventory * __cdecl core_inv_cpp_CInventory_dtor_FUN_004da420(CInventory *this_ptr,uint flags)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_hero.cpp_FUN_004d2620 at 004d264a
;
; Called Functions:
;   core_inv.cpp_CInventory_clear_FUN_004da440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da420
        ;   Label: core_inv.cpp_CInventory_dtor_FUN_004da420
    MOV EBX,dword ptr [ESP + 0x8]       ; 004da421
    PUSH EBX                            ; 004da425
    CALL core_inv.cpp_CInventory_clear_FUN_004da440 ; 004da426
        ;   XREF to: 004da440 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_clear_FUN_004da440(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004da42b
    MOV EAX,EBX                         ; 004da42e
    POP EBX                             ; 004da430
    RET                                 ; 004da431


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004d2cd0(int param_1)
;
;
; XREF[1]:
;   core_hero.cpp_CHero_ctor_FUN_004d24b0 at 004d25c2
;
; Called Functions:
;   core_inv.cpp_CInventory_initialize_FUN_004da4e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d2cd0
        ;   Label: core_hero.cpp_FUN_004d2cd0
    ADD EAX,0x206e8                     ; 004d2cd4
    PUSH EAX                            ; 004d2cd9
    CALL core_inv.cpp_CInventory_initialize_FUN_004da4e0 ; 004d2cda
        ;   XREF to: 004da4e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_initialize_FUN_004da4e0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004d2cdf
    RET                                 ; 004d2ce2


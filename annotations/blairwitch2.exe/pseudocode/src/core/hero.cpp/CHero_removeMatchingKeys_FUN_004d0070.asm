; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_removeMatchingKeys_FUN_004d0070(CHero *this_ptr,uint key_mask)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   key_mask
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 00526be2
;
; Called Functions:
;   core_inv.cpp_CInventory_removeMatchingKeys_FUN_004def40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d0070
        ;   Label: core_hero.cpp_CHero_removeMatchingKeys_FUN_004d0070
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d0074
    PUSH EDX                            ; 004d0078
    ADD EAX,0x2437c                     ; 004d0079
    PUSH EAX                            ; 004d007e
    CALL core_inv.cpp_CInventory_removeMatchingKeys_FUN_004def40 ; 004d007f
        ;   XREF to: 004def40 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeMatchingKeys_FUN_004def40(CInventory * this_ptr, uint key_mask)
    ADD ESP,0x8                         ; 004d0084
    RET                                 ; 004d0087


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHero_removeMatchingKeys_FUN_004f3910(CHero *this_ptr,uint key_mask)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   key_mask
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055e4ec
;
; Called Functions:
;   core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f3910
        ;   Label: core_hero.cpp_CHero_removeMatchingKeys_FUN_004f3910
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3914
    PUSH EDX                            ; 004f3918
    ADD EAX,0x1f738                     ; 004f3919
    PUSH EAX                            ; 004f391e
    CALL core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0 ; 004f391f
        ;   XREF to: 005014a0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0(CInventory * this_ptr, uint key_mask)
    ADD ESP,0x8                         ; 004f3924
    RET                                 ; 004f3927


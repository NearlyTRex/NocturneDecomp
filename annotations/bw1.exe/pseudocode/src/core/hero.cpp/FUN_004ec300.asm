; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_FUN_004ec300(CHero *this_ptr,uint key_mask)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   key_mask
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 00548c02
;
; Called Functions:
;   core_inv.cpp_CInventory_removeMatchingKeys_FUN_004fc310
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004ec300
        ;   Label: core_hero.cpp_FUN_004ec300
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ec304
    PUSH EDX                            ; 004ec308
    ADD EAX,0x1fae8                     ; 004ec309
    PUSH EAX                            ; 004ec30e
    CALL core_inv.cpp_CInventory_removeMatchingKeys_FUN_004fc310 ; 004ec30f
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_removeMatchingKeys_FUN_004fc310(CInventory * this_ptr, uint key_mask)
    ADD ESP,0x8                         ; 004ec314
    RET                                 ; 004ec317


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_FUN_004d41e0(CHero *this_ptr,uint key_mask)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   key_mask
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052e2f2
;
; Called Functions:
;   core_inv.cpp_FUN_004de6e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d41e0
        ;   Label: core_hero.cpp_FUN_004d41e0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d41e4
    PUSH EDX                            ; 004d41e8
    ADD EAX,0x206e8                     ; 004d41e9
    PUSH EAX                            ; 004d41ee
    CALL core_inv.cpp_FUN_004de6e0      ; 004d41ef
        ;   XREF to: 004de6e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004de6e0(CInventory * this_ptr, uint key_mask)
    ADD ESP,0x8                         ; 004d41f4
    RET                                 ; 004d41f7


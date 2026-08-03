; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_archive_FUN_004b3fe0(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004b49a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b3fe0
        ;   Label: core_haystack.cpp_CHaystack_archive_FUN_004b3fe0
    PUSH EDX                            ; 004b3fe4
    CALL core_hero.cpp_CHero_archive_FUN_004b49a0 ; 004b3fe5
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004b49a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004b3fea
    RET                                 ; 004b3fed


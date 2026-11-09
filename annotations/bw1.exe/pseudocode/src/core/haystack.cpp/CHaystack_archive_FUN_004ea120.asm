; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_archive_FUN_004ea120(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_FUN_004eab00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ea120
        ;   Label: core_haystack.cpp_CHaystack_archive_FUN_004ea120
    PUSH EDX                            ; 004ea124
    CALL core_hero.cpp_FUN_004eab00     ; 004ea125
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004eab00(CHero * this_ptr)
    ADD ESP,0x4                         ; 004ea12a
    RET                                 ; 004ea12d


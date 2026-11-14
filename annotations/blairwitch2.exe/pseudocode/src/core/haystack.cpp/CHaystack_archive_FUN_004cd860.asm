; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_archive_FUN_004cd860(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_CHero_archive_FUN_004ce590
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cd860
        ;   Label: core_haystack.cpp_CHaystack_archive_FUN_004cd860
    PUSH EDX                            ; 004cd864
    CALL core_hero.cpp_CHero_archive_FUN_004ce590 ; 004cd865
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004ce590(CHero * this_ptr)
    ADD ESP,0x4                         ; 004cd86a
    RET                                 ; 004cd86d


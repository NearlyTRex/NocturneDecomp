; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_archive_FUN_004d6350(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_hero.cpp_FUN_004ce590
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d6350
        ;   Label: core_icepick.cpp_CIcePick_archive_FUN_004d6350
    PUSH EDX                            ; 004d6354
    CALL core_hero.cpp_FUN_004ce590     ; 004d6355
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ce590()
    ADD ESP,0x4                         ; 004d635a
    RET                                 ; 004d635d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_hide_FUN_004b8ab0(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crossbow.cpp_FUN_00449830 at 004498fd
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b8ab0
        ;   Label: core_flame.cpp_CFlame_hide_FUN_004b8ab0
    MOV dword ptr [EAX + 0x290],0x0     ; 004b8ab4
    RET                                 ; 004b8abe


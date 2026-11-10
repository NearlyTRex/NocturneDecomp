; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_hide_FUN_004a0200(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crossbow.cpp_CCrossbow_process_FUN_0043a580 at 0043a64d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a0200
        ;   Label: core_flame.cpp_CFlame_hide_FUN_004a0200
    MOV dword ptr [EAX + 0x3ec],0x0     ; 004a0204
    RET                                 ; 004a020e


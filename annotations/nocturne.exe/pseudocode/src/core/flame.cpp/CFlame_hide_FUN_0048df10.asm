; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_hide_FUN_0048df10(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crossbow.cpp_CCrossbow_process_FUN_0043cfd0 at 0043d080
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048df10
        ;   Label: core_flame.cpp_CFlame_hide_FUN_0048df10
    MOV dword ptr [EAX + 0x288],0x0     ; 0048df14
    RET                                 ; 0048df1e


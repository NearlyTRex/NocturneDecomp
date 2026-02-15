; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_FUN_004caa70(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_crossbow.cpp_CCrossbow_process_FUN_00448d30 at 00448de0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004caa70
        ;   Label: core_flame.cpp_CFlame_FUN_004caa70
    MOV dword ptr [EAX + 0x290],0x0     ; 004caa74
    RET                                 ; 004caa7e


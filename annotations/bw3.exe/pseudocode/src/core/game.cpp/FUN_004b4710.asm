; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b4710(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004b7f90 at 004b829c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b4710
        ;   Label: core_game.cpp_FUN_004b4710
    MOV dword ptr [EAX + 0x43c],0x0     ; 004b4714
    MOV byte ptr [EAX + 0xb80],0x0      ; 004b471e
    MOV dword ptr [EAX + 0x434],0x0     ; 004b4725
    RET                                 ; 004b472f


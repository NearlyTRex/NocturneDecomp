; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004cc1f0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004cf5e0 at 004cf8ec
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cc1f0
        ;   Label: core_game.cpp_FUN_004cc1f0
    MOV dword ptr [EAX + 0x3bc],0x0     ; 004cc1f4
    MOV dword ptr [EAX + 0x3b4],0x0     ; 004cc1fe
    RET                                 ; 004cc208


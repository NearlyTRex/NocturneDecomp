; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b3200(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_FUN_004b6170 at 004b6483
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b3200
        ;   Label: core_game.cpp_FUN_004b3200
    MOV dword ptr [EAX + 0x3ac],0x0     ; 004b3204
    MOV dword ptr [EAX + 0x3a4],0x0     ; 004b320e
    RET                                 ; 004b3218


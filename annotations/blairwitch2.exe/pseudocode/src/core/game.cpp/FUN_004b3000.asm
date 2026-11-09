; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b3000(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_game.cpp_CGame_rollCredits_FUN_004be430 at 004be585
;   core_game.cpp_FUN_004b6170 at 004b6515
;   core_game.cpp_FUN_004bcbf0 at 004bd1ff
;   core_game.cpp_FUN_004bd570 at 004bdaa4
;   core_game.cpp_FUN_004bdfb0 at 004bdff8
;   core_menu.cpp_FUN_004ebf10 at 004ebf2f
;   core_menu.cpp_FUN_004ecc70 at 004ecc8f
;   core_menu.cpp_FUN_004ed260 at 004ed27f
;   core_menu.cpp_FUN_004ee1a0 at 004ee1c4
;   core_menu.cpp_FUN_004ee3f0 at 004ee4b8
;
; Called Functions:
;   wincore_winrun.cpp_FUN_0058e9e0
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 004b3000
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
        ;   Label: core_game.cpp_FUN_004b3000
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b3005
    MOV dword ptr [EDX + 0x27c],EAX     ; 004b3009
    RET                                 ; 004b300f


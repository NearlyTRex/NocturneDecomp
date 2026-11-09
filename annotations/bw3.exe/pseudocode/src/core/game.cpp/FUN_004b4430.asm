; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b4430(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c0393
;   core_game.cpp_FUN_004b7f90 at 004b8333
;   core_game.cpp_FUN_004bec20 at 004bf1ef
;   core_game.cpp_FUN_004bf4b0 at 004bf9bb
;   core_menu.cpp_FUN_004e85a0 at 004e85ba
;   core_menu.cpp_FUN_004e8f80 at 004e8f9f
;   core_menu.cpp_FUN_004e94f0 at 004e950f
;   core_menu.cpp_FUN_004ea280 at 004ea2a4
;   core_menu.cpp_FUN_004ea4d0 at 004ea598
;
; Called Functions:
;   wincore_winrun.cpp_FUN_005806a0
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_FUN_005806a0 ; 004b4430
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
        ;   Label: core_game.cpp_FUN_004b4430
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b4435
    MOV dword ptr [EDX + 0x30c],EAX     ; 004b4439
    RET                                 ; 004b443f


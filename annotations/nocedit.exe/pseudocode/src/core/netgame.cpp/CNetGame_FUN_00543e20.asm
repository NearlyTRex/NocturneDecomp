; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_netgame_cpp_CNetGame_FUN_00543e20(void)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470 at 005427ca
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00543e20
        ;   Label: core_netgame.cpp_CNetGame_FUN_00543e20
    MOV EAX,dword ptr [ESP + 0x8]       ; 00543e24
    MOV EAX,dword ptr [EAX]             ; 00543e28
    MOV dword ptr [EDX],EAX             ; 00543e2a
    MOV EAX,EDX                         ; 00543e2c
    RET                                 ; 00543e2e


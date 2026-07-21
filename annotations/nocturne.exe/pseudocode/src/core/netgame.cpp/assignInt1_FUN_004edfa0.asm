; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl core_netgame_cpp_assignInt1_FUN_004edfa0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_004ec600 at 004ec958
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004edfa0
        ;   Label: core_netgame.cpp_assignInt1_FUN_004edfa0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004edfa4
    MOV EAX,dword ptr [EAX]             ; 004edfa8
    MOV dword ptr [EDX],EAX             ; 004edfaa
    MOV EAX,EDX                         ; 004edfac
    RET                                 ; 004edfae


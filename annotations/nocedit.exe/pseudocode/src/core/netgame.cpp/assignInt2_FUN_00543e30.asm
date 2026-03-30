; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_netgame_cpp_assignInt2_FUN_00543e30(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_swapPlayerData_FUN_00543bb0 at 00543be5
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00543e30
        ;   Label: core_netgame.cpp_assignInt2_FUN_00543e30
    MOV EAX,dword ptr [ESP + 0x8]       ; 00543e34
    MOV EAX,dword ptr [EAX]             ; 00543e38
    MOV dword ptr [EDX],EAX             ; 00543e3a
    MOV EAX,EDX                         ; 00543e3c
    RET                                 ; 00543e3e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_netgame_cpp_FUN_004edfb0(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_swapPlayerData_FUN_004edd30 at 004edd65
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004edfb0
        ;   Label: core_netgame.cpp_FUN_004edfb0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004edfb4
    MOV EAX,dword ptr [EAX]             ; 004edfb8
    MOV dword ptr [EDX],EAX             ; 004edfba
    MOV EAX,EDX                         ; 004edfbc
    RET                                 ; 004edfbe


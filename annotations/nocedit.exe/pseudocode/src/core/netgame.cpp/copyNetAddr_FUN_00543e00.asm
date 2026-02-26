; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_copyNetAddr_FUN_00543e00(SNetworkAddr *dest,SNetworkAddr *src)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   dest
; SNetworkAddr *   Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00543e00
        ;   Label: core_netgame.cpp_copyNetAddr_FUN_00543e00
    MOV ECX,dword ptr [ESP + 0x8]       ; 00543e04
    MOV EDX,dword ptr [ECX]             ; 00543e08
    MOV dword ptr [EAX],EDX             ; 00543e0a
    MOV DX,word ptr [ECX + 0x4]         ; 00543e0c
    MOV word ptr [EAX + 0x4],DX         ; 00543e10
    RET                                 ; 00543e14


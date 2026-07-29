; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_copyNetAddr_FUN_004edf80(SNetworkAddr *dest,SNetworkAddr *src)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   dest
; SNetworkAddr *   Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edf80
        ;   Label: core_netgame.cpp_copyNetAddr_FUN_004edf80
    MOV ECX,dword ptr [ESP + 0x8]       ; 004edf84
    MOV EDX,dword ptr [ECX]             ; 004edf88
    MOV dword ptr [EAX],EDX             ; 004edf8a
    MOV DX,word ptr [ECX + 0x4]         ; 004edf8c
    MOV word ptr [EAX + 0x4],DX         ; 004edf90
    RET                                 ; 004edf94


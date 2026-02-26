; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_matchPacketSize_FUN_00543ab0(SNetPacketHeader *a,SNetPacketHeader *b)
;
; Parameters:
; SNetPacketHeader * Stack[0x4]:4   a
; SNetPacketHeader * Stack[0x8]:4   b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00543ab0
        ;   Label: core_netgame.cpp_matchPacketSize_FUN_00543ab0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00543ab4
    MOV ECX,dword ptr [EDX]             ; 00543ab8
    MOV EAX,dword ptr [EAX]             ; 00543aba
    CMP EAX,ECX                         ; 00543abc
    SETZ AL                             ; 00543abe
    AND EAX,0xff                        ; 00543ac1
    RET                                 ; 00543ac6


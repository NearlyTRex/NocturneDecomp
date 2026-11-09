; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_isSocketValid_FUN_00579090(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190 at 0050c1d2
;   core_netgame.cpp_FUN_0050c130 at 0050c13d
;   support_trisock.cpp_CSocket_closeSocket_FUN_00579360 at 00579366
;   support_trisock.cpp_FUN_00579150 at 0057915f
;   support_trisock.cpp_FUN_0057b680 at 0057b6de
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00579090
        ;   Label: support_trisock.cpp_CSocket_isSocketValid_FUN_00579090
    CMP dword ptr [EAX],-0x1            ; 00579094
    SETNZ AL                            ; 00579097
    AND EAX,0xff                        ; 0057909a
    RET                                 ; 0057909f


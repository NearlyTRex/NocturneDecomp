; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_isSocketValid_FUN_0059c970(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360 at 0052d3a2
;   core_netgame.cpp_FUN_0052d300 at 0052d30d
;   support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40 at 0059cc46
;   support_trisock.cpp_FUN_0059ca30 at 0059ca3f
;   support_trisock.cpp_FUN_0059ed90 at 0059edbd
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c970
        ;   Label: support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970
    CMP dword ptr [EAX],-0x1            ; 0059c974
    SETNZ AL                            ; 0059c977
    AND EAX,0xff                        ; 0059c97a
    RET                                 ; 0059c97f


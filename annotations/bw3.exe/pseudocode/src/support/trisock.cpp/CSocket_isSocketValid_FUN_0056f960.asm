; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_isSocketValid_FUN_0056f960(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_00504c10 at 00504c1d
;   core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70 at 00504cb2
;   support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30 at 0056fc36
;   support_trisock.cpp_FUN_0056fa20 at 0056fa2f
;   support_trisock.cpp_FUN_00571d80 at 00571dad
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056f960
        ;   Label: support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960
    CMP dword ptr [EAX],-0x1            ; 0056f964
    SETNZ AL                            ; 0056f967
    AND EAX,0xff                        ; 0056f96a
    RET                                 ; 0056f96f


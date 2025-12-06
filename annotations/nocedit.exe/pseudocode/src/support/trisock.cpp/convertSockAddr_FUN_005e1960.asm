; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SOCKADDR_IN * support_trisock.cpp_convertSockAddr_FUN_005e1960(SOCKADDR_IN * dest_addr, SOCKADDR * src_addr)
;
; Parameters:
; SOCKADDR_IN *    Stack[0x4]:4   dest_addr
; SOCKADDR *       Stack[0x8]:4   src_addr
;
; XREF[3]:
;   support_trisock.cpp_acceptConnection_FUN_005e1d80 at 005e1dd2
;   support_trisock.cpp_getSocketName_FUN_005e1df0 at 005e1e28
;   support_trisock.cpp_receiveSocketData_FUN_005e1c20 at 005e1c82
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_006564f4
;   TerminatedCString s_sockaddr_is_not_of_AF_IN_0065650b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_wsock32.c_ntohs
;   support_trisock.cpp_copyIPAddress_FUN_005e16f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1960
        ;   Label: support_trisock.cpp_convertSockAddr_FUN_005e1960
    PUSH ESI                            ; 005e1961
    SUB ESP,0x4                         ; 005e1962
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e1965
    MOV ESI,dword ptr [ESP + 0x14]      ; 005e1969
    CMP word ptr [ESI],0x2              ; 005e196d
    JNZ 0x005e19a0                      ; 005e1971 | LAB_005e19a0
        ;   XREF to: 005e19a0 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005e1973
        ;   Label: LAB_005e1973
    MOV AX,word ptr [ESI + 0x2]         ; 005e1975
    PUSH EAX                            ; 005e1979
    CALL crt_wsock32.c_ntohs            ; 005e197a | ushort crt_wsock32.c_ntohs(ushort netshort)
        ;   XREF to: 00610f34 (UNCONDITIONAL_CALL)
    MOV word ptr [EBX + 0x4],AX         ; 005e197f
    LEA EAX,[ESI + 0x4]                 ; 005e1983
    PUSH EAX                            ; 005e1986
    LEA EAX,[ESP + 0x4]                 ; 005e1987
    PUSH EAX                            ; 005e198b
    CALL support_trisock.cpp_copyIPAddress_FUN_005e16f0 ; 005e198c | uint * support_trisock.cpp_copyIPAddress_FUN_005e16f0(uint * dest_ip, uint * src_ip)
        ;   XREF to: 005e16f0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX]             ; 005e1991
    ADD ESP,0x8                         ; 005e1993
    MOV dword ptr [EBX],EAX             ; 005e1996
    MOV EAX,EBX                         ; 005e1998
    ADD ESP,0x4                         ; 005e199a
    POP ESI                             ; 005e199d
    POP EBX                             ; 005e199e
    RET                                 ; 005e199f
    MOV EDX,0x6564f4                    ; 005e19a0 | = "..\\support\\trisock.cpp" | s_support_trisock_cpp_006564f4 = ..\support\trisock.cpp
        ;   Label: LAB_005e19a0
    MOV ECX,0xa5                        ; 005e19a5
    PUSH 0x65650b                       ; 005e19aa | = "sockaddr is not of AF_INET family!" | s_sockaddr_is_not_of_AF_IN_0065650b = sockaddr is not of AF_INET family!
    MOV dword ptr [0x02f0ca48],EDX      ; 005e19af | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005e19b5 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005e19bb | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e19c0
    JMP 0x005e1973                      ; 005e19c3 | LAB_005e1973
        ;   XREF to: 005e1973 (UNCONDITIONAL_JUMP)


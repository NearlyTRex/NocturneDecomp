; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_bindSocket_FUN_0059c980(CSocket *this_ptr,ushort port)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; ushort           Stack[0x8]:2   port
; Local Variables:
; undefined2       Stack[-0x10]:2  local_10
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_0052c970 at 0052c9c4
;   support_trisock.cpp_FUN_0059cf00 at 0059d04b
;
; Called Functions:
;   crt_wsock32.c_bind
;   crt_wsock32.c_htons
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0059c980
        ;   Label: support_trisock.cpp_CSocket_bindSocket_FUN_0059c980
    XOR EAX,EAX                         ; 0059c983
    MOV AX,word ptr [ESP + 0x18]        ; 0059c985
    MOV EDX,0x2                         ; 0059c98a
    PUSH EAX                            ; 0059c98f
    MOV word ptr [ESP + 0x4],DX         ; 0059c990
    CALL crt_wsock32.c_htons            ; 0059c995
        ;   XREF to: 005cf83e (UNCONDITIONAL_CALL)  ; ushort crt_wsock32.c_htons(ushort hostshort)
    PUSH 0x10                           ; 0059c99a
    MOV word ptr [ESP + 0x6],AX         ; 0059c99c
    LEA EAX,[ESP + 0x4]                 ; 0059c9a1
    XOR EDX,EDX                         ; 0059c9a5
    PUSH EAX                            ; 0059c9a7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0059c9a8
    MOV dword ptr [ESP + 0xc],EDX       ; 0059c9ac
    MOV ECX,dword ptr [EAX]             ; 0059c9b0
    PUSH ECX                            ; 0059c9b2
    CALL crt_wsock32.c_bind             ; 0059c9b3
        ;   XREF to: 005cf832 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_bind(SOCKET s, sockaddr * addr, int namelen)
    TEST EAX,EAX                        ; 0059c9b8
    SETZ AL                             ; 0059c9ba
    AND EAX,0xff                        ; 0059c9bd
    ADD ESP,0x10                        ; 0059c9c2
    RET                                 ; 0059c9c5


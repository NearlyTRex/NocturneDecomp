; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_bindSocket_FUN_0056f970(CSocket *this_ptr,ushort port)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; ushort           Stack[0x8]:2   port
; Local Variables:
; undefined2       Stack[-0x10]:2  local_10
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_00504270 at 005042c4
;
; Called Functions:
;   crt_wsock32.c_bind
;   crt_wsock32.c_htons
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0056f970
        ;   Label: support_trisock.cpp_CSocket_bindSocket_FUN_0056f970
    XOR EAX,EAX                         ; 0056f973
    MOV AX,word ptr [ESP + 0x18]        ; 0056f975
    MOV EDX,0x2                         ; 0056f97a
    PUSH EAX                            ; 0056f97f
    MOV word ptr [ESP + 0x4],DX         ; 0056f980
    CALL crt_wsock32.c_htons            ; 0056f985
        ;   XREF to: 005b25ce (UNCONDITIONAL_CALL)  ; ushort crt_wsock32.c_htons(ushort hostshort)
    PUSH 0x10                           ; 0056f98a
    MOV word ptr [ESP + 0x6],AX         ; 0056f98c
    LEA EAX,[ESP + 0x4]                 ; 0056f991
    XOR EDX,EDX                         ; 0056f995
    PUSH EAX                            ; 0056f997
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056f998
    MOV dword ptr [ESP + 0xc],EDX       ; 0056f99c
    MOV ECX,dword ptr [EAX]             ; 0056f9a0
    PUSH ECX                            ; 0056f9a2
    CALL crt_wsock32.c_bind             ; 0056f9a3
        ;   XREF to: 005b25c2 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_bind(SOCKET s, sockaddr * addr, int namelen)
    TEST EAX,EAX                        ; 0056f9a8
    SETZ AL                             ; 0056f9aa
    AND EAX,0xff                        ; 0056f9ad
    ADD ESP,0x10                        ; 0056f9b2
    RET                                 ; 0056f9b5


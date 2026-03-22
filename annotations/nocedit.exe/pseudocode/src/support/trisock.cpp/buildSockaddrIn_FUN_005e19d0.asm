; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SOCKADDR_IN * __stack_esi support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   net_addr
; Local Variables:
; undefined4[1524] Stack[-0x17f4]:6096  auStackY_17f4
; undefined4       Stack[-0x18]:4  local_18
; undefined4[2]    Stack[-0x10]:8  auStack_10
;
; XREF[2]:
;   support_trisock.cpp_connectSocket_FUN_005e1bd0 at 005e1bde
;   support_trisock.cpp_performSocketOperation_FUN_005e1ca0 at 005e1cde
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   crt_wsock32.c_htons
;   support_trisock.cpp_getIPAddress_FUN_005e1930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e19d0
        ;   Label: support_trisock.cpp_buildSockaddrIn_FUN_005e19d0
    PUSH EDI                            ; 005e19d1
    SUB ESP,0x10                        ; 005e19d2
    MOV EBX,ESI                         ; 005e19d5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005e19d7
    MOV EDX,0x2                         ; 005e19db
    XOR EAX,EAX                         ; 005e19e0
    MOV word ptr [ESP],DX               ; 005e19e2
    MOV AX,word ptr [ESI + 0x4]         ; 005e19e6
    PUSH EAX                            ; 005e19ea
    CALL crt_wsock32.c_htons            ; 005e19eb
        ;   XREF to: 00610f2e (UNCONDITIONAL_CALL)  ; ushort crt_wsock32.c_htons(ushort hostshort)
    PUSH ESI                            ; 005e19f0
    MOV word ptr [ESP + 0x6],AX         ; 005e19f1
    CALL support_trisock.cpp_getIPAddress_FUN_005e1930 ; 005e19f6
        ;   XREF to: 005e1930 (UNCONDITIONAL_CALL)  ; uint support_trisock.cpp_getIPAddress_FUN_005e1930(SNetworkAddr * net_addr)
    ADD ESP,0x4                         ; 005e19fb
    PUSH 0x8                            ; 005e19fe
    LEA EDX,[ESP + 0x4]                 ; 005e1a00
    PUSH 0x0                            ; 005e1a04
    MOV dword ptr [EDX + 0x4],EAX       ; 005e1a06
    LEA EAX,[EDX + 0x8]                 ; 005e1a09
    PUSH EAX                            ; 005e1a0c
    MOV EDI,EBX                         ; 005e1a0d
    LEA ESI,[ESP + 0xc]                 ; 005e1a0f
    CALL crt_memory.c_memset_FUN_005fde40 ; 005e1a13
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005e1a18
    JMP 0x00604f58                      ; 005e1a1b
        ;   XREF to: 00604f58 (UNCONDITIONAL_JUMP)  ; LAB_00604f58
    ADD ESP,0x10                        ; 005e1a21
        ;   Label: LAB_005e1a21
    POP EDI                             ; 005e1a24
    POP EBX                             ; 005e1a25
    RET                                 ; 005e1a26
    MOV ECX,dword ptr [ESI]             ; 00604f58
        ;   Label: LAB_00604f58
    MOV dword ptr [EDI],ECX             ; 00604f5a
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604f5c
    MOV dword ptr [EDI + 0x4],ECX       ; 00604f5f
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604f62
    MOV dword ptr [EDI + 0x8],ECX       ; 00604f65
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604f68
    MOV dword ptr [EDI + 0xc],ECX       ; 00604f6b
    ADD ESI,0x10                        ; 00604f6e
    ADD EDI,0x10                        ; 00604f71
    MOV EAX,EBX                         ; 00604f74
    JMP 0x005e1a21                      ; 00604f76
        ;   XREF to: 005e1a21 (UNCONDITIONAL_JUMP)  ; LAB_005e1a21


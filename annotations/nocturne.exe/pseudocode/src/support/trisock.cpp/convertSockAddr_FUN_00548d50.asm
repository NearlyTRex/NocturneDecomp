; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SOCKADDR_IN * __cdecl support_trisock_cpp_convertSockAddr_FUN_00548d50(SNetworkAddr *dest_addr,SOCKADDR *src_addr)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   dest_addr
; SOCKADDR *       Stack[0x8]:4   src_addr
;
; XREF[3]:
;   support_trisock.cpp_acceptConnection_FUN_00549170 at 005491c2
;   support_trisock.cpp_getSocketName_FUN_005491e0 at 00549218
;   support_trisock.cpp_receiveSocketData_FUN_00549010 at 00549072
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_00596c29
;   TerminatedCString s_sockaddr_is_not_of_AF_IN_00596c40
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   Ordinal_15
;   support_trisock.cpp_copyIPAddress_FUN_00548ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548d50
        ;   Label: support_trisock.cpp_convertSockAddr_FUN_00548d50
    PUSH ESI                            ; 00548d51
    SUB ESP,0x4                         ; 00548d52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00548d55
    MOV ESI,dword ptr [ESP + 0x14]      ; 00548d59
    CMP word ptr [ESI],0x2              ; 00548d5d
    JNZ 0x00548d90                      ; 00548d61
        ;   XREF to: 00548d90 (CONDITIONAL_JUMP)  ; LAB_00548d90
    XOR EAX,EAX                         ; 00548d63
        ;   Label: LAB_00548d63
    MOV AX,word ptr [ESI + 0x2]         ; 00548d65
    PUSH EAX                            ; 00548d69
    CALL Ordinal_15                     ; 00548d6a
        ;   XREF to: 00574c08 (UNCONDITIONAL_CALL)  ; undefined Ordinal_15()
    MOV word ptr [EBX + 0x4],AX         ; 00548d6f
    LEA EAX,[ESI + 0x4]                 ; 00548d73
    PUSH EAX                            ; 00548d76
    LEA EAX,[ESP + 0x4]                 ; 00548d77
    PUSH EAX                            ; 00548d7b
    CALL support_trisock.cpp_copyIPAddress_FUN_00548ae0 ; 00548d7c
        ;   XREF to: 00548ae0 (UNCONDITIONAL_CALL)  ; uint * support_trisock.cpp_copyIPAddress_FUN_00548ae0(uint * dest_ip, uint * src_ip)
    MOV EAX,dword ptr [EAX]             ; 00548d81
    ADD ESP,0x8                         ; 00548d83
    MOV dword ptr [EBX],EAX             ; 00548d86
    MOV EAX,EBX                         ; 00548d88
    ADD ESP,0x4                         ; 00548d8a
    POP ESI                             ; 00548d8d
    POP EBX                             ; 00548d8e
    RET                                 ; 00548d8f
    MOV EDX,0x596c29                    ; 00548d90 | = "..\\support\\trisock.cpp"
        ;   Label: LAB_00548d90
    MOV ECX,0xa5                        ; 00548d95
    PUSH 0x596c40                       ; 00548d9a | = "sockaddr is not of AF_INET family!"
    MOV dword ptr [0x01cc4800],EDX      ; 00548d9f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00548da5 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00548dab
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00548db0
    JMP 0x00548d63                      ; 00548db3
        ;   XREF to: 00548d63 (UNCONDITIONAL_JUMP)  ; LAB_00548d63


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_buildSockaddrIn_FUN_00548dc0(SNetworkAddr *param_1)
;
; Local Variables:
; undefined2       Stack[-0x18]:2  local_18
;
; XREF[2]:
;   support_trisock.cpp_connectSocket_FUN_00548fc0 at 00548fce
;   support_trisock.cpp_performSocketOperation_FUN_00549090 at 005490ce
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;   Ordinal_9
;   support_trisock.cpp_getIPAddress_FUN_00548d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548dc0
        ;   Label: support_trisock.cpp_buildSockaddrIn_FUN_00548dc0
    PUSH EDI                            ; 00548dc1
    SUB ESP,0x10                        ; 00548dc2
    MOV EBX,ESI                         ; 00548dc5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00548dc7
    MOV EDX,0x2                         ; 00548dcb
    XOR EAX,EAX                         ; 00548dd0
    MOV word ptr [ESP],DX               ; 00548dd2
    MOV AX,word ptr [ESI + 0x4]         ; 00548dd6
    PUSH EAX                            ; 00548dda
    CALL Ordinal_9                      ; 00548ddb
        ;   XREF to: 00574c02 (UNCONDITIONAL_CALL)  ; undefined Ordinal_9()
    PUSH ESI                            ; 00548de0
    MOV word ptr [ESP + 0x6],AX         ; 00548de1
    CALL support_trisock.cpp_getIPAddress_FUN_00548d20 ; 00548de6
        ;   XREF to: 00548d20 (UNCONDITIONAL_CALL)  ; uint support_trisock.cpp_getIPAddress_FUN_00548d20(SNetworkAddr * net_addr)
    ADD ESP,0x4                         ; 00548deb
    PUSH 0x8                            ; 00548dee
    LEA EDX,[ESP + 0x4]                 ; 00548df0
    PUSH 0x0                            ; 00548df4
    MOV dword ptr [EDX + 0x4],EAX       ; 00548df6
    LEA EAX,[EDX + 0x8]                 ; 00548df9
    PUSH EAX                            ; 00548dfc
    MOV EDI,EBX                         ; 00548dfd
    LEA ESI,[ESP + 0xc]                 ; 00548dff
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00548e03
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00548e08
    MOVSD ES:EDI,ESI                    ; 00548e0b
    MOVSD ES:EDI,ESI                    ; 00548e0c
    MOVSD ES:EDI,ESI                    ; 00548e0d
    MOVSD ES:EDI,ESI                    ; 00548e0e
    MOV EAX,EBX                         ; 00548e0f
    ADD ESP,0x10                        ; 00548e11
    POP EDI                             ; 00548e14
    POP EBX                             ; 00548e15
    RET                                 ; 00548e16


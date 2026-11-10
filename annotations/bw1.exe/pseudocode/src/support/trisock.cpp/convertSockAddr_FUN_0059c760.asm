; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * __cdecl support_trisock_cpp_convertSockAddr_FUN_0059c760(uint *param_1,short *param_2)
;
;
; XREF[2]:
;   support_trisock.cpp_CSocket_getSocketName_FUN_0059cd10 at 0059cd48
;   support_trisock.cpp_CSocket_receiveSocketData_FUN_0059cb20 at 0059cb88
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_005f832e
;   TerminatedCString s_sockaddr_is_not_of_AF_IN_005f8345
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_wsock32.c_ntohs
;   support_trisock.cpp_copyIPAddress_FUN_0059c4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c760
        ;   Label: support_trisock.cpp_convertSockAddr_FUN_0059c760
    PUSH ESI                            ; 0059c761
    SUB ESP,0x4                         ; 0059c762
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059c765
    MOV ESI,dword ptr [ESP + 0x14]      ; 0059c769
    CMP word ptr [ESI],0x2              ; 0059c76d
    JNZ 0x0059c7a0                      ; 0059c771
        ;   XREF to: 0059c7a0 (CONDITIONAL_JUMP)  ; LAB_0059c7a0
    XOR EAX,EAX                         ; 0059c773
        ;   Label: LAB_0059c773
    MOV AX,word ptr [ESI + 0x2]         ; 0059c775
    PUSH EAX                            ; 0059c779
    CALL crt_wsock32.c_ntohs            ; 0059c77a
        ;   XREF to: 005cf844 (UNCONDITIONAL_CALL)  ; ushort crt_wsock32.c_ntohs(ushort netshort)
    MOV word ptr [EBX + 0x4],AX         ; 0059c77f
    LEA EAX,[ESI + 0x4]                 ; 0059c783
    PUSH EAX                            ; 0059c786
    LEA EAX,[ESP + 0x4]                 ; 0059c787
    PUSH EAX                            ; 0059c78b
    CALL support_trisock.cpp_copyIPAddress_FUN_0059c4c0 ; 0059c78c
        ;   XREF to: 0059c4c0 (UNCONDITIONAL_CALL)  ; uint * support_trisock.cpp_copyIPAddress_FUN_0059c4c0(uint * dest_ip, uint * src_ip)
    MOV EAX,dword ptr [EAX]             ; 0059c791
    ADD ESP,0x8                         ; 0059c793
    MOV dword ptr [EBX],EAX             ; 0059c796
    MOV EAX,EBX                         ; 0059c798
    ADD ESP,0x4                         ; 0059c79a
    POP ESI                             ; 0059c79d
    POP EBX                             ; 0059c79e
    RET                                 ; 0059c79f
    MOV EDX,0x5f832e                    ; 0059c7a0 | = "..\\support\\trisock.cpp"
        ;   Label: LAB_0059c7a0
    MOV ECX,0xd8                        ; 0059c7a5
    PUSH 0x5f8345                       ; 0059c7aa | = "sockaddr is not of AF_INET family!"
    MOV dword ptr [0x01d1d400],EDX      ; 0059c7af | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0059c7b5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0059c7bb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0059c7c0
    JMP 0x0059c773                      ; 0059c7c3
        ;   XREF to: 0059c773 (UNCONDITIONAL_JUMP)  ; LAB_0059c773


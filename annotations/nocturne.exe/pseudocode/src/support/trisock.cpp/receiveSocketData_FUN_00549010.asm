; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_receiveSocketData_FUN_00549010(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *source_addr)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   length
; SNetworkAddr *   Stack[0x10]:4   source_addr
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_004ea6e0 at 004ea71e
;   core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740 at 004ea7ad
;
; Called Functions:
;   Ordinal_16
;   Ordinal_17
;   support_trisock.cpp_convertSockAddr_FUN_00548d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00549010
        ;   Label: support_trisock.cpp_receiveSocketData_FUN_00549010
    PUSH ESI                            ; 00549011
    PUSH EDI                            ; 00549012
    PUSH EBP                            ; 00549013
    SUB ESP,0x1c                        ; 00549014
    MOV EDX,dword ptr [ESP + 0x30]      ; 00549017
    MOV ECX,dword ptr [ESP + 0x34]      ; 0054901b
    MOV EBX,dword ptr [ESP + 0x38]      ; 0054901f
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00549023
    TEST EDI,EDI                        ; 00549027
    JNZ 0x00549045                      ; 00549029
        ;   XREF to: 00549045 (CONDITIONAL_JUMP)  ; LAB_00549045
    PUSH EDI                            ; 0054902b
    PUSH EBX                            ; 0054902c
    PUSH ECX                            ; 0054902d
    MOV ECX,dword ptr [EDX]             ; 0054902e
    PUSH ECX                            ; 00549030
    CALL Ordinal_16                     ; 00549031
        ;   XREF to: 00574bea (UNCONDITIONAL_CALL)  ; undefined Ordinal_16()
    MOV EBX,EAX                         ; 00549036
    CMP EBX,-0x1                        ; 00549038
        ;   Label: LAB_00549038
    MOV EAX,EBX                         ; 0054903b
    ADD ESP,0x1c                        ; 0054903d
    POP EBP                             ; 00549040
    POP EDI                             ; 00549041
    POP ESI                             ; 00549042
    POP EBX                             ; 00549043
    RET                                 ; 00549044
    LEA EAX,[ESP + 0x18]                ; 00549045
        ;   Label: LAB_00549045
    PUSH EAX                            ; 00549049
    LEA EAX,[ESP + 0x4]                 ; 0054904a
    PUSH EAX                            ; 0054904e
    PUSH 0x0                            ; 0054904f
    MOV ESI,0x10                        ; 00549051
    PUSH EBX                            ; 00549056
    MOV dword ptr [ESP + 0x28],ESI      ; 00549057
    PUSH ECX                            ; 0054905b
    MOV EBP,dword ptr [EDX]             ; 0054905c
    PUSH EBP                            ; 0054905e
    CALL Ordinal_17                     ; 0054905f
        ;   XREF to: 00574be4 (UNCONDITIONAL_CALL)  ; undefined Ordinal_17()
    MOV EBX,EAX                         ; 00549064
    TEST EAX,EAX                        ; 00549066
    JLE 0x00549038                      ; 00549068
        ;   XREF to: 00549038 (CONDITIONAL_JUMP)  ; LAB_00549038
    MOV EAX,ESP                         ; 0054906a
    PUSH EAX                            ; 0054906c
    LEA EAX,[ESP + 0x14]                ; 0054906d
    PUSH EAX                            ; 00549071
    CALL support_trisock.cpp_convertSockAddr_FUN_00548d50 ; 00549072
        ;   XREF to: 00548d50 (UNCONDITIONAL_CALL)  ; SOCKADDR_IN * support_trisock.cpp_convertSockAddr_FUN_00548d50(SNetworkAddr * dest_addr, SOCKADDR * src_addr)
    MOV ESI,EAX                         ; 00549077
    ADD ESP,0x8                         ; 00549079
    MOVSD ES:EDI,ESI                    ; 0054907c
    MOVSD ES:EDI,ESI                    ; 0054907d
    CMP EBX,-0x1                        ; 0054907e
    MOV EAX,EBX                         ; 00549081
    ADD ESP,0x1c                        ; 00549083
    POP EBP                             ; 00549086
    POP EDI                             ; 00549087
    POP ESI                             ; 00549088
    POP EBX                             ; 00549089
    RET                                 ; 0054908a


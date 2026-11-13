; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_sendSocketData_FUN_0056fbb0(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *dest_addr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   length
; SNetworkAddr *   Stack[0x10]:4   dest_addr
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[3]:
;   core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0 at 005058ed
;   support_trisock.cpp_FUN_00570750 at 005707ef
;   support_trisock.cpp_FUN_00570840 at 00570910
;
; Called Functions:
;   crt_wsock32.c_send
;   crt_wsock32.c_sendto
;   support_trisock.cpp_buildSockaddrIn_FUN_0056f7c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0056fbb0
        ;   Label: support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0
    PUSH EDI                            ; 0056fbb1
    PUSH EBP                            ; 0056fbb2
    SUB ESP,0x20                        ; 0056fbb3
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0056fbb6
    TEST ESI,ESI                        ; 0056fbba
    JNZ 0x0056fbe5                      ; 0056fbbc
        ;   XREF to: 0056fbe5 (CONDITIONAL_JUMP)  ; LAB_0056fbe5
    PUSH EBX                            ; 0056fbbe
    PUSH ESI                            ; 0056fbbf
    MOV EDX,dword ptr [ESP + 0x40]      ; 0056fbc0
    PUSH EDX                            ; 0056fbc4
    MOV ECX,dword ptr [ESP + 0x40]      ; 0056fbc5
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0056fbc9
    PUSH ECX                            ; 0056fbcd
    MOV EBX,dword ptr [ESI]             ; 0056fbce
    PUSH EBX                            ; 0056fbd0
    CALL crt_wsock32.c_send             ; 0056fbd1
        ;   XREF to: 005b259e (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_send(_SOCKET s, char * buf, int len, int flags)
    MOV ESI,EAX                         ; 0056fbd6
    POP EBX                             ; 0056fbd8
    CMP ESI,-0x1                        ; 0056fbd9
    MOV EAX,ESI                         ; 0056fbdc
    ADD ESP,0x20                        ; 0056fbde
    POP EBP                             ; 0056fbe1
    POP EDI                             ; 0056fbe2
    POP ESI                             ; 0056fbe3
    RET                                 ; 0056fbe4
    PUSH ESI                            ; 0056fbe5
        ;   Label: LAB_0056fbe5
    LEA ESI,[ESP + 0x4]                 ; 0056fbe6
    LEA EDI,[ESP + 0x14]                ; 0056fbea
    CALL support_trisock.cpp_buildSockaddrIn_FUN_0056f7c0 ; 0056fbee
        ;   XREF to: 0056f7c0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildSockaddrIn_FUN_0056f7c0()
    LEA ESI,[ESP + 0x4]                 ; 0056fbf3
    ADD ESP,0x4                         ; 0056fbf7
    MOVSD ES:EDI,ESI                    ; 0056fbfa
    MOVSD ES:EDI,ESI                    ; 0056fbfb
    MOVSD ES:EDI,ESI                    ; 0056fbfc
    MOVSD ES:EDI,ESI                    ; 0056fbfd
    PUSH 0x10                           ; 0056fbfe
    LEA ESI,[ESP + 0x14]                ; 0056fc00
    PUSH ESI                            ; 0056fc04
    PUSH 0x0                            ; 0056fc05
    MOV ESI,dword ptr [ESP + 0x44]      ; 0056fc07
    PUSH ESI                            ; 0056fc0b
    MOV EDI,dword ptr [ESP + 0x44]      ; 0056fc0c
    MOV ESI,dword ptr [ESP + 0x40]      ; 0056fc10
    PUSH EDI                            ; 0056fc14
    MOV EBP,dword ptr [ESI]             ; 0056fc15
    PUSH EBP                            ; 0056fc17
    CALL crt_wsock32.c_sendto           ; 0056fc18
        ;   XREF to: 005b2598 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_sendto(SOCKET s, char * buf, int len, int flags, ...)
    MOV ESI,EAX                         ; 0056fc1d
    CMP ESI,-0x1                        ; 0056fc1f
    MOV EAX,ESI                         ; 0056fc22
    ADD ESP,0x20                        ; 0056fc24
    POP EBP                             ; 0056fc27
    POP EDI                             ; 0056fc28
    POP ESI                             ; 0056fc29
    RET                                 ; 0056fc2a


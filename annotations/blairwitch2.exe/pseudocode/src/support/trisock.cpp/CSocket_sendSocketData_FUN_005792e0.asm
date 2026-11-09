; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_sendSocketData_FUN_005792e0(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *dest_addr)
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
;   core_netgame.cpp_CNetGame_sendPacket_FUN_0050cdf0 at 0050ce0d
;   support_trisock.cpp_FUN_0057a0ec at 0057a18f
;   support_trisock.cpp_FUN_0057a1e0 at 0057a2b0
;
; Called Functions:
;   crt_wsock32.c_send
;   crt_wsock32.c_sendto
;   support_trisock.cpp_buildSockaddrIn_FUN_00578ef0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005792e0
        ;   Label: support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0
    PUSH EDI                            ; 005792e1
    PUSH EBP                            ; 005792e2
    SUB ESP,0x20                        ; 005792e3
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005792e6
    TEST ESI,ESI                        ; 005792ea
    JNZ 0x00579315                      ; 005792ec
        ;   XREF to: 00579315 (CONDITIONAL_JUMP)  ; LAB_00579315
    PUSH EBX                            ; 005792ee
    PUSH ESI                            ; 005792ef
    MOV EDX,dword ptr [ESP + 0x40]      ; 005792f0
    PUSH EDX                            ; 005792f4
    MOV ECX,dword ptr [ESP + 0x40]      ; 005792f5
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005792f9
    PUSH ECX                            ; 005792fd
    MOV EBX,dword ptr [ESI]             ; 005792fe
    PUSH EBX                            ; 00579300
    CALL crt_wsock32.c_send             ; 00579301
        ;   XREF to: 005c74fc (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_send(_SOCKET s, char * buf, int len, int flags)
    MOV ESI,EAX                         ; 00579306
    POP EBX                             ; 00579308
    CMP ESI,-0x1                        ; 00579309
    MOV EAX,ESI                         ; 0057930c
    ADD ESP,0x20                        ; 0057930e
    POP EBP                             ; 00579311
    POP EDI                             ; 00579312
    POP ESI                             ; 00579313
    RET                                 ; 00579314
    PUSH ESI                            ; 00579315
        ;   Label: LAB_00579315
    LEA ESI,[ESP + 0x4]                 ; 00579316
    LEA EDI,[ESP + 0x14]                ; 0057931a
    CALL support_trisock.cpp_buildSockaddrIn_FUN_00578ef0 ; 0057931e
        ;   XREF to: 00578ef0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildSockaddrIn_FUN_00578ef0()
    LEA ESI,[ESP + 0x4]                 ; 00579323
    ADD ESP,0x4                         ; 00579327
    MOVSD ES:EDI,ESI                    ; 0057932a
    MOVSD ES:EDI,ESI                    ; 0057932b
    MOVSD ES:EDI,ESI                    ; 0057932c
    MOVSD ES:EDI,ESI                    ; 0057932d
    PUSH 0x10                           ; 0057932e
    LEA ESI,[ESP + 0x14]                ; 00579330
    PUSH ESI                            ; 00579334
    PUSH 0x0                            ; 00579335
    MOV ESI,dword ptr [ESP + 0x44]      ; 00579337
    PUSH ESI                            ; 0057933b
    MOV EDI,dword ptr [ESP + 0x44]      ; 0057933c
    MOV ESI,dword ptr [ESP + 0x40]      ; 00579340
    PUSH EDI                            ; 00579344
    MOV EBP,dword ptr [ESI]             ; 00579345
    PUSH EBP                            ; 00579347
    CALL crt_wsock32.c_sendto           ; 00579348
        ;   XREF to: 005c74f6 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_sendto(SOCKET s, char * buf, int len, int flags, ...)
    MOV ESI,EAX                         ; 0057934d
    CMP ESI,-0x1                        ; 0057934f
    MOV EAX,ESI                         ; 00579352
    ADD ESP,0x20                        ; 00579354
    POP EBP                             ; 00579357
    POP EDI                             ; 00579358
    POP ESI                             ; 00579359
    RET                                 ; 0057935a


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_receiveSocketData_FUN_00579240(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *source_addr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   length
; SNetworkAddr *   Stack[0x10]:4   source_addr
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_0050c130 at 0050c16e
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190 at 0050c1fd
;   support_trisock.cpp_FUN_00579cf0 at 00579d64
;   support_trisock.cpp_FUN_0057b680 at 0057b711
;
; Called Functions:
;   crt_wsock32.c_recv
;   crt_wsock32.c_recvfrom
;   crt_wsock32.c_WSAGetLastError
;   support_trisock.cpp_convertSockAddr_FUN_00578e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579240
        ;   Label: support_trisock.cpp_CSocket_receiveSocketData_FUN_00579240
    PUSH ESI                            ; 00579241
    PUSH EDI                            ; 00579242
    PUSH EBP                            ; 00579243
    SUB ESP,0x1c                        ; 00579244
    MOV ECX,dword ptr [ESP + 0x30]      ; 00579247
    MOV EDX,dword ptr [ESP + 0x34]      ; 0057924b
    MOV EBX,dword ptr [ESP + 0x38]      ; 0057924f
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00579253
    TEST EDI,EDI                        ; 00579257
    JNZ 0x0057927b                      ; 00579259
        ;   XREF to: 0057927b (CONDITIONAL_JUMP)  ; LAB_0057927b
    PUSH EDI                            ; 0057925b
    PUSH EBX                            ; 0057925c
    PUSH EDX                            ; 0057925d
    MOV EDX,dword ptr [ECX]             ; 0057925e
    PUSH EDX                            ; 00579260
    CALL crt_wsock32.c_recv             ; 00579261
        ;   XREF to: 005c7508 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_recv(_SOCKET s, char * buf, int len, int flags)
    MOV EBX,EAX                         ; 00579266
    TEST EBX,EBX                        ; 00579268
        ;   Label: LAB_00579268
    JZ 0x005792b6                       ; 0057926a
        ;   XREF to: 005792b6 (CONDITIONAL_JUMP)  ; LAB_005792b6
    CMP EBX,-0x1                        ; 0057926c
    JZ 0x005792bd                       ; 0057926f
        ;   XREF to: 005792bd (CONDITIONAL_JUMP)  ; LAB_005792bd
    MOV EAX,EBX                         ; 00579271
        ;   Label: LAB_00579271
    ADD ESP,0x1c                        ; 00579273
        ;   Label: LAB_00579273
    POP EBP                             ; 00579276
    POP EDI                             ; 00579277
    POP ESI                             ; 00579278
    POP EBX                             ; 00579279
    RET                                 ; 0057927a
    LEA EAX,[ESP + 0x18]                ; 0057927b
        ;   Label: LAB_0057927b
    PUSH EAX                            ; 0057927f
    LEA EAX,[ESP + 0x4]                 ; 00579280
    PUSH EAX                            ; 00579284
    PUSH 0x0                            ; 00579285
    MOV ESI,0x10                        ; 00579287
    PUSH EBX                            ; 0057928c
    MOV dword ptr [ESP + 0x28],ESI      ; 0057928d
    PUSH EDX                            ; 00579291
    MOV EBP,dword ptr [ECX]             ; 00579292
    PUSH EBP                            ; 00579294
    CALL crt_wsock32.c_recvfrom         ; 00579295
        ;   XREF to: 005c7502 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_recvfrom(SOCKET s, char * buf, int len, int flags, ...)
    MOV EBX,EAX                         ; 0057929a
    TEST EAX,EAX                        ; 0057929c
    JLE 0x00579268                      ; 0057929e
        ;   XREF to: 00579268 (CONDITIONAL_JUMP)  ; LAB_00579268
    MOV EAX,ESP                         ; 005792a0
    PUSH EAX                            ; 005792a2
    LEA EAX,[ESP + 0x14]                ; 005792a3
    PUSH EAX                            ; 005792a7
    CALL support_trisock.cpp_convertSockAddr_FUN_00578e80 ; 005792a8
        ;   XREF to: 00578e80 (UNCONDITIONAL_CALL)  ; SOCKADDR_IN * support_trisock.cpp_convertSockAddr_FUN_00578e80(SNetworkAddr * dest_addr, SOCKADDR * src_addr)
    MOV ESI,EAX                         ; 005792ad
    ADD ESP,0x8                         ; 005792af
    MOVSD ES:EDI,ESI                    ; 005792b2
    MOVSD ES:EDI,ESI                    ; 005792b3
    JMP 0x00579268                      ; 005792b4
        ;   XREF to: 00579268 (UNCONDITIONAL_JUMP)  ; LAB_00579268
    MOV EAX,0xfffffffe                  ; 005792b6
        ;   Label: LAB_005792b6
    JMP 0x00579273                      ; 005792bb
        ;   XREF to: 00579273 (UNCONDITIONAL_JUMP)  ; LAB_00579273
    CALL crt_wsock32.c_WSAGetLastError  ; 005792bd
        ;   XREF to: 005c7544 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_WSAGetLastError()
        ;   Label: LAB_005792bd
    CMP EAX,0x2733                      ; 005792c2
    JNZ 0x00579271                      ; 005792c7
        ;   XREF to: 00579271 (CONDITIONAL_JUMP)  ; LAB_00579271
    XOR EAX,EAX                         ; 005792c9
    ADD ESP,0x1c                        ; 005792cb
    POP EBP                             ; 005792ce
    POP EDI                             ; 005792cf
    POP ESI                             ; 005792d0
    POP EBX                             ; 005792d1
    RET                                 ; 005792d2


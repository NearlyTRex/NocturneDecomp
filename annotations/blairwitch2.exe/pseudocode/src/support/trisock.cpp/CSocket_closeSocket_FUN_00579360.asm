; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_closeSocket_FUN_00579360(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_netgame.cpp_CNetGame_shutdown_FUN_0050b3f0 at 0050b409
;   core_netgame.cpp_FUN_0050b790 at 0050b7b2
;   support_trisock.cpp_CSocket_createSocket_FUN_00579030 at 00579036
;   support_trisock.cpp_CSocket_createUDPSocket_FUN_00579060 at 00579066
;   support_trisock.cpp_CSocket_dtor_FUN_00579010 at 00579016
;   support_trisock.cpp_FUN_0057ad10 at 0057ae17
;
; Called Functions:
;   crt_wsock32.c_closesocket
;   support_trisock.cpp_CSocket_isSocketValid_FUN_00579090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579360
        ;   Label: support_trisock.cpp_CSocket_closeSocket_FUN_00579360
    MOV EBX,dword ptr [ESP + 0x8]       ; 00579361
    PUSH EBX                            ; 00579365
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_00579090 ; 00579366
        ;   XREF to: 00579090 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_00579090(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057936b
    TEST EAX,EAX                        ; 0057936e
    JNZ 0x00579379                      ; 00579370
        ;   XREF to: 00579379 (CONDITIONAL_JUMP)  ; LAB_00579379
    MOV EAX,0x1                         ; 00579372
    POP EBX                             ; 00579377
    RET                                 ; 00579378
    MOV EDX,dword ptr [EBX]             ; 00579379
        ;   Label: LAB_00579379
    PUSH EDX                            ; 0057937b
    CALL crt_wsock32.c_closesocket      ; 0057937c
        ;   XREF to: 005c74f0 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_closesocket(_SOCKET s)
    TEST EAX,EAX                        ; 00579381
    SETZ AL                             ; 00579383
    AND EAX,0xff                        ; 00579386
    MOV dword ptr [EBX],0xffffffff      ; 0057938b
    POP EBX                             ; 00579391
    RET                                 ; 00579392


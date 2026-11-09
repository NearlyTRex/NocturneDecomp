; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_closeSocket_FUN_0059cc40(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_netgame.cpp_FUN_0052c5d0 at 0052c5e9
;   core_netgame.cpp_FUN_0052c970 at 0052c992
;   support_trisock.cpp_CSocket_createSocket_FUN_0059c910 at 0059c916
;   support_trisock.cpp_CSocket_createUDPSocket_FUN_0059c940 at 0059c946
;   support_trisock.cpp_CSocket_dtor_FUN_0059c8f0 at 0059c8f6
;   support_trisock.cpp_FUN_0059e350 at 0059e457
;
; Called Functions:
;   crt_wsock32.c_closesocket
;   support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059cc40
        ;   Label: support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059cc41
    PUSH EBX                            ; 0059cc45
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970 ; 0059cc46
        ;   XREF to: 0059c970 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059cc4b
    TEST EAX,EAX                        ; 0059cc4e
    JNZ 0x0059cc59                      ; 0059cc50
        ;   XREF to: 0059cc59 (CONDITIONAL_JUMP)  ; LAB_0059cc59
    MOV EAX,0x1                         ; 0059cc52
    POP EBX                             ; 0059cc57
    RET                                 ; 0059cc58
    MOV EDX,dword ptr [EBX]             ; 0059cc59
        ;   Label: LAB_0059cc59
    PUSH EDX                            ; 0059cc5b
    CALL crt_wsock32.c_closesocket      ; 0059cc5c
        ;   XREF to: 005cf802 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_closesocket(_SOCKET s)
    TEST EAX,EAX                        ; 0059cc61
    SETZ AL                             ; 0059cc63
    AND EAX,0xff                        ; 0059cc66
    MOV dword ptr [EBX],0xffffffff      ; 0059cc6b
    POP EBX                             ; 0059cc71
    RET                                 ; 0059cc72


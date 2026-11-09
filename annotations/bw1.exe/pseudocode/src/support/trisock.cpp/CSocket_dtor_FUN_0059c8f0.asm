; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_0059c8f0(CSocket *this_ptr,uint flags)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_dtor_FUN_0052c500 at 0052c50c
;
; Called Functions:
;   support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c8f0
        ;   Label: support_trisock.cpp_CSocket_dtor_FUN_0059c8f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c8f1
    PUSH EBX                            ; 0059c8f5
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40 ; 0059c8f6
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059c8fb
    MOV EAX,EBX                         ; 0059c8fe
    POP EBX                             ; 0059c900
    RET                                 ; 0059c901


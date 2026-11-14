; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_0056f8e0(CSocket *this_ptr,uint flags)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_dtor_FUN_00503e00 at 00503e0c
;   support_trisock.cpp_FUN_0056fef0 at 00570087
;
; Called Functions:
;   support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f8e0
        ;   Label: support_trisock.cpp_CSocket_dtor_FUN_0056f8e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f8e1
    PUSH EBX                            ; 0056f8e5
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30 ; 0056f8e6
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0056f8eb
    MOV EAX,EBX                         ; 0056f8ee
    POP EBX                             ; 0056f8f0
    RET                                 ; 0056f8f1


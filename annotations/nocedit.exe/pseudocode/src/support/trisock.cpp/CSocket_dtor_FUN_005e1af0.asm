; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_005e1af0(CSocket *this_ptr,uint flags)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_dtor_FUN_0053f760 at 0053f76c
;
; Called Functions:
;   support_trisock.cpp_CSocket_closeSocket_FUN_005e1d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1af0
        ;   Label: support_trisock.cpp_CSocket_dtor_FUN_005e1af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e1af1
    PUSH EBX                            ; 005e1af5
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_005e1d20 ; 005e1af6
        ;   XREF to: 005e1d20 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_005e1d20(CSocket * this_ptr)
    ADD ESP,0x4                         ; 005e1afb
    MOV EAX,EBX                         ; 005e1afe
    POP EBX                             ; 005e1b00
    RET                                 ; 005e1b01


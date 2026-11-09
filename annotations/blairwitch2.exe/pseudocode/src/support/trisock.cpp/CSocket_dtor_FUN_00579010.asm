; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSocket * __cdecl support_trisock_cpp_CSocket_dtor_FUN_00579010(CSocket *this_ptr,uint flags)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_dtor_FUN_0050b320 at 0050b32c
;
; Called Functions:
;   support_trisock.cpp_CSocket_closeSocket_FUN_00579360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579010
        ;   Label: support_trisock.cpp_CSocket_dtor_FUN_00579010
    MOV EBX,dword ptr [ESP + 0x8]       ; 00579011
    PUSH EBX                            ; 00579015
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_00579360 ; 00579016
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_00579360(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0057901b
    MOV EAX,EBX                         ; 0057901e
    POP EBX                             ; 00579020
    RET                                 ; 00579021


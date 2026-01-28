; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_0053f760(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   support_trisock.cpp_bindSocketWrapper_FUN_005e1af0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053f760
        ;   Label: core_netgame.cpp_CNetGame_dtor_FUN_0053f760
    PUSH 0x0                            ; 0053f764
    ADD EAX,0x170                       ; 0053f766
    PUSH EAX                            ; 0053f76b
    CALL support_trisock.cpp_bindSocketWrapper_FUN_005e1af0 ; 0053f76c
        ;   XREF to: 005e1af0 (UNCONDITIONAL_CALL)  ; SSocketContext * support_trisock.cpp_bindSocketWrapper_FUN_005e1af0(SSocketContext * socket_ctx)
    ADD ESP,0x8                         ; 0053f771
    SUB EAX,0x170                       ; 0053f774
    RET                                 ; 0053f779


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_FUN_0052c5d0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_00503a30 at 00503a3f
;
; Called Functions:
;   core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0
;   support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40
;   unkafter_trisock.cpp_FUN_0059ef20
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0052c5d0
        ;   Label: core_netgame.cpp_FUN_0052c5d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052c5d2
    PUSH EDX                            ; 0052c5d6
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0 ; 0052c5d7
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 0052c5dc
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052c5df
    ADD EAX,0x178                       ; 0052c5e3
    PUSH EAX                            ; 0052c5e8
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40 ; 0052c5e9
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0052c5ee
    JMP 0x0059ef20                      ; 0052c5f1
        ;   XREF to: 0059ef20 (UNCONDITIONAL_CALL)


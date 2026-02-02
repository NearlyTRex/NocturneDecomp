; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_netgame_cpp_CNetGame_FUN_00541230(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_FUN_00543930 at 00543957
;   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 at 00540863
;   core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0 at 00542333
;   core_netgame.cpp_CNetGame_send_FUN_005411c0 at 005411f1
;
; Called Functions:
;   support_trisock.cpp_performSocketOperation_FUN_005e1ca0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 00541230
        ;   Label: core_netgame.cpp_CNetGame_FUN_00541230
    MOV ECX,dword ptr [ESP + 0x8]       ; 00541234
    MOV EAX,dword ptr [EDX]             ; 00541238
    PUSH ECX                            ; 0054123a
    SUB EAX,0x4                         ; 0054123b
    PUSH EAX                            ; 0054123e
    LEA EAX,[EDX + 0x4]                 ; 0054123f
    PUSH EAX                            ; 00541242
    MOV EAX,dword ptr [ESP + 0x10]      ; 00541243
    ADD EAX,0x170                       ; 00541247
    PUSH EAX                            ; 0054124c
    CALL support_trisock.cpp_performSocketOperation_FUN_005e1ca0 ; 0054124d
        ;   XREF to: 005e1ca0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_performSocketOperation_FUN_005e1ca0(SSocketContext * socket_ctx, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 00541252
    RET                                 ; 00541255


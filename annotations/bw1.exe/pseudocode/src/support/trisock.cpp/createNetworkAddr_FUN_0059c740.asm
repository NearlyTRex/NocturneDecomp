; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_createNetworkAddr_FUN_0059c740(undefined4 *param_1,undefined4 param_2,undefined2 param_3)
;
;
; XREF[3]:
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0 at 0052c6f9
;   core_netgame.cpp_FUN_0052c5fc at 0052c658
;   core_netgame.cpp_FUN_0052d450 at 0052dcf1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c740
        ;   Label: support_trisock.cpp_createNetworkAddr_FUN_0059c740
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059c744
    MOV dword ptr [EAX],EDX             ; 0059c748
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059c74a
    MOV word ptr [EAX + 0x4],DX         ; 0059c74e
    RET                                 ; 0059c752


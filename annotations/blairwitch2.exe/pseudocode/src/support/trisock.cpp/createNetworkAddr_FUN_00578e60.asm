; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_createNetworkAddr_FUN_00578e60(undefined4 *param_1,undefined4 param_2,undefined2 param_3)
;
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_processPacket_FUN_0050c280 at 0050cb2c
;   core_netgame.cpp_FUN_0050b420 at 0050b478
;   core_netgame.cpp_FUN_0050b4d0 at 0050b519
;   support_trisock.cpp_FUN_00579890 at 00579973
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00578e60
        ;   Label: support_trisock.cpp_createNetworkAddr_FUN_00578e60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00578e64
    MOV dword ptr [EAX],EDX             ; 00578e68
    MOV EDX,dword ptr [ESP + 0xc]       ; 00578e6a
    MOV word ptr [EAX + 0x4],DX         ; 00578e6e
    RET                                 ; 00578e72


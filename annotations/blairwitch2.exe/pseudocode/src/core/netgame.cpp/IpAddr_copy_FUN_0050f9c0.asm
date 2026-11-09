; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SIpAddr * __cdecl core_netgame_cpp_IpAddr_copy_FUN_0050f9c0(SIpAddr *this_ptr,SIpAddr *other)
;
; Parameters:
; SIpAddr *        Stack[0x4]:4   this_ptr
; SIpAddr *        Stack[0x8]:4   other
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_0050e020 at 0050e35d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0050f9c0
        ;   Label: core_netgame.cpp_IpAddr_copy_FUN_0050f9c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050f9c4
    MOV EAX,dword ptr [EAX]             ; 0050f9c8
    MOV dword ptr [EDX],EAX             ; 0050f9ca
    MOV EAX,EDX                         ; 0050f9cc
    RET                                 ; 0050f9ce


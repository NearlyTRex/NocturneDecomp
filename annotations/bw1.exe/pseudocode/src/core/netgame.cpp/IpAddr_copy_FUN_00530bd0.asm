; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SIpAddr * __cdecl core_netgame_cpp_IpAddr_copy_FUN_00530bd0(SIpAddr *this_ptr,SIpAddr *other)
;
; Parameters:
; SIpAddr *        Stack[0x4]:4   this_ptr
; SIpAddr *        Stack[0x8]:4   other
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_0052f200 at 0052f551
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00530bd0
        ;   Label: core_netgame.cpp_IpAddr_copy_FUN_00530bd0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00530bd4
    MOV EAX,dword ptr [EAX]             ; 00530bd8
    MOV dword ptr [EDX],EAX             ; 00530bda
    MOV EAX,EDX                         ; 00530bdc
    RET                                 ; 00530bde


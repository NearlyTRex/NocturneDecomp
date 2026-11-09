; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SIpAddr * __cdecl core_netgame_cpp_IpAddr_copy_FUN_005084a0(SIpAddr *this_ptr,SIpAddr *other)
;
; Parameters:
; SIpAddr *        Stack[0x4]:4   this_ptr
; SIpAddr *        Stack[0x8]:4   other
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00506b00 at 00506e3d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005084a0
        ;   Label: core_netgame.cpp_IpAddr_copy_FUN_005084a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005084a4
    MOV EAX,dword ptr [EAX]             ; 005084a8
    MOV dword ptr [EDX],EAX             ; 005084aa
    MOV EAX,EDX                         ; 005084ac
    RET                                 ; 005084ae


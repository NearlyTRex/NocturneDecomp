; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_netgame_cpp_CNetGame_FUN_00543b00(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00543b00
        ;   Label: core_netgame.cpp_CNetGame_FUN_00543b00
    MOV EDX,dword ptr [ESP + 0x8]       ; 00543b04
    MOV dword ptr [EAX],EDX             ; 00543b08
    MOV DL,byte ptr [ESP + 0xc]         ; 00543b0a
    MOV byte ptr [EAX + 0x4],DL         ; 00543b0e
    RET                                 ; 00543b11


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_netgame_cpp_matchPacketSize_FUN_004edc30(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004edc30
        ;   Label: core_netgame.cpp_matchPacketSize_FUN_004edc30
    MOV EAX,dword ptr [ESP + 0x4]       ; 004edc34
    MOV ECX,dword ptr [EDX]             ; 004edc38
    MOV EAX,dword ptr [EAX]             ; 004edc3a
    CMP EAX,ECX                         ; 004edc3c
    SETZ AL                             ; 004edc3e
    AND EAX,0xff                        ; 004edc41
    RET                                 ; 004edc46


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNetworkAddr * __cdecl support_trisock_cpp_copyNetworkAddr_FUN_0057b7c0(SNetworkAddr *dest,SNetworkAddr *src)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   dest
; SNetworkAddr *   Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0057b7c0
        ;   Label: support_trisock.cpp_copyNetworkAddr_FUN_0057b7c0
    PUSH EDI                            ; 0057b7c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057b7c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0057b7c6
    MOV EDI,EAX                         ; 0057b7ca
    MOVSD ES:EDI,ESI                    ; 0057b7cc
    MOVSD ES:EDI,ESI                    ; 0057b7cd
    POP EDI                             ; 0057b7ce
    POP ESI                             ; 0057b7cf
    RET                                 ; 0057b7d0


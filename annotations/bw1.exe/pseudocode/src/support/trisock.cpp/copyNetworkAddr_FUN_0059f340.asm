; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNetworkAddr * __cdecl support_trisock_cpp_copyNetworkAddr_FUN_0059f340(SNetworkAddr *dest,SNetworkAddr *src)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   dest
; SNetworkAddr *   Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0059f340
        ;   Label: support_trisock.cpp_copyNetworkAddr_FUN_0059f340
    PUSH EDI                            ; 0059f341
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059f342
    MOV ESI,dword ptr [ESP + 0x10]      ; 0059f346
    MOV EDI,EAX                         ; 0059f34a
    MOVSD ES:EDI,ESI                    ; 0059f34c
    MOVSD ES:EDI,ESI                    ; 0059f34d
    POP EDI                             ; 0059f34e
    POP ESI                             ; 0059f34f
    RET                                 ; 0059f350


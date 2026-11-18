; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_dnsRequestLookupAddr_FUN_0059de00(void *request,uint ip_address)
;
; Parameters:
; void *           Stack[0x4]:4   request
; uint             Stack[0x8]:4   ip_address
;
; Called Functions:
;   support_trisock.cpp_dnsRequestCancel_FUN_0059de90
;   support_trisock.cpp_dnsRequestQueue_FUN_0059deb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059de00
        ;   Label: support_trisock.cpp_dnsRequestLookupAddr_FUN_0059de00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059de01
    PUSH EBX                            ; 0059de05
    CALL support_trisock.cpp_dnsRequestCancel_FUN_0059de90 ; 0059de06
        ;   XREF to: 0059de90 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_dnsRequestCancel_FUN_0059de90(void * request)
    ADD ESP,0x4                         ; 0059de0b
    MOV byte ptr [EBX],0x0              ; 0059de0e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059de11
    PUSH EBX                            ; 0059de15
    MOV dword ptr [EBX + 0x100],EAX     ; 0059de16
    CALL support_trisock.cpp_dnsRequestQueue_FUN_0059deb0 ; 0059de1c
        ;   XREF to: 0059deb0 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_dnsRequestQueue_FUN_0059deb0(void * request)
    ADD ESP,0x4                         ; 0059de21
    POP EBX                             ; 0059de24
    RET                                 ; 0059de25


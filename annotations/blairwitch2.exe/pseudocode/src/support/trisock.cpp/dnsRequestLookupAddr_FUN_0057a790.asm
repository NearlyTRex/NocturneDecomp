; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_dnsRequestLookupAddr_FUN_0057a790(void *request,uint ip_address)
;
; Parameters:
; void *           Stack[0x4]:4   request
; uint             Stack[0x8]:4   ip_address
;
; Called Functions:
;   support_trisock.cpp_dnsRequestCancel_FUN_0057a820
;   support_trisock.cpp_dnsRequestQueue_FUN_0057a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a790
        ;   Label: support_trisock.cpp_dnsRequestLookupAddr_FUN_0057a790
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057a791
    PUSH EBX                            ; 0057a795
    CALL support_trisock.cpp_dnsRequestCancel_FUN_0057a820 ; 0057a796
        ;   XREF to: 0057a820 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_dnsRequestCancel_FUN_0057a820(void * request)
    ADD ESP,0x4                         ; 0057a79b
    MOV byte ptr [EBX],0x0              ; 0057a79e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057a7a1
    PUSH EBX                            ; 0057a7a5
    MOV dword ptr [EBX + 0x100],EAX     ; 0057a7a6
    CALL support_trisock.cpp_dnsRequestQueue_FUN_0057a840 ; 0057a7ac
        ;   XREF to: 0057a840 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_dnsRequestQueue_FUN_0057a840(void * request)
    ADD ESP,0x4                         ; 0057a7b1
    POP EBX                             ; 0057a7b4
    RET                                 ; 0057a7b5


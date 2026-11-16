; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_dnsRequestCancel_FUN_0059de90(void *request)
;
; Parameters:
; void *           Stack[0x4]:4   request
;
; XREF[4]:
;   support_trisock.cpp_cleanupWinsock_FUN_0059ef20 at 0059ef6f
;   support_trisock.cpp_dnsRequestLookupAddr_FUN_0059de00 at 0059de06
;   support_trisock.cpp_dnsRequestLookupHost_FUN_0059ddc0 at 0059ddc8
;   support_trisock.cpp_httpRequestReset_FUN_0059ed20 at 0059ed81
;
; Called Functions:
;   support_trisock.cpp_dnsRequestUnlink_FUN_0059dfc0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0059de90
        ;   Label: support_trisock.cpp_dnsRequestCancel_FUN_0059de90
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059de92
    PUSH EDX                            ; 0059de96
    CALL support_trisock.cpp_dnsRequestUnlink_FUN_0059dfc0 ; 0059de97
        ;   XREF to: 0059dfc0 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_dnsRequestUnlink_FUN_0059dfc0(void * request)
    ADD ESP,0x8                         ; 0059de9c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059de9f
    MOV dword ptr [EAX + 0x3bc],0x0     ; 0059dea3
    RET                                 ; 0059dead


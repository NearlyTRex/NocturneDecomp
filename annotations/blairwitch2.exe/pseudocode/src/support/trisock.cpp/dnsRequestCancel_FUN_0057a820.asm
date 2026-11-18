; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_dnsRequestCancel_FUN_0057a820(void *request)
;
; Parameters:
; void *           Stack[0x4]:4   request
;
; XREF[2]:
;   support_trisock.cpp_dnsRequestLookupAddr_FUN_0057a790 at 0057a796
;   support_trisock.cpp_dnsRequestLookupHost_FUN_0057a750 at 0057a758
;
; Called Functions:
;   support_trisock.cpp_dnsRequestUnlink_FUN_0057a980
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0057a820
        ;   Label: support_trisock.cpp_dnsRequestCancel_FUN_0057a820
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057a822
    PUSH EDX                            ; 0057a826
    CALL support_trisock.cpp_dnsRequestUnlink_FUN_0057a980 ; 0057a827
        ;   XREF to: 0057a980 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_dnsRequestUnlink_FUN_0057a980(void * request)
    ADD ESP,0x8                         ; 0057a82c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057a82f
    MOV dword ptr [EAX + 0x3bc],0x0     ; 0057a833
    RET                                 ; 0057a83d


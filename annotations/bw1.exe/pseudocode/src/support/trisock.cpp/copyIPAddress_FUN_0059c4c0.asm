; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * __cdecl support_trisock_cpp_copyIPAddress_FUN_0059c4c0(uint *dest_ip,uint *src_ip)
;
; Parameters:
; uint *           Stack[0x4]:4   dest_ip
; uint *           Stack[0x8]:4   src_ip
;
; XREF[1]:
;   support_trisock.cpp_convertSockAddr_FUN_0059c760 at 0059c78c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059c4c0
        ;   Label: support_trisock.cpp_copyIPAddress_FUN_0059c4c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059c4c4
    MOV EAX,dword ptr [EAX]             ; 0059c4c8
    MOV dword ptr [EDX],EAX             ; 0059c4ca
    MOV EAX,EDX                         ; 0059c4cc
    RET                                 ; 0059c4ce


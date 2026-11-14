; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * __cdecl support_trisock_cpp_copyIPAddress_FUN_0056f4b0(uint *dest_ip,uint *src_ip)
;
; Parameters:
; uint *           Stack[0x4]:4   dest_ip
; uint *           Stack[0x8]:4   src_ip
;
; XREF[1]:
;   support_trisock.cpp_convertSockAddr_FUN_0056f750 at 0056f77c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056f4b0
        ;   Label: support_trisock.cpp_copyIPAddress_FUN_0056f4b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056f4b4
    MOV EAX,dword ptr [EAX]             ; 0056f4b8
    MOV dword ptr [EDX],EAX             ; 0056f4ba
    MOV EAX,EDX                         ; 0056f4bc
    RET                                 ; 0056f4be


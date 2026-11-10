; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint * __cdecl support_trisock_cpp_copyIPAddress_FUN_00578be0(uint *dest_ip,uint *src_ip)
;
; Parameters:
; uint *           Stack[0x4]:4   dest_ip
; uint *           Stack[0x8]:4   src_ip
;
; XREF[1]:
;   support_trisock.cpp_convertSockAddr_FUN_00578e80 at 00578eac
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00578be0
        ;   Label: support_trisock.cpp_copyIPAddress_FUN_00578be0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00578be4
    MOV EAX,dword ptr [EAX]             ; 00578be8
    MOV dword ptr [EDX],EAX             ; 00578bea
    MOV EAX,EDX                         ; 00578bec
    RET                                 ; 00578bee


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint * support_trisock.cpp_copyIPAddress_FUN_005e16f0(uint * dest_ip, uint * src_ip)
;
; Parameters:
; uint *           Stack[0x4]:4   dest_ip
; uint *           Stack[0x8]:4   src_ip
;
; XREF[1]:
;   support_trisock.cpp_convertSockAddr_FUN_005e1960 at 005e198c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005e16f0
        ;   Label: support_trisock.cpp_copyIPAddress_FUN_005e16f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005e16f4
    MOV EAX,dword ptr [EAX]             ; 005e16f8
    MOV dword ptr [EDX],EAX             ; 005e16fa
    MOV EAX,EDX                         ; 005e16fc
    RET                                 ; 005e16fe


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_staticInit_FUN_00578b90(void)
;
;
; Called Functions:
;   support_trisock.cpp_buildIPAddressOrDie_FUN_00578c40
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 00578b90
        ;   Label: support_trisock.cpp_staticInit_FUN_00578b90
    PUSH 0xff                           ; 00578b95
    PUSH 0xff                           ; 00578b9a
    PUSH 0xff                           ; 00578b9f
    PUSH 0x265362c                      ; 00578ba4
    CALL support_trisock.cpp_buildIPAddressOrDie_FUN_00578c40 ; 00578ba9
        ;   XREF to: 00578c40 (UNCONDITIONAL_CALL)  ; uint8_t * support_trisock.cpp_buildIPAddressOrDie_FUN_00578c40(uchar * dest_ip, int octet1, int octet2, int octet3, ...)
    ADD ESP,0x14                        ; 00578bae
    PUSH 0x0                            ; 00578bb1
    PUSH 0x0                            ; 00578bb3
    PUSH 0x0                            ; 00578bb5
    PUSH 0x0                            ; 00578bb7
    PUSH 0x2653630                      ; 00578bb9
    CALL support_trisock.cpp_buildIPAddressOrDie_FUN_00578c40 ; 00578bbe
        ;   XREF to: 00578c40 (UNCONDITIONAL_CALL)  ; uint8_t * support_trisock.cpp_buildIPAddressOrDie_FUN_00578c40(uchar * dest_ip, int octet1, int octet2, int octet3, ...)
    ADD ESP,0x14                        ; 00578bc3
    RET                                 ; 00578bc6


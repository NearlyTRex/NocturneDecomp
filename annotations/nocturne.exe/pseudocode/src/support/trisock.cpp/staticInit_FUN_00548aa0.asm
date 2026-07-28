; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_staticInit_FUN_00548aa0(void)
;
;
; Called Functions:
;   support_trisock.cpp_buildIPAddressOrDie_FUN_00548b40
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 00548aa0
        ;   Label: support_trisock.cpp_staticInit_FUN_00548aa0
    PUSH 0xff                           ; 00548aa5
    PUSH 0xff                           ; 00548aaa
    PUSH 0xff                           ; 00548aaf
    PUSH 0x2dd10c0                      ; 00548ab4
    CALL support_trisock.cpp_buildIPAddressOrDie_FUN_00548b40 ; 00548ab9
        ;   XREF to: 00548b40 (UNCONDITIONAL_CALL)  ; uint8_t * support_trisock.cpp_buildIPAddressOrDie_FUN_00548b40(uchar * dest_ip, int octet1, int octet2, int octet3, ...)
    ADD ESP,0x14                        ; 00548abe
    PUSH 0x0                            ; 00548ac1
    PUSH 0x0                            ; 00548ac3
    PUSH 0x0                            ; 00548ac5
    PUSH 0x0                            ; 00548ac7
    PUSH 0x2dd10c4                      ; 00548ac9
    CALL support_trisock.cpp_buildIPAddressOrDie_FUN_00548b40 ; 00548ace
        ;   XREF to: 00548b40 (UNCONDITIONAL_CALL)  ; uint8_t * support_trisock.cpp_buildIPAddressOrDie_FUN_00548b40(uchar * dest_ip, int octet1, int octet2, int octet3, ...)
    ADD ESP,0x14                        ; 00548ad3
    RET                                 ; 00548ad6


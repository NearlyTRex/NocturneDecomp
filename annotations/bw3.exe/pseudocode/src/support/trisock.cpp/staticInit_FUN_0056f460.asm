; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_staticInit_FUN_0056f460(void)
;
;
; Called Functions:
;   support_trisock.cpp_buildIPAddressOrDie_FUN_0056f510
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 0056f460
        ;   Label: support_trisock.cpp_staticInit_FUN_0056f460
    PUSH 0xff                           ; 0056f465
    PUSH 0xff                           ; 0056f46a
    PUSH 0xff                           ; 0056f46f
    PUSH 0x2cfd898                      ; 0056f474
    CALL support_trisock.cpp_buildIPAddressOrDie_FUN_0056f510 ; 0056f479
        ;   XREF to: 0056f510 (UNCONDITIONAL_CALL)  ; uint8_t * support_trisock.cpp_buildIPAddressOrDie_FUN_0056f510(uchar * dest_ip, int octet1, int octet2, int octet3, ...)
    ADD ESP,0x14                        ; 0056f47e
    PUSH 0x0                            ; 0056f481
    PUSH 0x0                            ; 0056f483
    PUSH 0x0                            ; 0056f485
    PUSH 0x0                            ; 0056f487
    PUSH 0x2cfd89c                      ; 0056f489
    CALL support_trisock.cpp_buildIPAddressOrDie_FUN_0056f510 ; 0056f48e
        ;   XREF to: 0056f510 (UNCONDITIONAL_CALL)  ; uint8_t * support_trisock.cpp_buildIPAddressOrDie_FUN_0056f510(uchar * dest_ip, int octet1, int octet2, int octet3, ...)
    ADD ESP,0x14                        ; 0056f493
    RET                                 ; 0056f496


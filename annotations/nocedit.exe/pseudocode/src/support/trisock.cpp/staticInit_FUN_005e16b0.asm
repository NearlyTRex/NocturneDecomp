; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void support_trisock.cpp_staticInit_FUN_005e16b0(void)
;
;
; Referenced Globals:
;   uchar[4] g_BroadcastIP
;   uchar[4] g_AnyAddressIP
;
; Called Functions:
;   support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 005e16b0
        ;   Label: support_trisock.cpp_staticInit_FUN_005e16b0
    PUSH 0xff                           ; 005e16b5
    PUSH 0xff                           ; 005e16ba
    PUSH 0xff                           ; 005e16bf
    PUSH 0x3f87494                      ; 005e16c4 | g_BroadcastIP
    CALL support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750 ; 005e16c9
        ;   XREF to: 005e1750 (UNCONDITIONAL_CALL)  ; uint8_t * support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750(uchar * dest_ip, int octet1, int octet2, int octet3, ...)
    ADD ESP,0x14                        ; 005e16ce
    PUSH 0x0                            ; 005e16d1
    PUSH 0x0                            ; 005e16d3
    PUSH 0x0                            ; 005e16d5
    PUSH 0x0                            ; 005e16d7
    PUSH 0x3f87498                      ; 005e16d9 | g_AnyAddressIP
    CALL support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750 ; 005e16de
        ;   XREF to: 005e1750 (UNCONDITIONAL_CALL)  ; uint8_t * support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750(uchar * dest_ip, int octet1, int octet2, int octet3, ...)
    ADD ESP,0x14                        ; 005e16e3
    RET                                 ; 005e16e6


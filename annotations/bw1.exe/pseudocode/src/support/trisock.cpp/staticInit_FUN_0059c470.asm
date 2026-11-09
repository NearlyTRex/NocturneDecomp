; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_staticInit_FUN_0059c470(void)
;
;
; Called Functions:
;   support_trisock.cpp_buildIPAddressOrDie_FUN_0059c520
;
; *****************************************************************************

section .text

    PUSH 0xff                           ; 0059c470
        ;   Label: support_trisock.cpp_staticInit_FUN_0059c470
    PUSH 0xff                           ; 0059c475
    PUSH 0xff                           ; 0059c47a
    PUSH 0xff                           ; 0059c47f
    PUSH 0x2c8ae48                      ; 0059c484
    CALL support_trisock.cpp_buildIPAddressOrDie_FUN_0059c520 ; 0059c489
        ;   XREF to: 0059c520 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildIPAddressOrDie_FUN_0059c520()
    ADD ESP,0x14                        ; 0059c48e
    PUSH 0x0                            ; 0059c491
    PUSH 0x0                            ; 0059c493
    PUSH 0x0                            ; 0059c495
    PUSH 0x0                            ; 0059c497
    PUSH 0x2c8ae4c                      ; 0059c499
    CALL support_trisock.cpp_buildIPAddressOrDie_FUN_0059c520 ; 0059c49e
        ;   XREF to: 0059c520 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildIPAddressOrDie_FUN_0059c520()
    ADD ESP,0x14                        ; 0059c4a3
    RET                                 ; 0059c4a6


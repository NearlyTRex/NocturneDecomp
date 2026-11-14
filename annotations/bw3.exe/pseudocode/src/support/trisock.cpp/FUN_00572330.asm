; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_00572330(undefined4 *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00572330
        ;   Label: support_trisock.cpp_FUN_00572330
    PUSH EDI                            ; 00572331
    MOV EAX,dword ptr [ESP + 0xc]       ; 00572332
    MOV ESI,dword ptr [ESP + 0x10]      ; 00572336
    MOV EDI,EAX                         ; 0057233a
    MOVSD ES:EDI,ESI                    ; 0057233c
    MOVSD ES:EDI,ESI                    ; 0057233d
    POP EDI                             ; 0057233e
    POP ESI                             ; 0057233f
    RET                                 ; 00572340


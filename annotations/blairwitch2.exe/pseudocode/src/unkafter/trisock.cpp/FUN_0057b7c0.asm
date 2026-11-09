; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_trisock_cpp_FUN_0057b7c0(undefined4 *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0057b7c0
        ;   Label: unkafter_trisock.cpp_FUN_0057b7c0
    PUSH EDI                            ; 0057b7c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057b7c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0057b7c6
    MOV EDI,EAX                         ; 0057b7ca
    MOVSD ES:EDI,ESI                    ; 0057b7cc
    MOVSD ES:EDI,ESI                    ; 0057b7cd
    POP EDI                             ; 0057b7ce
    POP ESI                             ; 0057b7cf
    RET                                 ; 0057b7d0


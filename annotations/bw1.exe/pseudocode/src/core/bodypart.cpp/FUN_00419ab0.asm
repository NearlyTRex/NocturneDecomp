; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00419ab0(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00419ab0
        ;   Label: core_bodypart.cpp_FUN_00419ab0
    SUB ESP,0x18                        ; 00419ab1
    MOV EAX,ESI                         ; 00419ab4
    MOV ESI,dword ptr [ESP + 0x20]      ; 00419ab6
    MOV ECX,0x6                         ; 00419aba
    MOV EDI,ESP                         ; 00419abf
    LEA ESI,[ESI + 0x15c]               ; 00419ac1
    MOVSD.REP ES:EDI,ESI                ; 00419ac7
    MOV ECX,0x6                         ; 00419ac9
    MOV ESI,ESP                         ; 00419ace
    MOV EDI,EAX                         ; 00419ad0
    MOVSD.REP ES:EDI,ESI                ; 00419ad2
    ADD ESP,0x18                        ; 00419ad4
    POP EDI                             ; 00419ad7
    RET                                 ; 00419ad8


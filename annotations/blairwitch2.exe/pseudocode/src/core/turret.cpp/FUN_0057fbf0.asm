; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_turret_cpp_FUN_0057fbf0(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0057fbf0
        ;   Label: core_turret.cpp_FUN_0057fbf0
    SUB ESP,0xc                         ; 0057fbf1
    MOV EAX,ESI                         ; 0057fbf4
    MOV ESI,dword ptr [ESP + 0x14]      ; 0057fbf6
    MOV EDI,ESP                         ; 0057fbfa
    LEA ESI,[ESI + 0x9bc]               ; 0057fbfc
    MOVSD ES:EDI,ESI                    ; 0057fc02
    MOVSD ES:EDI,ESI                    ; 0057fc03
    MOVSD ES:EDI,ESI                    ; 0057fc04
    MOV ESI,ESP                         ; 0057fc05
    MOV EDI,EAX                         ; 0057fc07
    MOVSD ES:EDI,ESI                    ; 0057fc09
    MOVSD ES:EDI,ESI                    ; 0057fc0a
    MOVSD ES:EDI,ESI                    ; 0057fc0b
    ADD ESP,0xc                         ; 0057fc0c
    POP EDI                             ; 0057fc0f
    RET                                 ; 0057fc10


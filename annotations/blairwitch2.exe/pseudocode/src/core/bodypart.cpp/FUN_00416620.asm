; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00416620(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00416620
        ;   Label: core_bodypart.cpp_FUN_00416620
    SUB ESP,0x18                        ; 00416621
    MOV EAX,ESI                         ; 00416624
    MOV ESI,dword ptr [ESP + 0x20]      ; 00416626
    MOV ECX,0x6                         ; 0041662a
    MOV EDI,ESP                         ; 0041662f
    LEA ESI,[ESI + 0x2b8]               ; 00416631
    MOVSD.REP ES:EDI,ESI                ; 00416637
    MOV ECX,0x6                         ; 00416639
    MOV ESI,ESP                         ; 0041663e
    MOV EDI,EAX                         ; 00416640
    MOVSD.REP ES:EDI,ESI                ; 00416642
    ADD ESP,0x18                        ; 00416644
    POP EDI                             ; 00416647
    RET                                 ; 00416648


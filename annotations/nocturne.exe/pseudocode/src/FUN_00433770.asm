; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00433770(undefined4 *param_1,undefined4 *param_2,uint param_3)
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00433770
        ;   Label: FUN_00433770
    PUSH EDI                            ; 00433771
    MOV ECX,dword ptr [ESP + 0x14]      ; 00433772
    MOV ESI,dword ptr [ESP + 0x10]      ; 00433776
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043377a
    PUSH EDI                            ; 0043377e
    MOV EAX,ECX                         ; 0043377f
    SHR ECX,0x2                         ; 00433781
    MOVSD.REP ES:EDI,ESI                ; 00433784
    MOV CL,AL                           ; 00433786
    AND CL,0x3                          ; 00433788
    MOVSB.REP ES:EDI,ESI                ; 0043378b
    POP EDI                             ; 0043378d
    POP EDI                             ; 0043378e
    POP ESI                             ; 0043378f
    RET                                 ; 00433790


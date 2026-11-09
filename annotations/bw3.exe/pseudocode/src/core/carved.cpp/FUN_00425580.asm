; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_carved_cpp_FUN_00425580(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7987
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00425580
        ;   Label: core_carved.cpp_FUN_00425580
    SUB ESP,0x4c                        ; 00425581
    MOV ESI,dword ptr [ESP + 0x54]      ; 00425584
    MOV dword ptr [ESP + 0x48],0x3f800000 ; 00425588
    TEST ESI,ESI                        ; 00425590
    JNZ 0x0042559d                      ; 00425592
        ;   XREF to: 0042559d (CONDITIONAL_JUMP)  ; LAB_0042559d
    MOV EAX,dword ptr [ESP + 0x48]      ; 00425594
    ADD ESP,0x4c                        ; 00425598
    POP ESI                             ; 0042559b
    RET                                 ; 0042559c
    PUSH EDI                            ; 0042559d
        ;   Label: LAB_0042559d
    PUSH ESI                            ; 0042559e
    MOV EAX,dword ptr [ESI + 0x154]     ; 0042559f
    LEA ESI,[ESP + 0x20]                ; 004255a5
    LEA EDI,[ESP + 0x8]                 ; 004255a9
    CALL dword ptr [EAX + 0x1c]         ; 004255ad
    MOV ECX,0x6                         ; 004255b0
    LEA ESI,[ESP + 0x20]                ; 004255b5
    ADD ESP,0x4                         ; 004255b9
    LEA EAX,[ESP + 0x4]                 ; 004255bc
    MOVSD.REP ES:EDI,ESI                ; 004255c0
    FLD float ptr [EAX + 0xc]           ; 004255c2
    FLD float ptr [EAX + 0x10]          ; 004255c5
    FLD float ptr [EAX + 0x14]          ; 004255c8
    LEA EDI,[ESP + 0x40]                ; 004255cb
    LEA ESI,[ESP + 0x34]                ; 004255cf
    FXCH ST2                            ; 004255d3
    FSUB float ptr [ESP + 0x4]          ; 004255d5
    FXCH                                ; 004255d9
    FSUB float ptr [ESP + 0x8]          ; 004255db
    FXCH ST2                            ; 004255df
    FSUB float ptr [ESP + 0xc]          ; 004255e1
    FXCH                                ; 004255e5
    FSTP float ptr [ESP + 0x34]         ; 004255e7
    FXCH                                ; 004255eb
    FSTP float ptr [ESP + 0x38]         ; 004255ed
    FSTP float ptr [ESP + 0x3c]         ; 004255f1
    MOVSD ES:EDI,ESI                    ; 004255f5
    MOVSD ES:EDI,ESI                    ; 004255f6
    MOVSD ES:EDI,ESI                    ; 004255f7
    FLD float ptr [ESP + 0x48]          ; 004255f8
    FMUL double ptr [0x005b7987]        ; 004255fc | DAT_005b7987
    FLD1                                ; 00425602
    FADDP                               ; 00425604
    FSTP float ptr [ESP + 0x4c]         ; 00425606
    POP EDI                             ; 0042560a
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042560b
    ADD ESP,0x4c                        ; 0042560f
    POP ESI                             ; 00425612
    RET                                 ; 00425613


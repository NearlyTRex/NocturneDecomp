; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_demnfolk_cpp_FUN_00458630(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d7d13
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00458630
        ;   Label: core_demnfolk.cpp_FUN_00458630
    SUB ESP,0x4c                        ; 00458631
    MOV ESI,dword ptr [ESP + 0x54]      ; 00458634
    MOV dword ptr [ESP + 0x48],0x3f800000 ; 00458638
    TEST ESI,ESI                        ; 00458640
    JNZ 0x0045864d                      ; 00458642
        ;   XREF to: 0045864d (CONDITIONAL_JUMP)  ; LAB_0045864d
    MOV EAX,dword ptr [ESP + 0x48]      ; 00458644
    ADD ESP,0x4c                        ; 00458648
    POP ESI                             ; 0045864b
    RET                                 ; 0045864c
    PUSH EDI                            ; 0045864d
        ;   Label: LAB_0045864d
    PUSH ESI                            ; 0045864e
    MOV EAX,dword ptr [ESI + 0x154]     ; 0045864f
    LEA ESI,[ESP + 0x20]                ; 00458655
    LEA EDI,[ESP + 0x8]                 ; 00458659
    CALL dword ptr [EAX + 0x1c]         ; 0045865d
    MOV ECX,0x6                         ; 00458660
    LEA ESI,[ESP + 0x20]                ; 00458665
    ADD ESP,0x4                         ; 00458669
    LEA EAX,[ESP + 0x4]                 ; 0045866c
    MOVSD.REP ES:EDI,ESI                ; 00458670
    FLD float ptr [EAX + 0xc]           ; 00458672
    FLD float ptr [EAX + 0x10]          ; 00458675
    FLD float ptr [EAX + 0x14]          ; 00458678
    LEA EDI,[ESP + 0x40]                ; 0045867b
    LEA ESI,[ESP + 0x34]                ; 0045867f
    FXCH ST2                            ; 00458683
    FSUB float ptr [ESP + 0x4]          ; 00458685
    FXCH                                ; 00458689
    FSUB float ptr [ESP + 0x8]          ; 0045868b
    FXCH ST2                            ; 0045868f
    FSUB float ptr [ESP + 0xc]          ; 00458691
    FXCH                                ; 00458695
    FSTP float ptr [ESP + 0x34]         ; 00458697
    FXCH                                ; 0045869b
    FSTP float ptr [ESP + 0x38]         ; 0045869d
    FSTP float ptr [ESP + 0x3c]         ; 004586a1
    MOVSD ES:EDI,ESI                    ; 004586a5
    MOVSD ES:EDI,ESI                    ; 004586a6
    MOVSD ES:EDI,ESI                    ; 004586a7
    FLD float ptr [ESP + 0x48]          ; 004586a8
    FMUL double ptr [0x005d7d13]        ; 004586ac | DAT_005d7d13
    FLD1                                ; 004586b2
    FADDP                               ; 004586b4
    FSTP float ptr [ESP + 0x4c]         ; 004586b6
    POP EDI                             ; 004586ba
    MOV EAX,dword ptr [ESP + 0x48]      ; 004586bb
    ADD ESP,0x4c                        ; 004586bf
    POP ESI                             ; 004586c2
    RET                                 ; 004586c3


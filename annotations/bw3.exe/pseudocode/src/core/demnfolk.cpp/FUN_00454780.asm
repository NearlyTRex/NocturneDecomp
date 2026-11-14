; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_demnfolk_cpp_FUN_00454780(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ba37a
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00454780
        ;   Label: core_demnfolk.cpp_FUN_00454780
    SUB ESP,0x4c                        ; 00454781
    MOV ESI,dword ptr [ESP + 0x54]      ; 00454784
    MOV dword ptr [ESP + 0x48],0x3f800000 ; 00454788
    TEST ESI,ESI                        ; 00454790
    JNZ 0x0045479d                      ; 00454792
        ;   XREF to: 0045479d (CONDITIONAL_JUMP)  ; LAB_0045479d
    MOV EAX,dword ptr [ESP + 0x48]      ; 00454794
    ADD ESP,0x4c                        ; 00454798
    POP ESI                             ; 0045479b
    RET                                 ; 0045479c
    PUSH EDI                            ; 0045479d
        ;   Label: LAB_0045479d
    PUSH ESI                            ; 0045479e
    MOV EAX,dword ptr [ESI + 0x154]     ; 0045479f
    LEA ESI,[ESP + 0x20]                ; 004547a5
    LEA EDI,[ESP + 0x8]                 ; 004547a9
    CALL dword ptr [EAX + 0x1c]         ; 004547ad
    MOV ECX,0x6                         ; 004547b0
    LEA ESI,[ESP + 0x20]                ; 004547b5
    ADD ESP,0x4                         ; 004547b9
    LEA EAX,[ESP + 0x4]                 ; 004547bc
    MOVSD.REP ES:EDI,ESI                ; 004547c0
    FLD float ptr [EAX + 0xc]           ; 004547c2
    FLD float ptr [EAX + 0x10]          ; 004547c5
    FLD float ptr [EAX + 0x14]          ; 004547c8
    LEA EDI,[ESP + 0x40]                ; 004547cb
    LEA ESI,[ESP + 0x34]                ; 004547cf
    FXCH ST2                            ; 004547d3
    FSUB float ptr [ESP + 0x4]          ; 004547d5
    FXCH                                ; 004547d9
    FSUB float ptr [ESP + 0x8]          ; 004547db
    FXCH ST2                            ; 004547df
    FSUB float ptr [ESP + 0xc]          ; 004547e1
    FXCH                                ; 004547e5
    FSTP float ptr [ESP + 0x34]         ; 004547e7
    FXCH                                ; 004547eb
    FSTP float ptr [ESP + 0x38]         ; 004547ed
    FSTP float ptr [ESP + 0x3c]         ; 004547f1
    MOVSD ES:EDI,ESI                    ; 004547f5
    MOVSD ES:EDI,ESI                    ; 004547f6
    MOVSD ES:EDI,ESI                    ; 004547f7
    FLD float ptr [ESP + 0x48]          ; 004547f8
    FMUL double ptr [0x005ba37a]        ; 004547fc | DAT_005ba37a
    FLD1                                ; 00454802
    FADDP                               ; 00454804
    FSTP float ptr [ESP + 0x4c]         ; 00454806
    POP EDI                             ; 0045480a
    MOV EAX,dword ptr [ESP + 0x48]      ; 0045480b
    ADD ESP,0x4c                        ; 0045480f
    POP ESI                             ; 00454812
    RET                                 ; 00454813


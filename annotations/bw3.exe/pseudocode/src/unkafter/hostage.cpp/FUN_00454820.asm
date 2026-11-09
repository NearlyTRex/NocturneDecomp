; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_hostage_cpp_FUN_00454820(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ba382
;   undefined4 DAT_005ba38a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454820
        ;   Label: unkafter_hostage.cpp_FUN_00454820
    PUSH EDI                            ; 00454821
    PUSH EBP                            ; 00454822
    MOV EBP,ESP                         ; 00454823
    SUB ESP,0x60                        ; 00454825
    AND ESP,0xfffffff8                  ; 00454828
    MOV EBX,ESI                         ; 0045482b
    MOV ESI,dword ptr [EBP + 0x10]      ; 0045482d
    PUSH ESI                            ; 00454830
    MOV EAX,dword ptr [ESI + 0x154]     ; 00454831
    LEA ESI,[ESP + 0x1c]                ; 00454837
    LEA EDI,[ESP + 0x4]                 ; 0045483b
    CALL dword ptr [EAX + 0x1c]         ; 0045483f
    MOV ECX,0x6                         ; 00454842
    LEA ESI,[ESP + 0x1c]                ; 00454847
    ADD ESP,0x4                         ; 0045484b
    MOVSD.REP ES:EDI,ESI                ; 0045484e
    FLD float ptr [ESP]                 ; 00454850
    FLD float ptr [ESP + 0x4]           ; 00454853
    FLD float ptr [ESP + 0x8]           ; 00454857
    LEA EDI,[ESP + 0x54]                ; 0045485b
    LEA ESI,[ESP + 0x30]                ; 0045485f
    FXCH ST2                            ; 00454863
    FADD float ptr [ESP + 0xc]          ; 00454865
    FXCH                                ; 00454869
    FADD float ptr [ESP + 0x10]         ; 0045486b
    FXCH ST2                            ; 0045486f
    FADD float ptr [ESP + 0x14]         ; 00454871
    FXCH                                ; 00454875
    FSTP float ptr [ESP + 0x30]         ; 00454877
    FXCH                                ; 0045487b
    FSTP float ptr [ESP + 0x34]         ; 0045487d
    FSTP float ptr [ESP + 0x38]         ; 00454881
    MOVSD ES:EDI,ESI                    ; 00454885
    MOVSD ES:EDI,ESI                    ; 00454886
    MOVSD ES:EDI,ESI                    ; 00454887
    FLD float ptr [0x005ba382]          ; 00454888 | DAT_005ba382
    FLD float ptr [ESP + 0x54]          ; 0045488e
    FMUL ST1                            ; 00454892
    FLD float ptr [ESP + 0x58]          ; 00454894
    FMUL ST2                            ; 00454898
    FLD float ptr [ESP + 0x5c]          ; 0045489a
    FMULP ST3                           ; 0045489e
    FLD float ptr [ESP + 0x8]           ; 004548a0
    LEA EDI,[ESP + 0x3c]                ; 004548a4
    LEA ESI,[ESP + 0x48]                ; 004548a8
    FXCH ST2                            ; 004548ac
    FSTP float ptr [ESP + 0x48]         ; 004548ae
    FSTP float ptr [ESP + 0x4c]         ; 004548b2
    FXCH                                ; 004548b6
    FSTP float ptr [ESP + 0x50]         ; 004548b8
    MOVSD ES:EDI,ESI                    ; 004548bc
    MOVSD ES:EDI,ESI                    ; 004548bd
    MOVSD ES:EDI,ESI                    ; 004548be
    FADD double ptr [0x005ba38a]        ; 004548bf | DAT_005ba38a
    LEA ESI,[ESP + 0x3c]                ; 004548c5
    MOV EDI,EBX                         ; 004548c9
    FSTP float ptr [ESP + 0x44]         ; 004548cb
    MOVSD ES:EDI,ESI                    ; 004548cf
    MOVSD ES:EDI,ESI                    ; 004548d0
    MOVSD ES:EDI,ESI                    ; 004548d1
    MOV EAX,EBX                         ; 004548d2
    MOV ESP,EBP                         ; 004548d4
    POP EBP                             ; 004548d6
    POP EDI                             ; 004548d7
    POP EBX                             ; 004548d8
    RET                                 ; 004548d9


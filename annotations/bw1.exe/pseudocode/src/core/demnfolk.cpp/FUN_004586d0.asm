; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_demnfolk_cpp_FUN_004586d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d7d1b
;   undefined4 DAT_005d7d23
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004586d0
        ;   Label: core_demnfolk.cpp_FUN_004586d0
    PUSH EDI                            ; 004586d1
    PUSH EBP                            ; 004586d2
    MOV EBP,ESP                         ; 004586d3
    SUB ESP,0x60                        ; 004586d5
    AND ESP,0xfffffff8                  ; 004586d8
    MOV EBX,ESI                         ; 004586db
    MOV ESI,dword ptr [EBP + 0x10]      ; 004586dd
    PUSH ESI                            ; 004586e0
    MOV EAX,dword ptr [ESI + 0x154]     ; 004586e1
    LEA ESI,[ESP + 0x1c]                ; 004586e7
    LEA EDI,[ESP + 0x4]                 ; 004586eb
    CALL dword ptr [EAX + 0x1c]         ; 004586ef
    MOV ECX,0x6                         ; 004586f2
    LEA ESI,[ESP + 0x1c]                ; 004586f7
    ADD ESP,0x4                         ; 004586fb
    MOVSD.REP ES:EDI,ESI                ; 004586fe
    FLD float ptr [ESP]                 ; 00458700
    FLD float ptr [ESP + 0x4]           ; 00458703
    FLD float ptr [ESP + 0x8]           ; 00458707
    LEA EDI,[ESP + 0x54]                ; 0045870b
    LEA ESI,[ESP + 0x30]                ; 0045870f
    FXCH ST2                            ; 00458713
    FADD float ptr [ESP + 0xc]          ; 00458715
    FXCH                                ; 00458719
    FADD float ptr [ESP + 0x10]         ; 0045871b
    FXCH ST2                            ; 0045871f
    FADD float ptr [ESP + 0x14]         ; 00458721
    FXCH                                ; 00458725
    FSTP float ptr [ESP + 0x30]         ; 00458727
    FXCH                                ; 0045872b
    FSTP float ptr [ESP + 0x34]         ; 0045872d
    FSTP float ptr [ESP + 0x38]         ; 00458731
    MOVSD ES:EDI,ESI                    ; 00458735
    MOVSD ES:EDI,ESI                    ; 00458736
    MOVSD ES:EDI,ESI                    ; 00458737
    FLD float ptr [0x005d7d1b]          ; 00458738 | DAT_005d7d1b
    FLD float ptr [ESP + 0x54]          ; 0045873e
    FMUL ST1                            ; 00458742
    FLD float ptr [ESP + 0x58]          ; 00458744
    FMUL ST2                            ; 00458748
    FLD float ptr [ESP + 0x5c]          ; 0045874a
    FMULP ST3                           ; 0045874e
    FLD float ptr [ESP + 0x8]           ; 00458750
    LEA EDI,[ESP + 0x3c]                ; 00458754
    LEA ESI,[ESP + 0x48]                ; 00458758
    FXCH ST2                            ; 0045875c
    FSTP float ptr [ESP + 0x48]         ; 0045875e
    FSTP float ptr [ESP + 0x4c]         ; 00458762
    FXCH                                ; 00458766
    FSTP float ptr [ESP + 0x50]         ; 00458768
    MOVSD ES:EDI,ESI                    ; 0045876c
    MOVSD ES:EDI,ESI                    ; 0045876d
    MOVSD ES:EDI,ESI                    ; 0045876e
    FADD double ptr [0x005d7d23]        ; 0045876f | DAT_005d7d23
    LEA ESI,[ESP + 0x3c]                ; 00458775
    MOV EDI,EBX                         ; 00458779
    FSTP float ptr [ESP + 0x44]         ; 0045877b
    MOVSD ES:EDI,ESI                    ; 0045877f
    MOVSD ES:EDI,ESI                    ; 00458780
    MOVSD ES:EDI,ESI                    ; 00458781
    MOV EAX,EBX                         ; 00458782
    MOV ESP,EBP                         ; 00458784
    POP EBP                             ; 00458786
    POP EDI                             ; 00458787
    POP EBX                             ; 00458788
    RET                                 ; 00458789


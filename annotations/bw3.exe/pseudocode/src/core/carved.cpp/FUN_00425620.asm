; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_00425620(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b798f
;   undefined4 DAT_005b7997
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425620
        ;   Label: core_carved.cpp_FUN_00425620
    PUSH EDI                            ; 00425621
    PUSH EBP                            ; 00425622
    MOV EBP,ESP                         ; 00425623
    SUB ESP,0x60                        ; 00425625
    AND ESP,0xfffffff8                  ; 00425628
    MOV EBX,ESI                         ; 0042562b
    MOV ESI,dword ptr [EBP + 0x10]      ; 0042562d
    PUSH ESI                            ; 00425630
    MOV EAX,dword ptr [ESI + 0x154]     ; 00425631
    LEA ESI,[ESP + 0x1c]                ; 00425637
    LEA EDI,[ESP + 0x4]                 ; 0042563b
    CALL dword ptr [EAX + 0x1c]         ; 0042563f
    MOV ECX,0x6                         ; 00425642
    LEA ESI,[ESP + 0x1c]                ; 00425647
    ADD ESP,0x4                         ; 0042564b
    MOVSD.REP ES:EDI,ESI                ; 0042564e
    FLD float ptr [ESP]                 ; 00425650
    FLD float ptr [ESP + 0x4]           ; 00425653
    FLD float ptr [ESP + 0x8]           ; 00425657
    LEA EDI,[ESP + 0x54]                ; 0042565b
    LEA ESI,[ESP + 0x30]                ; 0042565f
    FXCH ST2                            ; 00425663
    FADD float ptr [ESP + 0xc]          ; 00425665
    FXCH                                ; 00425669
    FADD float ptr [ESP + 0x10]         ; 0042566b
    FXCH ST2                            ; 0042566f
    FADD float ptr [ESP + 0x14]         ; 00425671
    FXCH                                ; 00425675
    FSTP float ptr [ESP + 0x30]         ; 00425677
    FXCH                                ; 0042567b
    FSTP float ptr [ESP + 0x34]         ; 0042567d
    FSTP float ptr [ESP + 0x38]         ; 00425681
    MOVSD ES:EDI,ESI                    ; 00425685
    MOVSD ES:EDI,ESI                    ; 00425686
    MOVSD ES:EDI,ESI                    ; 00425687
    FLD float ptr [0x005b798f]          ; 00425688 | DAT_005b798f
    FLD float ptr [ESP + 0x54]          ; 0042568e
    FMUL ST1                            ; 00425692
    FLD float ptr [ESP + 0x58]          ; 00425694
    FMUL ST2                            ; 00425698
    FLD float ptr [ESP + 0x5c]          ; 0042569a
    FMULP ST3                           ; 0042569e
    FLD float ptr [ESP + 0x8]           ; 004256a0
    LEA EDI,[ESP + 0x3c]                ; 004256a4
    LEA ESI,[ESP + 0x48]                ; 004256a8
    FXCH ST2                            ; 004256ac
    FSTP float ptr [ESP + 0x48]         ; 004256ae
    FSTP float ptr [ESP + 0x4c]         ; 004256b2
    FXCH                                ; 004256b6
    FSTP float ptr [ESP + 0x50]         ; 004256b8
    MOVSD ES:EDI,ESI                    ; 004256bc
    MOVSD ES:EDI,ESI                    ; 004256bd
    MOVSD ES:EDI,ESI                    ; 004256be
    FADD double ptr [0x005b7997]        ; 004256bf | DAT_005b7997
    LEA ESI,[ESP + 0x3c]                ; 004256c5
    MOV EDI,EBX                         ; 004256c9
    FSTP float ptr [ESP + 0x44]         ; 004256cb
    MOVSD ES:EDI,ESI                    ; 004256cf
    MOVSD ES:EDI,ESI                    ; 004256d0
    MOVSD ES:EDI,ESI                    ; 004256d1
    MOV EAX,EBX                         ; 004256d2
    MOV ESP,EBP                         ; 004256d4
    POP EBP                             ; 004256d6
    POP EDI                             ; 004256d7
    POP EBX                             ; 004256d8
    RET                                 ; 004256d9


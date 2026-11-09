; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_00588590(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d839f
;   undefined4 DAT_005d83a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588590
        ;   Label: core_zombie.cpp_FUN_00588590
    PUSH EDI                            ; 00588591
    PUSH EBP                            ; 00588592
    MOV EBP,ESP                         ; 00588593
    SUB ESP,0x60                        ; 00588595
    AND ESP,0xfffffff8                  ; 00588598
    MOV EBX,ESI                         ; 0058859b
    MOV ESI,dword ptr [EBP + 0x10]      ; 0058859d
    PUSH ESI                            ; 005885a0
    MOV EAX,dword ptr [ESI + 0x154]     ; 005885a1
    LEA ESI,[ESP + 0x1c]                ; 005885a7
    LEA EDI,[ESP + 0x4]                 ; 005885ab
    CALL dword ptr [EAX + 0x1c]         ; 005885af
    MOV ECX,0x6                         ; 005885b2
    LEA ESI,[ESP + 0x1c]                ; 005885b7
    ADD ESP,0x4                         ; 005885bb
    MOVSD.REP ES:EDI,ESI                ; 005885be
    FLD float ptr [ESP]                 ; 005885c0
    FLD float ptr [ESP + 0x4]           ; 005885c3
    FLD float ptr [ESP + 0x8]           ; 005885c7
    LEA EDI,[ESP + 0x54]                ; 005885cb
    LEA ESI,[ESP + 0x30]                ; 005885cf
    FXCH ST2                            ; 005885d3
    FADD float ptr [ESP + 0xc]          ; 005885d5
    FXCH                                ; 005885d9
    FADD float ptr [ESP + 0x10]         ; 005885db
    FXCH ST2                            ; 005885df
    FADD float ptr [ESP + 0x14]         ; 005885e1
    FXCH                                ; 005885e5
    FSTP float ptr [ESP + 0x30]         ; 005885e7
    FXCH                                ; 005885eb
    FSTP float ptr [ESP + 0x34]         ; 005885ed
    FSTP float ptr [ESP + 0x38]         ; 005885f1
    MOVSD ES:EDI,ESI                    ; 005885f5
    MOVSD ES:EDI,ESI                    ; 005885f6
    MOVSD ES:EDI,ESI                    ; 005885f7
    FLD float ptr [0x005d839f]          ; 005885f8 | DAT_005d839f
    FLD float ptr [ESP + 0x54]          ; 005885fe
    FMUL ST1                            ; 00588602
    FLD float ptr [ESP + 0x58]          ; 00588604
    FMUL ST2                            ; 00588608
    FLD float ptr [ESP + 0x5c]          ; 0058860a
    FMULP ST3                           ; 0058860e
    FLD float ptr [ESP + 0x8]           ; 00588610
    LEA EDI,[ESP + 0x3c]                ; 00588614
    LEA ESI,[ESP + 0x48]                ; 00588618
    FXCH ST2                            ; 0058861c
    FSTP float ptr [ESP + 0x48]         ; 0058861e
    FSTP float ptr [ESP + 0x4c]         ; 00588622
    FXCH                                ; 00588626
    FSTP float ptr [ESP + 0x50]         ; 00588628
    MOVSD ES:EDI,ESI                    ; 0058862c
    MOVSD ES:EDI,ESI                    ; 0058862d
    MOVSD ES:EDI,ESI                    ; 0058862e
    FADD double ptr [0x005d83a7]        ; 0058862f | DAT_005d83a7
    LEA ESI,[ESP + 0x3c]                ; 00588635
    MOV EDI,EBX                         ; 00588639
    FSTP float ptr [ESP + 0x44]         ; 0058863b
    MOVSD ES:EDI,ESI                    ; 0058863f
    MOVSD ES:EDI,ESI                    ; 00588640
    MOVSD ES:EDI,ESI                    ; 00588641
    MOV EAX,EBX                         ; 00588642
    MOV ESP,EBP                         ; 00588644
    POP EBP                             ; 00588646
    POP EDI                             ; 00588647
    POP EBX                             ; 00588648
    RET                                 ; 00588649


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_crate_cpp_FUN_00449530(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d735f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449530
        ;   Label: core_crate.cpp_FUN_00449530
    PUSH ESI                            ; 00449531
    PUSH EDI                            ; 00449532
    SUB ESP,0x60                        ; 00449533
    MOV ESI,dword ptr [ESP + 0x70]      ; 00449536
    MOV EBX,dword ptr [ESP + 0x74]      ; 0044953a
    PUSH ESI                            ; 0044953e
    MOV EAX,dword ptr [ESI + 0x154]     ; 0044953f
    LEA ESI,[ESP + 0x1c]                ; 00449545
    LEA EDI,[ESP + 0x4]                 ; 00449549
    CALL dword ptr [EAX + 0x1c]         ; 0044954d
    MOV ECX,0x6                         ; 00449550
    LEA ESI,[ESP + 0x1c]                ; 00449555
    ADD ESP,0x4                         ; 00449559
    MOVSD.REP ES:EDI,ESI                ; 0044955c
    MOV EAX,ESP                         ; 0044955e
    FLD float ptr [ESP]                 ; 00449560
    FLD float ptr [ESP + 0x4]           ; 00449563
    FLD float ptr [ESP + 0x8]           ; 00449567
    LEA EDI,[ESP + 0x48]                ; 0044956b
    LEA ESI,[ESP + 0x3c]                ; 0044956f
    FXCH ST2                            ; 00449573
    FADD float ptr [EAX + 0xc]          ; 00449575
    FXCH                                ; 00449578
    FADD float ptr [EAX + 0x10]         ; 0044957a
    FXCH ST2                            ; 0044957d
    FADD float ptr [EAX + 0x14]         ; 0044957f
    FXCH                                ; 00449582
    FSTP float ptr [ESP + 0x3c]         ; 00449584
    FXCH                                ; 00449588
    FSTP float ptr [ESP + 0x40]         ; 0044958a
    FSTP float ptr [ESP + 0x44]         ; 0044958e
    MOVSD ES:EDI,ESI                    ; 00449592
    MOVSD ES:EDI,ESI                    ; 00449593
    MOVSD ES:EDI,ESI                    ; 00449594
    FLD float ptr [0x005d735f]          ; 00449595 | DAT_005d735f
    FLD float ptr [ESP + 0x48]          ; 0044959b
    FMUL ST1                            ; 0044959f
    FLD float ptr [ESP + 0x4c]          ; 004495a1
    FMUL ST2                            ; 004495a5
    FLD float ptr [ESP + 0x50]          ; 004495a7
    FMULP ST3                           ; 004495ab
    LEA EAX,[ESP + 0x30]                ; 004495ad
    LEA EDI,[ESP + 0x30]                ; 004495b1
    LEA ESI,[ESP + 0x54]                ; 004495b5
    FXCH                                ; 004495b9
    FSTP float ptr [ESP + 0x54]         ; 004495bb
    FSTP float ptr [ESP + 0x58]         ; 004495bf
    FSTP float ptr [ESP + 0x5c]         ; 004495c3
    MOVSD ES:EDI,ESI                    ; 004495c7
    MOVSD ES:EDI,ESI                    ; 004495c8
    MOVSD ES:EDI,ESI                    ; 004495c9
    CMP EBX,EAX                         ; 004495ca
    JNZ 0x004495da                      ; 004495cc
        ;   XREF to: 004495da (CONDITIONAL_JUMP)  ; LAB_004495da
    MOV EAX,0x1                         ; 004495ce
    ADD ESP,0x60                        ; 004495d3
    POP EDI                             ; 004495d6
    POP ESI                             ; 004495d7
    POP EBX                             ; 004495d8
    RET                                 ; 004495d9
    MOV EAX,dword ptr [ESP + 0x30]      ; 004495da
        ;   Label: LAB_004495da
    MOV dword ptr [EBX],EAX             ; 004495de
    MOV EAX,dword ptr [ESP + 0x34]      ; 004495e0
    MOV dword ptr [EBX + 0x4],EAX       ; 004495e4
    MOV EAX,dword ptr [ESP + 0x38]      ; 004495e7
    MOV dword ptr [EBX + 0x8],EAX       ; 004495eb
    MOV EAX,0x1                         ; 004495ee
    ADD ESP,0x60                        ; 004495f3
    POP EDI                             ; 004495f6
    POP ESI                             ; 004495f7
    POP EBX                             ; 004495f8
    RET                                 ; 004495f9


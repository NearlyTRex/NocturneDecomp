; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_00428390(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d51ad
;   undefined4 DAT_005d51b5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428390
        ;   Label: core_carved.cpp_FUN_00428390
    PUSH EDI                            ; 00428391
    PUSH EBP                            ; 00428392
    MOV EBP,ESP                         ; 00428393
    SUB ESP,0x60                        ; 00428395
    AND ESP,0xfffffff8                  ; 00428398
    MOV EBX,ESI                         ; 0042839b
    MOV ESI,dword ptr [EBP + 0x10]      ; 0042839d
    PUSH ESI                            ; 004283a0
    MOV EAX,dword ptr [ESI + 0x154]     ; 004283a1
    LEA ESI,[ESP + 0x1c]                ; 004283a7
    LEA EDI,[ESP + 0x4]                 ; 004283ab
    CALL dword ptr [EAX + 0x1c]         ; 004283af
    MOV ECX,0x6                         ; 004283b2
    LEA ESI,[ESP + 0x1c]                ; 004283b7
    ADD ESP,0x4                         ; 004283bb
    MOVSD.REP ES:EDI,ESI                ; 004283be
    FLD float ptr [ESP]                 ; 004283c0
    FLD float ptr [ESP + 0x4]           ; 004283c3
    FLD float ptr [ESP + 0x8]           ; 004283c7
    LEA EDI,[ESP + 0x54]                ; 004283cb
    LEA ESI,[ESP + 0x30]                ; 004283cf
    FXCH ST2                            ; 004283d3
    FADD float ptr [ESP + 0xc]          ; 004283d5
    FXCH                                ; 004283d9
    FADD float ptr [ESP + 0x10]         ; 004283db
    FXCH ST2                            ; 004283df
    FADD float ptr [ESP + 0x14]         ; 004283e1
    FXCH                                ; 004283e5
    FSTP float ptr [ESP + 0x30]         ; 004283e7
    FXCH                                ; 004283eb
    FSTP float ptr [ESP + 0x34]         ; 004283ed
    FSTP float ptr [ESP + 0x38]         ; 004283f1
    MOVSD ES:EDI,ESI                    ; 004283f5
    MOVSD ES:EDI,ESI                    ; 004283f6
    MOVSD ES:EDI,ESI                    ; 004283f7
    FLD float ptr [0x005d51ad]          ; 004283f8 | DAT_005d51ad
    FLD float ptr [ESP + 0x54]          ; 004283fe
    FMUL ST1                            ; 00428402
    FLD float ptr [ESP + 0x58]          ; 00428404
    FMUL ST2                            ; 00428408
    FLD float ptr [ESP + 0x5c]          ; 0042840a
    FMULP ST3                           ; 0042840e
    FLD float ptr [ESP + 0x8]           ; 00428410
    LEA EDI,[ESP + 0x3c]                ; 00428414
    LEA ESI,[ESP + 0x48]                ; 00428418
    FXCH ST2                            ; 0042841c
    FSTP float ptr [ESP + 0x48]         ; 0042841e
    FSTP float ptr [ESP + 0x4c]         ; 00428422
    FXCH                                ; 00428426
    FSTP float ptr [ESP + 0x50]         ; 00428428
    MOVSD ES:EDI,ESI                    ; 0042842c
    MOVSD ES:EDI,ESI                    ; 0042842d
    MOVSD ES:EDI,ESI                    ; 0042842e
    FADD double ptr [0x005d51b5]        ; 0042842f | DAT_005d51b5
    LEA ESI,[ESP + 0x3c]                ; 00428435
    MOV EDI,EBX                         ; 00428439
    FSTP float ptr [ESP + 0x44]         ; 0042843b
    MOVSD ES:EDI,ESI                    ; 0042843f
    MOVSD ES:EDI,ESI                    ; 00428440
    MOVSD ES:EDI,ESI                    ; 00428441
    MOV EAX,EBX                         ; 00428442
    MOV ESP,EBP                         ; 00428444
    POP EBP                             ; 00428446
    POP EDI                             ; 00428447
    POP EBX                             ; 00428448
    RET                                 ; 00428449


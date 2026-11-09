; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_enemy_cpp_FUN_00488250(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d2dc9
;   undefined4 DAT_005d2dd1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488250
        ;   Label: core_enemy.cpp_FUN_00488250
    PUSH EDI                            ; 00488251
    PUSH EBP                            ; 00488252
    MOV EBP,ESP                         ; 00488253
    SUB ESP,0x60                        ; 00488255
    AND ESP,0xfffffff8                  ; 00488258
    MOV EBX,ESI                         ; 0048825b
    MOV ESI,dword ptr [EBP + 0x10]      ; 0048825d
    PUSH ESI                            ; 00488260
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00488261
    LEA ESI,[ESP + 0x4]                 ; 00488267
    LEA EDI,[ESP + 0x1c]                ; 0048826b
    CALL dword ptr [EAX + 0x24]         ; 0048826f
    MOV ECX,0x6                         ; 00488272
    LEA ESI,[ESP + 0x4]                 ; 00488277
    ADD ESP,0x4                         ; 0048827b
    MOVSD.REP ES:EDI,ESI                ; 0048827e
    FLD float ptr [ESP + 0x28]          ; 00488280
    FSUB float ptr [ESP + 0x1c]         ; 00488284
    FMUL double ptr [0x005d2dd1]        ; 00488288 | DAT_005d2dd1
    FLD float ptr [ESP + 0x18]          ; 0048828e
    FLD float ptr [ESP + 0x1c]          ; 00488292
    FLD float ptr [ESP + 0x20]          ; 00488296
    LEA EDI,[ESP + 0x48]                ; 0048829a
    LEA ESI,[ESP + 0x54]                ; 0048829e
    FXCH ST2                            ; 004882a2
    FADD float ptr [ESP + 0x24]         ; 004882a4
    FXCH                                ; 004882a8
    FADD float ptr [ESP + 0x28]         ; 004882aa
    FXCH ST2                            ; 004882ae
    FADD float ptr [ESP + 0x2c]         ; 004882b0
    FXCH                                ; 004882b4
    FSTP float ptr [ESP + 0x54]         ; 004882b6
    FXCH                                ; 004882ba
    FSTP float ptr [ESP + 0x58]         ; 004882bc
    FSTP float ptr [ESP + 0x5c]         ; 004882c0
    MOVSD ES:EDI,ESI                    ; 004882c4
    MOVSD ES:EDI,ESI                    ; 004882c5
    MOVSD ES:EDI,ESI                    ; 004882c6
    FLD float ptr [0x005d2dc9]          ; 004882c7 | DAT_005d2dc9
    FLD float ptr [ESP + 0x48]          ; 004882cd
    FMUL ST1                            ; 004882d1
    FLD float ptr [ESP + 0x4c]          ; 004882d3
    FMUL ST2                            ; 004882d7
    FLD float ptr [ESP + 0x50]          ; 004882d9
    FMULP ST3                           ; 004882dd
    FLD float ptr [ESP + 0x28]          ; 004882df
    LEA EDI,[ESP + 0x30]                ; 004882e3
    LEA ESI,[ESP + 0x3c]                ; 004882e7
    FXCH ST2                            ; 004882eb
    FSTP float ptr [ESP + 0x3c]         ; 004882ed
    FSTP float ptr [ESP + 0x40]         ; 004882f1
    FXCH                                ; 004882f5
    FSTP float ptr [ESP + 0x44]         ; 004882f7
    MOVSD ES:EDI,ESI                    ; 004882fb
    MOVSD ES:EDI,ESI                    ; 004882fc
    MOVSD ES:EDI,ESI                    ; 004882fd
    FSUBRP                              ; 004882fe
    LEA ESI,[ESP + 0x30]                ; 00488300
    MOV EDI,EBX                         ; 00488304
    FSTP float ptr [ESP + 0x34]         ; 00488306
    MOVSD ES:EDI,ESI                    ; 0048830a
    MOVSD ES:EDI,ESI                    ; 0048830b
    MOVSD ES:EDI,ESI                    ; 0048830c
    MOV EAX,EBX                         ; 0048830d
    MOV ESP,EBP                         ; 0048830f
    POP EBP                             ; 00488311
    POP EDI                             ; 00488312
    POP EBX                             ; 00488313
    RET                                 ; 00488314


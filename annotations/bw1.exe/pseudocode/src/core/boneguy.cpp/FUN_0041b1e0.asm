; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boneguy_cpp_FUN_0041b1e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d4541
;   undefined4 DAT_005d4549
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b1e0
        ;   Label: core_boneguy.cpp_FUN_0041b1e0
    PUSH EDI                            ; 0041b1e1
    PUSH EBP                            ; 0041b1e2
    MOV EBP,ESP                         ; 0041b1e3
    SUB ESP,0x60                        ; 0041b1e5
    AND ESP,0xfffffff8                  ; 0041b1e8
    MOV EBX,ESI                         ; 0041b1eb
    MOV ESI,dword ptr [EBP + 0x10]      ; 0041b1ed
    PUSH ESI                            ; 0041b1f0
    MOV EAX,dword ptr [ESI + 0x154]     ; 0041b1f1
    LEA ESI,[ESP + 0x1c]                ; 0041b1f7
    LEA EDI,[ESP + 0x4]                 ; 0041b1fb
    CALL dword ptr [EAX + 0x1c]         ; 0041b1ff
    MOV ECX,0x6                         ; 0041b202
    LEA ESI,[ESP + 0x1c]                ; 0041b207
    ADD ESP,0x4                         ; 0041b20b
    MOVSD.REP ES:EDI,ESI                ; 0041b20e
    FLD float ptr [ESP]                 ; 0041b210
    FLD float ptr [ESP + 0x4]           ; 0041b213
    FLD float ptr [ESP + 0x8]           ; 0041b217
    LEA EDI,[ESP + 0x54]                ; 0041b21b
    LEA ESI,[ESP + 0x30]                ; 0041b21f
    FXCH ST2                            ; 0041b223
    FADD float ptr [ESP + 0xc]          ; 0041b225
    FXCH                                ; 0041b229
    FADD float ptr [ESP + 0x10]         ; 0041b22b
    FXCH ST2                            ; 0041b22f
    FADD float ptr [ESP + 0x14]         ; 0041b231
    FXCH                                ; 0041b235
    FSTP float ptr [ESP + 0x30]         ; 0041b237
    FXCH                                ; 0041b23b
    FSTP float ptr [ESP + 0x34]         ; 0041b23d
    FSTP float ptr [ESP + 0x38]         ; 0041b241
    MOVSD ES:EDI,ESI                    ; 0041b245
    MOVSD ES:EDI,ESI                    ; 0041b246
    MOVSD ES:EDI,ESI                    ; 0041b247
    FLD float ptr [0x005d4541]          ; 0041b248 | DAT_005d4541
    FLD float ptr [ESP + 0x54]          ; 0041b24e
    FMUL ST1                            ; 0041b252
    FLD float ptr [ESP + 0x58]          ; 0041b254
    FMUL ST2                            ; 0041b258
    FLD float ptr [ESP + 0x5c]          ; 0041b25a
    FMULP ST3                           ; 0041b25e
    FLD float ptr [ESP + 0x8]           ; 0041b260
    LEA EDI,[ESP + 0x3c]                ; 0041b264
    LEA ESI,[ESP + 0x48]                ; 0041b268
    FXCH ST2                            ; 0041b26c
    FSTP float ptr [ESP + 0x48]         ; 0041b26e
    FSTP float ptr [ESP + 0x4c]         ; 0041b272
    FXCH                                ; 0041b276
    FSTP float ptr [ESP + 0x50]         ; 0041b278
    MOVSD ES:EDI,ESI                    ; 0041b27c
    MOVSD ES:EDI,ESI                    ; 0041b27d
    MOVSD ES:EDI,ESI                    ; 0041b27e
    FADD double ptr [0x005d4549]        ; 0041b27f | DAT_005d4549
    LEA ESI,[ESP + 0x3c]                ; 0041b285
    MOV EDI,EBX                         ; 0041b289
    FSTP float ptr [ESP + 0x44]         ; 0041b28b
    MOVSD ES:EDI,ESI                    ; 0041b28f
    MOVSD ES:EDI,ESI                    ; 0041b290
    MOVSD ES:EDI,ESI                    ; 0041b291
    MOV EAX,EBX                         ; 0041b292
    MOV ESP,EBP                         ; 0041b294
    POP EBP                             ; 0041b296
    POP EDI                             ; 0041b297
    POP EBX                             ; 0041b298
    RET                                 ; 0041b299


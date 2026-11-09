; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombprie_cpp_FUN_0058d2f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d89ec
;   undefined4 DAT_005d89f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058d2f0
        ;   Label: core_zombprie.cpp_FUN_0058d2f0
    PUSH EDI                            ; 0058d2f1
    PUSH EBP                            ; 0058d2f2
    MOV EBP,ESP                         ; 0058d2f3
    SUB ESP,0x60                        ; 0058d2f5
    AND ESP,0xfffffff8                  ; 0058d2f8
    MOV EBX,ESI                         ; 0058d2fb
    MOV ESI,dword ptr [EBP + 0x10]      ; 0058d2fd
    PUSH ESI                            ; 0058d300
    MOV EAX,dword ptr [ESI + 0x154]     ; 0058d301
    LEA ESI,[ESP + 0x1c]                ; 0058d307
    LEA EDI,[ESP + 0x4]                 ; 0058d30b
    CALL dword ptr [EAX + 0x1c]         ; 0058d30f
    MOV ECX,0x6                         ; 0058d312
    LEA ESI,[ESP + 0x1c]                ; 0058d317
    ADD ESP,0x4                         ; 0058d31b
    MOVSD.REP ES:EDI,ESI                ; 0058d31e
    FLD float ptr [ESP]                 ; 0058d320
    FLD float ptr [ESP + 0x4]           ; 0058d323
    FLD float ptr [ESP + 0x8]           ; 0058d327
    LEA EDI,[ESP + 0x54]                ; 0058d32b
    LEA ESI,[ESP + 0x30]                ; 0058d32f
    FXCH ST2                            ; 0058d333
    FADD float ptr [ESP + 0xc]          ; 0058d335
    FXCH                                ; 0058d339
    FADD float ptr [ESP + 0x10]         ; 0058d33b
    FXCH ST2                            ; 0058d33f
    FADD float ptr [ESP + 0x14]         ; 0058d341
    FXCH                                ; 0058d345
    FSTP float ptr [ESP + 0x30]         ; 0058d347
    FXCH                                ; 0058d34b
    FSTP float ptr [ESP + 0x34]         ; 0058d34d
    FSTP float ptr [ESP + 0x38]         ; 0058d351
    MOVSD ES:EDI,ESI                    ; 0058d355
    MOVSD ES:EDI,ESI                    ; 0058d356
    MOVSD ES:EDI,ESI                    ; 0058d357
    FLD float ptr [0x005d89ec]          ; 0058d358 | DAT_005d89ec
    FLD float ptr [ESP + 0x54]          ; 0058d35e
    FMUL ST1                            ; 0058d362
    FLD float ptr [ESP + 0x58]          ; 0058d364
    FMUL ST2                            ; 0058d368
    FLD float ptr [ESP + 0x5c]          ; 0058d36a
    FMULP ST3                           ; 0058d36e
    FLD float ptr [ESP + 0x8]           ; 0058d370
    LEA EDI,[ESP + 0x3c]                ; 0058d374
    LEA ESI,[ESP + 0x48]                ; 0058d378
    FXCH ST2                            ; 0058d37c
    FSTP float ptr [ESP + 0x48]         ; 0058d37e
    FSTP float ptr [ESP + 0x4c]         ; 0058d382
    FXCH                                ; 0058d386
    FSTP float ptr [ESP + 0x50]         ; 0058d388
    MOVSD ES:EDI,ESI                    ; 0058d38c
    MOVSD ES:EDI,ESI                    ; 0058d38d
    MOVSD ES:EDI,ESI                    ; 0058d38e
    FADD double ptr [0x005d89f0]        ; 0058d38f | DAT_005d89f0
    LEA ESI,[ESP + 0x3c]                ; 0058d395
    MOV EDI,EBX                         ; 0058d399
    FSTP float ptr [ESP + 0x44]         ; 0058d39b
    MOVSD ES:EDI,ESI                    ; 0058d39f
    MOVSD ES:EDI,ESI                    ; 0058d3a0
    MOVSD ES:EDI,ESI                    ; 0058d3a1
    MOV EAX,EBX                         ; 0058d3a2
    MOV ESP,EBP                         ; 0058d3a4
    POP EBP                             ; 0058d3a6
    POP EDI                             ; 0058d3a7
    POP EBX                             ; 0058d3a8
    RET                                 ; 0058d3a9


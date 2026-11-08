; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a7300(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005c0cb4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7300
        ;   Label: FUN_004a7300
    PUSH ESI                            ; 004a7301
    PUSH EDI                            ; 004a7302
    SUB ESP,0x60                        ; 004a7303
    MOV ESI,dword ptr [ESP + 0x70]      ; 004a7306
    MOV EBX,dword ptr [ESP + 0x74]      ; 004a730a
    PUSH ESI                            ; 004a730e
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a730f
    LEA ESI,[ESP + 0x1c]                ; 004a7315
    LEA EDI,[ESP + 0x4]                 ; 004a7319
    CALL dword ptr [EAX + 0x1c]         ; 004a731d
    MOV ECX,0x6                         ; 004a7320
    LEA ESI,[ESP + 0x1c]                ; 004a7325
    ADD ESP,0x4                         ; 004a7329
    MOVSD.REP ES:EDI,ESI                ; 004a732c
    MOV EAX,ESP                         ; 004a732e
    FLD float ptr [ESP]                 ; 004a7330
    FLD float ptr [ESP + 0x4]           ; 004a7333
    FLD float ptr [ESP + 0x8]           ; 004a7337
    LEA EDI,[ESP + 0x48]                ; 004a733b
    LEA ESI,[ESP + 0x3c]                ; 004a733f
    FXCH ST2                            ; 004a7343
    FADD float ptr [EAX + 0xc]          ; 004a7345
    FXCH                                ; 004a7348
    FADD float ptr [EAX + 0x10]         ; 004a734a
    FXCH ST2                            ; 004a734d
    FADD float ptr [EAX + 0x14]         ; 004a734f
    FXCH                                ; 004a7352
    FSTP float ptr [ESP + 0x3c]         ; 004a7354
    FXCH                                ; 004a7358
    FSTP float ptr [ESP + 0x40]         ; 004a735a
    FSTP float ptr [ESP + 0x44]         ; 004a735e
    MOVSD ES:EDI,ESI                    ; 004a7362
    MOVSD ES:EDI,ESI                    ; 004a7363
    MOVSD ES:EDI,ESI                    ; 004a7364
    FLD float ptr [0x005c0cb4]          ; 004a7365 | DAT_005c0cb4
    FLD float ptr [ESP + 0x48]          ; 004a736b
    FMUL ST1                            ; 004a736f
    FLD float ptr [ESP + 0x4c]          ; 004a7371
    FMUL ST2                            ; 004a7375
    FLD float ptr [ESP + 0x50]          ; 004a7377
    FMULP ST3                           ; 004a737b
    LEA EAX,[ESP + 0x30]                ; 004a737d
    LEA EDI,[ESP + 0x30]                ; 004a7381
    LEA ESI,[ESP + 0x54]                ; 004a7385
    FXCH                                ; 004a7389
    FSTP float ptr [ESP + 0x54]         ; 004a738b
    FSTP float ptr [ESP + 0x58]         ; 004a738f
    FSTP float ptr [ESP + 0x5c]         ; 004a7393
    MOVSD ES:EDI,ESI                    ; 004a7397
    MOVSD ES:EDI,ESI                    ; 004a7398
    MOVSD ES:EDI,ESI                    ; 004a7399
    CMP EBX,EAX                         ; 004a739a
    JNZ 0x004a73aa                      ; 004a739c
        ;   XREF to: 004a73aa (CONDITIONAL_JUMP)  ; LAB_004a73aa
    MOV EAX,0x1                         ; 004a739e
    ADD ESP,0x60                        ; 004a73a3
    POP EDI                             ; 004a73a6
    POP ESI                             ; 004a73a7
    POP EBX                             ; 004a73a8
    RET                                 ; 004a73a9
    MOV EAX,dword ptr [ESP + 0x30]      ; 004a73aa
        ;   Label: LAB_004a73aa
    MOV dword ptr [EBX],EAX             ; 004a73ae
    MOV EAX,dword ptr [ESP + 0x34]      ; 004a73b0
    MOV dword ptr [EBX + 0x4],EAX       ; 004a73b4
    MOV EAX,dword ptr [ESP + 0x38]      ; 004a73b7
    MOV dword ptr [EBX + 0x8],EAX       ; 004a73bb
    MOV EAX,0x1                         ; 004a73be
    ADD ESP,0x60                        ; 004a73c3
    POP EDI                             ; 004a73c6
    POP ESI                             ; 004a73c7
    POP EBX                             ; 004a73c8
    RET                                 ; 004a73c9


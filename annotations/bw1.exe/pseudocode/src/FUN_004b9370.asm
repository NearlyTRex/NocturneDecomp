; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b9370(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005df79f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9370
        ;   Label: FUN_004b9370
    PUSH ESI                            ; 004b9371
    PUSH EDI                            ; 004b9372
    SUB ESP,0x60                        ; 004b9373
    MOV ESI,dword ptr [ESP + 0x70]      ; 004b9376
    MOV EBX,dword ptr [ESP + 0x74]      ; 004b937a
    PUSH ESI                            ; 004b937e
    MOV EAX,dword ptr [ESI + 0x154]     ; 004b937f
    LEA ESI,[ESP + 0x1c]                ; 004b9385
    LEA EDI,[ESP + 0x4]                 ; 004b9389
    CALL dword ptr [EAX + 0x1c]         ; 004b938d
    MOV ECX,0x6                         ; 004b9390
    LEA ESI,[ESP + 0x1c]                ; 004b9395
    ADD ESP,0x4                         ; 004b9399
    MOVSD.REP ES:EDI,ESI                ; 004b939c
    MOV EAX,ESP                         ; 004b939e
    FLD float ptr [ESP]                 ; 004b93a0
    FLD float ptr [ESP + 0x4]           ; 004b93a3
    FLD float ptr [ESP + 0x8]           ; 004b93a7
    LEA EDI,[ESP + 0x48]                ; 004b93ab
    LEA ESI,[ESP + 0x3c]                ; 004b93af
    FXCH ST2                            ; 004b93b3
    FADD float ptr [EAX + 0xc]          ; 004b93b5
    FXCH                                ; 004b93b8
    FADD float ptr [EAX + 0x10]         ; 004b93ba
    FXCH ST2                            ; 004b93bd
    FADD float ptr [EAX + 0x14]         ; 004b93bf
    FXCH                                ; 004b93c2
    FSTP float ptr [ESP + 0x3c]         ; 004b93c4
    FXCH                                ; 004b93c8
    FSTP float ptr [ESP + 0x40]         ; 004b93ca
    FSTP float ptr [ESP + 0x44]         ; 004b93ce
    MOVSD ES:EDI,ESI                    ; 004b93d2
    MOVSD ES:EDI,ESI                    ; 004b93d3
    MOVSD ES:EDI,ESI                    ; 004b93d4
    FLD float ptr [0x005df79f]          ; 004b93d5 | DAT_005df79f
    FLD float ptr [ESP + 0x48]          ; 004b93db
    FMUL ST1                            ; 004b93df
    FLD float ptr [ESP + 0x4c]          ; 004b93e1
    FMUL ST2                            ; 004b93e5
    FLD float ptr [ESP + 0x50]          ; 004b93e7
    FMULP ST3                           ; 004b93eb
    LEA EAX,[ESP + 0x30]                ; 004b93ed
    LEA EDI,[ESP + 0x30]                ; 004b93f1
    LEA ESI,[ESP + 0x54]                ; 004b93f5
    FXCH                                ; 004b93f9
    FSTP float ptr [ESP + 0x54]         ; 004b93fb
    FSTP float ptr [ESP + 0x58]         ; 004b93ff
    FSTP float ptr [ESP + 0x5c]         ; 004b9403
    MOVSD ES:EDI,ESI                    ; 004b9407
    MOVSD ES:EDI,ESI                    ; 004b9408
    MOVSD ES:EDI,ESI                    ; 004b9409
    CMP EBX,EAX                         ; 004b940a
    JNZ 0x004b941a                      ; 004b940c
        ;   XREF to: 004b941a (CONDITIONAL_JUMP)  ; LAB_004b941a
    MOV EAX,0x1                         ; 004b940e
    ADD ESP,0x60                        ; 004b9413
    POP EDI                             ; 004b9416
    POP ESI                             ; 004b9417
    POP EBX                             ; 004b9418
    RET                                 ; 004b9419
    MOV EAX,dword ptr [ESP + 0x30]      ; 004b941a
        ;   Label: LAB_004b941a
    MOV dword ptr [EBX],EAX             ; 004b941e
    MOV EAX,dword ptr [ESP + 0x34]      ; 004b9420
    MOV dword ptr [EBX + 0x4],EAX       ; 004b9424
    MOV EAX,dword ptr [ESP + 0x38]      ; 004b9427
    MOV dword ptr [EBX + 0x8],EAX       ; 004b942b
    MOV EAX,0x1                         ; 004b942e
    ADD ESP,0x60                        ; 004b9433
    POP EDI                             ; 004b9436
    POP ESI                             ; 004b9437
    POP EBX                             ; 004b9438
    RET                                 ; 004b9439


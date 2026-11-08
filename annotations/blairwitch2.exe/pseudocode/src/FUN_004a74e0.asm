; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a74e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d6701
;   undefined4 DAT_005d6709
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a74e0
        ;   Label: FUN_004a74e0
    PUSH EDI                            ; 004a74e1
    SUB ESP,0x20                        ; 004a74e2
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004a74e5
    MOV EDX,ESI                         ; 004a74e9
    FLD float ptr [ECX + 0x2b4]         ; 004a74eb
    FLD ST0                             ; 004a74f1
    FLD double ptr [0x005d6701]         ; 004a74f3 | DAT_005d6701
    FXCH                                ; 004a74f9
    FMUL ST1                            ; 004a74fb
    FXCH ST2                            ; 004a74fd
    FLD double ptr [0x005d6709]         ; 004a74ff | DAT_005d6709
    FXCH                                ; 004a7505
    FMUL ST1                            ; 004a7507
    FLD float ptr [ECX + 0x2bc]         ; 004a7509
    FMUL ST3                            ; 004a750f
    FMULP ST2                           ; 004a7511
    MOV EDI,ESI                         ; 004a7513
    MOV EAX,dword ptr [ECX + 0x2b8]     ; 004a7515
    XOR EBX,EBX                         ; 004a751b
    MOV ECX,0x6                         ; 004a751d
    MOV ESI,ESP                         ; 004a7522
    MOV dword ptr [ESP + 0x4],EBX       ; 004a7524
    MOV dword ptr [ESP + 0x10],EAX      ; 004a7528
    FXCH ST3                            ; 004a752c
    FSTP float ptr [ESP]                ; 004a752e
    FXCH ST2                            ; 004a7531
    FSTP float ptr [ESP + 0xc]          ; 004a7533
    FSTP float ptr [ESP + 0x8]          ; 004a7537
    FSTP float ptr [ESP + 0x14]         ; 004a753b
    MOVSD.REP ES:EDI,ESI                ; 004a753f
    MOV EAX,EDX                         ; 004a7541
    ADD ESP,0x20                        ; 004a7543
    POP EDI                             ; 004a7546
    POP EBX                             ; 004a7547
    RET                                 ; 004a7548


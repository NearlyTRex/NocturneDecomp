; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_carved_cpp_FUN_004282f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d51a5
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004282f0
        ;   Label: core_carved.cpp_FUN_004282f0
    SUB ESP,0x4c                        ; 004282f1
    MOV ESI,dword ptr [ESP + 0x54]      ; 004282f4
    MOV dword ptr [ESP + 0x48],0x3f800000 ; 004282f8
    TEST ESI,ESI                        ; 00428300
    JNZ 0x0042830d                      ; 00428302
        ;   XREF to: 0042830d (CONDITIONAL_JUMP)  ; LAB_0042830d
    MOV EAX,dword ptr [ESP + 0x48]      ; 00428304
    ADD ESP,0x4c                        ; 00428308
    POP ESI                             ; 0042830b
    RET                                 ; 0042830c
    PUSH EDI                            ; 0042830d
        ;   Label: LAB_0042830d
    PUSH ESI                            ; 0042830e
    MOV EAX,dword ptr [ESI + 0x154]     ; 0042830f
    LEA ESI,[ESP + 0x20]                ; 00428315
    LEA EDI,[ESP + 0x8]                 ; 00428319
    CALL dword ptr [EAX + 0x1c]         ; 0042831d
    MOV ECX,0x6                         ; 00428320
    LEA ESI,[ESP + 0x20]                ; 00428325
    ADD ESP,0x4                         ; 00428329
    LEA EAX,[ESP + 0x4]                 ; 0042832c
    MOVSD.REP ES:EDI,ESI                ; 00428330
    FLD float ptr [EAX + 0xc]           ; 00428332
    FLD float ptr [EAX + 0x10]          ; 00428335
    FLD float ptr [EAX + 0x14]          ; 00428338
    LEA EDI,[ESP + 0x40]                ; 0042833b
    LEA ESI,[ESP + 0x34]                ; 0042833f
    FXCH ST2                            ; 00428343
    FSUB float ptr [ESP + 0x4]          ; 00428345
    FXCH                                ; 00428349
    FSUB float ptr [ESP + 0x8]          ; 0042834b
    FXCH ST2                            ; 0042834f
    FSUB float ptr [ESP + 0xc]          ; 00428351
    FXCH                                ; 00428355
    FSTP float ptr [ESP + 0x34]         ; 00428357
    FXCH                                ; 0042835b
    FSTP float ptr [ESP + 0x38]         ; 0042835d
    FSTP float ptr [ESP + 0x3c]         ; 00428361
    MOVSD ES:EDI,ESI                    ; 00428365
    MOVSD ES:EDI,ESI                    ; 00428366
    MOVSD ES:EDI,ESI                    ; 00428367
    FLD float ptr [ESP + 0x48]          ; 00428368
    FMUL double ptr [0x005d51a5]        ; 0042836c | DAT_005d51a5
    FLD1                                ; 00428372
    FADDP                               ; 00428374
    FSTP float ptr [ESP + 0x4c]         ; 00428376
    POP EDI                             ; 0042837a
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042837b
    ADD ESP,0x4c                        ; 0042837f
    POP ESI                             ; 00428382
    RET                                 ; 00428383


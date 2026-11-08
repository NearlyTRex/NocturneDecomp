; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005062a0(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00503c90 at 0050425d
;   FUN_00504400 at 0050448d
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005062a0
        ;   Label: FUN_005062a0
    PUSH EDI                            ; 005062a1
    SUB ESP,0x4c                        ; 005062a2
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005062a5
    LEA EAX,[EDX*0x4 + 0x0]             ; 005062a9
    SUB EAX,EDX                         ; 005062b0
    MOV EDX,EAX                         ; 005062b2
    MOV EAX,dword ptr [ESP + 0x58]      ; 005062b4
    SHL EDX,0x5                         ; 005062b8
    ADD EAX,0x1340                      ; 005062bb
    ADD EAX,EDX                         ; 005062c0
    LEA ECX,[EAX + 0xc]                 ; 005062c2
    LEA EDX,[EAX + 0x18]                ; 005062c5
    FLD float ptr [ECX]                 ; 005062c8
    FMUL float ptr [EDX]                ; 005062ca
    FLD float ptr [ECX + 0x4]           ; 005062cc
    FMUL float ptr [EDX]                ; 005062cf
    FLD float ptr [ECX + 0x8]           ; 005062d1
    FMUL float ptr [EDX]                ; 005062d4
    LEA EDI,[ESP + 0x18]                ; 005062d6
    LEA ESI,[ESP + 0x30]                ; 005062da
    FXCH ST2                            ; 005062de
    FSTP float ptr [ESP + 0x30]         ; 005062e0
    FSTP float ptr [ESP + 0x34]         ; 005062e4
    FSTP float ptr [ESP + 0x38]         ; 005062e8
    MOVSD ES:EDI,ESI                    ; 005062ec
    MOVSD ES:EDI,ESI                    ; 005062ed
    MOVSD ES:EDI,ESI                    ; 005062ee
    FLD float ptr [EAX + 0x18]          ; 005062ef
    FLD1                                ; 005062f2
    FSUBRP                              ; 005062f4
    FLD float ptr [EAX]                 ; 005062f6
    FXCH                                ; 005062f8
    FSTP float ptr [ESP + 0x48]         ; 005062fa
    FMUL float ptr [ESP + 0x48]         ; 005062fe
    FLD float ptr [EAX + 0x4]           ; 00506302
    FMUL float ptr [ESP + 0x48]         ; 00506305
    FLD float ptr [EAX + 0x8]           ; 00506309
    FMUL float ptr [ESP + 0x48]         ; 0050630c
    LEA EDX,[EAX + 0x1c]                ; 00506310
    LEA EDI,[ESP + 0x3c]                ; 00506313
    MOV ESI,ESP                         ; 00506317
    FXCH ST2                            ; 00506319
    FSTP float ptr [ESP]                ; 0050631b
    FSTP float ptr [ESP + 0x4]          ; 0050631e
    FSTP float ptr [ESP + 0x8]          ; 00506322
    MOVSD ES:EDI,ESI                    ; 00506326
    MOVSD ES:EDI,ESI                    ; 00506327
    MOVSD ES:EDI,ESI                    ; 00506328
    LEA EAX,[ESP + 0xc]                 ; 00506329
    FLD float ptr [ESP + 0x3c]          ; 0050632d
    FLD float ptr [ESP + 0x40]          ; 00506331
    FLD float ptr [ESP + 0x44]          ; 00506335
    LEA EDI,[ESP + 0xc]                 ; 00506339
    LEA ESI,[ESP + 0x24]                ; 0050633d
    FXCH ST2                            ; 00506341
    FADD float ptr [ESP + 0x18]         ; 00506343
    FXCH                                ; 00506347
    FADD float ptr [ESP + 0x1c]         ; 00506349
    FXCH ST2                            ; 0050634d
    FADD float ptr [ESP + 0x20]         ; 0050634f
    FXCH                                ; 00506353
    FSTP float ptr [ESP + 0x24]         ; 00506355
    FXCH                                ; 00506359
    FSTP float ptr [ESP + 0x28]         ; 0050635b
    FSTP float ptr [ESP + 0x2c]         ; 0050635f
    MOVSD ES:EDI,ESI                    ; 00506363
    MOVSD ES:EDI,ESI                    ; 00506364
    MOVSD ES:EDI,ESI                    ; 00506365
    CMP EDX,EAX                         ; 00506366
    JNZ 0x00506370                      ; 00506368
        ;   XREF to: 00506370 (CONDITIONAL_JUMP)  ; LAB_00506370
    ADD ESP,0x4c                        ; 0050636a
    POP EDI                             ; 0050636d
    POP ESI                             ; 0050636e
    RET                                 ; 0050636f
    MOV EAX,dword ptr [ESP + 0xc]       ; 00506370
        ;   Label: LAB_00506370
    MOV dword ptr [EDX],EAX             ; 00506374
    MOV EAX,dword ptr [ESP + 0x10]      ; 00506376
    MOV dword ptr [EDX + 0x4],EAX       ; 0050637a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050637d
    MOV dword ptr [EDX + 0x8],EAX       ; 00506381
    ADD ESP,0x4c                        ; 00506384
    POP EDI                             ; 00506387
    POP ESI                             ; 00506388
    RET                                 ; 00506389


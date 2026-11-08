; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00547280(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_0041ae00
;   FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547280
        ;   Label: FUN_00547280
    PUSH ESI                            ; 00547281
    PUSH EDI                            ; 00547282
    SUB ESP,0x60                        ; 00547283
    MOV EBX,dword ptr [ESP + 0x70]      ; 00547286
    LEA EAX,[EBX + 0x158]               ; 0054728a
    PUSH EAX                            ; 00547290
    CALL FUN_00462580                   ; 00547291
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 00547296
    PUSH EBX                            ; 00547299
    CALL FUN_00408890                   ; 0054729a
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 0054729f
    MOV EAX,dword ptr [EBX + 0x154]     ; 005472a2
    PUSH EBX                            ; 005472a8
    LEA ESI,[ESP + 0x1c]                ; 005472a9
    LEA EDI,[ESP + 0x4]                 ; 005472ad
    CALL dword ptr [EAX + 0x1c]         ; 005472b1
    MOV ECX,0x6                         ; 005472b4
    LEA ESI,[ESP + 0x1c]                ; 005472b9
    ADD ESP,0x4                         ; 005472bd
    MOVSD.REP ES:EDI,ESI                ; 005472c0
    LEA EAX,[ESP + 0x30]                ; 005472c2
    MOV ESI,ESP                         ; 005472c6
    CMP EAX,ESI                         ; 005472c8
    JNZ 0x00547391                      ; 005472ca
        ;   XREF to: 00547391 (CONDITIONAL_JUMP)  ; LAB_00547391
    LEA EAX,[ESP + 0x3c]                ; 005472d0
        ;   Label: LAB_005472d0
    ADD ESI,0xc                         ; 005472d4
    CMP EAX,ESI                         ; 005472d7
    JZ 0x005472ef                       ; 005472d9
        ;   XREF to: 005472ef (CONDITIONAL_JUMP)  ; LAB_005472ef
    MOV EAX,dword ptr [ESI]             ; 005472db
    MOV dword ptr [ESP + 0x3c],EAX      ; 005472dd
    MOV EAX,dword ptr [ESI + 0x4]       ; 005472e1
    MOV dword ptr [ESP + 0x40],EAX      ; 005472e4
    MOV EAX,dword ptr [ESI + 0x8]       ; 005472e8
    MOV dword ptr [ESP + 0x44],EAX      ; 005472eb
    FLD float ptr [ESP + 0x3c]          ; 005472ef
        ;   Label: LAB_005472ef
    FLD float ptr [ESP + 0x40]          ; 005472f3
    FLD float ptr [ESP + 0x44]          ; 005472f7
    LEA EDI,[ESP + 0x48]                ; 005472fb
    LEA ESI,[ESP + 0x54]                ; 005472ff
    FXCH ST2                            ; 00547303
    FSUB float ptr [ESP + 0x30]         ; 00547305
    FXCH                                ; 00547309
    FSUB float ptr [ESP + 0x34]         ; 0054730b
    FXCH ST2                            ; 0054730f
    FSUB float ptr [ESP + 0x38]         ; 00547311
    FXCH                                ; 00547315
    FSTP float ptr [ESP + 0x54]         ; 00547317
    FXCH                                ; 0054731b
    FSTP float ptr [ESP + 0x58]         ; 0054731d
    FSTP float ptr [ESP + 0x5c]         ; 00547321
    MOVSD ES:EDI,ESI                    ; 00547325
    MOVSD ES:EDI,ESI                    ; 00547326
    MOVSD ES:EDI,ESI                    ; 00547327
    LEA EAX,[ESP + 0x48]                ; 00547328
    PUSH dword ptr [EBX + 0x2d8]        ; 0054732c
    PUSH EAX                            ; 00547332
    LEA EAX,[EBX + 0x30]                ; 00547333
    PUSH EAX                            ; 00547336
    LEA ESI,[EBX + 0x20]                ; 00547337
    PUSH ESI                            ; 0054733a
    LEA EAX,[EBX + 0x358]               ; 0054733b
    PUSH EAX                            ; 00547341
    CALL FUN_0041ae00                   ; 00547342
        ;   XREF to: 0041ae00 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ae00()
    LEA EAX,[EBX + 0x5b4]               ; 00547347
    ADD ESP,0x14                        ; 0054734d
    CMP EAX,ESI                         ; 00547350
    JZ 0x00547364                       ; 00547352
        ;   XREF to: 00547364 (CONDITIONAL_JUMP)  ; LAB_00547364
    MOV EDX,dword ptr [ESI]             ; 00547354
    MOV dword ptr [EAX],EDX             ; 00547356
    MOV EDX,dword ptr [ESI + 0x4]       ; 00547358
    MOV dword ptr [EAX + 0x4],EDX       ; 0054735b
    MOV EDX,dword ptr [ESI + 0x8]       ; 0054735e
    MOV dword ptr [EAX + 0x8],EDX       ; 00547361
    LEA ESI,[EBX + 0x5c0]               ; 00547364
        ;   Label: LAB_00547364
    LEA EAX,[EBX + 0x30]                ; 0054736a
    CMP ESI,EAX                         ; 0054736d
    JZ 0x00547381                       ; 0054736f
        ;   XREF to: 00547381 (CONDITIONAL_JUMP)  ; LAB_00547381
    MOV EDX,dword ptr [EAX]             ; 00547371
    MOV dword ptr [ESI],EDX             ; 00547373
    MOV EDX,dword ptr [EAX + 0x4]       ; 00547375
    MOV dword ptr [ESI + 0x4],EDX       ; 00547378
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054737b
    MOV dword ptr [ESI + 0x8],EDX       ; 0054737e
    CMP dword ptr [EBX + 0x2d4],0x1     ; 00547381
        ;   Label: LAB_00547381
    JZ 0x005473ad                       ; 00547388
        ;   XREF to: 005473ad (CONDITIONAL_JUMP)  ; LAB_005473ad
    ADD ESP,0x60                        ; 0054738a
    POP EDI                             ; 0054738d
    POP ESI                             ; 0054738e
    POP EBX                             ; 0054738f
    RET                                 ; 00547390
    MOV EAX,dword ptr [ESP]             ; 00547391
        ;   Label: LAB_00547391
    MOV dword ptr [ESP + 0x30],EAX      ; 00547394
    MOV EAX,dword ptr [ESP + 0x4]       ; 00547398
    MOV dword ptr [ESP + 0x34],EAX      ; 0054739c
    MOV EAX,dword ptr [ESP + 0x8]       ; 005473a0
    MOV dword ptr [ESP + 0x38],EAX      ; 005473a4
    JMP 0x005472d0                      ; 005473a8
        ;   XREF to: 005472d0 (UNCONDITIONAL_JUMP)  ; LAB_005472d0
    MOV dword ptr [EBX + 0x5ac],0x0     ; 005473ad
        ;   Label: LAB_005473ad
    ADD ESP,0x60                        ; 005473b7
    POP EDI                             ; 005473ba
    POP ESI                             ; 005473bb
    POP EBX                             ; 005473bc
    RET                                 ; 005473bd


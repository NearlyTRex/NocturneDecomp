; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00444340(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00444340
        ;   Label: FUN_00444340
    SUB ESP,0x18                        ; 00444341
    MOV EDX,ESI                         ; 00444344
    MOV ESI,dword ptr [ESP + 0x20]      ; 00444346
    CMP dword ptr [ESI + 0xd844],0x0    ; 0044434a
    JZ 0x004443ad                       ; 00444351
        ;   XREF to: 004443ad (CONDITIONAL_JUMP)  ; LAB_004443ad
    MOV ECX,dword ptr [ESI + 0xd848]    ; 00444353
    LEA EAX,[ECX*0x8 + 0x0]             ; 00444359
    ADD EAX,ECX                         ; 00444360
    LEA ECX,[ESI + 0xd184]              ; 00444362
    MOV EDI,ESP                         ; 00444368
    LEA ESI,[ESI + 0x20]                ; 0044436a
    MOV ECX,dword ptr [ECX + EAX*0x8 + 0x44] ; 0044436d
    MOVSD ES:EDI,ESI                    ; 00444371
    MOVSD ES:EDI,ESI                    ; 00444372
    MOVSD ES:EDI,ESI                    ; 00444373
    TEST ECX,ECX                        ; 00444374
    JZ 0x00444394                       ; 00444376
        ;   XREF to: 00444394 (CONDITIONAL_JUMP)  ; LAB_00444394
    MOV EAX,ESP                         ; 00444378
    ADD ECX,0x20                        ; 0044437a
    CMP EAX,ECX                         ; 0044437d
    JZ 0x00444394                       ; 0044437f
        ;   XREF to: 00444394 (CONDITIONAL_JUMP)  ; LAB_00444394
    MOV EAX,dword ptr [ECX]             ; 00444381
    MOV dword ptr [ESP],EAX             ; 00444383
    MOV EAX,dword ptr [ECX + 0x4]       ; 00444386
    MOV dword ptr [ESP + 0x4],EAX       ; 00444389
    MOV EAX,dword ptr [ECX + 0x8]       ; 0044438d
    MOV dword ptr [ESP + 0x8],EAX       ; 00444390
    LEA EDI,[ESP + 0xc]                 ; 00444394
        ;   Label: LAB_00444394
    MOV ESI,ESP                         ; 00444398
    MOVSD ES:EDI,ESI                    ; 0044439a
    MOVSD ES:EDI,ESI                    ; 0044439b
    MOVSD ES:EDI,ESI                    ; 0044439c
    LEA ESI,[ESP + 0xc]                 ; 0044439d
    MOV EDI,EDX                         ; 004443a1
    MOVSD ES:EDI,ESI                    ; 004443a3
    MOVSD ES:EDI,ESI                    ; 004443a4
    MOVSD ES:EDI,ESI                    ; 004443a5
    MOV EAX,EDX                         ; 004443a6
    ADD ESP,0x18                        ; 004443a8
    POP EDI                             ; 004443ab
    RET                                 ; 004443ac
    LEA EDI,[ESP + 0xc]                 ; 004443ad
        ;   Label: LAB_004443ad
    LEA ESI,[ESI + 0x20]                ; 004443b1
    MOVSD ES:EDI,ESI                    ; 004443b4
    MOVSD ES:EDI,ESI                    ; 004443b5
    MOVSD ES:EDI,ESI                    ; 004443b6
    LEA ESI,[ESP + 0xc]                 ; 004443b7
    MOV EDI,EDX                         ; 004443bb
    MOVSD ES:EDI,ESI                    ; 004443bd
    MOVSD ES:EDI,ESI                    ; 004443be
    MOVSD ES:EDI,ESI                    ; 004443bf
    MOV EAX,EDX                         ; 004443c0
    ADD ESP,0x18                        ; 004443c2
    POP EDI                             ; 004443c5
    RET                                 ; 004443c6


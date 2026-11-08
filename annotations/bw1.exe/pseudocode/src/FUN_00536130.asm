; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00536130(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ecc6d
;   undefined4 DAT_005ecc75
;   undefined4 DAT_005ecc7d
;
; Called Functions:
;   FUN_00408850
;   FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536130
        ;   Label: FUN_00536130
    PUSH ESI                            ; 00536131
    PUSH EDI                            ; 00536132
    SUB ESP,0x78                        ; 00536133
    MOV EBX,dword ptr [ESP + 0x88]      ; 00536136
    LEA EAX,[EBX + 0x158]               ; 0053613d
    PUSH EAX                            ; 00536143
    CALL FUN_004688e0                   ; 00536144
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 00536149
    PUSH EBX                            ; 0053614c
    CALL FUN_00408850                   ; 0053614d
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 00536152
    MOV EAX,dword ptr [EBX + 0x154]     ; 00536155
    PUSH EBX                            ; 0053615b
    LEA ESI,[ESP + 0x4]                 ; 0053615c
    LEA EDI,[ESP + 0x1c]                ; 00536160
    CALL dword ptr [EAX + 0x1c]         ; 00536164
    MOV ECX,0x6                         ; 00536167
    LEA ESI,[ESP + 0x4]                 ; 0053616c
    ADD ESP,0x4                         ; 00536170
    MOVSD.REP ES:EDI,ESI                ; 00536173
    LEA EDX,[ESP + 0x30]                ; 00536175
    LEA ESI,[ESP + 0x18]                ; 00536179
    CMP EDX,ESI                         ; 0053617d
    JNZ 0x00536249                      ; 0053617f
        ;   XREF to: 00536249 (CONDITIONAL_JUMP)  ; LAB_00536249
    LEA EAX,[ESP + 0x3c]                ; 00536185
        ;   Label: LAB_00536185
    LEA EDX,[ESI + 0xc]                 ; 00536189
    CMP EAX,EDX                         ; 0053618c
    JZ 0x005361a4                       ; 0053618e
        ;   XREF to: 005361a4 (CONDITIONAL_JUMP)  ; LAB_005361a4
    MOV EAX,dword ptr [EDX]             ; 00536190
    MOV dword ptr [ESP + 0x3c],EAX      ; 00536192
    MOV EAX,dword ptr [EDX + 0x4]       ; 00536196
    MOV dword ptr [ESP + 0x40],EAX      ; 00536199
    MOV EAX,dword ptr [EDX + 0x8]       ; 0053619d
    MOV dword ptr [ESP + 0x44],EAX      ; 005361a0
    FLD float ptr [ESP + 0x40]          ; 005361a4
        ;   Label: LAB_005361a4
    FSUB float ptr [ESP + 0x34]         ; 005361a8
    FMUL double ptr [0x005ecc6d]        ; 005361ac | DAT_005ecc6d
    FSQRT                               ; 005361b2
    FMUL double ptr [0x005ecc75]        ; 005361b4 | DAT_005ecc75
    LEA EDI,[ESP + 0x60]                ; 005361ba
    LEA ESI,[ESP + 0x48]                ; 005361be
    FSTP float ptr [EBX + 0x3a4]        ; 005361c2
    FLD float ptr [ESP + 0x30]          ; 005361c8
    FLD float ptr [ESP + 0x34]          ; 005361cc
    FLD float ptr [ESP + 0x38]          ; 005361d0
    FXCH ST2                            ; 005361d4
    FADD float ptr [ESP + 0x3c]         ; 005361d6
    FXCH                                ; 005361da
    FADD float ptr [ESP + 0x40]         ; 005361dc
    FXCH ST2                            ; 005361e0
    FADD float ptr [ESP + 0x44]         ; 005361e2
    FXCH                                ; 005361e6
    FSTP float ptr [ESP + 0x48]         ; 005361e8
    FXCH                                ; 005361ec
    FSTP float ptr [ESP + 0x4c]         ; 005361ee
    FSTP float ptr [ESP + 0x50]         ; 005361f2
    MOVSD ES:EDI,ESI                    ; 005361f6
    MOVSD ES:EDI,ESI                    ; 005361f7
    MOVSD ES:EDI,ESI                    ; 005361f8
    FLD float ptr [0x005ecc7d]          ; 005361f9 | DAT_005ecc7d
    FLD float ptr [ESP + 0x60]          ; 005361ff
    FMUL ST1                            ; 00536203
    FLD float ptr [ESP + 0x64]          ; 00536205
    FMUL ST2                            ; 00536209
    FLD float ptr [ESP + 0x68]          ; 0053620b
    FMULP ST3                           ; 0053620f
    LEA EDX,[EBX + 0x410]               ; 00536211
    LEA EAX,[ESP + 0x54]                ; 00536217
    LEA EDI,[ESP + 0x54]                ; 0053621b
    LEA ESI,[ESP + 0x6c]                ; 0053621f
    FXCH                                ; 00536223
    FSTP float ptr [ESP + 0x6c]         ; 00536225
    FSTP float ptr [ESP + 0x70]         ; 00536229
    FSTP float ptr [ESP + 0x74]         ; 0053622d
    MOVSD ES:EDI,ESI                    ; 00536231
    MOVSD ES:EDI,ESI                    ; 00536232
    MOVSD ES:EDI,ESI                    ; 00536233
    CMP EDX,EAX                         ; 00536234
    JNZ 0x00536266                      ; 00536236
        ;   XREF to: 00536266 (CONDITIONAL_JUMP)  ; LAB_00536266
    MOV EAX,dword ptr [ESP + 0x34]      ; 00536238
    MOV dword ptr [EBX + 0x414],EAX     ; 0053623c
    ADD ESP,0x78                        ; 00536242
    POP EDI                             ; 00536245
    POP ESI                             ; 00536246
    POP EBX                             ; 00536247
    RET                                 ; 00536248
    MOV EAX,dword ptr [ESP + 0x18]      ; 00536249
        ;   Label: LAB_00536249
    MOV dword ptr [ESP + 0x30],EAX      ; 0053624d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00536251
    MOV dword ptr [ESP + 0x34],EAX      ; 00536255
    MOV EAX,dword ptr [ESP + 0x20]      ; 00536259
    MOV dword ptr [ESP + 0x38],EAX      ; 0053625d
    JMP 0x00536185                      ; 00536261
        ;   XREF to: 00536185 (UNCONDITIONAL_JUMP)  ; LAB_00536185
    MOV EAX,dword ptr [ESP + 0x54]      ; 00536266
        ;   Label: LAB_00536266
    MOV dword ptr [EDX],EAX             ; 0053626a
    MOV EAX,dword ptr [ESP + 0x58]      ; 0053626c
    MOV dword ptr [EDX + 0x4],EAX       ; 00536270
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00536273
    MOV dword ptr [EDX + 0x8],EAX       ; 00536277
    MOV EAX,dword ptr [ESP + 0x34]      ; 0053627a
    MOV dword ptr [EBX + 0x414],EAX     ; 0053627e
    ADD ESP,0x78                        ; 00536284
    POP EDI                             ; 00536287
    POP ESI                             ; 00536288
    POP EBX                             ; 00536289
    RET                                 ; 0053628a


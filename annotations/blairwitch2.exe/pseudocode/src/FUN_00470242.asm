; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00470242(undefined8 *param_1,undefined8 *param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0043fef0 at 0043ffb5
;
; Referenced Globals:
;   undefined8 DAT_006112c8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00470242
        ;   Label: FUN_00470242
    MOV EBP,ESP                         ; 00470243
    PUSH ESI                            ; 00470245
    PUSH EDI                            ; 00470246
    MOV ESI,dword ptr [EBP + 0xc]       ; 00470247
    MOV EDI,dword ptr [EBP + 0x8]       ; 0047024a
    MOV ECX,dword ptr [EBP + 0x10]      ; 0047024d
    MOVQ MM0,qword ptr [ESI + 0xfffffec0] ; 00470250
    MOVQ MM2,qword ptr [ESI]            ; 00470257
    MOVQ MM3,qword ptr [ESI + 0x140]    ; 0047025a
    PUNPCKLBW MM0,dword ptr [0x006112c8] ; 00470261 | DAT_006112c8
    PUNPCKLBW MM2,dword ptr [0x006112c8] ; 00470268 | DAT_006112c8
    PUNPCKLBW MM3,dword ptr [0x006112c8] ; 0047026f | DAT_006112c8
    PADDUSW MM0,MM2                     ; 00470276
    PADDUSW MM2,MM3                     ; 00470279
    PADDUSW MM0,MM2                     ; 0047027c
    MOVQ MM1,qword ptr [ESI + 0xfffffeb8] ; 0047027f
    MOVQ MM2,qword ptr [ESI + -0x8]     ; 00470286
    MOVQ MM3,qword ptr [ESI + 0x138]    ; 0047028a
    PUNPCKHBW MM1,qword ptr [0x006112c8] ; 00470291 | DAT_006112c8
    PUNPCKHBW MM2,qword ptr [0x006112c8] ; 00470298 | DAT_006112c8
    PUNPCKHBW MM3,qword ptr [0x006112c8] ; 0047029f | DAT_006112c8
    PADDUSW MM1,MM2                     ; 004702a6
    PADDUSW MM2,MM3                     ; 004702a9
    PADDUSW MM1,MM2                     ; 004702ac
    PSRLQ MM1,0x30                      ; 004702af
    MOVQ MM6,MM0                        ; 004702b3
        ;   Label: LAB_004702b3
    MOVQ MM5,MM0                        ; 004702b6
    PADDUSW MM1,MM0                     ; 004702b9
    PSLLQ MM6,0x10                      ; 004702bc
    PSRLQ MM5,0x10                      ; 004702c0
    PADDUSW MM5,MM0                     ; 004702c4
    PADDUSW MM6,MM1                     ; 004702c7
    MOVQ MM1,qword ptr [ESI + 0xfffffec0] ; 004702ca
    MOVQ MM2,qword ptr [ESI]            ; 004702d1
    MOVQ MM3,qword ptr [ESI + 0x140]    ; 004702d4
    PUNPCKHBW MM1,qword ptr [0x006112c8] ; 004702db | DAT_006112c8
    PUNPCKHBW MM2,qword ptr [0x006112c8] ; 004702e2 | DAT_006112c8
    PUNPCKHBW MM3,qword ptr [0x006112c8] ; 004702e9 | DAT_006112c8
    PADDUSW MM1,MM2                     ; 004702f0
    PADDUSW MM2,MM3                     ; 004702f3
    PADDUSW MM1,MM2                     ; 004702f6
    PADDUSW MM6,MM5                     ; 004702f9
    MOVQ MM4,MM1                        ; 004702fc
    PSLLQ MM4,0x30                      ; 004702ff
    PSRLQ MM0,0x30                      ; 00470303
    MOVQ MM7,MM1                        ; 00470307
    MOVQ MM5,MM1                        ; 0047030a
    PADDUSW MM0,MM1                     ; 0047030d
    PSLLQ MM7,0x10                      ; 00470310
    PSRLQ MM5,0x10                      ; 00470314
    PADDUSW MM6,MM4                     ; 00470318
    PADDUSW MM5,MM1                     ; 0047031b
    PADDUSW MM7,MM0                     ; 0047031e
    MOVQ MM0,qword ptr [ESI + 0xfffffec8] ; 00470321
    MOVQ MM2,qword ptr [ESI + 0x8]      ; 00470328
    MOVQ MM3,qword ptr [ESI + 0x148]    ; 0047032c
    PUNPCKLBW MM0,dword ptr [0x006112c8] ; 00470333 | DAT_006112c8
    PUNPCKLBW MM2,dword ptr [0x006112c8] ; 0047033a | DAT_006112c8
    PUNPCKLBW MM3,dword ptr [0x006112c8] ; 00470341 | DAT_006112c8
    PADDUSW MM0,MM2                     ; 00470348
    PADDUSW MM2,MM3                     ; 0047034b
    PADDUSW MM0,MM2                     ; 0047034e
    PADDUSW MM7,MM5                     ; 00470351
    MOVQ MM4,MM0                        ; 00470354
    PSRLW MM6,0x4                       ; 00470357
    PSLLQ MM4,0x30                      ; 0047035b
    PSRLQ MM1,0x30                      ; 0047035f
    PADDUSW MM7,MM4                     ; 00470363
    PSRLW MM7,0x4                       ; 00470366
    ADD ESI,0x8                         ; 0047036a
    PACKUSWB MM6,MM7                    ; 0047036d
    MOVQ qword ptr [EDI],MM6            ; 00470370
    ADD EDI,0x8                         ; 00470373
    SUB ECX,0x8                         ; 00470376
    JG 0x004702b3                       ; 00470379
        ;   XREF to: 004702b3 (CONDITIONAL_JUMP)  ; LAB_004702b3
    EMMS                                ; 0047037f
    POP EDI                             ; 00470381
    POP ESI                             ; 00470382
    LEAVE                               ; 00470383
    RET                                 ; 00470384


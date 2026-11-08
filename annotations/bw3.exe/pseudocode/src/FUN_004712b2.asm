; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004712b2(undefined8 *param_1,undefined8 *param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0044d6f0 at 0044d7b5
;
; Referenced Globals:
;   undefined8 DAT_005f8b28
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004712b2
        ;   Label: FUN_004712b2
    MOV EBP,ESP                         ; 004712b3
    PUSH ESI                            ; 004712b5
    PUSH EDI                            ; 004712b6
    MOV ESI,dword ptr [EBP + 0xc]       ; 004712b7
    MOV EDI,dword ptr [EBP + 0x8]       ; 004712ba
    MOV ECX,dword ptr [EBP + 0x10]      ; 004712bd
    MOVQ MM0,qword ptr [ESI + 0xfffffec0] ; 004712c0
    MOVQ MM2,qword ptr [ESI]            ; 004712c7
    MOVQ MM3,qword ptr [ESI + 0x140]    ; 004712ca
    PUNPCKLBW MM0,dword ptr [0x005f8b28] ; 004712d1 | DAT_005f8b28
    PUNPCKLBW MM2,dword ptr [0x005f8b28] ; 004712d8 | DAT_005f8b28
    PUNPCKLBW MM3,dword ptr [0x005f8b28] ; 004712df | DAT_005f8b28
    PADDUSW MM0,MM2                     ; 004712e6
    PADDUSW MM2,MM3                     ; 004712e9
    PADDUSW MM0,MM2                     ; 004712ec
    MOVQ MM1,qword ptr [ESI + 0xfffffeb8] ; 004712ef
    MOVQ MM2,qword ptr [ESI + -0x8]     ; 004712f6
    MOVQ MM3,qword ptr [ESI + 0x138]    ; 004712fa
    PUNPCKHBW MM1,qword ptr [0x005f8b28] ; 00471301 | DAT_005f8b28
    PUNPCKHBW MM2,qword ptr [0x005f8b28] ; 00471308 | DAT_005f8b28
    PUNPCKHBW MM3,qword ptr [0x005f8b28] ; 0047130f | DAT_005f8b28
    PADDUSW MM1,MM2                     ; 00471316
    PADDUSW MM2,MM3                     ; 00471319
    PADDUSW MM1,MM2                     ; 0047131c
    PSRLQ MM1,0x30                      ; 0047131f
    MOVQ MM6,MM0                        ; 00471323
        ;   Label: LAB_00471323
    MOVQ MM5,MM0                        ; 00471326
    PADDUSW MM1,MM0                     ; 00471329
    PSLLQ MM6,0x10                      ; 0047132c
    PSRLQ MM5,0x10                      ; 00471330
    PADDUSW MM5,MM0                     ; 00471334
    PADDUSW MM6,MM1                     ; 00471337
    MOVQ MM1,qword ptr [ESI + 0xfffffec0] ; 0047133a
    MOVQ MM2,qword ptr [ESI]            ; 00471341
    MOVQ MM3,qword ptr [ESI + 0x140]    ; 00471344
    PUNPCKHBW MM1,qword ptr [0x005f8b28] ; 0047134b | DAT_005f8b28
    PUNPCKHBW MM2,qword ptr [0x005f8b28] ; 00471352 | DAT_005f8b28
    PUNPCKHBW MM3,qword ptr [0x005f8b28] ; 00471359 | DAT_005f8b28
    PADDUSW MM1,MM2                     ; 00471360
    PADDUSW MM2,MM3                     ; 00471363
    PADDUSW MM1,MM2                     ; 00471366
    PADDUSW MM6,MM5                     ; 00471369
    MOVQ MM4,MM1                        ; 0047136c
    PSLLQ MM4,0x30                      ; 0047136f
    PSRLQ MM0,0x30                      ; 00471373
    MOVQ MM7,MM1                        ; 00471377
    MOVQ MM5,MM1                        ; 0047137a
    PADDUSW MM0,MM1                     ; 0047137d
    PSLLQ MM7,0x10                      ; 00471380
    PSRLQ MM5,0x10                      ; 00471384
    PADDUSW MM6,MM4                     ; 00471388
    PADDUSW MM5,MM1                     ; 0047138b
    PADDUSW MM7,MM0                     ; 0047138e
    MOVQ MM0,qword ptr [ESI + 0xfffffec8] ; 00471391
    MOVQ MM2,qword ptr [ESI + 0x8]      ; 00471398
    MOVQ MM3,qword ptr [ESI + 0x148]    ; 0047139c
    PUNPCKLBW MM0,dword ptr [0x005f8b28] ; 004713a3 | DAT_005f8b28
    PUNPCKLBW MM2,dword ptr [0x005f8b28] ; 004713aa | DAT_005f8b28
    PUNPCKLBW MM3,dword ptr [0x005f8b28] ; 004713b1 | DAT_005f8b28
    PADDUSW MM0,MM2                     ; 004713b8
    PADDUSW MM2,MM3                     ; 004713bb
    PADDUSW MM0,MM2                     ; 004713be
    PADDUSW MM7,MM5                     ; 004713c1
    MOVQ MM4,MM0                        ; 004713c4
    PSRLW MM6,0x4                       ; 004713c7
    PSLLQ MM4,0x30                      ; 004713cb
    PSRLQ MM1,0x30                      ; 004713cf
    PADDUSW MM7,MM4                     ; 004713d3
    PSRLW MM7,0x4                       ; 004713d6
    ADD ESI,0x8                         ; 004713da
    PACKUSWB MM6,MM7                    ; 004713dd
    MOVQ qword ptr [EDI],MM6            ; 004713e0
    ADD EDI,0x8                         ; 004713e3
    SUB ECX,0x8                         ; 004713e6
    JG 0x00471323                       ; 004713e9
        ;   XREF to: 00471323 (CONDITIONAL_JUMP)  ; LAB_00471323
    EMMS                                ; 004713ef
    POP EDI                             ; 004713f1
    POP ESI                             ; 004713f2
    LEAVE                               ; 004713f3
    RET                                 ; 004713f4


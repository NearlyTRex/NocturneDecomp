; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00470385(undefined8 *param_1,undefined8 *param_2,int param_3)
;
;
; Referenced Globals:
;   undefined8 DAT_006112c8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00470385
        ;   Label: FUN_00470385
    MOV EBP,ESP                         ; 00470386
    PUSH ESI                            ; 00470388
    PUSH EDI                            ; 00470389
    MOV ESI,dword ptr [EBP + 0xc]       ; 0047038a
    MOV EDI,dword ptr [EBP + 0x8]       ; 0047038d
    MOV ECX,dword ptr [EBP + 0x10]      ; 00470390
    MOVQ MM0,qword ptr [ESI + 0xffffff00] ; 00470393
    MOVQ MM2,qword ptr [ESI]            ; 0047039a
    MOVQ MM3,qword ptr [ESI + 0x100]    ; 0047039d
    PUNPCKLBW MM0,dword ptr [0x006112c8] ; 004703a4 | DAT_006112c8
    PUNPCKLBW MM2,dword ptr [0x006112c8] ; 004703ab | DAT_006112c8
    PUNPCKLBW MM3,dword ptr [0x006112c8] ; 004703b2 | DAT_006112c8
    PADDUSW MM0,MM2                     ; 004703b9
    PADDUSW MM2,MM3                     ; 004703bc
    PADDUSW MM0,MM2                     ; 004703bf
    MOVQ MM1,qword ptr [ESI + 0xfffffef8] ; 004703c2
    MOVQ MM2,qword ptr [ESI + -0x8]     ; 004703c9
    MOVQ MM3,qword ptr [ESI + 0xf8]     ; 004703cd
    PUNPCKHBW MM1,qword ptr [0x006112c8] ; 004703d4 | DAT_006112c8
    PUNPCKHBW MM2,qword ptr [0x006112c8] ; 004703db | DAT_006112c8
    PUNPCKHBW MM3,qword ptr [0x006112c8] ; 004703e2 | DAT_006112c8
    PADDUSW MM1,MM2                     ; 004703e9
    PADDUSW MM2,MM3                     ; 004703ec
    PADDUSW MM1,MM2                     ; 004703ef
    PSRLQ MM1,0x30                      ; 004703f2
    MOVQ MM6,MM0                        ; 004703f6
        ;   Label: LAB_004703f6
    MOVQ MM5,MM0                        ; 004703f9
    PADDUSW MM1,MM0                     ; 004703fc
    PSLLQ MM6,0x10                      ; 004703ff
    PSRLQ MM5,0x10                      ; 00470403
    PADDUSW MM5,MM0                     ; 00470407
    PADDUSW MM6,MM1                     ; 0047040a
    MOVQ MM1,qword ptr [ESI + 0xffffff00] ; 0047040d
    MOVQ MM2,qword ptr [ESI]            ; 00470414
    MOVQ MM3,qword ptr [ESI + 0x100]    ; 00470417
    PUNPCKHBW MM1,qword ptr [0x006112c8] ; 0047041e | DAT_006112c8
    PUNPCKHBW MM2,qword ptr [0x006112c8] ; 00470425 | DAT_006112c8
    PUNPCKHBW MM3,qword ptr [0x006112c8] ; 0047042c | DAT_006112c8
    PADDUSW MM1,MM2                     ; 00470433
    PADDUSW MM2,MM3                     ; 00470436
    PADDUSW MM1,MM2                     ; 00470439
    PADDUSW MM6,MM5                     ; 0047043c
    MOVQ MM4,MM1                        ; 0047043f
    PSLLQ MM4,0x30                      ; 00470442
    PSRLQ MM0,0x30                      ; 00470446
    MOVQ MM7,MM1                        ; 0047044a
    MOVQ MM5,MM1                        ; 0047044d
    PADDUSW MM0,MM1                     ; 00470450
    PSLLQ MM7,0x10                      ; 00470453
    PSRLQ MM5,0x10                      ; 00470457
    PADDUSW MM6,MM4                     ; 0047045b
    PADDUSW MM5,MM1                     ; 0047045e
    PADDUSW MM7,MM0                     ; 00470461
    MOVQ MM0,qword ptr [ESI + 0xffffff08] ; 00470464
    MOVQ MM2,qword ptr [ESI + 0x8]      ; 0047046b
    MOVQ MM3,qword ptr [ESI + 0x108]    ; 0047046f
    PUNPCKLBW MM0,dword ptr [0x006112c8] ; 00470476 | DAT_006112c8
    PUNPCKLBW MM2,dword ptr [0x006112c8] ; 0047047d | DAT_006112c8
    PUNPCKLBW MM3,dword ptr [0x006112c8] ; 00470484 | DAT_006112c8
    PADDUSW MM0,MM2                     ; 0047048b
    PADDUSW MM2,MM3                     ; 0047048e
    PADDUSW MM0,MM2                     ; 00470491
    PADDUSW MM7,MM5                     ; 00470494
    MOVQ MM4,MM0                        ; 00470497
    PSRLW MM6,0x4                       ; 0047049a
    PSLLQ MM4,0x30                      ; 0047049e
    PSRLQ MM1,0x30                      ; 004704a2
    PADDUSW MM7,MM4                     ; 004704a6
    PSRLW MM7,0x4                       ; 004704a9
    ADD ESI,0x8                         ; 004704ad
    PACKUSWB MM6,MM7                    ; 004704b0
    MOVQ qword ptr [EDI],MM6            ; 004704b3
    ADD EDI,0x8                         ; 004704b6
    SUB ECX,0x8                         ; 004704b9
    JG 0x004703f6                       ; 004704bc
        ;   XREF to: 004703f6 (CONDITIONAL_JUMP)  ; LAB_004703f6
    EMMS                                ; 004704c2
    POP EDI                             ; 004704c4
    POP ESI                             ; 004704c5
    LEAVE                               ; 004704c6
    RET                                 ; 004704c7


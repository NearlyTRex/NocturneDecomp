; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004704c8(undefined8 *param_1,undefined8 *param_2,int param_3)
;
;
; Referenced Globals:
;   undefined8 DAT_006112c8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004704c8
        ;   Label: FUN_004704c8
    MOV EBP,ESP                         ; 004704c9
    PUSH ESI                            ; 004704cb
    PUSH EDI                            ; 004704cc
    MOV ESI,dword ptr [EBP + 0xc]       ; 004704cd
    MOV EDI,dword ptr [EBP + 0x8]       ; 004704d0
    MOV ECX,dword ptr [EBP + 0x10]      ; 004704d3
    MOVQ MM0,qword ptr [ESI + -0x80]    ; 004704d6
    MOVQ MM2,qword ptr [ESI]            ; 004704da
    MOVQ MM3,qword ptr [ESI + 0x80]     ; 004704dd
    PUNPCKLBW MM0,dword ptr [0x006112c8] ; 004704e4 | DAT_006112c8
    PUNPCKLBW MM2,dword ptr [0x006112c8] ; 004704eb | DAT_006112c8
    PUNPCKLBW MM3,dword ptr [0x006112c8] ; 004704f2 | DAT_006112c8
    PADDUSW MM0,MM2                     ; 004704f9
    PADDUSW MM2,MM3                     ; 004704fc
    PADDUSW MM0,MM2                     ; 004704ff
    MOVQ MM1,qword ptr [ESI + 0xffffff78] ; 00470502
    MOVQ MM2,qword ptr [ESI + -0x8]     ; 00470509
    MOVQ MM3,qword ptr [ESI + 0x78]     ; 0047050d
    PUNPCKHBW MM1,qword ptr [0x006112c8] ; 00470511 | DAT_006112c8
    PUNPCKHBW MM2,qword ptr [0x006112c8] ; 00470518 | DAT_006112c8
    PUNPCKHBW MM3,qword ptr [0x006112c8] ; 0047051f | DAT_006112c8
    PADDUSW MM1,MM2                     ; 00470526
    PADDUSW MM2,MM3                     ; 00470529
    PADDUSW MM1,MM2                     ; 0047052c
    PSRLQ MM1,0x30                      ; 0047052f
    MOVQ MM6,MM0                        ; 00470533
        ;   Label: LAB_00470533
    MOVQ MM5,MM0                        ; 00470536
    PADDUSW MM1,MM0                     ; 00470539
    PSLLQ MM6,0x10                      ; 0047053c
    PSRLQ MM5,0x10                      ; 00470540
    PADDUSW MM5,MM0                     ; 00470544
    PADDUSW MM6,MM1                     ; 00470547
    MOVQ MM1,qword ptr [ESI + -0x80]    ; 0047054a
    MOVQ MM2,qword ptr [ESI]            ; 0047054e
    MOVQ MM3,qword ptr [ESI + 0x80]     ; 00470551
    PUNPCKHBW MM1,qword ptr [0x006112c8] ; 00470558 | DAT_006112c8
    PUNPCKHBW MM2,qword ptr [0x006112c8] ; 0047055f | DAT_006112c8
    PUNPCKHBW MM3,qword ptr [0x006112c8] ; 00470566 | DAT_006112c8
    PADDUSW MM1,MM2                     ; 0047056d
    PADDUSW MM2,MM3                     ; 00470570
    PADDUSW MM1,MM2                     ; 00470573
    PADDUSW MM6,MM5                     ; 00470576
    MOVQ MM4,MM1                        ; 00470579
    PSLLQ MM4,0x30                      ; 0047057c
    PSRLQ MM0,0x30                      ; 00470580
    MOVQ MM7,MM1                        ; 00470584
    MOVQ MM5,MM1                        ; 00470587
    PADDUSW MM0,MM1                     ; 0047058a
    PSLLQ MM7,0x10                      ; 0047058d
    PSRLQ MM5,0x10                      ; 00470591
    PADDUSW MM6,MM4                     ; 00470595
    PADDUSW MM5,MM1                     ; 00470598
    PADDUSW MM7,MM0                     ; 0047059b
    MOVQ MM0,qword ptr [ESI + -0x78]    ; 0047059e
    MOVQ MM2,qword ptr [ESI + 0x8]      ; 004705a2
    MOVQ MM3,qword ptr [ESI + 0x88]     ; 004705a6
    PUNPCKLBW MM0,dword ptr [0x006112c8] ; 004705ad | DAT_006112c8
    PUNPCKLBW MM2,dword ptr [0x006112c8] ; 004705b4 | DAT_006112c8
    PUNPCKLBW MM3,dword ptr [0x006112c8] ; 004705bb | DAT_006112c8
    PADDUSW MM0,MM2                     ; 004705c2
    PADDUSW MM2,MM3                     ; 004705c5
    PADDUSW MM0,MM2                     ; 004705c8
    PADDUSW MM7,MM5                     ; 004705cb
    MOVQ MM4,MM0                        ; 004705ce
    PSRLW MM6,0x4                       ; 004705d1
    PSLLQ MM4,0x30                      ; 004705d5
    PSRLQ MM1,0x30                      ; 004705d9
    PADDUSW MM7,MM4                     ; 004705dd
    PSRLW MM7,0x4                       ; 004705e0
    ADD ESI,0x8                         ; 004705e4
    PACKUSWB MM6,MM7                    ; 004705e7
    MOVQ qword ptr [EDI],MM6            ; 004705ea
    ADD EDI,0x8                         ; 004705ed
    SUB ECX,0x8                         ; 004705f0
    JG 0x00470533                       ; 004705f3
        ;   XREF to: 00470533 (CONDITIONAL_JUMP)  ; LAB_00470533
    EMMS                                ; 004705f9
    POP EDI                             ; 004705fb
    POP ESI                             ; 004705fc
    LEAVE                               ; 004705fd
    RET                                 ; 004705fe


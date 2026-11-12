; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_verticalBlur3TapMMXStride256_FUN_00488875(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; Referenced Globals:
;   undefined8 DAT_006185a8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00488875
        ;   Label: core_dstrendr.cpp_verticalBlur3TapMMXStride256_FUN_00488875
    MOV EBP,ESP                         ; 00488876
    PUSH ESI                            ; 00488878
    PUSH EDI                            ; 00488879
    MOV ESI,dword ptr [EBP + 0xc]       ; 0048887a
    MOV EDI,dword ptr [EBP + 0x8]       ; 0048887d
    MOV ECX,dword ptr [EBP + 0x10]      ; 00488880
    MOVQ MM0,qword ptr [ESI + 0xffffff00] ; 00488883
    MOVQ MM2,qword ptr [ESI]            ; 0048888a
    MOVQ MM3,qword ptr [ESI + 0x100]    ; 0048888d
    PUNPCKLBW MM0,dword ptr [0x006185a8] ; 00488894 | DAT_006185a8
    PUNPCKLBW MM2,dword ptr [0x006185a8] ; 0048889b | DAT_006185a8
    PUNPCKLBW MM3,dword ptr [0x006185a8] ; 004888a2 | DAT_006185a8
    PADDUSW MM0,MM2                     ; 004888a9
    PADDUSW MM2,MM3                     ; 004888ac
    PADDUSW MM0,MM2                     ; 004888af
    MOVQ MM1,qword ptr [ESI + 0xfffffef8] ; 004888b2
    MOVQ MM2,qword ptr [ESI + -0x8]     ; 004888b9
    MOVQ MM3,qword ptr [ESI + 0xf8]     ; 004888bd
    PUNPCKHBW MM1,qword ptr [0x006185a8] ; 004888c4 | DAT_006185a8
    PUNPCKHBW MM2,qword ptr [0x006185a8] ; 004888cb | DAT_006185a8
    PUNPCKHBW MM3,qword ptr [0x006185a8] ; 004888d2 | DAT_006185a8
    PADDUSW MM1,MM2                     ; 004888d9
    PADDUSW MM2,MM3                     ; 004888dc
    PADDUSW MM1,MM2                     ; 004888df
    PSRLQ MM1,0x30                      ; 004888e2
    MOVQ MM6,MM0                        ; 004888e6
        ;   Label: LAB_004888e6
    MOVQ MM5,MM0                        ; 004888e9
    PADDUSW MM1,MM0                     ; 004888ec
    PSLLQ MM6,0x10                      ; 004888ef
    PSRLQ MM5,0x10                      ; 004888f3
    PADDUSW MM5,MM0                     ; 004888f7
    PADDUSW MM6,MM1                     ; 004888fa
    MOVQ MM1,qword ptr [ESI + 0xffffff00] ; 004888fd
    MOVQ MM2,qword ptr [ESI]            ; 00488904
    MOVQ MM3,qword ptr [ESI + 0x100]    ; 00488907
    PUNPCKHBW MM1,qword ptr [0x006185a8] ; 0048890e | DAT_006185a8
    PUNPCKHBW MM2,qword ptr [0x006185a8] ; 00488915 | DAT_006185a8
    PUNPCKHBW MM3,qword ptr [0x006185a8] ; 0048891c | DAT_006185a8
    PADDUSW MM1,MM2                     ; 00488923
    PADDUSW MM2,MM3                     ; 00488926
    PADDUSW MM1,MM2                     ; 00488929
    PADDUSW MM6,MM5                     ; 0048892c
    MOVQ MM4,MM1                        ; 0048892f
    PSLLQ MM4,0x30                      ; 00488932
    PSRLQ MM0,0x30                      ; 00488936
    MOVQ MM7,MM1                        ; 0048893a
    MOVQ MM5,MM1                        ; 0048893d
    PADDUSW MM0,MM1                     ; 00488940
    PSLLQ MM7,0x10                      ; 00488943
    PSRLQ MM5,0x10                      ; 00488947
    PADDUSW MM6,MM4                     ; 0048894b
    PADDUSW MM5,MM1                     ; 0048894e
    PADDUSW MM7,MM0                     ; 00488951
    MOVQ MM0,qword ptr [ESI + 0xffffff08] ; 00488954
    MOVQ MM2,qword ptr [ESI + 0x8]      ; 0048895b
    MOVQ MM3,qword ptr [ESI + 0x108]    ; 0048895f
    PUNPCKLBW MM0,dword ptr [0x006185a8] ; 00488966 | DAT_006185a8
    PUNPCKLBW MM2,dword ptr [0x006185a8] ; 0048896d | DAT_006185a8
    PUNPCKLBW MM3,dword ptr [0x006185a8] ; 00488974 | DAT_006185a8
    PADDUSW MM0,MM2                     ; 0048897b
    PADDUSW MM2,MM3                     ; 0048897e
    PADDUSW MM0,MM2                     ; 00488981
    PADDUSW MM7,MM5                     ; 00488984
    MOVQ MM4,MM0                        ; 00488987
    PSRLW MM6,0x4                       ; 0048898a
    PSLLQ MM4,0x30                      ; 0048898e
    PSRLQ MM1,0x30                      ; 00488992
    PADDUSW MM7,MM4                     ; 00488996
    PSRLW MM7,0x4                       ; 00488999
    ADD ESI,0x8                         ; 0048899d
    PACKUSWB MM6,MM7                    ; 004889a0
    MOVQ qword ptr [EDI],MM6            ; 004889a3
    ADD EDI,0x8                         ; 004889a6
    SUB ECX,0x8                         ; 004889a9
    JG 0x004888e6                       ; 004889ac
        ;   XREF to: 004888e6 (CONDITIONAL_JUMP)  ; LAB_004888e6
    EMMS                                ; 004889b2
    POP EDI                             ; 004889b4
    POP ESI                             ; 004889b5
    LEAVE                               ; 004889b6
    RET                                 ; 004889b7


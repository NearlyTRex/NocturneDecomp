; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_verticalBlur3TapMMXStride320_FUN_00488732(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004515b0 at 00451675
;
; Referenced Globals:
;   undefined8 DAT_006185a8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00488732
        ;   Label: core_dstrendr.cpp_verticalBlur3TapMMXStride320_FUN_00488732
    MOV EBP,ESP                         ; 00488733
    PUSH ESI                            ; 00488735
    PUSH EDI                            ; 00488736
    MOV ESI,dword ptr [EBP + 0xc]       ; 00488737
    MOV EDI,dword ptr [EBP + 0x8]       ; 0048873a
    MOV ECX,dword ptr [EBP + 0x10]      ; 0048873d
    MOVQ MM0,qword ptr [ESI + 0xfffffec0] ; 00488740
    MOVQ MM2,qword ptr [ESI]            ; 00488747
    MOVQ MM3,qword ptr [ESI + 0x140]    ; 0048874a
    PUNPCKLBW MM0,dword ptr [0x006185a8] ; 00488751 | DAT_006185a8
    PUNPCKLBW MM2,dword ptr [0x006185a8] ; 00488758 | DAT_006185a8
    PUNPCKLBW MM3,dword ptr [0x006185a8] ; 0048875f | DAT_006185a8
    PADDUSW MM0,MM2                     ; 00488766
    PADDUSW MM2,MM3                     ; 00488769
    PADDUSW MM0,MM2                     ; 0048876c
    MOVQ MM1,qword ptr [ESI + 0xfffffeb8] ; 0048876f
    MOVQ MM2,qword ptr [ESI + -0x8]     ; 00488776
    MOVQ MM3,qword ptr [ESI + 0x138]    ; 0048877a
    PUNPCKHBW MM1,qword ptr [0x006185a8] ; 00488781 | DAT_006185a8
    PUNPCKHBW MM2,qword ptr [0x006185a8] ; 00488788 | DAT_006185a8
    PUNPCKHBW MM3,qword ptr [0x006185a8] ; 0048878f | DAT_006185a8
    PADDUSW MM1,MM2                     ; 00488796
    PADDUSW MM2,MM3                     ; 00488799
    PADDUSW MM1,MM2                     ; 0048879c
    PSRLQ MM1,0x30                      ; 0048879f
    MOVQ MM6,MM0                        ; 004887a3
        ;   Label: LAB_004887a3
    MOVQ MM5,MM0                        ; 004887a6
    PADDUSW MM1,MM0                     ; 004887a9
    PSLLQ MM6,0x10                      ; 004887ac
    PSRLQ MM5,0x10                      ; 004887b0
    PADDUSW MM5,MM0                     ; 004887b4
    PADDUSW MM6,MM1                     ; 004887b7
    MOVQ MM1,qword ptr [ESI + 0xfffffec0] ; 004887ba
    MOVQ MM2,qword ptr [ESI]            ; 004887c1
    MOVQ MM3,qword ptr [ESI + 0x140]    ; 004887c4
    PUNPCKHBW MM1,qword ptr [0x006185a8] ; 004887cb | DAT_006185a8
    PUNPCKHBW MM2,qword ptr [0x006185a8] ; 004887d2 | DAT_006185a8
    PUNPCKHBW MM3,qword ptr [0x006185a8] ; 004887d9 | DAT_006185a8
    PADDUSW MM1,MM2                     ; 004887e0
    PADDUSW MM2,MM3                     ; 004887e3
    PADDUSW MM1,MM2                     ; 004887e6
    PADDUSW MM6,MM5                     ; 004887e9
    MOVQ MM4,MM1                        ; 004887ec
    PSLLQ MM4,0x30                      ; 004887ef
    PSRLQ MM0,0x30                      ; 004887f3
    MOVQ MM7,MM1                        ; 004887f7
    MOVQ MM5,MM1                        ; 004887fa
    PADDUSW MM0,MM1                     ; 004887fd
    PSLLQ MM7,0x10                      ; 00488800
    PSRLQ MM5,0x10                      ; 00488804
    PADDUSW MM6,MM4                     ; 00488808
    PADDUSW MM5,MM1                     ; 0048880b
    PADDUSW MM7,MM0                     ; 0048880e
    MOVQ MM0,qword ptr [ESI + 0xfffffec8] ; 00488811
    MOVQ MM2,qword ptr [ESI + 0x8]      ; 00488818
    MOVQ MM3,qword ptr [ESI + 0x148]    ; 0048881c
    PUNPCKLBW MM0,dword ptr [0x006185a8] ; 00488823 | DAT_006185a8
    PUNPCKLBW MM2,dword ptr [0x006185a8] ; 0048882a | DAT_006185a8
    PUNPCKLBW MM3,dword ptr [0x006185a8] ; 00488831 | DAT_006185a8
    PADDUSW MM0,MM2                     ; 00488838
    PADDUSW MM2,MM3                     ; 0048883b
    PADDUSW MM0,MM2                     ; 0048883e
    PADDUSW MM7,MM5                     ; 00488841
    MOVQ MM4,MM0                        ; 00488844
    PSRLW MM6,0x4                       ; 00488847
    PSLLQ MM4,0x30                      ; 0048884b
    PSRLQ MM1,0x30                      ; 0048884f
    PADDUSW MM7,MM4                     ; 00488853
    PSRLW MM7,0x4                       ; 00488856
    ADD ESI,0x8                         ; 0048885a
    PACKUSWB MM6,MM7                    ; 0048885d
    MOVQ qword ptr [EDI],MM6            ; 00488860
    ADD EDI,0x8                         ; 00488863
    SUB ECX,0x8                         ; 00488866
    JG 0x004887a3                       ; 00488869
        ;   XREF to: 004887a3 (CONDITIONAL_JUMP)  ; LAB_004887a3
    EMMS                                ; 0048886f
    POP EDI                             ; 00488871
    POP ESI                             ; 00488872
    LEAVE                               ; 00488873
    RET                                 ; 00488874


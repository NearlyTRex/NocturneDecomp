; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_verticalBlur3TapMMXStride320_FUN_00465382(undefined8 *param_1,undefined8 *param_2,int param_3)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_00444810 at 004448d5
;
; Referenced Globals:
;   undefined8 DAT_005b4748
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00465382
        ;   Label: core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00465382
    MOV EBP,ESP                         ; 00465383
    PUSH ESI                            ; 00465385
    PUSH EDI                            ; 00465386
    MOV ESI,dword ptr [EBP + 0xc]       ; 00465387
    MOV EDI,dword ptr [EBP + 0x8]       ; 0046538a
    MOV ECX,dword ptr [EBP + 0x10]      ; 0046538d
    MOVQ MM0,qword ptr [ESI + 0xfffffec0] ; 00465390
    MOVQ MM2,qword ptr [ESI]            ; 00465397
    MOVQ MM3,qword ptr [ESI + 0x140]    ; 0046539a
    PUNPCKLBW MM0,dword ptr [0x005b4748] ; 004653a1 | DAT_005b4748
    PUNPCKLBW MM2,dword ptr [0x005b4748] ; 004653a8 | DAT_005b4748
    PUNPCKLBW MM3,dword ptr [0x005b4748] ; 004653af | DAT_005b4748
    PADDUSW MM0,MM2                     ; 004653b6
    PADDUSW MM2,MM3                     ; 004653b9
    PADDUSW MM0,MM2                     ; 004653bc
    MOVQ MM1,qword ptr [ESI + 0xfffffeb8] ; 004653bf
    MOVQ MM2,qword ptr [ESI + -0x8]     ; 004653c6
    MOVQ MM3,qword ptr [ESI + 0x138]    ; 004653ca
    PUNPCKHBW MM1,qword ptr [0x005b4748] ; 004653d1 | DAT_005b4748
    PUNPCKHBW MM2,qword ptr [0x005b4748] ; 004653d8 | DAT_005b4748
    PUNPCKHBW MM3,qword ptr [0x005b4748] ; 004653df | DAT_005b4748
    PADDUSW MM1,MM2                     ; 004653e6
    PADDUSW MM2,MM3                     ; 004653e9
    PADDUSW MM1,MM2                     ; 004653ec
    PSRLQ MM1,0x30                      ; 004653ef
    MOVQ MM6,MM0                        ; 004653f3
        ;   Label: LAB_004653f3
    MOVQ MM5,MM0                        ; 004653f6
    PADDUSW MM1,MM0                     ; 004653f9
    PSLLQ MM6,0x10                      ; 004653fc
    PSRLQ MM5,0x10                      ; 00465400
    PADDUSW MM5,MM0                     ; 00465404
    PADDUSW MM6,MM1                     ; 00465407
    MOVQ MM1,qword ptr [ESI + 0xfffffec0] ; 0046540a
    MOVQ MM2,qword ptr [ESI]            ; 00465411
    MOVQ MM3,qword ptr [ESI + 0x140]    ; 00465414
    PUNPCKHBW MM1,qword ptr [0x005b4748] ; 0046541b | DAT_005b4748
    PUNPCKHBW MM2,qword ptr [0x005b4748] ; 00465422 | DAT_005b4748
    PUNPCKHBW MM3,qword ptr [0x005b4748] ; 00465429 | DAT_005b4748
    PADDUSW MM1,MM2                     ; 00465430
    PADDUSW MM2,MM3                     ; 00465433
    PADDUSW MM1,MM2                     ; 00465436
    PADDUSW MM6,MM5                     ; 00465439
    MOVQ MM4,MM1                        ; 0046543c
    PSLLQ MM4,0x30                      ; 0046543f
    PSRLQ MM0,0x30                      ; 00465443
    MOVQ MM7,MM1                        ; 00465447
    MOVQ MM5,MM1                        ; 0046544a
    PADDUSW MM0,MM1                     ; 0046544d
    PSLLQ MM7,0x10                      ; 00465450
    PSRLQ MM5,0x10                      ; 00465454
    PADDUSW MM6,MM4                     ; 00465458
    PADDUSW MM5,MM1                     ; 0046545b
    PADDUSW MM7,MM0                     ; 0046545e
    MOVQ MM0,qword ptr [ESI + 0xfffffec8] ; 00465461
    MOVQ MM2,qword ptr [ESI + 0x8]      ; 00465468
    MOVQ MM3,qword ptr [ESI + 0x148]    ; 0046546c
    PUNPCKLBW MM0,dword ptr [0x005b4748] ; 00465473 | DAT_005b4748
    PUNPCKLBW MM2,dword ptr [0x005b4748] ; 0046547a | DAT_005b4748
    PUNPCKLBW MM3,dword ptr [0x005b4748] ; 00465481 | DAT_005b4748
    PADDUSW MM0,MM2                     ; 00465488
    PADDUSW MM2,MM3                     ; 0046548b
    PADDUSW MM0,MM2                     ; 0046548e
    PADDUSW MM7,MM5                     ; 00465491
    MOVQ MM4,MM0                        ; 00465494
    PSRLW MM6,0x4                       ; 00465497
    PSLLQ MM4,0x30                      ; 0046549b
    PSRLQ MM1,0x30                      ; 0046549f
    PADDUSW MM7,MM4                     ; 004654a3
    PSRLW MM7,0x4                       ; 004654a6
    ADD ESI,0x8                         ; 004654aa
    PACKUSWB MM6,MM7                    ; 004654ad
    MOVQ qword ptr [EDI],MM6            ; 004654b0
    ADD EDI,0x8                         ; 004654b3
    SUB ECX,0x8                         ; 004654b6
    JG 0x004653f3                       ; 004654b9
        ;   XREF to: 004653f3 (CONDITIONAL_JUMP)  ; LAB_004653f3
    EMMS                                ; 004654bf
    POP EDI                             ; 004654c1
    POP ESI                             ; 004654c2
    LEAVE                               ; 004654c3
    RET                                 ; 004654c4


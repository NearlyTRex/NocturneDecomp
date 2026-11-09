; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_verticalBlur3TapMMXStride256_FUN_004713f5(undefined8 *param_1,undefined8 *param_2,int param_3)
;
;
; Referenced Globals:
;   undefined8 DAT_005f8b28
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004713f5
        ;   Label: core_dstrendr.cpp_verticalBlur3TapMMXStride256_FUN_004713f5
    MOV EBP,ESP                         ; 004713f6
    PUSH ESI                            ; 004713f8
    PUSH EDI                            ; 004713f9
    MOV ESI,dword ptr [EBP + 0xc]       ; 004713fa
    MOV EDI,dword ptr [EBP + 0x8]       ; 004713fd
    MOV ECX,dword ptr [EBP + 0x10]      ; 00471400
    MOVQ MM0,qword ptr [ESI + 0xffffff00] ; 00471403
    MOVQ MM2,qword ptr [ESI]            ; 0047140a
    MOVQ MM3,qword ptr [ESI + 0x100]    ; 0047140d
    PUNPCKLBW MM0,dword ptr [0x005f8b28] ; 00471414 | DAT_005f8b28
    PUNPCKLBW MM2,dword ptr [0x005f8b28] ; 0047141b | DAT_005f8b28
    PUNPCKLBW MM3,dword ptr [0x005f8b28] ; 00471422 | DAT_005f8b28
    PADDUSW MM0,MM2                     ; 00471429
    PADDUSW MM2,MM3                     ; 0047142c
    PADDUSW MM0,MM2                     ; 0047142f
    MOVQ MM1,qword ptr [ESI + 0xfffffef8] ; 00471432
    MOVQ MM2,qword ptr [ESI + -0x8]     ; 00471439
    MOVQ MM3,qword ptr [ESI + 0xf8]     ; 0047143d
    PUNPCKHBW MM1,qword ptr [0x005f8b28] ; 00471444 | DAT_005f8b28
    PUNPCKHBW MM2,qword ptr [0x005f8b28] ; 0047144b | DAT_005f8b28
    PUNPCKHBW MM3,qword ptr [0x005f8b28] ; 00471452 | DAT_005f8b28
    PADDUSW MM1,MM2                     ; 00471459
    PADDUSW MM2,MM3                     ; 0047145c
    PADDUSW MM1,MM2                     ; 0047145f
    PSRLQ MM1,0x30                      ; 00471462
    MOVQ MM6,MM0                        ; 00471466
        ;   Label: LAB_00471466
    MOVQ MM5,MM0                        ; 00471469
    PADDUSW MM1,MM0                     ; 0047146c
    PSLLQ MM6,0x10                      ; 0047146f
    PSRLQ MM5,0x10                      ; 00471473
    PADDUSW MM5,MM0                     ; 00471477
    PADDUSW MM6,MM1                     ; 0047147a
    MOVQ MM1,qword ptr [ESI + 0xffffff00] ; 0047147d
    MOVQ MM2,qword ptr [ESI]            ; 00471484
    MOVQ MM3,qword ptr [ESI + 0x100]    ; 00471487
    PUNPCKHBW MM1,qword ptr [0x005f8b28] ; 0047148e | DAT_005f8b28
    PUNPCKHBW MM2,qword ptr [0x005f8b28] ; 00471495 | DAT_005f8b28
    PUNPCKHBW MM3,qword ptr [0x005f8b28] ; 0047149c | DAT_005f8b28
    PADDUSW MM1,MM2                     ; 004714a3
    PADDUSW MM2,MM3                     ; 004714a6
    PADDUSW MM1,MM2                     ; 004714a9
    PADDUSW MM6,MM5                     ; 004714ac
    MOVQ MM4,MM1                        ; 004714af
    PSLLQ MM4,0x30                      ; 004714b2
    PSRLQ MM0,0x30                      ; 004714b6
    MOVQ MM7,MM1                        ; 004714ba
    MOVQ MM5,MM1                        ; 004714bd
    PADDUSW MM0,MM1                     ; 004714c0
    PSLLQ MM7,0x10                      ; 004714c3
    PSRLQ MM5,0x10                      ; 004714c7
    PADDUSW MM6,MM4                     ; 004714cb
    PADDUSW MM5,MM1                     ; 004714ce
    PADDUSW MM7,MM0                     ; 004714d1
    MOVQ MM0,qword ptr [ESI + 0xffffff08] ; 004714d4
    MOVQ MM2,qword ptr [ESI + 0x8]      ; 004714db
    MOVQ MM3,qword ptr [ESI + 0x108]    ; 004714df
    PUNPCKLBW MM0,dword ptr [0x005f8b28] ; 004714e6 | DAT_005f8b28
    PUNPCKLBW MM2,dword ptr [0x005f8b28] ; 004714ed | DAT_005f8b28
    PUNPCKLBW MM3,dword ptr [0x005f8b28] ; 004714f4 | DAT_005f8b28
    PADDUSW MM0,MM2                     ; 004714fb
    PADDUSW MM2,MM3                     ; 004714fe
    PADDUSW MM0,MM2                     ; 00471501
    PADDUSW MM7,MM5                     ; 00471504
    MOVQ MM4,MM0                        ; 00471507
    PSRLW MM6,0x4                       ; 0047150a
    PSLLQ MM4,0x30                      ; 0047150e
    PSRLQ MM1,0x30                      ; 00471512
    PADDUSW MM7,MM4                     ; 00471516
    PSRLW MM7,0x4                       ; 00471519
    ADD ESI,0x8                         ; 0047151d
    PACKUSWB MM6,MM7                    ; 00471520
    MOVQ qword ptr [EDI],MM6            ; 00471523
    ADD EDI,0x8                         ; 00471526
    SUB ECX,0x8                         ; 00471529
    JG 0x00471466                       ; 0047152c
        ;   XREF to: 00471466 (CONDITIONAL_JUMP)  ; LAB_00471466
    EMMS                                ; 00471532
    POP EDI                             ; 00471534
    POP ESI                             ; 00471535
    LEAVE                               ; 00471536
    RET                                 ; 00471537


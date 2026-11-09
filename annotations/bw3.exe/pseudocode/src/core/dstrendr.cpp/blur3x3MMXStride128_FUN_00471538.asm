; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blur3x3MMXStride128_FUN_00471538(undefined8 *param_1,undefined8 *param_2,int param_3)
;
;
; Referenced Globals:
;   undefined8 DAT_005f8b28
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00471538
        ;   Label: core_dstrendr.cpp_blur3x3MMXStride128_FUN_00471538
    MOV EBP,ESP                         ; 00471539
    PUSH ESI                            ; 0047153b
    PUSH EDI                            ; 0047153c
    MOV ESI,dword ptr [EBP + 0xc]       ; 0047153d
    MOV EDI,dword ptr [EBP + 0x8]       ; 00471540
    MOV ECX,dword ptr [EBP + 0x10]      ; 00471543
    MOVQ MM0,qword ptr [ESI + -0x80]    ; 00471546
    MOVQ MM2,qword ptr [ESI]            ; 0047154a
    MOVQ MM3,qword ptr [ESI + 0x80]     ; 0047154d
    PUNPCKLBW MM0,dword ptr [0x005f8b28] ; 00471554 | DAT_005f8b28
    PUNPCKLBW MM2,dword ptr [0x005f8b28] ; 0047155b | DAT_005f8b28
    PUNPCKLBW MM3,dword ptr [0x005f8b28] ; 00471562 | DAT_005f8b28
    PADDUSW MM0,MM2                     ; 00471569
    PADDUSW MM2,MM3                     ; 0047156c
    PADDUSW MM0,MM2                     ; 0047156f
    MOVQ MM1,qword ptr [ESI + 0xffffff78] ; 00471572
    MOVQ MM2,qword ptr [ESI + -0x8]     ; 00471579
    MOVQ MM3,qword ptr [ESI + 0x78]     ; 0047157d
    PUNPCKHBW MM1,qword ptr [0x005f8b28] ; 00471581 | DAT_005f8b28
    PUNPCKHBW MM2,qword ptr [0x005f8b28] ; 00471588 | DAT_005f8b28
    PUNPCKHBW MM3,qword ptr [0x005f8b28] ; 0047158f | DAT_005f8b28
    PADDUSW MM1,MM2                     ; 00471596
    PADDUSW MM2,MM3                     ; 00471599
    PADDUSW MM1,MM2                     ; 0047159c
    PSRLQ MM1,0x30                      ; 0047159f
    MOVQ MM6,MM0                        ; 004715a3
        ;   Label: LAB_004715a3
    MOVQ MM5,MM0                        ; 004715a6
    PADDUSW MM1,MM0                     ; 004715a9
    PSLLQ MM6,0x10                      ; 004715ac
    PSRLQ MM5,0x10                      ; 004715b0
    PADDUSW MM5,MM0                     ; 004715b4
    PADDUSW MM6,MM1                     ; 004715b7
    MOVQ MM1,qword ptr [ESI + -0x80]    ; 004715ba
    MOVQ MM2,qword ptr [ESI]            ; 004715be
    MOVQ MM3,qword ptr [ESI + 0x80]     ; 004715c1
    PUNPCKHBW MM1,qword ptr [0x005f8b28] ; 004715c8 | DAT_005f8b28
    PUNPCKHBW MM2,qword ptr [0x005f8b28] ; 004715cf | DAT_005f8b28
    PUNPCKHBW MM3,qword ptr [0x005f8b28] ; 004715d6 | DAT_005f8b28
    PADDUSW MM1,MM2                     ; 004715dd
    PADDUSW MM2,MM3                     ; 004715e0
    PADDUSW MM1,MM2                     ; 004715e3
    PADDUSW MM6,MM5                     ; 004715e6
    MOVQ MM4,MM1                        ; 004715e9
    PSLLQ MM4,0x30                      ; 004715ec
    PSRLQ MM0,0x30                      ; 004715f0
    MOVQ MM7,MM1                        ; 004715f4
    MOVQ MM5,MM1                        ; 004715f7
    PADDUSW MM0,MM1                     ; 004715fa
    PSLLQ MM7,0x10                      ; 004715fd
    PSRLQ MM5,0x10                      ; 00471601
    PADDUSW MM6,MM4                     ; 00471605
    PADDUSW MM5,MM1                     ; 00471608
    PADDUSW MM7,MM0                     ; 0047160b
    MOVQ MM0,qword ptr [ESI + -0x78]    ; 0047160e
    MOVQ MM2,qword ptr [ESI + 0x8]      ; 00471612
    MOVQ MM3,qword ptr [ESI + 0x88]     ; 00471616
    PUNPCKLBW MM0,dword ptr [0x005f8b28] ; 0047161d | DAT_005f8b28
    PUNPCKLBW MM2,dword ptr [0x005f8b28] ; 00471624 | DAT_005f8b28
    PUNPCKLBW MM3,dword ptr [0x005f8b28] ; 0047162b | DAT_005f8b28
    PADDUSW MM0,MM2                     ; 00471632
    PADDUSW MM2,MM3                     ; 00471635
    PADDUSW MM0,MM2                     ; 00471638
    PADDUSW MM7,MM5                     ; 0047163b
    MOVQ MM4,MM0                        ; 0047163e
    PSRLW MM6,0x4                       ; 00471641
    PSLLQ MM4,0x30                      ; 00471645
    PSRLQ MM1,0x30                      ; 00471649
    PADDUSW MM7,MM4                     ; 0047164d
    PSRLW MM7,0x4                       ; 00471650
    ADD ESI,0x8                         ; 00471654
    PACKUSWB MM6,MM7                    ; 00471657
    MOVQ qword ptr [EDI],MM6            ; 0047165a
    ADD EDI,0x8                         ; 0047165d
    SUB ECX,0x8                         ; 00471660
    JG 0x004715a3                       ; 00471663
        ;   XREF to: 004715a3 (CONDITIONAL_JUMP)  ; LAB_004715a3
    EMMS                                ; 00471669
    POP EDI                             ; 0047166b
    POP ESI                             ; 0047166c
    LEAVE                               ; 0047166d
    RET                                 ; 0047166e


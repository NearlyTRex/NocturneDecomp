; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blur3x3MMXStride128_FUN_004889b8(undefined8 *param_1,undefined8 *param_2,int param_3)
;
;
; Referenced Globals:
;   undefined8 DAT_006185a8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004889b8
        ;   Label: core_dstrendr.cpp_blur3x3MMXStride128_FUN_004889b8
    MOV EBP,ESP                         ; 004889b9
    PUSH ESI                            ; 004889bb
    PUSH EDI                            ; 004889bc
    MOV ESI,dword ptr [EBP + 0xc]       ; 004889bd
    MOV EDI,dword ptr [EBP + 0x8]       ; 004889c0
    MOV ECX,dword ptr [EBP + 0x10]      ; 004889c3
    MOVQ MM0,qword ptr [ESI + -0x80]    ; 004889c6
    MOVQ MM2,qword ptr [ESI]            ; 004889ca
    MOVQ MM3,qword ptr [ESI + 0x80]     ; 004889cd
    PUNPCKLBW MM0,dword ptr [0x006185a8] ; 004889d4 | DAT_006185a8
    PUNPCKLBW MM2,dword ptr [0x006185a8] ; 004889db | DAT_006185a8
    PUNPCKLBW MM3,dword ptr [0x006185a8] ; 004889e2 | DAT_006185a8
    PADDUSW MM0,MM2                     ; 004889e9
    PADDUSW MM2,MM3                     ; 004889ec
    PADDUSW MM0,MM2                     ; 004889ef
    MOVQ MM1,qword ptr [ESI + 0xffffff78] ; 004889f2
    MOVQ MM2,qword ptr [ESI + -0x8]     ; 004889f9
    MOVQ MM3,qword ptr [ESI + 0x78]     ; 004889fd
    PUNPCKHBW MM1,qword ptr [0x006185a8] ; 00488a01 | DAT_006185a8
    PUNPCKHBW MM2,qword ptr [0x006185a8] ; 00488a08 | DAT_006185a8
    PUNPCKHBW MM3,qword ptr [0x006185a8] ; 00488a0f | DAT_006185a8
    PADDUSW MM1,MM2                     ; 00488a16
    PADDUSW MM2,MM3                     ; 00488a19
    PADDUSW MM1,MM2                     ; 00488a1c
    PSRLQ MM1,0x30                      ; 00488a1f
    MOVQ MM6,MM0                        ; 00488a23
        ;   Label: LAB_00488a23
    MOVQ MM5,MM0                        ; 00488a26
    PADDUSW MM1,MM0                     ; 00488a29
    PSLLQ MM6,0x10                      ; 00488a2c
    PSRLQ MM5,0x10                      ; 00488a30
    PADDUSW MM5,MM0                     ; 00488a34
    PADDUSW MM6,MM1                     ; 00488a37
    MOVQ MM1,qword ptr [ESI + -0x80]    ; 00488a3a
    MOVQ MM2,qword ptr [ESI]            ; 00488a3e
    MOVQ MM3,qword ptr [ESI + 0x80]     ; 00488a41
    PUNPCKHBW MM1,qword ptr [0x006185a8] ; 00488a48 | DAT_006185a8
    PUNPCKHBW MM2,qword ptr [0x006185a8] ; 00488a4f | DAT_006185a8
    PUNPCKHBW MM3,qword ptr [0x006185a8] ; 00488a56 | DAT_006185a8
    PADDUSW MM1,MM2                     ; 00488a5d
    PADDUSW MM2,MM3                     ; 00488a60
    PADDUSW MM1,MM2                     ; 00488a63
    PADDUSW MM6,MM5                     ; 00488a66
    MOVQ MM4,MM1                        ; 00488a69
    PSLLQ MM4,0x30                      ; 00488a6c
    PSRLQ MM0,0x30                      ; 00488a70
    MOVQ MM7,MM1                        ; 00488a74
    MOVQ MM5,MM1                        ; 00488a77
    PADDUSW MM0,MM1                     ; 00488a7a
    PSLLQ MM7,0x10                      ; 00488a7d
    PSRLQ MM5,0x10                      ; 00488a81
    PADDUSW MM6,MM4                     ; 00488a85
    PADDUSW MM5,MM1                     ; 00488a88
    PADDUSW MM7,MM0                     ; 00488a8b
    MOVQ MM0,qword ptr [ESI + -0x78]    ; 00488a8e
    MOVQ MM2,qword ptr [ESI + 0x8]      ; 00488a92
    MOVQ MM3,qword ptr [ESI + 0x88]     ; 00488a96
    PUNPCKLBW MM0,dword ptr [0x006185a8] ; 00488a9d | DAT_006185a8
    PUNPCKLBW MM2,dword ptr [0x006185a8] ; 00488aa4 | DAT_006185a8
    PUNPCKLBW MM3,dword ptr [0x006185a8] ; 00488aab | DAT_006185a8
    PADDUSW MM0,MM2                     ; 00488ab2
    PADDUSW MM2,MM3                     ; 00488ab5
    PADDUSW MM0,MM2                     ; 00488ab8
    PADDUSW MM7,MM5                     ; 00488abb
    MOVQ MM4,MM0                        ; 00488abe
    PSRLW MM6,0x4                       ; 00488ac1
    PSLLQ MM4,0x30                      ; 00488ac5
    PSRLQ MM1,0x30                      ; 00488ac9
    PADDUSW MM7,MM4                     ; 00488acd
    PSRLW MM7,0x4                       ; 00488ad0
    ADD ESI,0x8                         ; 00488ad4
    PACKUSWB MM6,MM7                    ; 00488ad7
    MOVQ qword ptr [EDI],MM6            ; 00488ada
    ADD EDI,0x8                         ; 00488add
    SUB ECX,0x8                         ; 00488ae0
    JG 0x00488a23                       ; 00488ae3
        ;   XREF to: 00488a23 (CONDITIONAL_JUMP)  ; LAB_00488a23
    EMMS                                ; 00488ae9
    POP EDI                             ; 00488aeb
    POP ESI                             ; 00488aec
    LEAVE                               ; 00488aed
    RET                                 ; 00488aee


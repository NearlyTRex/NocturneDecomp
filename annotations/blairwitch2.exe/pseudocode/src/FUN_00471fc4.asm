; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00471fc4(uint *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   FUN_00442820 at 00442a10
;
; Referenced Globals:
;   undefined8 DAT_00611318
;   undefined8 DAT_00611320
;   undefined4 DAT_00612880
;   undefined4 DAT_00613078
;   undefined4 DAT_0061c8e8
;   undefined4 DAT_0061c908
;   undefined4 DAT_0061c928
;   undefined4 DAT_0061c930
;   undefined4 DAT_0061c950
;   undefined4 DAT_0061c970
;   undefined4 DAT_00b6639c
;   undefined4 DAT_01c38b5c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00471fc4
        ;   Label: FUN_00471fc4
    MOV EBP,ESP                         ; 00471fc5
    PUSH ESI                            ; 00471fc7
    PUSH EDI                            ; 00471fc8
    PUSH EBP                            ; 00471fc9
    MOV ECX,dword ptr [EBP + 0x18]      ; 00471fca
    MOV EDI,dword ptr [EBP + 0x8]       ; 00471fcd
    MOV ESI,dword ptr [EBP + 0xc]       ; 00471fd0
    MOV EBX,dword ptr [EBP + 0x10]      ; 00471fd3
    MOV EBP,dword ptr [EBP + 0x14]      ; 00471fd6
    PXOR MM7,MM7                        ; 00471fd9
    MOVD MM5,dword ptr [0x01c38b5c]     ; 00471fdc | DAT_01c38b5c
    PUNPCKLBW MM5,MM7                   ; 00471fe3
    PSLLW MM5,0x6                       ; 00471fe6
    MOV EAX,dword ptr [ESI]             ; 00471fea
    MOV EAX,dword ptr [ESI + 0x20]      ; 00471fec
    MOV EAX,dword ptr [ESI + 0x40]      ; 00471fef
    MOV EAX,dword ptr [ESI + 0x60]      ; 00471ff2
    MOV EAX,dword ptr [ESI + 0x80]      ; 00471ff5
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00471ffb
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00472001
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00472007
    MOV EAX,dword ptr [ESI + 0x100]     ; 0047200d
    MOV EAX,dword ptr [ESI + 0x120]     ; 00472013
    MOV EAX,dword ptr [ESI + 0x140]     ; 00472019
    MOV EAX,dword ptr [ESI + 0x160]     ; 0047201f
    MOV EAX,dword ptr [ESI + 0x180]     ; 00472025
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 0047202b
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00472031
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00472037
    MOV EAX,dword ptr [ESI + 0x200]     ; 0047203d
    MOV EAX,dword ptr [ESI + 0x220]     ; 00472043
    MOV EAX,dword ptr [ESI + 0x240]     ; 00472049
    MOV EAX,dword ptr [ESI + 0x260]     ; 0047204f
    MOV EAX,dword ptr [ESI + 0x280]     ; 00472055
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 0047205b
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00472061
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00472067
    MOV EAX,dword ptr [ESI + 0x300]     ; 0047206d
    MOV EAX,dword ptr [ESI + 0x320]     ; 00472073
    MOV EAX,dword ptr [ESI + 0x340]     ; 00472079
    MOV EAX,dword ptr [ESI + 0x360]     ; 0047207f
    MOV EAX,dword ptr [ESI + 0x380]     ; 00472085
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 0047208b
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00472091
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00472097
    MOV EAX,dword ptr [ESI + 0x400]     ; 0047209d
    MOV EAX,dword ptr [ESI + 0x420]     ; 004720a3
    MOV EAX,dword ptr [ESI + 0x440]     ; 004720a9
    MOV EAX,dword ptr [ESI + 0x460]     ; 004720af
    MOV EAX,dword ptr [ESI + 0x480]     ; 004720b5
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 004720bb
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 004720c1
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 004720c7
    MOV EAX,dword ptr [ESI + 0x500]     ; 004720cd
    MOV EAX,dword ptr [ESI + 0x520]     ; 004720d3
    MOV EAX,dword ptr [ESI + 0x540]     ; 004720d9
    MOV EAX,dword ptr [ESI + 0x560]     ; 004720df
    MOV EAX,dword ptr [ESI + 0x580]     ; 004720e5
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 004720eb
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 004720f1
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 004720f7
    MOV EAX,dword ptr [ESI + 0x600]     ; 004720fd
    MOV EAX,dword ptr [ESI + 0x620]     ; 00472103
    MOV EAX,dword ptr [ESI + 0x640]     ; 00472109
    MOV EAX,dword ptr [ESI + 0x660]     ; 0047210f
    MOV EAX,dword ptr [ESI + 0x680]     ; 00472115
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 0047211b
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00472121
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00472127
    MOV EAX,dword ptr [ESI + 0x700]     ; 0047212d
    MOV EAX,dword ptr [ESI + 0x720]     ; 00472133
    MOV EAX,dword ptr [ESI + 0x740]     ; 00472139
    MOV EAX,dword ptr [ESI + 0x760]     ; 0047213f
    MOV EAX,dword ptr [ESI + 0x780]     ; 00472145
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 0047214b
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00472151
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00472157
    MOV EAX,dword ptr [ESI + 0x800]     ; 0047215d
    MOV EAX,dword ptr [ESI + 0x820]     ; 00472163
    MOV EAX,dword ptr [ESI + 0x840]     ; 00472169
    MOV EAX,dword ptr [ESI + 0x860]     ; 0047216f
    MOV EAX,dword ptr [ESI + 0x880]     ; 00472175
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 0047217b
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00472181
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00472187
    MOV EAX,dword ptr [ESI + 0x900]     ; 0047218d
    MOV EAX,dword ptr [ESI + 0x920]     ; 00472193
    MOV EAX,dword ptr [ESI + 0x940]     ; 00472199
    MOV EAX,dword ptr [ESI + 0x960]     ; 0047219f
    MOV EAX,dword ptr [ESI + 0x980]     ; 004721a5
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 004721ab
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 004721b1
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 004721b7
    MOVZX EDX,byte ptr [EBX]            ; 004721bd
        ;   Label: LAB_004721bd
    MOVQ MM0,qword ptr [ESI]            ; 004721c0
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 004721c3 | DAT_00b6639c
    MOVZX EAX,byte ptr [EBP]            ; 004721cb
    PUNPCKLBW MM0,MM7                   ; 004721cf
    SHR EDX,0x1                         ; 004721d2
    PUNPCKLBW MM2,MM7                   ; 004721d4
    ADD EAX,EDX                         ; 004721d7
    PMULLW MM0,MM2                      ; 004721d9
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 004721dc | DAT_00612880
    MOVQ MM2,MM3                        ; 004721e4
    MOVQ MM4,MM5                        ; 004721e7
    PXOR MM2,qword ptr [0x00613078]     ; 004721ea | DAT_00613078
    PMULHW MM0,MM2                      ; 004721f1
    PMULHW MM4,MM3                      ; 004721f4
    PADDW MM0,MM4                       ; 004721f7
    PADDW MM0,qword ptr [0x00611318]    ; 004721fa | DAT_00611318
    PSRLW MM0,0x4                       ; 00472201
    PACKUSWB MM0,MM7                    ; 00472205
    MOVQ MM2,MM0                        ; 00472208
    MOVQ MM3,MM0                        ; 0047220b
    PAND MM0,qword ptr [0x0061c928]     ; 0047220e | DAT_0061c928
    PAND MM2,qword ptr [0x0061c908]     ; 00472215 | DAT_0061c908
    PAND MM3,qword ptr [0x0061c8e8]     ; 0047221c | DAT_0061c8e8
    PSRLQ MM0,qword ptr [0x0061c970]    ; 00472223 | DAT_0061c970
    PSRLQ MM2,qword ptr [0x0061c950]    ; 0047222a | DAT_0061c950
    PSRLQ MM3,qword ptr [0x0061c930]    ; 00472231 | DAT_0061c930
    POR MM0,MM2                         ; 00472238
    POR MM0,MM3                         ; 0047223b
    MOVQ MM6,MM0                        ; 0047223e
    ADD ESI,0x4                         ; 00472241
    INC EBX                             ; 00472244
    INC EBP                             ; 00472245
    MOVZX EDX,byte ptr [EBX]            ; 00472246
    MOVQ MM0,qword ptr [ESI]            ; 00472249
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 0047224c | DAT_00b6639c
    MOVZX EAX,byte ptr [EBP]            ; 00472254
    PUNPCKLBW MM0,MM7                   ; 00472258
    SHR EDX,0x1                         ; 0047225b
    PUNPCKLBW MM2,MM7                   ; 0047225d
    ADD EAX,EDX                         ; 00472260
    PMULLW MM0,MM2                      ; 00472262
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 00472265 | DAT_00612880
    MOVQ MM2,MM3                        ; 0047226d
    MOVQ MM4,MM5                        ; 00472270
    PXOR MM2,qword ptr [0x00613078]     ; 00472273 | DAT_00613078
    PMULHW MM0,MM2                      ; 0047227a
    PMULHW MM4,MM3                      ; 0047227d
    PADDW MM0,MM4                       ; 00472280
    PADDW MM0,qword ptr [0x00611320]    ; 00472283 | DAT_00611320
    PSRLW MM0,0x4                       ; 0047228a
    PACKUSWB MM0,MM7                    ; 0047228e
    MOVQ MM2,MM0                        ; 00472291
    MOVQ MM3,MM0                        ; 00472294
    PAND MM0,qword ptr [0x0061c928]     ; 00472297 | DAT_0061c928
    PAND MM2,qword ptr [0x0061c908]     ; 0047229e | DAT_0061c908
    PAND MM3,qword ptr [0x0061c8e8]     ; 004722a5 | DAT_0061c8e8
    PSRLQ MM0,qword ptr [0x0061c970]    ; 004722ac | DAT_0061c970
    PSRLQ MM2,qword ptr [0x0061c950]    ; 004722b3 | DAT_0061c950
    PSRLQ MM3,qword ptr [0x0061c930]    ; 004722ba | DAT_0061c930
    POR MM0,MM2                         ; 004722c1
    POR MM0,MM3                         ; 004722c4
    PSLLQ MM0,0x10                      ; 004722c7
    POR MM0,MM6                         ; 004722cb
    MOVD dword ptr [EDI],MM0            ; 004722ce
    ADD ESI,0x4                         ; 004722d1
    INC EBX                             ; 004722d4
    INC EBP                             ; 004722d5
    ADD EDI,0x4                         ; 004722d6
    SUB ECX,0x2                         ; 004722d9
    JG 0x004721bd                       ; 004722dc
        ;   XREF to: 004721bd (CONDITIONAL_JUMP)  ; LAB_004721bd
    POP EBP                             ; 004722e2
    EMMS                                ; 004722e3
    POP EDI                             ; 004722e5
    POP ESI                             ; 004722e6
    LEAVE                               ; 004722e7
    RET                                 ; 004722e8


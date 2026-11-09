; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00471650(uint *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820 at 00442a38
;
; Referenced Globals:
;   undefined8 DAT_00611338
;   undefined8 DAT_00611340
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

    PUSH EBP                            ; 00471650
        ;   Label: core_dstrendr.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00471650
    MOV EBP,ESP                         ; 00471651
    PUSH ESI                            ; 00471653
    PUSH EDI                            ; 00471654
    PUSH EBP                            ; 00471655
    MOV ECX,dword ptr [EBP + 0x18]      ; 00471656
    MOV EDI,dword ptr [EBP + 0x8]       ; 00471659
    MOV ESI,dword ptr [EBP + 0xc]       ; 0047165c
    MOV EBX,dword ptr [EBP + 0x10]      ; 0047165f
    MOV EBP,dword ptr [EBP + 0x14]      ; 00471662
    PXOR MM7,MM7                        ; 00471665
    MOVD MM5,dword ptr [0x01c38b5c]     ; 00471668 | DAT_01c38b5c
    PUNPCKLBW MM5,MM7                   ; 0047166f
    PSLLW MM5,0x6                       ; 00471672
    MOV EAX,dword ptr [ESI]             ; 00471676
    MOV EAX,dword ptr [ESI + 0x20]      ; 00471678
    MOV EAX,dword ptr [ESI + 0x40]      ; 0047167b
    MOV EAX,dword ptr [ESI + 0x60]      ; 0047167e
    MOV EAX,dword ptr [ESI + 0x80]      ; 00471681
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00471687
    MOV EAX,dword ptr [ESI + 0xc0]      ; 0047168d
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00471693
    MOV EAX,dword ptr [ESI + 0x100]     ; 00471699
    MOV EAX,dword ptr [ESI + 0x120]     ; 0047169f
    MOV EAX,dword ptr [ESI + 0x140]     ; 004716a5
    MOV EAX,dword ptr [ESI + 0x160]     ; 004716ab
    MOV EAX,dword ptr [ESI + 0x180]     ; 004716b1
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 004716b7
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 004716bd
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 004716c3
    MOV EAX,dword ptr [ESI + 0x200]     ; 004716c9
    MOV EAX,dword ptr [ESI + 0x220]     ; 004716cf
    MOV EAX,dword ptr [ESI + 0x240]     ; 004716d5
    MOV EAX,dword ptr [ESI + 0x260]     ; 004716db
    MOV EAX,dword ptr [ESI + 0x280]     ; 004716e1
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 004716e7
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 004716ed
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 004716f3
    MOV EAX,dword ptr [ESI + 0x300]     ; 004716f9
    MOV EAX,dword ptr [ESI + 0x320]     ; 004716ff
    MOV EAX,dword ptr [ESI + 0x340]     ; 00471705
    MOV EAX,dword ptr [ESI + 0x360]     ; 0047170b
    MOV EAX,dword ptr [ESI + 0x380]     ; 00471711
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00471717
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 0047171d
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00471723
    MOV EAX,dword ptr [ESI + 0x400]     ; 00471729
    MOV EAX,dword ptr [ESI + 0x420]     ; 0047172f
    MOV EAX,dword ptr [ESI + 0x440]     ; 00471735
    MOV EAX,dword ptr [ESI + 0x460]     ; 0047173b
    MOV EAX,dword ptr [ESI + 0x480]     ; 00471741
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00471747
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 0047174d
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00471753
    MOV EAX,dword ptr [ESI + 0x500]     ; 00471759
    MOV EAX,dword ptr [ESI + 0x520]     ; 0047175f
    MOV EAX,dword ptr [ESI + 0x540]     ; 00471765
    MOV EAX,dword ptr [ESI + 0x560]     ; 0047176b
    MOV EAX,dword ptr [ESI + 0x580]     ; 00471771
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00471777
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 0047177d
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00471783
    MOV EAX,dword ptr [ESI + 0x600]     ; 00471789
    MOV EAX,dword ptr [ESI + 0x620]     ; 0047178f
    MOV EAX,dword ptr [ESI + 0x640]     ; 00471795
    MOV EAX,dword ptr [ESI + 0x660]     ; 0047179b
    MOV EAX,dword ptr [ESI + 0x680]     ; 004717a1
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 004717a7
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 004717ad
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 004717b3
    MOV EAX,dword ptr [ESI + 0x700]     ; 004717b9
    MOV EAX,dword ptr [ESI + 0x720]     ; 004717bf
    MOV EAX,dword ptr [ESI + 0x740]     ; 004717c5
    MOV EAX,dword ptr [ESI + 0x760]     ; 004717cb
    MOV EAX,dword ptr [ESI + 0x780]     ; 004717d1
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 004717d7
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 004717dd
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 004717e3
    MOV EAX,dword ptr [ESI + 0x800]     ; 004717e9
    MOV EAX,dword ptr [ESI + 0x820]     ; 004717ef
    MOV EAX,dword ptr [ESI + 0x840]     ; 004717f5
    MOV EAX,dword ptr [ESI + 0x860]     ; 004717fb
    MOV EAX,dword ptr [ESI + 0x880]     ; 00471801
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00471807
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 0047180d
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00471813
    MOV EAX,dword ptr [ESI + 0x900]     ; 00471819
    MOV EAX,dword ptr [ESI + 0x920]     ; 0047181f
    MOV EAX,dword ptr [ESI + 0x940]     ; 00471825
    MOV EAX,dword ptr [ESI + 0x960]     ; 0047182b
    MOV EAX,dword ptr [ESI + 0x980]     ; 00471831
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00471837
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 0047183d
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00471843
    MOV EAX,dword ptr [EBX + 0x140]     ; 00471849
    MOV EAX,dword ptr [EBX + 0x160]     ; 0047184f
    MOV EAX,dword ptr [EBX + 0x180]     ; 00471855
    MOV EAX,dword ptr [EBX + 0x1a0]     ; 0047185b
    MOV EAX,dword ptr [EBX + 0x1c0]     ; 00471861
    MOV EAX,dword ptr [EBX + 0x1e0]     ; 00471867
    MOV EAX,dword ptr [EBX + 0x200]     ; 0047186d
    MOV EAX,dword ptr [EBX + 0x220]     ; 00471873
    MOV EAX,dword ptr [EBX + 0x240]     ; 00471879
    MOV EAX,dword ptr [EBX + 0x260]     ; 0047187f
    JMP 0x00471890                      ; 00471885
        ;   XREF to: 00471890 (UNCONDITIONAL_JUMP)  ; LAB_00471890
    MOVZX EDX,byte ptr [EBX]            ; 00471890
        ;   Label: LAB_00471890
    MOVZX EAX,byte ptr [EBX + 0x140]    ; 00471893
    ADD EDX,EAX                         ; 0047189a
    MOVQ MM0,qword ptr [ESI]            ; 0047189c
    SHR EDX,0x1                         ; 0047189f
    MOVZX EAX,byte ptr [EBX + 0x141]    ; 004718a1
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 004718a8 | DAT_00b6639c
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 004718b0
    MOVQ MM1,MM0                        ; 004718b4
    ADD EDX,EAX                         ; 004718b7
    MOVZX EAX,byte ptr [EBP]            ; 004718b9
    SHR EDX,0x1                         ; 004718bd
    PUNPCKLBW MM0,MM7                   ; 004718bf
    MOVD MM6,dword ptr [EDX*0x4 + 0xb6639c] ; 004718c2 | DAT_00b6639c
    PSRLQ MM1,0x20                      ; 004718ca
    SHR EDX,0x1                         ; 004718ce
    PUNPCKLBW MM6,MM7                   ; 004718d0
    PUNPCKLBW MM2,MM7                   ; 004718d3
    ADD EAX,EDX                         ; 004718d6
    PADDW MM6,MM2                       ; 004718d8
    PUNPCKLBW MM1,MM7                   ; 004718db
    PMULLW MM0,MM2                      ; 004718de
    PSRLW MM6,0x1                       ; 004718e1
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 004718e5 | DAT_00612880
    PMULLW MM1,MM6                      ; 004718ed
    MOVQ MM2,MM3                        ; 004718f0
    MOVQ MM4,MM5                        ; 004718f3
    PXOR MM2,qword ptr [0x00613078]     ; 004718f6 | DAT_00613078
    PMULHW MM0,MM2                      ; 004718fd
    PMULHW MM1,MM2                      ; 00471900
    PMULHW MM4,MM3                      ; 00471903
    PADDW MM0,MM4                       ; 00471906
    PADDW MM1,MM4                       ; 00471909
    PADDW MM0,qword ptr [0x00611338]    ; 0047190c | DAT_00611338
    PADDW MM1,qword ptr [0x00611340]    ; 00471913 | DAT_00611340
    PSRLW MM0,0x4                       ; 0047191a
    PSRLW MM1,0x4                       ; 0047191e
    PACKUSWB MM0,MM7                    ; 00471922
    PACKUSWB MM1,MM7                    ; 00471925
    MOVQ MM2,MM0                        ; 00471928
    MOVQ MM3,MM0                        ; 0047192b
    PAND MM0,qword ptr [0x0061c928]     ; 0047192e | DAT_0061c928
    PAND MM2,qword ptr [0x0061c908]     ; 00471935 | DAT_0061c908
    PAND MM3,qword ptr [0x0061c8e8]     ; 0047193c | DAT_0061c8e8
    PSRLQ MM0,qword ptr [0x0061c970]    ; 00471943 | DAT_0061c970
    PSRLQ MM2,qword ptr [0x0061c950]    ; 0047194a | DAT_0061c950
    PSRLQ MM3,qword ptr [0x0061c930]    ; 00471951 | DAT_0061c930
    POR MM0,MM2                         ; 00471958
    POR MM0,MM3                         ; 0047195b
    MOVQ MM2,MM1                        ; 0047195e
    MOVQ MM3,MM1                        ; 00471961
    PAND MM1,qword ptr [0x0061c928]     ; 00471964 | DAT_0061c928
    PAND MM2,qword ptr [0x0061c908]     ; 0047196b | DAT_0061c908
    PAND MM3,qword ptr [0x0061c8e8]     ; 00471972 | DAT_0061c8e8
    PSRLQ MM1,qword ptr [0x0061c970]    ; 00471979 | DAT_0061c970
    PSRLQ MM2,qword ptr [0x0061c950]    ; 00471980 | DAT_0061c950
    PSRLQ MM3,qword ptr [0x0061c930]    ; 00471987 | DAT_0061c930
    POR MM1,MM2                         ; 0047198e
    POR MM1,MM3                         ; 00471991
    PSLLQ MM1,0x10                      ; 00471994
    POR MM0,MM1                         ; 00471998
    ADD ESI,0x8                         ; 0047199b
    INC EBX                             ; 0047199e
    INC EBP                             ; 0047199f
    MOVD dword ptr [EDI],MM0            ; 004719a0
    ADD EDI,0x4                         ; 004719a3
    SUB ECX,0x2                         ; 004719a6
    JG 0x00471890                       ; 004719a9
        ;   XREF to: 00471890 (CONDITIONAL_JUMP)  ; LAB_00471890
    POP EBP                             ; 004719af
    EMMS                                ; 004719b0
    POP EDI                             ; 004719b2
    POP ESI                             ; 004719b3
    LEAVE                               ; 004719b4
    RET                                 ; 004719b5


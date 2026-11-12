; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00471103(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820 at 004429ea
;
; Referenced Globals:
;   undefined8 DAT_00611328
;   undefined8 DAT_00611330
;   undefined4 DAT_00612880
;   undefined4 DAT_006128a0
;   undefined4 DAT_006128c0
;   undefined4 DAT_006128e0
;   undefined4 DAT_00612900
;   undefined4 DAT_00612920
;   undefined4 DAT_00612940
;   undefined4 DAT_00612960
;   undefined4 DAT_00612980
;   undefined4 DAT_006129a0
;   undefined4 DAT_006129c0
;   undefined4 DAT_006129e0
;   undefined4 DAT_00612a00
;   ... and 91 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00471103
        ;   Label: core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00471103
    MOV EBP,ESP                         ; 00471104
    PUSH ESI                            ; 00471106
    PUSH EDI                            ; 00471107
    PUSH EBP                            ; 00471108
    MOV ECX,dword ptr [EBP + 0x18]      ; 00471109
    MOV EDI,dword ptr [EBP + 0x8]       ; 0047110c
    MOV ESI,dword ptr [EBP + 0xc]       ; 0047110f
    MOV EBX,dword ptr [EBP + 0x10]      ; 00471112
    MOV EBP,dword ptr [EBP + 0x14]      ; 00471115
    PXOR MM7,MM7                        ; 00471118
    MOVD MM5,dword ptr [0x01c38b5c]     ; 0047111b | DAT_01c38b5c
    PUNPCKLBW MM5,MM7                   ; 00471122
    PSLLW MM5,0x6                       ; 00471125
    MOV EAX,dword ptr [EBX]             ; 00471129
    MOV EAX,dword ptr [EBX + 0x20]      ; 0047112b
    MOV EAX,dword ptr [EBX + 0x40]      ; 0047112e
    MOV EAX,dword ptr [EBX + 0x60]      ; 00471131
    MOV EAX,dword ptr [EBX + 0x80]      ; 00471134
    MOV EAX,dword ptr [EBX + 0xa0]      ; 0047113a
    MOV EAX,dword ptr [EBX + 0xc0]      ; 00471140
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00471146
    MOV EAX,dword ptr [EBX + 0x100]     ; 0047114c
    MOV EAX,dword ptr [EBX + 0x120]     ; 00471152
    MOV EDX,dword ptr [EBP]             ; 00471158
    MOV EDX,dword ptr [EBP + 0x20]      ; 0047115b
    MOV EDX,dword ptr [EBP + 0x40]      ; 0047115e
    MOV EDX,dword ptr [EBP + 0x60]      ; 00471161
    MOV EDX,dword ptr [EBP + 0x80]      ; 00471164
    MOV EDX,dword ptr [EBP + 0xa0]      ; 0047116a
    MOV EDX,dword ptr [EBP + 0xc0]      ; 00471170
    MOV EDX,dword ptr [EBP + 0xe0]      ; 00471176
    MOV EDX,dword ptr [EBP + 0x100]     ; 0047117c
    MOV EDX,dword ptr [EBP + 0x120]     ; 00471182
    MOV EAX,dword ptr [ESI]             ; 00471188
    MOV EAX,dword ptr [ESI + 0x20]      ; 0047118a
    MOV EAX,dword ptr [ESI + 0x40]      ; 0047118d
    MOV EAX,dword ptr [ESI + 0x60]      ; 00471190
    MOV EAX,dword ptr [ESI + 0x80]      ; 00471193
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00471199
    MOV EAX,dword ptr [ESI + 0xc0]      ; 0047119f
    MOV EAX,dword ptr [ESI + 0xe0]      ; 004711a5
    MOV EAX,dword ptr [ESI + 0x100]     ; 004711ab
    MOV EAX,dword ptr [ESI + 0x120]     ; 004711b1
    MOV EAX,dword ptr [ESI + 0x140]     ; 004711b7
    MOV EAX,dword ptr [ESI + 0x160]     ; 004711bd
    MOV EAX,dword ptr [ESI + 0x180]     ; 004711c3
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 004711c9
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 004711cf
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 004711d5
    MOV EAX,dword ptr [ESI + 0x200]     ; 004711db
    MOV EAX,dword ptr [ESI + 0x220]     ; 004711e1
    MOV EAX,dword ptr [ESI + 0x240]     ; 004711e7
    MOV EAX,dword ptr [ESI + 0x260]     ; 004711ed
    MOV EAX,dword ptr [ESI + 0x280]     ; 004711f3
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 004711f9
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 004711ff
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00471205
    MOV EAX,dword ptr [ESI + 0x300]     ; 0047120b
    MOV EAX,dword ptr [ESI + 0x320]     ; 00471211
    MOV EAX,dword ptr [ESI + 0x340]     ; 00471217
    MOV EAX,dword ptr [ESI + 0x360]     ; 0047121d
    MOV EAX,dword ptr [ESI + 0x380]     ; 00471223
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00471229
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 0047122f
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00471235
    MOV EAX,dword ptr [ESI + 0x400]     ; 0047123b
    MOV EAX,dword ptr [ESI + 0x420]     ; 00471241
    MOV EAX,dword ptr [ESI + 0x440]     ; 00471247
    MOV EAX,dword ptr [ESI + 0x460]     ; 0047124d
    MOV EAX,dword ptr [ESI + 0x480]     ; 00471253
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00471259
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 0047125f
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00471265
    MOV EAX,dword ptr [ESI + 0x500]     ; 0047126b
    MOV EAX,dword ptr [ESI + 0x520]     ; 00471271
    MOV EAX,dword ptr [ESI + 0x540]     ; 00471277
    MOV EAX,dword ptr [ESI + 0x560]     ; 0047127d
    MOV EAX,dword ptr [ESI + 0x580]     ; 00471283
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00471289
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 0047128f
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00471295
    MOV EAX,dword ptr [ESI + 0x600]     ; 0047129b
    MOV EAX,dword ptr [ESI + 0x620]     ; 004712a1
    MOV EAX,dword ptr [ESI + 0x640]     ; 004712a7
    MOV EAX,dword ptr [ESI + 0x660]     ; 004712ad
    MOV EAX,dword ptr [ESI + 0x680]     ; 004712b3
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 004712b9
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 004712bf
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 004712c5
    MOV EAX,dword ptr [ESI + 0x700]     ; 004712cb
    MOV EAX,dword ptr [ESI + 0x720]     ; 004712d1
    MOV EAX,dword ptr [ESI + 0x740]     ; 004712d7
    MOV EAX,dword ptr [ESI + 0x760]     ; 004712dd
    MOV EAX,dword ptr [ESI + 0x780]     ; 004712e3
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 004712e9
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 004712ef
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 004712f5
    MOV EAX,dword ptr [ESI + 0x800]     ; 004712fb
    MOV EAX,dword ptr [ESI + 0x820]     ; 00471301
    MOV EAX,dword ptr [ESI + 0x840]     ; 00471307
    MOV EAX,dword ptr [ESI + 0x860]     ; 0047130d
    MOV EAX,dword ptr [ESI + 0x880]     ; 00471313
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00471319
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 0047131f
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00471325
    MOV EAX,dword ptr [ESI + 0x900]     ; 0047132b
    MOV EAX,dword ptr [ESI + 0x920]     ; 00471331
    MOV EAX,dword ptr [ESI + 0x940]     ; 00471337
    MOV EAX,dword ptr [ESI + 0x960]     ; 0047133d
    MOV EAX,dword ptr [ESI + 0x980]     ; 00471343
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00471349
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 0047134f
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00471355
    MOV EAX,[0x00b6639c]                ; 0047135b | DAT_00b6639c
    MOV EAX,[0x00b663bc]                ; 00471360 | DAT_00b663bc
    MOV EAX,[0x00b663dc]                ; 00471365 | DAT_00b663dc
    MOV EAX,[0x00b663fc]                ; 0047136a | DAT_00b663fc
    MOV EAX,[0x00b6641c]                ; 0047136f | DAT_00b6641c
    MOV EAX,[0x00b6643c]                ; 00471374 | DAT_00b6643c
    MOV EAX,[0x00b6645c]                ; 00471379 | DAT_00b6645c
    MOV EAX,[0x00b6647c]                ; 0047137e | DAT_00b6647c
    MOV EAX,[0x00b6649c]                ; 00471383 | DAT_00b6649c
    MOV EAX,[0x00b664bc]                ; 00471388 | DAT_00b664bc
    MOV EAX,[0x00b664dc]                ; 0047138d | DAT_00b664dc
    MOV EAX,[0x00b664fc]                ; 00471392 | DAT_00b664fc
    MOV EAX,[0x00b6651c]                ; 00471397 | DAT_00b6651c
    MOV EAX,[0x00b6653c]                ; 0047139c | DAT_00b6653c
    MOV EAX,[0x00b6655c]                ; 004713a1 | DAT_00b6655c
    MOV EAX,[0x00b6657c]                ; 004713a6 | DAT_00b6657c
    MOV EAX,[0x00b6659c]                ; 004713ab | DAT_00b6659c
    MOV EAX,[0x00b665bc]                ; 004713b0 | DAT_00b665bc
    MOV EAX,[0x00b665dc]                ; 004713b5 | DAT_00b665dc
    MOV EAX,[0x00b665fc]                ; 004713ba | DAT_00b665fc
    MOV EAX,[0x00b6661c]                ; 004713bf | DAT_00b6661c
    MOV EAX,[0x00b6663c]                ; 004713c4 | DAT_00b6663c
    MOV EAX,[0x00b6665c]                ; 004713c9 | DAT_00b6665c
    MOV EAX,[0x00b6667c]                ; 004713ce | DAT_00b6667c
    MOV EAX,[0x00b6669c]                ; 004713d3 | DAT_00b6669c
    MOV EAX,[0x00b666bc]                ; 004713d8 | DAT_00b666bc
    MOV EAX,[0x00b666dc]                ; 004713dd | DAT_00b666dc
    MOV EAX,[0x00b666fc]                ; 004713e2 | DAT_00b666fc
    MOV EAX,[0x00b6671c]                ; 004713e7 | DAT_00b6671c
    MOV EAX,[0x00b6673c]                ; 004713ec | DAT_00b6673c
    MOV EAX,[0x00b6675c]                ; 004713f1 | DAT_00b6675c
    MOV EAX,[0x00b6677c]                ; 004713f6 | DAT_00b6677c
    MOV EAX,[0x00612880]                ; 004713fb | DAT_00612880
    MOV EAX,[0x006128a0]                ; 00471400 | DAT_006128a0
    MOV EAX,[0x006128c0]                ; 00471405 | DAT_006128c0
    MOV EAX,[0x006128e0]                ; 0047140a | DAT_006128e0
    MOV EAX,[0x00612900]                ; 0047140f | DAT_00612900
    MOV EAX,[0x00612920]                ; 00471414 | DAT_00612920
    MOV EAX,[0x00612940]                ; 00471419 | DAT_00612940
    MOV EAX,[0x00612960]                ; 0047141e | DAT_00612960
    MOV EAX,[0x00612980]                ; 00471423 | DAT_00612980
    MOV EAX,[0x006129a0]                ; 00471428 | DAT_006129a0
    MOV EAX,[0x006129c0]                ; 0047142d | DAT_006129c0
    MOV EAX,[0x006129e0]                ; 00471432 | DAT_006129e0
    MOV EAX,[0x00612a00]                ; 00471437 | DAT_00612a00
    MOV EAX,[0x00612a20]                ; 0047143c | DAT_00612a20
    MOV EAX,[0x00612a40]                ; 00471441 | DAT_00612a40
    MOV EAX,[0x00612a60]                ; 00471446 | DAT_00612a60
    MOV EAX,[0x00612a80]                ; 0047144b | DAT_00612a80
    MOV EAX,[0x00612aa0]                ; 00471450 | DAT_00612aa0
    MOV EAX,[0x00612ac0]                ; 00471455 | DAT_00612ac0
    MOV EAX,[0x00612ae0]                ; 0047145a | DAT_00612ae0
    MOV EAX,[0x00612b00]                ; 0047145f | DAT_00612b00
    MOV EAX,[0x00612b20]                ; 00471464 | DAT_00612b20
    MOV EAX,[0x00612b40]                ; 00471469 | DAT_00612b40
    MOV EAX,[0x00612b60]                ; 0047146e | DAT_00612b60
    MOV EAX,[0x00612b80]                ; 00471473 | DAT_00612b80
    MOV EAX,[0x00612ba0]                ; 00471478 | DAT_00612ba0
    MOV EAX,[0x00612bc0]                ; 0047147d | DAT_00612bc0
    MOV EAX,[0x00612be0]                ; 00471482 | DAT_00612be0
    MOV EAX,[0x00612c00]                ; 00471487 | DAT_00612c00
    MOV EAX,[0x00612c20]                ; 0047148c | DAT_00612c20
    MOV EAX,[0x00612c40]                ; 00471491 | DAT_00612c40
    MOV EAX,[0x00612c60]                ; 00471496 | DAT_00612c60
    MOV EAX,[0x00612c80]                ; 0047149b | DAT_00612c80
    MOV EAX,[0x00612ca0]                ; 004714a0 | DAT_00612ca0
    MOV EAX,[0x00612cc0]                ; 004714a5 | DAT_00612cc0
    MOV EAX,[0x00612ce0]                ; 004714aa | DAT_00612ce0
    MOV EAX,[0x00612d00]                ; 004714af | DAT_00612d00
    MOV EAX,[0x00612d20]                ; 004714b4 | DAT_00612d20
    MOV EAX,[0x00612d40]                ; 004714b9 | DAT_00612d40
    MOV EAX,[0x00612d60]                ; 004714be | DAT_00612d60
    MOV EAX,[0x00612d80]                ; 004714c3 | DAT_00612d80
    MOV EAX,[0x00612da0]                ; 004714c8 | DAT_00612da0
    MOV EAX,[0x00612dc0]                ; 004714cd | DAT_00612dc0
    MOV EAX,[0x00612de0]                ; 004714d2 | DAT_00612de0
    MOV EAX,[0x00612e00]                ; 004714d7 | DAT_00612e00
    MOV EAX,[0x00612e20]                ; 004714dc | DAT_00612e20
    MOV EAX,[0x00612e40]                ; 004714e1 | DAT_00612e40
    MOV EAX,[0x00612e60]                ; 004714e6 | DAT_00612e60
    MOV EAX,[0x00612e80]                ; 004714eb | DAT_00612e80
    MOV EAX,[0x00612ea0]                ; 004714f0 | DAT_00612ea0
    MOV EAX,[0x00612ec0]                ; 004714f5 | DAT_00612ec0
    MOV EAX,[0x00612ee0]                ; 004714fa | DAT_00612ee0
    MOV EAX,[0x00612f00]                ; 004714ff | DAT_00612f00
    MOV EAX,[0x00612f20]                ; 00471504 | DAT_00612f20
    MOV EAX,[0x00612f40]                ; 00471509 | DAT_00612f40
    MOV EAX,[0x00612f60]                ; 0047150e | DAT_00612f60
    MOV EAX,[0x00612f80]                ; 00471513 | DAT_00612f80
    MOV EAX,[0x00612fa0]                ; 00471518 | DAT_00612fa0
    MOV EAX,[0x00612fc0]                ; 0047151d | DAT_00612fc0
    MOV EAX,[0x00612fe0]                ; 00471522 | DAT_00612fe0
    MOV EAX,[0x00613000]                ; 00471527 | DAT_00613000
    MOV EAX,[0x00613020]                ; 0047152c | DAT_00613020
    MOV EAX,[0x00613040]                ; 00471531 | DAT_00613040
    MOV EAX,[0x00613060]                ; 00471536 | DAT_00613060
    JMP 0x00471540                      ; 0047153b
        ;   XREF to: 00471540 (UNCONDITIONAL_JUMP)  ; LAB_00471540
    MOVZX EDX,byte ptr [EBX]            ; 00471540
        ;   Label: LAB_00471540
    MOVQ MM0,qword ptr [ESI]            ; 00471543
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 00471546 | DAT_00b6639c
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 0047154e
    MOVZX EAX,byte ptr [EBP]            ; 00471552
    MOVD MM6,dword ptr [EDX*0x4 + 0xb6639c] ; 00471556 | DAT_00b6639c
    MOVQ MM1,MM0                        ; 0047155e
    PUNPCKLBW MM6,MM7                   ; 00471561
    PUNPCKLBW MM0,MM7                   ; 00471564
    SHR EDX,0x1                         ; 00471567
    PSRLQ MM1,0x20                      ; 00471569
    PUNPCKLBW MM2,MM7                   ; 0047156d
    ADD EAX,EDX                         ; 00471570
    PADDW MM6,MM2                       ; 00471572
    PUNPCKLBW MM1,MM7                   ; 00471575
    PMULLW MM0,MM2                      ; 00471578
    PSRLW MM6,0x1                       ; 0047157b
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 0047157f | DAT_00612880
    PMULLW MM1,MM6                      ; 00471587
    MOVQ MM2,MM3                        ; 0047158a
    MOVQ MM4,MM5                        ; 0047158d
    PXOR MM2,qword ptr [0x00613078]     ; 00471590 | DAT_00613078
    PMULHW MM0,MM2                      ; 00471597
    PMULHW MM1,MM2                      ; 0047159a
    PMULHW MM4,MM3                      ; 0047159d
    PADDW MM0,MM4                       ; 004715a0
    PADDW MM1,MM4                       ; 004715a3
    PADDW MM0,qword ptr [0x00611328]    ; 004715a6 | DAT_00611328
    PADDW MM1,qword ptr [0x00611330]    ; 004715ad | DAT_00611330
    PSRLW MM0,0x4                       ; 004715b4
    PSRLW MM1,0x4                       ; 004715b8
    PACKUSWB MM0,MM7                    ; 004715bc
    PACKUSWB MM1,MM7                    ; 004715bf
    MOVQ MM2,MM0                        ; 004715c2
    MOVQ MM3,MM0                        ; 004715c5
    PAND MM0,qword ptr [0x0061c928]     ; 004715c8 | DAT_0061c928
    PAND MM2,qword ptr [0x0061c908]     ; 004715cf | DAT_0061c908
    PAND MM3,qword ptr [0x0061c8e8]     ; 004715d6 | DAT_0061c8e8
    PSRLQ MM0,qword ptr [0x0061c970]    ; 004715dd | DAT_0061c970
    PSRLQ MM2,qword ptr [0x0061c950]    ; 004715e4 | DAT_0061c950
    PSRLQ MM3,qword ptr [0x0061c930]    ; 004715eb | DAT_0061c930
    POR MM0,MM2                         ; 004715f2
    POR MM0,MM3                         ; 004715f5
    MOVQ MM2,MM1                        ; 004715f8
    MOVQ MM3,MM1                        ; 004715fb
    PAND MM1,qword ptr [0x0061c928]     ; 004715fe | DAT_0061c928
    PAND MM2,qword ptr [0x0061c908]     ; 00471605 | DAT_0061c908
    PAND MM3,qword ptr [0x0061c8e8]     ; 0047160c | DAT_0061c8e8
    PSRLQ MM1,qword ptr [0x0061c970]    ; 00471613 | DAT_0061c970
    PSRLQ MM2,qword ptr [0x0061c950]    ; 0047161a | DAT_0061c950
    PSRLQ MM3,qword ptr [0x0061c930]    ; 00471621 | DAT_0061c930
    POR MM1,MM2                         ; 00471628
    POR MM1,MM3                         ; 0047162b
    PSLLQ MM1,0x10                      ; 0047162e
    POR MM0,MM1                         ; 00471632
    ADD ESI,0x8                         ; 00471635
    INC EBX                             ; 00471638
    INC EBP                             ; 00471639
    MOVD dword ptr [EDI],MM0            ; 0047163a
    ADD EDI,0x4                         ; 0047163d
    SUB ECX,0x2                         ; 00471640
    JG 0x00471540                       ; 00471643
        ;   XREF to: 00471540 (CONDITIONAL_JUMP)  ; LAB_00471540
    POP EBP                             ; 00471649
    EMMS                                ; 0047164a
    POP EDI                             ; 0047164c
    POP ESI                             ; 0047164d
    LEAVE                               ; 0047164e
    RET                                 ; 0047164f


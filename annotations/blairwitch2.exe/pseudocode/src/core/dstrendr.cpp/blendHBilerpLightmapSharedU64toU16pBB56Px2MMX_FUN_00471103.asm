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
;   _MMX_INTEGER g_LightmapBlendBias5
;   _MMX_INTEGER g_LightmapBlendBias6
;   ushort[2048] g_LightmapData
;   undefined4 g_LightmapData[16]
;   undefined4 g_LightmapData[32]
;   undefined4 g_LightmapData[48]
;   undefined4 g_LightmapData[64]
;   undefined4 g_LightmapData[80]
;   undefined4 g_LightmapData[96]
;   undefined4 g_LightmapData[112]
;   undefined4 g_LightmapData[128]
;   undefined4 g_LightmapData[144]
;   undefined4 g_LightmapData[160]
;   undefined4 g_LightmapData[176]
;   undefined4 g_LightmapData[192]
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
    MOVD MM5,dword ptr [0x01c38b5c]     ; 0047111b | g_SolidColorMode
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
    MOV EAX,[0x00b6639c]                ; 0047135b | g_LightmapTexturePalette
    MOV EAX,[0x00b663bc]                ; 00471360 | g_LightmapTexturePalette[8]
    MOV EAX,[0x00b663dc]                ; 00471365 | g_LightmapTexturePalette[16]
    MOV EAX,[0x00b663fc]                ; 0047136a | g_LightmapTexturePalette[24]
    MOV EAX,[0x00b6641c]                ; 0047136f | g_LightmapTexturePalette[32]
    MOV EAX,[0x00b6643c]                ; 00471374 | g_LightmapTexturePalette[40]
    MOV EAX,[0x00b6645c]                ; 00471379 | g_LightmapTexturePalette[48]
    MOV EAX,[0x00b6647c]                ; 0047137e | g_LightmapTexturePalette[56]
    MOV EAX,[0x00b6649c]                ; 00471383 | g_LightmapTexturePalette[64]
    MOV EAX,[0x00b664bc]                ; 00471388 | g_LightmapTexturePalette[72]
    MOV EAX,[0x00b664dc]                ; 0047138d | g_LightmapTexturePalette[80]
    MOV EAX,[0x00b664fc]                ; 00471392 | g_LightmapTexturePalette[88]
    MOV EAX,[0x00b6651c]                ; 00471397 | g_LightmapTexturePalette[96]
    MOV EAX,[0x00b6653c]                ; 0047139c | g_LightmapTexturePalette[104]
    MOV EAX,[0x00b6655c]                ; 004713a1 | g_LightmapTexturePalette[112]
    MOV EAX,[0x00b6657c]                ; 004713a6 | g_LightmapTexturePalette[120]
    MOV EAX,[0x00b6659c]                ; 004713ab | g_LightmapTexturePalette[128]
    MOV EAX,[0x00b665bc]                ; 004713b0 | g_LightmapTexturePalette[136]
    MOV EAX,[0x00b665dc]                ; 004713b5 | g_LightmapTexturePalette[144]
    MOV EAX,[0x00b665fc]                ; 004713ba | g_LightmapTexturePalette[152]
    MOV EAX,[0x00b6661c]                ; 004713bf | g_LightmapTexturePalette[160]
    MOV EAX,[0x00b6663c]                ; 004713c4 | g_LightmapTexturePalette[168]
    MOV EAX,[0x00b6665c]                ; 004713c9 | g_LightmapTexturePalette[176]
    MOV EAX,[0x00b6667c]                ; 004713ce | g_LightmapTexturePalette[184]
    MOV EAX,[0x00b6669c]                ; 004713d3 | g_LightmapTexturePalette[192]
    MOV EAX,[0x00b666bc]                ; 004713d8 | g_LightmapTexturePalette[200]
    MOV EAX,[0x00b666dc]                ; 004713dd | g_LightmapTexturePalette[208]
    MOV EAX,[0x00b666fc]                ; 004713e2 | g_LightmapTexturePalette[216]
    MOV EAX,[0x00b6671c]                ; 004713e7 | g_LightmapTexturePalette[224]
    MOV EAX,[0x00b6673c]                ; 004713ec | g_LightmapTexturePalette[232]
    MOV EAX,[0x00b6675c]                ; 004713f1 | g_LightmapTexturePalette[240]
    MOV EAX,[0x00b6677c]                ; 004713f6 | g_LightmapTexturePalette[248]
    MOV EAX,[0x00612880]                ; 004713fb | g_LightmapData
    MOV EAX,[0x006128a0]                ; 00471400 | g_LightmapData[16]
    MOV EAX,[0x006128c0]                ; 00471405 | g_LightmapData[32]
    MOV EAX,[0x006128e0]                ; 0047140a | g_LightmapData[48]
    MOV EAX,[0x00612900]                ; 0047140f | g_LightmapData[64]
    MOV EAX,[0x00612920]                ; 00471414 | g_LightmapData[80]
    MOV EAX,[0x00612940]                ; 00471419 | g_LightmapData[96]
    MOV EAX,[0x00612960]                ; 0047141e | g_LightmapData[112]
    MOV EAX,[0x00612980]                ; 00471423 | g_LightmapData[128]
    MOV EAX,[0x006129a0]                ; 00471428 | g_LightmapData[144]
    MOV EAX,[0x006129c0]                ; 0047142d | g_LightmapData[160]
    MOV EAX,[0x006129e0]                ; 00471432 | g_LightmapData[176]
    MOV EAX,[0x00612a00]                ; 00471437 | g_LightmapData[192]
    MOV EAX,[0x00612a20]                ; 0047143c | g_LightmapData[208]
    MOV EAX,[0x00612a40]                ; 00471441 | g_LightmapData[224]
    MOV EAX,[0x00612a60]                ; 00471446 | g_LightmapData[240]
    MOV EAX,[0x00612a80]                ; 0047144b | g_LightmapData[256]
    MOV EAX,[0x00612aa0]                ; 00471450 | g_LightmapData[272]
    MOV EAX,[0x00612ac0]                ; 00471455 | g_LightmapData[288]
    MOV EAX,[0x00612ae0]                ; 0047145a | g_LightmapData[304]
    MOV EAX,[0x00612b00]                ; 0047145f | g_LightmapData[320]
    MOV EAX,[0x00612b20]                ; 00471464 | g_LightmapData[336]
    MOV EAX,[0x00612b40]                ; 00471469 | g_LightmapData[352]
    MOV EAX,[0x00612b60]                ; 0047146e | g_LightmapData[368]
    MOV EAX,[0x00612b80]                ; 00471473 | g_LightmapData[384]
    MOV EAX,[0x00612ba0]                ; 00471478 | g_LightmapData[400]
    MOV EAX,[0x00612bc0]                ; 0047147d | g_LightmapData[416]
    MOV EAX,[0x00612be0]                ; 00471482 | g_LightmapData[432]
    MOV EAX,[0x00612c00]                ; 00471487 | g_LightmapData[448]
    MOV EAX,[0x00612c20]                ; 0047148c | g_LightmapData[464]
    MOV EAX,[0x00612c40]                ; 00471491 | g_LightmapData[480]
    MOV EAX,[0x00612c60]                ; 00471496 | g_LightmapData[496]
    MOV EAX,[0x00612c80]                ; 0047149b | g_LightmapData[512]
    MOV EAX,[0x00612ca0]                ; 004714a0 | g_LightmapData[528]
    MOV EAX,[0x00612cc0]                ; 004714a5 | g_LightmapData[544]
    MOV EAX,[0x00612ce0]                ; 004714aa | g_LightmapData[560]
    MOV EAX,[0x00612d00]                ; 004714af | g_LightmapData[576]
    MOV EAX,[0x00612d20]                ; 004714b4 | g_LightmapData[592]
    MOV EAX,[0x00612d40]                ; 004714b9 | g_LightmapData[608]
    MOV EAX,[0x00612d60]                ; 004714be | g_LightmapData[624]
    MOV EAX,[0x00612d80]                ; 004714c3 | g_LightmapData[640]
    MOV EAX,[0x00612da0]                ; 004714c8 | g_LightmapData[656]
    MOV EAX,[0x00612dc0]                ; 004714cd | g_LightmapData[672]
    MOV EAX,[0x00612de0]                ; 004714d2 | g_LightmapData[688]
    MOV EAX,[0x00612e00]                ; 004714d7 | g_LightmapData[704]
    MOV EAX,[0x00612e20]                ; 004714dc | g_LightmapData[720]
    MOV EAX,[0x00612e40]                ; 004714e1 | g_LightmapData[736]
    MOV EAX,[0x00612e60]                ; 004714e6 | g_LightmapData[752]
    MOV EAX,[0x00612e80]                ; 004714eb | g_LightmapData[768]
    MOV EAX,[0x00612ea0]                ; 004714f0 | g_LightmapData[784]
    MOV EAX,[0x00612ec0]                ; 004714f5 | g_LightmapData[800]
    MOV EAX,[0x00612ee0]                ; 004714fa | g_LightmapData[816]
    MOV EAX,[0x00612f00]                ; 004714ff | g_LightmapData[832]
    MOV EAX,[0x00612f20]                ; 00471504 | g_LightmapData[848]
    MOV EAX,[0x00612f40]                ; 00471509 | g_LightmapData[864]
    MOV EAX,[0x00612f60]                ; 0047150e | g_LightmapData[880]
    MOV EAX,[0x00612f80]                ; 00471513 | g_LightmapData[896]
    MOV EAX,[0x00612fa0]                ; 00471518 | g_LightmapData[912]
    MOV EAX,[0x00612fc0]                ; 0047151d | g_LightmapData[928]
    MOV EAX,[0x00612fe0]                ; 00471522 | g_LightmapData[944]
    MOV EAX,[0x00613000]                ; 00471527 | g_LightmapData[960]
    MOV EAX,[0x00613020]                ; 0047152c | g_LightmapData[976]
    MOV EAX,[0x00613040]                ; 00471531 | g_LightmapData[992]
    MOV EAX,[0x00613060]                ; 00471536 | g_LightmapData[1008]
    JMP 0x00471540                      ; 0047153b
        ;   XREF to: 00471540 (UNCONDITIONAL_JUMP)  ; LAB_00471540
    MOVZX EDX,byte ptr [EBX]            ; 00471540
        ;   Label: LAB_00471540
    MOVQ MM0,qword ptr [ESI]            ; 00471543
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 00471546 | g_LightmapTexturePalette
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 0047154e
    MOVZX EAX,byte ptr [EBP]            ; 00471552
    MOVD MM6,dword ptr [EDX*0x4 + 0xb6639c] ; 00471556 | g_LightmapTexturePalette
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
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 0047157f | g_LightmapData
    PMULLW MM1,MM6                      ; 00471587
    MOVQ MM2,MM3                        ; 0047158a
    MOVQ MM4,MM5                        ; 0047158d
    PXOR MM2,qword ptr [0x00613078]     ; 00471590 | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 00471597
    PMULHW MM1,MM2                      ; 0047159a
    PMULHW MM4,MM3                      ; 0047159d
    PADDW MM0,MM4                       ; 004715a0
    PADDW MM1,MM4                       ; 004715a3
    PADDW MM0,qword ptr [0x00611328]    ; 004715a6 | g_LightmapBlendBias5
    PADDW MM1,qword ptr [0x00611330]    ; 004715ad | g_LightmapBlendBias6
    PSRLW MM0,0x4                       ; 004715b4
    PSRLW MM1,0x4                       ; 004715b8
    PACKUSWB MM0,MM7                    ; 004715bc
    PACKUSWB MM1,MM7                    ; 004715bf
    MOVQ MM2,MM0                        ; 004715c2
    MOVQ MM3,MM0                        ; 004715c5
    PAND MM0,qword ptr [0x0061c928]     ; 004715c8 | g_BlueMask32
    PAND MM2,qword ptr [0x0061c908]     ; 004715cf | g_GreenMask32
    PAND MM3,qword ptr [0x0061c8e8]     ; 004715d6 | g_RedMask32
    PSRLQ MM0,qword ptr [0x0061c970]    ; 004715dd | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x0061c950]    ; 004715e4 | g_GreenBlueDitherShift
    PSRLQ MM3,qword ptr [0x0061c930]    ; 004715eb | g_TotalDitherShift
    POR MM0,MM2                         ; 004715f2
    POR MM0,MM3                         ; 004715f5
    MOVQ MM2,MM1                        ; 004715f8
    MOVQ MM3,MM1                        ; 004715fb
    PAND MM1,qword ptr [0x0061c928]     ; 004715fe | g_BlueMask32
    PAND MM2,qword ptr [0x0061c908]     ; 00471605 | g_GreenMask32
    PAND MM3,qword ptr [0x0061c8e8]     ; 0047160c | g_RedMask32
    PSRLQ MM1,qword ptr [0x0061c970]    ; 00471613 | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x0061c950]    ; 0047161a | g_GreenBlueDitherShift
    PSRLQ MM3,qword ptr [0x0061c930]    ; 00471621 | g_TotalDitherShift
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


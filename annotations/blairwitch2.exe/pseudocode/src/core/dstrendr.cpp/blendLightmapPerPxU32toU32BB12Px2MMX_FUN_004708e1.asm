; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004708e1(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00442820 at 00442b13
;
; Referenced Globals:
;   undefined8 DAT_00611308
;   undefined8 DAT_00611310
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
;   ... and 85 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004708e1
        ;   Label: core_dstrendr.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004708e1
    MOV EBP,ESP                         ; 004708e2
    PUSH ESI                            ; 004708e4
    PUSH EDI                            ; 004708e5
    PUSH EBP                            ; 004708e6
    MOV ECX,dword ptr [EBP + 0x18]      ; 004708e7
    MOV EDI,dword ptr [EBP + 0x8]       ; 004708ea
    MOV ESI,dword ptr [EBP + 0xc]       ; 004708ed
    MOV EBX,dword ptr [EBP + 0x10]      ; 004708f0
    MOV EBP,dword ptr [EBP + 0x14]      ; 004708f3
    PXOR MM7,MM7                        ; 004708f6
    MOVD MM5,dword ptr [0x01c38b5c]     ; 004708f9 | DAT_01c38b5c
    PUNPCKLBW MM5,MM7                   ; 00470900
    PSLLW MM5,0x6                       ; 00470903
    MOV EAX,dword ptr [EBX]             ; 00470907
    MOV EAX,dword ptr [EBX + 0x20]      ; 00470909
    MOV EAX,dword ptr [EBX + 0x40]      ; 0047090c
    MOV EAX,dword ptr [EBX + 0x60]      ; 0047090f
    MOV EAX,dword ptr [EBX + 0x80]      ; 00470912
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00470918
    MOV EAX,dword ptr [EBX + 0xc0]      ; 0047091e
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00470924
    MOV EAX,dword ptr [EBX + 0x100]     ; 0047092a
    MOV EAX,dword ptr [EBX + 0x120]     ; 00470930
    MOV EDX,dword ptr [EBP]             ; 00470936
    MOV EDX,dword ptr [EBP + 0x20]      ; 00470939
    MOV EDX,dword ptr [EBP + 0x40]      ; 0047093c
    MOV EDX,dword ptr [EBP + 0x60]      ; 0047093f
    MOV EDX,dword ptr [EBP + 0x80]      ; 00470942
    MOV EDX,dword ptr [EBP + 0xa0]      ; 00470948
    MOV EDX,dword ptr [EBP + 0xc0]      ; 0047094e
    MOV EDX,dword ptr [EBP + 0xe0]      ; 00470954
    MOV EDX,dword ptr [EBP + 0x100]     ; 0047095a
    MOV EDX,dword ptr [EBP + 0x120]     ; 00470960
    MOV EAX,dword ptr [ESI]             ; 00470966
    MOV EAX,dword ptr [ESI + 0x20]      ; 00470968
    MOV EAX,dword ptr [ESI + 0x40]      ; 0047096b
    MOV EAX,dword ptr [ESI + 0x60]      ; 0047096e
    MOV EAX,dword ptr [ESI + 0x80]      ; 00470971
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00470977
    MOV EAX,dword ptr [ESI + 0xc0]      ; 0047097d
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00470983
    MOV EAX,dword ptr [ESI + 0x100]     ; 00470989
    MOV EAX,dword ptr [ESI + 0x120]     ; 0047098f
    MOV EAX,dword ptr [ESI + 0x140]     ; 00470995
    MOV EAX,dword ptr [ESI + 0x160]     ; 0047099b
    MOV EAX,dword ptr [ESI + 0x180]     ; 004709a1
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 004709a7
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 004709ad
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 004709b3
    MOV EAX,dword ptr [ESI + 0x200]     ; 004709b9
    MOV EAX,dword ptr [ESI + 0x220]     ; 004709bf
    MOV EAX,dword ptr [ESI + 0x240]     ; 004709c5
    MOV EAX,dword ptr [ESI + 0x260]     ; 004709cb
    MOV EAX,dword ptr [ESI + 0x280]     ; 004709d1
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 004709d7
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 004709dd
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 004709e3
    MOV EAX,dword ptr [ESI + 0x300]     ; 004709e9
    MOV EAX,dword ptr [ESI + 0x320]     ; 004709ef
    MOV EAX,dword ptr [ESI + 0x340]     ; 004709f5
    MOV EAX,dword ptr [ESI + 0x360]     ; 004709fb
    MOV EAX,dword ptr [ESI + 0x380]     ; 00470a01
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00470a07
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00470a0d
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00470a13
    MOV EAX,dword ptr [ESI + 0x400]     ; 00470a19
    MOV EAX,dword ptr [ESI + 0x420]     ; 00470a1f
    MOV EAX,dword ptr [ESI + 0x440]     ; 00470a25
    MOV EAX,dword ptr [ESI + 0x460]     ; 00470a2b
    MOV EAX,dword ptr [ESI + 0x480]     ; 00470a31
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00470a37
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00470a3d
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00470a43
    MOV EAX,dword ptr [ESI + 0x500]     ; 00470a49
    MOV EAX,dword ptr [ESI + 0x520]     ; 00470a4f
    MOV EAX,dword ptr [ESI + 0x540]     ; 00470a55
    MOV EAX,dword ptr [ESI + 0x560]     ; 00470a5b
    MOV EAX,dword ptr [ESI + 0x580]     ; 00470a61
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00470a67
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00470a6d
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00470a73
    MOV EAX,dword ptr [ESI + 0x600]     ; 00470a79
    MOV EAX,dword ptr [ESI + 0x620]     ; 00470a7f
    MOV EAX,dword ptr [ESI + 0x640]     ; 00470a85
    MOV EAX,dword ptr [ESI + 0x660]     ; 00470a8b
    MOV EAX,dword ptr [ESI + 0x680]     ; 00470a91
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00470a97
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00470a9d
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00470aa3
    MOV EAX,dword ptr [ESI + 0x700]     ; 00470aa9
    MOV EAX,dword ptr [ESI + 0x720]     ; 00470aaf
    MOV EAX,dword ptr [ESI + 0x740]     ; 00470ab5
    MOV EAX,dword ptr [ESI + 0x760]     ; 00470abb
    MOV EAX,dword ptr [ESI + 0x780]     ; 00470ac1
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00470ac7
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00470acd
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00470ad3
    MOV EAX,dword ptr [ESI + 0x800]     ; 00470ad9
    MOV EAX,dword ptr [ESI + 0x820]     ; 00470adf
    MOV EAX,dword ptr [ESI + 0x840]     ; 00470ae5
    MOV EAX,dword ptr [ESI + 0x860]     ; 00470aeb
    MOV EAX,dword ptr [ESI + 0x880]     ; 00470af1
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00470af7
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00470afd
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00470b03
    MOV EAX,dword ptr [ESI + 0x900]     ; 00470b09
    MOV EAX,dword ptr [ESI + 0x920]     ; 00470b0f
    MOV EAX,dword ptr [ESI + 0x940]     ; 00470b15
    MOV EAX,dword ptr [ESI + 0x960]     ; 00470b1b
    MOV EAX,dword ptr [ESI + 0x980]     ; 00470b21
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00470b27
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00470b2d
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00470b33
    MOV EAX,[0x00b6639c]                ; 00470b39 | DAT_00b6639c
    MOV EAX,[0x00b663bc]                ; 00470b3e | DAT_00b663bc
    MOV EAX,[0x00b663dc]                ; 00470b43 | DAT_00b663dc
    MOV EAX,[0x00b663fc]                ; 00470b48 | DAT_00b663fc
    MOV EAX,[0x00b6641c]                ; 00470b4d | DAT_00b6641c
    MOV EAX,[0x00b6643c]                ; 00470b52 | DAT_00b6643c
    MOV EAX,[0x00b6645c]                ; 00470b57 | DAT_00b6645c
    MOV EAX,[0x00b6647c]                ; 00470b5c | DAT_00b6647c
    MOV EAX,[0x00b6649c]                ; 00470b61 | DAT_00b6649c
    MOV EAX,[0x00b664bc]                ; 00470b66 | DAT_00b664bc
    MOV EAX,[0x00b664dc]                ; 00470b6b | DAT_00b664dc
    MOV EAX,[0x00b664fc]                ; 00470b70 | DAT_00b664fc
    MOV EAX,[0x00b6651c]                ; 00470b75 | DAT_00b6651c
    MOV EAX,[0x00b6653c]                ; 00470b7a | DAT_00b6653c
    MOV EAX,[0x00b6655c]                ; 00470b7f | DAT_00b6655c
    MOV EAX,[0x00b6657c]                ; 00470b84 | DAT_00b6657c
    MOV EAX,[0x00b6659c]                ; 00470b89 | DAT_00b6659c
    MOV EAX,[0x00b665bc]                ; 00470b8e | DAT_00b665bc
    MOV EAX,[0x00b665dc]                ; 00470b93 | DAT_00b665dc
    MOV EAX,[0x00b665fc]                ; 00470b98 | DAT_00b665fc
    MOV EAX,[0x00b6661c]                ; 00470b9d | DAT_00b6661c
    MOV EAX,[0x00b6663c]                ; 00470ba2 | DAT_00b6663c
    MOV EAX,[0x00b6665c]                ; 00470ba7 | DAT_00b6665c
    MOV EAX,[0x00b6667c]                ; 00470bac | DAT_00b6667c
    MOV EAX,[0x00b6669c]                ; 00470bb1 | DAT_00b6669c
    MOV EAX,[0x00b666bc]                ; 00470bb6 | DAT_00b666bc
    MOV EAX,[0x00b666dc]                ; 00470bbb | DAT_00b666dc
    MOV EAX,[0x00b666fc]                ; 00470bc0 | DAT_00b666fc
    MOV EAX,[0x00b6671c]                ; 00470bc5 | DAT_00b6671c
    MOV EAX,[0x00b6673c]                ; 00470bca | DAT_00b6673c
    MOV EAX,[0x00b6675c]                ; 00470bcf | DAT_00b6675c
    MOV EAX,[0x00b6677c]                ; 00470bd4 | DAT_00b6677c
    MOV EAX,[0x00612880]                ; 00470bd9 | DAT_00612880
    MOV EAX,[0x006128a0]                ; 00470bde | DAT_006128a0
    MOV EAX,[0x006128c0]                ; 00470be3 | DAT_006128c0
    MOV EAX,[0x006128e0]                ; 00470be8 | DAT_006128e0
    MOV EAX,[0x00612900]                ; 00470bed | DAT_00612900
    MOV EAX,[0x00612920]                ; 00470bf2 | DAT_00612920
    MOV EAX,[0x00612940]                ; 00470bf7 | DAT_00612940
    MOV EAX,[0x00612960]                ; 00470bfc | DAT_00612960
    MOV EAX,[0x00612980]                ; 00470c01 | DAT_00612980
    MOV EAX,[0x006129a0]                ; 00470c06 | DAT_006129a0
    MOV EAX,[0x006129c0]                ; 00470c0b | DAT_006129c0
    MOV EAX,[0x006129e0]                ; 00470c10 | DAT_006129e0
    MOV EAX,[0x00612a00]                ; 00470c15 | DAT_00612a00
    MOV EAX,[0x00612a20]                ; 00470c1a | DAT_00612a20
    MOV EAX,[0x00612a40]                ; 00470c1f | DAT_00612a40
    MOV EAX,[0x00612a60]                ; 00470c24 | DAT_00612a60
    MOV EAX,[0x00612a80]                ; 00470c29 | DAT_00612a80
    MOV EAX,[0x00612aa0]                ; 00470c2e | DAT_00612aa0
    MOV EAX,[0x00612ac0]                ; 00470c33 | DAT_00612ac0
    MOV EAX,[0x00612ae0]                ; 00470c38 | DAT_00612ae0
    MOV EAX,[0x00612b00]                ; 00470c3d | DAT_00612b00
    MOV EAX,[0x00612b20]                ; 00470c42 | DAT_00612b20
    MOV EAX,[0x00612b40]                ; 00470c47 | DAT_00612b40
    MOV EAX,[0x00612b60]                ; 00470c4c | DAT_00612b60
    MOV EAX,[0x00612b80]                ; 00470c51 | DAT_00612b80
    MOV EAX,[0x00612ba0]                ; 00470c56 | DAT_00612ba0
    MOV EAX,[0x00612bc0]                ; 00470c5b | DAT_00612bc0
    MOV EAX,[0x00612be0]                ; 00470c60 | DAT_00612be0
    MOV EAX,[0x00612c00]                ; 00470c65 | DAT_00612c00
    MOV EAX,[0x00612c20]                ; 00470c6a | DAT_00612c20
    MOV EAX,[0x00612c40]                ; 00470c6f | DAT_00612c40
    MOV EAX,[0x00612c60]                ; 00470c74 | DAT_00612c60
    MOV EAX,[0x00612c80]                ; 00470c79 | DAT_00612c80
    MOV EAX,[0x00612ca0]                ; 00470c7e | DAT_00612ca0
    MOV EAX,[0x00612cc0]                ; 00470c83 | DAT_00612cc0
    MOV EAX,[0x00612ce0]                ; 00470c88 | DAT_00612ce0
    MOV EAX,[0x00612d00]                ; 00470c8d | DAT_00612d00
    MOV EAX,[0x00612d20]                ; 00470c92 | DAT_00612d20
    MOV EAX,[0x00612d40]                ; 00470c97 | DAT_00612d40
    MOV EAX,[0x00612d60]                ; 00470c9c | DAT_00612d60
    MOV EAX,[0x00612d80]                ; 00470ca1 | DAT_00612d80
    MOV EAX,[0x00612da0]                ; 00470ca6 | DAT_00612da0
    MOV EAX,[0x00612dc0]                ; 00470cab | DAT_00612dc0
    MOV EAX,[0x00612de0]                ; 00470cb0 | DAT_00612de0
    MOV EAX,[0x00612e00]                ; 00470cb5 | DAT_00612e00
    MOV EAX,[0x00612e20]                ; 00470cba | DAT_00612e20
    MOV EAX,[0x00612e40]                ; 00470cbf | DAT_00612e40
    MOV EAX,[0x00612e60]                ; 00470cc4 | DAT_00612e60
    MOV EAX,[0x00612e80]                ; 00470cc9 | DAT_00612e80
    MOV EAX,[0x00612ea0]                ; 00470cce | DAT_00612ea0
    MOV EAX,[0x00612ec0]                ; 00470cd3 | DAT_00612ec0
    MOV EAX,[0x00612ee0]                ; 00470cd8 | DAT_00612ee0
    MOV EAX,[0x00612f00]                ; 00470cdd | DAT_00612f00
    MOV EAX,[0x00612f20]                ; 00470ce2 | DAT_00612f20
    MOV EAX,[0x00612f40]                ; 00470ce7 | DAT_00612f40
    MOV EAX,[0x00612f60]                ; 00470cec | DAT_00612f60
    MOV EAX,[0x00612f80]                ; 00470cf1 | DAT_00612f80
    MOV EAX,[0x00612fa0]                ; 00470cf6 | DAT_00612fa0
    MOV EAX,[0x00612fc0]                ; 00470cfb | DAT_00612fc0
    MOV EAX,[0x00612fe0]                ; 00470d00 | DAT_00612fe0
    MOV EAX,[0x00613000]                ; 00470d05 | DAT_00613000
    MOV EAX,[0x00613020]                ; 00470d0a | DAT_00613020
    MOV EAX,[0x00613040]                ; 00470d0f | DAT_00613040
    MOV EAX,[0x00613060]                ; 00470d14 | DAT_00613060
    MOVZX EDX,byte ptr [EBX]            ; 00470d19
        ;   Label: LAB_00470d19
    MOVD MM0,dword ptr [ESI]            ; 00470d1c
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 00470d1f | DAT_00b6639c
    MOVZX EAX,byte ptr [EBP]            ; 00470d27
    PUNPCKLBW MM0,MM7                   ; 00470d2b
    SHR EDX,0x1                         ; 00470d2e
    PUNPCKLBW MM2,MM7                   ; 00470d30
    ADD EAX,EDX                         ; 00470d33
    PMULLW MM0,MM2                      ; 00470d35
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 00470d38 | DAT_00612880
    MOVQ MM2,MM3                        ; 00470d40
    MOVQ MM4,MM5                        ; 00470d43
    PXOR MM2,qword ptr [0x00613078]     ; 00470d46 | DAT_00613078
    PMULHW MM0,MM2                      ; 00470d4d
    PMULHW MM4,MM3                      ; 00470d50
    PADDW MM0,MM4                       ; 00470d53
    PADDW MM0,qword ptr [0x00611308]    ; 00470d56 | DAT_00611308
    PSRLW MM0,0x4                       ; 00470d5d
    PACKUSWB MM0,MM7                    ; 00470d61
    MOVD dword ptr [EDI],MM0            ; 00470d64
    ADD ESI,0x4                         ; 00470d67
    INC EBX                             ; 00470d6a
    INC EBP                             ; 00470d6b
    ADD EDI,0x4                         ; 00470d6c
    MOVZX EDX,byte ptr [EBX]            ; 00470d6f
    MOVD MM0,dword ptr [ESI]            ; 00470d72
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 00470d75 | DAT_00b6639c
    MOVZX EAX,byte ptr [EBP]            ; 00470d7d
    PUNPCKLBW MM0,MM7                   ; 00470d81
    SHR EDX,0x1                         ; 00470d84
    PUNPCKLBW MM2,MM7                   ; 00470d86
    ADD EAX,EDX                         ; 00470d89
    PMULLW MM0,MM2                      ; 00470d8b
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 00470d8e | DAT_00612880
    MOVQ MM2,MM3                        ; 00470d96
    MOVQ MM4,MM5                        ; 00470d99
    PXOR MM2,qword ptr [0x00613078]     ; 00470d9c | DAT_00613078
    PMULHW MM0,MM2                      ; 00470da3
    PMULHW MM4,MM3                      ; 00470da6
    PADDW MM0,MM4                       ; 00470da9
    PADDW MM0,qword ptr [0x00611310]    ; 00470dac | DAT_00611310
    PSRLW MM0,0x4                       ; 00470db3
    PACKUSWB MM0,MM7                    ; 00470db7
    MOVD dword ptr [EDI],MM0            ; 00470dba
    ADD ESI,0x4                         ; 00470dbd
    INC EBX                             ; 00470dc0
    INC EBP                             ; 00470dc1
    ADD EDI,0x4                         ; 00470dc2
    SUB ECX,0x2                         ; 00470dc5
    JG 0x00470d19                       ; 00470dc8
        ;   XREF to: 00470d19 (CONDITIONAL_JUMP)  ; LAB_00470d19
    POP EBP                             ; 00470dce
    EMMS                                ; 00470dcf
    POP EDI                             ; 00470dd1
    POP ESI                             ; 00470dd2
    LEAVE                               ; 00470dd3
    RET                                 ; 00470dd4


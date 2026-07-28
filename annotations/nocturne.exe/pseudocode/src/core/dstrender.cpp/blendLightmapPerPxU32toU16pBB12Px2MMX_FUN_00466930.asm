; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00466930(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0 at 0044727d
;
; Referenced Globals:
;   undefined8 DAT_005b4788
;   undefined8 DAT_005b4790
;   undefined4 DAT_005b5d00
;   undefined4 DAT_005b5d20
;   undefined4 DAT_005b5d40
;   undefined4 DAT_005b5d60
;   undefined4 DAT_005b5d80
;   undefined4 DAT_005b5da0
;   undefined4 DAT_005b5dc0
;   undefined4 DAT_005b5de0
;   undefined4 DAT_005b5e00
;   undefined4 DAT_005b5e20
;   undefined4 DAT_005b5e40
;   undefined4 DAT_005b5e60
;   undefined4 DAT_005b5e80
;   ... and 91 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00466930
        ;   Label: core_dstrender.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00466930
    MOV EBP,ESP                         ; 00466931
    PUSH ESI                            ; 00466933
    PUSH EDI                            ; 00466934
    PUSH EBP                            ; 00466935
    MOV ECX,dword ptr [EBP + 0x18]      ; 00466936
    MOV EDI,dword ptr [EBP + 0x8]       ; 00466939
    MOV ESI,dword ptr [EBP + 0xc]       ; 0046693c
    MOV EBX,dword ptr [EBP + 0x10]      ; 0046693f
    MOV EBP,dword ptr [EBP + 0x14]      ; 00466942
    PXOR MM7,MM7                        ; 00466945
    MOVD MM5,dword ptr [0x01c039a8]     ; 00466948 | DAT_01c039a8
    PUNPCKLBW MM5,MM7                   ; 0046694f
    PSLLW MM5,0x6                       ; 00466952
    MOV EAX,dword ptr [EBX]             ; 00466956
    MOV EAX,dword ptr [EBX + 0x20]      ; 00466958
    MOV EAX,dword ptr [EBX + 0x40]      ; 0046695b
    MOV EAX,dword ptr [EBX + 0x60]      ; 0046695e
    MOV EAX,dword ptr [EBX + 0x80]      ; 00466961
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00466967
    MOV EAX,dword ptr [EBX + 0xc0]      ; 0046696d
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00466973
    MOV EAX,dword ptr [EBX + 0x100]     ; 00466979
    MOV EAX,dword ptr [EBX + 0x120]     ; 0046697f
    MOV EDX,dword ptr [EBP]             ; 00466985
    MOV EDX,dword ptr [EBP + 0x20]      ; 00466988
    MOV EDX,dword ptr [EBP + 0x40]      ; 0046698b
    MOV EDX,dword ptr [EBP + 0x60]      ; 0046698e
    MOV EDX,dword ptr [EBP + 0x80]      ; 00466991
    MOV EDX,dword ptr [EBP + 0xa0]      ; 00466997
    MOV EDX,dword ptr [EBP + 0xc0]      ; 0046699d
    MOV EDX,dword ptr [EBP + 0xe0]      ; 004669a3
    MOV EDX,dword ptr [EBP + 0x100]     ; 004669a9
    MOV EDX,dword ptr [EBP + 0x120]     ; 004669af
    MOV EAX,dword ptr [ESI]             ; 004669b5
    MOV EAX,dword ptr [ESI + 0x20]      ; 004669b7
    MOV EAX,dword ptr [ESI + 0x40]      ; 004669ba
    MOV EAX,dword ptr [ESI + 0x60]      ; 004669bd
    MOV EAX,dword ptr [ESI + 0x80]      ; 004669c0
    MOV EAX,dword ptr [ESI + 0xa0]      ; 004669c6
    MOV EAX,dword ptr [ESI + 0xc0]      ; 004669cc
    MOV EAX,dword ptr [ESI + 0xe0]      ; 004669d2
    MOV EAX,dword ptr [ESI + 0x100]     ; 004669d8
    MOV EAX,dword ptr [ESI + 0x120]     ; 004669de
    MOV EAX,dword ptr [ESI + 0x140]     ; 004669e4
    MOV EAX,dword ptr [ESI + 0x160]     ; 004669ea
    MOV EAX,dword ptr [ESI + 0x180]     ; 004669f0
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 004669f6
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 004669fc
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00466a02
    MOV EAX,dword ptr [ESI + 0x200]     ; 00466a08
    MOV EAX,dword ptr [ESI + 0x220]     ; 00466a0e
    MOV EAX,dword ptr [ESI + 0x240]     ; 00466a14
    MOV EAX,dword ptr [ESI + 0x260]     ; 00466a1a
    MOV EAX,dword ptr [ESI + 0x280]     ; 00466a20
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00466a26
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00466a2c
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00466a32
    MOV EAX,dword ptr [ESI + 0x300]     ; 00466a38
    MOV EAX,dword ptr [ESI + 0x320]     ; 00466a3e
    MOV EAX,dword ptr [ESI + 0x340]     ; 00466a44
    MOV EAX,dword ptr [ESI + 0x360]     ; 00466a4a
    MOV EAX,dword ptr [ESI + 0x380]     ; 00466a50
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00466a56
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00466a5c
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00466a62
    MOV EAX,dword ptr [ESI + 0x400]     ; 00466a68
    MOV EAX,dword ptr [ESI + 0x420]     ; 00466a6e
    MOV EAX,dword ptr [ESI + 0x440]     ; 00466a74
    MOV EAX,dword ptr [ESI + 0x460]     ; 00466a7a
    MOV EAX,dword ptr [ESI + 0x480]     ; 00466a80
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00466a86
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00466a8c
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00466a92
    MOV EAX,dword ptr [ESI + 0x500]     ; 00466a98
    MOV EAX,dword ptr [ESI + 0x520]     ; 00466a9e
    MOV EAX,dword ptr [ESI + 0x540]     ; 00466aa4
    MOV EAX,dword ptr [ESI + 0x560]     ; 00466aaa
    MOV EAX,dword ptr [ESI + 0x580]     ; 00466ab0
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00466ab6
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00466abc
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00466ac2
    MOV EAX,dword ptr [ESI + 0x600]     ; 00466ac8
    MOV EAX,dword ptr [ESI + 0x620]     ; 00466ace
    MOV EAX,dword ptr [ESI + 0x640]     ; 00466ad4
    MOV EAX,dword ptr [ESI + 0x660]     ; 00466ada
    MOV EAX,dword ptr [ESI + 0x680]     ; 00466ae0
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00466ae6
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00466aec
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00466af2
    MOV EAX,dword ptr [ESI + 0x700]     ; 00466af8
    MOV EAX,dword ptr [ESI + 0x720]     ; 00466afe
    MOV EAX,dword ptr [ESI + 0x740]     ; 00466b04
    MOV EAX,dword ptr [ESI + 0x760]     ; 00466b0a
    MOV EAX,dword ptr [ESI + 0x780]     ; 00466b10
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00466b16
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00466b1c
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00466b22
    MOV EAX,dword ptr [ESI + 0x800]     ; 00466b28
    MOV EAX,dword ptr [ESI + 0x820]     ; 00466b2e
    MOV EAX,dword ptr [ESI + 0x840]     ; 00466b34
    MOV EAX,dword ptr [ESI + 0x860]     ; 00466b3a
    MOV EAX,dword ptr [ESI + 0x880]     ; 00466b40
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00466b46
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00466b4c
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00466b52
    MOV EAX,dword ptr [ESI + 0x900]     ; 00466b58
    MOV EAX,dword ptr [ESI + 0x920]     ; 00466b5e
    MOV EAX,dword ptr [ESI + 0x940]     ; 00466b64
    MOV EAX,dword ptr [ESI + 0x960]     ; 00466b6a
    MOV EAX,dword ptr [ESI + 0x980]     ; 00466b70
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00466b76
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00466b7c
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00466b82
    MOV EAX,[0x00b0e1fc]                ; 00466b88 | DAT_00b0e1fc
    MOV EAX,[0x00b0e21c]                ; 00466b8d | DAT_00b0e21c
    MOV EAX,[0x00b0e23c]                ; 00466b92 | DAT_00b0e23c
    MOV EAX,[0x00b0e25c]                ; 00466b97 | DAT_00b0e25c
    MOV EAX,[0x00b0e27c]                ; 00466b9c | DAT_00b0e27c
    MOV EAX,[0x00b0e29c]                ; 00466ba1 | DAT_00b0e29c
    MOV EAX,[0x00b0e2bc]                ; 00466ba6 | DAT_00b0e2bc
    MOV EAX,[0x00b0e2dc]                ; 00466bab | DAT_00b0e2dc
    MOV EAX,[0x00b0e2fc]                ; 00466bb0 | DAT_00b0e2fc
    MOV EAX,[0x00b0e31c]                ; 00466bb5 | DAT_00b0e31c
    MOV EAX,[0x00b0e33c]                ; 00466bba | DAT_00b0e33c
    MOV EAX,[0x00b0e35c]                ; 00466bbf | DAT_00b0e35c
    MOV EAX,[0x00b0e37c]                ; 00466bc4 | DAT_00b0e37c
    MOV EAX,[0x00b0e39c]                ; 00466bc9 | DAT_00b0e39c
    MOV EAX,[0x00b0e3bc]                ; 00466bce | DAT_00b0e3bc
    MOV EAX,[0x00b0e3dc]                ; 00466bd3 | DAT_00b0e3dc
    MOV EAX,[0x00b0e3fc]                ; 00466bd8 | DAT_00b0e3fc
    MOV EAX,[0x00b0e41c]                ; 00466bdd | DAT_00b0e41c
    MOV EAX,[0x00b0e43c]                ; 00466be2 | DAT_00b0e43c
    MOV EAX,[0x00b0e45c]                ; 00466be7 | DAT_00b0e45c
    MOV EAX,[0x00b0e47c]                ; 00466bec | DAT_00b0e47c
    MOV EAX,[0x00b0e49c]                ; 00466bf1 | DAT_00b0e49c
    MOV EAX,[0x00b0e4bc]                ; 00466bf6 | DAT_00b0e4bc
    MOV EAX,[0x00b0e4dc]                ; 00466bfb | DAT_00b0e4dc
    MOV EAX,[0x00b0e4fc]                ; 00466c00 | DAT_00b0e4fc
    MOV EAX,[0x00b0e51c]                ; 00466c05 | DAT_00b0e51c
    MOV EAX,[0x00b0e53c]                ; 00466c0a | DAT_00b0e53c
    MOV EAX,[0x00b0e55c]                ; 00466c0f | DAT_00b0e55c
    MOV EAX,[0x00b0e57c]                ; 00466c14 | DAT_00b0e57c
    MOV EAX,[0x00b0e59c]                ; 00466c19 | DAT_00b0e59c
    MOV EAX,[0x00b0e5bc]                ; 00466c1e | DAT_00b0e5bc
    MOV EAX,[0x00b0e5dc]                ; 00466c23 | DAT_00b0e5dc
    MOV EAX,[0x005b5d00]                ; 00466c28 | DAT_005b5d00
    MOV EAX,[0x005b5d20]                ; 00466c2d | DAT_005b5d20
    MOV EAX,[0x005b5d40]                ; 00466c32 | DAT_005b5d40
    MOV EAX,[0x005b5d60]                ; 00466c37 | DAT_005b5d60
    MOV EAX,[0x005b5d80]                ; 00466c3c | DAT_005b5d80
    MOV EAX,[0x005b5da0]                ; 00466c41 | DAT_005b5da0
    MOV EAX,[0x005b5dc0]                ; 00466c46 | DAT_005b5dc0
    MOV EAX,[0x005b5de0]                ; 00466c4b | DAT_005b5de0
    MOV EAX,[0x005b5e00]                ; 00466c50 | DAT_005b5e00
    MOV EAX,[0x005b5e20]                ; 00466c55 | DAT_005b5e20
    MOV EAX,[0x005b5e40]                ; 00466c5a | DAT_005b5e40
    MOV EAX,[0x005b5e60]                ; 00466c5f | DAT_005b5e60
    MOV EAX,[0x005b5e80]                ; 00466c64 | DAT_005b5e80
    MOV EAX,[0x005b5ea0]                ; 00466c69 | DAT_005b5ea0
    MOV EAX,[0x005b5ec0]                ; 00466c6e | DAT_005b5ec0
    MOV EAX,[0x005b5ee0]                ; 00466c73 | DAT_005b5ee0
    MOV EAX,[0x005b5f00]                ; 00466c78 | DAT_005b5f00
    MOV EAX,[0x005b5f20]                ; 00466c7d | DAT_005b5f20
    MOV EAX,[0x005b5f40]                ; 00466c82 | DAT_005b5f40
    MOV EAX,[0x005b5f60]                ; 00466c87 | DAT_005b5f60
    MOV EAX,[0x005b5f80]                ; 00466c8c | DAT_005b5f80
    MOV EAX,[0x005b5fa0]                ; 00466c91 | DAT_005b5fa0
    MOV EAX,[0x005b5fc0]                ; 00466c96 | DAT_005b5fc0
    MOV EAX,[0x005b5fe0]                ; 00466c9b | DAT_005b5fe0
    MOV EAX,[0x005b6000]                ; 00466ca0 | DAT_005b6000
    MOV EAX,[0x005b6020]                ; 00466ca5 | DAT_005b6020
    MOV EAX,[0x005b6040]                ; 00466caa | DAT_005b6040
    MOV EAX,[0x005b6060]                ; 00466caf | DAT_005b6060
    MOV EAX,[0x005b6080]                ; 00466cb4 | DAT_005b6080
    MOV EAX,[0x005b60a0]                ; 00466cb9 | DAT_005b60a0
    MOV EAX,[0x005b60c0]                ; 00466cbe | DAT_005b60c0
    MOV EAX,[0x005b60e0]                ; 00466cc3 | DAT_005b60e0
    MOV EAX,[0x005b6100]                ; 00466cc8 | DAT_005b6100
    MOV EAX,[0x005b6120]                ; 00466ccd | DAT_005b6120
    MOV EAX,[0x005b6140]                ; 00466cd2 | DAT_005b6140
    MOV EAX,[0x005b6160]                ; 00466cd7 | DAT_005b6160
    MOV EAX,[0x005b6180]                ; 00466cdc | DAT_005b6180
    MOV EAX,[0x005b61a0]                ; 00466ce1 | DAT_005b61a0
    MOV EAX,[0x005b61c0]                ; 00466ce6 | DAT_005b61c0
    MOV EAX,[0x005b61e0]                ; 00466ceb | DAT_005b61e0
    MOV EAX,[0x005b6200]                ; 00466cf0 | DAT_005b6200
    MOV EAX,[0x005b6220]                ; 00466cf5 | DAT_005b6220
    MOV EAX,[0x005b6240]                ; 00466cfa | DAT_005b6240
    MOV EAX,[0x005b6260]                ; 00466cff | DAT_005b6260
    MOV EAX,[0x005b6280]                ; 00466d04 | DAT_005b6280
    MOV EAX,[0x005b62a0]                ; 00466d09 | DAT_005b62a0
    MOV EAX,[0x005b62c0]                ; 00466d0e | DAT_005b62c0
    MOV EAX,[0x005b62e0]                ; 00466d13 | DAT_005b62e0
    MOV EAX,[0x005b6300]                ; 00466d18 | DAT_005b6300
    MOV EAX,[0x005b6320]                ; 00466d1d | DAT_005b6320
    MOV EAX,[0x005b6340]                ; 00466d22 | DAT_005b6340
    MOV EAX,[0x005b6360]                ; 00466d27 | DAT_005b6360
    MOV EAX,[0x005b6380]                ; 00466d2c | DAT_005b6380
    MOV EAX,[0x005b63a0]                ; 00466d31 | DAT_005b63a0
    MOV EAX,[0x005b63c0]                ; 00466d36 | DAT_005b63c0
    MOV EAX,[0x005b63e0]                ; 00466d3b | DAT_005b63e0
    MOV EAX,[0x005b6400]                ; 00466d40 | DAT_005b6400
    MOV EAX,[0x005b6420]                ; 00466d45 | DAT_005b6420
    MOV EAX,[0x005b6440]                ; 00466d4a | DAT_005b6440
    MOV EAX,[0x005b6460]                ; 00466d4f | DAT_005b6460
    MOV EAX,[0x005b6480]                ; 00466d54 | DAT_005b6480
    MOV EAX,[0x005b64a0]                ; 00466d59 | DAT_005b64a0
    MOV EAX,[0x005b64c0]                ; 00466d5e | DAT_005b64c0
    MOV EAX,[0x005b64e0]                ; 00466d63 | DAT_005b64e0
    MOVZX EDX,byte ptr [EBX]            ; 00466d68
        ;   Label: LAB_00466d68
    MOVD MM0,dword ptr [ESI]            ; 00466d6b
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00466d6e | DAT_00b0e1fc
    MOVZX EAX,byte ptr [EBP]            ; 00466d76
    PUNPCKLBW MM0,MM7                   ; 00466d7a
    SHR EDX,0x1                         ; 00466d7d
    PUNPCKLBW MM2,MM7                   ; 00466d7f
    ADD EAX,EDX                         ; 00466d82
    PMULLW MM0,MM2                      ; 00466d84
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 00466d87 | DAT_005b5d00
    MOVQ MM2,MM3                        ; 00466d8f
    MOVQ MM4,MM5                        ; 00466d92
    PXOR MM2,qword ptr [0x005b64f8]     ; 00466d95 | DAT_005b64f8
    PMULHW MM0,MM2                      ; 00466d9c
    PMULHW MM4,MM3                      ; 00466d9f
    PADDW MM0,MM4                       ; 00466da2
    PADDW MM0,qword ptr [0x005b4788]    ; 00466da5 | DAT_005b4788
    PSRLW MM0,0x4                       ; 00466dac
    PACKUSWB MM0,MM7                    ; 00466db0
    MOVQ MM2,MM0                        ; 00466db3
    MOVQ MM3,MM0                        ; 00466db6
    PAND MM0,qword ptr [0x005bf610]     ; 00466db9 | DAT_005bf610
    PAND MM2,qword ptr [0x005bf5f0]     ; 00466dc0 | DAT_005bf5f0
    PAND MM3,qword ptr [0x005bf5d0]     ; 00466dc7 | DAT_005bf5d0
    PSRLQ MM0,qword ptr [0x005bf658]    ; 00466dce | DAT_005bf658
    PSRLQ MM2,qword ptr [0x005bf638]    ; 00466dd5 | DAT_005bf638
    PSRLQ MM3,qword ptr [0x005bf618]    ; 00466ddc | DAT_005bf618
    POR MM0,MM2                         ; 00466de3
    POR MM0,MM3                         ; 00466de6
    MOVQ MM6,MM0                        ; 00466de9
    ADD ESI,0x4                         ; 00466dec
    INC EBX                             ; 00466def
    INC EBP                             ; 00466df0
    MOVZX EDX,byte ptr [EBX]            ; 00466df1
    MOVD MM0,dword ptr [ESI]            ; 00466df4
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00466df7 | DAT_00b0e1fc
    MOVZX EAX,byte ptr [EBP]            ; 00466dff
    PUNPCKLBW MM0,MM7                   ; 00466e03
    SHR EDX,0x1                         ; 00466e06
    PUNPCKLBW MM2,MM7                   ; 00466e08
    ADD EAX,EDX                         ; 00466e0b
    PMULLW MM0,MM2                      ; 00466e0d
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 00466e10 | DAT_005b5d00
    MOVQ MM2,MM3                        ; 00466e18
    MOVQ MM4,MM5                        ; 00466e1b
    PXOR MM2,qword ptr [0x005b64f8]     ; 00466e1e | DAT_005b64f8
    PMULHW MM0,MM2                      ; 00466e25
    PMULHW MM4,MM3                      ; 00466e28
    PADDW MM0,MM4                       ; 00466e2b
    PADDW MM0,qword ptr [0x005b4790]    ; 00466e2e | DAT_005b4790
    PSRLW MM0,0x4                       ; 00466e35
    PACKUSWB MM0,MM7                    ; 00466e39
    MOVQ MM2,MM0                        ; 00466e3c
    MOVQ MM3,MM0                        ; 00466e3f
    PAND MM0,qword ptr [0x005bf610]     ; 00466e42 | DAT_005bf610
    PAND MM2,qword ptr [0x005bf5f0]     ; 00466e49 | DAT_005bf5f0
    PAND MM3,qword ptr [0x005bf5d0]     ; 00466e50 | DAT_005bf5d0
    PSRLQ MM0,qword ptr [0x005bf658]    ; 00466e57 | DAT_005bf658
    PSRLQ MM2,qword ptr [0x005bf638]    ; 00466e5e | DAT_005bf638
    PSRLQ MM3,qword ptr [0x005bf618]    ; 00466e65 | DAT_005bf618
    POR MM0,MM2                         ; 00466e6c
    POR MM0,MM3                         ; 00466e6f
    PSLLQ MM0,0x10                      ; 00466e72
    POR MM0,MM6                         ; 00466e76
    MOVD dword ptr [EDI],MM0            ; 00466e79
    ADD ESI,0x4                         ; 00466e7c
    INC EBX                             ; 00466e7f
    INC EBP                             ; 00466e80
    ADD EDI,0x4                         ; 00466e81
    SUB ECX,0x2                         ; 00466e84
    JG 0x00466d68                       ; 00466e87
        ;   XREF to: 00466d68 (CONDITIONAL_JUMP)  ; LAB_00466d68
    POP EBP                             ; 00466e8d
    EMMS                                ; 00466e8e
    POP EDI                             ; 00466e90
    POP ESI                             ; 00466e91
    LEAVE                               ; 00466e92
    RET                                 ; 00466e93


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00464afc(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_004470f0 at 0044743f
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
;   ... and 85 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00464afc
        ;   Label: core_dstrender.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00464afc
    MOV EBP,ESP                         ; 00464afd
    PUSH ESI                            ; 00464aff
    PUSH EDI                            ; 00464b00
    PUSH EBP                            ; 00464b01
    MOV ECX,dword ptr [EBP + 0x18]      ; 00464b02
    MOV EDI,dword ptr [EBP + 0x8]       ; 00464b05
    MOV ESI,dword ptr [EBP + 0xc]       ; 00464b08
    MOV EBX,dword ptr [EBP + 0x10]      ; 00464b0b
    MOV EBP,dword ptr [EBP + 0x14]      ; 00464b0e
    PXOR MM7,MM7                        ; 00464b11
    MOVD MM5,dword ptr [0x01c039a8]     ; 00464b14 | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 00464b1b
    PSLLW MM5,0x6                       ; 00464b1e
    MOV EAX,dword ptr [EBX]             ; 00464b22
    MOV EAX,dword ptr [EBX + 0x20]      ; 00464b24
    MOV EAX,dword ptr [EBX + 0x40]      ; 00464b27
    MOV EAX,dword ptr [EBX + 0x60]      ; 00464b2a
    MOV EAX,dword ptr [EBX + 0x80]      ; 00464b2d
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00464b33
    MOV EAX,dword ptr [EBX + 0xc0]      ; 00464b39
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00464b3f
    MOV EAX,dword ptr [EBX + 0x100]     ; 00464b45
    MOV EAX,dword ptr [EBX + 0x120]     ; 00464b4b
    MOV EDX,dword ptr [EBP]             ; 00464b51
    MOV EDX,dword ptr [EBP + 0x20]      ; 00464b54
    MOV EDX,dword ptr [EBP + 0x40]      ; 00464b57
    MOV EDX,dword ptr [EBP + 0x60]      ; 00464b5a
    MOV EDX,dword ptr [EBP + 0x80]      ; 00464b5d
    MOV EDX,dword ptr [EBP + 0xa0]      ; 00464b63
    MOV EDX,dword ptr [EBP + 0xc0]      ; 00464b69
    MOV EDX,dword ptr [EBP + 0xe0]      ; 00464b6f
    MOV EDX,dword ptr [EBP + 0x100]     ; 00464b75
    MOV EDX,dword ptr [EBP + 0x120]     ; 00464b7b
    MOV EAX,dword ptr [ESI]             ; 00464b81
    MOV EAX,dword ptr [ESI + 0x20]      ; 00464b83
    MOV EAX,dword ptr [ESI + 0x40]      ; 00464b86
    MOV EAX,dword ptr [ESI + 0x60]      ; 00464b89
    MOV EAX,dword ptr [ESI + 0x80]      ; 00464b8c
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00464b92
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00464b98
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00464b9e
    MOV EAX,dword ptr [ESI + 0x100]     ; 00464ba4
    MOV EAX,dword ptr [ESI + 0x120]     ; 00464baa
    MOV EAX,dword ptr [ESI + 0x140]     ; 00464bb0
    MOV EAX,dword ptr [ESI + 0x160]     ; 00464bb6
    MOV EAX,dword ptr [ESI + 0x180]     ; 00464bbc
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00464bc2
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00464bc8
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00464bce
    MOV EAX,dword ptr [ESI + 0x200]     ; 00464bd4
    MOV EAX,dword ptr [ESI + 0x220]     ; 00464bda
    MOV EAX,dword ptr [ESI + 0x240]     ; 00464be0
    MOV EAX,dword ptr [ESI + 0x260]     ; 00464be6
    MOV EAX,dword ptr [ESI + 0x280]     ; 00464bec
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00464bf2
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00464bf8
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00464bfe
    MOV EAX,dword ptr [ESI + 0x300]     ; 00464c04
    MOV EAX,dword ptr [ESI + 0x320]     ; 00464c0a
    MOV EAX,dword ptr [ESI + 0x340]     ; 00464c10
    MOV EAX,dword ptr [ESI + 0x360]     ; 00464c16
    MOV EAX,dword ptr [ESI + 0x380]     ; 00464c1c
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00464c22
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00464c28
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00464c2e
    MOV EAX,dword ptr [ESI + 0x400]     ; 00464c34
    MOV EAX,dword ptr [ESI + 0x420]     ; 00464c3a
    MOV EAX,dword ptr [ESI + 0x440]     ; 00464c40
    MOV EAX,dword ptr [ESI + 0x460]     ; 00464c46
    MOV EAX,dword ptr [ESI + 0x480]     ; 00464c4c
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00464c52
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00464c58
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 00464c5e
    MOV EAX,dword ptr [ESI + 0x500]     ; 00464c64
    MOV EAX,dword ptr [ESI + 0x520]     ; 00464c6a
    MOV EAX,dword ptr [ESI + 0x540]     ; 00464c70
    MOV EAX,dword ptr [ESI + 0x560]     ; 00464c76
    MOV EAX,dword ptr [ESI + 0x580]     ; 00464c7c
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00464c82
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00464c88
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 00464c8e
    MOV EAX,dword ptr [ESI + 0x600]     ; 00464c94
    MOV EAX,dword ptr [ESI + 0x620]     ; 00464c9a
    MOV EAX,dword ptr [ESI + 0x640]     ; 00464ca0
    MOV EAX,dword ptr [ESI + 0x660]     ; 00464ca6
    MOV EAX,dword ptr [ESI + 0x680]     ; 00464cac
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00464cb2
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00464cb8
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 00464cbe
    MOV EAX,dword ptr [ESI + 0x700]     ; 00464cc4
    MOV EAX,dword ptr [ESI + 0x720]     ; 00464cca
    MOV EAX,dword ptr [ESI + 0x740]     ; 00464cd0
    MOV EAX,dword ptr [ESI + 0x760]     ; 00464cd6
    MOV EAX,dword ptr [ESI + 0x780]     ; 00464cdc
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00464ce2
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00464ce8
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 00464cee
    MOV EAX,dword ptr [ESI + 0x800]     ; 00464cf4
    MOV EAX,dword ptr [ESI + 0x820]     ; 00464cfa
    MOV EAX,dword ptr [ESI + 0x840]     ; 00464d00
    MOV EAX,dword ptr [ESI + 0x860]     ; 00464d06
    MOV EAX,dword ptr [ESI + 0x880]     ; 00464d0c
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 00464d12
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 00464d18
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 00464d1e
    MOV EAX,dword ptr [ESI + 0x900]     ; 00464d24
    MOV EAX,dword ptr [ESI + 0x920]     ; 00464d2a
    MOV EAX,dword ptr [ESI + 0x940]     ; 00464d30
    MOV EAX,dword ptr [ESI + 0x960]     ; 00464d36
    MOV EAX,dword ptr [ESI + 0x980]     ; 00464d3c
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 00464d42
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 00464d48
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 00464d4e
    MOV EAX,[0x00b0e1fc]                ; 00464d54 | DAT_00b0e1fc
    MOV EAX,[0x00b0e21c]                ; 00464d59 | DAT_00b0e21c
    MOV EAX,[0x00b0e23c]                ; 00464d5e | DAT_00b0e23c
    MOV EAX,[0x00b0e25c]                ; 00464d63 | DAT_00b0e25c
    MOV EAX,[0x00b0e27c]                ; 00464d68 | DAT_00b0e27c
    MOV EAX,[0x00b0e29c]                ; 00464d6d | DAT_00b0e29c
    MOV EAX,[0x00b0e2bc]                ; 00464d72 | DAT_00b0e2bc
    MOV EAX,[0x00b0e2dc]                ; 00464d77 | DAT_00b0e2dc
    MOV EAX,[0x00b0e2fc]                ; 00464d7c | DAT_00b0e2fc
    MOV EAX,[0x00b0e31c]                ; 00464d81 | DAT_00b0e31c
    MOV EAX,[0x00b0e33c]                ; 00464d86 | DAT_00b0e33c
    MOV EAX,[0x00b0e35c]                ; 00464d8b | DAT_00b0e35c
    MOV EAX,[0x00b0e37c]                ; 00464d90 | DAT_00b0e37c
    MOV EAX,[0x00b0e39c]                ; 00464d95 | DAT_00b0e39c
    MOV EAX,[0x00b0e3bc]                ; 00464d9a | DAT_00b0e3bc
    MOV EAX,[0x00b0e3dc]                ; 00464d9f | DAT_00b0e3dc
    MOV EAX,[0x00b0e3fc]                ; 00464da4 | DAT_00b0e3fc
    MOV EAX,[0x00b0e41c]                ; 00464da9 | DAT_00b0e41c
    MOV EAX,[0x00b0e43c]                ; 00464dae | DAT_00b0e43c
    MOV EAX,[0x00b0e45c]                ; 00464db3 | DAT_00b0e45c
    MOV EAX,[0x00b0e47c]                ; 00464db8 | DAT_00b0e47c
    MOV EAX,[0x00b0e49c]                ; 00464dbd | DAT_00b0e49c
    MOV EAX,[0x00b0e4bc]                ; 00464dc2 | DAT_00b0e4bc
    MOV EAX,[0x00b0e4dc]                ; 00464dc7 | DAT_00b0e4dc
    MOV EAX,[0x00b0e4fc]                ; 00464dcc | DAT_00b0e4fc
    MOV EAX,[0x00b0e51c]                ; 00464dd1 | DAT_00b0e51c
    MOV EAX,[0x00b0e53c]                ; 00464dd6 | DAT_00b0e53c
    MOV EAX,[0x00b0e55c]                ; 00464ddb | DAT_00b0e55c
    MOV EAX,[0x00b0e57c]                ; 00464de0 | DAT_00b0e57c
    MOV EAX,[0x00b0e59c]                ; 00464de5 | DAT_00b0e59c
    MOV EAX,[0x00b0e5bc]                ; 00464dea | DAT_00b0e5bc
    MOV EAX,[0x00b0e5dc]                ; 00464def | DAT_00b0e5dc
    MOV EAX,[0x005b5d00]                ; 00464df4 | DAT_005b5d00
    MOV EAX,[0x005b5d20]                ; 00464df9 | DAT_005b5d20
    MOV EAX,[0x005b5d40]                ; 00464dfe | DAT_005b5d40
    MOV EAX,[0x005b5d60]                ; 00464e03 | DAT_005b5d60
    MOV EAX,[0x005b5d80]                ; 00464e08 | DAT_005b5d80
    MOV EAX,[0x005b5da0]                ; 00464e0d | DAT_005b5da0
    MOV EAX,[0x005b5dc0]                ; 00464e12 | DAT_005b5dc0
    MOV EAX,[0x005b5de0]                ; 00464e17 | DAT_005b5de0
    MOV EAX,[0x005b5e00]                ; 00464e1c | DAT_005b5e00
    MOV EAX,[0x005b5e20]                ; 00464e21 | DAT_005b5e20
    MOV EAX,[0x005b5e40]                ; 00464e26 | DAT_005b5e40
    MOV EAX,[0x005b5e60]                ; 00464e2b | DAT_005b5e60
    MOV EAX,[0x005b5e80]                ; 00464e30 | DAT_005b5e80
    MOV EAX,[0x005b5ea0]                ; 00464e35 | DAT_005b5ea0
    MOV EAX,[0x005b5ec0]                ; 00464e3a | DAT_005b5ec0
    MOV EAX,[0x005b5ee0]                ; 00464e3f | DAT_005b5ee0
    MOV EAX,[0x005b5f00]                ; 00464e44 | DAT_005b5f00
    MOV EAX,[0x005b5f20]                ; 00464e49 | DAT_005b5f20
    MOV EAX,[0x005b5f40]                ; 00464e4e | DAT_005b5f40
    MOV EAX,[0x005b5f60]                ; 00464e53 | DAT_005b5f60
    MOV EAX,[0x005b5f80]                ; 00464e58 | DAT_005b5f80
    MOV EAX,[0x005b5fa0]                ; 00464e5d | DAT_005b5fa0
    MOV EAX,[0x005b5fc0]                ; 00464e62 | DAT_005b5fc0
    MOV EAX,[0x005b5fe0]                ; 00464e67 | DAT_005b5fe0
    MOV EAX,[0x005b6000]                ; 00464e6c | DAT_005b6000
    MOV EAX,[0x005b6020]                ; 00464e71 | DAT_005b6020
    MOV EAX,[0x005b6040]                ; 00464e76 | DAT_005b6040
    MOV EAX,[0x005b6060]                ; 00464e7b | DAT_005b6060
    MOV EAX,[0x005b6080]                ; 00464e80 | DAT_005b6080
    MOV EAX,[0x005b60a0]                ; 00464e85 | DAT_005b60a0
    MOV EAX,[0x005b60c0]                ; 00464e8a | DAT_005b60c0
    MOV EAX,[0x005b60e0]                ; 00464e8f | DAT_005b60e0
    MOV EAX,[0x005b6100]                ; 00464e94 | DAT_005b6100
    MOV EAX,[0x005b6120]                ; 00464e99 | DAT_005b6120
    MOV EAX,[0x005b6140]                ; 00464e9e | DAT_005b6140
    MOV EAX,[0x005b6160]                ; 00464ea3 | DAT_005b6160
    MOV EAX,[0x005b6180]                ; 00464ea8 | DAT_005b6180
    MOV EAX,[0x005b61a0]                ; 00464ead | DAT_005b61a0
    MOV EAX,[0x005b61c0]                ; 00464eb2 | DAT_005b61c0
    MOV EAX,[0x005b61e0]                ; 00464eb7 | DAT_005b61e0
    MOV EAX,[0x005b6200]                ; 00464ebc | DAT_005b6200
    MOV EAX,[0x005b6220]                ; 00464ec1 | DAT_005b6220
    MOV EAX,[0x005b6240]                ; 00464ec6 | DAT_005b6240
    MOV EAX,[0x005b6260]                ; 00464ecb | DAT_005b6260
    MOV EAX,[0x005b6280]                ; 00464ed0 | DAT_005b6280
    MOV EAX,[0x005b62a0]                ; 00464ed5 | DAT_005b62a0
    MOV EAX,[0x005b62c0]                ; 00464eda | DAT_005b62c0
    MOV EAX,[0x005b62e0]                ; 00464edf | DAT_005b62e0
    MOV EAX,[0x005b6300]                ; 00464ee4 | DAT_005b6300
    MOV EAX,[0x005b6320]                ; 00464ee9 | DAT_005b6320
    MOV EAX,[0x005b6340]                ; 00464eee | DAT_005b6340
    MOV EAX,[0x005b6360]                ; 00464ef3 | DAT_005b6360
    MOV EAX,[0x005b6380]                ; 00464ef8 | DAT_005b6380
    MOV EAX,[0x005b63a0]                ; 00464efd | DAT_005b63a0
    MOV EAX,[0x005b63c0]                ; 00464f02 | DAT_005b63c0
    MOV EAX,[0x005b63e0]                ; 00464f07 | DAT_005b63e0
    MOV EAX,[0x005b6400]                ; 00464f0c | DAT_005b6400
    MOV EAX,[0x005b6420]                ; 00464f11 | DAT_005b6420
    MOV EAX,[0x005b6440]                ; 00464f16 | DAT_005b6440
    MOV EAX,[0x005b6460]                ; 00464f1b | DAT_005b6460
    MOV EAX,[0x005b6480]                ; 00464f20 | DAT_005b6480
    MOV EAX,[0x005b64a0]                ; 00464f25 | DAT_005b64a0
    MOV EAX,[0x005b64c0]                ; 00464f2a | DAT_005b64c0
    MOV EAX,[0x005b64e0]                ; 00464f2f | DAT_005b64e0
    JMP 0x00464f40                      ; 00464f34
        ;   XREF to: 00464f40 (UNCONDITIONAL_JUMP)  ; LAB_00464f40
    MOVZX EDX,byte ptr [EBX]            ; 00464f40
        ;   Label: LAB_00464f40
    MOVQ MM0,qword ptr [ESI]            ; 00464f43
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00464f46 | DAT_00b0e1fc
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 00464f4e
    MOVZX EAX,byte ptr [EBP]            ; 00464f52
    MOVD MM6,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00464f56 | DAT_00b0e1fc
    MOVQ MM1,MM0                        ; 00464f5e
    PUNPCKLBW MM6,MM7                   ; 00464f61
    PUNPCKLBW MM0,MM7                   ; 00464f64
    SHR EDX,0x1                         ; 00464f67
    PSRLQ MM1,0x20                      ; 00464f69
    PUNPCKLBW MM2,MM7                   ; 00464f6d
    ADD EAX,EDX                         ; 00464f70
    PADDW MM6,MM2                       ; 00464f72
    PUNPCKLBW MM1,MM7                   ; 00464f75
    PMULLW MM0,MM2                      ; 00464f78
    PSRLW MM6,0x1                       ; 00464f7b
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 00464f7f | DAT_005b5d00
    PMULLW MM1,MM6                      ; 00464f87
    MOVQ MM2,MM3                        ; 00464f8a
    MOVQ MM4,MM5                        ; 00464f8d
    PXOR MM2,qword ptr [0x005b64f8]     ; 00464f90 | DAT_005b64f8
    PMULHW MM0,MM2                      ; 00464f97
    PMULHW MM1,MM2                      ; 00464f9a
    PMULHW MM4,MM3                      ; 00464f9d
    PADDW MM0,MM4                       ; 00464fa0
    PADDW MM1,MM4                       ; 00464fa3
    PADDW MM0,qword ptr [0x005b4788]    ; 00464fa6 | DAT_005b4788
    PADDW MM1,qword ptr [0x005b4790]    ; 00464fad | DAT_005b4790
    PSRLW MM0,0x4                       ; 00464fb4
    PSRLW MM1,0x4                       ; 00464fb8
    PACKUSWB MM0,MM1                    ; 00464fbc
    ADD ESI,0x8                         ; 00464fbf
    INC EBX                             ; 00464fc2
    INC EBP                             ; 00464fc3
    MOVQ qword ptr [EDI],MM0            ; 00464fc4
    ADD EDI,0x8                         ; 00464fc7
    SUB ECX,0x2                         ; 00464fca
    JG 0x00464f40                       ; 00464fcd
        ;   XREF to: 00464f40 (CONDITIONAL_JUMP)  ; LAB_00464f40
    POP EBP                             ; 00464fd3
    EMMS                                ; 00464fd4
    POP EDI                             ; 00464fd6
    POP ESI                             ; 00464fd7
    LEAVE                               ; 00464fd8
    RET                                 ; 00464fd9


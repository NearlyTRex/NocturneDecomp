; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00487eac(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
;
; Parameters:
; ulonglong *      Stack[0x4]:4   output_buffer
; ulonglong *      Stack[0x8]:4   texture_buffer
; byte *           Stack[0xc]:4   texture_indices
; byte *           Stack[0x10]:4   lightmap_indices
; int              Stack[0x14]:4   pixel_count
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453ed0 at 00454200
;
; Referenced Globals:
;   qword g_LightmapBlendBias1 = 0x0
;   qword g_LightmapBlendBias2 = 0x8000800080008
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
;   ... and 85 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00487eac
        ;   Label: core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00487eac
    MOV EBP,ESP                         ; 00487ead
    PUSH ESI                            ; 00487eaf
    PUSH EDI                            ; 00487eb0
    PUSH EBP                            ; 00487eb1
    MOV ECX,dword ptr [EBP + 0x18]      ; 00487eb2
    MOV EDI,dword ptr [EBP + 0x8]       ; 00487eb5
    MOV ESI,dword ptr [EBP + 0xc]       ; 00487eb8
    MOV EBX,dword ptr [EBP + 0x10]      ; 00487ebb
    MOV EBP,dword ptr [EBP + 0x14]      ; 00487ebe
    PXOR MM7,MM7                        ; 00487ec1
    MOVD MM5,dword ptr [0x01c51d1c]     ; 00487ec4 | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 00487ecb
    PSLLW MM5,0x6                       ; 00487ece
    MOV EAX,dword ptr [EBX]             ; 00487ed2
    MOV EAX,dword ptr [EBX + 0x20]      ; 00487ed4
    MOV EAX,dword ptr [EBX + 0x40]      ; 00487ed7
    MOV EAX,dword ptr [EBX + 0x60]      ; 00487eda
    MOV EAX,dword ptr [EBX + 0x80]      ; 00487edd
    MOV EAX,dword ptr [EBX + 0xa0]      ; 00487ee3
    MOV EAX,dword ptr [EBX + 0xc0]      ; 00487ee9
    MOV EAX,dword ptr [EBX + 0xe0]      ; 00487eef
    MOV EAX,dword ptr [EBX + 0x100]     ; 00487ef5
    MOV EAX,dword ptr [EBX + 0x120]     ; 00487efb
    MOV EDX,dword ptr [EBP]             ; 00487f01
    MOV EDX,dword ptr [EBP + 0x20]      ; 00487f04
    MOV EDX,dword ptr [EBP + 0x40]      ; 00487f07
    MOV EDX,dword ptr [EBP + 0x60]      ; 00487f0a
    MOV EDX,dword ptr [EBP + 0x80]      ; 00487f0d
    MOV EDX,dword ptr [EBP + 0xa0]      ; 00487f13
    MOV EDX,dword ptr [EBP + 0xc0]      ; 00487f19
    MOV EDX,dword ptr [EBP + 0xe0]      ; 00487f1f
    MOV EDX,dword ptr [EBP + 0x100]     ; 00487f25
    MOV EDX,dword ptr [EBP + 0x120]     ; 00487f2b
    MOV EAX,dword ptr [ESI]             ; 00487f31
    MOV EAX,dword ptr [ESI + 0x20]      ; 00487f33
    MOV EAX,dword ptr [ESI + 0x40]      ; 00487f36
    MOV EAX,dword ptr [ESI + 0x60]      ; 00487f39
    MOV EAX,dword ptr [ESI + 0x80]      ; 00487f3c
    MOV EAX,dword ptr [ESI + 0xa0]      ; 00487f42
    MOV EAX,dword ptr [ESI + 0xc0]      ; 00487f48
    MOV EAX,dword ptr [ESI + 0xe0]      ; 00487f4e
    MOV EAX,dword ptr [ESI + 0x100]     ; 00487f54
    MOV EAX,dword ptr [ESI + 0x120]     ; 00487f5a
    MOV EAX,dword ptr [ESI + 0x140]     ; 00487f60
    MOV EAX,dword ptr [ESI + 0x160]     ; 00487f66
    MOV EAX,dword ptr [ESI + 0x180]     ; 00487f6c
    MOV EAX,dword ptr [ESI + 0x1a0]     ; 00487f72
    MOV EAX,dword ptr [ESI + 0x1c0]     ; 00487f78
    MOV EAX,dword ptr [ESI + 0x1e0]     ; 00487f7e
    MOV EAX,dword ptr [ESI + 0x200]     ; 00487f84
    MOV EAX,dword ptr [ESI + 0x220]     ; 00487f8a
    MOV EAX,dword ptr [ESI + 0x240]     ; 00487f90
    MOV EAX,dword ptr [ESI + 0x260]     ; 00487f96
    MOV EAX,dword ptr [ESI + 0x280]     ; 00487f9c
    MOV EAX,dword ptr [ESI + 0x2a0]     ; 00487fa2
    MOV EAX,dword ptr [ESI + 0x2c0]     ; 00487fa8
    MOV EAX,dword ptr [ESI + 0x2e0]     ; 00487fae
    MOV EAX,dword ptr [ESI + 0x300]     ; 00487fb4
    MOV EAX,dword ptr [ESI + 0x320]     ; 00487fba
    MOV EAX,dword ptr [ESI + 0x340]     ; 00487fc0
    MOV EAX,dword ptr [ESI + 0x360]     ; 00487fc6
    MOV EAX,dword ptr [ESI + 0x380]     ; 00487fcc
    MOV EAX,dword ptr [ESI + 0x3a0]     ; 00487fd2
    MOV EAX,dword ptr [ESI + 0x3c0]     ; 00487fd8
    MOV EAX,dword ptr [ESI + 0x3e0]     ; 00487fde
    MOV EAX,dword ptr [ESI + 0x400]     ; 00487fe4
    MOV EAX,dword ptr [ESI + 0x420]     ; 00487fea
    MOV EAX,dword ptr [ESI + 0x440]     ; 00487ff0
    MOV EAX,dword ptr [ESI + 0x460]     ; 00487ff6
    MOV EAX,dword ptr [ESI + 0x480]     ; 00487ffc
    MOV EAX,dword ptr [ESI + 0x4a0]     ; 00488002
    MOV EAX,dword ptr [ESI + 0x4c0]     ; 00488008
    MOV EAX,dword ptr [ESI + 0x4e0]     ; 0048800e
    MOV EAX,dword ptr [ESI + 0x500]     ; 00488014
    MOV EAX,dword ptr [ESI + 0x520]     ; 0048801a
    MOV EAX,dword ptr [ESI + 0x540]     ; 00488020
    MOV EAX,dword ptr [ESI + 0x560]     ; 00488026
    MOV EAX,dword ptr [ESI + 0x580]     ; 0048802c
    MOV EAX,dword ptr [ESI + 0x5a0]     ; 00488032
    MOV EAX,dword ptr [ESI + 0x5c0]     ; 00488038
    MOV EAX,dword ptr [ESI + 0x5e0]     ; 0048803e
    MOV EAX,dword ptr [ESI + 0x600]     ; 00488044
    MOV EAX,dword ptr [ESI + 0x620]     ; 0048804a
    MOV EAX,dword ptr [ESI + 0x640]     ; 00488050
    MOV EAX,dword ptr [ESI + 0x660]     ; 00488056
    MOV EAX,dword ptr [ESI + 0x680]     ; 0048805c
    MOV EAX,dword ptr [ESI + 0x6a0]     ; 00488062
    MOV EAX,dword ptr [ESI + 0x6c0]     ; 00488068
    MOV EAX,dword ptr [ESI + 0x6e0]     ; 0048806e
    MOV EAX,dword ptr [ESI + 0x700]     ; 00488074
    MOV EAX,dword ptr [ESI + 0x720]     ; 0048807a
    MOV EAX,dword ptr [ESI + 0x740]     ; 00488080
    MOV EAX,dword ptr [ESI + 0x760]     ; 00488086
    MOV EAX,dword ptr [ESI + 0x780]     ; 0048808c
    MOV EAX,dword ptr [ESI + 0x7a0]     ; 00488092
    MOV EAX,dword ptr [ESI + 0x7c0]     ; 00488098
    MOV EAX,dword ptr [ESI + 0x7e0]     ; 0048809e
    MOV EAX,dword ptr [ESI + 0x800]     ; 004880a4
    MOV EAX,dword ptr [ESI + 0x820]     ; 004880aa
    MOV EAX,dword ptr [ESI + 0x840]     ; 004880b0
    MOV EAX,dword ptr [ESI + 0x860]     ; 004880b6
    MOV EAX,dword ptr [ESI + 0x880]     ; 004880bc
    MOV EAX,dword ptr [ESI + 0x8a0]     ; 004880c2
    MOV EAX,dword ptr [ESI + 0x8c0]     ; 004880c8
    MOV EAX,dword ptr [ESI + 0x8e0]     ; 004880ce
    MOV EAX,dword ptr [ESI + 0x900]     ; 004880d4
    MOV EAX,dword ptr [ESI + 0x920]     ; 004880da
    MOV EAX,dword ptr [ESI + 0x940]     ; 004880e0
    MOV EAX,dword ptr [ESI + 0x960]     ; 004880e6
    MOV EAX,dword ptr [ESI + 0x980]     ; 004880ec
    MOV EAX,dword ptr [ESI + 0x9a0]     ; 004880f2
    MOV EAX,dword ptr [ESI + 0x9c0]     ; 004880f8
    MOV EAX,dword ptr [ESI + 0x9e0]     ; 004880fe
    MOV EAX,[0x00b8189c]                ; 00488104 | g_LightmapTexturePalette
    MOV EAX,[0x00b818bc]                ; 00488109 | g_LightmapTexturePalette[8]
    MOV EAX,[0x00b818dc]                ; 0048810e | g_LightmapTexturePalette[16]
    MOV EAX,[0x00b818fc]                ; 00488113 | g_LightmapTexturePalette[24]
    MOV EAX,[0x00b8191c]                ; 00488118 | g_LightmapTexturePalette[32]
    MOV EAX,[0x00b8193c]                ; 0048811d | g_LightmapTexturePalette[40]
    MOV EAX,[0x00b8195c]                ; 00488122 | g_LightmapTexturePalette[48]
    MOV EAX,[0x00b8197c]                ; 00488127 | g_LightmapTexturePalette[56]
    MOV EAX,[0x00b8199c]                ; 0048812c | g_LightmapTexturePalette[64]
    MOV EAX,[0x00b819bc]                ; 00488131 | g_LightmapTexturePalette[72]
    MOV EAX,[0x00b819dc]                ; 00488136 | g_LightmapTexturePalette[80]
    MOV EAX,[0x00b819fc]                ; 0048813b | g_LightmapTexturePalette[88]
    MOV EAX,[0x00b81a1c]                ; 00488140 | g_LightmapTexturePalette[96]
    MOV EAX,[0x00b81a3c]                ; 00488145 | g_LightmapTexturePalette[104]
    MOV EAX,[0x00b81a5c]                ; 0048814a | g_LightmapTexturePalette[112]
    MOV EAX,[0x00b81a7c]                ; 0048814f | g_LightmapTexturePalette[120]
    MOV EAX,[0x00b81a9c]                ; 00488154 | g_LightmapTexturePalette[128]
    MOV EAX,[0x00b81abc]                ; 00488159 | g_LightmapTexturePalette[136]
    MOV EAX,[0x00b81adc]                ; 0048815e | g_LightmapTexturePalette[144]
    MOV EAX,[0x00b81afc]                ; 00488163 | g_LightmapTexturePalette[152]
    MOV EAX,[0x00b81b1c]                ; 00488168 | g_LightmapTexturePalette[160]
    MOV EAX,[0x00b81b3c]                ; 0048816d | g_LightmapTexturePalette[168]
    MOV EAX,[0x00b81b5c]                ; 00488172 | g_LightmapTexturePalette[176]
    MOV EAX,[0x00b81b7c]                ; 00488177 | g_LightmapTexturePalette[184]
    MOV EAX,[0x00b81b9c]                ; 0048817c | g_LightmapTexturePalette[192]
    MOV EAX,[0x00b81bbc]                ; 00488181 | g_LightmapTexturePalette[200]
    MOV EAX,[0x00b81bdc]                ; 00488186 | g_LightmapTexturePalette[208]
    MOV EAX,[0x00b81bfc]                ; 0048818b | g_LightmapTexturePalette[216]
    MOV EAX,[0x00b81c1c]                ; 00488190 | g_LightmapTexturePalette[224]
    MOV EAX,[0x00b81c3c]                ; 00488195 | g_LightmapTexturePalette[232]
    MOV EAX,[0x00b81c5c]                ; 0048819a | g_LightmapTexturePalette[240]
    MOV EAX,[0x00b81c7c]                ; 0048819f | g_LightmapTexturePalette[248]
    MOV EAX,[0x00619b60]                ; 004881a4 | g_LightmapData
    MOV EAX,[0x00619b80]                ; 004881a9 | g_LightmapData[16]
    MOV EAX,[0x00619ba0]                ; 004881ae | g_LightmapData[32]
    MOV EAX,[0x00619bc0]                ; 004881b3 | g_LightmapData[48]
    MOV EAX,[0x00619be0]                ; 004881b8 | g_LightmapData[64]
    MOV EAX,[0x00619c00]                ; 004881bd | g_LightmapData[80]
    MOV EAX,[0x00619c20]                ; 004881c2 | g_LightmapData[96]
    MOV EAX,[0x00619c40]                ; 004881c7 | g_LightmapData[112]
    MOV EAX,[0x00619c60]                ; 004881cc | g_LightmapData[128]
    MOV EAX,[0x00619c80]                ; 004881d1 | g_LightmapData[144]
    MOV EAX,[0x00619ca0]                ; 004881d6 | g_LightmapData[160]
    MOV EAX,[0x00619cc0]                ; 004881db | g_LightmapData[176]
    MOV EAX,[0x00619ce0]                ; 004881e0 | g_LightmapData[192]
    MOV EAX,[0x00619d00]                ; 004881e5 | g_LightmapData[208]
    MOV EAX,[0x00619d20]                ; 004881ea | g_LightmapData[224]
    MOV EAX,[0x00619d40]                ; 004881ef | g_LightmapData[240]
    MOV EAX,[0x00619d60]                ; 004881f4 | g_LightmapData[256]
    MOV EAX,[0x00619d80]                ; 004881f9 | g_LightmapData[272]
    MOV EAX,[0x00619da0]                ; 004881fe | g_LightmapData[288]
    MOV EAX,[0x00619dc0]                ; 00488203 | g_LightmapData[304]
    MOV EAX,[0x00619de0]                ; 00488208 | g_LightmapData[320]
    MOV EAX,[0x00619e00]                ; 0048820d | g_LightmapData[336]
    MOV EAX,[0x00619e20]                ; 00488212 | g_LightmapData[352]
    MOV EAX,[0x00619e40]                ; 00488217 | g_LightmapData[368]
    MOV EAX,[0x00619e60]                ; 0048821c | g_LightmapData[384]
    MOV EAX,[0x00619e80]                ; 00488221 | g_LightmapData[400]
    MOV EAX,[0x00619ea0]                ; 00488226 | g_LightmapData[416]
    MOV EAX,[0x00619ec0]                ; 0048822b | g_LightmapData[432]
    MOV EAX,[0x00619ee0]                ; 00488230 | g_LightmapData[448]
    MOV EAX,[0x00619f00]                ; 00488235 | g_LightmapData[464]
    MOV EAX,[0x00619f20]                ; 0048823a | g_LightmapData[480]
    MOV EAX,[0x00619f40]                ; 0048823f | g_LightmapData[496]
    MOV EAX,[0x00619f60]                ; 00488244 | g_LightmapData[512]
    MOV EAX,[0x00619f80]                ; 00488249 | g_LightmapData[528]
    MOV EAX,[0x00619fa0]                ; 0048824e | g_LightmapData[544]
    MOV EAX,[0x00619fc0]                ; 00488253 | g_LightmapData[560]
    MOV EAX,[0x00619fe0]                ; 00488258 | g_LightmapData[576]
    MOV EAX,[0x0061a000]                ; 0048825d | g_LightmapData[592]
    MOV EAX,[0x0061a020]                ; 00488262 | g_LightmapData[608]
    MOV EAX,[0x0061a040]                ; 00488267 | g_LightmapData[624]
    MOV EAX,[0x0061a060]                ; 0048826c | g_LightmapData[640]
    MOV EAX,[0x0061a080]                ; 00488271 | g_LightmapData[656]
    MOV EAX,[0x0061a0a0]                ; 00488276 | g_LightmapData[672]
    MOV EAX,[0x0061a0c0]                ; 0048827b | g_LightmapData[688]
    MOV EAX,[0x0061a0e0]                ; 00488280 | g_LightmapData[704]
    MOV EAX,[0x0061a100]                ; 00488285 | g_LightmapData[720]
    MOV EAX,[0x0061a120]                ; 0048828a | g_LightmapData[736]
    MOV EAX,[0x0061a140]                ; 0048828f | g_LightmapData[752]
    MOV EAX,[0x0061a160]                ; 00488294 | g_LightmapData[768]
    MOV EAX,[0x0061a180]                ; 00488299 | g_LightmapData[784]
    MOV EAX,[0x0061a1a0]                ; 0048829e | g_LightmapData[800]
    MOV EAX,[0x0061a1c0]                ; 004882a3 | g_LightmapData[816]
    MOV EAX,[0x0061a1e0]                ; 004882a8 | g_LightmapData[832]
    MOV EAX,[0x0061a200]                ; 004882ad | g_LightmapData[848]
    MOV EAX,[0x0061a220]                ; 004882b2 | g_LightmapData[864]
    MOV EAX,[0x0061a240]                ; 004882b7 | g_LightmapData[880]
    MOV EAX,[0x0061a260]                ; 004882bc | g_LightmapData[896]
    MOV EAX,[0x0061a280]                ; 004882c1 | g_LightmapData[912]
    MOV EAX,[0x0061a2a0]                ; 004882c6 | g_LightmapData[928]
    MOV EAX,[0x0061a2c0]                ; 004882cb | g_LightmapData[944]
    MOV EAX,[0x0061a2e0]                ; 004882d0 | g_LightmapData[960]
    MOV EAX,[0x0061a300]                ; 004882d5 | g_LightmapData[976]
    MOV EAX,[0x0061a320]                ; 004882da | g_LightmapData[992]
    MOV EAX,[0x0061a340]                ; 004882df | g_LightmapData[1008]
    JMP 0x004882f0                      ; 004882e4
        ;   XREF to: 004882f0 (UNCONDITIONAL_JUMP)  ; LAB_004882f0
    MOVZX EDX,byte ptr [EBX]            ; 004882f0
        ;   Label: LAB_004882f0
    MOVQ MM0,qword ptr [ESI]            ; 004882f3
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 004882f6 | g_LightmapTexturePalette
    MOVZX EDX,byte ptr [EBX + 0x1]      ; 004882fe
    MOVZX EAX,byte ptr [EBP]            ; 00488302
    MOVD MM6,dword ptr [EDX*0x4 + 0xb8189c] ; 00488306 | g_LightmapTexturePalette
    MOVQ MM1,MM0                        ; 0048830e
    PUNPCKLBW MM6,MM7                   ; 00488311
    PUNPCKLBW MM0,MM7                   ; 00488314
    SHR EDX,0x1                         ; 00488317
    PSRLQ MM1,0x20                      ; 00488319
    PUNPCKLBW MM2,MM7                   ; 0048831d
    ADD EAX,EDX                         ; 00488320
    PADDW MM6,MM2                       ; 00488322
    PUNPCKLBW MM1,MM7                   ; 00488325
    PMULLW MM0,MM2                      ; 00488328
    PSRLW MM6,0x1                       ; 0048832b
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 0048832f | g_LightmapData
    PMULLW MM1,MM6                      ; 00488337
    MOVQ MM2,MM3                        ; 0048833a
    MOVQ MM4,MM5                        ; 0048833d
    PXOR MM2,qword ptr [0x0061a358]     ; 00488340 | g_LightmapData[1020]
    PMULHW MM0,MM2                      ; 00488347
    PMULHW MM1,MM2                      ; 0048834a
    PMULHW MM4,MM3                      ; 0048834d
    PADDW MM0,MM4                       ; 00488350
    PADDW MM1,MM4                       ; 00488353
    PADDW MM0,qword ptr [0x006185e8]    ; 00488356 | g_LightmapBlendBias1
    PADDW MM1,qword ptr [0x006185f0]    ; 0048835d | g_LightmapBlendBias2
    PSRLW MM0,0x4                       ; 00488364
    PSRLW MM1,0x4                       ; 00488368
    PACKUSWB MM0,MM1                    ; 0048836c
    ADD ESI,0x8                         ; 0048836f
    INC EBX                             ; 00488372
    INC EBP                             ; 00488373
    MOVQ qword ptr [EDI],MM0            ; 00488374
    ADD EDI,0x8                         ; 00488377
    SUB ECX,0x2                         ; 0048837a
    JG 0x004882f0                       ; 0048837d
        ;   XREF to: 004882f0 (CONDITIONAL_JUMP)  ; LAB_004882f0
    POP EBP                             ; 00488383
    EMMS                                ; 00488384
    POP EDI                             ; 00488386
    POP ESI                             ; 00488387
    LEAVE                               ; 00488388
    RET                                 ; 00488389


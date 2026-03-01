; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40 at 0048ad6b
;
; Referenced Globals:
;   uint g_PerspectiveLeftU = 0x0
;   uint g_PerspectiveLeftV = 0x0
;   uint g_PerspectiveLeftZ = 0x0
;   uint g_PerspectiveLeftW = 0x0
;   uint g_PerspectiveInterpolatedW = 0x0
;   uint g_PerspectiveRightW = 0x0
;   uint g_PerspectiveRightU = 0x0
;   uint g_PerspectiveRightV = 0x0
;   uint g_PerspectiveRightZ = 0x0
;   int g_PerspectiveSubdivDeltaU = 0x0
;   int g_PerspectiveSubdivDeltaV = 0x0
;   int g_PerspectiveSubdivDeltaZ = 0x0
;   uint g_PerspectiveCurrentU = 0x0
;   uint g_PerspectiveCurrentV = 0x0
;   uint g_PerspectiveNextU = 0x0
;   ... and 41 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00490ec0
        ;   Label: core_dstrender.cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0
    PUSH EDI                            ; 00490ec1
    PUSH EBP                            ; 00490ec2
    MOV EAX,dword ptr [ESI + 0x8]       ; 00490ec3
    MOV ECX,dword ptr [EDI + 0x8]       ; 00490ec6
    CMP EAX,ECX                         ; 00490ec9
    JBE 0x00490ed0                      ; 00490ecb
        ;   XREF to: 00490ed0 (CONDITIONAL_JUMP)  ; LAB_00490ed0
    XCHG EAX,ECX                        ; 00490ecd
    XCHG EDI,ESI                        ; 00490ece
    SHR EAX,0x10                        ; 00490ed0
        ;   Label: LAB_00490ed0
    SHR ECX,0x10                        ; 00490ed3
    MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c] ; 00490ed6 | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 00490edd | g_ScreenBufferArray
    SUB ECX,EAX                         ; 00490ee4
    JLE 0x00491699                      ; 00490ee6
        ;   XREF to: 00491699 (CONDITIONAL_JUMP)  ; LAB_00491699
    SHL EAX,0x2                         ; 00490eec
    ADD EBX,EAX                         ; 00490eef
    ADD EBP,EAX                         ; 00490ef1
    MOV dword ptr [0x006723d0],EBX      ; 00490ef3 | g_PerspectiveScanlineColorPtr
    MOV dword ptr [0x006723d4],ECX      ; 00490ef9 | g_PerspectiveScanlinePixelCount
    MOV dword ptr [0x006723d8],EBP      ; 00490eff | g_PerspectiveScanlineZPtr
    MOV EBX,dword ptr [ESI + 0x18]      ; 00490f05
    MOV EAX,dword ptr [EDI + 0x18]      ; 00490f08
    MOV dword ptr [0x00672370],EBX      ; 00490f0b | g_PerspectiveLeftU
    MOV [0x00672388],EAX                ; 00490f11 | g_PerspectiveRightU
    SUB EAX,EBX                         ; 00490f16
    IMUL dword ptr [ECX*0x4 + 0x2d02584] ; 00490f18 | DAT_02d02584
    SHL EDX,0x4                         ; 00490f1f
    MOV dword ptr [0x00672394],EDX      ; 00490f22 | g_PerspectiveSubdivDeltaU
    MOV EBX,dword ptr [ESI + 0x20]      ; 00490f28
    MOV EAX,dword ptr [EDI + 0x20]      ; 00490f2b
    MOV dword ptr [0x00672374],EBX      ; 00490f2e | g_PerspectiveLeftV
    MOV [0x0067238c],EAX                ; 00490f34 | g_PerspectiveRightV
    SUB EAX,EBX                         ; 00490f39
    IMUL dword ptr [ECX*0x4 + 0x2d02584] ; 00490f3b | DAT_02d02584
    SHL EDX,0x4                         ; 00490f42
    MOV dword ptr [0x00672398],EDX      ; 00490f45 | g_PerspectiveSubdivDeltaV
    MOV EBX,dword ptr [ESI + 0x28]      ; 00490f4b
    MOV EAX,dword ptr [EDI + 0x28]      ; 00490f4e
    MOV dword ptr [0x00672378],EBX      ; 00490f51 | g_PerspectiveLeftZ
    MOV [0x00672390],EAX                ; 00490f57 | g_PerspectiveRightZ
    SUB EAX,EBX                         ; 00490f5c
    IMUL dword ptr [ECX*0x4 + 0x2d02584] ; 00490f5e | DAT_02d02584
    SHL EDX,0x4                         ; 00490f65
    MOV dword ptr [0x0067239c],EDX      ; 00490f68 | g_PerspectiveSubdivDeltaZ
    MOV EAX,[0x00672370]                ; 00490f6e | g_PerspectiveLeftU
    MOV EBX,dword ptr [0x00672378]      ; 00490f73 | g_PerspectiveLeftZ
    CDQ                                 ; 00490f79
    SHLD EDX,EAX,0x18                   ; 00490f7a
    SHL EAX,0x18                        ; 00490f7e
    IDIV EBX                            ; 00490f81
    MOV [0x006723a0],EAX                ; 00490f83 | g_PerspectiveCurrentU
    MOV EAX,[0x00672374]                ; 00490f88 | g_PerspectiveLeftV
    MOV EBX,dword ptr [0x00672378]      ; 00490f8d | g_PerspectiveLeftZ
    CDQ                                 ; 00490f93
    SHLD EDX,EAX,0x18                   ; 00490f94
    SHL EAX,0x18                        ; 00490f98
    IDIV EBX                            ; 00490f9b
    MOV [0x006723a4],EAX                ; 00490f9d | g_PerspectiveCurrentV
    PUSH dword ptr [0x00672378]         ; 00490fa2 | g_PerspectiveLeftZ
    MOV EDI,0x6723dc                    ; 00490fa8 | g_PerspectiveColorCache
    SUB ECX,0x10                        ; 00490fad
        ;   Label: LAB_00490fad
    JS 0x0049128f                       ; 00490fb0
        ;   XREF to: 0049128f (CONDITIONAL_JUMP)  ; LAB_0049128f
    MOV EAX,[0x00672370]                ; 00490fb6 | g_PerspectiveLeftU
    MOV EBX,dword ptr [0x00672374]      ; 00490fbb | g_PerspectiveLeftV
    MOV EDX,dword ptr [0x00672378]      ; 00490fc1 | g_PerspectiveLeftZ
    ADD EAX,dword ptr [0x00672394]      ; 00490fc7 | g_PerspectiveSubdivDeltaU
    ADD EBX,dword ptr [0x00672398]      ; 00490fcd | g_PerspectiveSubdivDeltaV
    ADD EDX,dword ptr [0x0067239c]      ; 00490fd3 | g_PerspectiveSubdivDeltaZ
    MOV [0x0067237c],EAX                ; 00490fd9 | g_PerspectiveLeftW
    MOV dword ptr [0x00672380],EBX      ; 00490fde | g_PerspectiveInterpolatedW
    MOV dword ptr [0x00672384],EDX      ; 00490fe4 | g_PerspectiveRightW
    MOV EAX,[0x0067237c]                ; 00490fea | g_PerspectiveLeftW
    MOV EBX,dword ptr [0x00672384]      ; 00490fef | g_PerspectiveRightW
    CDQ                                 ; 00490ff5
    SHLD EDX,EAX,0x18                   ; 00490ff6
    SHL EAX,0x18                        ; 00490ffa
    IDIV EBX                            ; 00490ffd
    MOV [0x006723a8],EAX                ; 00490fff | g_PerspectiveNextU
    MOV EAX,[0x00672380]                ; 00491004 | g_PerspectiveInterpolatedW
    MOV EBX,dword ptr [0x00672384]      ; 00491009 | g_PerspectiveRightW
    CDQ                                 ; 0049100f
    SHLD EDX,EAX,0x18                   ; 00491010
    SHL EAX,0x18                        ; 00491014
    IDIV EBX                            ; 00491017
    MOV [0x006723ac],EAX                ; 00491019 | g_PerspectiveNextV
    PUSH ECX                            ; 0049101e
    MOV EBX,dword ptr [0x02d03e80]      ; 0049101f | g_CurrentTextureData
    MOV ECX,dword ptr [0x006723a0]      ; 00491025 | g_PerspectiveCurrentU
    MOV EDX,dword ptr [0x006723a4]      ; 0049102b | g_PerspectiveCurrentV
    MOV ESI,dword ptr [0x006723a8]      ; 00491031 | g_PerspectiveNextU
    MOV EBP,dword ptr [0x006723ac]      ; 00491037 | g_PerspectiveNextV
    SUB ESI,ECX                         ; 0049103d
    SUB EBP,EDX                         ; 0049103f
    SAR ECX,0x8                         ; 00491041
    SAR EDX,0x8                         ; 00491044
    SAR ESI,0xc                         ; 00491047
    SAR EBP,0xc                         ; 0049104a
    MOV EBX,0x0                         ; 0049104d
    MOV BL,CH                           ; 00491052
    MOV BH,DH                           ; 00491054
    ADD EBX,dword ptr [0x02d03e80]      ; 00491056 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049105c
    MOVZX EAX,byte ptr [EBX]            ; 0049105e
    ADD EDX,EBP                         ; 00491061
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491063 | g_Hardware32BitPalette
    MOV dword ptr [EDI],EAX             ; 0049106a | g_PerspectiveColorCache
    MOV EBX,0x0                         ; 0049106c
    MOV BL,CH                           ; 00491071
    MOV BH,DH                           ; 00491073
    ADD EBX,dword ptr [0x02d03e80]      ; 00491075 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049107b
    MOVZX EAX,byte ptr [EBX]            ; 0049107d
    ADD EDX,EBP                         ; 00491080
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491082 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x4],EAX       ; 00491089 | g_PerspectiveColorCache[1]
    MOV EBX,0x0                         ; 0049108c
    MOV BL,CH                           ; 00491091
    MOV BH,DH                           ; 00491093
    ADD EBX,dword ptr [0x02d03e80]      ; 00491095 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049109b
    MOVZX EAX,byte ptr [EBX]            ; 0049109d
    ADD EDX,EBP                         ; 004910a0
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 004910a2 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x8],EAX       ; 004910a9 | g_PerspectiveColorCache[2]
    MOV EBX,0x0                         ; 004910ac
    MOV BL,CH                           ; 004910b1
    MOV BH,DH                           ; 004910b3
    ADD EBX,dword ptr [0x02d03e80]      ; 004910b5 | g_CurrentTextureData
    ADD ECX,ESI                         ; 004910bb
    MOVZX EAX,byte ptr [EBX]            ; 004910bd
    ADD EDX,EBP                         ; 004910c0
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 004910c2 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0xc],EAX       ; 004910c9 | g_PerspectiveColorCache[3]
    MOV EBX,0x0                         ; 004910cc
    MOV BL,CH                           ; 004910d1
    MOV BH,DH                           ; 004910d3
    ADD EBX,dword ptr [0x02d03e80]      ; 004910d5 | g_CurrentTextureData
    ADD ECX,ESI                         ; 004910db
    MOVZX EAX,byte ptr [EBX]            ; 004910dd
    ADD EDX,EBP                         ; 004910e0
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 004910e2 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x10],EAX      ; 004910e9 | g_PerspectiveColorCache[4]
    MOV EBX,0x0                         ; 004910ec
    MOV BL,CH                           ; 004910f1
    MOV BH,DH                           ; 004910f3
    ADD EBX,dword ptr [0x02d03e80]      ; 004910f5 | g_CurrentTextureData
    ADD ECX,ESI                         ; 004910fb
    MOVZX EAX,byte ptr [EBX]            ; 004910fd
    ADD EDX,EBP                         ; 00491100
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491102 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x14],EAX      ; 00491109 | g_PerspectiveColorCache[5]
    MOV EBX,0x0                         ; 0049110c
    MOV BL,CH                           ; 00491111
    MOV BH,DH                           ; 00491113
    ADD EBX,dword ptr [0x02d03e80]      ; 00491115 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049111b
    MOVZX EAX,byte ptr [EBX]            ; 0049111d
    ADD EDX,EBP                         ; 00491120
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491122 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x18],EAX      ; 00491129 | g_PerspectiveColorCache[6]
    MOV EBX,0x0                         ; 0049112c
    MOV BL,CH                           ; 00491131
    MOV BH,DH                           ; 00491133
    ADD EBX,dword ptr [0x02d03e80]      ; 00491135 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049113b
    MOVZX EAX,byte ptr [EBX]            ; 0049113d
    ADD EDX,EBP                         ; 00491140
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491142 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x1c],EAX      ; 00491149 | g_PerspectiveColorCache[7]
    MOV EBX,0x0                         ; 0049114c
    MOV BL,CH                           ; 00491151
    MOV BH,DH                           ; 00491153
    ADD EBX,dword ptr [0x02d03e80]      ; 00491155 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049115b
    MOVZX EAX,byte ptr [EBX]            ; 0049115d
    ADD EDX,EBP                         ; 00491160
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491162 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x20],EAX      ; 00491169 | g_PerspectiveColorCache[8]
    MOV EBX,0x0                         ; 0049116c
    MOV BL,CH                           ; 00491171
    MOV BH,DH                           ; 00491173
    ADD EBX,dword ptr [0x02d03e80]      ; 00491175 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049117b
    MOVZX EAX,byte ptr [EBX]            ; 0049117d
    ADD EDX,EBP                         ; 00491180
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491182 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x24],EAX      ; 00491189 | g_PerspectiveColorCache[9]
    MOV EBX,0x0                         ; 0049118c
    MOV BL,CH                           ; 00491191
    MOV BH,DH                           ; 00491193
    ADD EBX,dword ptr [0x02d03e80]      ; 00491195 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049119b
    MOVZX EAX,byte ptr [EBX]            ; 0049119d
    ADD EDX,EBP                         ; 004911a0
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 004911a2 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x28],EAX      ; 004911a9 | g_PerspectiveColorCache[10]
    MOV EBX,0x0                         ; 004911ac
    MOV BL,CH                           ; 004911b1
    MOV BH,DH                           ; 004911b3
    ADD EBX,dword ptr [0x02d03e80]      ; 004911b5 | g_CurrentTextureData
    ADD ECX,ESI                         ; 004911bb
    MOVZX EAX,byte ptr [EBX]            ; 004911bd
    ADD EDX,EBP                         ; 004911c0
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 004911c2 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x2c],EAX      ; 004911c9 | g_PerspectiveColorCache[11]
    MOV EBX,0x0                         ; 004911cc
    MOV BL,CH                           ; 004911d1
    MOV BH,DH                           ; 004911d3
    ADD EBX,dword ptr [0x02d03e80]      ; 004911d5 | g_CurrentTextureData
    ADD ECX,ESI                         ; 004911db
    MOVZX EAX,byte ptr [EBX]            ; 004911dd
    ADD EDX,EBP                         ; 004911e0
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 004911e2 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x30],EAX      ; 004911e9 | g_PerspectiveColorCache[12]
    MOV EBX,0x0                         ; 004911ec
    MOV BL,CH                           ; 004911f1
    MOV BH,DH                           ; 004911f3
    ADD EBX,dword ptr [0x02d03e80]      ; 004911f5 | g_CurrentTextureData
    ADD ECX,ESI                         ; 004911fb
    MOVZX EAX,byte ptr [EBX]            ; 004911fd
    ADD EDX,EBP                         ; 00491200
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491202 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x34],EAX      ; 00491209 | g_PerspectiveColorCache[13]
    MOV EBX,0x0                         ; 0049120c
    MOV BL,CH                           ; 00491211
    MOV BH,DH                           ; 00491213
    ADD EBX,dword ptr [0x02d03e80]      ; 00491215 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049121b
    MOVZX EAX,byte ptr [EBX]            ; 0049121d
    ADD EDX,EBP                         ; 00491220
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491222 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x38],EAX      ; 00491229 | g_PerspectiveColorCache[14]
    MOV EBX,0x0                         ; 0049122c
    MOV BL,CH                           ; 00491231
    MOV BH,DH                           ; 00491233
    ADD EBX,dword ptr [0x02d03e80]      ; 00491235 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049123b
    MOVZX EAX,byte ptr [EBX]            ; 0049123d
    ADD EDX,EBP                         ; 00491240
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491242 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x3c],EAX      ; 00491249 | g_PerspectiveColorCache[15]
    POP ECX                             ; 0049124c
    ADD EDI,0x40                        ; 0049124d
    MOV EAX,[0x0067237c]                ; 00491250 | g_PerspectiveLeftW
    MOV EBX,dword ptr [0x00672380]      ; 00491255 | g_PerspectiveInterpolatedW
    MOV EDX,dword ptr [0x00672384]      ; 0049125b | g_PerspectiveRightW
    MOV ESI,dword ptr [0x006723a8]      ; 00491261 | g_PerspectiveNextU
    MOV EBP,dword ptr [0x006723ac]      ; 00491267 | g_PerspectiveNextV
    MOV [0x00672370],EAX                ; 0049126d | g_PerspectiveLeftU
    MOV dword ptr [0x00672374],EBX      ; 00491272 | g_PerspectiveLeftV
    MOV dword ptr [0x00672378],EDX      ; 00491278 | g_PerspectiveLeftZ
    MOV dword ptr [0x006723a0],ESI      ; 0049127e | g_PerspectiveCurrentU
    MOV dword ptr [0x006723a4],EBP      ; 00491284 | g_PerspectiveCurrentV
    JMP 0x00490fad                      ; 0049128a
        ;   XREF to: 00490fad (UNCONDITIONAL_JUMP)  ; LAB_00490fad
    ADD ECX,0x10                        ; 0049128f
        ;   Label: LAB_0049128f
    JS 0x004915cc                       ; 00491292
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EAX,[0x00672388]                ; 00491298 | g_PerspectiveRightU
    MOV EBX,dword ptr [0x00672390]      ; 0049129d | g_PerspectiveRightZ
    CDQ                                 ; 004912a3
    SHLD EDX,EAX,0x18                   ; 004912a4
    SHL EAX,0x18                        ; 004912a8
    IDIV EBX                            ; 004912ab
    MOV [0x006723a8],EAX                ; 004912ad | g_PerspectiveNextU
    MOV EAX,[0x0067238c]                ; 004912b2 | g_PerspectiveRightV
    MOV EBX,dword ptr [0x00672390]      ; 004912b7 | g_PerspectiveRightZ
    CDQ                                 ; 004912bd
    SHLD EDX,EAX,0x18                   ; 004912be
    SHL EAX,0x18                        ; 004912c2
    IDIV EBX                            ; 004912c5
    MOV [0x006723ac],EAX                ; 004912c7 | g_PerspectiveNextV
    MOV EAX,[0x006723a8]                ; 004912cc | g_PerspectiveNextU
    SUB EAX,dword ptr [0x006723a0]      ; 004912d1 | g_PerspectiveCurrentU
    IMUL dword ptr [ECX*0x4 + 0x2d02584] ; 004912d7 | DAT_02d02584
    SAR EDX,0x8                         ; 004912de
    MOV ESI,EDX                         ; 004912e1
    MOV EAX,[0x006723ac]                ; 004912e3 | g_PerspectiveNextV
    SUB EAX,dword ptr [0x006723a4]      ; 004912e8 | g_PerspectiveCurrentV
    IMUL dword ptr [ECX*0x4 + 0x2d02584] ; 004912ee | DAT_02d02584
    SAR EDX,0x8                         ; 004912f5
    MOV EBP,EDX                         ; 004912f8
    MOV EBX,dword ptr [0x02d03e80]      ; 004912fa | g_CurrentTextureData
    SHL ECX,0x10                        ; 00491300
    AND ESI,0xffff                      ; 00491303
    MOV EDX,dword ptr [0x006723a4]      ; 00491309 | g_PerspectiveCurrentV
    OR ESI,ECX                          ; 0049130f
    MOV ECX,dword ptr [0x006723a0]      ; 00491311 | g_PerspectiveCurrentU
    SAR ECX,0x8                         ; 00491317
    SAR EDX,0x8                         ; 0049131a
    MOV EBX,0x0                         ; 0049131d
    MOV BL,CH                           ; 00491322
    MOV BH,DH                           ; 00491324
    ADD EBX,dword ptr [0x02d03e80]      ; 00491326 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049132c
    MOVZX EAX,byte ptr [EBX]            ; 0049132e
    ADD EDX,EBP                         ; 00491331
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491333 | g_Hardware32BitPalette
    MOV dword ptr [EDI],EAX             ; 0049133a | DAT_0067241c
    SUB ESI,0x10000                     ; 0049133c
    JS 0x004915cc                       ; 00491342
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 00491348
    MOV BL,CH                           ; 0049134d
    MOV BH,DH                           ; 0049134f
    ADD EBX,dword ptr [0x02d03e80]      ; 00491351 | g_CurrentTextureData
    ADD ECX,ESI                         ; 00491357
    MOVZX EAX,byte ptr [EBX]            ; 00491359
    ADD EDX,EBP                         ; 0049135c
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 0049135e | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x4],EAX       ; 00491365 | DAT_00672420
    SUB ESI,0x10000                     ; 00491368
    JS 0x004915cc                       ; 0049136e
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 00491374
    MOV BL,CH                           ; 00491379
    MOV BH,DH                           ; 0049137b
    ADD EBX,dword ptr [0x02d03e80]      ; 0049137d | g_CurrentTextureData
    ADD ECX,ESI                         ; 00491383
    MOVZX EAX,byte ptr [EBX]            ; 00491385
    ADD EDX,EBP                         ; 00491388
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 0049138a | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x8],EAX       ; 00491391 | DAT_00672424
    SUB ESI,0x10000                     ; 00491394
    JS 0x004915cc                       ; 0049139a
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 004913a0
    MOV BL,CH                           ; 004913a5
    MOV BH,DH                           ; 004913a7
    ADD EBX,dword ptr [0x02d03e80]      ; 004913a9 | g_CurrentTextureData
    ADD ECX,ESI                         ; 004913af
    MOVZX EAX,byte ptr [EBX]            ; 004913b1
    ADD EDX,EBP                         ; 004913b4
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 004913b6 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0xc],EAX       ; 004913bd | DAT_00672428
    SUB ESI,0x10000                     ; 004913c0
    JS 0x004915cc                       ; 004913c6
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 004913cc
    MOV BL,CH                           ; 004913d1
    MOV BH,DH                           ; 004913d3
    ADD EBX,dword ptr [0x02d03e80]      ; 004913d5 | g_CurrentTextureData
    ADD ECX,ESI                         ; 004913db
    MOVZX EAX,byte ptr [EBX]            ; 004913dd
    ADD EDX,EBP                         ; 004913e0
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 004913e2 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x10],EAX      ; 004913e9 | DAT_0067242c
    SUB ESI,0x10000                     ; 004913ec
    JS 0x004915cc                       ; 004913f2
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 004913f8
    MOV BL,CH                           ; 004913fd
    MOV BH,DH                           ; 004913ff
    ADD EBX,dword ptr [0x02d03e80]      ; 00491401 | g_CurrentTextureData
    ADD ECX,ESI                         ; 00491407
    MOVZX EAX,byte ptr [EBX]            ; 00491409
    ADD EDX,EBP                         ; 0049140c
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 0049140e | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x14],EAX      ; 00491415 | DAT_00672430
    SUB ESI,0x10000                     ; 00491418
    JS 0x004915cc                       ; 0049141e
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 00491424
    MOV BL,CH                           ; 00491429
    MOV BH,DH                           ; 0049142b
    ADD EBX,dword ptr [0x02d03e80]      ; 0049142d | g_CurrentTextureData
    ADD ECX,ESI                         ; 00491433
    MOVZX EAX,byte ptr [EBX]            ; 00491435
    ADD EDX,EBP                         ; 00491438
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 0049143a | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x18],EAX      ; 00491441 | DAT_00672434
    SUB ESI,0x10000                     ; 00491444
    JS 0x004915cc                       ; 0049144a
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 00491450
    MOV BL,CH                           ; 00491455
    MOV BH,DH                           ; 00491457
    ADD EBX,dword ptr [0x02d03e80]      ; 00491459 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049145f
    MOVZX EAX,byte ptr [EBX]            ; 00491461
    ADD EDX,EBP                         ; 00491464
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491466 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x1c],EAX      ; 0049146d | DAT_00672438
    SUB ESI,0x10000                     ; 00491470
    JS 0x004915cc                       ; 00491476
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 0049147c
    MOV BL,CH                           ; 00491481
    MOV BH,DH                           ; 00491483
    ADD EBX,dword ptr [0x02d03e80]      ; 00491485 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049148b
    MOVZX EAX,byte ptr [EBX]            ; 0049148d
    ADD EDX,EBP                         ; 00491490
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491492 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x20],EAX      ; 00491499 | DAT_0067243c
    SUB ESI,0x10000                     ; 0049149c
    JS 0x004915cc                       ; 004914a2
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 004914a8
    MOV BL,CH                           ; 004914ad
    MOV BH,DH                           ; 004914af
    ADD EBX,dword ptr [0x02d03e80]      ; 004914b1 | g_CurrentTextureData
    ADD ECX,ESI                         ; 004914b7
    MOVZX EAX,byte ptr [EBX]            ; 004914b9
    ADD EDX,EBP                         ; 004914bc
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 004914be | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x24],EAX      ; 004914c5 | DAT_00672440
    SUB ESI,0x10000                     ; 004914c8
    JS 0x004915cc                       ; 004914ce
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 004914d4
    MOV BL,CH                           ; 004914d9
    MOV BH,DH                           ; 004914db
    ADD EBX,dword ptr [0x02d03e80]      ; 004914dd | g_CurrentTextureData
    ADD ECX,ESI                         ; 004914e3
    MOVZX EAX,byte ptr [EBX]            ; 004914e5
    ADD EDX,EBP                         ; 004914e8
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 004914ea | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x28],EAX      ; 004914f1 | DAT_00672444
    SUB ESI,0x10000                     ; 004914f4
    JS 0x004915cc                       ; 004914fa
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 00491500
    MOV BL,CH                           ; 00491505
    MOV BH,DH                           ; 00491507
    ADD EBX,dword ptr [0x02d03e80]      ; 00491509 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049150f
    MOVZX EAX,byte ptr [EBX]            ; 00491511
    ADD EDX,EBP                         ; 00491514
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491516 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x2c],EAX      ; 0049151d | DAT_00672448
    SUB ESI,0x10000                     ; 00491520
    JS 0x004915cc                       ; 00491526
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 0049152c
    MOV BL,CH                           ; 00491531
    MOV BH,DH                           ; 00491533
    ADD EBX,dword ptr [0x02d03e80]      ; 00491535 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049153b
    MOVZX EAX,byte ptr [EBX]            ; 0049153d
    ADD EDX,EBP                         ; 00491540
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491542 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x30],EAX      ; 00491549 | DAT_0067244c
    SUB ESI,0x10000                     ; 0049154c
    JS 0x004915cc                       ; 00491552
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 00491554
    MOV BL,CH                           ; 00491559
    MOV BH,DH                           ; 0049155b
    ADD EBX,dword ptr [0x02d03e80]      ; 0049155d | g_CurrentTextureData
    ADD ECX,ESI                         ; 00491563
    MOVZX EAX,byte ptr [EBX]            ; 00491565
    ADD EDX,EBP                         ; 00491568
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 0049156a | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x34],EAX      ; 00491571 | DAT_00672450
    SUB ESI,0x10000                     ; 00491574
    JS 0x004915cc                       ; 0049157a
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 0049157c
    MOV BL,CH                           ; 00491581
    MOV BH,DH                           ; 00491583
    ADD EBX,dword ptr [0x02d03e80]      ; 00491585 | g_CurrentTextureData
    ADD ECX,ESI                         ; 0049158b
    MOVZX EAX,byte ptr [EBX]            ; 0049158d
    ADD EDX,EBP                         ; 00491590
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491592 | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x38],EAX      ; 00491599 | DAT_00672454
    SUB ESI,0x10000                     ; 0049159c
    JS 0x004915cc                       ; 004915a2
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    MOV EBX,0x0                         ; 004915a4
    MOV BL,CH                           ; 004915a9
    MOV BH,DH                           ; 004915ab
    ADD EBX,dword ptr [0x02d03e80]      ; 004915ad | g_CurrentTextureData
    ADD ECX,ESI                         ; 004915b3
    MOVZX EAX,byte ptr [EBX]            ; 004915b5
    ADD EDX,EBP                         ; 004915b8
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 004915ba | g_Hardware32BitPalette
    MOV dword ptr [EDI + 0x3c],EAX      ; 004915c1 | DAT_00672458
    SUB ESI,0x10000                     ; 004915c4
    JS 0x004915cc                       ; 004915ca
        ;   XREF to: 004915cc (CONDITIONAL_JUMP)  ; LAB_004915cc
    POP dword ptr [0x00672378]          ; 004915cc | g_PerspectiveLeftZ
        ;   Label: LAB_004915cc
    MOV EBX,0x6723dc                    ; 004915d2 | g_PerspectiveColorCache
    MOV ECX,dword ptr [0x006723d4]      ; 004915d7 | g_PerspectiveScanlinePixelCount
    MOV EDX,dword ptr [0x0067239c]      ; 004915dd | g_PerspectiveSubdivDeltaZ
    SAR EDX,0x8                         ; 004915e3
    MOV ESI,dword ptr [0x00672378]      ; 004915e6 | g_PerspectiveLeftZ
    SAR ESI,0x4                         ; 004915ec
    MOV EDI,dword ptr [0x006723d0]      ; 004915ef | g_PerspectiveScanlineColorPtr
    MOV EBP,dword ptr [0x006723d8]      ; 004915f5 | g_PerspectiveScanlineZPtr
    SUB ECX,0x4                         ; 004915fb
        ;   Label: LAB_004915fb
    JS 0x00491649                       ; 004915fe
        ;   XREF to: 00491649 (CONDITIONAL_JUMP)  ; LAB_00491649
    CMP ESI,dword ptr [EBP]             ; 00491600
    JL 0x0049160c                       ; 00491603
        ;   XREF to: 0049160c (CONDITIONAL_JUMP)  ; LAB_0049160c
    MOV EAX,dword ptr [EBX]             ; 00491605 | g_PerspectiveColorCache | g_PerspectiveColorCache[4]
    MOV dword ptr [EBP],ESI             ; 00491607
    MOV dword ptr [EDI],EAX             ; 0049160a
    ADD ESI,EDX                         ; 0049160c
        ;   Label: LAB_0049160c
    CMP ESI,dword ptr [EBP + 0x4]       ; 0049160e
    JL 0x0049161c                       ; 00491611
        ;   XREF to: 0049161c (CONDITIONAL_JUMP)  ; LAB_0049161c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00491613 | g_PerspectiveColorCache[1] | g_PerspectiveColorCache[5]
    MOV dword ptr [EBP + 0x4],ESI       ; 00491616
    MOV dword ptr [EDI + 0x4],EAX       ; 00491619
    ADD ESI,EDX                         ; 0049161c
        ;   Label: LAB_0049161c
    CMP ESI,dword ptr [EBP + 0x8]       ; 0049161e
    JL 0x0049162c                       ; 00491621
        ;   XREF to: 0049162c (CONDITIONAL_JUMP)  ; LAB_0049162c
    MOV EAX,dword ptr [EBX + 0x8]       ; 00491623 | g_PerspectiveColorCache[2] | g_PerspectiveColorCache[6]
    MOV dword ptr [EBP + 0x8],ESI       ; 00491626
    MOV dword ptr [EDI + 0x8],EAX       ; 00491629
    ADD ESI,EDX                         ; 0049162c
        ;   Label: LAB_0049162c
    CMP ESI,dword ptr [EBP + 0xc]       ; 0049162e
    JL 0x0049163c                       ; 00491631
        ;   XREF to: 0049163c (CONDITIONAL_JUMP)  ; LAB_0049163c
    MOV EAX,dword ptr [EBX + 0xc]       ; 00491633 | g_PerspectiveColorCache[3]
    MOV dword ptr [EBP + 0xc],ESI       ; 00491636
    MOV dword ptr [EDI + 0xc],EAX       ; 00491639
    ADD ESI,EDX                         ; 0049163c
        ;   Label: LAB_0049163c
    ADD EBX,0x10                        ; 0049163e
    ADD EDI,0x10                        ; 00491641
    ADD EBP,0x10                        ; 00491644
    JMP 0x004915fb                      ; 00491647
        ;   XREF to: 004915fb (UNCONDITIONAL_JUMP)  ; LAB_004915fb
    ADD ECX,0x4                         ; 00491649
        ;   Label: LAB_00491649
    JS 0x00491699                       ; 0049164c
        ;   XREF to: 00491699 (CONDITIONAL_JUMP)  ; LAB_00491699
    CMP ESI,dword ptr [EBP]             ; 0049164e
    JL 0x0049165a                       ; 00491651
        ;   XREF to: 0049165a (CONDITIONAL_JUMP)  ; LAB_0049165a
    MOV EAX,dword ptr [EBX]             ; 00491653 | g_PerspectiveColorCache[4]
    MOV dword ptr [EBP],ESI             ; 00491655
    MOV dword ptr [EDI],EAX             ; 00491658
    ADD ESI,EDX                         ; 0049165a
        ;   Label: LAB_0049165a
    SUB ECX,0x1                         ; 0049165c
    JS 0x00491699                       ; 0049165f
        ;   XREF to: 00491699 (CONDITIONAL_JUMP)  ; LAB_00491699
    CMP ESI,dword ptr [EBP + 0x4]       ; 00491661
    JL 0x0049166f                       ; 00491664
        ;   XREF to: 0049166f (CONDITIONAL_JUMP)  ; LAB_0049166f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00491666 | g_PerspectiveColorCache[5]
    MOV dword ptr [EBP + 0x4],ESI       ; 00491669
    MOV dword ptr [EDI + 0x4],EAX       ; 0049166c
    ADD ESI,EDX                         ; 0049166f
        ;   Label: LAB_0049166f
    SUB ECX,0x1                         ; 00491671
    JS 0x00491699                       ; 00491674
        ;   XREF to: 00491699 (CONDITIONAL_JUMP)  ; LAB_00491699
    CMP ESI,dword ptr [EBP + 0x8]       ; 00491676
    JL 0x00491684                       ; 00491679
        ;   XREF to: 00491684 (CONDITIONAL_JUMP)  ; LAB_00491684
    MOV EAX,dword ptr [EBX + 0x8]       ; 0049167b | g_PerspectiveColorCache[6]
    MOV dword ptr [EBP + 0x8],ESI       ; 0049167e
    MOV dword ptr [EDI + 0x8],EAX       ; 00491681
    ADD ESI,EDX                         ; 00491684
        ;   Label: LAB_00491684
    SUB ECX,0x1                         ; 00491686
    JS 0x00491699                       ; 00491689
        ;   XREF to: 00491699 (CONDITIONAL_JUMP)  ; LAB_00491699
    CMP ESI,dword ptr [EBP + 0xc]       ; 0049168b
    JL 0x00491699                       ; 0049168e
        ;   XREF to: 00491699 (CONDITIONAL_JUMP)  ; LAB_00491699
    MOV EAX,dword ptr [EBX + 0xc]       ; 00491690 | g_PerspectiveColorCache[7]
    MOV dword ptr [EBP + 0xc],ESI       ; 00491693
    MOV dword ptr [EDI + 0xc],EAX       ; 00491696
    POP EBP                             ; 00491699
        ;   Label: LAB_00491699
    POP EDI                             ; 0049169a
    POP ESI                             ; 0049169b
    RET                                 ; 0049169c


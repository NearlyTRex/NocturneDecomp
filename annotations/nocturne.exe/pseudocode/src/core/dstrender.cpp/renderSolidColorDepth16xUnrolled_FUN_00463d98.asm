; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrender_cpp_renderSolidColorDepth16xUnrolled_FUN_00463d98(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 at 0045eec2
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0 at 0045ef72
;
; Referenced Globals:
;   void*[1200] g_ScreenBufferArray
;   uint*[1200] g_ZBufferScanlineArray
;   int g_ActiveRenderColor
;   uint[1600] g_ReciprocalLookupTable
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00463d98
        ;   Label: core_dstrender.cpp_renderSolidColorDepth16xUnrolled_FUN_00463d98
    PUSH EDI                            ; 00463d99
    PUSH EBP                            ; 00463d9a
    MOV EAX,dword ptr [ESI + 0x8]       ; 00463d9b
    MOV ECX,dword ptr [EDI + 0x8]       ; 00463d9e
    CMP EAX,ECX                         ; 00463da1
    JBE 0x00463da8                      ; 00463da3
        ;   XREF to: 00463da8 (CONDITIONAL_JUMP)  ; LAB_00463da8
    XCHG EAX,ECX                        ; 00463da5
    XCHG EDI,ESI                        ; 00463da6
    SHR EAX,0x10                        ; 00463da8
        ;   Label: LAB_00463da8
    SHR ECX,0x10                        ; 00463dab
    MOV EBP,dword ptr [EBX*0x4 + 0x1bd4260] ; 00463dae | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 00463db5 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 00463dbc
    JLE 0x00463f73                      ; 00463dbe
        ;   XREF to: 00463f73 (CONDITIONAL_JUMP)  ; LAB_00463f73
    SHL EAX,0x2                         ; 00463dc4
    ADD EBX,EAX                         ; 00463dc7
    ADD EBP,EAX                         ; 00463dc9
    INC ECX                             ; 00463dcb
    MOV EAX,dword ptr [EDI + 0x28]      ; 00463dcc
    SUB EAX,dword ptr [ESI + 0x28]      ; 00463dcf
    IMUL dword ptr [ECX*0x4 + 0x1c00c80] ; 00463dd2 | g_ReciprocalLookupTable
    MOV EDI,EBX                         ; 00463dd9
    MOV EBX,EBP                         ; 00463ddb
    DEC ECX                             ; 00463ddd
    MOV ESI,dword ptr [ESI + 0x28]      ; 00463dde
    MOV EAX,[0x01c00c70]                ; 00463de1 | g_ActiveRenderColor
    SUB ECX,0x4                         ; 00463de6
        ;   Label: LAB_00463de6
    JL 0x00463f37                       ; 00463de9
        ;   XREF to: 00463f37 (CONDITIONAL_JUMP)  ; LAB_00463f37
    MOV EBP,ESI                         ; 00463def
    SHR EBP,0x8                         ; 00463df1
    CMP EBP,dword ptr [EBX]             ; 00463df4
    JL 0x00463dfc                       ; 00463df6
        ;   XREF to: 00463dfc (CONDITIONAL_JUMP)  ; LAB_00463dfc
    MOV dword ptr [EBX],EBP             ; 00463df8
    MOV dword ptr [EDI],EAX             ; 00463dfa
    ADD ESI,EDX                         ; 00463dfc
        ;   Label: LAB_00463dfc
    MOV EBP,ESI                         ; 00463dfe
    SHR EBP,0x8                         ; 00463e00
    CMP EBP,dword ptr [EBX + 0x4]       ; 00463e03
    JL 0x00463e0e                       ; 00463e06
        ;   XREF to: 00463e0e (CONDITIONAL_JUMP)  ; LAB_00463e0e
    MOV dword ptr [EBX + 0x4],EBP       ; 00463e08
    MOV dword ptr [EDI + 0x4],EAX       ; 00463e0b
    ADD ESI,EDX                         ; 00463e0e
        ;   Label: LAB_00463e0e
    MOV EBP,ESI                         ; 00463e10
    SHR EBP,0x8                         ; 00463e12
    CMP EBP,dword ptr [EBX + 0x8]       ; 00463e15
    JL 0x00463e20                       ; 00463e18
        ;   XREF to: 00463e20 (CONDITIONAL_JUMP)  ; LAB_00463e20
    MOV dword ptr [EBX + 0x8],EBP       ; 00463e1a
    MOV dword ptr [EDI + 0x8],EAX       ; 00463e1d
    ADD ESI,EDX                         ; 00463e20
        ;   Label: LAB_00463e20
    MOV EBP,ESI                         ; 00463e22
    SHR EBP,0x8                         ; 00463e24
    CMP EBP,dword ptr [EBX + 0xc]       ; 00463e27
    JL 0x00463e32                       ; 00463e2a
        ;   XREF to: 00463e32 (CONDITIONAL_JUMP)  ; LAB_00463e32
    MOV dword ptr [EBX + 0xc],EBP       ; 00463e2c
    MOV dword ptr [EDI + 0xc],EAX       ; 00463e2f
    ADD ESI,EDX                         ; 00463e32
        ;   Label: LAB_00463e32
    ADD EBX,0x10                        ; 00463e34
    ADD EDI,0x10                        ; 00463e37
    SUB ECX,0x4                         ; 00463e3a
    JL 0x00463f37                       ; 00463e3d
        ;   XREF to: 00463f37 (CONDITIONAL_JUMP)  ; LAB_00463f37
    MOV EBP,ESI                         ; 00463e43
    SHR EBP,0x8                         ; 00463e45
    CMP EBP,dword ptr [EBX]             ; 00463e48
    JL 0x00463e50                       ; 00463e4a
        ;   XREF to: 00463e50 (CONDITIONAL_JUMP)  ; LAB_00463e50
    MOV dword ptr [EBX],EBP             ; 00463e4c
    MOV dword ptr [EDI],EAX             ; 00463e4e
    ADD ESI,EDX                         ; 00463e50
        ;   Label: LAB_00463e50
    MOV EBP,ESI                         ; 00463e52
    SHR EBP,0x8                         ; 00463e54
    CMP EBP,dword ptr [EBX + 0x4]       ; 00463e57
    JL 0x00463e62                       ; 00463e5a
        ;   XREF to: 00463e62 (CONDITIONAL_JUMP)  ; LAB_00463e62
    MOV dword ptr [EBX + 0x4],EBP       ; 00463e5c
    MOV dword ptr [EDI + 0x4],EAX       ; 00463e5f
    ADD ESI,EDX                         ; 00463e62
        ;   Label: LAB_00463e62
    MOV EBP,ESI                         ; 00463e64
    SHR EBP,0x8                         ; 00463e66
    CMP EBP,dword ptr [EBX + 0x8]       ; 00463e69
    JL 0x00463e74                       ; 00463e6c
        ;   XREF to: 00463e74 (CONDITIONAL_JUMP)  ; LAB_00463e74
    MOV dword ptr [EBX + 0x8],EBP       ; 00463e6e
    MOV dword ptr [EDI + 0x8],EAX       ; 00463e71
    ADD ESI,EDX                         ; 00463e74
        ;   Label: LAB_00463e74
    MOV EBP,ESI                         ; 00463e76
    SHR EBP,0x8                         ; 00463e78
    CMP EBP,dword ptr [EBX + 0xc]       ; 00463e7b
    JL 0x00463e86                       ; 00463e7e
        ;   XREF to: 00463e86 (CONDITIONAL_JUMP)  ; LAB_00463e86
    MOV dword ptr [EBX + 0xc],EBP       ; 00463e80
    MOV dword ptr [EDI + 0xc],EAX       ; 00463e83
    ADD ESI,EDX                         ; 00463e86
        ;   Label: LAB_00463e86
    ADD EBX,0x10                        ; 00463e88
    ADD EDI,0x10                        ; 00463e8b
    SUB ECX,0x4                         ; 00463e8e
    JL 0x00463f37                       ; 00463e91
        ;   XREF to: 00463f37 (CONDITIONAL_JUMP)  ; LAB_00463f37
    MOV EBP,ESI                         ; 00463e97
    SHR EBP,0x8                         ; 00463e99
    CMP EBP,dword ptr [EBX]             ; 00463e9c
    JL 0x00463ea4                       ; 00463e9e
        ;   XREF to: 00463ea4 (CONDITIONAL_JUMP)  ; LAB_00463ea4
    MOV dword ptr [EBX],EBP             ; 00463ea0
    MOV dword ptr [EDI],EAX             ; 00463ea2
    ADD ESI,EDX                         ; 00463ea4
        ;   Label: LAB_00463ea4
    MOV EBP,ESI                         ; 00463ea6
    SHR EBP,0x8                         ; 00463ea8
    CMP EBP,dword ptr [EBX + 0x4]       ; 00463eab
    JL 0x00463eb6                       ; 00463eae
        ;   XREF to: 00463eb6 (CONDITIONAL_JUMP)  ; LAB_00463eb6
    MOV dword ptr [EBX + 0x4],EBP       ; 00463eb0
    MOV dword ptr [EDI + 0x4],EAX       ; 00463eb3
    ADD ESI,EDX                         ; 00463eb6
        ;   Label: LAB_00463eb6
    MOV EBP,ESI                         ; 00463eb8
    SHR EBP,0x8                         ; 00463eba
    CMP EBP,dword ptr [EBX + 0x8]       ; 00463ebd
    JL 0x00463ec8                       ; 00463ec0
        ;   XREF to: 00463ec8 (CONDITIONAL_JUMP)  ; LAB_00463ec8
    MOV dword ptr [EBX + 0x8],EBP       ; 00463ec2
    MOV dword ptr [EDI + 0x8],EAX       ; 00463ec5
    ADD ESI,EDX                         ; 00463ec8
        ;   Label: LAB_00463ec8
    MOV EBP,ESI                         ; 00463eca
    SHR EBP,0x8                         ; 00463ecc
    CMP EBP,dword ptr [EBX + 0xc]       ; 00463ecf
    JL 0x00463eda                       ; 00463ed2
        ;   XREF to: 00463eda (CONDITIONAL_JUMP)  ; LAB_00463eda
    MOV dword ptr [EBX + 0xc],EBP       ; 00463ed4
    MOV dword ptr [EDI + 0xc],EAX       ; 00463ed7
    ADD ESI,EDX                         ; 00463eda
        ;   Label: LAB_00463eda
    ADD EBX,0x10                        ; 00463edc
    ADD EDI,0x10                        ; 00463edf
    SUB ECX,0x4                         ; 00463ee2
    JL 0x00463f37                       ; 00463ee5
        ;   XREF to: 00463f37 (CONDITIONAL_JUMP)  ; LAB_00463f37
    MOV EBP,ESI                         ; 00463ee7
    SHR EBP,0x8                         ; 00463ee9
    CMP EBP,dword ptr [EBX]             ; 00463eec
    JL 0x00463ef4                       ; 00463eee
        ;   XREF to: 00463ef4 (CONDITIONAL_JUMP)  ; LAB_00463ef4
    MOV dword ptr [EBX],EBP             ; 00463ef0
    MOV dword ptr [EDI],EAX             ; 00463ef2
    ADD ESI,EDX                         ; 00463ef4
        ;   Label: LAB_00463ef4
    MOV EBP,ESI                         ; 00463ef6
    SHR EBP,0x8                         ; 00463ef8
    CMP EBP,dword ptr [EBX + 0x4]       ; 00463efb
    JL 0x00463f06                       ; 00463efe
        ;   XREF to: 00463f06 (CONDITIONAL_JUMP)  ; LAB_00463f06
    MOV dword ptr [EBX + 0x4],EBP       ; 00463f00
    MOV dword ptr [EDI + 0x4],EAX       ; 00463f03
    ADD ESI,EDX                         ; 00463f06
        ;   Label: LAB_00463f06
    MOV EBP,ESI                         ; 00463f08
    SHR EBP,0x8                         ; 00463f0a
    CMP EBP,dword ptr [EBX + 0x8]       ; 00463f0d
    JL 0x00463f18                       ; 00463f10
        ;   XREF to: 00463f18 (CONDITIONAL_JUMP)  ; LAB_00463f18
    MOV dword ptr [EBX + 0x8],EBP       ; 00463f12
    MOV dword ptr [EDI + 0x8],EAX       ; 00463f15
    ADD ESI,EDX                         ; 00463f18
        ;   Label: LAB_00463f18
    MOV EBP,ESI                         ; 00463f1a
    SHR EBP,0x8                         ; 00463f1c
    CMP EBP,dword ptr [EBX + 0xc]       ; 00463f1f
    JL 0x00463f2a                       ; 00463f22
        ;   XREF to: 00463f2a (CONDITIONAL_JUMP)  ; LAB_00463f2a
    MOV dword ptr [EBX + 0xc],EBP       ; 00463f24
    MOV dword ptr [EDI + 0xc],EAX       ; 00463f27
    ADD ESI,EDX                         ; 00463f2a
        ;   Label: LAB_00463f2a
    ADD EBX,0x10                        ; 00463f2c
    ADD EDI,0x10                        ; 00463f2f
    JMP 0x00463de6                      ; 00463f32
        ;   XREF to: 00463de6 (UNCONDITIONAL_JUMP)  ; LAB_00463de6
    ADD ECX,0x4                         ; 00463f37
        ;   Label: LAB_00463f37
    JLE 0x00463f73                      ; 00463f3a
        ;   XREF to: 00463f73 (CONDITIONAL_JUMP)  ; LAB_00463f73
    MOV EBP,ESI                         ; 00463f3c
    SHR EBP,0x8                         ; 00463f3e
    CMP EBP,dword ptr [EBX]             ; 00463f41
    JL 0x00463f49                       ; 00463f43
        ;   XREF to: 00463f49 (CONDITIONAL_JUMP)  ; LAB_00463f49
    MOV dword ptr [EBX],EBP             ; 00463f45
    MOV dword ptr [EDI],EAX             ; 00463f47
    ADD ESI,EDX                         ; 00463f49
        ;   Label: LAB_00463f49
    DEC ECX                             ; 00463f4b
    JLE 0x00463f73                      ; 00463f4c
        ;   XREF to: 00463f73 (CONDITIONAL_JUMP)  ; LAB_00463f73
    MOV EBP,ESI                         ; 00463f4e
    SHR EBP,0x8                         ; 00463f50
    CMP EBP,dword ptr [EBX + 0x4]       ; 00463f53
    JL 0x00463f5e                       ; 00463f56
        ;   XREF to: 00463f5e (CONDITIONAL_JUMP)  ; LAB_00463f5e
    MOV dword ptr [EBX + 0x4],EBP       ; 00463f58
    MOV dword ptr [EDI + 0x4],EAX       ; 00463f5b
    ADD ESI,EDX                         ; 00463f5e
        ;   Label: LAB_00463f5e
    DEC ECX                             ; 00463f60
    JLE 0x00463f73                      ; 00463f61
        ;   XREF to: 00463f73 (CONDITIONAL_JUMP)  ; LAB_00463f73
    MOV EBP,ESI                         ; 00463f63
    SHR EBP,0x8                         ; 00463f65
    CMP EBP,dword ptr [EBX + 0x8]       ; 00463f68
    JL 0x00463f73                       ; 00463f6b
        ;   XREF to: 00463f73 (CONDITIONAL_JUMP)  ; LAB_00463f73
    MOV dword ptr [EBX + 0x8],EBP       ; 00463f6d
    MOV dword ptr [EDI + 0x8],EAX       ; 00463f70
    POP EBP                             ; 00463f73
        ;   Label: LAB_00463f73
    POP EDI                             ; 00463f74
    POP ESI                             ; 00463f75
    RET                                 ; 00463f76


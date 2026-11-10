; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_00513950(CPathMap *this_ptr,int depth,int red,int green,int fog)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   depth
; int              Stack[0xc]:4   red
; int              Stack[0x10]:4   green
; int              Stack[0x14]:4   fog
;
; XREF[2]:
;   core_path.cpp_renderAllPathMaps_FUN_00513f90 at 0051400a
;   core_path.cpp_renderPathMapsAtPosition_FUN_00514020 at 005140db
;
; Referenced Globals:
;   undefined4 DAT_005e1839
;   undefined4 DAT_005e1841
;   undefined4 DAT_0060b280
;   undefined4 DAT_01e613f4
;   undefined4 DAT_01e613f8
;   undefined4 DAT_01e613fc
;   undefined4 DAT_01e61400
;   undefined4 DAT_01e61404
;   undefined4 DAT_01e61408
;   undefined4 DAT_01e6140c
;   undefined4 DAT_01e61410
;   undefined4 DAT_01e61414
;   undefined4 DAT_01e61418
;   undefined4 DAT_01e6141c
;   undefined4 DAT_01e61420
;   ... and 11 more
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513950
        ;   Label: core_path.cpp_CPathMap_renderPathMap_FUN_00513950
    PUSH ESI                            ; 00513951
    PUSH EDI                            ; 00513952
    PUSH EBP                            ; 00513953
    MOV EBP,ESP                         ; 00513954
    SUB ESP,0x6c                        ; 00513956
    AND ESP,0xfffffff8                  ; 00513959
    MOV EDX,dword ptr [0x0060b280]      ; 0051395c | DAT_0060b280
    PUSH EDX                            ; 00513962
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00513963
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00513968
    TEST EAX,EAX                        ; 0051396b
    JZ 0x00513976                       ; 0051396d
        ;   XREF to: 00513976 (CONDITIONAL_JUMP)  ; LAB_00513976
    MOV ESP,EBP                         ; 0051396f
    POP EBP                             ; 00513971
    POP EDI                             ; 00513972
    POP ESI                             ; 00513973
    POP EBX                             ; 00513974
    RET                                 ; 00513975
    MOV EAX,dword ptr [EBP + 0x14]      ; 00513976
        ;   Label: LAB_00513976
    FILD dword ptr [EAX + 0x24]         ; 00513979
    FMUL float ptr [0x01fc9c9c]         ; 0051397c | g_CDemonRaytraceInstance.adjusted_size.x
    XOR ECX,ECX                         ; 00513982
    FADD float ptr [0x01fc9c78]         ; 00513984 | g_CDemonRaytraceInstance.bbox_min.x
    MOV dword ptr [ESP + 0x4],ECX       ; 0051398a
    FSTP float ptr [ESP]                ; 0051398e
    FILD dword ptr [EAX + 0x2c]         ; 00513991
    FMUL float ptr [0x01fc9ca4]         ; 00513994 | g_CDemonRaytraceInstance.adjusted_size.z
    MOV EAX,ESP                         ; 0051399a
    MOV EBX,dword ptr [0x0060b280]      ; 0051399c | DAT_0060b280
    PUSH EAX                            ; 005139a2
    FADD float ptr [0x01fc9c80]         ; 005139a3 | g_CDemonRaytraceInstance.bbox_min.z
    PUSH EBX                            ; 005139a9
    FSTP float ptr [ESP + 0x10]         ; 005139aa
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 005139ae
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005139b3
    PUSH 0x61b2d0                       ; 005139b6
    MOV ESI,dword ptr [0x0060b280]      ; 005139bb | DAT_0060b280
    PUSH ESI                            ; 005139c1
    MOV EDI,0x4                         ; 005139c2
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 005139c7
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EDX,0x1                         ; 005139cc
    MOV ESI,0x2                         ; 005139d1
    ADD ESP,0x8                         ; 005139d6
    MOV dword ptr [0x01e613f4],EDI      ; 005139d9 | DAT_01e613f4
    XOR EAX,EAX                         ; 005139df
    MOV EDI,0x800000                    ; 005139e1
    MOV [0x01e613f8],EAX                ; 005139e6 | DAT_01e613f8
    MOV [0x01e613fc],EAX                ; 005139eb | DAT_01e613fc
    MOV [0x01e61400],EAX                ; 005139f0 | DAT_01e61400
    MOV [0x01e61404],EAX                ; 005139f5 | DAT_01e61404
    MOV [0x01e61408],EAX                ; 005139fa | DAT_01e61408
    MOV dword ptr [0x01e61414],EDX      ; 005139ff | DAT_01e61414
    MOV dword ptr [0x01e61420],ESI      ; 00513a05 | DAT_01e61420
    PUSH EAX                            ; 00513a0b
    MOV EDX,0x3                         ; 00513a0c
    MOV ESI,dword ptr [0x0060b280]      ; 00513a11 | DAT_0060b280
    MOV dword ptr [0x01e6140c],EDI      ; 00513a17 | DAT_01e6140c
    MOV dword ptr [0x01e61410],EDI      ; 00513a1d | DAT_01e61410
    MOV dword ptr [0x01e61418],EDI      ; 00513a23 | DAT_01e61418
    MOV dword ptr [0x01e6141c],EDI      ; 00513a29 | DAT_01e6141c
    MOV dword ptr [0x01e61424],EDI      ; 00513a2f | DAT_01e61424
    MOV dword ptr [0x01e61428],EDI      ; 00513a35 | DAT_01e61428
    MOV dword ptr [0x01e61430],EDI      ; 00513a3b | DAT_01e61430
    PUSH ESI                            ; 00513a41
    MOV dword ptr [0x01e61434],EDI      ; 00513a42 | DAT_01e61434
    MOV dword ptr [0x01e6142c],EDX      ; 00513a48 | DAT_01e6142c
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 00513a4e
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00513a53
    MOV EAX,dword ptr [EBP + 0x18]      ; 00513a56
    SHL EAX,0x8                         ; 00513a59
    MOV dword ptr [ESP + 0x58],EAX      ; 00513a5c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00513a60
    SHL EAX,0x8                         ; 00513a63
    MOV dword ptr [ESP + 0x5c],EAX      ; 00513a66
    MOV EAX,dword ptr [EBP + 0x20]      ; 00513a6a
    SHL EAX,0x8                         ; 00513a6d
    XOR EDI,EDI                         ; 00513a70
    MOV dword ptr [ESP + 0x60],EAX      ; 00513a72
    MOV EAX,dword ptr [EBP + 0x24]      ; 00513a76
    MOV dword ptr [ESP + 0xc],EDI       ; 00513a79
    SHL EAX,0x8                         ; 00513a7d
    MOV dword ptr [ESP + 0x50],EDI      ; 00513a80
    MOV dword ptr [ESP + 0x54],EAX      ; 00513a84
    MOV EAX,dword ptr [ESP + 0x50]      ; 00513a88
        ;   Label: LAB_00513a88
    MOV ECX,dword ptr [EBP + 0x14]      ; 00513a8c
    XOR EDX,EDX                         ; 00513a8f
    ADD EAX,ECX                         ; 00513a91
    MOV dword ptr [ESP + 0x14],EDX      ; 00513a93
    MOV dword ptr [ESP + 0x64],EAX      ; 00513a97
    MOV EAX,dword ptr [ESP + 0x64]      ; 00513a9b
        ;   Label: LAB_00513a9b
    MOV EBX,dword ptr [EAX + 0x9c70]    ; 00513a9f
    CMP EBX,0xfffffc19                  ; 00513aa5
    JGE 0x00513afa                      ; 00513aab
        ;   XREF to: 00513afa (CONDITIONAL_JUMP)  ; LAB_00513afa
    MOV EAX,dword ptr [ESP + 0x14]      ; 00513aad
        ;   Label: LAB_00513aad
    MOV EDI,dword ptr [ESP + 0x64]      ; 00513ab1
    INC EAX                             ; 00513ab5
    ADD EDI,0x190                       ; 00513ab6
    MOV dword ptr [ESP + 0x14],EAX      ; 00513abc
    MOV dword ptr [ESP + 0x64],EDI      ; 00513ac0
    CMP EAX,0x64                        ; 00513ac4
    JL 0x00513a9b                       ; 00513ac7
        ;   XREF to: 00513a9b (CONDITIONAL_JUMP)  ; LAB_00513a9b
    MOV EBX,dword ptr [ESP + 0xc]       ; 00513ac9
    MOV ECX,dword ptr [ESP + 0x50]      ; 00513acd
    INC EBX                             ; 00513ad1
    ADD ECX,0x4                         ; 00513ad2
    MOV dword ptr [ESP + 0xc],EBX       ; 00513ad5
    MOV dword ptr [ESP + 0x50],ECX      ; 00513ad9
    CMP EBX,0x64                        ; 00513add
    JL 0x00513a88                       ; 00513ae0
        ;   XREF to: 00513a88 (CONDITIONAL_JUMP)  ; LAB_00513a88
    PUSH 0x1                            ; 00513ae2
    MOV EDI,dword ptr [0x0060b280]      ; 00513ae4 | DAT_0060b280
    PUSH EDI                            ; 00513aea
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 00513aeb
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00513af0
    MOV ESP,EBP                         ; 00513af3
    POP EBP                             ; 00513af5
    POP EDI                             ; 00513af6
    POP ESI                             ; 00513af7
    POP EBX                             ; 00513af8
    RET                                 ; 00513af9
    CMP EBX,0x3e7                       ; 00513afa
        ;   Label: LAB_00513afa
    JG 0x00513aad                       ; 00513b00
        ;   XREF to: 00513aad (CONDITIONAL_JUMP)  ; LAB_00513aad
    FLD float ptr [0x005e1839]          ; 00513b02 | DAT_005e1839
    FLD float ptr [0x01fc9c9c]          ; 00513b08 | g_CDemonRaytraceInstance.adjusted_size.x
    FMUL ST1                            ; 00513b0e
    FLD float ptr [0x01fc9ca0]          ; 00513b10 | g_CDemonRaytraceInstance.adjusted_size.y
    FMUL ST2                            ; 00513b16
    FLD float ptr [0x01fc9ca4]          ; 00513b18 | g_CDemonRaytraceInstance.adjusted_size.z
    FMULP ST3                           ; 00513b1e
    FLD double ptr [0x005e1841]         ; 00513b20 | DAT_005e1841
    FLD float ptr [0x01fc9c7c]          ; 00513b26 | g_CDemonRaytraceInstance.bbox_min.y
    FMUL ST1                            ; 00513b2c
    LEA EDI,[ESP + 0x24]                ; 00513b2e
    MOV EAX,dword ptr [EAX + 0x30]      ; 00513b32
    LEA ESI,[ESP + 0xc]                 ; 00513b35
    MOV dword ptr [ESP + 0x10],EAX      ; 00513b39
    FXCH ST3                            ; 00513b3d
    FSTP float ptr [ESP + 0x3c]         ; 00513b3f
    MOVSD ES:EDI,ESI                    ; 00513b43
    MOVSD ES:EDI,ESI                    ; 00513b44
    MOVSD ES:EDI,ESI                    ; 00513b45
    FXCH                                ; 00513b46
    FSTP float ptr [ESP + 0x40]         ; 00513b48
    LEA EDI,[ESP + 0x18]                ; 00513b4c
    LEA ESI,[ESP + 0x3c]                ; 00513b50
    MOV EAX,dword ptr [ESP + 0x24]      ; 00513b54
    FXCH ST2                            ; 00513b58
    FSTP float ptr [ESP + 0x44]         ; 00513b5a
    MOV dword ptr [ESP + 0x68],EAX      ; 00513b5e
    MOVSD ES:EDI,ESI                    ; 00513b62
    MOVSD ES:EDI,ESI                    ; 00513b63
    MOVSD ES:EDI,ESI                    ; 00513b64
    FILD dword ptr [ESP + 0x68]         ; 00513b65
    MOV EAX,dword ptr [ESP + 0x28]      ; 00513b69
    FMUL float ptr [ESP + 0x18]         ; 00513b6d
    MOV dword ptr [ESP + 0x68],EAX      ; 00513b71
    FILD dword ptr [ESP + 0x68]         ; 00513b75
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00513b79
    FMUL float ptr [ESP + 0x1c]         ; 00513b7d
    MOV dword ptr [ESP + 0x68],EAX      ; 00513b81
    FILD dword ptr [ESP + 0x68]         ; 00513b85
    FMUL float ptr [ESP + 0x20]         ; 00513b89
    MOV EDX,dword ptr [0x0060b280]      ; 00513b8d | DAT_0060b280
    FXCH ST2                            ; 00513b93
    CALL crt_math.c_round_FUN_005b7ff0  ; 00513b95
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x30]        ; 00513b9a
    LEA EAX,[ESP + 0x30]                ; 00513b9e
    FADDP ST2,ST0                       ; 00513ba2
    PUSH EAX                            ; 00513ba4
    CALL crt_math.c_round_FUN_005b7ff0  ; 00513ba5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00513baa
    FADDP ST2,ST0                       ; 00513bac
    FISTP dword ptr [ESP + 0x3c]        ; 00513bae
    CALL crt_math.c_round_FUN_005b7ff0  ; 00513bb2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x38]        ; 00513bb7
    MOV EAX,dword ptr [EDX]             ; 00513bbb
    PUSH EAX                            ; 00513bbd
    CALL engine_special.cpp_FUN_0055d723 ; 00513bbe
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00513bc3
    MOV EAX,dword ptr [ESP + 0x30]      ; 00513bc6
    MOV dword ptr [ESP + 0x68],EAX      ; 00513bca
    MOV EDX,dword ptr [0x0060b280]      ; 00513bce | DAT_0060b280
    FILD dword ptr [ESP + 0x68]         ; 00513bd4
    LEA EAX,[ESP + 0x30]                ; 00513bd8
    FLD ST0                             ; 00513bdc
    FADD float ptr [ESP + 0x18]         ; 00513bde
    PUSH EAX                            ; 00513be2
    FSTP ST1                            ; 00513be3
    CALL crt_math.c_round_FUN_005b7ff0  ; 00513be5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x34]        ; 00513bea
    MOV EAX,dword ptr [EDX]             ; 00513bee
    ADD EAX,0x30                        ; 00513bf0
    PUSH EAX                            ; 00513bf3
    CALL engine_special.cpp_FUN_0055d723 ; 00513bf4
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00513bf9
    MOV EAX,dword ptr [ESP + 0x38]      ; 00513bfc
    MOV dword ptr [ESP + 0x68],EAX      ; 00513c00
    MOV EDX,dword ptr [0x0060b280]      ; 00513c04 | DAT_0060b280
    FILD dword ptr [ESP + 0x68]         ; 00513c0a
    LEA EAX,[ESP + 0x30]                ; 00513c0e
    FLD ST0                             ; 00513c12
    FADD float ptr [ESP + 0x20]         ; 00513c14
    PUSH EAX                            ; 00513c18
    FSTP ST1                            ; 00513c19
    CALL crt_math.c_round_FUN_005b7ff0  ; 00513c1b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x3c]        ; 00513c20
    MOV EAX,dword ptr [EDX]             ; 00513c24
    ADD EAX,0x60                        ; 00513c26
    PUSH EAX                            ; 00513c29
    CALL engine_special.cpp_FUN_0055d723 ; 00513c2a
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00513c2f
    MOV EAX,dword ptr [ESP + 0x30]      ; 00513c32
    MOV dword ptr [ESP + 0x68],EAX      ; 00513c36
    LEA EDX,[ESP + 0x30]                ; 00513c3a
    FILD dword ptr [ESP + 0x68]         ; 00513c3e
    FLD ST0                             ; 00513c42
    FSUB float ptr [ESP + 0x18]         ; 00513c44
    MOV EAX,[0x0060b280]                ; 00513c48 | DAT_0060b280
    FSTP ST1                            ; 00513c4d
    CALL crt_math.c_round_FUN_005b7ff0  ; 00513c4f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x30]        ; 00513c54
    MOV EAX,dword ptr [EAX]             ; 00513c58
    PUSH EDX                            ; 00513c5a
    ADD EAX,0x90                        ; 00513c5b
    PUSH EAX                            ; 00513c60
    CALL engine_special.cpp_FUN_0055d723 ; 00513c61
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00513c66
    MOV EAX,[0x0060b280]                ; 00513c69 | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 00513c6e
    MOV ECX,dword ptr [ESP + 0x58]      ; 00513c70
    MOV dword ptr [EDX + 0x20],ECX      ; 00513c74
    MOV EDX,dword ptr [EAX]             ; 00513c77
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00513c79
    MOV dword ptr [EDX + 0x24],ECX      ; 00513c7d
    MOV EDX,dword ptr [EAX]             ; 00513c80
    MOV ECX,dword ptr [ESP + 0x60]      ; 00513c82
    MOV dword ptr [EDX + 0x28],ECX      ; 00513c86
    MOV EDX,dword ptr [EAX]             ; 00513c89
    MOV ECX,dword ptr [ESP + 0x54]      ; 00513c8b
    MOV dword ptr [EDX + 0x2c],ECX      ; 00513c8f
    MOV EDX,dword ptr [EAX]             ; 00513c92
    MOV ECX,dword ptr [ESP + 0x58]      ; 00513c94
    MOV dword ptr [EDX + 0x50],ECX      ; 00513c98
    MOV EDX,dword ptr [EAX]             ; 00513c9b
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00513c9d
    MOV dword ptr [EDX + 0x54],ECX      ; 00513ca1
    MOV EDX,dword ptr [EAX]             ; 00513ca4
    MOV ECX,dword ptr [ESP + 0x60]      ; 00513ca6
    MOV dword ptr [EDX + 0x58],ECX      ; 00513caa
    MOV EDX,dword ptr [EAX]             ; 00513cad
    MOV ECX,dword ptr [ESP + 0x54]      ; 00513caf
    MOV dword ptr [EDX + 0x5c],ECX      ; 00513cb3
    MOV EDX,dword ptr [EAX]             ; 00513cb6
    MOV ECX,dword ptr [ESP + 0x58]      ; 00513cb8
    MOV dword ptr [EDX + 0x80],ECX      ; 00513cbc
    MOV EDX,dword ptr [EAX]             ; 00513cc2
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00513cc4
    MOV dword ptr [EDX + 0x84],ECX      ; 00513cc8
    MOV EDX,dword ptr [EAX]             ; 00513cce
    MOV ECX,dword ptr [ESP + 0x60]      ; 00513cd0
    MOV dword ptr [EDX + 0x88],ECX      ; 00513cd4
    MOV EDX,dword ptr [EAX]             ; 00513cda
    MOV ECX,dword ptr [ESP + 0x54]      ; 00513cdc
    MOV dword ptr [EDX + 0x8c],ECX      ; 00513ce0
    MOV EDX,dword ptr [EAX]             ; 00513ce6
    MOV ECX,dword ptr [ESP + 0x58]      ; 00513ce8
    MOV dword ptr [EDX + 0xb0],ECX      ; 00513cec
    MOV EDX,dword ptr [EAX]             ; 00513cf2
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00513cf4
    MOV dword ptr [EDX + 0xb4],ECX      ; 00513cf8
    MOV EDX,dword ptr [EAX]             ; 00513cfe
    MOV ECX,dword ptr [ESP + 0x60]      ; 00513d00
    MOV dword ptr [EDX + 0xb8],ECX      ; 00513d04
    PUSH 0x1e613f0                      ; 00513d0a
    MOV EDX,dword ptr [EAX]             ; 00513d0f
    MOV ECX,dword ptr [ESP + 0x58]      ; 00513d11
    PUSH EAX                            ; 00513d15
    MOV dword ptr [EDX + 0xbc],ECX      ; 00513d16
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00 ; 00513d1c
        ;   XREF to: 0046aa00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00513d21
    JMP 0x00513aad                      ; 00513d24
        ;   XREF to: 00513aad (UNCONDITIONAL_JUMP)  ; LAB_00513aad


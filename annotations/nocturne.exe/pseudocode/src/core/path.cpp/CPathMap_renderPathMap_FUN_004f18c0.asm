; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_004f18c0(CPathMap *this_ptr,int depth,int red,int green,int fog)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   depth
; int              Stack[0xc]:4   red
; int              Stack[0x10]:4   green
; int              Stack[0x14]:4   fog
; Local Variables:
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_path.cpp_renderAllPathMaps_FUN_004f1ef0 at 004f1f6a
;   core_path.cpp_renderPathMapsAtPosition_FUN_004f1f80 at 004f203b
;
; Referenced Globals:
;   undefined4 DAT_0058ce2f
;   undefined4 DAT_0058ce37
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be090
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01e42814
;   undefined4 DAT_01e42818
;   undefined4 DAT_01e4281c
;   undefined4 DAT_01e42820
;   undefined4 DAT_01e42824
;   undefined4 DAT_01e42828
;   undefined4 DAT_01e4282c
;   undefined4 DAT_01e42830
;   undefined4 DAT_01e42834
;   undefined4 DAT_01e42838
;   ... and 13 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f18c0
        ;   Label: core_path.cpp_CPathMap_renderPathMap_FUN_004f18c0
    PUSH ESI                            ; 004f18c1
    PUSH EDI                            ; 004f18c2
    PUSH EBP                            ; 004f18c3
    MOV EBP,ESP                         ; 004f18c4
    SUB ESP,0x60                        ; 004f18c6
    AND ESP,0xfffffff8                  ; 004f18c9
    MOV EDX,dword ptr [0x005ae704]      ; 004f18cc | DAT_005ae704
    PUSH EDX                            ; 004f18d2 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004f18d3
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004f18d8
    TEST EAX,EAX                        ; 004f18db
    JZ 0x004f18e6                       ; 004f18dd
        ;   XREF to: 004f18e6 (CONDITIONAL_JUMP)  ; LAB_004f18e6
    MOV ESP,EBP                         ; 004f18df
    POP EBP                             ; 004f18e1
    POP EDI                             ; 004f18e2
    POP ESI                             ; 004f18e3
    POP EBX                             ; 004f18e4
    RET                                 ; 004f18e5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f18e6
        ;   Label: LAB_004f18e6
    FILD dword ptr [EAX + 0x24]         ; 004f18e9
    FMUL float ptr [0x01fba96c]         ; 004f18ec | g_CDemonRaytrace_01fba938.adjusted_size.x
    XOR ECX,ECX                         ; 004f18f2
    FADD float ptr [0x01fba948]         ; 004f18f4 | g_CDemonRaytrace_01fba938.bbox_min.x
    MOV dword ptr [ESP + 0x10],ECX      ; 004f18fa
    FSTP float ptr [ESP + 0xc]          ; 004f18fe
    FILD dword ptr [EAX + 0x2c]         ; 004f1902
    FMUL float ptr [0x01fba974]         ; 004f1905 | g_CDemonRaytrace_01fba938.adjusted_size.z
    LEA EAX,[ESP + 0xc]                 ; 004f190b
    MOV EBX,dword ptr [0x005ae704]      ; 004f190f | DAT_005ae704
    PUSH EAX                            ; 004f1915
    FADD float ptr [0x01fba950]         ; 004f1916 | g_CDemonRaytrace_01fba938.bbox_min.z
    PUSH EBX                            ; 004f191c | DAT_01b4d738
    FSTP float ptr [ESP + 0x1c]         ; 004f191d
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004f1921
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004f1926
    PUSH 0x5be090                       ; 004f1929 | DAT_005be090
    MOV ESI,dword ptr [0x005ae704]      ; 004f192e | DAT_005ae704
    PUSH ESI                            ; 004f1934 | DAT_01b4d738
    MOV EDI,0x4                         ; 004f1935
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004f193a
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EDX,0x1                         ; 004f193f
    MOV ESI,0x2                         ; 004f1944
    ADD ESP,0x8                         ; 004f1949
    MOV dword ptr [0x01e42814],EDI      ; 004f194c | DAT_01e42814
    XOR EAX,EAX                         ; 004f1952
    MOV EDI,0x800000                    ; 004f1954
    MOV [0x01e42818],EAX                ; 004f1959 | DAT_01e42818
    MOV [0x01e4281c],EAX                ; 004f195e | DAT_01e4281c
    MOV [0x01e42820],EAX                ; 004f1963 | DAT_01e42820
    MOV [0x01e42824],EAX                ; 004f1968 | DAT_01e42824
    MOV [0x01e42828],EAX                ; 004f196d | DAT_01e42828
    MOV dword ptr [0x01e42834],EDX      ; 004f1972 | DAT_01e42834
    MOV dword ptr [0x01e42840],ESI      ; 004f1978 | DAT_01e42840
    PUSH EAX                            ; 004f197e
    MOV EDX,0x3                         ; 004f197f
    MOV ESI,dword ptr [0x005ae704]      ; 004f1984 | DAT_005ae704
    MOV dword ptr [0x01e4282c],EDI      ; 004f198a | DAT_01e4282c
    MOV dword ptr [0x01e42830],EDI      ; 004f1990 | DAT_01e42830
    MOV dword ptr [0x01e42838],EDI      ; 004f1996 | DAT_01e42838
    MOV dword ptr [0x01e4283c],EDI      ; 004f199c | DAT_01e4283c
    MOV dword ptr [0x01e42844],EDI      ; 004f19a2 | DAT_01e42844
    MOV dword ptr [0x01e42848],EDI      ; 004f19a8 | DAT_01e42848
    MOV dword ptr [0x01e42850],EDI      ; 004f19ae | DAT_01e42850
    PUSH ESI                            ; 004f19b4 | DAT_01b4d738
    MOV dword ptr [0x01e42854],EDI      ; 004f19b5 | DAT_01e42854
    MOV dword ptr [0x01e4284c],EDX      ; 004f19bb | DAT_01e4284c
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0 ; 004f19c1
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004f19c6
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f19c9
    SHL EAX,0x8                         ; 004f19cc
    MOV dword ptr [ESP + 0x50],EAX      ; 004f19cf
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004f19d3
    SHL EAX,0x8                         ; 004f19d6
    MOV dword ptr [ESP + 0x48],EAX      ; 004f19d9
    MOV EAX,dword ptr [EBP + 0x20]      ; 004f19dd
    SHL EAX,0x8                         ; 004f19e0
    XOR EDI,EDI                         ; 004f19e3
    MOV dword ptr [ESP + 0x4c],EAX      ; 004f19e5
    MOV EAX,dword ptr [EBP + 0x24]      ; 004f19e9
    MOV dword ptr [ESP + 0x18],EDI      ; 004f19ec
    SHL EAX,0x8                         ; 004f19f0
    MOV dword ptr [ESP + 0x44],EDI      ; 004f19f3
    MOV dword ptr [ESP + 0x54],EAX      ; 004f19f7
    MOV EAX,dword ptr [ESP + 0x44]      ; 004f19fb
        ;   Label: LAB_004f19fb
    MOV ECX,dword ptr [EBP + 0x14]      ; 004f19ff
    XOR EDX,EDX                         ; 004f1a02
    ADD EAX,ECX                         ; 004f1a04
    MOV dword ptr [ESP + 0x20],EDX      ; 004f1a06
    MOV dword ptr [ESP + 0x58],EAX      ; 004f1a0a
    MOV EAX,dword ptr [ESP + 0x58]      ; 004f1a0e
        ;   Label: LAB_004f1a0e
    MOV EBX,dword ptr [EAX + 0x9c70]    ; 004f1a12
    CMP EBX,0xfffffc19                  ; 004f1a18
    JGE 0x004f1a6d                      ; 004f1a1e
        ;   XREF to: 004f1a6d (CONDITIONAL_JUMP)  ; LAB_004f1a6d
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f1a20
        ;   Label: LAB_004f1a20
    MOV EDI,dword ptr [ESP + 0x58]      ; 004f1a24
    INC EAX                             ; 004f1a28
    ADD EDI,0x190                       ; 004f1a29
    MOV dword ptr [ESP + 0x20],EAX      ; 004f1a2f
    MOV dword ptr [ESP + 0x58],EDI      ; 004f1a33
    CMP EAX,0x64                        ; 004f1a37
    JL 0x004f1a0e                       ; 004f1a3a
        ;   XREF to: 004f1a0e (CONDITIONAL_JUMP)  ; LAB_004f1a0e
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f1a3c
    MOV ECX,dword ptr [ESP + 0x44]      ; 004f1a40
    INC EBX                             ; 004f1a44
    ADD ECX,0x4                         ; 004f1a45
    MOV dword ptr [ESP + 0x18],EBX      ; 004f1a48
    MOV dword ptr [ESP + 0x44],ECX      ; 004f1a4c
    CMP EBX,0x64                        ; 004f1a50
    JL 0x004f19fb                       ; 004f1a53
        ;   XREF to: 004f19fb (CONDITIONAL_JUMP)  ; LAB_004f19fb
    PUSH 0x1                            ; 004f1a55
    MOV EDI,dword ptr [0x005ae704]      ; 004f1a57 | DAT_005ae704
    PUSH EDI                            ; 004f1a5d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0 ; 004f1a5e
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004f1a63
    MOV ESP,EBP                         ; 004f1a66
    POP EBP                             ; 004f1a68
    POP EDI                             ; 004f1a69
    POP ESI                             ; 004f1a6a
    POP EBX                             ; 004f1a6b
    RET                                 ; 004f1a6c
    CMP EBX,0x3e7                       ; 004f1a6d
        ;   Label: LAB_004f1a6d
    JG 0x004f1a20                       ; 004f1a73
        ;   XREF to: 004f1a20 (CONDITIONAL_JUMP)  ; LAB_004f1a20
    FLD float ptr [0x0058ce2f]          ; 004f1a75 | DAT_0058ce2f
    FLD float ptr [0x01fba96c]          ; 004f1a7b | g_CDemonRaytrace_01fba938.adjusted_size.x
    FMUL ST1                            ; 004f1a81
    FLD float ptr [0x01fba970]          ; 004f1a83 | g_CDemonRaytrace_01fba938.adjusted_size.y
    FMUL ST2                            ; 004f1a89
    FLD float ptr [0x01fba974]          ; 004f1a8b | g_CDemonRaytrace_01fba938.adjusted_size.z
    FMULP ST3                           ; 004f1a91
    FLD float ptr [0x01fba94c]          ; 004f1a93 | g_CDemonRaytrace_01fba938.bbox_min.y
    LEA EDI,[ESP + 0x24]                ; 004f1a99
    MOV EAX,dword ptr [EAX + 0x30]      ; 004f1a9d
    LEA ESI,[ESP + 0x18]                ; 004f1aa0
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f1aa4
    FLD double ptr [0x0058ce37]         ; 004f1aa8 | DAT_0058ce37
    FXCH                                ; 004f1aae
    FMUL ST1                            ; 004f1ab0
    MOVSD ES:EDI,ESI                    ; 004f1ab2
    MOVSD ES:EDI,ESI                    ; 004f1ab3
    MOVSD ES:EDI,ESI                    ; 004f1ab4
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f1ab5
    MOV dword ptr [ESP + 0x5c],EAX      ; 004f1ab9
    FXCH ST3                            ; 004f1abd
    FSTP float ptr [ESP + 0x30]         ; 004f1abf
    FILD dword ptr [ESP + 0x5c]         ; 004f1ac3
    MOV EAX,dword ptr [ESP + 0x28]      ; 004f1ac7
    FMUL float ptr [ESP + 0x30]         ; 004f1acb
    MOV dword ptr [ESP + 0x5c],EAX      ; 004f1acf
    FXCH ST2                            ; 004f1ad3
    FSTP float ptr [ESP + 0x34]         ; 004f1ad5
    FILD dword ptr [ESP + 0x5c]         ; 004f1ad9
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004f1add
    FMUL float ptr [ESP + 0x34]         ; 004f1ae1
    MOV dword ptr [ESP + 0x5c],EAX      ; 004f1ae5
    FXCH ST4                            ; 004f1ae9
    FSTP float ptr [ESP + 0x38]         ; 004f1aeb
    FILD dword ptr [ESP + 0x5c]         ; 004f1aef
    FMUL float ptr [ESP + 0x38]         ; 004f1af3
    MOV EDX,dword ptr [0x005ae704]      ; 004f1af7 | DAT_005ae704
    FXCH ST2                            ; 004f1afd
    CALL crt_math.c_round_FUN_00563a30  ; 004f1aff
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP]               ; 004f1b04
    MOV EAX,ESP                         ; 004f1b07
    FXCH ST2                            ; 004f1b09
    FADDP ST3,ST0                       ; 004f1b0b
    PUSH EAX                            ; 004f1b0d
    CALL crt_math.c_round_FUN_00563a30  ; 004f1b0e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 004f1b13
    FADDP                               ; 004f1b15
    FXCH                                ; 004f1b17
    FISTP dword ptr [ESP + 0xc]         ; 004f1b19
    CALL crt_math.c_round_FUN_00563a30  ; 004f1b1d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x8]         ; 004f1b22
    MOV EAX,dword ptr [EDX]             ; 004f1b26 | DAT_01b4d738
    PUSH EAX                            ; 004f1b28
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004f1b29
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004f1b2e
    MOV EAX,dword ptr [ESP]             ; 004f1b31
    MOV dword ptr [ESP + 0x5c],EAX      ; 004f1b34
    MOV EDX,dword ptr [0x005ae704]      ; 004f1b38 | DAT_005ae704
    FILD dword ptr [ESP + 0x5c]         ; 004f1b3e
    MOV EAX,ESP                         ; 004f1b42
    FLD ST0                             ; 004f1b44
    FADD float ptr [ESP + 0x30]         ; 004f1b46
    PUSH EAX                            ; 004f1b4a
    FSTP ST1                            ; 004f1b4b
    CALL crt_math.c_round_FUN_00563a30  ; 004f1b4d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x4]         ; 004f1b52
    MOV EAX,dword ptr [EDX]             ; 004f1b56 | DAT_01b4d738
    ADD EAX,0x30                        ; 004f1b58
    PUSH EAX                            ; 004f1b5b
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004f1b5c
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004f1b61
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f1b64
    MOV dword ptr [ESP + 0x5c],EAX      ; 004f1b68
    MOV EDX,dword ptr [0x005ae704]      ; 004f1b6c | DAT_005ae704
    FILD dword ptr [ESP + 0x5c]         ; 004f1b72
    MOV EAX,ESP                         ; 004f1b76
    FLD ST0                             ; 004f1b78
    FADD float ptr [ESP + 0x38]         ; 004f1b7a
    PUSH EAX                            ; 004f1b7e
    FSTP ST1                            ; 004f1b7f
    CALL crt_math.c_round_FUN_00563a30  ; 004f1b81
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0xc]         ; 004f1b86
    MOV EAX,dword ptr [EDX]             ; 004f1b8a | DAT_01b4d738
    ADD EAX,0x60                        ; 004f1b8c
    PUSH EAX                            ; 004f1b8f
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004f1b90
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004f1b95
    MOV EAX,dword ptr [ESP]             ; 004f1b98
    MOV dword ptr [ESP + 0x5c],EAX      ; 004f1b9b
    MOV EDX,ESP                         ; 004f1b9f
    FILD dword ptr [ESP + 0x5c]         ; 004f1ba1
    FLD ST0                             ; 004f1ba5
    FSUB float ptr [ESP + 0x30]         ; 004f1ba7
    MOV EAX,[0x005ae704]                ; 004f1bab | DAT_005ae704
    FSTP ST1                            ; 004f1bb0
    CALL crt_math.c_round_FUN_00563a30  ; 004f1bb2
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP]               ; 004f1bb7
    MOV EAX,dword ptr [EAX]             ; 004f1bba
    PUSH EDX                            ; 004f1bbc
    ADD EAX,0x90                        ; 004f1bbd
    PUSH EAX                            ; 004f1bc2
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004f1bc3
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004f1bc8
    MOV EAX,[0x005ae704]                ; 004f1bcb | DAT_005ae704
    MOV EDX,dword ptr [EAX]             ; 004f1bd0 | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x50]      ; 004f1bd2
    MOV dword ptr [EDX + 0x20],ECX      ; 004f1bd6
    MOV EDX,dword ptr [EAX]             ; 004f1bd9 | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x48]      ; 004f1bdb
    MOV dword ptr [EDX + 0x24],ECX      ; 004f1bdf
    MOV EDX,dword ptr [EAX]             ; 004f1be2 | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004f1be4
    MOV dword ptr [EDX + 0x28],ECX      ; 004f1be8
    MOV EDX,dword ptr [EAX]             ; 004f1beb | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x54]      ; 004f1bed
    MOV dword ptr [EDX + 0x2c],ECX      ; 004f1bf1
    MOV EDX,dword ptr [EAX]             ; 004f1bf4 | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x50]      ; 004f1bf6
    MOV dword ptr [EDX + 0x50],ECX      ; 004f1bfa
    MOV EDX,dword ptr [EAX]             ; 004f1bfd | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x48]      ; 004f1bff
    MOV dword ptr [EDX + 0x54],ECX      ; 004f1c03
    MOV EDX,dword ptr [EAX]             ; 004f1c06 | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004f1c08
    MOV dword ptr [EDX + 0x58],ECX      ; 004f1c0c
    MOV EDX,dword ptr [EAX]             ; 004f1c0f | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x54]      ; 004f1c11
    MOV dword ptr [EDX + 0x5c],ECX      ; 004f1c15
    MOV EDX,dword ptr [EAX]             ; 004f1c18 | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x50]      ; 004f1c1a
    MOV dword ptr [EDX + 0x80],ECX      ; 004f1c1e
    MOV EDX,dword ptr [EAX]             ; 004f1c24 | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x48]      ; 004f1c26
    MOV dword ptr [EDX + 0x84],ECX      ; 004f1c2a
    MOV EDX,dword ptr [EAX]             ; 004f1c30 | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004f1c32
    MOV dword ptr [EDX + 0x88],ECX      ; 004f1c36
    MOV EDX,dword ptr [EAX]             ; 004f1c3c | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x54]      ; 004f1c3e
    MOV dword ptr [EDX + 0x8c],ECX      ; 004f1c42
    MOV EDX,dword ptr [EAX]             ; 004f1c48 | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x50]      ; 004f1c4a
    MOV dword ptr [EDX + 0xb0],ECX      ; 004f1c4e
    MOV EDX,dword ptr [EAX]             ; 004f1c54 | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x48]      ; 004f1c56
    MOV dword ptr [EDX + 0xb4],ECX      ; 004f1c5a
    MOV EDX,dword ptr [EAX]             ; 004f1c60 | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004f1c62
    MOV dword ptr [EDX + 0xb8],ECX      ; 004f1c66
    PUSH 0x1e42810                      ; 004f1c6c
    MOV EDX,dword ptr [EAX]             ; 004f1c71 | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x58]      ; 004f1c73
    PUSH EAX                            ; 004f1c77 | DAT_01b4d738
    MOV dword ptr [EDX + 0xbc],ECX      ; 004f1c78
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150 ; 004f1c7e
        ;   XREF to: 00460150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 004f1c83
    JMP 0x004f1a20                      ; 004f1c86
        ;   XREF to: 004f1a20 (UNCONDITIONAL_JUMP)  ; LAB_004f1a20


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50(CLodMesh * this_ptr, double max_search_radius)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   max_search_radius
; Local Variables:
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
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
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910 at 00518f21
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_00637a5d
;   TerminatedCString s_Too_many_sample_points_00637a72
;   float FLOAT_00637a8d = 0.5
;   double DOUBLE_00637a95 = 0.5
;   double DOUBLE_00637a9d = 16
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_SamplePointCount
;   CVector3f[400] g_SamplePointArray
;   undefined4 g_SamplePointArray[0].y
;   undefined4 g_SamplePointArray[0].z
;   undefined4 DAT_02f313fc
;   undefined4 DAT_02f31400
;   double[400] g_SampleDistances
;   undefined4 DAT_02f326b0+4
;   ... and 3 more
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519b50
        ;   Label: shape_meshlod.cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50
    PUSH ESI                            ; 00519b51
    PUSH EDI                            ; 00519b52
    PUSH EBP                            ; 00519b53
    MOV EBP,ESP                         ; 00519b54
    SUB ESP,0x7c                        ; 00519b56
    AND ESP,0xfffffff8                  ; 00519b59
    CMP dword ptr [0x02f313ec],0x190    ; 00519b5c | int g_SamplePointCount
    JG 0x00519fa4                       ; 00519b66 | LAB_00519fa4
        ;   XREF to: 00519fa4 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00519b6c
        ;   Label: LAB_00519b6c
    CMP EAX,0x2f313f0                   ; 00519b6e | CVector3f[400] g_SamplePointArray
    JZ 0x00519b8f                       ; 00519b73 | LAB_00519b8f
        ;   XREF to: 00519b8f (CONDITIONAL_JUMP)
    MOV EAX,[0x02f313f0]                ; 00519b75 | CVector3f[400] g_SamplePointArray
    MOV dword ptr [ESP],EAX             ; 00519b7a
    MOV EAX,[0x02f313f4]                ; 00519b7d | g_SamplePointArray[0].y
    MOV dword ptr [ESP + 0x4],EAX       ; 00519b82
    MOV EAX,[0x02f313f8]                ; 00519b86 | g_SamplePointArray[0].z
    MOV dword ptr [ESP + 0x8],EAX       ; 00519b8b
    LEA EAX,[ESP + 0xc]                 ; 00519b8f
        ;   Label: LAB_00519b8f
    CMP EAX,0x2f313f0                   ; 00519b93 | CVector3f[400] g_SamplePointArray
    JZ 0x00519bb5                       ; 00519b98 | LAB_00519bb5
        ;   XREF to: 00519bb5 (CONDITIONAL_JUMP)
    MOV EAX,[0x02f313f0]                ; 00519b9a | CVector3f[400] g_SamplePointArray
    MOV dword ptr [ESP + 0xc],EAX       ; 00519b9f
    MOV EAX,[0x02f313f4]                ; 00519ba3 | g_SamplePointArray[0].y
    MOV dword ptr [ESP + 0x10],EAX      ; 00519ba8
    MOV EAX,[0x02f313f8]                ; 00519bac | g_SamplePointArray[0].z
    MOV dword ptr [ESP + 0x14],EAX      ; 00519bb1
    MOV ESI,dword ptr [0x02f313ec]      ; 00519bb5 | int g_SamplePointCount
        ;   Label: LAB_00519bb5
    XOR EDI,EDI                         ; 00519bbb
    TEST ESI,ESI                        ; 00519bbd
    JLE 0x00519c00                      ; 00519bbf | LAB_00519c00
        ;   XREF to: 00519c00 (CONDITIONAL_JUMP)
    MOV ESI,0x2f313f0                   ; 00519bc1 | CVector3f[400] g_SamplePointArray
    XOR EBX,EBX                         ; 00519bc6
    MOV EDX,0x3ff00000                  ; 00519bc8
        ;   Label: LAB_00519bc8
    ADD EBX,0x8                         ; 00519bcd
    XOR EAX,EAX                         ; 00519bd0
    PUSH ESI                            ; 00519bd2 | CVector3f[400] g_SamplePointArray
    MOV dword ptr [EBX + 0x2f326a8],EAX ; 00519bd3 | double[400] g_SampleDistances
    LEA EAX,[ESP + 0x4]                 ; 00519bd9
    INC EDI                             ; 00519bdd
    PUSH EAX                            ; 00519bde
    ADD ESI,0xc                         ; 00519bdf
    MOV dword ptr [EBX + 0x2f326ac],EDX ; 00519be2 | DAT_02f326b0+4
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 00519be8 | void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x02f313ec]      ; 00519bed | int g_SamplePointCount
    ADD ESP,0x8                         ; 00519bf3
    CMP EDI,ECX                         ; 00519bf6
    JL 0x00519bc8                       ; 00519bf8 | LAB_00519bc8
        ;   XREF to: 00519bc8 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00519bfa
    FLD float ptr [ESP]                 ; 00519c00
        ;   Label: LAB_00519c00
    FADD float ptr [ESP + 0xc]          ; 00519c03
    FST float ptr [ESP + 0x3c]          ; 00519c07
    FLD float ptr [0x00637a8d]          ; 00519c0b | float FLOAT_00637a8d
    FXCH                                ; 00519c11
    FMUL ST1                            ; 00519c13
    FLD float ptr [ESP + 0x8]           ; 00519c15
    FLD float ptr [ESP + 0x4]           ; 00519c19
    FADD float ptr [ESP + 0x10]         ; 00519c1d
    FXCH                                ; 00519c21
    FADD float ptr [ESP + 0x14]         ; 00519c23
    FXCH                                ; 00519c27
    FST float ptr [ESP + 0x40]          ; 00519c29
    FMUL ST3                            ; 00519c2d
    FXCH                                ; 00519c2f
    FST float ptr [ESP + 0x44]          ; 00519c31
    FMULP ST3                           ; 00519c35
    FXCH                                ; 00519c37
    FSTP float ptr [ESP + 0x18]         ; 00519c39
    FST float ptr [ESP + 0x1c]          ; 00519c3d
    FLD double ptr [0x00637a95]         ; 00519c41 | double DOUBLE_00637a95
    FLD float ptr [ESP + 0x18]          ; 00519c47
    FADD ST0,ST1                        ; 00519c4b
    FXCH ST2                            ; 00519c4d
    FADD ST0,ST1                        ; 00519c4f
    FXCH ST2                            ; 00519c51
    FLD double ptr [0x00637a9d]         ; 00519c53 | double DOUBLE_00637a9d
    FXCH                                ; 00519c59
    FMUL ST1                            ; 00519c5b
    FXCH ST3                            ; 00519c5d
    FMUL ST1                            ; 00519c5f
    MOV EBX,dword ptr [0x02f33334]      ; 00519c61 | int g_LodGenerationStamp
    FXCH ST4                            ; 00519c67
    FST float ptr [ESP + 0x20]          ; 00519c69
    FADDP ST2,ST0                       ; 00519c6d
    INC EBX                             ; 00519c6f
    FMULP                               ; 00519c70
    MOV dword ptr [0x02f33334],EBX      ; 00519c72 | int g_LodGenerationStamp
    FXCH                                ; 00519c78
    CALL crt_math.c_round_FUN_005fe6b0  ; 00519c7a | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST2                            ; 00519c7f
    CALL crt_math.c_round_FUN_005fe6b0  ; 00519c81 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH                                ; 00519c86
    CALL crt_math.c_round_FUN_005fe6b0  ; 00519c88 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST2                            ; 00519c8d
    FISTP dword ptr [ESP + 0x5c]        ; 00519c8f
    FISTP dword ptr [ESP + 0x58]        ; 00519c93
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00519c97
    FISTP dword ptr [ESP + 0x60]        ; 00519c9b
    TEST ESI,ESI                        ; 00519c9f
    JL 0x00519cac                       ; 00519ca1 | LAB_00519cac
        ;   XREF to: 00519cac (CONDITIONAL_JUMP)
    CMP ESI,0x10                        ; 00519ca3
    JL 0x00519fcc                       ; 00519ca6 | LAB_00519fcc
        ;   XREF to: 00519fcc (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x64],0x1      ; 00519cac
        ;   Label: LAB_00519cac
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00519cb4
        ;   Label: LAB_00519cb4
    SUB EAX,dword ptr [ESP + 0x64]      ; 00519cb8
    TEST EAX,EAX                        ; 00519cbc
    JL 0x0051a00a                       ; 00519cbe | LAB_0051a00a
        ;   XREF to: 0051a00a (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00519cc4
        ;   Label: LAB_00519cc4
    MOV ESI,dword ptr [ESP + 0x64]      ; 00519cc8
    ADD EBX,ESI                         ; 00519ccc
    MOV dword ptr [ESP + 0x68],EBX      ; 00519cce
    CMP EBX,0x10                        ; 00519cd2
    JL 0x00519cdf                       ; 00519cd5 | LAB_00519cdf
        ;   XREF to: 00519cdf (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x68],0xf      ; 00519cd7
    MOV EBX,dword ptr [ESP + 0x58]      ; 00519cdf
        ;   Label: LAB_00519cdf
    MOV ECX,dword ptr [ESP + 0x64]      ; 00519ce3
    SUB EBX,ECX                         ; 00519ce7
    MOV dword ptr [ESP + 0x6c],EBX      ; 00519ce9
    TEST EBX,EBX                        ; 00519ced
    JL 0x0051a011                       ; 00519cef | LAB_0051a011
        ;   XREF to: 0051a011 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x58]      ; 00519cf5
        ;   Label: LAB_00519cf5
    MOV EDI,dword ptr [ESP + 0x64]      ; 00519cf9
    ADD EBX,EDI                         ; 00519cfd
    MOV dword ptr [ESP + 0x70],EBX      ; 00519cff
    CMP EBX,0x10                        ; 00519d03
    JL 0x00519d10                       ; 00519d06 | LAB_00519d10
        ;   XREF to: 00519d10 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x70],0xf      ; 00519d08
    MOV EBX,dword ptr [ESP + 0x60]      ; 00519d10
        ;   Label: LAB_00519d10
    MOV ESI,dword ptr [ESP + 0x64]      ; 00519d14
    SUB EBX,ESI                         ; 00519d18
    MOV dword ptr [ESP + 0x74],EBX      ; 00519d1a
    TEST EBX,EBX                        ; 00519d1e
    JL 0x0051a01c                       ; 00519d20 | LAB_0051a01c
        ;   XREF to: 0051a01c (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x60]      ; 00519d26
        ;   Label: LAB_00519d26
    ADD EDI,dword ptr [ESP + 0x64]      ; 00519d2a
    CMP EDI,0x10                        ; 00519d2e
    JL 0x00519d38                       ; 00519d31 | LAB_00519d38
        ;   XREF to: 00519d38 (CONDITIONAL_JUMP)
    MOV EDI,0xf                         ; 00519d33
    MOV EBX,dword ptr [ESP + 0x68]      ; 00519d38
        ;   Label: LAB_00519d38
    MOV dword ptr [ESP + 0x78],EAX      ; 00519d3c
    CMP EAX,EBX                         ; 00519d40
    JG 0x00519d8d                       ; 00519d42 | LAB_00519d8d
        ;   XREF to: 00519d8d (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x70]      ; 00519d44
        ;   Label: LAB_00519d44
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00519d48
    CMP ESI,EBX                         ; 00519d4c
    JG 0x00519d7c                       ; 00519d4e | LAB_00519d7c
        ;   XREF to: 00519d7c (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x74]      ; 00519d50
        ;   Label: LAB_00519d50
    CMP EDI,EBX                         ; 00519d54
    JL 0x00519d73                       ; 00519d56 | LAB_00519d73
        ;   XREF to: 00519d73 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00519d58
        ;   Label: LAB_00519d58
    PUSH ESI                            ; 00519d59
    MOV ECX,dword ptr [ESP + 0x80]      ; 00519d5a
    PUSH ECX                            ; 00519d61
    MOV EAX,dword ptr [EBP + 0x14]      ; 00519d62
    PUSH EAX                            ; 00519d65
    INC EBX                             ; 00519d66
    CALL shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030 ; 00519d67 | void shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030(CLodMesh * this_ptr, int grid_x, int grid_y, int grid_z)
        ;   XREF to: 0051a030 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00519d6c
    CMP EBX,EDI                         ; 00519d6f
    JLE 0x00519d58                      ; 00519d71 | LAB_00519d58
        ;   XREF to: 00519d58 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x70]      ; 00519d73
        ;   Label: LAB_00519d73
    INC ESI                             ; 00519d77
    CMP ESI,EAX                         ; 00519d78
    JLE 0x00519d50                      ; 00519d7a | LAB_00519d50
        ;   XREF to: 00519d50 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x78]      ; 00519d7c
        ;   Label: LAB_00519d7c
    INC ESI                             ; 00519d80
    MOV EDX,dword ptr [ESP + 0x68]      ; 00519d81
    MOV dword ptr [ESP + 0x78],ESI      ; 00519d85
    CMP ESI,EDX                         ; 00519d89
    JLE 0x00519d44                      ; 00519d8b | LAB_00519d44
        ;   XREF to: 00519d44 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 00519d8d
        ;   Label: LAB_00519d8d
    CMP EAX,0x2f313f0                   ; 00519d8f | CVector3f[400] g_SamplePointArray
    JZ 0x00519db0                       ; 00519d94 | LAB_00519db0
        ;   XREF to: 00519db0 (CONDITIONAL_JUMP)
    MOV EAX,[0x02f313f0]                ; 00519d96 | CVector3f[400] g_SamplePointArray
    MOV dword ptr [ESP],EAX             ; 00519d9b
    MOV EAX,[0x02f313f4]                ; 00519d9e | g_SamplePointArray[0].y
    MOV dword ptr [ESP + 0x4],EAX       ; 00519da3
    MOV EAX,[0x02f313f8]                ; 00519da7 | g_SamplePointArray[0].z
    MOV dword ptr [ESP + 0x8],EAX       ; 00519dac
    LEA EAX,[ESP + 0xc]                 ; 00519db0
        ;   Label: LAB_00519db0
    CMP EAX,0x2f313f0                   ; 00519db4 | CVector3f[400] g_SamplePointArray
    JZ 0x00519dd6                       ; 00519db9 | LAB_00519dd6
        ;   XREF to: 00519dd6 (CONDITIONAL_JUMP)
    MOV EAX,[0x02f313f0]                ; 00519dbb | CVector3f[400] g_SamplePointArray
    MOV dword ptr [ESP + 0xc],EAX       ; 00519dc0
    MOV EAX,[0x02f313f4]                ; 00519dc4 | g_SamplePointArray[0].y
    MOV dword ptr [ESP + 0x10],EAX      ; 00519dc9
    MOV EAX,[0x02f313f8]                ; 00519dcd | g_SamplePointArray[0].z
    MOV dword ptr [ESP + 0x14],EAX      ; 00519dd2
    MOV ECX,dword ptr [0x02f313ec]      ; 00519dd6 | int g_SamplePointCount
        ;   Label: LAB_00519dd6
    XOR EDI,EDI                         ; 00519ddc
    TEST ECX,ECX                        ; 00519dde
    JLE 0x00519e7f                      ; 00519de0 | LAB_00519e7f
        ;   XREF to: 00519e7f (CONDITIONAL_JUMP)
    MOV EBX,0x2f313f0                   ; 00519de6 | CVector3f[400] g_SamplePointArray
    XOR ESI,ESI                         ; 00519deb
    FLD double ptr [ESI + 0x2f326b0]    ; 00519ded | double[400] g_SampleDistances
        ;   Label: LAB_00519ded
    FSQRT                               ; 00519df3
    ADD EBX,0xc                         ; 00519df5 | DAT_02f313fc
    FSTP float ptr [ESP + 0x2c]         ; 00519df8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00519dfc
    ADD ESI,0x8                         ; 00519e00
    MOV dword ptr [ESP + 0x28],EAX      ; 00519e03
    MOV dword ptr [ESP + 0x24],EAX      ; 00519e07
    INC EDI                             ; 00519e0b
    FLD float ptr [EBX + -0xc]          ; 00519e0c | CVector3f[400] g_SamplePointArray
    LEA EAX,[ESP + 0x48]                ; 00519e0f
    FSUB float ptr [ESP + 0x2c]         ; 00519e13
    PUSH EAX                            ; 00519e17
    FSTP float ptr [ESP + 0x4c]         ; 00519e18
    FLD float ptr [EBX + -0x8]          ; 00519e1c | g_SamplePointArray[0].y
    FSUB float ptr [ESP + 0x30]         ; 00519e1f
    LEA EAX,[ESP + 0x4]                 ; 00519e23
    FSTP float ptr [ESP + 0x50]         ; 00519e27
    FLD float ptr [EBX + -0x4]          ; 00519e2b | g_SamplePointArray[0].z
    FSUB float ptr [ESP + 0x30]         ; 00519e2e
    PUSH EAX                            ; 00519e32
    FSTP float ptr [ESP + 0x58]         ; 00519e33
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 00519e37 | void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)
    FLD float ptr [EBX + -0xc]          ; 00519e3c | CVector3f[400] g_SamplePointArray
    ADD ESP,0x8                         ; 00519e3f
    LEA EAX,[ESP + 0x30]                ; 00519e42
    FADD float ptr [ESP + 0x24]         ; 00519e46
    PUSH EAX                            ; 00519e4a
    FSTP float ptr [ESP + 0x34]         ; 00519e4b
    FLD float ptr [EBX + -0x8]          ; 00519e4f | g_SamplePointArray[0].y
    FADD float ptr [ESP + 0x2c]         ; 00519e52
    LEA EAX,[ESP + 0x4]                 ; 00519e56
    FSTP float ptr [ESP + 0x38]         ; 00519e5a
    FLD float ptr [EBX + -0x4]          ; 00519e5e | g_SamplePointArray[0].z
    FADD float ptr [ESP + 0x30]         ; 00519e61
    PUSH EAX                            ; 00519e65
    FSTP float ptr [ESP + 0x40]         ; 00519e66
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 00519e6a | void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02f313ec]                ; 00519e6f | int g_SamplePointCount
    ADD ESP,0x8                         ; 00519e74
    CMP EDI,EAX                         ; 00519e77
    JL 0x00519ded                       ; 00519e79 | LAB_00519ded
        ;   XREF to: 00519ded (CONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 00519e7f
        ;   Label: LAB_00519e7f
    FADD double ptr [0x00637a95]        ; 00519e82 | double DOUBLE_00637a95
    FMUL double ptr [0x00637a9d]        ; 00519e88 | double DOUBLE_00637a9d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00519e8e
    CALL crt_math.c_round_FUN_005fe6b0  ; 00519e92 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x54]        ; 00519e97
    SUB EAX,dword ptr [ESP + 0x54]      ; 00519e9b
    MOV EBX,0xffffffff                  ; 00519e9f
    CDQ                                 ; 00519ea4
    XOR EAX,EDX                         ; 00519ea5
    SUB EAX,EDX                         ; 00519ea7
    CMP EAX,EBX                         ; 00519ea9
    JLE 0x00519eaf                      ; 00519eab | LAB_00519eaf
        ;   XREF to: 00519eaf (CONDITIONAL_JUMP)
    MOV EBX,EAX                         ; 00519ead
    FLD float ptr [ESP + 0x4]           ; 00519eaf
        ;   Label: LAB_00519eaf
    FADD double ptr [0x00637a95]        ; 00519eb3 | double DOUBLE_00637a95
    FMUL double ptr [0x00637a9d]        ; 00519eb9 | double DOUBLE_00637a9d
    MOV EAX,dword ptr [ESP + 0x58]      ; 00519ebf
    CALL crt_math.c_round_FUN_005fe6b0  ; 00519ec3 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x54]        ; 00519ec8
    SUB EAX,dword ptr [ESP + 0x54]      ; 00519ecc
    CDQ                                 ; 00519ed0
    XOR EAX,EDX                         ; 00519ed1
    SUB EAX,EDX                         ; 00519ed3
    CMP EAX,EBX                         ; 00519ed5
    JLE 0x00519edb                      ; 00519ed7 | LAB_00519edb
        ;   XREF to: 00519edb (CONDITIONAL_JUMP)
    MOV EBX,EAX                         ; 00519ed9
    FLD float ptr [ESP + 0x8]           ; 00519edb
        ;   Label: LAB_00519edb
    FADD double ptr [0x00637a95]        ; 00519edf | double DOUBLE_00637a95
    FMUL double ptr [0x00637a9d]        ; 00519ee5 | double DOUBLE_00637a9d
    MOV EAX,dword ptr [ESP + 0x60]      ; 00519eeb
    CALL crt_math.c_round_FUN_005fe6b0  ; 00519eef | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x54]        ; 00519ef4
    SUB EAX,dword ptr [ESP + 0x54]      ; 00519ef8
    CDQ                                 ; 00519efc
    XOR EAX,EDX                         ; 00519efd
    SUB EAX,EDX                         ; 00519eff
    CMP EAX,EBX                         ; 00519f01
    JLE 0x00519f07                      ; 00519f03 | LAB_00519f07
        ;   XREF to: 00519f07 (CONDITIONAL_JUMP)
    MOV EBX,EAX                         ; 00519f05
    FLD float ptr [ESP + 0xc]           ; 00519f07
        ;   Label: LAB_00519f07
    FADD double ptr [0x00637a95]        ; 00519f0b | double DOUBLE_00637a95
    FMUL double ptr [0x00637a9d]        ; 00519f11 | double DOUBLE_00637a9d
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00519f17
    CALL crt_math.c_round_FUN_005fe6b0  ; 00519f1b | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x54]        ; 00519f20
    SUB EAX,dword ptr [ESP + 0x54]      ; 00519f24
    CDQ                                 ; 00519f28
    XOR EAX,EDX                         ; 00519f29
    SUB EAX,EDX                         ; 00519f2b
    CMP EAX,EBX                         ; 00519f2d
    JLE 0x00519f33                      ; 00519f2f | LAB_00519f33
        ;   XREF to: 00519f33 (CONDITIONAL_JUMP)
    MOV EBX,EAX                         ; 00519f31
    FLD float ptr [ESP + 0x10]          ; 00519f33
        ;   Label: LAB_00519f33
    FADD double ptr [0x00637a95]        ; 00519f37 | double DOUBLE_00637a95
    FMUL double ptr [0x00637a9d]        ; 00519f3d | double DOUBLE_00637a9d
    MOV EAX,dword ptr [ESP + 0x58]      ; 00519f43
    CALL crt_math.c_round_FUN_005fe6b0  ; 00519f47 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x54]        ; 00519f4c
    SUB EAX,dword ptr [ESP + 0x54]      ; 00519f50
    CDQ                                 ; 00519f54
    XOR EAX,EDX                         ; 00519f55
    SUB EAX,EDX                         ; 00519f57
    CMP EAX,EBX                         ; 00519f59
    JLE 0x00519f5f                      ; 00519f5b | LAB_00519f5f
        ;   XREF to: 00519f5f (CONDITIONAL_JUMP)
    MOV EBX,EAX                         ; 00519f5d
    FLD float ptr [ESP + 0x14]          ; 00519f5f
        ;   Label: LAB_00519f5f
    FADD double ptr [0x00637a95]        ; 00519f63 | double DOUBLE_00637a95
    FMUL double ptr [0x00637a9d]        ; 00519f69 | double DOUBLE_00637a9d
    MOV EAX,dword ptr [ESP + 0x60]      ; 00519f6f
    CALL crt_math.c_round_FUN_005fe6b0  ; 00519f73 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x54]        ; 00519f78
    SUB EAX,dword ptr [ESP + 0x54]      ; 00519f7c
    CDQ                                 ; 00519f80
    XOR EAX,EDX                         ; 00519f81
    SUB EAX,EDX                         ; 00519f83
    CMP EAX,EBX                         ; 00519f85
    JLE 0x00519f8b                      ; 00519f87 | LAB_00519f8b
        ;   XREF to: 00519f8b (CONDITIONAL_JUMP)
    MOV EBX,EAX                         ; 00519f89
    MOV ESI,dword ptr [ESP + 0x64]      ; 00519f8b
        ;   Label: LAB_00519f8b
    INC EBX                             ; 00519f8f
    CMP EBX,ESI                         ; 00519f90
    JL 0x00519afe                       ; 00519f92 | LAB_00519afe
        ;   XREF to: 00519afe (CONDITIONAL_JUMP)
    LEA EDI,[ESI + 0x1]                 ; 00519f98
    MOV dword ptr [ESP + 0x64],EDI      ; 00519f9b
    JMP 0x00519cb4                      ; 00519f9f | LAB_00519cb4
        ;   XREF to: 00519cb4 (UNCONDITIONAL_JUMP)
    MOV ECX,0x637a5d                    ; 00519fa4 | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_00637a5d = ..\shape\meshlod.cpp
        ;   Label: LAB_00519fa4
    MOV EBX,0xd78                       ; 00519fa9
    PUSH 0x637a72                       ; 00519fae | = "Too many sample points!" | s_Too_many_sample_points_00637a72 = Too many sample points!
    MOV dword ptr [0x02f0ca48],ECX      ; 00519fb3 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00519fb9 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00519fbf | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00519fc4
    JMP 0x00519b6c                      ; 00519fc7 | LAB_00519b6c
        ;   XREF to: 00519b6c (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x58]      ; 00519fcc
        ;   Label: LAB_00519fcc
    TEST EAX,EAX                        ; 00519fd0
    JL 0x00519cac                       ; 00519fd2 | LAB_00519cac
        ;   XREF to: 00519cac (CONDITIONAL_JUMP)
    CMP EAX,0x10                        ; 00519fd8
    JGE 0x00519cac                      ; 00519fdb | LAB_00519cac
        ;   XREF to: 00519cac (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x60]      ; 00519fe1
    TEST ECX,ECX                        ; 00519fe5
    JL 0x00519cac                       ; 00519fe7 | LAB_00519cac
        ;   XREF to: 00519cac (CONDITIONAL_JUMP)
    CMP ECX,0x10                        ; 00519fed
    JGE 0x00519cac                      ; 00519ff0 | LAB_00519cac
        ;   XREF to: 00519cac (CONDITIONAL_JUMP)
    PUSH ECX                            ; 00519ff6
    PUSH EAX                            ; 00519ff7
    PUSH ESI                            ; 00519ff8
    MOV EDX,dword ptr [EBP + 0x14]      ; 00519ff9
    PUSH EDX                            ; 00519ffc
    CALL shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030 ; 00519ffd | void shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030(CLodMesh * this_ptr, int grid_x, int grid_y, int grid_z)
        ;   XREF to: 0051a030 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0051a002
    JMP 0x00519cac                      ; 0051a005 | LAB_00519cac
        ;   XREF to: 00519cac (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0051a00a
        ;   Label: LAB_0051a00a
    JMP 0x00519cc4                      ; 0051a00c | LAB_00519cc4
        ;   XREF to: 00519cc4 (UNCONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 0051a011
        ;   Label: LAB_0051a011
    MOV dword ptr [ESP + 0x6c],ESI      ; 0051a013
    JMP 0x00519cf5                      ; 0051a017 | LAB_00519cf5
        ;   XREF to: 00519cf5 (UNCONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0051a01c
        ;   Label: LAB_0051a01c
    MOV dword ptr [ESP + 0x74],EDX      ; 0051a01e
    JMP 0x00519d26                      ; 0051a022 | LAB_00519d26
        ;   XREF to: 00519d26 (UNCONDITIONAL_JUMP)


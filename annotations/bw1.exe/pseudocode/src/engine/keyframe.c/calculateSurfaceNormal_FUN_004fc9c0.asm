; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keyframe_c_calculateSurfaceNormal_FUN_004fc9c0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_bodypart.cpp_FUN_00419b90 at 00419ff2
;   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00467880 at 004678f5
;   core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00479ba0 at 00479c17
;   core_set.cpp_FUN_00554d30 at 00555136
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004fcd30 at 004fd08b
;   engine_keyframe.c_recomputeKeyFrameNormals_FUN_004fd120 at 004fd181
;
; Referenced Globals:
;   undefined4 DAT_005e6a0b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc9c0
        ;   Label: engine_keyframe.c_calculateSurfaceNormal_FUN_004fc9c0
    PUSH ESI                            ; 004fc9c1
    PUSH EDI                            ; 004fc9c2
    PUSH EBP                            ; 004fc9c3
    MOV EBP,ESP                         ; 004fc9c4
    SUB ESP,0x38                        ; 004fc9c6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fc9c9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004fc9cc
    MOV EDX,dword ptr [EAX + 0x24]      ; 004fc9cf
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fc9d2
    SUB EAX,EDX                         ; 004fc9d9
    SHL EAX,0x2                         ; 004fc9db
    LEA EDX,[EAX + EBX*0x1]             ; 004fc9de
    MOV EAX,dword ptr [EBP + 0x18]      ; 004fc9e1
    MOV ECX,dword ptr [EAX + 0x18]      ; 004fc9e4
    LEA EAX,[ECX*0x4 + 0x0]             ; 004fc9e7
    SUB EAX,ECX                         ; 004fc9ee
    MOV ECX,dword ptr [EDX]             ; 004fc9f0
    SUB ECX,dword ptr [EBX + EAX*0x4]   ; 004fc9f2
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x4] ; 004fc9f5
    MOV dword ptr [EBP + -0xc],ECX      ; 004fc9f9
    MOV ECX,dword ptr [EDX + 0x4]       ; 004fc9fc
    SUB ECX,EDI                         ; 004fc9ff
    MOV dword ptr [EBP + -0x8],ECX      ; 004fca01
    MOV ECX,dword ptr [EDX + 0x8]       ; 004fca04
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x8] ; 004fca07
    MOV EAX,ECX                         ; 004fca0b
    SUB EAX,ESI                         ; 004fca0d
    FILD dword ptr [EBP + -0xc]         ; 004fca0f
    MOV dword ptr [EBP + -0xc],EAX      ; 004fca12
    FILD dword ptr [EBP + -0x8]         ; 004fca15
    FILD dword ptr [EBP + -0xc]         ; 004fca18
    FSTP float ptr [EBP + -0x14]        ; 004fca1b
    MOV ECX,dword ptr [EBP + 0x18]      ; 004fca1e
    MOV ECX,dword ptr [ECX + 0x30]      ; 004fca21
    LEA EAX,[ECX*0x4 + 0x0]             ; 004fca24
    SUB EAX,ECX                         ; 004fca2b
    MOV EDI,dword ptr [EDX]             ; 004fca2d
    MOV ECX,dword ptr [EBX + EAX*0x4]   ; 004fca2f
    SUB ECX,EDI                         ; 004fca32
    FLD ST0                             ; 004fca34
    MOV dword ptr [EBP + -0xc],ECX      ; 004fca36
    MOV EDI,dword ptr [EDX + 0x8]       ; 004fca39
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x4] ; 004fca3c
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8] ; 004fca40
    MOV ESI,dword ptr [EDX + 0x4]       ; 004fca44
    SUB EAX,EDI                         ; 004fca47
    SUB ECX,ESI                         ; 004fca49
    MOV dword ptr [EBP + -0x4],EAX      ; 004fca4b
    MOV dword ptr [EBP + -0x8],ECX      ; 004fca4e
    FILD dword ptr [EBP + -0x4]         ; 004fca51
    FXCH                                ; 004fca54
    FMUL ST1                            ; 004fca56
    FILD dword ptr [EBP + -0x8]         ; 004fca58
    FLD ST0                             ; 004fca5b
    FMUL float ptr [EBP + -0x14]        ; 004fca5d
    FSUBP ST2,ST0                       ; 004fca60
    FILD dword ptr [EBP + -0xc]         ; 004fca62
    FXCH ST2                            ; 004fca65
    FSTP float ptr [EBP + -0x1c]        ; 004fca67
    FLD ST1                             ; 004fca6a
    FMUL float ptr [EBP + -0x14]        ; 004fca6c
    FLD ST5                             ; 004fca6f
    FMULP ST4                           ; 004fca71
    FSUBRP ST3,ST0                      ; 004fca73
    FXCH ST2                            ; 004fca75
    FSTP float ptr [EBP + -0x34]        ; 004fca77
    FXCH ST3                            ; 004fca7a
    FMULP                               ; 004fca7c
    FXCH ST2                            ; 004fca7e
    FMULP                               ; 004fca80
    FSUBP                               ; 004fca82
    FSTP float ptr [EBP + -0x30]        ; 004fca84
    FLD float ptr [EBP + -0x1c]         ; 004fca87
    FMUL ST0                            ; 004fca8a
    FLD float ptr [EBP + -0x34]         ; 004fca8c
    FMUL ST0                            ; 004fca8f
    FADDP                               ; 004fca91
    FLD float ptr [EBP + -0x30]         ; 004fca93
    FMUL ST0                            ; 004fca96
    FADDP                               ; 004fca98
    FSQRT                               ; 004fca9a
    FSTP float ptr [EBP + -0x10]        ; 004fca9c
    TEST dword ptr [EBP + -0x10],0x7fffffff ; 004fca9f
    JNZ 0x004fcaaf                      ; 004fcaa6
        ;   XREF to: 004fcaaf (CONDITIONAL_JUMP)  ; LAB_004fcaaf
    MOV dword ptr [EBP + -0x10],0x477fff00 ; 004fcaa8
    FLD1                                ; 004fcaaf
        ;   Label: LAB_004fcaaf
    FDIV float ptr [EBP + -0x10]        ; 004fcab1
    FLD float ptr [EBP + -0x1c]         ; 004fcab4
    FMUL ST1                            ; 004fcab7
    FLD double ptr [0x005e6a0b]         ; 004fcab9 | DAT_005e6a0b
    FXCH                                ; 004fcabf
    FMUL ST1                            ; 004fcac1
    FSTP float ptr [EBP + -0x1c]        ; 004fcac3
    FLD float ptr [EBP + -0x34]         ; 004fcac6
    FMUL ST2                            ; 004fcac9
    FMUL ST1                            ; 004fcacb
    FSTP float ptr [EBP + -0x34]        ; 004fcacd
    FLD float ptr [EBP + -0x30]         ; 004fcad0
    FMULP ST2                           ; 004fcad3
    FMULP                               ; 004fcad5
    FSTP float ptr [EBP + -0x30]        ; 004fcad7
    MOV EDX,dword ptr [EBP + 0x18]      ; 004fcada
    MOV EDX,dword ptr [EDX + 0x18]      ; 004fcadd
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fcae0
    SUB EAX,EDX                         ; 004fcae7
    FILD dword ptr [EBX + EAX*0x4 + 0x4] ; 004fcae9
    FMUL float ptr [EBP + -0x34]        ; 004fcaed
    FILD dword ptr [EBX + EAX*0x4]      ; 004fcaf0
    FMUL float ptr [EBP + -0x1c]        ; 004fcaf3
    FADDP                               ; 004fcaf6
    FILD dword ptr [EBX + EAX*0x4 + 0x8] ; 004fcaf8
    FMUL float ptr [EBP + -0x30]        ; 004fcafc
    FADDP                               ; 004fcaff
    FSTP float ptr [EBP + -0x2c]        ; 004fcb01
    MOV EBX,dword ptr [EBP + 0x18]      ; 004fcb04
    FLD float ptr [EBP + 0xffffffe4]    ; 004fcb0a
    FISTP dword ptr [EBX + 0x8]         ; 004fcb10
    FLD float ptr [EBP + 0xffffffcc]    ; 004fcb13
    FISTP dword ptr [EBX + 0xc]         ; 004fcb19
    FLD float ptr [EBP + 0xffffffd0]    ; 004fcb1c
    FISTP dword ptr [EBX + 0x10]        ; 004fcb22
    FLD float ptr [EBP + 0xffffffd4]    ; 004fcb25
    FISTP dword ptr [EBX + 0x14]        ; 004fcb2b
    MOV ESP,EBP                         ; 004fcb2e
    POP EBP                             ; 004fcb30
    POP EDI                             ; 004fcb31
    POP ESI                             ; 004fcb32
    POP EBX                             ; 004fcb33
    RET                                 ; 004fcb34


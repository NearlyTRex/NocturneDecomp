; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004c3760(CVector3i *vertex_data,SMRGLPrimitiveTriangleIndex *texture)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   vertex_data
; SMRGLPrimitiveTriangleIndex * Stack[0x8]:4   texture
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004c3c90 at 004c406b
;   engine_keyframe.c_recomputeKeyFrameNormals_FUN_004c4080 at 004c4159
;
; Referenced Globals:
;   double DOUBLE_005875cc = 65535
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3760
        ;   Label: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004c3760
    PUSH ESI                            ; 004c3761
    PUSH EDI                            ; 004c3762
    PUSH EBP                            ; 004c3763
    SUB ESP,0x3c                        ; 004c3764
    MOV EBX,dword ptr [ESP + 0x50]      ; 004c3767
    MOV EDX,dword ptr [ESP + 0x54]      ; 004c376b
    MOV ECX,dword ptr [EDX + 0x1c]      ; 004c376f
    LEA EAX,[ECX*0x4 + 0x0]             ; 004c3772
    SUB EAX,ECX                         ; 004c3779
    SHL EAX,0x2                         ; 004c377b
    MOV ESI,dword ptr [EDX + 0x18]      ; 004c377e
    LEA ECX,[EAX + EBX*0x1]             ; 004c3781
    LEA EAX,[ESI*0x4 + 0x0]             ; 004c3784
    SUB EAX,ESI                         ; 004c378b
    MOV ESI,dword ptr [ECX]             ; 004c378d
    SUB ESI,dword ptr [EBX + EAX*0x4]   ; 004c378f
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x4] ; 004c3792
    MOV dword ptr [ESP + 0x2c],ESI      ; 004c3796
    MOV ESI,dword ptr [ECX + 0x4]       ; 004c379a
    SUB ESI,EBP                         ; 004c379d
    MOV dword ptr [ESP + 0x30],ESI      ; 004c379f
    MOV ESI,dword ptr [ECX + 0x8]       ; 004c37a3
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x8] ; 004c37a6
    MOV EAX,ESI                         ; 004c37aa
    SUB EAX,EDI                         ; 004c37ac
    MOV ESI,dword ptr [EDX + 0x20]      ; 004c37ae
    MOV dword ptr [ESP + 0x34],EAX      ; 004c37b1
    LEA EAX,[ESI*0x4 + 0x0]             ; 004c37b5
    SUB EAX,ESI                         ; 004c37bc
    MOV EBP,dword ptr [ECX]             ; 004c37be
    MOV ESI,dword ptr [EBX + EAX*0x4]   ; 004c37c0
    SUB ESI,EBP                         ; 004c37c3
    MOV dword ptr [ESP + 0x38],ESI      ; 004c37c5
    FILD dword ptr [ESP + 0x34]         ; 004c37c9
    FILD dword ptr [ESP + 0x38]         ; 004c37cd
    FST float ptr [ESP + 0x8]           ; 004c37d1
    FXCH                                ; 004c37d5
    FSTP float ptr [ESP]                ; 004c37d7
    FMUL float ptr [ESP]                ; 004c37da
    MOV EDI,dword ptr [ECX + 0x4]       ; 004c37dd
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x4] ; 004c37e0
    FILD dword ptr [ESP + 0x2c]         ; 004c37e4
    SUB ESI,EDI                         ; 004c37e8
    MOV EBP,dword ptr [ECX + 0x8]       ; 004c37ea
    MOV dword ptr [ESP + 0x38],ESI      ; 004c37ed
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8] ; 004c37f1
    FLD ST0                             ; 004c37f5
    FILD dword ptr [ESP + 0x38]         ; 004c37f7
    FSTP float ptr [ESP + 0xc]          ; 004c37fb
    FMUL float ptr [ESP + 0xc]          ; 004c37ff
    SUB EAX,EBP                         ; 004c3803
    FILD dword ptr [ESP + 0x30]         ; 004c3805
    MOV dword ptr [ESP + 0x38],EAX      ; 004c3809
    FLD ST0                             ; 004c380d
    FILD dword ptr [ESP + 0x38]         ; 004c380f
    FXCH                                ; 004c3813
    FMUL ST1                            ; 004c3815
    FXCH ST4                            ; 004c3817
    FMULP                               ; 004c3819
    FLD float ptr [ESP + 0xc]           ; 004c381b
    FMUL float ptr [ESP]                ; 004c381f
    FLD float ptr [ESP + 0x8]           ; 004c3822
    FMULP ST3                           ; 004c3826
    FSUBP ST4,ST0                       ; 004c3828
    FSUBP ST4,ST0                       ; 004c382a
    FXCH ST2                            ; 004c382c
    FST float ptr [ESP + 0x28]          ; 004c382e
    FMUL float ptr [ESP + 0x28]         ; 004c3832
    FXCH ST3                            ; 004c3836
    FST float ptr [ESP + 0x24]          ; 004c3838
    FMUL float ptr [ESP + 0x24]         ; 004c383c
    FXCH ST2                            ; 004c3840
    FSUBP                               ; 004c3842
    FXCH                                ; 004c3844
    FADDP ST2,ST0                       ; 004c3846
    FST float ptr [ESP + 0x20]          ; 004c3848
    FMUL float ptr [ESP + 0x20]         ; 004c384c
    FADDP                               ; 004c3850
    FSQRT                               ; 004c3852
    FSTP float ptr [ESP + 0x1c]         ; 004c3854
    TEST dword ptr [ESP + 0x1c],0x7fffffff ; 004c3858
    JZ 0x004c390f                       ; 004c3860
        ;   XREF to: 004c390f (CONDITIONAL_JUMP)  ; LAB_004c390f
    FLD1                                ; 004c3866
        ;   Label: LAB_004c3866
    FLD float ptr [ESP + 0x28]          ; 004c3868
    FXCH                                ; 004c386c
    FDIV float ptr [ESP + 0x1c]         ; 004c386e
    FXCH                                ; 004c3872
    FMUL ST1                            ; 004c3874
    FLD float ptr [ESP + 0x24]          ; 004c3876
    FMUL ST2                            ; 004c387a
    FLD float ptr [ESP + 0x20]          ; 004c387c
    MOV ECX,dword ptr [EDX + 0x18]      ; 004c3880
    FMULP ST3                           ; 004c3883
    LEA EAX,[ECX*0x4 + 0x0]             ; 004c3885
    FXCH                                ; 004c388c
    FLD double ptr [0x005875cc]         ; 004c388e | DOUBLE_005875cc
    FXCH                                ; 004c3894
    FMUL ST1                            ; 004c3896
    SUB EAX,ECX                         ; 004c3898
    FXCH ST2                            ; 004c389a
    FMUL ST1                            ; 004c389c
    FILD dword ptr [EBX + EAX*0x4 + 0x4] ; 004c389e
    FXCH                                ; 004c38a2
    FSTP float ptr [ESP + 0x24]         ; 004c38a4
    FMUL float ptr [ESP + 0x24]         ; 004c38a8
    FXCH ST2                            ; 004c38ac
    FSTP float ptr [ESP + 0x28]         ; 004c38ae
    FILD dword ptr [EBX + EAX*0x4]      ; 004c38b2
    FMUL float ptr [ESP + 0x28]         ; 004c38b5
    FXCH ST3                            ; 004c38b9
    FMULP                               ; 004c38bb
    FXCH ST2                            ; 004c38bd
    FADDP                               ; 004c38bf
    FXCH                                ; 004c38c1
    FSTP float ptr [ESP + 0x20]         ; 004c38c3
    FILD dword ptr [EBX + EAX*0x4 + 0x8] ; 004c38c7
    FMUL float ptr [ESP + 0x20]         ; 004c38cb
    FLD float ptr [ESP + 0x28]          ; 004c38cf
    FLD float ptr [ESP + 0x24]          ; 004c38d3
    FLD float ptr [ESP + 0x20]          ; 004c38d7
    FXCH ST2                            ; 004c38db
    CALL crt_math.c_round_FUN_00563a30  ; 004c38dd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004c38e2
    CALL crt_math.c_round_FUN_00563a30  ; 004c38e4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 004c38e9
    CALL crt_math.c_round_FUN_00563a30  ; 004c38eb
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004c38f0
    FISTP dword ptr [EDX + 0x8]         ; 004c38f2
    FXCH                                ; 004c38f5
    FISTP dword ptr [EDX + 0xc]         ; 004c38f7
    FISTP dword ptr [EDX + 0x10]        ; 004c38fa
    FADDP                               ; 004c38fd
    CALL crt_math.c_round_FUN_00563a30  ; 004c38ff
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [EDX + 0x14]        ; 004c3904
    ADD ESP,0x3c                        ; 004c3907
    POP EBP                             ; 004c390a
    POP EDI                             ; 004c390b
    POP ESI                             ; 004c390c
    POP EBX                             ; 004c390d
    RET                                 ; 004c390e
    MOV dword ptr [ESP + 0x1c],0x477fff00 ; 004c390f
        ;   Label: LAB_004c390f
    JMP 0x004c3866                      ; 004c3917
        ;   XREF to: 004c3866 (UNCONDITIONAL_JUMP)  ; LAB_004c3866


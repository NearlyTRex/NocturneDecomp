; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keyframe_c_calculateSurfaceNormal_FUN_004c3920(int param_1,int param_2)
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
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 at 0041712a
;   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00453620 at 00453695
;   core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00457120 at 00457197
;   core_set.cpp_FUN_0050d910 at 0050dd16
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004c3c90 at 004c3feb
;   engine_keyframe.c_recomputeKeyFrameNormals_FUN_004c4080 at 004c40e1
;
; Referenced Globals:
;   double DOUBLE_005875d4 = 65535
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3920
        ;   Label: engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920
    PUSH ESI                            ; 004c3921
    PUSH EDI                            ; 004c3922
    PUSH EBP                            ; 004c3923
    MOV EBP,ESP                         ; 004c3924
    SUB ESP,0x38                        ; 004c3926
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c3929
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c392c
    MOV EDX,dword ptr [EAX + 0x24]      ; 004c392f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c3932
    SUB EAX,EDX                         ; 004c3939
    SHL EAX,0x2                         ; 004c393b
    LEA EDX,[EAX + EBX*0x1]             ; 004c393e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004c3941
    MOV ECX,dword ptr [EAX + 0x18]      ; 004c3944
    LEA EAX,[ECX*0x4 + 0x0]             ; 004c3947
    SUB EAX,ECX                         ; 004c394e
    MOV ECX,dword ptr [EDX]             ; 004c3950
    SUB ECX,dword ptr [EBX + EAX*0x4]   ; 004c3952
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x4] ; 004c3955
    MOV dword ptr [EBP + -0xc],ECX      ; 004c3959
    MOV ECX,dword ptr [EDX + 0x4]       ; 004c395c
    SUB ECX,EDI                         ; 004c395f
    MOV dword ptr [EBP + -0x8],ECX      ; 004c3961
    MOV ECX,dword ptr [EDX + 0x8]       ; 004c3964
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x8] ; 004c3967
    MOV EAX,ECX                         ; 004c396b
    SUB EAX,ESI                         ; 004c396d
    FILD dword ptr [EBP + -0xc]         ; 004c396f
    MOV dword ptr [EBP + -0xc],EAX      ; 004c3972
    FILD dword ptr [EBP + -0x8]         ; 004c3975
    FILD dword ptr [EBP + -0xc]         ; 004c3978
    FSTP float ptr [EBP + -0x14]        ; 004c397b
    MOV ECX,dword ptr [EBP + 0x18]      ; 004c397e
    MOV ECX,dword ptr [ECX + 0x30]      ; 004c3981
    LEA EAX,[ECX*0x4 + 0x0]             ; 004c3984
    SUB EAX,ECX                         ; 004c398b
    MOV EDI,dword ptr [EDX]             ; 004c398d
    MOV ECX,dword ptr [EBX + EAX*0x4]   ; 004c398f
    SUB ECX,EDI                         ; 004c3992
    FLD ST0                             ; 004c3994
    MOV dword ptr [EBP + -0xc],ECX      ; 004c3996
    MOV EDI,dword ptr [EDX + 0x8]       ; 004c3999
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x4] ; 004c399c
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8] ; 004c39a0
    MOV ESI,dword ptr [EDX + 0x4]       ; 004c39a4
    SUB EAX,EDI                         ; 004c39a7
    SUB ECX,ESI                         ; 004c39a9
    MOV dword ptr [EBP + -0x4],EAX      ; 004c39ab
    MOV dword ptr [EBP + -0x8],ECX      ; 004c39ae
    FILD dword ptr [EBP + -0x4]         ; 004c39b1
    FXCH                                ; 004c39b4
    FMUL ST1                            ; 004c39b6
    FILD dword ptr [EBP + -0x8]         ; 004c39b8
    FLD ST0                             ; 004c39bb
    FMUL float ptr [EBP + -0x14]        ; 004c39bd
    FSUBP ST2,ST0                       ; 004c39c0
    FILD dword ptr [EBP + -0xc]         ; 004c39c2
    FXCH ST2                            ; 004c39c5
    FSTP float ptr [EBP + -0x1c]        ; 004c39c7
    FLD ST1                             ; 004c39ca
    FMUL float ptr [EBP + -0x14]        ; 004c39cc
    FLD ST5                             ; 004c39cf
    FMULP ST4                           ; 004c39d1
    FSUBRP ST3,ST0                      ; 004c39d3
    FXCH ST2                            ; 004c39d5
    FSTP float ptr [EBP + -0x34]        ; 004c39d7
    FXCH ST3                            ; 004c39da
    FMULP                               ; 004c39dc
    FXCH ST2                            ; 004c39de
    FMULP                               ; 004c39e0
    FSUBP                               ; 004c39e2
    FSTP float ptr [EBP + -0x30]        ; 004c39e4
    FLD float ptr [EBP + -0x1c]         ; 004c39e7
    FMUL ST0                            ; 004c39ea
    FLD float ptr [EBP + -0x34]         ; 004c39ec
    FMUL ST0                            ; 004c39ef
    FADDP                               ; 004c39f1
    FLD float ptr [EBP + -0x30]         ; 004c39f3
    FMUL ST0                            ; 004c39f6
    FADDP                               ; 004c39f8
    FSQRT                               ; 004c39fa
    FSTP float ptr [EBP + -0x10]        ; 004c39fc
    TEST dword ptr [EBP + -0x10],0x7fffffff ; 004c39ff
    JNZ 0x004c3a0f                      ; 004c3a06
        ;   XREF to: 004c3a0f (CONDITIONAL_JUMP)  ; LAB_004c3a0f
    MOV dword ptr [EBP + -0x10],0x477fff00 ; 004c3a08
    FLD1                                ; 004c3a0f
        ;   Label: LAB_004c3a0f
    FDIV float ptr [EBP + -0x10]        ; 004c3a11
    FLD float ptr [EBP + -0x1c]         ; 004c3a14
    FMUL ST1                            ; 004c3a17
    FLD double ptr [0x005875d4]         ; 004c3a19 | DOUBLE_005875d4
    FXCH                                ; 004c3a1f
    FMUL ST1                            ; 004c3a21
    FSTP float ptr [EBP + -0x1c]        ; 004c3a23
    FLD float ptr [EBP + -0x34]         ; 004c3a26
    FMUL ST2                            ; 004c3a29
    FMUL ST1                            ; 004c3a2b
    FSTP float ptr [EBP + -0x34]        ; 004c3a2d
    FLD float ptr [EBP + -0x30]         ; 004c3a30
    FMULP ST2                           ; 004c3a33
    FMULP                               ; 004c3a35
    FSTP float ptr [EBP + -0x30]        ; 004c3a37
    MOV EDX,dword ptr [EBP + 0x18]      ; 004c3a3a
    MOV EDX,dword ptr [EDX + 0x18]      ; 004c3a3d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c3a40
    SUB EAX,EDX                         ; 004c3a47
    FILD dword ptr [EBX + EAX*0x4 + 0x4] ; 004c3a49
    FMUL float ptr [EBP + -0x34]        ; 004c3a4d
    FILD dword ptr [EBX + EAX*0x4]      ; 004c3a50
    FMUL float ptr [EBP + -0x1c]        ; 004c3a53
    FADDP                               ; 004c3a56
    FILD dword ptr [EBX + EAX*0x4 + 0x8] ; 004c3a58
    FMUL float ptr [EBP + -0x30]        ; 004c3a5c
    FADDP                               ; 004c3a5f
    FSTP float ptr [EBP + -0x2c]        ; 004c3a61
    MOV EBX,dword ptr [EBP + 0x18]      ; 004c3a64
    FLD float ptr [EBP + 0xffffffe4]    ; 004c3a6a
    FISTP dword ptr [EBX + 0x8]         ; 004c3a70
    FLD float ptr [EBP + 0xffffffcc]    ; 004c3a73
    FISTP dword ptr [EBX + 0xc]         ; 004c3a79
    FLD float ptr [EBP + 0xffffffd0]    ; 004c3a7c
    FISTP dword ptr [EBX + 0x10]        ; 004c3a82
    FLD float ptr [EBP + 0xffffffd4]    ; 004c3a85
    FISTP dword ptr [EBX + 0x14]        ; 004c3a8b
    MOV ESP,EBP                         ; 004c3a8e
    POP EBP                             ; 004c3a90
    POP EDI                             ; 004c3a91
    POP ESI                             ; 004c3a92
    POP EBX                             ; 004c3a93
    RET                                 ; 004c3a94


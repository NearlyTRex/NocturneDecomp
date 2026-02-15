; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(CVector3i *vertex_data,SSurfaceNormal *output)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   vertex_data
; SSurfaceNormal * Stack[0x8]:4   output
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
;   core_bodypart.cpp_CBodyPart_FUN_0041a050 at 0041a43a
;   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60 at 00477ed5
;   core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0 at 00482567
;   core_set.cpp_FUN_005702b0 at 005706b6
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30 at 0050228b
;   engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320 at 00502381
;
; Referenced Globals:
;   double g_NormalTo16BitScale2 = 65535
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501bc0
        ;   Label: engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
    PUSH ESI                            ; 00501bc1
    PUSH EDI                            ; 00501bc2
    PUSH EBP                            ; 00501bc3
    MOV EBP,ESP                         ; 00501bc4
    SUB ESP,0x38                        ; 00501bc6
    MOV EBX,dword ptr [EBP + 0x14]      ; 00501bc9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00501bcc
    MOV EDX,dword ptr [EAX + 0x24]      ; 00501bcf
    LEA EAX,[EDX*0x4 + 0x0]             ; 00501bd2
    SUB EAX,EDX                         ; 00501bd9
    SHL EAX,0x2                         ; 00501bdb
    LEA EDX,[EAX + EBX*0x1]             ; 00501bde
    MOV EAX,dword ptr [EBP + 0x18]      ; 00501be1
    MOV ECX,dword ptr [EAX + 0x18]      ; 00501be4
    LEA EAX,[ECX*0x4 + 0x0]             ; 00501be7
    SUB EAX,ECX                         ; 00501bee
    MOV ECX,dword ptr [EDX]             ; 00501bf0
    SUB ECX,dword ptr [EBX + EAX*0x4]   ; 00501bf2
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x4] ; 00501bf5
    MOV dword ptr [EBP + -0xc],ECX      ; 00501bf9
    MOV ECX,dword ptr [EDX + 0x4]       ; 00501bfc
    SUB ECX,EDI                         ; 00501bff
    MOV dword ptr [EBP + -0x8],ECX      ; 00501c01
    MOV ECX,dword ptr [EDX + 0x8]       ; 00501c04
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x8] ; 00501c07
    MOV EAX,ECX                         ; 00501c0b
    SUB EAX,ESI                         ; 00501c0d
    FILD dword ptr [EBP + -0xc]         ; 00501c0f
    MOV dword ptr [EBP + -0xc],EAX      ; 00501c12
    FILD dword ptr [EBP + -0x8]         ; 00501c15
    FILD dword ptr [EBP + -0xc]         ; 00501c18
    FSTP float ptr [EBP + -0x14]        ; 00501c1b
    MOV ECX,dword ptr [EBP + 0x18]      ; 00501c1e
    MOV ECX,dword ptr [ECX + 0x30]      ; 00501c21
    LEA EAX,[ECX*0x4 + 0x0]             ; 00501c24
    SUB EAX,ECX                         ; 00501c2b
    MOV EDI,dword ptr [EDX]             ; 00501c2d
    MOV ECX,dword ptr [EBX + EAX*0x4]   ; 00501c2f
    SUB ECX,EDI                         ; 00501c32
    FLD ST0                             ; 00501c34
    MOV dword ptr [EBP + -0xc],ECX      ; 00501c36
    MOV EDI,dword ptr [EDX + 0x8]       ; 00501c39
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x4] ; 00501c3c
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8] ; 00501c40
    MOV ESI,dword ptr [EDX + 0x4]       ; 00501c44
    SUB EAX,EDI                         ; 00501c47
    SUB ECX,ESI                         ; 00501c49
    MOV dword ptr [EBP + -0x4],EAX      ; 00501c4b
    MOV dword ptr [EBP + -0x8],ECX      ; 00501c4e
    FILD dword ptr [EBP + -0x4]         ; 00501c51
    FXCH                                ; 00501c54
    FMUL ST1                            ; 00501c56
    FILD dword ptr [EBP + -0x8]         ; 00501c58
    FLD ST0                             ; 00501c5b
    FMUL float ptr [EBP + -0x14]        ; 00501c5d
    FSUBP ST2,ST0                       ; 00501c60
    FILD dword ptr [EBP + -0xc]         ; 00501c62
    FXCH ST2                            ; 00501c65
    FSTP float ptr [EBP + -0x1c]        ; 00501c67
    FLD ST1                             ; 00501c6a
    FMUL float ptr [EBP + -0x14]        ; 00501c6c
    FLD ST5                             ; 00501c6f
    FMULP ST4                           ; 00501c71
    FSUBRP ST3,ST0                      ; 00501c73
    FXCH ST2                            ; 00501c75
    FSTP float ptr [EBP + -0x34]        ; 00501c77
    FXCH ST3                            ; 00501c7a
    FMULP                               ; 00501c7c
    FXCH ST2                            ; 00501c7e
    FMULP                               ; 00501c80
    FSUBP                               ; 00501c82
    FSTP float ptr [EBP + -0x30]        ; 00501c84
    FLD float ptr [EBP + -0x1c]         ; 00501c87
    FMUL ST0                            ; 00501c8a
    FLD float ptr [EBP + -0x34]         ; 00501c8c
    FMUL ST0                            ; 00501c8f
    FADDP                               ; 00501c91
    FLD float ptr [EBP + -0x30]         ; 00501c93
    FMUL ST0                            ; 00501c96
    FADDP                               ; 00501c98
    FSQRT                               ; 00501c9a
    FSTP float ptr [EBP + -0x10]        ; 00501c9c
    TEST dword ptr [EBP + -0x10],0x7fffffff ; 00501c9f
    JNZ 0x00501caf                      ; 00501ca6
        ;   XREF to: 00501caf (CONDITIONAL_JUMP)  ; LAB_00501caf
    MOV dword ptr [EBP + -0x10],0x477fff00 ; 00501ca8
    FLD1                                ; 00501caf
        ;   Label: LAB_00501caf
    FDIV float ptr [EBP + -0x10]        ; 00501cb1
    FLD float ptr [EBP + -0x1c]         ; 00501cb4
    FMUL ST1                            ; 00501cb7
    FLD double ptr [0x00630ca0]         ; 00501cb9 | g_NormalTo16BitScale2
    FXCH                                ; 00501cbf
    FMUL ST1                            ; 00501cc1
    FSTP float ptr [EBP + -0x1c]        ; 00501cc3
    FLD float ptr [EBP + -0x34]         ; 00501cc6
    FMUL ST2                            ; 00501cc9
    FMUL ST1                            ; 00501ccb
    FSTP float ptr [EBP + -0x34]        ; 00501ccd
    FLD float ptr [EBP + -0x30]         ; 00501cd0
    FMULP ST2                           ; 00501cd3
    FMULP                               ; 00501cd5
    FSTP float ptr [EBP + -0x30]        ; 00501cd7
    MOV EDX,dword ptr [EBP + 0x18]      ; 00501cda
    MOV EDX,dword ptr [EDX + 0x18]      ; 00501cdd
    LEA EAX,[EDX*0x4 + 0x0]             ; 00501ce0
    SUB EAX,EDX                         ; 00501ce7
    FILD dword ptr [EBX + EAX*0x4 + 0x4] ; 00501ce9
    FMUL float ptr [EBP + -0x34]        ; 00501ced
    FILD dword ptr [EBX + EAX*0x4]      ; 00501cf0
    FMUL float ptr [EBP + -0x1c]        ; 00501cf3
    FADDP                               ; 00501cf6
    FILD dword ptr [EBX + EAX*0x4 + 0x8] ; 00501cf8
    FMUL float ptr [EBP + -0x30]        ; 00501cfc
    FADDP                               ; 00501cff
    FSTP float ptr [EBP + -0x2c]        ; 00501d01
    MOV EBX,dword ptr [EBP + 0x18]      ; 00501d04
    FLD float ptr [EBP + 0xffffffe4]    ; 00501d0a
    FISTP dword ptr [EBX + 0x8]         ; 00501d10
    FLD float ptr [EBP + 0xffffffcc]    ; 00501d13
    FISTP dword ptr [EBX + 0xc]         ; 00501d19
    FLD float ptr [EBP + 0xffffffd0]    ; 00501d1c
    FISTP dword ptr [EBX + 0x10]        ; 00501d22
    FLD float ptr [EBP + 0xffffffd4]    ; 00501d25
    FISTP dword ptr [EBX + 0x14]        ; 00501d2b
    MOV ESP,EBP                         ; 00501d2e
    POP EBP                             ; 00501d30
    POP EDI                             ; 00501d31
    POP ESI                             ; 00501d32
    POP EBX                             ; 00501d33
    RET                                 ; 00501d34


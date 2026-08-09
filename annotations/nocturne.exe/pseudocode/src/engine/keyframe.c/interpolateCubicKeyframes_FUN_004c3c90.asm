; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_004c3c90(SMRGLKeyframeModel *keyframe_model)
;
; Parameters:
; SMRGLKeyframeModel * Stack[0x4]:4   keyframe_model
; Local Variables:
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
; Referenced Globals:
;   TerminatedCString s_engine_keyframe_c_0058762e
;   TerminatedCString s_Bad_keyframe_1_00587643
;   TerminatedCString s_engine_keyframe_c_00587652
;   TerminatedCString s_ZBP_not_found_00587667
;   double DOUBLE_0058767c = 0.0000152587890625
;   float FLOAT_00587684 = -0.5
;   float FLOAT_00587688 = 0.5
;   double DOUBLE_0058768c = 65536
;   float FLOAT_00587694 = 1.5
;   float FLOAT_00587698 = -2.5
;   float FLOAT_0058769c = 2
;   float FLOAT_005876a0 = -1.5
;   undefined4 DAT_01bd1d84
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;   engine_3d.c_dispatchMRGLBlockChain_FUN_00408e80
;   engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004c3760
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004c3aa0
;   engine_model.c_getMRGLSize_FUN_004dd520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3c90
        ;   Label: engine_keyframe.c_interpolateCubicKeyframes_FUN_004c3c90
    PUSH ESI                            ; 004c3c91
    PUSH EDI                            ; 004c3c92
    PUSH EBP                            ; 004c3c93
    MOV EBP,ESP                         ; 004c3c94
    SUB ESP,0x30                        ; 004c3c96
    AND ESP,0xfffffff8                  ; 004c3c99
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c3c9c
    CMP dword ptr [EAX + 0x14],0x0      ; 004c3c9f
    JZ 0x004c4028                       ; 004c3ca3
        ;   XREF to: 004c4028 (CONDITIONAL_JUMP)  ; LAB_004c4028
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c3ca9
        ;   Label: LAB_004c3ca9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c3cac
    MOV ESI,dword ptr [ESI + 0x8]       ; 004c3caf
    MOV EBX,dword ptr [EDX + 0xc]       ; 004c3cb2
    IMUL ESI,EBX                        ; 004c3cb5
    MOV EAX,dword ptr [EDX + 0x10]      ; 004c3cb8
    CDQ                                 ; 004c3cbb
    MOV ECX,EDX                         ; 004c3cbc
    XOR EAX,EDX                         ; 004c3cbe
    XOR EDX,EDX                         ; 004c3cc0
    DIV EBX                             ; 004c3cc2
    CMP EAX,0x7fff                      ; 004c3cc4
    JC 0x004c3cd0                       ; 004c3cc9
        ;   XREF to: 004c3cd0 (CONDITIONAL_JUMP)  ; LAB_004c3cd0
    MOV EAX,0x7fff                      ; 004c3ccb
    PUSH EAX                            ; 004c3cd0
        ;   Label: LAB_004c3cd0
    XOR EAX,EAX                         ; 004c3cd1
    DIV EBX                             ; 004c3cd3
    POP EDX                             ; 004c3cd5
    SHRD EAX,EDX,0x10                   ; 004c3cd6
    XOR EAX,ECX                         ; 004c3cda
    MOV EDX,dword ptr [0x01bd1d84]      ; 004c3cdc | DAT_01bd1d84
    MOV ECX,EAX                         ; 004c3ce2
    MOV EAX,EDX                         ; 004c3ce4
    SAR EDX,0x1f                        ; 004c3ce6
    IDIV ESI                            ; 004c3ce9
    MOV EBX,ECX                         ; 004c3ceb
    SAR EBX,0x10                        ; 004c3ced
    AND ECX,0xffff                      ; 004c3cf0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c3cf6
    MOV dword ptr [ESP],ECX             ; 004c3cf9
    LEA ESI,[EBX + 0x1]                 ; 004c3cfc
    MOV EDI,dword ptr [EAX + 0x8]       ; 004c3cff
    MOV dword ptr [EAX + 0x10],EDX      ; 004c3d02
    CMP ESI,EDI                         ; 004c3d05
    JL 0x004c3d0b                       ; 004c3d07
        ;   XREF to: 004c3d0b (CONDITIONAL_JUMP)  ; LAB_004c3d0b
    XOR ESI,ESI                         ; 004c3d09
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c3d0b
        ;   Label: LAB_004c3d0b
    LEA EAX,[ESI + 0x1]                 ; 004c3d0e
    MOV ECX,dword ptr [EDX + 0x8]       ; 004c3d11
    MOV dword ptr [ESP + 0x24],EAX      ; 004c3d14
    CMP EAX,ECX                         ; 004c3d18
    JL 0x004c3d22                       ; 004c3d1a
        ;   XREF to: 004c3d22 (CONDITIONAL_JUMP)  ; LAB_004c3d22
    XOR EDI,EDI                         ; 004c3d1c
    MOV dword ptr [ESP + 0x24],EDI      ; 004c3d1e
    LEA EDI,[EBX + -0x1]                ; 004c3d22
        ;   Label: LAB_004c3d22
    TEST EDI,EDI                        ; 004c3d25
    JL 0x004c4036                       ; 004c3d27
        ;   XREF to: 004c4036 (CONDITIONAL_JUMP)  ; LAB_004c4036
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c3d2d
        ;   Label: LAB_004c3d2d
    MOV EAX,dword ptr [EAX + 0x14]      ; 004c3d30
    ADD EAX,0x8                         ; 004c3d33
    MOV EDX,dword ptr [EAX]             ; 004c3d36
    MOV dword ptr [ESP + 0x10],EAX      ; 004c3d38
    CMP EDX,0x2                         ; 004c3d3c
    JZ 0x004c3d63                       ; 004c3d3f
        ;   XREF to: 004c3d63 (CONDITIONAL_JUMP)  ; LAB_004c3d63
    MOV ECX,0x58762e                    ; 004c3d41 | = "..\\engine\\keyframe.c"
    MOV EAX,0x16b                       ; 004c3d46
    PUSH 0x587643                       ; 004c3d4b | = "Bad keyframe 1"
    MOV dword ptr [0x01cc4800],ECX      ; 004c3d50 | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 004c3d56 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004c3d5b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004c3d60
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c3d63
        ;   Label: LAB_004c3d63
    MOV EAX,EDX                         ; 004c3d66
    MOV EAX,dword ptr [EAX + ESI*0x4 + 0x118] ; 004c3d68
    ADD EAX,0x14                        ; 004c3d6f
    MOV dword ptr [ESP + 0x28],EAX      ; 004c3d72
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c3d76
    SHL EAX,0x2                         ; 004c3d7a
    ADD EAX,EDX                         ; 004c3d7d
    MOV ESI,dword ptr [EAX + 0x118]     ; 004c3d7f
    LEA EAX,[EDI*0x4 + 0x0]             ; 004c3d85
    ADD EAX,EDX                         ; 004c3d8c
    MOV EDI,dword ptr [EAX + 0x118]     ; 004c3d8e
    MOV EAX,dword ptr [ESP]             ; 004c3d94
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c3d97
    FILD dword ptr [ESP + 0x2c]         ; 004c3d9b
    FMUL double ptr [0x0058767c]        ; 004c3d9f | DOUBLE_0058767c
    FLD ST0                             ; 004c3da5
    FMUL ST1                            ; 004c3da7
    FLD ST0                             ; 004c3da9
    FMUL ST2                            ; 004c3dab
    FLD ST1                             ; 004c3dad
    FMUL float ptr [0x0058769c]         ; 004c3daf | FLOAT_0058769c
    FLD ST1                             ; 004c3db5
    FMUL float ptr [0x00587684]         ; 004c3db7 | FLOAT_00587684
    FLD ST2                             ; 004c3dbd
    FMUL float ptr [0x00587694]         ; 004c3dbf | FLOAT_00587694
    FLD ST3                             ; 004c3dc5
    FXCH ST2                            ; 004c3dc7
    FADD ST0,ST5                        ; 004c3dc9
    FXCH ST2                            ; 004c3dcb
    FMUL float ptr [0x005876a0]         ; 004c3dcd | FLOAT_005876a0
    FXCH ST6                            ; 004c3dd3
    FMUL float ptr [0x00587688]         ; 004c3dd5 | FLOAT_00587688
    FXCH ST4                            ; 004c3ddb
    FMUL float ptr [0x00587688]         ; 004c3ddd | FLOAT_00587688
    FXCH ST4                            ; 004c3de3
    FSTP float ptr [ESP + 0x2c]         ; 004c3de5
    FXCH                                ; 004c3de9
    FSUB float ptr [ESP + 0x2c]         ; 004c3deb
    FLD ST4                             ; 004c3def
    FMUL float ptr [0x00587688]         ; 004c3df1 | FLOAT_00587688
    FXCH                                ; 004c3df7
    FMUL double ptr [0x0058768c]        ; 004c3df9 | DOUBLE_0058768c
    FXCH                                ; 004c3dff
    FSUBP ST4,ST0                       ; 004c3e01
    FXCH ST4                            ; 004c3e03
    FMUL float ptr [0x00587698]         ; 004c3e05 | FLOAT_00587698
    FXCH ST3                            ; 004c3e0b
    FMUL double ptr [0x0058768c]        ; 004c3e0d | DOUBLE_0058768c
    FXCH ST3                            ; 004c3e13
    FADDP                               ; 004c3e15
    FXCH ST4                            ; 004c3e17
    FADDP                               ; 004c3e19
    FLD1                                ; 004c3e1b
    FADDP ST4,ST0                       ; 004c3e1d
    FADD float ptr [ESP + 0x2c]         ; 004c3e1f
    FXCH ST3                            ; 004c3e23
    FMUL double ptr [0x0058768c]        ; 004c3e25 | DOUBLE_0058768c
    FXCH ST3                            ; 004c3e2b
    FMUL double ptr [0x0058768c]        ; 004c3e2d | DOUBLE_0058768c
    SHL EBX,0x2                         ; 004c3e33
    MOV ECX,dword ptr [EDX + 0x14]      ; 004c3e36
    ADD EBX,EDX                         ; 004c3e39
    ADD ECX,0x14                        ; 004c3e3b
    MOV EBX,dword ptr [EBX + 0x118]     ; 004c3e3e
    XOR EAX,EAX                         ; 004c3e44
    ADD EBX,0x14                        ; 004c3e46
    MOV dword ptr [ESP + 0x24],EAX      ; 004c3e49
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c3e4d
    ADD ESI,0x14                        ; 004c3e51
    ADD EDI,0x14                        ; 004c3e54
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c3e57
    FXCH                                ; 004c3e5a
    CALL crt_math.c_round_FUN_00563a30  ; 004c3e5c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x1c]        ; 004c3e61
    FXCH                                ; 004c3e65
    CALL crt_math.c_round_FUN_00563a30  ; 004c3e67
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 004c3e6c
    CALL crt_math.c_round_FUN_00563a30  ; 004c3e6e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004c3e73
    CALL crt_math.c_round_FUN_00563a30  ; 004c3e75
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 004c3e7a
    FISTP dword ptr [ESP + 0x18]        ; 004c3e7c
    FISTP dword ptr [ESP + 0x14]        ; 004c3e80
    FISTP dword ptr [ESP + 0x20]        ; 004c3e84
    TEST EDX,EDX                        ; 004c3e88
    JLE 0x004c3fc7                      ; 004c3e8a
        ;   XREF to: 004c3fc7 (CONDITIONAL_JUMP)  ; LAB_004c3fc7
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c3e90
        ;   Label: LAB_004c3e90
    MOV EDX,dword ptr [EDI]             ; 004c3e94
    IMUL EDX                            ; 004c3e96
    SHRD EAX,EDX,0x10                   ; 004c3e98
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c3e9c
    MOV EDX,dword ptr [EBX]             ; 004c3ea0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c3ea2
    IMUL EDX                            ; 004c3ea6
    SHRD EAX,EDX,0x10                   ; 004c3ea8
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004c3eac
    ADD EDX,EAX                         ; 004c3eb0
    MOV dword ptr [ESP + 0x2c],EDX      ; 004c3eb2
    MOV EDX,dword ptr [ESP + 0x28]      ; 004c3eb6
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c3eba
    MOV EDX,dword ptr [EDX]             ; 004c3ebe
    IMUL EDX                            ; 004c3ec0
    SHRD EAX,EDX,0x10                   ; 004c3ec2
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004c3ec6
    ADD EDX,EAX                         ; 004c3eca
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c3ecc
    MOV dword ptr [ESP + 0x2c],EDX      ; 004c3ed0
    MOV EDX,dword ptr [ESI]             ; 004c3ed4
    IMUL EDX                            ; 004c3ed6
    SHRD EAX,EDX,0x10                   ; 004c3ed8
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004c3edc
    ADD EDX,EAX                         ; 004c3ee0
    MOV dword ptr [ECX],EDX             ; 004c3ee2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c3ee4
    MOV EDX,dword ptr [EDI + 0x4]       ; 004c3ee8
    IMUL EDX                            ; 004c3eeb
    SHRD EAX,EDX,0x10                   ; 004c3eed
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c3ef1
    MOV EDX,dword ptr [EBX + 0x4]       ; 004c3ef5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c3ef8
    IMUL EDX                            ; 004c3efc
    SHRD EAX,EDX,0x10                   ; 004c3efe
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004c3f02
    ADD EDX,EAX                         ; 004c3f06
    MOV dword ptr [ESP + 0x2c],EDX      ; 004c3f08
    MOV EDX,dword ptr [ESP + 0x28]      ; 004c3f0c
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c3f10
    MOV EDX,dword ptr [EDX + 0x4]       ; 004c3f14
    IMUL EDX                            ; 004c3f17
    SHRD EAX,EDX,0x10                   ; 004c3f19
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004c3f1d
    ADD EDX,EAX                         ; 004c3f21
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c3f23
    MOV dword ptr [ESP + 0x2c],EDX      ; 004c3f27
    MOV EDX,dword ptr [ESI + 0x4]       ; 004c3f2b
    IMUL EDX                            ; 004c3f2e
    SHRD EAX,EDX,0x10                   ; 004c3f30
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004c3f34
    ADD EDX,EAX                         ; 004c3f38
    MOV dword ptr [ECX + 0x4],EDX       ; 004c3f3a
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c3f3d
    MOV EDX,dword ptr [EDI + 0x8]       ; 004c3f41
    IMUL EDX                            ; 004c3f44
    SHRD EAX,EDX,0x10                   ; 004c3f46
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c3f4a
    MOV EDX,dword ptr [EBX + 0x8]       ; 004c3f4e
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c3f51
    IMUL EDX                            ; 004c3f55
    SHRD EAX,EDX,0x10                   ; 004c3f57
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004c3f5b
    ADD EDX,EAX                         ; 004c3f5f
    MOV dword ptr [ESP + 0x2c],EDX      ; 004c3f61
    MOV EDX,dword ptr [ESP + 0x28]      ; 004c3f65
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c3f69
    MOV EDX,dword ptr [EDX + 0x8]       ; 004c3f6d
    ADD EDI,0xc                         ; 004c3f70
    IMUL EDX                            ; 004c3f73
    SHRD EAX,EDX,0x10                   ; 004c3f75
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004c3f79
    ADD EBX,0xc                         ; 004c3f7d
    ADD EDX,EAX                         ; 004c3f80
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c3f82
    MOV dword ptr [ESP + 0x2c],EDX      ; 004c3f86
    MOV EDX,dword ptr [ESI + 0x8]       ; 004c3f8a
    ADD ESI,0xc                         ; 004c3f8d
    IMUL EDX                            ; 004c3f90
    SHRD EAX,EDX,0x10                   ; 004c3f92
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004c3f96
    ADD ECX,0xc                         ; 004c3f9a
    ADD EDX,EAX                         ; 004c3f9d
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c3f9f
    MOV dword ptr [ECX + -0x4],EDX      ; 004c3fa3
    MOV EDX,dword ptr [ESP + 0x28]      ; 004c3fa6
    INC EAX                             ; 004c3faa
    ADD EDX,0xc                         ; 004c3fab
    MOV dword ptr [ESP + 0x24],EAX      ; 004c3fae
    MOV dword ptr [ESP + 0x28],EDX      ; 004c3fb2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c3fb6
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c3fba
    CMP EAX,dword ptr [EDX + 0x8]       ; 004c3fbe
    JL 0x004c3e90                       ; 004c3fc1
        ;   XREF to: 004c3e90 (CONDITIONAL_JUMP)  ; LAB_004c3e90
    MOV ESI,dword ptr [ECX]             ; 004c3fc7
        ;   Label: LAB_004c3fc7
    MOV EBX,ECX                         ; 004c3fc9
    CMP ESI,0x17                        ; 004c3fcb
    JNZ 0x004c4042                      ; 004c3fce
        ;   XREF to: 004c4042 (CONDITIONAL_JUMP)  ; LAB_004c4042
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c3fd0
        ;   Label: LAB_004c3fd0
    MOV ESI,dword ptr [ESI + 0x14]      ; 004c3fd3
    ADD EBX,0xc                         ; 004c3fd6
    ADD ESI,0x14                        ; 004c3fd9
    MOV ECX,dword ptr [EBX]             ; 004c3fdc
        ;   Label: LAB_004c3fdc
    CMP ECX,0x18                        ; 004c3fde
    JC 0x004c3ff3                       ; 004c3fe1
        ;   XREF to: 004c3ff3 (CONDITIONAL_JUMP)  ; LAB_004c3ff3
    JA 0x004c4075                       ; 004c3fe3
        ;   XREF to: 004c4075 (CONDITIONAL_JUMP)  ; LAB_004c4075
    PUSH EBX                            ; 004c3fe9
    PUSH ESI                            ; 004c3fea
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920 ; 004c3feb
        ;   XREF to: 004c3920 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920(CVector3i * vertex_data, SMRGLPrimitiveTriangle * texture)
    ADD ESP,0x8                         ; 004c3ff0
        ;   Label: LAB_004c3ff0
    PUSH EBX                            ; 004c3ff3
        ;   Label: LAB_004c3ff3
    CALL engine_model.c_getMRGLSize_FUN_004dd520 ; 004c3ff4
        ;   XREF to: 004dd520 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_004dd520(SMRGLHeaderExtended * header)
    SHR EAX,0x2                         ; 004c3ff9
    SHL EAX,0x2                         ; 004c3ffc
    ADD EBX,EAX                         ; 004c3fff
    MOV EDX,dword ptr [EBX]             ; 004c4001
    ADD ESP,0x4                         ; 004c4003
    TEST EDX,EDX                        ; 004c4006
    JNZ 0x004c3fdc                      ; 004c4008
        ;   XREF to: 004c3fdc (CONDITIONAL_JUMP)  ; LAB_004c3fdc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c400a
    MOV ECX,dword ptr [EAX + 0x14]      ; 004c400d
    PUSH ECX                            ; 004c4010
    CALL engine_3d.c_dispatchMRGLBlockChain_FUN_00408e80 ; 004c4011
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_dispatchMRGLBlockChain_FUN_00408e80(SMRGLHeaderExtended * chain)
    ADD ESP,0x4                         ; 004c4016
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c4019
    ADD EAX,0x158                       ; 004c401c
    MOV ESP,EBP                         ; 004c4021
    POP EBP                             ; 004c4023
    POP EDI                             ; 004c4024
    POP ESI                             ; 004c4025
    POP EBX                             ; 004c4026
    RET                                 ; 004c4027
    PUSH EAX                            ; 004c4028
        ;   Label: LAB_004c4028
    CALL engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004c3aa0 ; 004c4029
        ;   XREF to: 004c3aa0 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004c3aa0(SMRGLKeyframeModel * keyframe_model)
    ADD ESP,0x4                         ; 004c402e
    JMP 0x004c3ca9                      ; 004c4031
        ;   XREF to: 004c3ca9 (UNCONDITIONAL_JUMP)  ; LAB_004c3ca9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004c4036
        ;   Label: LAB_004c4036
    MOV EDI,dword ptr [EDI + 0x8]       ; 004c4039
    DEC EDI                             ; 004c403c
    JMP 0x004c3d2d                      ; 004c403d
        ;   XREF to: 004c3d2d (UNCONDITIONAL_JUMP)  ; LAB_004c3d2d
    MOV EDI,0x587652                    ; 004c4042 | = "..\\engine\\keyframe.c"
        ;   Label: LAB_004c4042
    MOV EAX,0x1a6                       ; 004c4047
    PUSH 0x587667                       ; 004c404c | = "ZBP not found!"
    MOV dword ptr [0x01cc4800],EDI      ; 004c4051 | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 004c4057 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004c405c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004c4061
    JMP 0x004c3fd0                      ; 004c4064
        ;   XREF to: 004c3fd0 (UNCONDITIONAL_JUMP)  ; LAB_004c3fd0
    PUSH EBX                            ; 004c4069
        ;   Label: LAB_004c4069
    PUSH ESI                            ; 004c406a
    CALL engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004c3760 ; 004c406b
        ;   XREF to: 004c3760 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004c3760(CVector3i * vertex_data, SMRGLPrimitiveTriangleIndex * texture)
    JMP 0x004c3ff0                      ; 004c4070
        ;   XREF to: 004c3ff0 (UNCONDITIONAL_JUMP)  ; LAB_004c3ff0
    CMP ECX,0x19                        ; 004c4075
        ;   Label: LAB_004c4075
    JZ 0x004c4069                       ; 004c4078
        ;   XREF to: 004c4069 (CONDITIONAL_JUMP)  ; LAB_004c4069
    JMP 0x004c3ff3                      ; 004c407a
        ;   XREF to: 004c3ff3 (UNCONDITIONAL_JUMP)  ; LAB_004c3ff3


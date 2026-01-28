; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0 (CDemonCamera *this_ptr,CDemonLight *light_source)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light_source
; Local Variables:
; undefined1       Stack[-0x60]:1  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c2e9
;
; Referenced Globals:
;   double g_FixedPointScale256 = 256
;   double g_LogarithmicConstant210 = 3.32192809489000
;   CVector3i[320] g_TempWorldPositionRow
;   undefined4 DAT_009e5d74
;   undefined4 DAT_009e6c74
;   CVector3f[76800] g_PrecomputedSurfaceNormals
;   undefined4 DAT_00ac7c74
;   undefined4 DAT_00ac7c78
;   undefined4 DAT_00ac7c7c
;   undefined4 DAT_00ac7c80
;   undefined4 DAT_00ac7c84
;   undefined4 DAT_00ac7c88
;   undefined4 DAT_00ac8b74
;   char[241][320] g_CoronaBlurOutputBuffer
;   undefined4 DAT_00ba8db8
;   ... and 20 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450ac0
        ;   Label: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0
    PUSH ESI                            ; 00450ac1
    PUSH EDI                            ; 00450ac2
    PUSH EBP                            ; 00450ac3
    MOV EBP,ESP                         ; 00450ac4
    SUB ESP,0x50                        ; 00450ac6
    AND ESP,0xfffffff8                  ; 00450ac9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00450acc
    MOV ESI,EAX                         ; 00450acf
    MOV ECX,0xa                         ; 00450ad1
    MOV EDI,0x13bc238                   ; 00450ad6 | g_CoronaCameraRotationMatrix
    LEA ESI,[ESI + 0x10]                ; 00450adb
    XOR EBX,EBX                         ; 00450ade
    MOV [0x013bc234],EAX                ; 00450ae0 | g_CurrentLightForCorona
    MOVSD.REP ES:EDI,ESI                ; 00450ae5 | g_CoronaCameraRotationMatrix | DAT_013bc23c
    ADD EBX,0x4                         ; 00450ae7
        ;   Label: LAB_00450ae7
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00450aea
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    AND EAX,0xff                        ; 00450aef
    MOV dword ptr [EBX + 0x13bbe30],EAX ; 00450af4 | g_DitherPatternTable
    CMP EBX,0x400                       ; 00450afa
    JNZ 0x00450ae7                      ; 00450b00
        ;   XREF to: 00450ae7 (CONDITIONAL_JUMP)  ; LAB_00450ae7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00450b02
    MOV ECX,dword ptr [EAX + 0x154]     ; 00450b05
    XOR EDX,EDX                         ; 00450b0b
    TEST ECX,ECX                        ; 00450b0d
    JLE 0x00450b40                      ; 00450b0f
        ;   XREF to: 00450b40 (CONDITIONAL_JUMP)  ; LAB_00450b40
    XOR EAX,EAX                         ; 00450b11
    MOV ECX,dword ptr [EBP + 0x14]      ; 00450b13
        ;   Label: LAB_00450b13
    MOV ECX,dword ptr [ECX + 0x150]     ; 00450b16
    XOR EBX,EBX                         ; 00450b1c
    MOV dword ptr [EAX + 0x1576fa8],ECX ; 00450b1e | g_CoronaLeftExtent | DAT_01576fac
    MOV ECX,dword ptr [EBP + 0x14]      ; 00450b24
    MOV dword ptr [EAX + 0x1577368],EBX ; 00450b27 | g_CoronaRightExtent | DAT_0157736c
    INC EDX                             ; 00450b2d
    MOV ESI,dword ptr [ECX + 0x154]     ; 00450b2e
    ADD EAX,0x4                         ; 00450b34
    CMP EDX,ESI                         ; 00450b37
    JL 0x00450b13                       ; 00450b39
        ;   XREF to: 00450b13 (CONDITIONAL_JUMP)  ; LAB_00450b13
    LEA EAX,[EAX]                       ; 00450b3b
    MOV ECX,ECX                         ; 00450b3e
    MOV EDI,dword ptr [EBP + 0x18]      ; 00450b40
        ;   Label: LAB_00450b40
    PUSH EDI                            ; 00450b43
    CALL core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 ; 00450b44
        ;   XREF to: 004736c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0(CDemonLight * this_ptr)
    FLD float ptr [EDI + 0x140]         ; 00450b49
    FMUL double ptr [0x0061a2c2]        ; 00450b4f | g_FixedPointScale256
    ADD ESP,0x4                         ; 00450b55
    FLD ST0                             ; 00450b58
    FLDLG2                              ; 00450b5a
    FXCH                                ; 00450b5c
    FYL2X                               ; 00450b5e
    FMUL double ptr [0x0061a2ca]        ; 00450b60 | g_LogarithmicConstant210
    FXCH                                ; 00450b66
    CALL crt_math.c_round_FUN_005fe6b0  ; 00450b68
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    XOR EAX,EAX                         ; 00450b6d
    FXCH                                ; 00450b6f
    CALL crt_math.c_round_FUN_005fe6b0  ; 00450b71
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV dword ptr [ESP + 0x30],EAX      ; 00450b76
    FISTP dword ptr [0x00c1a200]        ; 00450b7a | g_CoronaDepthShift
    MOV EAX,dword ptr [EBP + 0x14]      ; 00450b80
    MOV EDX,dword ptr [0x00c1a200]      ; 00450b83 | g_CoronaDepthShift
    FISTP dword ptr [0x00c1a1fc]        ; 00450b89 | g_CoronaMaxDepth
    DEC EDX                             ; 00450b8f
    MOV ECX,dword ptr [EAX + 0x154]     ; 00450b90
    MOV dword ptr [0x00c1a200],EDX      ; 00450b96 | g_CoronaDepthShift
    TEST ECX,ECX                        ; 00450b9c
    JLE 0x00450c3b                      ; 00450b9e
        ;   XREF to: 00450c3b (CONDITIONAL_JUMP)  ; LAB_00450c3b
    MOV EDI,0xac6d74                    ; 00450ba4 | g_PrecomputedSurfaceNormals
    MOV EAX,0x1577728                   ; 00450ba9 | g_CoronaDepthBuffer
    MOV EDX,0xba8c78                    ; 00450bae | g_CoronaBlurOutputBuffer
    XOR ESI,ESI                         ; 00450bb3
    MOV ECX,0x9e4e74                    ; 00450bb5 | g_TempWorldPositionRow
    MOV dword ptr [ESP + 0x34],ESI      ; 00450bba
    MOV dword ptr [ESP + 0x28],EDI      ; 00450bbe | g_PrecomputedSurfaceNormals
    MOV dword ptr [ESP + 0x24],EAX      ; 00450bc2 | g_CoronaDepthBuffer
    MOV dword ptr [ESP + 0x20],EDX      ; 00450bc6 | g_CoronaBlurOutputBuffer
    MOV dword ptr [ESP + 0x2c],ECX      ; 00450bca | g_TempWorldPositionRow
    MOV EDX,dword ptr [EBP + 0x14]      ; 00450bce
        ;   Label: LAB_00450bce
    MOV EAX,dword ptr [ESP + 0x34]      ; 00450bd1
    MOV EBX,dword ptr [EDX + 0x150]     ; 00450bd5
    CMP EBX,dword ptr [EAX + 0x1576fa8] ; 00450bdb | g_CoronaLeftExtent | DAT_01576fac
    JNZ 0x00450c4c                      ; 00450be1
        ;   XREF to: 00450c4c (CONDITIONAL_JUMP)  ; LAB_00450c4c
    MOV EBX,dword ptr [ESP + 0x34]      ; 00450be3
        ;   Label: LAB_00450be3
    MOV ESI,dword ptr [ESP + 0x28]      ; 00450be7
    MOV EDI,dword ptr [ESP + 0x24]      ; 00450beb
    MOV EAX,dword ptr [ESP + 0x20]      ; 00450bef
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00450bf3
    MOV ECX,dword ptr [ESP + 0x30]      ; 00450bf7
    ADD EBX,0x4                         ; 00450bfb
    ADD ESI,0xf00                       ; 00450bfe
    ADD EDI,0x500                       ; 00450c04
    ADD EAX,0x140                       ; 00450c0a | DAT_00ba8db8
    ADD EDX,0xf00                       ; 00450c0f
    INC ECX                             ; 00450c15
    MOV dword ptr [ESP + 0x34],EBX      ; 00450c16
    MOV dword ptr [ESP + 0x28],ESI      ; 00450c1a | DAT_00ac7c74 | DAT_00ac8b74
    MOV dword ptr [ESP + 0x2c],EDX      ; 00450c1e | DAT_009e5d74 | DAT_009e6c74
    MOV EDX,dword ptr [EBP + 0x14]      ; 00450c22
    MOV dword ptr [ESP + 0x24],EDI      ; 00450c25 | DAT_01577c28 | DAT_01578128
    MOV dword ptr [ESP + 0x20],EAX      ; 00450c29 | DAT_00ba8db8
    MOV EBX,dword ptr [EDX + 0x154]     ; 00450c2d
    MOV dword ptr [ESP + 0x30],ECX      ; 00450c33
    CMP ECX,EBX                         ; 00450c37
    JL 0x00450bce                       ; 00450c39
        ;   XREF to: 00450bce (CONDITIONAL_JUMP)  ; LAB_00450bce
    MOV dword ptr [0x013bbe2c],0x1      ; 00450c3b | g_BackdropSaveActive
        ;   Label: LAB_00450c3b
    MOV ESP,EBP                         ; 00450c45
    POP EBP                             ; 00450c47
    POP EDI                             ; 00450c48
    POP ESI                             ; 00450c49
    POP EBX                             ; 00450c4a
    RET                                 ; 00450c4b
    MOV EAX,dword ptr [ESP + 0x34]      ; 00450c4c
        ;   Label: LAB_00450c4c
    MOV EAX,dword ptr [EAX + 0x1576fa8] ; 00450c50 | DAT_01576fac
    MOV dword ptr [ESP + 0x48],EAX      ; 00450c56
    MOV ESI,dword ptr [ESP + 0x48]      ; 00450c5a
    IMUL EBX,ESI,0xc                    ; 00450c5e
    MOV EAX,dword ptr [ESP + 0x34]      ; 00450c61
    MOV EAX,dword ptr [EAX + 0x1577368] ; 00450c65 | DAT_0157736c
    MOV dword ptr [ESP + 0x38],EAX      ; 00450c6b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00450c6f
    ADD EAX,EBX                         ; 00450c73
    MOV dword ptr [ESP + 0x44],EAX      ; 00450c75
    MOV EAX,dword ptr [ESP + 0x20]      ; 00450c79
    ADD EAX,ESI                         ; 00450c7d
    MOV EDX,dword ptr [ESP + 0x24]      ; 00450c7f
    MOV dword ptr [ESP + 0x4c],EAX      ; 00450c83
    LEA EAX,[ESI*0x4 + 0x0]             ; 00450c87
    MOV CL,byte ptr [0x013bc260]        ; 00450c8e | g_CameraDownscaleIterations
    ADD EDX,EAX                         ; 00450c94
    MOV EAX,dword ptr [ESP + 0x30]      ; 00450c96
    MOV dword ptr [ESP + 0x3c],EDX      ; 00450c9a
    MOV EDX,ESI                         ; 00450c9e
    SHL EAX,CL                          ; 00450ca0
    SHL EDX,CL                          ; 00450ca2
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf7d5c] ; 00450ca4 | g_ZBufferScanlineArray
    SHL EDX,0x2                         ; 00450cab
    ADD EAX,EDX                         ; 00450cae
    MOV dword ptr [ESP + 0x40],EAX      ; 00450cb0
    MOV EAX,dword ptr [ESP + 0x28]      ; 00450cb4
    MOV EDX,dword ptr [ESP + 0x38]      ; 00450cb8
    ADD EBX,EAX                         ; 00450cbc
    CMP ESI,EDX                         ; 00450cbe
    JGE 0x00450be3                      ; 00450cc0
        ;   XREF to: 00450be3 (CONDITIONAL_JUMP)  ; LAB_00450be3
        ;   Label: LAB_00450cc0
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00450cc6
    MOV EAX,dword ptr [ESP + 0x40]      ; 00450cca
    MOV ESI,dword ptr [EDX]             ; 00450cce | DAT_01577c28 | DAT_01577c2c
    CMP ESI,dword ptr [EAX]             ; 00450cd0
    JBE 0x00450dd8                      ; 00450cd2
        ;   XREF to: 00450dd8 (CONDITIONAL_JUMP)  ; LAB_00450dd8
    FLD float ptr [EBX + 0x4]           ; 00450cd8 | DAT_00ac7c78 | DAT_00ac7c84
    FMUL float ptr [0x013bc24c]         ; 00450cdb | g_CoronaCameraRotationMatrix.m[1].z
    FLD float ptr [EBX]                 ; 00450ce1 | DAT_00ac7c74 | DAT_00ac7c80
    FMUL float ptr [0x013bc240]         ; 00450ce3 | g_CoronaCameraRotationMatrix.m[0].z
    FADDP                               ; 00450ce9
    FLD float ptr [EBX + 0x8]           ; 00450ceb | DAT_00ac7c7c | DAT_00ac7c88
    FMUL float ptr [0x013bc258]         ; 00450cee | g_CoronaCameraRotationMatrix.m[2].z
    FADDP                               ; 00450cf4
    FLDZ                                ; 00450cf6
    FCOMPP                              ; 00450cf8
    FNSTSW AX                           ; 00450cfa
    SAHF                                ; 00450cfc
    JA 0x00450dd8                       ; 00450cfd
        ;   XREF to: 00450dd8 (CONDITIONAL_JUMP)  ; LAB_00450dd8
    MOV EDI,dword ptr [ESP + 0x44]      ; 00450d03
    PUSH EDI                            ; 00450d07
    MOV EAX,[0x013bc234]                ; 00450d08 | g_CurrentLightForCorona
    PUSH EAX                            ; 00450d0d
    LEA ESI,[ESP + 0x8]                 ; 00450d0e
    LEA EDI,[ESP + 0x14]                ; 00450d12
    CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0 ; 00450d16
        ;   XREF to: 0044d7d0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr)
    LEA ESI,[ESP + 0x8]                 ; 00450d1b
    ADD ESP,0x8                         ; 00450d1f
    MOVSD ES:EDI,ESI                    ; 00450d22
    MOVSD ES:EDI,ESI                    ; 00450d23
    MOVSD ES:EDI,ESI                    ; 00450d24
    CMP dword ptr [ESP + 0x14],0x0      ; 00450d25
    JLE 0x00450dd8                      ; 00450d2a
        ;   XREF to: 00450dd8 (CONDITIONAL_JUMP)  ; LAB_00450dd8
    MOV EDX,dword ptr [ESP + 0x10]      ; 00450d30
    MOV EAX,[0x013bc234]                ; 00450d34 | g_CurrentLightForCorona
    SAR EDX,0x10                        ; 00450d39
    IMUL EDX,dword ptr [EAX + 0x1cc0]   ; 00450d3c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00450d43
    SAR ECX,0x10                        ; 00450d47
    ADD EDX,ECX                         ; 00450d4a
    LEA ESI,[EDX + EDX*0x1]             ; 00450d4c
    MOV EDX,dword ptr [EAX + 0x2f94]    ; 00450d4f
    MOV DX,word ptr [EDX + ESI*0x1]     ; 00450d55
    MOV ESI,dword ptr [0x00c1a1fc]      ; 00450d59 | g_CoronaMaxDepth
    AND EDX,0xffff                      ; 00450d5f
    CMP EDX,ESI                         ; 00450d65
    JGE 0x00450dd8                      ; 00450d67
        ;   XREF to: 00450dd8 (CONDITIONAL_JUMP)  ; LAB_00450dd8
    MOV EDI,dword ptr [ESP + 0x14]      ; 00450d69
    LEA ECX,[EDX + 0x80]                ; 00450d6d
    CMP ECX,EDI                         ; 00450d73
    JLE 0x00450dd8                      ; 00450d75
        ;   XREF to: 00450dd8 (CONDITIONAL_JUMP)  ; LAB_00450dd8
    MOV ESI,dword ptr [ESP + 0xc]       ; 00450d77
    MOV CL,byte ptr [EAX + 0x1cc8]      ; 00450d7b
    SAR ESI,CL                          ; 00450d81
    MOV ECX,dword ptr [EAX + 0x1c68]    ; 00450d83
    MOV EDI,dword ptr [ESP + 0x10]      ; 00450d89
    AND ESI,ECX                         ; 00450d8d
    MOV CL,byte ptr [EAX + 0x1ccc]      ; 00450d8f
    SAR EDI,CL                          ; 00450d95
    MOV ECX,EDI                         ; 00450d97
    MOV EDI,dword ptr [EAX + 0x1c68]    ; 00450d99
    AND EDI,ECX                         ; 00450d9f
    MOV CL,byte ptr [EAX + 0x1c60]      ; 00450da1
    SHL EDI,CL                          ; 00450da7
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 00450da9
    LEA ECX,[EDI + ESI*0x1]             ; 00450daf
    ADD EAX,ECX                         ; 00450db2
    XOR ECX,ECX                         ; 00450db4
    MOV CL,byte ptr [EAX]               ; 00450db6
    MOV EAX,[0x00c1a1fc]                ; 00450db8 | g_CoronaMaxDepth
    SUB EAX,EDX                         ; 00450dbd
    MOV EDX,EAX                         ; 00450dbf
    IMUL EDX,ECX                        ; 00450dc1
    MOV CL,byte ptr [0x00c1a200]        ; 00450dc4 | g_CoronaDepthShift
    SAR EDX,CL                          ; 00450dca
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00450dcc
    XOR EAX,EAX                         ; 00450dd0
    MOV AL,byte ptr [ECX]               ; 00450dd2 | DAT_00ba8db8
    ADD EAX,EDX                         ; 00450dd4
    MOV byte ptr [ECX],AL               ; 00450dd6 | DAT_00ba8db8
    MOV EAX,0x1                         ; 00450dd8
        ;   Label: LAB_00450dd8
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00450ddd
    MOV EDI,dword ptr [ESP + 0x44]      ; 00450de1
    MOV EDX,dword ptr [ESP + 0x48]      ; 00450de5
    MOV CL,byte ptr [0x013bc260]        ; 00450de9 | g_CameraDownscaleIterations
    ADD EBX,0xc                         ; 00450def
    ADD ESI,0x4                         ; 00450df2
    ADD EDI,0xc                         ; 00450df5
    INC EDX                             ; 00450df8
    SHL EAX,CL                          ; 00450df9
    MOV ECX,dword ptr [ESP + 0x40]      ; 00450dfb
    SHL EAX,0x2                         ; 00450dff
    MOV dword ptr [ESP + 0x3c],ESI      ; 00450e02
    MOV dword ptr [ESP + 0x44],EDI      ; 00450e06
    MOV dword ptr [ESP + 0x48],EDX      ; 00450e0a
    ADD ECX,EAX                         ; 00450e0e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00450e10
    MOV dword ptr [ESP + 0x40],ECX      ; 00450e14
    INC EAX                             ; 00450e18
    MOV ECX,dword ptr [ESP + 0x38]      ; 00450e19
    MOV dword ptr [ESP + 0x4c],EAX      ; 00450e1d
    CMP EDX,ECX                         ; 00450e21
    JMP 0x00450cc0                      ; 00450e23
        ;   XREF to: 00450cc0 (UNCONDITIONAL_JUMP)  ; LAB_00450cc0


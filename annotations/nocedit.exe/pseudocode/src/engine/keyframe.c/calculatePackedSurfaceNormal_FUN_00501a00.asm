; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00(CVector3i * vertex_data, SSurfacePackedNormal * data)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   vertex_data
; SSurfacePackedNormal * Stack[0x8]:4   data
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
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30 at 0050230b
;   engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320 at 005023f9
;
; Referenced Globals:
;   double g_NormalTo16BitScale1 = 65535
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501a00
        ;   Label: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_00501a00
    PUSH ESI                            ; 00501a01
    PUSH EDI                            ; 00501a02
    PUSH EBP                            ; 00501a03
    SUB ESP,0x3c                        ; 00501a04
    MOV EBX,dword ptr [ESP + 0x50]      ; 00501a07
    MOV EDX,dword ptr [ESP + 0x54]      ; 00501a0b
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00501a0f
    LEA EAX,[ECX*0x4 + 0x0]             ; 00501a12
    SUB EAX,ECX                         ; 00501a19
    SHL EAX,0x2                         ; 00501a1b
    MOV ESI,dword ptr [EDX + 0x18]      ; 00501a1e
    LEA ECX,[EAX + EBX*0x1]             ; 00501a21
    LEA EAX,[ESI*0x4 + 0x0]             ; 00501a24
    SUB EAX,ESI                         ; 00501a2b
    MOV ESI,dword ptr [ECX]             ; 00501a2d
    SUB ESI,dword ptr [EBX + EAX*0x4]   ; 00501a2f
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x4] ; 00501a32
    MOV dword ptr [ESP + 0x2c],ESI      ; 00501a36
    MOV ESI,dword ptr [ECX + 0x4]       ; 00501a3a
    SUB ESI,EBP                         ; 00501a3d
    MOV dword ptr [ESP + 0x30],ESI      ; 00501a3f
    MOV ESI,dword ptr [ECX + 0x8]       ; 00501a43
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x8] ; 00501a46
    MOV EAX,ESI                         ; 00501a4a
    SUB EAX,EDI                         ; 00501a4c
    MOV ESI,dword ptr [EDX + 0x20]      ; 00501a4e
    MOV dword ptr [ESP + 0x34],EAX      ; 00501a51
    LEA EAX,[ESI*0x4 + 0x0]             ; 00501a55
    SUB EAX,ESI                         ; 00501a5c
    MOV EBP,dword ptr [ECX]             ; 00501a5e
    MOV ESI,dword ptr [EBX + EAX*0x4]   ; 00501a60
    SUB ESI,EBP                         ; 00501a63
    MOV dword ptr [ESP + 0x38],ESI      ; 00501a65
    FILD dword ptr [ESP + 0x34]         ; 00501a69
    FILD dword ptr [ESP + 0x38]         ; 00501a6d
    FST float ptr [ESP + 0x8]           ; 00501a71
    FXCH                                ; 00501a75
    FSTP float ptr [ESP]                ; 00501a77
    FMUL float ptr [ESP]                ; 00501a7a
    MOV EDI,dword ptr [ECX + 0x4]       ; 00501a7d
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x4] ; 00501a80
    FILD dword ptr [ESP + 0x2c]         ; 00501a84
    SUB ESI,EDI                         ; 00501a88
    MOV EBP,dword ptr [ECX + 0x8]       ; 00501a8a
    MOV dword ptr [ESP + 0x38],ESI      ; 00501a8d
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8] ; 00501a91
    FLD ST0                             ; 00501a95
    FILD dword ptr [ESP + 0x38]         ; 00501a97
    FSTP float ptr [ESP + 0xc]          ; 00501a9b
    FMUL float ptr [ESP + 0xc]          ; 00501a9f
    SUB EAX,EBP                         ; 00501aa3
    FILD dword ptr [ESP + 0x30]         ; 00501aa5
    MOV dword ptr [ESP + 0x38],EAX      ; 00501aa9
    FLD ST0                             ; 00501aad
    FILD dword ptr [ESP + 0x38]         ; 00501aaf
    FXCH                                ; 00501ab3
    FMUL ST1                            ; 00501ab5
    FXCH ST4                            ; 00501ab7
    FMULP                               ; 00501ab9
    FLD float ptr [ESP + 0xc]           ; 00501abb
    FMUL float ptr [ESP]                ; 00501abf
    FLD float ptr [ESP + 0x8]           ; 00501ac2
    FMULP ST3                           ; 00501ac6
    FSUBP ST4,ST0                       ; 00501ac8
    FSUBP ST4,ST0                       ; 00501aca
    FXCH ST2                            ; 00501acc
    FST float ptr [ESP + 0x28]          ; 00501ace
    FMUL float ptr [ESP + 0x28]         ; 00501ad2
    FXCH ST3                            ; 00501ad6
    FST float ptr [ESP + 0x24]          ; 00501ad8
    FMUL float ptr [ESP + 0x24]         ; 00501adc
    FXCH ST2                            ; 00501ae0
    FSUBP                               ; 00501ae2
    FXCH                                ; 00501ae4
    FADDP ST2,ST0                       ; 00501ae6
    FST float ptr [ESP + 0x20]          ; 00501ae8
    FMUL float ptr [ESP + 0x20]         ; 00501aec
    FADDP                               ; 00501af0
    FSQRT                               ; 00501af2
    FSTP float ptr [ESP + 0x1c]         ; 00501af4
    TEST dword ptr [ESP + 0x1c],0x7fffffff ; 00501af8
    JZ 0x00501baf                       ; 00501b00
        ;   XREF to: 00501baf (CONDITIONAL_JUMP)  ; LAB_00501baf
    FLD1                                ; 00501b06
        ;   Label: LAB_00501b06
    FLD float ptr [ESP + 0x28]          ; 00501b08
    FXCH                                ; 00501b0c
    FDIV float ptr [ESP + 0x1c]         ; 00501b0e
    FXCH                                ; 00501b12
    FMUL ST1                            ; 00501b14
    FLD float ptr [ESP + 0x24]          ; 00501b16
    FMUL ST2                            ; 00501b1a
    FLD float ptr [ESP + 0x20]          ; 00501b1c
    MOV ECX,dword ptr [EDX + 0x18]      ; 00501b20
    FMULP ST3                           ; 00501b23
    LEA EAX,[ECX*0x4 + 0x0]             ; 00501b25
    FXCH                                ; 00501b2c
    FLD double ptr [0x00630c98]         ; 00501b2e | g_NormalTo16BitScale1
    FXCH                                ; 00501b34
    FMUL ST1                            ; 00501b36
    SUB EAX,ECX                         ; 00501b38
    FXCH ST2                            ; 00501b3a
    FMUL ST1                            ; 00501b3c
    FILD dword ptr [EBX + EAX*0x4 + 0x4] ; 00501b3e
    FXCH                                ; 00501b42
    FSTP float ptr [ESP + 0x24]         ; 00501b44
    FMUL float ptr [ESP + 0x24]         ; 00501b48
    FXCH ST2                            ; 00501b4c
    FSTP float ptr [ESP + 0x28]         ; 00501b4e
    FILD dword ptr [EBX + EAX*0x4]      ; 00501b52
    FMUL float ptr [ESP + 0x28]         ; 00501b55
    FXCH ST3                            ; 00501b59
    FMULP                               ; 00501b5b
    FXCH ST2                            ; 00501b5d
    FADDP                               ; 00501b5f
    FXCH                                ; 00501b61
    FSTP float ptr [ESP + 0x20]         ; 00501b63
    FILD dword ptr [EBX + EAX*0x4 + 0x8] ; 00501b67
    FMUL float ptr [ESP + 0x20]         ; 00501b6b
    FLD float ptr [ESP + 0x28]          ; 00501b6f
    FLD float ptr [ESP + 0x24]          ; 00501b73
    FLD float ptr [ESP + 0x20]          ; 00501b77
    FXCH ST2                            ; 00501b7b
    CALL crt_math.c_round_FUN_005fe6b0  ; 00501b7d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00501b82
    CALL crt_math.c_round_FUN_005fe6b0  ; 00501b84
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 00501b89
    CALL crt_math.c_round_FUN_005fe6b0  ; 00501b8b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00501b90
    FISTP dword ptr [EDX + 0x8]         ; 00501b92
    FXCH                                ; 00501b95
    FISTP dword ptr [EDX + 0xc]         ; 00501b97
    FISTP dword ptr [EDX + 0x10]        ; 00501b9a
    FADDP                               ; 00501b9d
    CALL crt_math.c_round_FUN_005fe6b0  ; 00501b9f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EDX + 0x14]        ; 00501ba4
    ADD ESP,0x3c                        ; 00501ba7
    POP EBP                             ; 00501baa
    POP EDI                             ; 00501bab
    POP ESI                             ; 00501bac
    POP EBX                             ; 00501bad
    RET                                 ; 00501bae
    MOV dword ptr [ESP + 0x1c],0x477fff00 ; 00501baf
        ;   Label: LAB_00501baf
    JMP 0x00501b06                      ; 00501bb7
        ;   XREF to: 00501b06 (UNCONDITIONAL_JUMP)  ; LAB_00501b06


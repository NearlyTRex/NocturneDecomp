; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keyframe_c_calculatePackedSurfaceNormal_FUN_004deb20(int param_1,int param_2)
;
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
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004df050 at 004df42b
;   engine_keyframe.c_recomputeKeyFrameNormals_FUN_004df440 at 004df519
;
; Referenced Globals:
;   undefined4 DAT_005c66e5
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004deb20
        ;   Label: engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004deb20
    PUSH ESI                            ; 004deb21
    PUSH EDI                            ; 004deb22
    PUSH EBP                            ; 004deb23
    SUB ESP,0x3c                        ; 004deb24
    MOV EBX,dword ptr [ESP + 0x50]      ; 004deb27
    MOV EDX,dword ptr [ESP + 0x54]      ; 004deb2b
    MOV ECX,dword ptr [EDX + 0x1c]      ; 004deb2f
    LEA EAX,[ECX*0x4 + 0x0]             ; 004deb32
    SUB EAX,ECX                         ; 004deb39
    SHL EAX,0x2                         ; 004deb3b
    MOV ESI,dword ptr [EDX + 0x18]      ; 004deb3e
    LEA ECX,[EAX + EBX*0x1]             ; 004deb41
    LEA EAX,[ESI*0x4 + 0x0]             ; 004deb44
    SUB EAX,ESI                         ; 004deb4b
    MOV ESI,dword ptr [ECX]             ; 004deb4d
    SUB ESI,dword ptr [EBX + EAX*0x4]   ; 004deb4f
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x4] ; 004deb52
    MOV dword ptr [ESP + 0x2c],ESI      ; 004deb56
    MOV ESI,dword ptr [ECX + 0x4]       ; 004deb5a
    SUB ESI,EBP                         ; 004deb5d
    MOV dword ptr [ESP + 0x30],ESI      ; 004deb5f
    MOV ESI,dword ptr [ECX + 0x8]       ; 004deb63
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x8] ; 004deb66
    MOV EAX,ESI                         ; 004deb6a
    SUB EAX,EDI                         ; 004deb6c
    MOV ESI,dword ptr [EDX + 0x20]      ; 004deb6e
    MOV dword ptr [ESP + 0x34],EAX      ; 004deb71
    LEA EAX,[ESI*0x4 + 0x0]             ; 004deb75
    SUB EAX,ESI                         ; 004deb7c
    MOV EBP,dword ptr [ECX]             ; 004deb7e
    MOV ESI,dword ptr [EBX + EAX*0x4]   ; 004deb80
    SUB ESI,EBP                         ; 004deb83
    MOV dword ptr [ESP + 0x38],ESI      ; 004deb85
    FILD dword ptr [ESP + 0x34]         ; 004deb89
    FILD dword ptr [ESP + 0x38]         ; 004deb8d
    FST float ptr [ESP + 0x8]           ; 004deb91
    FXCH                                ; 004deb95
    FSTP float ptr [ESP]                ; 004deb97
    FMUL float ptr [ESP]                ; 004deb9a
    MOV EDI,dword ptr [ECX + 0x4]       ; 004deb9d
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x4] ; 004deba0
    FILD dword ptr [ESP + 0x2c]         ; 004deba4
    SUB ESI,EDI                         ; 004deba8
    MOV EBP,dword ptr [ECX + 0x8]       ; 004debaa
    MOV dword ptr [ESP + 0x38],ESI      ; 004debad
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x8] ; 004debb1
    FLD ST0                             ; 004debb5
    FILD dword ptr [ESP + 0x38]         ; 004debb7
    FSTP float ptr [ESP + 0xc]          ; 004debbb
    FMUL float ptr [ESP + 0xc]          ; 004debbf
    SUB EAX,EBP                         ; 004debc3
    FILD dword ptr [ESP + 0x30]         ; 004debc5
    MOV dword ptr [ESP + 0x38],EAX      ; 004debc9
    FLD ST0                             ; 004debcd
    FILD dword ptr [ESP + 0x38]         ; 004debcf
    FXCH                                ; 004debd3
    FMUL ST1                            ; 004debd5
    FXCH ST4                            ; 004debd7
    FMULP                               ; 004debd9
    FLD float ptr [ESP + 0xc]           ; 004debdb
    FMUL float ptr [ESP]                ; 004debdf
    FLD float ptr [ESP + 0x8]           ; 004debe2
    FMULP ST3                           ; 004debe6
    FSUBP ST4,ST0                       ; 004debe8
    FSUBP ST4,ST0                       ; 004debea
    FXCH ST2                            ; 004debec
    FST float ptr [ESP + 0x28]          ; 004debee
    FMUL float ptr [ESP + 0x28]         ; 004debf2
    FXCH ST3                            ; 004debf6
    FST float ptr [ESP + 0x24]          ; 004debf8
    FMUL float ptr [ESP + 0x24]         ; 004debfc
    FXCH ST2                            ; 004dec00
    FSUBP                               ; 004dec02
    FXCH                                ; 004dec04
    FADDP ST2,ST0                       ; 004dec06
    FST float ptr [ESP + 0x20]          ; 004dec08
    FMUL float ptr [ESP + 0x20]         ; 004dec0c
    FADDP                               ; 004dec10
    FSQRT                               ; 004dec12
    FSTP float ptr [ESP + 0x1c]         ; 004dec14
    TEST dword ptr [ESP + 0x1c],0x7fffffff ; 004dec18
    JZ 0x004deccf                       ; 004dec20
        ;   XREF to: 004deccf (CONDITIONAL_JUMP)  ; LAB_004deccf
    FLD1                                ; 004dec26
        ;   Label: LAB_004dec26
    FLD float ptr [ESP + 0x28]          ; 004dec28
    FXCH                                ; 004dec2c
    FDIV float ptr [ESP + 0x1c]         ; 004dec2e
    FXCH                                ; 004dec32
    FMUL ST1                            ; 004dec34
    FLD float ptr [ESP + 0x24]          ; 004dec36
    FMUL ST2                            ; 004dec3a
    FLD float ptr [ESP + 0x20]          ; 004dec3c
    MOV ECX,dword ptr [EDX + 0x18]      ; 004dec40
    FMULP ST3                           ; 004dec43
    LEA EAX,[ECX*0x4 + 0x0]             ; 004dec45
    FXCH                                ; 004dec4c
    FLD double ptr [0x005c66e5]         ; 004dec4e | DAT_005c66e5
    FXCH                                ; 004dec54
    FMUL ST1                            ; 004dec56
    SUB EAX,ECX                         ; 004dec58
    FXCH ST2                            ; 004dec5a
    FMUL ST1                            ; 004dec5c
    FILD dword ptr [EBX + EAX*0x4 + 0x4] ; 004dec5e
    FXCH                                ; 004dec62
    FSTP float ptr [ESP + 0x24]         ; 004dec64
    FMUL float ptr [ESP + 0x24]         ; 004dec68
    FXCH ST2                            ; 004dec6c
    FSTP float ptr [ESP + 0x28]         ; 004dec6e
    FILD dword ptr [EBX + EAX*0x4]      ; 004dec72
    FMUL float ptr [ESP + 0x28]         ; 004dec75
    FXCH ST3                            ; 004dec79
    FMULP                               ; 004dec7b
    FXCH ST2                            ; 004dec7d
    FADDP                               ; 004dec7f
    FXCH                                ; 004dec81
    FSTP float ptr [ESP + 0x20]         ; 004dec83
    FILD dword ptr [EBX + EAX*0x4 + 0x8] ; 004dec87
    FMUL float ptr [ESP + 0x20]         ; 004dec8b
    FLD float ptr [ESP + 0x28]          ; 004dec8f
    FLD float ptr [ESP + 0x24]          ; 004dec93
    FLD float ptr [ESP + 0x20]          ; 004dec97
    FXCH ST2                            ; 004dec9b
    CALL crt_math.c_round_FUN_005a3120  ; 004dec9d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004deca2
    CALL crt_math.c_round_FUN_005a3120  ; 004deca4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 004deca9
    CALL crt_math.c_round_FUN_005a3120  ; 004decab
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004decb0
    FISTP dword ptr [EDX + 0x8]         ; 004decb2
    FXCH                                ; 004decb5
    FISTP dword ptr [EDX + 0xc]         ; 004decb7
    FISTP dword ptr [EDX + 0x10]        ; 004decba
    FADDP                               ; 004decbd
    CALL crt_math.c_round_FUN_005a3120  ; 004decbf
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EDX + 0x14]        ; 004decc4
    ADD ESP,0x3c                        ; 004decc7
    POP EBP                             ; 004decca
    POP EDI                             ; 004deccb
    POP ESI                             ; 004deccc
    POP EBX                             ; 004deccd
    RET                                 ; 004decce
    MOV dword ptr [ESP + 0x1c],0x477fff00 ; 004deccf
        ;   Label: LAB_004deccf
    JMP 0x004dec26                      ; 004decd7
        ;   XREF to: 004dec26 (UNCONDITIONAL_JUMP)  ; LAB_004dec26


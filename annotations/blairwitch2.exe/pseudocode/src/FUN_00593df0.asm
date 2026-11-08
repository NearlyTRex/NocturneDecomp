; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00593df0(float *param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[17]:
;   FUN_004186c0 at 004188b3
;   FUN_00429b40 at 00429bf9
;   FUN_00436e80 at 00437067
;   FUN_00438cf0 at 00438e8a
;   FUN_004555c0 at 00455927
;   FUN_00455d10 at 00455f3d
;   FUN_004562a0 at 004564ec
;   FUN_004afa20 at 004afcea
;   FUN_00518310 at 00518426
;   FUN_00520140 at 005202b9
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 DAT_005eeda6
;
; Called Functions:
;   FUN_005b9989
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593df0
        ;   Label: FUN_00593df0
    PUSH EDI                            ; 00593df1
    PUSH EBP                            ; 00593df2
    MOV EBP,ESP                         ; 00593df3
    SUB ESP,0x54                        ; 00593df5
    AND ESP,0xfffffff8                  ; 00593df8
    MOV EDX,dword ptr [EBP + 0x10]      ; 00593dfb
    MOV ECX,ESI                         ; 00593dfe
    MOV ESI,dword ptr [EBP + 0x14]      ; 00593e00
    FLDZ                                ; 00593e03
    FCOMP float ptr [EBP + 0x18]        ; 00593e05
    FNSTSW AX                           ; 00593e08
    SAHF                                ; 00593e0a
    JNC 0x00593f0f                      ; 00593e0b
        ;   XREF to: 00593f0f (CONDITIONAL_JUMP)  ; LAB_00593f0f
    CMP dword ptr [EBP + 0x18],0x3f800000 ; 00593e11
    JGE 0x00593f17                      ; 00593e18
        ;   XREF to: 00593f17 (CONDITIONAL_JUMP)  ; LAB_00593f17
    FLD float ptr [EDX + 0x4]           ; 00593e1e
    FMUL float ptr [ESI + 0x4]          ; 00593e21
    FLD float ptr [EDX + 0x8]           ; 00593e24
    FMUL float ptr [ESI + 0x8]          ; 00593e27
    FADDP                               ; 00593e2a
    MOV EAX,dword ptr [ESI]             ; 00593e2c
    FLD float ptr [EDX + 0xc]           ; 00593e2e
    FMUL float ptr [ESI + 0xc]          ; 00593e31
    MOV dword ptr [ESP + 0x38],EAX      ; 00593e34
    FADDP                               ; 00593e38
    MOV EAX,dword ptr [ESI + 0x4]       ; 00593e3a
    FLD float ptr [EDX]                 ; 00593e3d
    FMUL float ptr [ESI]                ; 00593e3f
    MOV dword ptr [ESP + 0x50],EAX      ; 00593e41
    MOV EAX,dword ptr [ESI + 0x8]       ; 00593e45
    FLDZ                                ; 00593e48
    MOV dword ptr [ESP + 0x3c],EAX      ; 00593e4a
    MOV EAX,dword ptr [ESI + 0xc]       ; 00593e4e
    FXCH                                ; 00593e51
    FADDP ST2,ST0                       ; 00593e53
    MOV dword ptr [ESP + 0x4c],EAX      ; 00593e55
    FXCH                                ; 00593e59
    FSTP float ptr [ESP]                ; 00593e5b
    FCOMP float ptr [ESP]               ; 00593e5e
    FNSTSW AX                           ; 00593e61
    SAHF                                ; 00593e63
    JA 0x00593f1d                       ; 00593e64
        ;   XREF to: 00593f1d (CONDITIONAL_JUMP)  ; LAB_00593f1d
    FLD1                                ; 00593e6a
        ;   Label: LAB_00593e6a
    FSUB float ptr [EBP + 0x18]         ; 00593e6c
    FLD float ptr [ESP]                 ; 00593e6f
    FXCH                                ; 00593e72
    FSTP float ptr [ESP + 0x48]         ; 00593e74
    FCOMP float ptr [0x005eeda6]        ; 00593e78 | DAT_005eeda6
    FNSTSW AX                           ; 00593e7e
    SAHF                                ; 00593e80
    JBE 0x00593f58                      ; 00593e81
        ;   XREF to: 00593f58 (CONDITIONAL_JUMP)  ; LAB_00593f58
    MOV EAX,dword ptr [ESP + 0x48]      ; 00593e87
    MOV dword ptr [ESP + 0x40],EAX      ; 00593e8b
    MOV EAX,dword ptr [EBP + 0x18]      ; 00593e8f
    MOV dword ptr [ESP + 0x44],EAX      ; 00593e92
    FLD float ptr [ESP + 0x40]          ; 00593e96
        ;   Label: LAB_00593e96
    FLD ST0                             ; 00593e9a
    FMUL float ptr [EDX + 0x4]          ; 00593e9c
    FLD ST1                             ; 00593e9f
    FMUL float ptr [EDX + 0x8]          ; 00593ea1
    FLD ST2                             ; 00593ea4
    FMUL float ptr [EDX + 0xc]          ; 00593ea6
    FXCH ST3                            ; 00593ea9
    FMUL float ptr [EDX]                ; 00593eab
    FLD float ptr [ESP + 0x44]          ; 00593ead
    FMUL float ptr [ESP + 0x50]         ; 00593eb1
    FLD float ptr [ESP + 0x44]          ; 00593eb5
    FMUL float ptr [ESP + 0x3c]         ; 00593eb9
    FLD float ptr [ESP + 0x44]          ; 00593ebd
    FMUL float ptr [ESP + 0x4c]         ; 00593ec1
    FXCH ST2                            ; 00593ec5
    FADDP ST5,ST0                       ; 00593ec7
    FLD float ptr [ESP + 0x44]          ; 00593ec9
    FMUL float ptr [ESP + 0x38]         ; 00593ecd
    LEA EDI,[ESP + 0x4]                 ; 00593ed1
    LEA ESI,[ESP + 0x14]                ; 00593ed5
    FXCH                                ; 00593ed9
    FADDP ST4,ST0                       ; 00593edb
    FXCH                                ; 00593edd
    FADDP ST5,ST0                       ; 00593edf
    FADDP                               ; 00593ee1
    FXCH                                ; 00593ee3
    FSTP float ptr [ESP + 0x1c]         ; 00593ee5
    FXCH ST2                            ; 00593ee9
    FSTP float ptr [ESP + 0x20]         ; 00593eeb
    FXCH                                ; 00593eef
    FSTP float ptr [ESP + 0x14]         ; 00593ef1
    FSTP float ptr [ESP + 0x18]         ; 00593ef5
    MOVSD ES:EDI,ESI                    ; 00593ef9
        ;   Label: LAB_00593ef9
    MOVSD ES:EDI,ESI                    ; 00593efa
    MOVSD ES:EDI,ESI                    ; 00593efb
    MOVSD ES:EDI,ESI                    ; 00593efc
    LEA ESI,[ESP + 0x4]                 ; 00593efd
    MOV EDI,ECX                         ; 00593f01
    MOVSD ES:EDI,ESI                    ; 00593f03
    MOVSD ES:EDI,ESI                    ; 00593f04
    MOVSD ES:EDI,ESI                    ; 00593f05
    MOVSD ES:EDI,ESI                    ; 00593f06
    MOV EAX,ECX                         ; 00593f07
    MOV ESP,EBP                         ; 00593f09
    POP EBP                             ; 00593f0b
    POP EDI                             ; 00593f0c
    POP EBX                             ; 00593f0d
    RET                                 ; 00593f0e
    LEA EDI,[ESP + 0x4]                 ; 00593f0f
        ;   Label: LAB_00593f0f
    MOV ESI,EDX                         ; 00593f13
    JMP 0x00593ef9                      ; 00593f15
        ;   XREF to: 00593ef9 (UNCONDITIONAL_JUMP)  ; LAB_00593ef9
    LEA EDI,[ESP + 0x4]                 ; 00593f17
        ;   Label: LAB_00593f17
    JMP 0x00593ef9                      ; 00593f1b
        ;   XREF to: 00593ef9 (UNCONDITIONAL_JUMP)  ; LAB_00593ef9
    MOV AH,byte ptr [ESP + 0x3b]        ; 00593f1d
        ;   Label: LAB_00593f1d
    MOV BL,byte ptr [ESP + 0x53]        ; 00593f21
    XOR AH,0x80                         ; 00593f25
    XOR BL,0x80                         ; 00593f28
    MOV byte ptr [ESP + 0x3b],AH        ; 00593f2b
    MOV AL,byte ptr [ESP + 0x4f]        ; 00593f2f
    MOV byte ptr [ESP + 0x53],BL        ; 00593f33
    XOR AL,0x80                         ; 00593f37
    MOV BH,byte ptr [ESP + 0x3f]        ; 00593f39
    MOV byte ptr [ESP + 0x4f],AL        ; 00593f3d
    MOV AH,byte ptr [ESP + 0x3]         ; 00593f41
    XOR BH,0x80                         ; 00593f45
    XOR AH,0x80                         ; 00593f48
    MOV byte ptr [ESP + 0x3f],BH        ; 00593f4b
    MOV byte ptr [ESP + 0x3],AH         ; 00593f4f
    JMP 0x00593e6a                      ; 00593f53
        ;   XREF to: 00593e6a (UNCONDITIONAL_JUMP)  ; LAB_00593e6a
    FLD float ptr [ESP]                 ; 00593f58
        ;   Label: LAB_00593f58
    FLD ST0                             ; 00593f5b
    FMUL ST1                            ; 00593f5d
    FLD1                                ; 00593f5f
    FSUBRP                              ; 00593f61
    FSQRT                               ; 00593f63
    FLD ST0                             ; 00593f65
    FLD ST2                             ; 00593f67
    FXCH                                ; 00593f69
    CALL FUN_005b9989                   ; 00593f6b
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9989()
    FSTP ST2                            ; 00593f70
    FLD float ptr [ESP + 0x48]          ; 00593f72
    FMUL ST2                            ; 00593f76
    FSIN                                ; 00593f78
    FLD float ptr [EBP + 0x18]          ; 00593f7a
    FMULP ST3                           ; 00593f7d
    FXCH ST2                            ; 00593f7f
    FSIN                                ; 00593f81
    FLD1                                ; 00593f83
    FDIVRP ST2,ST0                      ; 00593f85
    FXCH ST2                            ; 00593f87
    FMUL ST1                            ; 00593f89
    FXCH ST2                            ; 00593f8b
    FMULP                               ; 00593f8d
    FXCH                                ; 00593f8f
    FSTP float ptr [ESP + 0x40]         ; 00593f91
    FSTP float ptr [ESP + 0x44]         ; 00593f95
    JMP 0x00593e96                      ; 00593f99
        ;   XREF to: 00593e96 (UNCONDITIONAL_JUMP)  ; LAB_00593e96


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f2f20(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d09918
;   undefined4 DAT_01d0991c
;   undefined4 DAT_01d0c398
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2f20
        ;   Label: engine_mini3d.cpp_FUN_004f2f20
    PUSH ESI                            ; 004f2f21
    PUSH EBP                            ; 004f2f22
    SUB ESP,0xc                         ; 004f2f23
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004f2f26
    MOV ESI,dword ptr [ESP + 0x20]      ; 004f2f2a
    MOV EDX,dword ptr [0x01d0991c]      ; 004f2f2e | DAT_01d0991c
    INC EDX                             ; 004f2f34
    MOV dword ptr [0x01d0991c],EDX      ; 004f2f35 | DAT_01d0991c
    CMP EDX,0x9                         ; 004f2f3b
    JG 0x004f30ee                       ; 004f2f3e
        ;   XREF to: 004f30ee (CONDITIONAL_JUMP)  ; LAB_004f30ee
    MOV EAX,[0x01d0991c]                ; 004f2f44 | DAT_01d0991c
        ;   Label: LAB_004f2f44
    SHL EAX,0x2                         ; 004f2f49
    MOV EDX,EAX                         ; 004f2f4c
    SHL EAX,0x4                         ; 004f2f4e
    SUB EAX,EDX                         ; 004f2f51
    MOV EDX,0x1d09920                   ; 004f2f53
    ADD EDX,EAX                         ; 004f2f58
    MOV EAX,[0x01d09918]                ; 004f2f5a | DAT_01d09918
    FLD float ptr [EAX + 0x28]          ; 004f2f5f
    FSUB float ptr [ESI + 0x4]          ; 004f2f62
    FLD ST0                             ; 004f2f65
    FMUL float ptr [EBX + 0xc]          ; 004f2f67
    FLD float ptr [EAX + 0x24]          ; 004f2f6a
    FSUB float ptr [ESI]                ; 004f2f6d
    FLD ST0                             ; 004f2f6f
    FMUL float ptr [EBX]                ; 004f2f71
    FLD float ptr [EAX + 0x2c]          ; 004f2f73
    FXCH                                ; 004f2f76
    FADDP ST3,ST0                       ; 004f2f78
    FSUB float ptr [ESI + 0x8]          ; 004f2f7a
    FLD ST0                             ; 004f2f7d
    FMUL float ptr [EBX + 0x18]         ; 004f2f7f
    FADDP ST3,ST0                       ; 004f2f82
    FLD ST1                             ; 004f2f84
    FXCH ST3                            ; 004f2f86
    FSTP float ptr [EDX + 0x24]         ; 004f2f88
    FXCH ST2                            ; 004f2f8b
    FMUL float ptr [EBX + 0x4]          ; 004f2f8d
    FLD ST3                             ; 004f2f90
    FMUL float ptr [EBX + 0x10]         ; 004f2f92
    FADDP                               ; 004f2f95
    FLD ST2                             ; 004f2f97
    FMUL float ptr [EBX + 0x1c]         ; 004f2f99
    FADDP                               ; 004f2f9c
    FSTP float ptr [EDX + 0x28]         ; 004f2f9e
    FMUL float ptr [EBX + 0x8]          ; 004f2fa1
    FXCH ST2                            ; 004f2fa4
    FMUL float ptr [EBX + 0x14]         ; 004f2fa6
    FADDP ST2,ST0                       ; 004f2fa9
    FMUL float ptr [EBX + 0x20]         ; 004f2fab
    FADDP                               ; 004f2fae
    FSTP float ptr [EDX + 0x2c]         ; 004f2fb0
    FLD float ptr [EAX + 0x34]          ; 004f2fb3
    FMUL float ptr [EBX + 0xc]          ; 004f2fb6
    FLD float ptr [EAX + 0x30]          ; 004f2fb9
    FMUL float ptr [EBX]                ; 004f2fbc
    FADDP                               ; 004f2fbe
    FLD float ptr [EAX + 0x38]          ; 004f2fc0
    FMUL float ptr [EBX + 0x18]         ; 004f2fc3
    FADDP                               ; 004f2fc6
    FSTP float ptr [EDX + 0x30]         ; 004f2fc8
    FLD float ptr [EAX + 0x30]          ; 004f2fcb
    FMUL float ptr [EBX + 0x4]          ; 004f2fce
    FLD float ptr [EAX + 0x34]          ; 004f2fd1
    FMUL float ptr [EBX + 0x10]         ; 004f2fd4
    FADDP                               ; 004f2fd7
    FLD float ptr [EAX + 0x38]          ; 004f2fd9
    FMUL float ptr [EBX + 0x1c]         ; 004f2fdc
    FADDP                               ; 004f2fdf
    FSTP float ptr [EDX + 0x34]         ; 004f2fe1
    FLD float ptr [EAX + 0x30]          ; 004f2fe4
    FMUL float ptr [EBX + 0x8]          ; 004f2fe7
    FLD float ptr [EAX + 0x34]          ; 004f2fea
    FMUL float ptr [EBX + 0x14]         ; 004f2fed
    FADDP                               ; 004f2ff0
    FLD float ptr [EAX + 0x38]          ; 004f2ff2
    FMUL float ptr [EBX + 0x20]         ; 004f2ff5
    FADDP                               ; 004f2ff8
    FSTP float ptr [EDX + 0x38]         ; 004f2ffa
    FLD float ptr [EBX + 0xc]           ; 004f2ffd
    FMUL float ptr [EAX + 0xc]          ; 004f3000
    FLD float ptr [EBX]                 ; 004f3003
    FMUL float ptr [EAX]                ; 004f3005
    FADDP                               ; 004f3007
    FLD float ptr [EBX + 0x18]          ; 004f3009
    FMUL float ptr [EAX + 0x18]         ; 004f300c
    FADDP                               ; 004f300f
    FSTP float ptr [EDX]                ; 004f3011
    FLD float ptr [EBX + 0xc]           ; 004f3013
    FMUL float ptr [EAX + 0x10]         ; 004f3016
    FLD float ptr [EBX]                 ; 004f3019
    FMUL float ptr [EAX + 0x4]          ; 004f301b
    FADDP                               ; 004f301e
    FLD float ptr [EBX + 0x18]          ; 004f3020
    FMUL float ptr [EAX + 0x1c]         ; 004f3023
    FADDP                               ; 004f3026
    FSTP float ptr [EDX + 0x4]          ; 004f3028
    FLD float ptr [EBX + 0xc]           ; 004f302b
    FMUL float ptr [EAX + 0x14]         ; 004f302e
    FLD float ptr [EBX]                 ; 004f3031
    FMUL float ptr [EAX + 0x8]          ; 004f3033
    FADDP                               ; 004f3036
    FLD float ptr [EBX + 0x18]          ; 004f3038
    FMUL float ptr [EAX + 0x20]         ; 004f303b
    FADDP                               ; 004f303e
    FSTP float ptr [EDX + 0x8]          ; 004f3040
    FLD float ptr [EBX + 0x10]          ; 004f3043
    FMUL float ptr [EAX + 0xc]          ; 004f3046
    FLD float ptr [EBX + 0x4]           ; 004f3049
    FMUL float ptr [EAX]                ; 004f304c
    FADDP                               ; 004f304e
    FLD float ptr [EBX + 0x1c]          ; 004f3050
    FMUL float ptr [EAX + 0x18]         ; 004f3053
    FADDP                               ; 004f3056
    FSTP float ptr [EDX + 0xc]          ; 004f3058
    FLD float ptr [EBX + 0x4]           ; 004f305b
    FMUL float ptr [EAX + 0x4]          ; 004f305e
    FLD float ptr [EBX + 0x10]          ; 004f3061
    FMUL float ptr [EAX + 0x10]         ; 004f3064
    FADDP                               ; 004f3067
    FLD float ptr [EBX + 0x1c]          ; 004f3069
    FMUL float ptr [EAX + 0x1c]         ; 004f306c
    FADDP                               ; 004f306f
    FSTP float ptr [EDX + 0x10]         ; 004f3071
    FLD float ptr [EBX + 0x4]           ; 004f3074
    FMUL float ptr [EAX + 0x8]          ; 004f3077
    FLD float ptr [EBX + 0x10]          ; 004f307a
    FMUL float ptr [EAX + 0x14]         ; 004f307d
    FADDP                               ; 004f3080
    FLD float ptr [EBX + 0x1c]          ; 004f3082
    FMUL float ptr [EAX + 0x20]         ; 004f3085
    FADDP                               ; 004f3088
    FSTP float ptr [EDX + 0x14]         ; 004f308a
    FLD float ptr [EBX + 0x14]          ; 004f308d
    FMUL float ptr [EAX + 0xc]          ; 004f3090
    FLD float ptr [EBX + 0x8]           ; 004f3093
    FMUL float ptr [EAX]                ; 004f3096
    FADDP                               ; 004f3098
    FLD float ptr [EBX + 0x20]          ; 004f309a
    FMUL float ptr [EAX + 0x18]         ; 004f309d
    FADDP                               ; 004f30a0
    FSTP float ptr [EDX + 0x18]         ; 004f30a2
    FLD float ptr [EBX + 0x8]           ; 004f30a5
    FMUL float ptr [EAX + 0x4]          ; 004f30a8
    FLD float ptr [EBX + 0x14]          ; 004f30ab
    FMUL float ptr [EAX + 0x10]         ; 004f30ae
    FADDP                               ; 004f30b1
    FLD float ptr [EBX + 0x20]          ; 004f30b3
    FMUL float ptr [EAX + 0x1c]         ; 004f30b6
    FADDP                               ; 004f30b9
    FSTP float ptr [EDX + 0x1c]         ; 004f30bb
    FLD float ptr [EBX + 0x8]           ; 004f30be
    FMUL float ptr [EAX + 0x8]          ; 004f30c1
    FLD float ptr [EBX + 0x14]          ; 004f30c4
    FMUL float ptr [EAX + 0x14]         ; 004f30c7
    FADDP                               ; 004f30ca
    FLD float ptr [EBX + 0x20]          ; 004f30cc
    FMUL float ptr [EAX + 0x20]         ; 004f30cf
    MOV dword ptr [0x01d09918],EDX      ; 004f30d2 | DAT_01d09918
    MOV EAX,0x1                         ; 004f30d8
    FADDP                               ; 004f30dd
    MOV [0x01d0c398],EAX                ; 004f30df | DAT_01d0c398
    FSTP float ptr [EDX + 0x20]         ; 004f30e4
    ADD ESP,0xc                         ; 004f30e7
    POP EBP                             ; 004f30ea
    POP ESI                             ; 004f30eb
    POP EBX                             ; 004f30ec
    RET                                 ; 004f30ed
    PUSH EDI                            ; 004f30ee
        ;   Label: LAB_004f30ee
    MOV EDI,0x5ddb16                    ; 004f30ef
    MOV EBP,0x437                       ; 004f30f4
    PUSH 0x5ddb2b                       ; 004f30f9
    MOV dword ptr [0x01d046a0],EDI      ; 004f30fe | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004f3104 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f310a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f310f
    POP EDI                             ; 004f3112
    JMP 0x004f2f44                      ; 004f3113
        ;   XREF to: 004f2f44 (UNCONDITIONAL_JUMP)  ; LAB_004f2f44


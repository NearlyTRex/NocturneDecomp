; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dirmat_cpp_CMatrix3x3f_multiply_FUN_0044dfb0(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044dfb0
        ;   Label: core_dirmat.cpp_CMatrix3x3f_multiply_FUN_0044dfb0
    PUSH EDI                            ; 0044dfb1
    SUB ESP,0x28                        ; 0044dfb2
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044dfb5
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044dfb9
    MOV EBX,ESI                         ; 0044dfbd
    FLD float ptr [EDX + 0x4]           ; 0044dfbf
    FMUL float ptr [EAX + 0xc]          ; 0044dfc2
    FLD float ptr [EDX + 0x4]           ; 0044dfc5
    FMUL float ptr [EAX + 0x10]         ; 0044dfc8
    FLD float ptr [EDX + 0x4]           ; 0044dfcb
    FMUL float ptr [EAX + 0x14]         ; 0044dfce
    FLD float ptr [EDX + 0x10]          ; 0044dfd1
    FMUL float ptr [EAX + 0xc]          ; 0044dfd4
    FLD float ptr [EDX + 0xc]           ; 0044dfd7
    FMUL float ptr [EAX + 0x4]          ; 0044dfda
    FLD float ptr [EDX]                 ; 0044dfdd
    FMUL float ptr [EAX]                ; 0044dfdf
    FLD float ptr [EDX]                 ; 0044dfe1
    FMUL float ptr [EAX + 0x4]          ; 0044dfe3
    FXCH                                ; 0044dfe6
    FADDP ST6,ST0                       ; 0044dfe8
    FADDP ST4,ST0                       ; 0044dfea
    FLD float ptr [EDX + 0x8]           ; 0044dfec
    FMUL float ptr [EAX + 0x18]         ; 0044dfef
    FLD float ptr [EDX + 0x8]           ; 0044dff2
    FMUL float ptr [EAX + 0x1c]         ; 0044dff5
    FXCH                                ; 0044dff8
    FADDP ST6,ST0                       ; 0044dffa
    FLD float ptr [EDX]                 ; 0044dffc
    FXCH                                ; 0044dffe
    FADDP ST5,ST0                       ; 0044e000
    FMUL float ptr [EAX + 0x8]          ; 0044e002
    FXCH ST4                            ; 0044e005
    FSTP float ptr [ESP + 0x4]          ; 0044e007
    FLD float ptr [EDX + 0xc]           ; 0044e00b
    FXCH ST4                            ; 0044e00e
    FADDP ST3,ST0                       ; 0044e010
    FXCH ST3                            ; 0044e012
    FMUL float ptr [EAX + 0x8]          ; 0044e014
    FLD float ptr [EDX + 0x8]           ; 0044e017
    FMUL float ptr [EAX + 0x20]         ; 0044e01a
    FLD float ptr [EDX + 0xc]           ; 0044e01d
    FXCH                                ; 0044e020
    FADDP ST4,ST0                       ; 0044e022
    FMUL float ptr [EAX]                ; 0044e024
    FXCH ST3                            ; 0044e026
    FSTP float ptr [ESP + 0x8]          ; 0044e028
    FLD float ptr [EDX + 0x1c]          ; 0044e02c
    FXCH ST3                            ; 0044e02f
    FADDP ST2,ST0                       ; 0044e031
    FXCH ST2                            ; 0044e033
    FMUL float ptr [EAX + 0xc]          ; 0044e035
    FLD float ptr [EDX + 0x14]          ; 0044e038
    FMUL float ptr [EAX + 0x18]         ; 0044e03b
    FLD float ptr [EDX + 0x10]          ; 0044e03e
    FXCH                                ; 0044e041
    FADDP ST3,ST0                       ; 0044e043
    FMUL float ptr [EAX + 0x10]         ; 0044e045
    FXCH ST2                            ; 0044e048
    FSTP float ptr [ESP + 0xc]          ; 0044e04a
    FLD float ptr [EDX + 0x18]          ; 0044e04e
    FXCH ST2                            ; 0044e051
    FADDP ST4,ST0                       ; 0044e053
    FXCH                                ; 0044e055
    FMUL float ptr [EAX + 0x4]          ; 0044e057
    FLD float ptr [EDX + 0x14]          ; 0044e05a
    FMUL float ptr [EAX + 0x1c]         ; 0044e05d
    FLD float ptr [EDX + 0x10]          ; 0044e060
    FXCH                                ; 0044e063
    FADDP ST5,ST0                       ; 0044e065
    FMUL float ptr [EAX + 0x14]         ; 0044e067
    FXCH ST4                            ; 0044e06a
    FSTP float ptr [ESP + 0x10]         ; 0044e06c
    FLD float ptr [EDX + 0x18]          ; 0044e070
    FXCH ST4                            ; 0044e073
    FADDP ST3,ST0                       ; 0044e075
    FXCH ST3                            ; 0044e077
    FMUL float ptr [EAX + 0x8]          ; 0044e079
    FLD float ptr [EDX + 0x14]          ; 0044e07c
    FMUL float ptr [EAX + 0x20]         ; 0044e07f
    FLD float ptr [EDX + 0x18]          ; 0044e082
    FMUL float ptr [EAX]                ; 0044e085
    FXCH                                ; 0044e087
    FADDP ST4,ST0                       ; 0044e089
    FLD float ptr [EDX + 0x1c]          ; 0044e08b
    FXCH                                ; 0044e08e
    FADDP ST3,ST0                       ; 0044e090
    FMUL float ptr [EAX + 0x10]         ; 0044e092
    FLD float ptr [EDX + 0x20]          ; 0044e095
    FMUL float ptr [EAX + 0x18]         ; 0044e098
    FXCH                                ; 0044e09b
    FADDP ST5,ST0                       ; 0044e09d
    FLD float ptr [EDX + 0x1c]          ; 0044e09f
    FMUL float ptr [EAX + 0x14]         ; 0044e0a2
    FADDP ST2,ST0                       ; 0044e0a5
    FADDP ST2,ST0                       ; 0044e0a7
    FLD float ptr [EDX + 0x20]          ; 0044e0a9
    FMUL float ptr [EAX + 0x1c]         ; 0044e0ac
    FLD float ptr [EDX + 0x20]          ; 0044e0af
    FMUL float ptr [EAX + 0x20]         ; 0044e0b2
    MOV ECX,0xa                         ; 0044e0b5
    MOV EDI,ESI                         ; 0044e0ba
    MOV ESI,ESP                         ; 0044e0bc
    FXCH                                ; 0044e0be
    FADDP ST5,ST0                       ; 0044e0c0
    FADDP                               ; 0044e0c2
    FXCH ST2                            ; 0044e0c4
    FSTP float ptr [ESP + 0x14]         ; 0044e0c6
    FSTP float ptr [ESP + 0x18]         ; 0044e0ca
    FXCH                                ; 0044e0ce
    FSTP float ptr [ESP + 0x1c]         ; 0044e0d0
    FSTP float ptr [ESP + 0x20]         ; 0044e0d4
    FSTP float ptr [ESP]                ; 0044e0d8
    MOVSD.REP ES:EDI,ESI                ; 0044e0db
    MOV EAX,EBX                         ; 0044e0dd
    ADD ESP,0x28                        ; 0044e0df
    POP EDI                             ; 0044e0e2
    POP EBX                             ; 0044e0e3
    RET                                 ; 0044e0e4


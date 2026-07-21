; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_matrixToQuaternion_FUN_0055cf10(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   FUN_0055d610 at 0055d642
;   FUN_0055d660 at 0055d692
;   core_xform.cpp_lerpMatrix3x4_FUN_0055cc30 at 0055cc9c
;
; Referenced Globals:
;   undefined4 DAT_00598356
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0055cf10
        ;   Label: core_xform.cpp_matrixToQuaternion_FUN_0055cf10
    PUSH EBP                            ; 0055cf11
    MOV EBP,ESP                         ; 0055cf12
    SUB ESP,0x44                        ; 0055cf14
    AND ESP,0xfffffff8                  ; 0055cf17
    MOV EDX,dword ptr [EBP + 0xc]       ; 0055cf1a
    MOV ECX,ESI                         ; 0055cf1d
    FLD float ptr [EDX]                 ; 0055cf1f
    FADD float ptr [EDX + 0x14]         ; 0055cf21
    FST float ptr [ESP + 0x40]          ; 0055cf24
    FADD float ptr [EDX + 0x28]         ; 0055cf28
    FLDZ                                ; 0055cf2b
    FXCH                                ; 0055cf2d
    FSTP double ptr [ESP]               ; 0055cf2f
    FCOMP double ptr [ESP]              ; 0055cf32
    FNSTSW AX                           ; 0055cf35
    SAHF                                ; 0055cf37
    JC 0x0055cfb7                       ; 0055cf38
        ;   XREF to: 0055cfb7 (CONDITIONAL_JUMP)  ; LAB_0055cfb7
    FLD float ptr [EDX]                 ; 0055cf3a
    FCOMP float ptr [EDX + 0x14]        ; 0055cf3c
    FNSTSW AX                           ; 0055cf3f
    SAHF                                ; 0055cf41
    JBE 0x0055d05a                      ; 0055cf42
        ;   XREF to: 0055d05a (CONDITIONAL_JUMP)  ; LAB_0055d05a
    FLD float ptr [EDX]                 ; 0055cf48
    FCOMP float ptr [EDX + 0x28]        ; 0055cf4a
    FNSTSW AX                           ; 0055cf4d
    SAHF                                ; 0055cf4f
    JBE 0x0055cffa                      ; 0055cf50
        ;   XREF to: 0055cffa (CONDITIONAL_JUMP)  ; LAB_0055cffa
    FLD float ptr [EDX + 0x14]          ; 0055cf56
    FADD float ptr [EDX + 0x28]         ; 0055cf59
    FSUBR float ptr [EDX]               ; 0055cf5c
    FLD1                                ; 0055cf5e
    FADDP                               ; 0055cf60
    FSQRT                               ; 0055cf62
    FLD double ptr [0x00598356]         ; 0055cf64 | DAT_00598356
    FLD ST0                             ; 0055cf6a
    FDIV ST0,ST2                        ; 0055cf6c
    FLD ST2                             ; 0055cf6e
    FMULP ST2                           ; 0055cf70
    FLD float ptr [EDX + 0x24]          ; 0055cf72
    FSUB float ptr [EDX + 0x18]         ; 0055cf75
    FXCH                                ; 0055cf78
    FSTP ST3                            ; 0055cf7a
    FMUL ST2                            ; 0055cf7c
    FLD float ptr [EDX + 0x20]          ; 0055cf7e
    FLD float ptr [EDX + 0x10]          ; 0055cf81
    FADD float ptr [EDX + 0x4]          ; 0055cf84
    FXCH                                ; 0055cf87
    FADD float ptr [EDX + 0x8]          ; 0055cf89
    FXCH                                ; 0055cf8c
    FMUL ST4                            ; 0055cf8e
    FXCH                                ; 0055cf90
    FMULP ST4                           ; 0055cf92
    FXCH ST2                            ; 0055cf94
    FSTP float ptr [ESP + 0xc]          ; 0055cf96
    FSTP float ptr [ESP + 0x8]          ; 0055cf9a
    FSTP float ptr [ESP + 0x10]         ; 0055cf9e
        ;   Label: LAB_0055cf9e
    FSTP float ptr [ESP + 0x14]         ; 0055cfa2
    LEA ESI,[ESP + 0x8]                 ; 0055cfa6
    MOV EDI,ECX                         ; 0055cfaa
    MOVSD ES:EDI,ESI                    ; 0055cfac
    MOVSD ES:EDI,ESI                    ; 0055cfad
    MOVSD ES:EDI,ESI                    ; 0055cfae
    MOVSD ES:EDI,ESI                    ; 0055cfaf
    MOV EAX,ECX                         ; 0055cfb0
    MOV ESP,EBP                         ; 0055cfb2
    POP EBP                             ; 0055cfb4
    POP EDI                             ; 0055cfb5
    RET                                 ; 0055cfb6
    FLD1                                ; 0055cfb7
        ;   Label: LAB_0055cfb7
    FADD double ptr [ESP]               ; 0055cfb9
    FSQRT                               ; 0055cfbc
    FLD double ptr [0x00598356]         ; 0055cfbe | DAT_00598356
    FLD ST0                             ; 0055cfc4
    FDIV ST0,ST2                        ; 0055cfc6
    FLD ST2                             ; 0055cfc8
    FMULP ST2                           ; 0055cfca
    FLD float ptr [EDX + 0x24]          ; 0055cfcc
    FSUB float ptr [EDX + 0x18]         ; 0055cfcf
    FXCH                                ; 0055cfd2
    FSTP ST3                            ; 0055cfd4
    FMUL ST2                            ; 0055cfd6
    FLD float ptr [EDX + 0x10]          ; 0055cfd8
    FLD float ptr [EDX + 0x8]           ; 0055cfdb
    FSUB float ptr [EDX + 0x20]         ; 0055cfde
    FXCH                                ; 0055cfe1
    FSUB float ptr [EDX + 0x4]          ; 0055cfe3
    FXCH                                ; 0055cfe6
    FMUL ST4                            ; 0055cfe8
    FXCH                                ; 0055cfea
    FMULP ST4                           ; 0055cfec
    FXCH ST2                            ; 0055cfee
    FSTP float ptr [ESP + 0x8]          ; 0055cff0
    FSTP float ptr [ESP + 0xc]          ; 0055cff4
    JMP 0x0055cf9e                      ; 0055cff8
        ;   XREF to: 0055cf9e (UNCONDITIONAL_JUMP)  ; LAB_0055cf9e
    FLD float ptr [EDX + 0x28]          ; 0055cffa
        ;   Label: LAB_0055cffa
    FSUB float ptr [ESP + 0x40]         ; 0055cffd
    FLD1                                ; 0055d001
    FADDP                               ; 0055d003
    FSQRT                               ; 0055d005
    FLD double ptr [0x00598356]         ; 0055d007 | DAT_00598356
    FLD ST0                             ; 0055d00d
    FDIV ST0,ST2                        ; 0055d00f
    FLD ST2                             ; 0055d011
    FMULP ST2                           ; 0055d013
    FLD float ptr [EDX + 0x10]          ; 0055d015
    FSUB float ptr [EDX + 0x4]          ; 0055d018
    FXCH                                ; 0055d01b
    FSTP ST3                            ; 0055d01d
    FMUL ST2                            ; 0055d01f
    FLD float ptr [EDX + 0x18]          ; 0055d021
    FLD float ptr [EDX + 0x8]           ; 0055d024
    FADD float ptr [EDX + 0x20]         ; 0055d027
    FXCH                                ; 0055d02a
    FADD float ptr [EDX + 0x24]         ; 0055d02c
    FXCH                                ; 0055d02f
    FMUL ST4                            ; 0055d031
    FXCH                                ; 0055d033
    FMULP ST4                           ; 0055d035
    FXCH ST2                            ; 0055d037
    FSTP float ptr [ESP + 0x14]         ; 0055d039
    FSTP float ptr [ESP + 0x8]          ; 0055d03d
    FSTP float ptr [ESP + 0xc]          ; 0055d041
    FSTP float ptr [ESP + 0x10]         ; 0055d045
    LEA ESI,[ESP + 0x8]                 ; 0055d049
    MOV EDI,ECX                         ; 0055d04d
    MOVSD ES:EDI,ESI                    ; 0055d04f
    MOVSD ES:EDI,ESI                    ; 0055d050
    MOVSD ES:EDI,ESI                    ; 0055d051
    MOVSD ES:EDI,ESI                    ; 0055d052
    MOV EAX,ECX                         ; 0055d053
    MOV ESP,EBP                         ; 0055d055
    POP EBP                             ; 0055d057
    POP EDI                             ; 0055d058
    RET                                 ; 0055d059
    FLD float ptr [EDX + 0x14]          ; 0055d05a
        ;   Label: LAB_0055d05a
    FCOMP float ptr [EDX + 0x28]        ; 0055d05d
    FNSTSW AX                           ; 0055d060
    SAHF                                ; 0055d062
    JBE 0x0055cffa                      ; 0055d063
        ;   XREF to: 0055cffa (CONDITIONAL_JUMP)  ; LAB_0055cffa
    FLD float ptr [EDX + 0x28]          ; 0055d065
    FADD float ptr [EDX]                ; 0055d068
    FSUBR float ptr [EDX + 0x14]        ; 0055d06a
    FLD1                                ; 0055d06d
    FADDP                               ; 0055d06f
    FSQRT                               ; 0055d071
    FLD double ptr [0x00598356]         ; 0055d073 | DAT_00598356
    FLD ST0                             ; 0055d079
    FDIV ST0,ST2                        ; 0055d07b
    FLD ST2                             ; 0055d07d
    FMULP ST2                           ; 0055d07f
    FLD float ptr [EDX + 0x8]           ; 0055d081
    FSUB float ptr [EDX + 0x20]         ; 0055d084
    FXCH                                ; 0055d087
    FSTP ST3                            ; 0055d089
    FMUL ST2                            ; 0055d08b
    FLD float ptr [EDX + 0x4]           ; 0055d08d
    FLD float ptr [EDX + 0x24]          ; 0055d090
    FADD float ptr [EDX + 0x18]         ; 0055d093
    FXCH                                ; 0055d096
    FADD float ptr [EDX + 0x10]         ; 0055d098
    FXCH                                ; 0055d09b
    FMUL ST4                            ; 0055d09d
    FXCH                                ; 0055d09f
    FMULP ST4                           ; 0055d0a1
    FXCH ST2                            ; 0055d0a3
    FSTP float ptr [ESP + 0x10]         ; 0055d0a5
    FSTP float ptr [ESP + 0x8]          ; 0055d0a9
    FSTP float ptr [ESP + 0x14]         ; 0055d0ad
    FSTP float ptr [ESP + 0xc]          ; 0055d0b1
    LEA ESI,[ESP + 0x8]                 ; 0055d0b5
    MOV EDI,ECX                         ; 0055d0b9
    MOVSD ES:EDI,ESI                    ; 0055d0bb
    MOVSD ES:EDI,ESI                    ; 0055d0bc
    MOVSD ES:EDI,ESI                    ; 0055d0bd
    MOVSD ES:EDI,ESI                    ; 0055d0be
    MOV EAX,ECX                         ; 0055d0bf
    MOV ESP,EBP                         ; 0055d0c1
    POP EBP                             ; 0055d0c3
    POP EDI                             ; 0055d0c4
    RET                                 ; 0055d0c5


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_antiAliasingButterfly_FUN_00508f10(float *param_1,float *param_2,int param_3)
;
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050ab94
;
; Referenced Globals:
;   undefined4 DAT_00618e3c
;   undefined8 DAT_00618e40
;   undefined8 DAT_00618e48
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508f10
        ;   Label: sound_mp3.cpp_antiAliasingButterfly_FUN_00508f10
    PUSH ESI                            ; 00508f11
    PUSH EDI                            ; 00508f12
    PUSH EBP                            ; 00508f13
    MOV EBP,ESP                         ; 00508f14
    SUB ESP,0x38                        ; 00508f16
    AND ESP,0xfffffff8                  ; 00508f19
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00508f1c
    CMP dword ptr [0x00618e3c],0x0      ; 00508f1f | DAT_00618e3c
    JZ 0x00508f73                       ; 00508f26
        ;   XREF to: 00508f73 (CONDITIONAL_JUMP)  ; LAB_00508f73
    XOR EDX,EDX                         ; 00508f28
    FLD double ptr [EDX + 0x618e40]     ; 00508f2a | DAT_00618e40 | DAT_00618e48
        ;   Label: LAB_00508f2a
    FMUL ST0                            ; 00508f30
    FLD1                                ; 00508f32
    FADDP                               ; 00508f34
    FSQRT                               ; 00508f36
    FLD1                                ; 00508f38
    FDIVRP                              ; 00508f3a
    FLD double ptr [EDX + 0x618e40]     ; 00508f3c | DAT_00618e40 | DAT_00618e48
    ADD EDX,0x8                         ; 00508f42
    FXCH                                ; 00508f45
    FSTP double ptr [ESP]               ; 00508f47
    MOV EAX,dword ptr [ESP]             ; 00508f4a
    FMUL double ptr [ESP]               ; 00508f4d
    MOV dword ptr [EDX + 0x1d21a10],EAX ; 00508f50
    MOV EAX,dword ptr [ESP + 0x4]       ; 00508f56
    FSTP double ptr [EDX + 0x1d219d0]   ; 00508f5a
    MOV dword ptr [EDX + 0x1d21a14],EAX ; 00508f60
    CMP EDX,0x40                        ; 00508f66
    JNZ 0x00508f2a                      ; 00508f69
        ;   XREF to: 00508f2a (CONDITIONAL_JUMP)  ; LAB_00508f2a
    XOR ECX,ECX                         ; 00508f6b
    MOV dword ptr [0x00618e3c],ECX      ; 00508f6d | DAT_00618e3c
    MOV ESI,dword ptr [EBP + 0x14]      ; 00508f73
        ;   Label: LAB_00508f73
    MOV EAX,dword ptr [EBP + 0x18]      ; 00508f76
    XOR EBX,EBX                         ; 00508f79
    ADD ESI,0x48                        ; 00508f7b
    MOV dword ptr [ESP + 0x24],EAX      ; 00508f7e
    IMUL EAX,EBX,0x48                   ; 00508f82
        ;   Label: LAB_00508f82
    MOV EDX,dword ptr [EBP + 0x14]      ; 00508f85
    MOV ECX,ESI                         ; 00508f88
    ADD EAX,EDX                         ; 00508f8a
    MOV EDX,dword ptr [ESP + 0x24]      ; 00508f8c
    ADD EDX,0x4                         ; 00508f90
        ;   Label: LAB_00508f90
    FLD float ptr [EAX]                 ; 00508f93
    ADD EAX,0x4                         ; 00508f95
    FSTP float ptr [EDX + -0x4]         ; 00508f98
    CMP EAX,ECX                         ; 00508f9b
    JNZ 0x00508f90                      ; 00508f9d
        ;   XREF to: 00508f90 (CONDITIONAL_JUMP)  ; LAB_00508f90
    MOV ECX,dword ptr [ESP + 0x24]      ; 00508f9f
    INC EBX                             ; 00508fa3
    ADD ECX,0x48                        ; 00508fa4
    ADD ESI,0x48                        ; 00508fa7
    MOV dword ptr [ESP + 0x24],ECX      ; 00508faa
    CMP EBX,0x20                        ; 00508fae
    JL 0x00508f82                       ; 00508fb1
        ;   XREF to: 00508f82 (CONDITIONAL_JUMP)  ; LAB_00508f82
    CMP dword ptr [EDI + 0x10],0x0      ; 00508fb3
    JZ 0x00508fc9                       ; 00508fb7
        ;   XREF to: 00508fc9 (CONDITIONAL_JUMP)  ; LAB_00508fc9
    CMP dword ptr [EDI + 0x14],0x2      ; 00508fb9
    JNZ 0x00508fc9                      ; 00508fbd
        ;   XREF to: 00508fc9 (CONDITIONAL_JUMP)  ; LAB_00508fc9
    CMP dword ptr [EDI + 0x18],0x0      ; 00508fbf
    JZ 0x005090d1                       ; 00508fc3
        ;   XREF to: 005090d1 (CONDITIONAL_JUMP)  ; LAB_005090d1
    CMP dword ptr [EDI + 0x10],0x0      ; 00508fc9
        ;   Label: LAB_00508fc9
    JZ 0x005090d8                       ; 00508fcd
        ;   XREF to: 005090d8 (CONDITIONAL_JUMP)  ; LAB_005090d8
    CMP dword ptr [EDI + 0x18],0x0      ; 00508fd3
    JZ 0x005090d8                       ; 00508fd7
        ;   XREF to: 005090d8 (CONDITIONAL_JUMP)  ; LAB_005090d8
    CMP dword ptr [EDI + 0x14],0x2      ; 00508fdd
    JNZ 0x005090d8                      ; 00508fe1
        ;   XREF to: 005090d8 (CONDITIONAL_JUMP)  ; LAB_005090d8
    MOV dword ptr [ESP + 0x34],0x1      ; 00508fe7
    XOR EDX,EDX                         ; 00508fef
        ;   Label: LAB_00508fef
    MOV ECX,dword ptr [ESP + 0x34]      ; 00508ff1
    MOV dword ptr [ESP + 0x2c],EDX      ; 00508ff5
    TEST ECX,ECX                        ; 00508ff9
    JLE 0x005090d1                      ; 00508ffb
        ;   XREF to: 005090d1 (CONDITIONAL_JUMP)  ; LAB_005090d1
    MOV EAX,dword ptr [EBP + 0x18]      ; 00509001
    ADD EAX,0x68                        ; 00509004
    MOV dword ptr [ESP + 0x1c],EAX      ; 00509007
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050900b
    MOV dword ptr [ESP + 0x20],EAX      ; 0050900e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00509012
    ADD EAX,0x48                        ; 00509015
    MOV dword ptr [ESP + 0x28],EAX      ; 00509018
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050901c
    MOV dword ptr [ESP + 0x18],EAX      ; 0050901f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00509023
        ;   Label: LAB_00509023
    INC EAX                             ; 00509027
    IMUL EAX,EAX,0x48                   ; 00509028
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050902b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0050902e
    MOV ESI,dword ptr [ESP + 0x28]      ; 00509032
    MOV ECX,dword ptr [ESP + 0x18]      ; 00509036
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0050903a
    ADD EBX,0x44                        ; 0050903e
    MOV dword ptr [ESP + 0x30],EDI      ; 00509041
    ADD ECX,0x44                        ; 00509045
    MOV EDI,dword ptr [ESP + 0x30]      ; 00509048
    ADD EDX,EAX                         ; 0050904c
    XOR EAX,EAX                         ; 0050904e
    FLD float ptr [ECX]                 ; 00509050
        ;   Label: LAB_00509050
    FLD ST0                             ; 00509052
    FMUL double ptr [EAX + 0x1d21a18]   ; 00509054
    FLD float ptr [ESI]                 ; 0050905a
    FLD ST0                             ; 0050905c
    FMUL double ptr [EAX + 0x1d219d8]   ; 0050905e
    FSUBP ST2,ST0                       ; 00509064
    FXCH                                ; 00509066
    FSTP float ptr [EBX]                ; 00509068
    FMUL double ptr [EAX + 0x1d21a18]   ; 0050906a
    FXCH                                ; 00509070
    FMUL double ptr [EAX + 0x1d219d8]   ; 00509072
    ADD EDX,0x4                         ; 00509078
    SUB EBX,0x4                         ; 0050907b
    ADD EAX,0x8                         ; 0050907e
    ADD ESI,0x4                         ; 00509081
    FADDP                               ; 00509084
    SUB ECX,0x4                         ; 00509086
    FSTP float ptr [EDX + -0x4]         ; 00509089
    CMP EDX,EDI                         ; 0050908c
    JNZ 0x00509050                      ; 0050908e
        ;   XREF to: 00509050 (CONDITIONAL_JUMP)  ; LAB_00509050
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00509090
    MOV ESI,dword ptr [ESP + 0x20]      ; 00509094
    MOV EDI,dword ptr [ESP + 0x28]      ; 00509098
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050909c
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005090a0
    MOV ECX,dword ptr [ESP + 0x34]      ; 005090a4
    ADD EBX,0x48                        ; 005090a8
    ADD ESI,0x48                        ; 005090ab
    ADD EDI,0x48                        ; 005090ae
    ADD EAX,0x48                        ; 005090b1
    INC EDX                             ; 005090b4
    MOV dword ptr [ESP + 0x1c],EBX      ; 005090b5
    MOV dword ptr [ESP + 0x20],ESI      ; 005090b9
    MOV dword ptr [ESP + 0x28],EDI      ; 005090bd
    MOV dword ptr [ESP + 0x18],EAX      ; 005090c1
    MOV dword ptr [ESP + 0x2c],EDX      ; 005090c5
    CMP EDX,ECX                         ; 005090c9
    JL 0x00509023                       ; 005090cb
        ;   XREF to: 00509023 (CONDITIONAL_JUMP)  ; LAB_00509023
    MOV ESP,EBP                         ; 005090d1
        ;   Label: LAB_005090d1
    POP EBP                             ; 005090d3
    POP EDI                             ; 005090d4
    POP ESI                             ; 005090d5
    POP EBX                             ; 005090d6
    RET                                 ; 005090d7
    MOV dword ptr [ESP + 0x34],0x1f     ; 005090d8
        ;   Label: LAB_005090d8
    JMP 0x00508fef                      ; 005090e0
        ;   XREF to: 00508fef (UNCONDITIONAL_JUMP)  ; LAB_00508fef


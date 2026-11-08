; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0048ff40(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[6]:
;   FUN_00467c00 at 00467e2a
;   FUN_00490a40 at 00490c63
;   FUN_00504580 at 00504633
;   FUN_005660c0 at 00566238
;   FUN_00584b00 at 00584b4b
;   FUN_005ab530 at 005ab623
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ff40
        ;   Label: FUN_0048ff40
    PUSH EBP                            ; 0048ff41
    MOV EBP,ESP                         ; 0048ff42
    SUB ESP,0x3c                        ; 0048ff44
    AND ESP,0xfffffff8                  ; 0048ff47
    MOV EDX,dword ptr [EBP + 0xc]       ; 0048ff4a
    MOV EBX,dword ptr [EBP + 0x10]      ; 0048ff4d
    MOV ECX,dword ptr [EBP + 0x14]      ; 0048ff50
    FLD float ptr [EDX + 0x28]          ; 0048ff53
    FMUL float ptr [ECX + 0x4]          ; 0048ff56
    FLD float ptr [EDX + 0x24]          ; 0048ff59
    FMUL float ptr [ECX]                ; 0048ff5c
    FADDP                               ; 0048ff5e
    FLD float ptr [EDX + 0x2c]          ; 0048ff60
    FMUL float ptr [ECX + 0x8]          ; 0048ff63
    FADDP                               ; 0048ff66
    FST float ptr [ESP]                 ; 0048ff68
    FLDZ                                ; 0048ff6b
    FCOMPP                              ; 0048ff6d
    FNSTSW AX                           ; 0048ff6f
    SAHF                                ; 0048ff71
    JNC 0x004900ce                      ; 0048ff72
        ;   XREF to: 004900ce (CONDITIONAL_JUMP)  ; LAB_004900ce
    FLD float ptr [EDX + 0x24]          ; 0048ff78
    FMUL float ptr [EBX]                ; 0048ff7b
    FADD float ptr [EDX + 0x30]         ; 0048ff7d
    FLD float ptr [EDX + 0x28]          ; 0048ff80
    FMUL float ptr [EBX + 0x4]          ; 0048ff83
    FADDP                               ; 0048ff86
    FLD float ptr [EDX + 0x2c]          ; 0048ff88
    FMUL float ptr [EBX + 0x8]          ; 0048ff8b
    FADDP                               ; 0048ff8e
    FCHS                                ; 0048ff90
    FST float ptr [ESP + 0x4]           ; 0048ff92
    FLDZ                                ; 0048ff96
    FCOMPP                              ; 0048ff98
    FNSTSW AX                           ; 0048ff9a
    SAHF                                ; 0048ff9c
    JA 0x004900ce                       ; 0048ff9d
        ;   XREF to: 004900ce (CONDITIONAL_JUMP)  ; LAB_004900ce
    FLD float ptr [ESP + 0x4]           ; 0048ffa3
    FCOMP float ptr [ESP]               ; 0048ffa7
    FNSTSW AX                           ; 0048ffaa
    SAHF                                ; 0048ffac
    JA 0x004900ce                       ; 0048ffad
        ;   XREF to: 004900ce (CONDITIONAL_JUMP)  ; LAB_004900ce
    FLD float ptr [ESP + 0x4]           ; 0048ffb3
    FDIV float ptr [ESP]                ; 0048ffb7
    FST float ptr [ESP + 0x4]           ; 0048ffba
    FMUL float ptr [ECX]                ; 0048ffbe
    FLD float ptr [ESP + 0x4]           ; 0048ffc0
    FMUL float ptr [ECX + 0x4]          ; 0048ffc4
    FLD float ptr [ESP + 0x4]           ; 0048ffc7
    FMUL float ptr [ECX + 0x8]          ; 0048ffcb
    MOV EAX,dword ptr [EDX + 0x34]      ; 0048ffce
    FXCH ST2                            ; 0048ffd1
    FADD float ptr [EBX]                ; 0048ffd3
    FXCH                                ; 0048ffd5
    FADD float ptr [EBX + 0x4]          ; 0048ffd7
    FXCH ST2                            ; 0048ffda
    FADD float ptr [EBX + 0x8]          ; 0048ffdc
    FXCH                                ; 0048ffdf
    FSTP float ptr [ESP + 0x10]         ; 0048ffe1
    FXCH                                ; 0048ffe5
    FSTP float ptr [ESP + 0x14]         ; 0048ffe7
    FSTP float ptr [ESP + 0x18]         ; 0048ffeb
    CMP EAX,0x1                         ; 0048ffef
    JNC 0x00490138                      ; 0048fff2
        ;   XREF to: 00490138 (CONDITIONAL_JUMP)  ; LAB_00490138
    TEST EAX,EAX                        ; 0048fff8
    JNZ 0x0049004e                      ; 0048fffa
        ;   XREF to: 0049004e (CONDITIONAL_JUMP)  ; LAB_0049004e
    FLD float ptr [ESP + 0x14]          ; 0048fffc
    FLD float ptr [ESP + 0x18]          ; 00490000
    FLD float ptr [EDX + 0x10]          ; 00490004
    FLD float ptr [EDX + 0x1c]          ; 00490007
    FLD float ptr [EDX + 0x14]          ; 0049000a
    FLD float ptr [EDX + 0x20]          ; 0049000d
    FXCH ST5                            ; 00490010
    FSUB float ptr [EDX + 0x4]          ; 00490012
    FXCH ST3                            ; 00490015
    FSUB float ptr [EDX + 0x4]          ; 00490017
    FXCH ST2                            ; 0049001a
    FSUB float ptr [EDX + 0x4]          ; 0049001c
    FXCH ST4                            ; 0049001f
        ;   Label: LAB_0049001f
    FSUB float ptr [EDX + 0x8]          ; 00490021
    FXCH                                ; 00490024
    FSUB float ptr [EDX + 0x8]          ; 00490026
    FXCH ST5                            ; 00490029
    FSUB float ptr [EDX + 0x8]          ; 0049002b
    FXCH ST2                            ; 0049002e
        ;   Label: LAB_0049002e
    FSTP float ptr [ESP + 0x20]         ; 00490030
    FXCH ST3                            ; 00490034
    FSTP float ptr [ESP + 0x24]         ; 00490036
    FXCH ST2                            ; 0049003a
    FSTP float ptr [ESP + 0x38]         ; 0049003c
    FXCH ST2                            ; 00490040
    FSTP float ptr [ESP + 0x34]         ; 00490042
    FSTP float ptr [ESP + 0x1c]         ; 00490046
    FSTP float ptr [ESP + 0x28]         ; 0049004a
    FLD float ptr [ESP + 0x1c]          ; 0049004e
        ;   Label: LAB_0049004e
    FLD float ptr [ESP + 0x20]          ; 00490052
    FMUL ST1                            ; 00490056
    FLD float ptr [ESP + 0x24]          ; 00490058
    FLD float ptr [ESP + 0x34]          ; 0049005c
    FMUL ST1                            ; 00490060
    FSUBP ST2,ST0                       ; 00490062
    FLD1                                ; 00490064
    FDIVRP ST2,ST0                      ; 00490066
    FLD float ptr [ESP + 0x28]          ; 00490068
    FMULP ST3                           ; 0049006c
    FMUL float ptr [ESP + 0x38]         ; 0049006e
    FSUBP ST2,ST0                       ; 00490072
    FSTP float ptr [ESP + 0x30]         ; 00490074
    FMUL float ptr [ESP + 0x30]         ; 00490078
    FST float ptr [ESP + 0x8]           ; 0049007c
    FLDZ                                ; 00490080
    FCOMPP                              ; 00490082
    FNSTSW AX                           ; 00490084
    SAHF                                ; 00490086
    JA 0x004900ce                       ; 00490087
        ;   XREF to: 004900ce (CONDITIONAL_JUMP)  ; LAB_004900ce
    FLD float ptr [ESP + 0x20]          ; 00490089
    FMUL float ptr [ESP + 0x38]         ; 0049008d
    FLD float ptr [ESP + 0x34]          ; 00490091
    FMUL float ptr [ESP + 0x28]         ; 00490095
    FSUBP                               ; 00490099
    FMUL float ptr [ESP + 0x30]         ; 0049009b
    FST float ptr [ESP + 0xc]           ; 0049009f
    FLDZ                                ; 004900a3
    FCOMPP                              ; 004900a5
    FNSTSW AX                           ; 004900a7
    SAHF                                ; 004900a9
    JA 0x004900ce                       ; 004900aa
        ;   XREF to: 004900ce (CONDITIONAL_JUMP)  ; LAB_004900ce
    FLD float ptr [ESP + 0x8]           ; 004900ac
    FADD float ptr [ESP + 0xc]          ; 004900b0
    FLD1                                ; 004900b4
    FCOMPP                              ; 004900b6
    FNSTSW AX                           ; 004900b8
    SAHF                                ; 004900ba
    JC 0x004900ce                       ; 004900bb
        ;   XREF to: 004900ce (CONDITIONAL_JUMP)  ; LAB_004900ce
    MOV EAX,dword ptr [ESP + 0x4]       ; 004900bd
    MOV dword ptr [ESP + 0x2c],EAX      ; 004900c1
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004900c5
    MOV ESP,EBP                         ; 004900c9
    POP EBP                             ; 004900cb
    POP EBX                             ; 004900cc
    RET                                 ; 004900cd
    MOV dword ptr [ESP + 0x2c],0xbf800000 ; 004900ce
        ;   Label: LAB_004900ce
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004900d6
    MOV ESP,EBP                         ; 004900da
    POP EBP                             ; 004900dc
    POP EBX                             ; 004900dd
    RET                                 ; 004900de
    FLD float ptr [ESP + 0x10]          ; 004900df
        ;   Label: LAB_004900df
    FLD float ptr [ESP + 0x18]          ; 004900e3
    FLD float ptr [EDX + 0xc]           ; 004900e7
    FLD float ptr [EDX + 0x18]          ; 004900ea
    FLD float ptr [EDX + 0x14]          ; 004900ed
    FLD float ptr [EDX + 0x20]          ; 004900f0
    FXCH ST5                            ; 004900f3
    FSUB float ptr [EDX]                ; 004900f5
    FXCH ST3                            ; 004900f7
    FSUB float ptr [EDX]                ; 004900f9
    FXCH ST2                            ; 004900fb
    FSUB float ptr [EDX]                ; 004900fd
    JMP 0x0049001f                      ; 004900ff
        ;   XREF to: 0049001f (UNCONDITIONAL_JUMP)  ; LAB_0049001f
    FLD float ptr [ESP + 0x10]          ; 00490104
        ;   Label: LAB_00490104
    FLD float ptr [ESP + 0x14]          ; 00490108
    FLD float ptr [EDX + 0xc]           ; 0049010c
    FLD float ptr [EDX + 0x18]          ; 0049010f
    FLD float ptr [EDX + 0x10]          ; 00490112
    FLD float ptr [EDX + 0x1c]          ; 00490115
    FXCH ST5                            ; 00490118
    FSUB float ptr [EDX]                ; 0049011a
    FXCH ST3                            ; 0049011c
    FSUB float ptr [EDX]                ; 0049011e
    FXCH ST2                            ; 00490120
    FSUB float ptr [EDX]                ; 00490122
    FXCH ST4                            ; 00490124
    FSUB float ptr [EDX + 0x4]          ; 00490126
    FXCH                                ; 00490129
    FSUB float ptr [EDX + 0x4]          ; 0049012b
    FXCH ST5                            ; 0049012e
    FSUB float ptr [EDX + 0x4]          ; 00490130
    JMP 0x0049002e                      ; 00490133
        ;   XREF to: 0049002e (UNCONDITIONAL_JUMP)  ; LAB_0049002e
    JBE 0x004900df                      ; 00490138
        ;   XREF to: 004900df (CONDITIONAL_JUMP)  ; LAB_004900df
        ;   Label: LAB_00490138
    CMP EAX,0x2                         ; 0049013a
    JZ 0x00490104                       ; 0049013d
        ;   XREF to: 00490104 (CONDITIONAL_JUMP)  ; LAB_00490104
    JMP 0x0049004e                      ; 0049013f
        ;   XREF to: 0049004e (UNCONDITIONAL_JUMP)  ; LAB_0049004e


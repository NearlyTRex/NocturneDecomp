; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dtri_cpp_rayEdgeHeightTest_FUN_0046cfa0(float *param_1,float *param_2,float param_3,float *param_4)
;
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
;
; XREF[1]:
;   core_dtri.cpp_rayTriangleFloorTest_FUN_0046d110 at 0046d2c1
;
; Referenced Globals:
;   undefined4 DAT_0057e46e
;   undefined4 DAT_0057e476
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046cfa0
        ;   Label: core_dtri.cpp_rayEdgeHeightTest_FUN_0046cfa0
    PUSH ESI                            ; 0046cfa1
    PUSH EBP                            ; 0046cfa2
    MOV EBP,ESP                         ; 0046cfa3
    SUB ESP,0x50                        ; 0046cfa5
    AND ESP,0xfffffff8                  ; 0046cfa8
    MOV EDX,dword ptr [EBP + 0x10]      ; 0046cfab
    MOV ESI,dword ptr [EBP + 0x14]      ; 0046cfae
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0046cfb1
    FLD float ptr [ESI + 0x8]           ; 0046cfb4
    FLD float ptr [ESI]                 ; 0046cfb7
    FSUB float ptr [EDX]                ; 0046cfb9
    FXCH                                ; 0046cfbb
    FSUB float ptr [EDX + 0x8]          ; 0046cfbd
    FXCH                                ; 0046cfc0
    FST double ptr [ESP + 0x30]         ; 0046cfc2
    FMUL double ptr [ESP + 0x30]        ; 0046cfc6
    FXCH                                ; 0046cfca
    FST double ptr [ESP + 0x18]         ; 0046cfcc
    FMUL double ptr [ESP + 0x18]        ; 0046cfd0
    FADDP                               ; 0046cfd4
    FLDZ                                ; 0046cfd6
    FXCH                                ; 0046cfd8
    FSTP double ptr [ESP + 0x40]        ; 0046cfda
    FCOMP double ptr [ESP + 0x40]       ; 0046cfde
    FNSTSW AX                           ; 0046cfe2
    SAHF                                ; 0046cfe4
    JNC 0x0046d105                      ; 0046cfe5
        ;   XREF to: 0046d105 (CONDITIONAL_JUMP)  ; LAB_0046d105
    FLD float ptr [EDX + 0x8]           ; 0046cfeb
    FMUL double ptr [ESP + 0x18]        ; 0046cfee
    FLD float ptr [EDX + 0x8]           ; 0046cff2
    FMUL ST0                            ; 0046cff5
    FLD double ptr [ESP + 0x40]         ; 0046cff7
    FMUL double ptr [0x0057e476]        ; 0046cffb | DAT_0057e476
    FLD float ptr [EDX]                 ; 0046d001
    FMUL ST0                            ; 0046d003
    FLD float ptr [EDX]                 ; 0046d005
    FMUL double ptr [ESP + 0x30]        ; 0046d007
    FXCH                                ; 0046d00b
    FADDP ST3,ST0                       ; 0046d00d
    FADDP ST3,ST0                       ; 0046d00f
    FLD float ptr [EBP + 0x18]          ; 0046d011
    FMUL ST0                            ; 0046d014
    FXCH ST3                            ; 0046d016
    FMUL double ptr [0x0057e46e]        ; 0046d018 | DAT_0057e46e
    FXCH ST3                            ; 0046d01e
    FSUBP ST2,ST0                       ; 0046d020
    FMULP                               ; 0046d022
    FXCH                                ; 0046d024
    FST double ptr [ESP + 0x38]         ; 0046d026
    FMUL double ptr [ESP + 0x38]        ; 0046d02a
    FSUBRP                              ; 0046d02e
    FLDZ                                ; 0046d030
    FXCH                                ; 0046d032
    FSTP double ptr [ESP + 0x8]         ; 0046d034
    FCOMP double ptr [ESP + 0x8]        ; 0046d038
    FNSTSW AX                           ; 0046d03c
    SAHF                                ; 0046d03e
    JA 0x0046d105                       ; 0046d03f
        ;   XREF to: 0046d105 (CONDITIONAL_JUMP)  ; LAB_0046d105
    FLD double ptr [ESP + 0x38]         ; 0046d045
    FCHS                                ; 0046d049
    FLD double ptr [ESP + 0x8]          ; 0046d04b
    FSQRT                               ; 0046d04f
    FSUBP                               ; 0046d051
    FLD double ptr [ESP + 0x40]         ; 0046d053
    FMUL double ptr [0x0057e46e]        ; 0046d057 | DAT_0057e46e
    FDIVP                               ; 0046d05d
    FLDZ                                ; 0046d05f
    XOR ECX,ECX                         ; 0046d061
    FXCH                                ; 0046d063
    FSTP double ptr [ESP + 0x10]        ; 0046d065
    FCOMP double ptr [ESP + 0x10]       ; 0046d069
    FNSTSW AX                           ; 0046d06d
    SAHF                                ; 0046d06f
    JA 0x0046d0a6                       ; 0046d070
        ;   XREF to: 0046d0a6 (CONDITIONAL_JUMP)  ; LAB_0046d0a6
    FLD1                                ; 0046d072
    FCOMP double ptr [ESP + 0x10]       ; 0046d074
    FNSTSW AX                           ; 0046d078
    SAHF                                ; 0046d07a
    JC 0x0046d0a6                       ; 0046d07b
        ;   XREF to: 0046d0a6 (CONDITIONAL_JUMP)  ; LAB_0046d0a6
    FLD float ptr [ESI + 0x4]           ; 0046d07d
    FSUB float ptr [EDX + 0x4]          ; 0046d080
    FMUL double ptr [ESP + 0x10]        ; 0046d083
    FADD float ptr [EDX + 0x4]          ; 0046d087
    FLD float ptr [EBX]                 ; 0046d08a
    FXCH                                ; 0046d08c
    FSTP double ptr [ESP + 0x20]        ; 0046d08e
    FCOMP double ptr [ESP + 0x20]       ; 0046d092
    FNSTSW AX                           ; 0046d096
    SAHF                                ; 0046d098
    JNC 0x0046d0a6                      ; 0046d099
        ;   XREF to: 0046d0a6 (CONDITIONAL_JUMP)  ; LAB_0046d0a6
    FLD double ptr [ESP + 0x20]         ; 0046d09b
    MOV ECX,0x1                         ; 0046d09f
    FSTP float ptr [EBX]                ; 0046d0a4
    FLD double ptr [ESP + 0x8]          ; 0046d0a6
        ;   Label: LAB_0046d0a6
    FSQRT                               ; 0046d0aa
    FSUB double ptr [ESP + 0x38]        ; 0046d0ac
    FLD double ptr [ESP + 0x40]         ; 0046d0b0
    FMUL double ptr [0x0057e46e]        ; 0046d0b4 | DAT_0057e46e
    FDIVP                               ; 0046d0ba
    FLDZ                                ; 0046d0bc
    FXCH                                ; 0046d0be
    FSTP double ptr [ESP]               ; 0046d0c0
    FCOMP double ptr [ESP]              ; 0046d0c3
    FNSTSW AX                           ; 0046d0c6
    SAHF                                ; 0046d0c8
    JA 0x0046d0fd                       ; 0046d0c9
        ;   XREF to: 0046d0fd (CONDITIONAL_JUMP)  ; LAB_0046d0fd
    FLD1                                ; 0046d0cb
    FCOMP double ptr [ESP]              ; 0046d0cd
    FNSTSW AX                           ; 0046d0d0
    SAHF                                ; 0046d0d2
    JC 0x0046d0fd                       ; 0046d0d3
        ;   XREF to: 0046d0fd (CONDITIONAL_JUMP)  ; LAB_0046d0fd
    FLD float ptr [ESI + 0x4]           ; 0046d0d5
    FSUB float ptr [EDX + 0x4]          ; 0046d0d8
    FMUL double ptr [ESP]               ; 0046d0db
    FADD float ptr [EDX + 0x4]          ; 0046d0de
    FLD float ptr [EBX]                 ; 0046d0e1
    FXCH                                ; 0046d0e3
    FSTP double ptr [ESP + 0x28]        ; 0046d0e5
    FCOMP double ptr [ESP + 0x28]       ; 0046d0e9
    FNSTSW AX                           ; 0046d0ed
    SAHF                                ; 0046d0ef
    JNC 0x0046d0fd                      ; 0046d0f0
        ;   XREF to: 0046d0fd (CONDITIONAL_JUMP)  ; LAB_0046d0fd
    FLD double ptr [ESP + 0x28]         ; 0046d0f2
    MOV ECX,0x1                         ; 0046d0f6
    FSTP float ptr [EBX]                ; 0046d0fb
    MOV EAX,ECX                         ; 0046d0fd
        ;   Label: LAB_0046d0fd
    MOV ESP,EBP                         ; 0046d0ff
    POP EBP                             ; 0046d101
    POP ESI                             ; 0046d102
    POP EBX                             ; 0046d103
    RET                                 ; 0046d104
    XOR EAX,EAX                         ; 0046d105
        ;   Label: LAB_0046d105
    MOV ESP,EBP                         ; 0046d107
    POP EBP                             ; 0046d109
    POP ESI                             ; 0046d10a
    POP EBX                             ; 0046d10b
    RET                                 ; 0046d10c


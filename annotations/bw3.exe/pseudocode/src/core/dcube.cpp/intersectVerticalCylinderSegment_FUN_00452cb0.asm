; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00452cb0(float *param_1,float *param_2,float param_3,float *param_4)
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
;   core_dcube.cpp_triangleCylinderCollision_FUN_00452e20 at 00452fdf
;
; Referenced Globals:
;   undefined4 DAT_005ba116
;   undefined4 DAT_005ba11e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452cb0
        ;   Label: core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00452cb0
    PUSH ESI                            ; 00452cb1
    PUSH EBP                            ; 00452cb2
    MOV EBP,ESP                         ; 00452cb3
    SUB ESP,0x50                        ; 00452cb5
    AND ESP,0xfffffff8                  ; 00452cb8
    MOV EDX,dword ptr [EBP + 0x10]      ; 00452cbb
    MOV ESI,dword ptr [EBP + 0x14]      ; 00452cbe
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00452cc1
    FLD float ptr [ESI + 0x8]           ; 00452cc4
    FLD float ptr [ESI]                 ; 00452cc7
    FSUB float ptr [EDX]                ; 00452cc9
    FXCH                                ; 00452ccb
    FSUB float ptr [EDX + 0x8]          ; 00452ccd
    FXCH                                ; 00452cd0
    FST double ptr [ESP + 0x30]         ; 00452cd2
    FMUL double ptr [ESP + 0x30]        ; 00452cd6
    FXCH                                ; 00452cda
    FST double ptr [ESP + 0x18]         ; 00452cdc
    FMUL double ptr [ESP + 0x18]        ; 00452ce0
    FADDP                               ; 00452ce4
    FLDZ                                ; 00452ce6
    FXCH                                ; 00452ce8
    FSTP double ptr [ESP + 0x40]        ; 00452cea
    FCOMP double ptr [ESP + 0x40]       ; 00452cee
    FNSTSW AX                           ; 00452cf2
    SAHF                                ; 00452cf4
    JNC 0x00452e15                      ; 00452cf5
        ;   XREF to: 00452e15 (CONDITIONAL_JUMP)  ; LAB_00452e15
    FLD float ptr [EDX + 0x8]           ; 00452cfb
    FMUL double ptr [ESP + 0x18]        ; 00452cfe
    FLD float ptr [EDX + 0x8]           ; 00452d02
    FMUL ST0                            ; 00452d05
    FLD double ptr [ESP + 0x40]         ; 00452d07
    FMUL double ptr [0x005ba11e]        ; 00452d0b | DAT_005ba11e
    FLD float ptr [EDX]                 ; 00452d11
    FMUL ST0                            ; 00452d13
    FLD float ptr [EDX]                 ; 00452d15
    FMUL double ptr [ESP + 0x30]        ; 00452d17
    FXCH                                ; 00452d1b
    FADDP ST3,ST0                       ; 00452d1d
    FADDP ST3,ST0                       ; 00452d1f
    FLD float ptr [EBP + 0x18]          ; 00452d21
    FMUL ST0                            ; 00452d24
    FXCH ST3                            ; 00452d26
    FMUL double ptr [0x005ba116]        ; 00452d28 | DAT_005ba116
    FXCH ST3                            ; 00452d2e
    FSUBP ST2,ST0                       ; 00452d30
    FMULP                               ; 00452d32
    FXCH                                ; 00452d34
    FST double ptr [ESP + 0x38]         ; 00452d36
    FMUL double ptr [ESP + 0x38]        ; 00452d3a
    FSUBRP                              ; 00452d3e
    FLDZ                                ; 00452d40
    FXCH                                ; 00452d42
    FSTP double ptr [ESP + 0x8]         ; 00452d44
    FCOMP double ptr [ESP + 0x8]        ; 00452d48
    FNSTSW AX                           ; 00452d4c
    SAHF                                ; 00452d4e
    JA 0x00452e15                       ; 00452d4f
        ;   XREF to: 00452e15 (CONDITIONAL_JUMP)  ; LAB_00452e15
    FLD double ptr [ESP + 0x38]         ; 00452d55
    FCHS                                ; 00452d59
    FLD double ptr [ESP + 0x8]          ; 00452d5b
    FSQRT                               ; 00452d5f
    FSUBP                               ; 00452d61
    FLD double ptr [ESP + 0x40]         ; 00452d63
    FMUL double ptr [0x005ba116]        ; 00452d67 | DAT_005ba116
    FDIVP                               ; 00452d6d
    FLDZ                                ; 00452d6f
    XOR ECX,ECX                         ; 00452d71
    FXCH                                ; 00452d73
    FSTP double ptr [ESP + 0x10]        ; 00452d75
    FCOMP double ptr [ESP + 0x10]       ; 00452d79
    FNSTSW AX                           ; 00452d7d
    SAHF                                ; 00452d7f
    JA 0x00452db6                       ; 00452d80
        ;   XREF to: 00452db6 (CONDITIONAL_JUMP)  ; LAB_00452db6
    FLD1                                ; 00452d82
    FCOMP double ptr [ESP + 0x10]       ; 00452d84
    FNSTSW AX                           ; 00452d88
    SAHF                                ; 00452d8a
    JC 0x00452db6                       ; 00452d8b
        ;   XREF to: 00452db6 (CONDITIONAL_JUMP)  ; LAB_00452db6
    FLD float ptr [ESI + 0x4]           ; 00452d8d
    FSUB float ptr [EDX + 0x4]          ; 00452d90
    FMUL double ptr [ESP + 0x10]        ; 00452d93
    FADD float ptr [EDX + 0x4]          ; 00452d97
    FLD float ptr [EBX]                 ; 00452d9a
    FXCH                                ; 00452d9c
    FSTP double ptr [ESP + 0x20]        ; 00452d9e
    FCOMP double ptr [ESP + 0x20]       ; 00452da2
    FNSTSW AX                           ; 00452da6
    SAHF                                ; 00452da8
    JNC 0x00452db6                      ; 00452da9
        ;   XREF to: 00452db6 (CONDITIONAL_JUMP)  ; LAB_00452db6
    FLD double ptr [ESP + 0x20]         ; 00452dab
    MOV ECX,0x1                         ; 00452daf
    FSTP float ptr [EBX]                ; 00452db4
    FLD double ptr [ESP + 0x8]          ; 00452db6
        ;   Label: LAB_00452db6
    FSQRT                               ; 00452dba
    FSUB double ptr [ESP + 0x38]        ; 00452dbc
    FLD double ptr [ESP + 0x40]         ; 00452dc0
    FMUL double ptr [0x005ba116]        ; 00452dc4 | DAT_005ba116
    FDIVP                               ; 00452dca
    FLDZ                                ; 00452dcc
    FXCH                                ; 00452dce
    FSTP double ptr [ESP]               ; 00452dd0
    FCOMP double ptr [ESP]              ; 00452dd3
    FNSTSW AX                           ; 00452dd6
    SAHF                                ; 00452dd8
    JA 0x00452e0d                       ; 00452dd9
        ;   XREF to: 00452e0d (CONDITIONAL_JUMP)  ; LAB_00452e0d
    FLD1                                ; 00452ddb
    FCOMP double ptr [ESP]              ; 00452ddd
    FNSTSW AX                           ; 00452de0
    SAHF                                ; 00452de2
    JC 0x00452e0d                       ; 00452de3
        ;   XREF to: 00452e0d (CONDITIONAL_JUMP)  ; LAB_00452e0d
    FLD float ptr [ESI + 0x4]           ; 00452de5
    FSUB float ptr [EDX + 0x4]          ; 00452de8
    FMUL double ptr [ESP]               ; 00452deb
    FADD float ptr [EDX + 0x4]          ; 00452dee
    FLD float ptr [EBX]                 ; 00452df1
    FXCH                                ; 00452df3
    FSTP double ptr [ESP + 0x28]        ; 00452df5
    FCOMP double ptr [ESP + 0x28]       ; 00452df9
    FNSTSW AX                           ; 00452dfd
    SAHF                                ; 00452dff
    JNC 0x00452e0d                      ; 00452e00
        ;   XREF to: 00452e0d (CONDITIONAL_JUMP)  ; LAB_00452e0d
    FLD double ptr [ESP + 0x28]         ; 00452e02
    MOV ECX,0x1                         ; 00452e06
    FSTP float ptr [EBX]                ; 00452e0b
    MOV EAX,ECX                         ; 00452e0d
        ;   Label: LAB_00452e0d
    MOV ESP,EBP                         ; 00452e0f
    POP EBP                             ; 00452e11
    POP ESI                             ; 00452e12
    POP EBX                             ; 00452e13
    RET                                 ; 00452e14
    XOR EAX,EAX                         ; 00452e15
        ;   Label: LAB_00452e15
    MOV ESP,EBP                         ; 00452e17
    POP EBP                             ; 00452e19
    POP ESI                             ; 00452e1a
    POP EBX                             ; 00452e1b
    RET                                 ; 00452e1c


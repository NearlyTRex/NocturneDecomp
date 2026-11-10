; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00456b60(float *param_1,float *param_2,float param_3,float *param_4)
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
;   core_dcube.cpp_triangleCylinderCollision_FUN_00456cd0 at 00456e8f
;
; Referenced Globals:
;   undefined4 DAT_005d7aaf
;   undefined4 DAT_005d7ab7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456b60
        ;   Label: core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00456b60
    PUSH ESI                            ; 00456b61
    PUSH EBP                            ; 00456b62
    MOV EBP,ESP                         ; 00456b63
    SUB ESP,0x50                        ; 00456b65
    AND ESP,0xfffffff8                  ; 00456b68
    MOV EDX,dword ptr [EBP + 0x10]      ; 00456b6b
    MOV ESI,dword ptr [EBP + 0x14]      ; 00456b6e
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00456b71
    FLD float ptr [ESI + 0x8]           ; 00456b74
    FLD float ptr [ESI]                 ; 00456b77
    FSUB float ptr [EDX]                ; 00456b79
    FXCH                                ; 00456b7b
    FSUB float ptr [EDX + 0x8]          ; 00456b7d
    FXCH                                ; 00456b80
    FST double ptr [ESP + 0x30]         ; 00456b82
    FMUL double ptr [ESP + 0x30]        ; 00456b86
    FXCH                                ; 00456b8a
    FST double ptr [ESP + 0x18]         ; 00456b8c
    FMUL double ptr [ESP + 0x18]        ; 00456b90
    FADDP                               ; 00456b94
    FLDZ                                ; 00456b96
    FXCH                                ; 00456b98
    FSTP double ptr [ESP + 0x40]        ; 00456b9a
    FCOMP double ptr [ESP + 0x40]       ; 00456b9e
    FNSTSW AX                           ; 00456ba2
    SAHF                                ; 00456ba4
    JNC 0x00456cc5                      ; 00456ba5
        ;   XREF to: 00456cc5 (CONDITIONAL_JUMP)  ; LAB_00456cc5
    FLD float ptr [EDX + 0x8]           ; 00456bab
    FMUL double ptr [ESP + 0x18]        ; 00456bae
    FLD float ptr [EDX + 0x8]           ; 00456bb2
    FMUL ST0                            ; 00456bb5
    FLD double ptr [ESP + 0x40]         ; 00456bb7
    FMUL double ptr [0x005d7ab7]        ; 00456bbb | DAT_005d7ab7
    FLD float ptr [EDX]                 ; 00456bc1
    FMUL ST0                            ; 00456bc3
    FLD float ptr [EDX]                 ; 00456bc5
    FMUL double ptr [ESP + 0x30]        ; 00456bc7
    FXCH                                ; 00456bcb
    FADDP ST3,ST0                       ; 00456bcd
    FADDP ST3,ST0                       ; 00456bcf
    FLD float ptr [EBP + 0x18]          ; 00456bd1
    FMUL ST0                            ; 00456bd4
    FXCH ST3                            ; 00456bd6
    FMUL double ptr [0x005d7aaf]        ; 00456bd8 | DAT_005d7aaf
    FXCH ST3                            ; 00456bde
    FSUBP ST2,ST0                       ; 00456be0
    FMULP                               ; 00456be2
    FXCH                                ; 00456be4
    FST double ptr [ESP + 0x38]         ; 00456be6
    FMUL double ptr [ESP + 0x38]        ; 00456bea
    FSUBRP                              ; 00456bee
    FLDZ                                ; 00456bf0
    FXCH                                ; 00456bf2
    FSTP double ptr [ESP + 0x8]         ; 00456bf4
    FCOMP double ptr [ESP + 0x8]        ; 00456bf8
    FNSTSW AX                           ; 00456bfc
    SAHF                                ; 00456bfe
    JA 0x00456cc5                       ; 00456bff
        ;   XREF to: 00456cc5 (CONDITIONAL_JUMP)  ; LAB_00456cc5
    FLD double ptr [ESP + 0x38]         ; 00456c05
    FCHS                                ; 00456c09
    FLD double ptr [ESP + 0x8]          ; 00456c0b
    FSQRT                               ; 00456c0f
    FSUBP                               ; 00456c11
    FLD double ptr [ESP + 0x40]         ; 00456c13
    FMUL double ptr [0x005d7aaf]        ; 00456c17 | DAT_005d7aaf
    FDIVP                               ; 00456c1d
    FLDZ                                ; 00456c1f
    XOR ECX,ECX                         ; 00456c21
    FXCH                                ; 00456c23
    FSTP double ptr [ESP + 0x10]        ; 00456c25
    FCOMP double ptr [ESP + 0x10]       ; 00456c29
    FNSTSW AX                           ; 00456c2d
    SAHF                                ; 00456c2f
    JA 0x00456c66                       ; 00456c30
        ;   XREF to: 00456c66 (CONDITIONAL_JUMP)  ; LAB_00456c66
    FLD1                                ; 00456c32
    FCOMP double ptr [ESP + 0x10]       ; 00456c34
    FNSTSW AX                           ; 00456c38
    SAHF                                ; 00456c3a
    JC 0x00456c66                       ; 00456c3b
        ;   XREF to: 00456c66 (CONDITIONAL_JUMP)  ; LAB_00456c66
    FLD float ptr [ESI + 0x4]           ; 00456c3d
    FSUB float ptr [EDX + 0x4]          ; 00456c40
    FMUL double ptr [ESP + 0x10]        ; 00456c43
    FADD float ptr [EDX + 0x4]          ; 00456c47
    FLD float ptr [EBX]                 ; 00456c4a
    FXCH                                ; 00456c4c
    FSTP double ptr [ESP + 0x20]        ; 00456c4e
    FCOMP double ptr [ESP + 0x20]       ; 00456c52
    FNSTSW AX                           ; 00456c56
    SAHF                                ; 00456c58
    JNC 0x00456c66                      ; 00456c59
        ;   XREF to: 00456c66 (CONDITIONAL_JUMP)  ; LAB_00456c66
    FLD double ptr [ESP + 0x20]         ; 00456c5b
    MOV ECX,0x1                         ; 00456c5f
    FSTP float ptr [EBX]                ; 00456c64
    FLD double ptr [ESP + 0x8]          ; 00456c66
        ;   Label: LAB_00456c66
    FSQRT                               ; 00456c6a
    FSUB double ptr [ESP + 0x38]        ; 00456c6c
    FLD double ptr [ESP + 0x40]         ; 00456c70
    FMUL double ptr [0x005d7aaf]        ; 00456c74 | DAT_005d7aaf
    FDIVP                               ; 00456c7a
    FLDZ                                ; 00456c7c
    FXCH                                ; 00456c7e
    FSTP double ptr [ESP]               ; 00456c80
    FCOMP double ptr [ESP]              ; 00456c83
    FNSTSW AX                           ; 00456c86
    SAHF                                ; 00456c88
    JA 0x00456cbd                       ; 00456c89
        ;   XREF to: 00456cbd (CONDITIONAL_JUMP)  ; LAB_00456cbd
    FLD1                                ; 00456c8b
    FCOMP double ptr [ESP]              ; 00456c8d
    FNSTSW AX                           ; 00456c90
    SAHF                                ; 00456c92
    JC 0x00456cbd                       ; 00456c93
        ;   XREF to: 00456cbd (CONDITIONAL_JUMP)  ; LAB_00456cbd
    FLD float ptr [ESI + 0x4]           ; 00456c95
    FSUB float ptr [EDX + 0x4]          ; 00456c98
    FMUL double ptr [ESP]               ; 00456c9b
    FADD float ptr [EDX + 0x4]          ; 00456c9e
    FLD float ptr [EBX]                 ; 00456ca1
    FXCH                                ; 00456ca3
    FSTP double ptr [ESP + 0x28]        ; 00456ca5
    FCOMP double ptr [ESP + 0x28]       ; 00456ca9
    FNSTSW AX                           ; 00456cad
    SAHF                                ; 00456caf
    JNC 0x00456cbd                      ; 00456cb0
        ;   XREF to: 00456cbd (CONDITIONAL_JUMP)  ; LAB_00456cbd
    FLD double ptr [ESP + 0x28]         ; 00456cb2
    MOV ECX,0x1                         ; 00456cb6
    FSTP float ptr [EBX]                ; 00456cbb
    MOV EAX,ECX                         ; 00456cbd
        ;   Label: LAB_00456cbd
    MOV ESP,EBP                         ; 00456cbf
    POP EBP                             ; 00456cc1
    POP ESI                             ; 00456cc2
    POP EBX                             ; 00456cc3
    RET                                 ; 00456cc4
    XOR EAX,EAX                         ; 00456cc5
        ;   Label: LAB_00456cc5
    MOV ESP,EBP                         ; 00456cc7
    POP EBP                             ; 00456cc9
    POP ESI                             ; 00456cca
    POP EBX                             ; 00456ccb
    RET                                 ; 00456ccc


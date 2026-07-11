; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00449bc0(float *param_1,float *param_2,float param_3,float *param_4)
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
;   FUN_00449d30 at 00449ef7
;
; Referenced Globals:
;   undefined4 DAT_0057bb9b
;   undefined4 DAT_0057bba3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449bc0
        ;   Label: FUN_00449bc0
    PUSH ESI                            ; 00449bc1
    PUSH EBP                            ; 00449bc2
    MOV EBP,ESP                         ; 00449bc3
    SUB ESP,0x50                        ; 00449bc5
    AND ESP,0xfffffff8                  ; 00449bc8
    MOV EDX,dword ptr [EBP + 0x10]      ; 00449bcb
    MOV ESI,dword ptr [EBP + 0x14]      ; 00449bce
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00449bd1
    FLD float ptr [ESI + 0x8]           ; 00449bd4
    FLD float ptr [ESI]                 ; 00449bd7
    FSUB float ptr [EDX]                ; 00449bd9
    FXCH                                ; 00449bdb
    FSUB float ptr [EDX + 0x8]          ; 00449bdd
    FXCH                                ; 00449be0
    FST double ptr [ESP + 0x30]         ; 00449be2
    FMUL double ptr [ESP + 0x30]        ; 00449be6
    FXCH                                ; 00449bea
    FST double ptr [ESP + 0x18]         ; 00449bec
    FMUL double ptr [ESP + 0x18]        ; 00449bf0
    FADDP                               ; 00449bf4
    FLDZ                                ; 00449bf6
    FXCH                                ; 00449bf8
    FSTP double ptr [ESP + 0x40]        ; 00449bfa
    FCOMP double ptr [ESP + 0x40]       ; 00449bfe
    FNSTSW AX                           ; 00449c02
    SAHF                                ; 00449c04
    JNC 0x00449d25                      ; 00449c05
        ;   XREF to: 00449d25 (CONDITIONAL_JUMP)  ; LAB_00449d25
    FLD float ptr [EDX + 0x8]           ; 00449c0b
    FMUL double ptr [ESP + 0x18]        ; 00449c0e
    FLD float ptr [EDX + 0x8]           ; 00449c12
    FMUL ST0                            ; 00449c15
    FLD double ptr [ESP + 0x40]         ; 00449c17
    FMUL double ptr [0x0057bba3]        ; 00449c1b | DAT_0057bba3
    FLD float ptr [EDX]                 ; 00449c21
    FMUL ST0                            ; 00449c23
    FLD float ptr [EDX]                 ; 00449c25
    FMUL double ptr [ESP + 0x30]        ; 00449c27
    FXCH                                ; 00449c2b
    FADDP ST3,ST0                       ; 00449c2d
    FADDP ST3,ST0                       ; 00449c2f
    FLD float ptr [EBP + 0x18]          ; 00449c31
    FMUL ST0                            ; 00449c34
    FXCH ST3                            ; 00449c36
    FMUL double ptr [0x0057bb9b]        ; 00449c38 | DAT_0057bb9b
    FXCH ST3                            ; 00449c3e
    FSUBP ST2,ST0                       ; 00449c40
    FMULP                               ; 00449c42
    FXCH                                ; 00449c44
    FST double ptr [ESP + 0x38]         ; 00449c46
    FMUL double ptr [ESP + 0x38]        ; 00449c4a
    FSUBRP                              ; 00449c4e
    FLDZ                                ; 00449c50
    FXCH                                ; 00449c52
    FSTP double ptr [ESP + 0x8]         ; 00449c54
    FCOMP double ptr [ESP + 0x8]        ; 00449c58
    FNSTSW AX                           ; 00449c5c
    SAHF                                ; 00449c5e
    JA 0x00449d25                       ; 00449c5f
        ;   XREF to: 00449d25 (CONDITIONAL_JUMP)  ; LAB_00449d25
    FLD double ptr [ESP + 0x38]         ; 00449c65
    FCHS                                ; 00449c69
    FLD double ptr [ESP + 0x8]          ; 00449c6b
    FSQRT                               ; 00449c6f
    FSUBP                               ; 00449c71
    FLD double ptr [ESP + 0x40]         ; 00449c73
    FMUL double ptr [0x0057bb9b]        ; 00449c77 | DAT_0057bb9b
    FDIVP                               ; 00449c7d
    FLDZ                                ; 00449c7f
    XOR ECX,ECX                         ; 00449c81
    FXCH                                ; 00449c83
    FSTP double ptr [ESP + 0x10]        ; 00449c85
    FCOMP double ptr [ESP + 0x10]       ; 00449c89
    FNSTSW AX                           ; 00449c8d
    SAHF                                ; 00449c8f
    JA 0x00449cc6                       ; 00449c90
        ;   XREF to: 00449cc6 (CONDITIONAL_JUMP)  ; LAB_00449cc6
    FLD1                                ; 00449c92
    FCOMP double ptr [ESP + 0x10]       ; 00449c94
    FNSTSW AX                           ; 00449c98
    SAHF                                ; 00449c9a
    JC 0x00449cc6                       ; 00449c9b
        ;   XREF to: 00449cc6 (CONDITIONAL_JUMP)  ; LAB_00449cc6
    FLD float ptr [ESI + 0x4]           ; 00449c9d
    FSUB float ptr [EDX + 0x4]          ; 00449ca0
    FMUL double ptr [ESP + 0x10]        ; 00449ca3
    FADD float ptr [EDX + 0x4]          ; 00449ca7
    FLD float ptr [EBX]                 ; 00449caa
    FXCH                                ; 00449cac
    FSTP double ptr [ESP + 0x20]        ; 00449cae
    FCOMP double ptr [ESP + 0x20]       ; 00449cb2
    FNSTSW AX                           ; 00449cb6
    SAHF                                ; 00449cb8
    JNC 0x00449cc6                      ; 00449cb9
        ;   XREF to: 00449cc6 (CONDITIONAL_JUMP)  ; LAB_00449cc6
    FLD double ptr [ESP + 0x20]         ; 00449cbb
    MOV ECX,0x1                         ; 00449cbf
    FSTP float ptr [EBX]                ; 00449cc4
    FLD double ptr [ESP + 0x8]          ; 00449cc6
        ;   Label: LAB_00449cc6
    FSQRT                               ; 00449cca
    FSUB double ptr [ESP + 0x38]        ; 00449ccc
    FLD double ptr [ESP + 0x40]         ; 00449cd0
    FMUL double ptr [0x0057bb9b]        ; 00449cd4 | DAT_0057bb9b
    FDIVP                               ; 00449cda
    FLDZ                                ; 00449cdc
    FXCH                                ; 00449cde
    FSTP double ptr [ESP]               ; 00449ce0
    FCOMP double ptr [ESP]              ; 00449ce3
    FNSTSW AX                           ; 00449ce6
    SAHF                                ; 00449ce8
    JA 0x00449d1d                       ; 00449ce9
        ;   XREF to: 00449d1d (CONDITIONAL_JUMP)  ; LAB_00449d1d
    FLD1                                ; 00449ceb
    FCOMP double ptr [ESP]              ; 00449ced
    FNSTSW AX                           ; 00449cf0
    SAHF                                ; 00449cf2
    JC 0x00449d1d                       ; 00449cf3
        ;   XREF to: 00449d1d (CONDITIONAL_JUMP)  ; LAB_00449d1d
    FLD float ptr [ESI + 0x4]           ; 00449cf5
    FSUB float ptr [EDX + 0x4]          ; 00449cf8
    FMUL double ptr [ESP]               ; 00449cfb
    FADD float ptr [EDX + 0x4]          ; 00449cfe
    FLD float ptr [EBX]                 ; 00449d01
    FXCH                                ; 00449d03
    FSTP double ptr [ESP + 0x28]        ; 00449d05
    FCOMP double ptr [ESP + 0x28]       ; 00449d09
    FNSTSW AX                           ; 00449d0d
    SAHF                                ; 00449d0f
    JNC 0x00449d1d                      ; 00449d10
        ;   XREF to: 00449d1d (CONDITIONAL_JUMP)  ; LAB_00449d1d
    FLD double ptr [ESP + 0x28]         ; 00449d12
    MOV ECX,0x1                         ; 00449d16
    FSTP float ptr [EBX]                ; 00449d1b
    MOV EAX,ECX                         ; 00449d1d
        ;   Label: LAB_00449d1d
    MOV ESP,EBP                         ; 00449d1f
    POP EBP                             ; 00449d21
    POP ESI                             ; 00449d22
    POP EBX                             ; 00449d23
    RET                                 ; 00449d24
    XOR EAX,EAX                         ; 00449d25
        ;   Label: LAB_00449d25
    MOV ESP,EBP                         ; 00449d27
    POP EBP                             ; 00449d29
    POP ESI                             ; 00449d2a
    POP EBX                             ; 00449d2b
    RET                                 ; 00449d2c


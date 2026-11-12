; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_stranger_cpp_calculateAimAnglesWithOffset_FUN_0058e99e(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f6ed1
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_math.c_acos_FUN_005c1d04
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0058e99e
        ;   Label: core_stranger.cpp_calculateAimAnglesWithOffset_FUN_0058e99e
    PUSH EBX                            ; 0058e9a0
    PUSH EDI                            ; 0058e9a1
    PUSH EBP                            ; 0058e9a2
    MOV EBP,ESP                         ; 0058e9a3
    SUB ESP,0x58                        ; 0058e9a5
    AND ESP,0xfffffff8                  ; 0058e9a8
    MOV EBX,dword ptr [EBP + 0x10]      ; 0058e9ab
    MOV dword ptr [ESP + 0x40],ESI      ; 0058e9ae
    PUSH EBX                            ; 0058e9b2
    LEA ESI,[ESP + 0x2c]                ; 0058e9b3
    LEA EDI,[ESP + 0x38]                ; 0058e9b7
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0058e9bb
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x2c]                ; 0058e9c0
    ADD ESP,0x4                         ; 0058e9c4
    MOVSD ES:EDI,ESI                    ; 0058e9c7
    MOVSD ES:EDI,ESI                    ; 0058e9c8
    MOVSD ES:EDI,ESI                    ; 0058e9c9
    FLD float ptr [EBX + 0x4]           ; 0058e9ca
    FMUL ST0                            ; 0058e9cd
    FLD float ptr [EBX]                 ; 0058e9cf
    FMUL ST0                            ; 0058e9d1
    FADDP                               ; 0058e9d3
    FLD float ptr [EBX + 0x8]           ; 0058e9d5
    FMUL ST0                            ; 0058e9d8
    FADDP                               ; 0058e9da
    FSQRT                               ; 0058e9dc
    FST float ptr [ESP + 0x24]          ; 0058e9de
    MOV EBX,dword ptr [ESP + 0x24]      ; 0058e9e2
    FST double ptr [ESP + 0x18]         ; 0058e9e6
    MOV dword ptr [ESP + 0x20],EBX      ; 0058e9ea
    FCOMP double ptr [0x005f6ed1]       ; 0058e9ee | DAT_005f6ed1
    FNSTSW AX                           ; 0058e9f4
    SAHF                                ; 0058e9f6
    JBE 0x0058ea9e                      ; 0058e9f7
        ;   XREF to: 0058ea9e (CONDITIONAL_JUMP)  ; LAB_0058ea9e
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058e9fd
    FLD float ptr [EBX]                 ; 0058ea00
    FCHS                                ; 0058ea02
    FSTP float ptr [ESP + 0x4c]         ; 0058ea04
    JNC 0x0058eab3                      ; 0058ea08
        ;   XREF to: 0058eab3 (CONDITIONAL_JUMP)  ; LAB_0058eab3
    FLD float ptr [ESP + 0x20]          ; 0058ea0e
        ;   Label: LAB_0058ea0e
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058ea12
    FSTP double ptr [ESP]               ; 0058ea15
    MOV EBX,dword ptr [EBX + 0x4]       ; 0058ea18
    FLD double ptr [ESP]                ; 0058ea1b
    MOV dword ptr [ESP + 0x48],EBX      ; 0058ea1e
    FCOMP double ptr [0x005f6ed1]       ; 0058ea22 | DAT_005f6ed1
    FNSTSW AX                           ; 0058ea28
    SAHF                                ; 0058ea2a
    JC 0x0058ea9e                       ; 0058ea2b
        ;   XREF to: 0058ea9e (CONDITIONAL_JUMP)  ; LAB_0058ea9e
    FLD float ptr [ESP + 0x20]          ; 0058ea2d
    FMUL ST0                            ; 0058ea31
    FLD float ptr [ESP + 0x48]          ; 0058ea33
    FMUL ST0                            ; 0058ea37
    FSUBP                               ; 0058ea39
    FSQRT                               ; 0058ea3b
    FDIV double ptr [ESP]               ; 0058ea3d
    FLD1                                ; 0058ea40
    FXCH                                ; 0058ea42
    FSTP double ptr [ESP + 0x8]         ; 0058ea44
    FCOMP double ptr [ESP + 0x8]        ; 0058ea48
    FNSTSW AX                           ; 0058ea4c
    SAHF                                ; 0058ea4e
    JBE 0x0058ea9e                      ; 0058ea4f
        ;   XREF to: 0058ea9e (CONDITIONAL_JUMP)  ; LAB_0058ea9e
    FLDZ                                ; 0058ea51
    FCOMP double ptr [ESP + 0x8]        ; 0058ea53
    FNSTSW AX                           ; 0058ea57
    SAHF                                ; 0058ea59
    JA 0x0058ea9e                       ; 0058ea5a
        ;   XREF to: 0058ea9e (CONDITIONAL_JUMP)  ; LAB_0058ea9e
    FLD double ptr [ESP + 0x8]          ; 0058ea5c
    CALL crt_math.c_acos_FUN_005c1d04   ; 0058ea60
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FLDZ                                ; 0058ea65
    FXCH                                ; 0058ea67
    FSTP float ptr [ESP + 0x50]         ; 0058ea69
    FCOMP float ptr [ESP + 0x48]        ; 0058ea6d
    FNSTSW AX                           ; 0058ea71
    SAHF                                ; 0058ea73
    JBE 0x0058eb38                      ; 0058ea74
        ;   XREF to: 0058eb38 (CONDITIONAL_JUMP)  ; LAB_0058eb38
    FLD float ptr [ESP + 0x34]          ; 0058ea7a
    FSUB float ptr [ESP + 0x50]         ; 0058ea7e
    FSTP float ptr [ESP + 0x34]         ; 0058ea82
        ;   Label: LAB_0058ea82
    PUSH dword ptr [ESP + 0x34]         ; 0058ea86
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0058ea8a
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x58],EAX      ; 0058ea8f
    FLD float ptr [ESP + 0x58]          ; 0058ea93
    ADD ESP,0x4                         ; 0058ea97
    FSTP float ptr [ESP + 0x34]         ; 0058ea9a
    MOV EDI,dword ptr [ESP + 0x40]      ; 0058ea9e
        ;   Label: LAB_0058ea9e
    LEA ESI,[ESP + 0x34]                ; 0058eaa2
    MOVSD ES:EDI,ESI                    ; 0058eaa6
    MOVSD ES:EDI,ESI                    ; 0058eaa7
    MOVSD ES:EDI,ESI                    ; 0058eaa8
    MOV EAX,dword ptr [ESP + 0x40]      ; 0058eaa9
    MOV ESP,EBP                         ; 0058eaad
    POP EBP                             ; 0058eaaf
    POP EDI                             ; 0058eab0
    POP EBX                             ; 0058eab1
    RET                                 ; 0058eab2
    FLD float ptr [ESP + 0x24]          ; 0058eab3
        ;   Label: LAB_0058eab3
    FMUL ST0                            ; 0058eab7
    FLD float ptr [ESP + 0x4c]          ; 0058eab9
    FMUL ST0                            ; 0058eabd
    FSUBP                               ; 0058eabf
    FSQRT                               ; 0058eac1
    FDIV double ptr [ESP + 0x18]        ; 0058eac3
    FLD1                                ; 0058eac7
    FXCH                                ; 0058eac9
    FSTP double ptr [ESP + 0x10]        ; 0058eacb
    FCOMP double ptr [ESP + 0x10]       ; 0058eacf
    FNSTSW AX                           ; 0058ead3
    SAHF                                ; 0058ead5
    JBE 0x0058ea0e                      ; 0058ead6
        ;   XREF to: 0058ea0e (CONDITIONAL_JUMP)  ; LAB_0058ea0e
    FLDZ                                ; 0058eadc
    FCOMP double ptr [ESP + 0x10]       ; 0058eade
    FNSTSW AX                           ; 0058eae2
    SAHF                                ; 0058eae4
    JA 0x0058ea0e                       ; 0058eae5
        ;   XREF to: 0058ea0e (CONDITIONAL_JUMP)  ; LAB_0058ea0e
    FLD double ptr [ESP + 0x10]         ; 0058eaeb
    CALL crt_math.c_acos_FUN_005c1d04   ; 0058eaef
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FLDZ                                ; 0058eaf4
    FXCH                                ; 0058eaf6
    FSTP float ptr [ESP + 0x44]         ; 0058eaf8
    FCOMP float ptr [ESP + 0x4c]        ; 0058eafc
    FNSTSW AX                           ; 0058eb00
    SAHF                                ; 0058eb02
    JBE 0x0058eb2e                      ; 0058eb03
        ;   XREF to: 0058eb2e (CONDITIONAL_JUMP)  ; LAB_0058eb2e
    FLD float ptr [ESP + 0x38]          ; 0058eb05
    FSUB float ptr [ESP + 0x44]         ; 0058eb09
    FSTP float ptr [ESP + 0x38]         ; 0058eb0d
        ;   Label: LAB_0058eb0d
    PUSH dword ptr [ESP + 0x38]         ; 0058eb11
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0058eb15
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x58],EAX      ; 0058eb1a
    FLD float ptr [ESP + 0x58]          ; 0058eb1e
    ADD ESP,0x4                         ; 0058eb22
    FSTP float ptr [ESP + 0x38]         ; 0058eb25
    JMP 0x0058ea0e                      ; 0058eb29
        ;   XREF to: 0058ea0e (UNCONDITIONAL_JUMP)  ; LAB_0058ea0e
    FLD float ptr [ESP + 0x38]          ; 0058eb2e
        ;   Label: LAB_0058eb2e
    FADD float ptr [ESP + 0x44]         ; 0058eb32
    JMP 0x0058eb0d                      ; 0058eb36
        ;   XREF to: 0058eb0d (UNCONDITIONAL_JUMP)  ; LAB_0058eb0d
    FLD float ptr [ESP + 0x34]          ; 0058eb38
        ;   Label: LAB_0058eb38
    FADD float ptr [ESP + 0x50]         ; 0058eb3c
    JMP 0x0058ea82                      ; 0058eb40
        ;   XREF to: 0058ea82 (UNCONDITIONAL_JUMP)  ; LAB_0058ea82


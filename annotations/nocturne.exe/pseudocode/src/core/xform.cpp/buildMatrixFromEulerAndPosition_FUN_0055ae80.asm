; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined8       Stack[-0x34]:8  local_34
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[14]:
;   FUN_004c46b0 at 004c46fb
;   FUN_004d4ba0 at 004d4d3a
;   FUN_004f6170 at 004f6381
;   FUN_00543c50 at 00543f19
;   FUN_00549cd0 at 00549dbd
;   FUN_0055caf0 at 0055cb77
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320 at 0041754e
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370 at 00422470
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00427310 at 0042763c
;   core_charactr.cpp_CCharacter_computePickup_FUN_00429010 at 00429050
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055ae80
        ;   Label: core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
    SUB ESP,0x38                        ; 0055ae81
    MOV EDX,dword ptr [ESP + 0x40]      ; 0055ae84
    MOV ECX,dword ptr [ESP + 0x44]      ; 0055ae88
    MOV EBX,dword ptr [ESP + 0x48]      ; 0055ae8c
    FLD float ptr [EBX]                 ; 0055ae90
    FLD ST0                             ; 0055ae92
    FSIN                                ; 0055ae94
    FXCH                                ; 0055ae96
    FCOS                                ; 0055ae98
    FLD float ptr [EBX + 0x8]           ; 0055ae9a
    FLD ST0                             ; 0055ae9d
    FSIN                                ; 0055ae9f
    FXCH                                ; 0055aea1
    FCOS                                ; 0055aea3
    FLD float ptr [EBX + 0x4]           ; 0055aea5
    FLD ST0                             ; 0055aea8
    FSIN                                ; 0055aeaa
    FXCH                                ; 0055aeac
    FCOS                                ; 0055aeae
    FXCH                                ; 0055aeb0
    FST double ptr [ESP + 0x20]         ; 0055aeb2
    FMUL ST5                            ; 0055aeb6
    FLD double ptr [ESP + 0x20]         ; 0055aeb8
    FXCH ST5                            ; 0055aebc
    FSTP double ptr [ESP + 0x8]         ; 0055aebe
    FXCH ST4                            ; 0055aec2
    FMUL double ptr [ESP + 0x8]         ; 0055aec4
    FXCH ST3                            ; 0055aec8
    FST double ptr [ESP + 0x10]         ; 0055aeca
    FMUL double ptr [ESP + 0x8]         ; 0055aece
    FXCH ST2                            ; 0055aed2
    FST double ptr [ESP + 0x18]         ; 0055aed4
    FMUL double ptr [ESP + 0x8]         ; 0055aed8
    FXCH                                ; 0055aedc
    FST double ptr [ESP + 0x28]         ; 0055aede
    FMUL ST5                            ; 0055aee2
    FLD ST4                             ; 0055aee4
    FMUL double ptr [ESP + 0x10]        ; 0055aee6
    FXCH ST5                            ; 0055aeea
    FMUL double ptr [ESP + 0x18]        ; 0055aeec
    FXCH ST6                            ; 0055aef0
    FCHS                                ; 0055aef2
    FSTP float ptr [EDX + 0x24]         ; 0055aef4
    FLD ST0                             ; 0055aef7
    FMUL double ptr [ESP + 0x10]        ; 0055aef9
    FXCH ST4                            ; 0055aefd
    FSTP float ptr [EDX + 0x20]         ; 0055aeff
    FMUL double ptr [ESP + 0x18]        ; 0055af02
    FXCH ST2                            ; 0055af06
    FSTP float ptr [EDX + 0x4]          ; 0055af08
    FLD double ptr [ESP + 0x28]         ; 0055af0b
    FMUL double ptr [ESP + 0x18]        ; 0055af0f
    FXCH                                ; 0055af13
    FSTP float ptr [EDX + 0x14]         ; 0055af15
    FLD double ptr [ESP + 0x10]         ; 0055af18
    FMUL double ptr [ESP + 0x20]        ; 0055af1c
    FXCH                                ; 0055af20
    FADDP ST4,ST0                       ; 0055af22
    FLD double ptr [ESP + 0x28]         ; 0055af24
    FCHS                                ; 0055af28
    FMUL double ptr [ESP + 0x10]        ; 0055af2a
    FLD double ptr [ESP + 0x20]         ; 0055af2e
    FCHS                                ; 0055af32
    FMUL double ptr [ESP + 0x18]        ; 0055af34
    FXCH ST2                            ; 0055af38
    FADDP ST3,ST0                       ; 0055af3a
    FLD double ptr [ESP + 0x28]         ; 0055af3c
    FMUL double ptr [ESP + 0x8]         ; 0055af40
    FSTP float ptr [EDX + 0x28]         ; 0055af44
    FADDP ST5,ST0                       ; 0055af47
    FADDP ST2,ST0                       ; 0055af49
    FXCH ST2                            ; 0055af4b
    FSTP float ptr [EDX]                ; 0055af4d
    FXCH                                ; 0055af4f
    FSTP float ptr [EDX + 0x18]         ; 0055af51
    FXCH                                ; 0055af54
    FSTP float ptr [EDX + 0x10]         ; 0055af56
    FSTP float ptr [EDX + 0x8]          ; 0055af59
    FLD float ptr [ECX + 0x4]           ; 0055af5c
    FMUL float ptr [EDX + 0x4]          ; 0055af5f
    FLD float ptr [ECX]                 ; 0055af62
    FMUL float ptr [EDX]                ; 0055af64
    FADDP                               ; 0055af66
    FLD float ptr [ECX + 0x8]           ; 0055af68
    FMUL float ptr [EDX + 0x8]          ; 0055af6b
    FADDP                               ; 0055af6e
    FCHS                                ; 0055af70
    FSTP float ptr [EDX + 0xc]          ; 0055af72
    FLD float ptr [ECX + 0x4]           ; 0055af75
    FMUL float ptr [EDX + 0x14]         ; 0055af78
    FLD float ptr [ECX]                 ; 0055af7b
    FMUL float ptr [EDX + 0x10]         ; 0055af7d
    FADDP                               ; 0055af80
    FLD float ptr [ECX + 0x8]           ; 0055af82
    FMUL float ptr [EDX + 0x18]         ; 0055af85
    FADDP                               ; 0055af88
    FCHS                                ; 0055af8a
    FSTP float ptr [EDX + 0x1c]         ; 0055af8c
    FLD float ptr [ECX + 0x4]           ; 0055af8f
    FMUL float ptr [EDX + 0x24]         ; 0055af92
    FLD float ptr [ECX]                 ; 0055af95
    FMUL float ptr [EDX + 0x20]         ; 0055af97
    FADDP                               ; 0055af9a
    FLD float ptr [ECX + 0x8]           ; 0055af9c
    FMUL float ptr [EDX + 0x28]         ; 0055af9f
    FADDP                               ; 0055afa2
    FCHS                                ; 0055afa4
    FSTP float ptr [EDX + 0x2c]         ; 0055afa6
    ADD ESP,0x38                        ; 0055afa9
    POP EBX                             ; 0055afac
    RET                                 ; 0055afad


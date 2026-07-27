; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined8       Stack[-0x34]:8  local_34
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[35]:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320 at 004176aa
;   core_boneguy.cpp_FUN_004194b0 at 0041950b
;   core_boxactor.cpp_FUN_0041f3d0 at 0041f561
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370 at 0042245b
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00427310 at 0042752e
;   core_charactr.cpp_CCharacter_computePickup_FUN_00429010 at 0042906e
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220 at 00429311
;   core_fire.cpp_CBulletHole_init_FUN_00482c80 at 00482da7
;   core_gabriela.cpp_FUN_004980d0 at 00498109
;   core_gabriela.cpp_FUN_00499ca0 at 00499daf
;   ... and 25 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055afb0
        ;   Label: core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
    SUB ESP,0x38                        ; 0055afb1
    MOV EDX,dword ptr [ESP + 0x40]      ; 0055afb4
    MOV ECX,dword ptr [ESP + 0x44]      ; 0055afb8
    MOV EBX,dword ptr [ESP + 0x48]      ; 0055afbc
    FLD float ptr [EBX]                 ; 0055afc0
    FLD ST0                             ; 0055afc2
    FSIN                                ; 0055afc4
    FXCH                                ; 0055afc6
    FCOS                                ; 0055afc8
    FLD float ptr [EBX + 0x8]           ; 0055afca
    FLD ST0                             ; 0055afcd
    FSIN                                ; 0055afcf
    FXCH                                ; 0055afd1
    FCOS                                ; 0055afd3
    FLD float ptr [EBX + 0x4]           ; 0055afd5
    FLD ST0                             ; 0055afd8
    FSIN                                ; 0055afda
    FXCH                                ; 0055afdc
    FCOS                                ; 0055afde
    FXCH                                ; 0055afe0
    FST double ptr [ESP + 0x20]         ; 0055afe2
    FMUL ST5                            ; 0055afe6
    FLD double ptr [ESP + 0x20]         ; 0055afe8
    FXCH ST5                            ; 0055afec
    FSTP double ptr [ESP + 0x8]         ; 0055afee
    FXCH ST4                            ; 0055aff2
    FMUL double ptr [ESP + 0x8]         ; 0055aff4
    FXCH ST3                            ; 0055aff8
    FST double ptr [ESP + 0x10]         ; 0055affa
    FMUL double ptr [ESP + 0x8]         ; 0055affe
    FXCH ST2                            ; 0055b002
    FST double ptr [ESP + 0x18]         ; 0055b004
    FMUL double ptr [ESP + 0x8]         ; 0055b008
    FXCH                                ; 0055b00c
    FST double ptr [ESP + 0x28]         ; 0055b00e
    FMUL ST5                            ; 0055b012
    FLD ST4                             ; 0055b014
    FMUL double ptr [ESP + 0x10]        ; 0055b016
    FXCH ST5                            ; 0055b01a
    FMUL double ptr [ESP + 0x18]        ; 0055b01c
    FXCH ST6                            ; 0055b020
    FCHS                                ; 0055b022
    FSTP float ptr [EDX + 0x18]         ; 0055b024
    FLD ST0                             ; 0055b027
    FMUL double ptr [ESP + 0x10]        ; 0055b029
    FXCH ST4                            ; 0055b02d
    FSTP float ptr [EDX + 0x8]          ; 0055b02f
    FMUL double ptr [ESP + 0x18]        ; 0055b032
    FXCH ST2                            ; 0055b036
    FSTP float ptr [EDX + 0x10]         ; 0055b038
    FLD double ptr [ESP + 0x28]         ; 0055b03b
    FMUL double ptr [ESP + 0x18]        ; 0055b03f
    FXCH                                ; 0055b043
    FSTP float ptr [EDX + 0x14]         ; 0055b045
    FLD double ptr [ESP + 0x10]         ; 0055b048
    FMUL double ptr [ESP + 0x20]        ; 0055b04c
    FXCH                                ; 0055b050
    FADDP ST4,ST0                       ; 0055b052
    FLD double ptr [ESP + 0x28]         ; 0055b054
    FCHS                                ; 0055b058
    FMUL double ptr [ESP + 0x10]        ; 0055b05a
    FLD double ptr [ESP + 0x20]         ; 0055b05e
    FCHS                                ; 0055b062
    FMUL double ptr [ESP + 0x18]        ; 0055b064
    FXCH ST2                            ; 0055b068
    FADDP ST3,ST0                       ; 0055b06a
    FLD double ptr [ESP + 0x28]         ; 0055b06c
    FMUL double ptr [ESP + 0x8]         ; 0055b070
    FSTP float ptr [EDX + 0x28]         ; 0055b074
    FADDP ST5,ST0                       ; 0055b077
    FADDP ST2,ST0                       ; 0055b079
    FXCH ST2                            ; 0055b07b
    FSTP float ptr [EDX]                ; 0055b07d
    FXCH                                ; 0055b07f
    FSTP float ptr [EDX + 0x24]         ; 0055b081
    FXCH                                ; 0055b084
    FSTP float ptr [EDX + 0x4]          ; 0055b086
    FSTP float ptr [EDX + 0x20]         ; 0055b089
    MOV EAX,dword ptr [ECX]             ; 0055b08c
    MOV dword ptr [EDX + 0xc],EAX       ; 0055b08e
    MOV EAX,dword ptr [ECX + 0x4]       ; 0055b091
    MOV dword ptr [EDX + 0x1c],EAX      ; 0055b094
    MOV EAX,dword ptr [ECX + 0x8]       ; 0055b097
    MOV dword ptr [EDX + 0x2c],EAX      ; 0055b09a
    ADD ESP,0x38                        ; 0055b09d
    POP EBX                             ; 0055b0a0
    RET                                 ; 0055b0a1


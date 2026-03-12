; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b,CMatrix3x4f *matrix_out)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_a
; CMatrix3x4f *    Stack[0x8]:4   matrix_b
; Local Variables:
; float[4]         Stack[-0x38]:16  local_38
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
; float            Stack[-0x10]:4  local_10
; float            Stack[-0xc]:4  local_c
;
; XREF[45]:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a630 at 0041a9d3
;   core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041ca40 at 0041cbb5
;   core_boxactor.cpp_CLightActor_process_FUN_00422a50 at 00422c14
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00425fe0 at 004260f9
;   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80 at 0042cf41
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 at 0042be9c
;   core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_0042d300 at 0042d344
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042a420 at 0042a499
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_0042d090 at 0042d2e0
;   core_cloth.cpp_CCloth_computeBoneTransform_FUN_0043a2b0 at 0043a32a
;   ... and 35 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f4f10
        ;   Label: core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
    PUSH EDI                            ; 005f4f11
    SUB ESP,0x30                        ; 005f4f12
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005f4f15
    MOV EAX,dword ptr [ESP + 0x40]      ; 005f4f19
    MOV EBX,ESI                         ; 005f4f1d
    FLD float ptr [EAX + 0x4]           ; 005f4f1f
    FMUL float ptr [EDX + 0x10]         ; 005f4f22
    FLD float ptr [EAX + 0x4]           ; 005f4f25
    FMUL float ptr [EDX + 0x14]         ; 005f4f28
    FLD float ptr [EAX + 0x4]           ; 005f4f2b
    FMUL float ptr [EDX + 0x18]         ; 005f4f2e
    FLD float ptr [EAX + 0x14]          ; 005f4f31
    FMUL float ptr [EDX + 0x10]         ; 005f4f34
    FLD float ptr [EAX]                 ; 005f4f37
    FMUL float ptr [EDX]                ; 005f4f39
    FLD float ptr [EAX + 0x10]          ; 005f4f3b
    FXCH                                ; 005f4f3e
    FADDP ST5,ST0                       ; 005f4f40
    FMUL float ptr [EDX + 0x4]          ; 005f4f42
    FLD float ptr [EAX + 0x8]           ; 005f4f45
    FMUL float ptr [EDX + 0x20]         ; 005f4f48
    FLD float ptr [EAX]                 ; 005f4f4b
    FXCH                                ; 005f4f4d
    FADDP ST6,ST0                       ; 005f4f4f
    FMUL float ptr [EDX + 0x4]          ; 005f4f51
    FXCH ST5                            ; 005f4f54
    FSTP float ptr [ESP]                ; 005f4f56
    FLD float ptr [EAX + 0x10]          ; 005f4f59
    FXCH ST5                            ; 005f4f5c
    FADDP ST4,ST0                       ; 005f4f5e
    FXCH ST4                            ; 005f4f60
    FMUL float ptr [EDX + 0x8]          ; 005f4f62
    FLD float ptr [EAX + 0x8]           ; 005f4f65
    FMUL float ptr [EDX + 0x24]         ; 005f4f68
    FLD float ptr [EAX]                 ; 005f4f6b
    FXCH                                ; 005f4f6d
    FADDP ST5,ST0                       ; 005f4f6f
    FMUL float ptr [EDX + 0x8]          ; 005f4f71
    FXCH ST4                            ; 005f4f74
    FSTP float ptr [ESP + 0x4]          ; 005f4f76
    FLD float ptr [EAX + 0x24]          ; 005f4f7a
    FXCH ST4                            ; 005f4f7d
    FADDP ST3,ST0                       ; 005f4f7f
    FXCH ST3                            ; 005f4f81
    FMUL float ptr [EDX + 0x10]         ; 005f4f83
    FLD float ptr [EAX + 0x8]           ; 005f4f86
    FMUL float ptr [EDX + 0x28]         ; 005f4f89
    FLD float ptr [EAX + 0x10]          ; 005f4f8c
    FXCH                                ; 005f4f8f
    FADDP ST4,ST0                       ; 005f4f91
    FMUL float ptr [EDX]                ; 005f4f93
    FXCH ST3                            ; 005f4f95
    FSTP float ptr [ESP + 0x8]          ; 005f4f97
    FLD float ptr [EAX + 0x20]          ; 005f4f9b
    FXCH ST3                            ; 005f4f9e
    FADDP ST2,ST0                       ; 005f4fa0
    FXCH ST2                            ; 005f4fa2
    FMUL float ptr [EDX + 0x4]          ; 005f4fa4
    FLD float ptr [EAX + 0x18]          ; 005f4fa7
    FMUL float ptr [EDX + 0x20]         ; 005f4faa
    FLD float ptr [EAX + 0x14]          ; 005f4fad
    FXCH                                ; 005f4fb0
    FADDP ST3,ST0                       ; 005f4fb2
    FMUL float ptr [EDX + 0x14]         ; 005f4fb4
    FXCH ST2                            ; 005f4fb7
    FSTP float ptr [ESP + 0x10]         ; 005f4fb9
    FLD float ptr [EAX + 0x20]          ; 005f4fbd
    FXCH ST2                            ; 005f4fc0
    FADDP ST5,ST0                       ; 005f4fc2
    FXCH                                ; 005f4fc4
    FMUL float ptr [EDX + 0x8]          ; 005f4fc6
    FLD float ptr [EAX + 0x18]          ; 005f4fc9
    FMUL float ptr [EDX + 0x24]         ; 005f4fcc
    FLD float ptr [EAX + 0x14]          ; 005f4fcf
    FXCH                                ; 005f4fd2
    FADDP ST6,ST0                       ; 005f4fd4
    FMUL float ptr [EDX + 0x18]         ; 005f4fd6
    FXCH ST5                            ; 005f4fd9
    FSTP float ptr [ESP + 0x14]         ; 005f4fdb
    FLD float ptr [EAX + 0x4]           ; 005f4fdf
    FXCH ST5                            ; 005f4fe2
    FADDP ST4,ST0                       ; 005f4fe4
    FXCH ST4                            ; 005f4fe6
    FMUL float ptr [EDX + 0x1c]         ; 005f4fe8
    FLD float ptr [EAX + 0x18]          ; 005f4feb
    FMUL float ptr [EDX + 0x28]         ; 005f4fee
    FLD float ptr [EAX + 0x20]          ; 005f4ff1
    FXCH                                ; 005f4ff4
    FADDP ST5,ST0                       ; 005f4ff6
    FMUL float ptr [EDX]                ; 005f4ff8
    FXCH ST4                            ; 005f4ffa
    FSTP float ptr [ESP + 0x18]         ; 005f4ffc
    FLD float ptr [EAX + 0x10]          ; 005f5000
    FXCH ST4                            ; 005f5003
    FADDP ST3,ST0                       ; 005f5005
    FXCH ST3                            ; 005f5007
    FMUL float ptr [EDX + 0xc]          ; 005f5009
    FLD float ptr [EAX + 0x28]          ; 005f500c
    FMUL float ptr [EDX + 0x20]         ; 005f500f
    FLD float ptr [EAX + 0x20]          ; 005f5012
    FXCH                                ; 005f5015
    FADDP ST4,ST0                       ; 005f5017
    FMUL float ptr [EDX + 0xc]          ; 005f5019
    FXCH ST3                            ; 005f501c
    FSTP float ptr [ESP + 0x20]         ; 005f501e
    FLD float ptr [EAX + 0x24]          ; 005f5022
    FMUL float ptr [EDX + 0x14]         ; 005f5025
    FLD float ptr [EAX + 0x24]          ; 005f5028
    FMUL float ptr [EDX + 0x18]         ; 005f502b
    FXCH                                ; 005f502e
    FADDP ST3,ST0                       ; 005f5030
    FADDP ST5,ST0                       ; 005f5032
    FLD float ptr [EAX + 0x28]          ; 005f5034
    FMUL float ptr [EDX + 0x24]         ; 005f5037
    FLD float ptr [EAX + 0x28]          ; 005f503a
    FMUL float ptr [EDX + 0x28]         ; 005f503d
    FXCH                                ; 005f5040
    FADDP ST3,ST0                       ; 005f5042
    FLD float ptr [EAX]                 ; 005f5044
    FMUL float ptr [EDX + 0xc]          ; 005f5046
    FXCH                                ; 005f5049
    FADDP ST6,ST0                       ; 005f504b
    FLD float ptr [EAX + 0x14]          ; 005f504d
    FXCH                                ; 005f5050
    FADDP ST5,ST0                       ; 005f5052
    FMUL float ptr [EDX + 0x1c]         ; 005f5054
    FLD float ptr [EAX + 0x8]           ; 005f5057
    FMUL float ptr [EDX + 0x2c]         ; 005f505a
    FXCH                                ; 005f505d
    FADDP ST2,ST0                       ; 005f505f
    FLD float ptr [EAX + 0x24]          ; 005f5061
    FMUL float ptr [EDX + 0x1c]         ; 005f5064
    FADDP ST4,ST0                       ; 005f5067
    FADDP ST4,ST0                       ; 005f5069
    FLD float ptr [EAX + 0x18]          ; 005f506b
    FMUL float ptr [EDX + 0x2c]         ; 005f506e
    FLD float ptr [EAX + 0x28]          ; 005f5071
    FMUL float ptr [EDX + 0x2c]         ; 005f5074
    MOV ECX,0xc                         ; 005f5077
    MOV EDI,ESI                         ; 005f507c
    MOV ESI,ESP                         ; 005f507e
    FXCH                                ; 005f5080
    FADDP ST2,ST0                       ; 005f5082
    FADDP ST3,ST0                       ; 005f5084
    FXCH                                ; 005f5086
    FSTP float ptr [ESP + 0x24]         ; 005f5088
    FXCH ST3                            ; 005f508c
    FSTP float ptr [ESP + 0x28]         ; 005f508e
    FXCH                                ; 005f5092
    FADD float ptr [EAX + 0xc]          ; 005f5094
    FXCH ST2                            ; 005f5097
    FADD float ptr [EAX + 0x1c]         ; 005f5099
    FXCH                                ; 005f509c
    FADD float ptr [EAX + 0x2c]         ; 005f509e
    FXCH ST2                            ; 005f50a1
    FSTP float ptr [ESP + 0xc]          ; 005f50a3
    FSTP float ptr [ESP + 0x1c]         ; 005f50a7
    FSTP float ptr [ESP + 0x2c]         ; 005f50ab
    MOVSD.REP ES:EDI,ESI                ; 005f50af
    MOV EAX,EBX                         ; 005f50b1
    ADD ESP,0x30                        ; 005f50b3
    POP EDI                             ; 005f50b6
    POP EBX                             ; 005f50b7
    RET                                 ; 005f50b8


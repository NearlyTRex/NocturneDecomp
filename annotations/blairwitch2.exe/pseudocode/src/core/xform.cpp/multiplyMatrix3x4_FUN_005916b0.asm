; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(float *param_1,float *param_2)
;
; Local Variables:
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
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[46]:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00416d70 at 00416fe8
;   core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_004192a0 at 0041945f
;   core_boxactor.cpp_CLightActor_process_FUN_0041d020 at 0041d1f4
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_004203a0 at 004204ca
;   core_bwgrndma.cpp_CGrandma_getCarryObjToBodyXForm_FUN_005a7cf0 at 005a7df3
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00426a10 at 00426d27
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 at 0042794f
;   core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120 at 00429164
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_00425aa0 at 00425b25
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00428e30 at 00428ee0
;   ... and 36 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005916b0
        ;   Label: core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
    PUSH EDI                            ; 005916b1
    SUB ESP,0x30                        ; 005916b2
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005916b5
    MOV EAX,dword ptr [ESP + 0x40]      ; 005916b9
    MOV EBX,ESI                         ; 005916bd
    FLD float ptr [EAX + 0x4]           ; 005916bf
    FMUL float ptr [EDX + 0x10]         ; 005916c2
    FLD float ptr [EAX + 0x4]           ; 005916c5
    FMUL float ptr [EDX + 0x14]         ; 005916c8
    FLD float ptr [EAX + 0x4]           ; 005916cb
    FMUL float ptr [EDX + 0x18]         ; 005916ce
    FLD float ptr [EAX + 0x14]          ; 005916d1
    FMUL float ptr [EDX + 0x10]         ; 005916d4
    FLD float ptr [EAX]                 ; 005916d7
    FMUL float ptr [EDX]                ; 005916d9
    FLD float ptr [EAX + 0x10]          ; 005916db
    FXCH                                ; 005916de
    FADDP ST5,ST0                       ; 005916e0
    FMUL float ptr [EDX + 0x4]          ; 005916e2
    FLD float ptr [EAX + 0x8]           ; 005916e5
    FMUL float ptr [EDX + 0x20]         ; 005916e8
    FLD float ptr [EAX]                 ; 005916eb
    FXCH                                ; 005916ed
    FADDP ST6,ST0                       ; 005916ef
    FMUL float ptr [EDX + 0x4]          ; 005916f1
    FXCH ST5                            ; 005916f4
    FSTP float ptr [ESP]                ; 005916f6
    FLD float ptr [EAX + 0x10]          ; 005916f9
    FXCH ST5                            ; 005916fc
    FADDP ST4,ST0                       ; 005916fe
    FXCH ST4                            ; 00591700
    FMUL float ptr [EDX + 0x8]          ; 00591702
    FLD float ptr [EAX + 0x8]           ; 00591705
    FMUL float ptr [EDX + 0x24]         ; 00591708
    FLD float ptr [EAX]                 ; 0059170b
    FXCH                                ; 0059170d
    FADDP ST5,ST0                       ; 0059170f
    FMUL float ptr [EDX + 0x8]          ; 00591711
    FXCH ST4                            ; 00591714
    FSTP float ptr [ESP + 0x4]          ; 00591716
    FLD float ptr [EAX + 0x24]          ; 0059171a
    FXCH ST4                            ; 0059171d
    FADDP ST3,ST0                       ; 0059171f
    FXCH ST3                            ; 00591721
    FMUL float ptr [EDX + 0x10]         ; 00591723
    FLD float ptr [EAX + 0x8]           ; 00591726
    FMUL float ptr [EDX + 0x28]         ; 00591729
    FLD float ptr [EAX + 0x10]          ; 0059172c
    FXCH                                ; 0059172f
    FADDP ST4,ST0                       ; 00591731
    FMUL float ptr [EDX]                ; 00591733
    FXCH ST3                            ; 00591735
    FSTP float ptr [ESP + 0x8]          ; 00591737
    FLD float ptr [EAX + 0x20]          ; 0059173b
    FXCH ST3                            ; 0059173e
    FADDP ST2,ST0                       ; 00591740
    FXCH ST2                            ; 00591742
    FMUL float ptr [EDX + 0x4]          ; 00591744
    FLD float ptr [EAX + 0x18]          ; 00591747
    FMUL float ptr [EDX + 0x20]         ; 0059174a
    FLD float ptr [EAX + 0x14]          ; 0059174d
    FXCH                                ; 00591750
    FADDP ST3,ST0                       ; 00591752
    FMUL float ptr [EDX + 0x14]         ; 00591754
    FXCH ST2                            ; 00591757
    FSTP float ptr [ESP + 0x10]         ; 00591759
    FLD float ptr [EAX + 0x20]          ; 0059175d
    FXCH ST2                            ; 00591760
    FADDP ST5,ST0                       ; 00591762
    FXCH                                ; 00591764
    FMUL float ptr [EDX + 0x8]          ; 00591766
    FLD float ptr [EAX + 0x18]          ; 00591769
    FMUL float ptr [EDX + 0x24]         ; 0059176c
    FLD float ptr [EAX + 0x14]          ; 0059176f
    FXCH                                ; 00591772
    FADDP ST6,ST0                       ; 00591774
    FMUL float ptr [EDX + 0x18]         ; 00591776
    FXCH ST5                            ; 00591779
    FSTP float ptr [ESP + 0x14]         ; 0059177b
    FLD float ptr [EAX + 0x4]           ; 0059177f
    FXCH ST5                            ; 00591782
    FADDP ST4,ST0                       ; 00591784
    FXCH ST4                            ; 00591786
    FMUL float ptr [EDX + 0x1c]         ; 00591788
    FLD float ptr [EAX + 0x18]          ; 0059178b
    FMUL float ptr [EDX + 0x28]         ; 0059178e
    FLD float ptr [EAX + 0x20]          ; 00591791
    FXCH                                ; 00591794
    FADDP ST5,ST0                       ; 00591796
    FMUL float ptr [EDX]                ; 00591798
    FXCH ST4                            ; 0059179a
    FSTP float ptr [ESP + 0x18]         ; 0059179c
    FLD float ptr [EAX + 0x10]          ; 005917a0
    FXCH ST4                            ; 005917a3
    FADDP ST3,ST0                       ; 005917a5
    FXCH ST3                            ; 005917a7
    FMUL float ptr [EDX + 0xc]          ; 005917a9
    FLD float ptr [EAX + 0x28]          ; 005917ac
    FMUL float ptr [EDX + 0x20]         ; 005917af
    FLD float ptr [EAX + 0x20]          ; 005917b2
    FXCH                                ; 005917b5
    FADDP ST4,ST0                       ; 005917b7
    FMUL float ptr [EDX + 0xc]          ; 005917b9
    FXCH ST3                            ; 005917bc
    FSTP float ptr [ESP + 0x20]         ; 005917be
    FLD float ptr [EAX + 0x24]          ; 005917c2
    FMUL float ptr [EDX + 0x14]         ; 005917c5
    FLD float ptr [EAX + 0x24]          ; 005917c8
    FMUL float ptr [EDX + 0x18]         ; 005917cb
    FXCH                                ; 005917ce
    FADDP ST3,ST0                       ; 005917d0
    FADDP ST5,ST0                       ; 005917d2
    FLD float ptr [EAX + 0x28]          ; 005917d4
    FMUL float ptr [EDX + 0x24]         ; 005917d7
    FLD float ptr [EAX + 0x28]          ; 005917da
    FMUL float ptr [EDX + 0x28]         ; 005917dd
    FXCH                                ; 005917e0
    FADDP ST3,ST0                       ; 005917e2
    FLD float ptr [EAX]                 ; 005917e4
    FMUL float ptr [EDX + 0xc]          ; 005917e6
    FXCH                                ; 005917e9
    FADDP ST6,ST0                       ; 005917eb
    FLD float ptr [EAX + 0x14]          ; 005917ed
    FXCH                                ; 005917f0
    FADDP ST5,ST0                       ; 005917f2
    FMUL float ptr [EDX + 0x1c]         ; 005917f4
    FLD float ptr [EAX + 0x8]           ; 005917f7
    FMUL float ptr [EDX + 0x2c]         ; 005917fa
    FXCH                                ; 005917fd
    FADDP ST2,ST0                       ; 005917ff
    FLD float ptr [EAX + 0x24]          ; 00591801
    FMUL float ptr [EDX + 0x1c]         ; 00591804
    FADDP ST4,ST0                       ; 00591807
    FADDP ST4,ST0                       ; 00591809
    FLD float ptr [EAX + 0x18]          ; 0059180b
    FMUL float ptr [EDX + 0x2c]         ; 0059180e
    FLD float ptr [EAX + 0x28]          ; 00591811
    FMUL float ptr [EDX + 0x2c]         ; 00591814
    MOV ECX,0xc                         ; 00591817
    MOV EDI,ESI                         ; 0059181c
    MOV ESI,ESP                         ; 0059181e
    FXCH                                ; 00591820
    FADDP ST2,ST0                       ; 00591822
    FADDP ST3,ST0                       ; 00591824
    FXCH                                ; 00591826
    FSTP float ptr [ESP + 0x24]         ; 00591828
    FXCH ST3                            ; 0059182c
    FSTP float ptr [ESP + 0x28]         ; 0059182e
    FXCH                                ; 00591832
    FADD float ptr [EAX + 0xc]          ; 00591834
    FXCH ST2                            ; 00591837
    FADD float ptr [EAX + 0x1c]         ; 00591839
    FXCH                                ; 0059183c
    FADD float ptr [EAX + 0x2c]         ; 0059183e
    FXCH ST2                            ; 00591841
    FSTP float ptr [ESP + 0xc]          ; 00591843
    FSTP float ptr [ESP + 0x1c]         ; 00591847
    FSTP float ptr [ESP + 0x2c]         ; 0059184b
    MOVSD.REP ES:EDI,ESI                ; 0059184f
    MOV EAX,EBX                         ; 00591851
    ADD ESP,0x30                        ; 00591853
    POP EDI                             ; 00591856
    POP EBX                             ; 00591857
    RET                                 ; 00591858


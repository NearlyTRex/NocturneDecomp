; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dirmat_cpp_FUN_0045f700(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[25]:
;   core_actor.cpp_FUN_00408b00 at 00408b1a
;   core_actor.cpp_FUN_00408bb0 at 00408bfa
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a200 at 0041a51f
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 at 0041a13d
;   core_box.cpp_CBox_processPhysics_FUN_0041e130 at 0041e2a2
;   core_box.cpp_CBox_setupVelocities_FUN_00420450 at 0042048e
;   core_cloth.cpp_CCloth_step_FUN_00440640 at 00440b98
;   core_cloth.cpp_FUN_004421d0 at 00442282
;   core_curtain.cpp_FUN_0044ab20 at 0044abba
;   core_dcamera.cpp_FUN_00454cc0 at 00454f42
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0045f700
        ;   Label: core_dirmat.cpp_FUN_0045f700
    SUB ESP,0xc                         ; 0045f701
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045f704
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045f708
    MOV ECX,ESI                         ; 0045f70c
    FLD float ptr [EAX + 0x4]           ; 0045f70e
    FMUL float ptr [EDX + 0xc]          ; 0045f711
    FLD float ptr [EAX + 0x4]           ; 0045f714
    FMUL float ptr [EDX + 0x10]         ; 0045f717
    FLD float ptr [EAX + 0x4]           ; 0045f71a
    FMUL float ptr [EDX + 0x14]         ; 0045f71d
    FLD float ptr [EAX]                 ; 0045f720
    FMUL float ptr [EDX]                ; 0045f722
    FLD float ptr [EAX]                 ; 0045f724
    FMUL float ptr [EDX + 0x4]          ; 0045f726
    FLD float ptr [EAX]                 ; 0045f729
    FXCH ST2                            ; 0045f72b
    FADDP ST5,ST0                       ; 0045f72d
    FXCH                                ; 0045f72f
    FMUL float ptr [EDX + 0x8]          ; 0045f731
    FLD float ptr [EAX + 0x8]           ; 0045f734
    FMUL float ptr [EDX + 0x18]         ; 0045f737
    FXCH ST2                            ; 0045f73a
    FADDP ST4,ST0                       ; 0045f73c
    FADDP ST2,ST0                       ; 0045f73e
    FLD float ptr [EAX + 0x8]           ; 0045f740
    FMUL float ptr [EDX + 0x1c]         ; 0045f743
    FLD float ptr [EAX + 0x8]           ; 0045f746
    FMUL float ptr [EDX + 0x20]         ; 0045f749
    MOV EDI,ESI                         ; 0045f74c
    MOV ESI,ESP                         ; 0045f74e
    FXCH ST2                            ; 0045f750
    FADDP ST5,ST0                       ; 0045f752
    FADDP ST3,ST0                       ; 0045f754
    FADDP                               ; 0045f756
    FXCH                                ; 0045f758
    FSTP float ptr [ESP + 0x4]          ; 0045f75a
    FSTP float ptr [ESP + 0x8]          ; 0045f75e
    FSTP float ptr [ESP]                ; 0045f762
    MOVSD ES:EDI,ESI                    ; 0045f765
    MOVSD ES:EDI,ESI                    ; 0045f766
    MOVSD ES:EDI,ESI                    ; 0045f767
    MOV EAX,ECX                         ; 0045f768
    ADD ESP,0xc                         ; 0045f76a
    POP EDI                             ; 0045f76d
    RET                                 ; 0045f76e


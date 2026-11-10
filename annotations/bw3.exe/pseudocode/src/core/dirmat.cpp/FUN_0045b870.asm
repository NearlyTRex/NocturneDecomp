; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dirmat_cpp_FUN_0045b870(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[23]:
;   core_actor.cpp_FUN_00408b40 at 00408b5a
;   core_actor.cpp_FUN_00408bf0 at 00408c3a
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00415e30 at 0041614f
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0 at 00415d6d
;   core_box.cpp_CBox_processPhysics_FUN_0041b470 at 0041b5e2
;   core_box.cpp_CBox_setupVelocities_FUN_0041d790 at 0041d7ce
;   core_cloth.cpp_CCloth_step_FUN_0043e2a0 at 0043e7f8
;   core_curtain.cpp_FUN_00446c60 at 00446cfa
;   core_dcamera.cpp_FUN_00450e10 at 00451092
;   core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_0045af60 at 0045afb5
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0045b870
        ;   Label: core_dirmat.cpp_FUN_0045b870
    SUB ESP,0xc                         ; 0045b871
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045b874
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045b878
    MOV ECX,ESI                         ; 0045b87c
    FLD float ptr [EAX + 0x4]           ; 0045b87e
    FMUL float ptr [EDX + 0xc]          ; 0045b881
    FLD float ptr [EAX + 0x4]           ; 0045b884
    FMUL float ptr [EDX + 0x10]         ; 0045b887
    FLD float ptr [EAX + 0x4]           ; 0045b88a
    FMUL float ptr [EDX + 0x14]         ; 0045b88d
    FLD float ptr [EAX]                 ; 0045b890
    FMUL float ptr [EDX]                ; 0045b892
    FLD float ptr [EAX]                 ; 0045b894
    FMUL float ptr [EDX + 0x4]          ; 0045b896
    FLD float ptr [EAX]                 ; 0045b899
    FXCH ST2                            ; 0045b89b
    FADDP ST5,ST0                       ; 0045b89d
    FXCH                                ; 0045b89f
    FMUL float ptr [EDX + 0x8]          ; 0045b8a1
    FLD float ptr [EAX + 0x8]           ; 0045b8a4
    FMUL float ptr [EDX + 0x18]         ; 0045b8a7
    FXCH ST2                            ; 0045b8aa
    FADDP ST4,ST0                       ; 0045b8ac
    FADDP ST2,ST0                       ; 0045b8ae
    FLD float ptr [EAX + 0x8]           ; 0045b8b0
    FMUL float ptr [EDX + 0x1c]         ; 0045b8b3
    FLD float ptr [EAX + 0x8]           ; 0045b8b6
    FMUL float ptr [EDX + 0x20]         ; 0045b8b9
    MOV EDI,ESI                         ; 0045b8bc
    MOV ESI,ESP                         ; 0045b8be
    FXCH ST2                            ; 0045b8c0
    FADDP ST5,ST0                       ; 0045b8c2
    FADDP ST3,ST0                       ; 0045b8c4
    FADDP                               ; 0045b8c6
    FXCH                                ; 0045b8c8
    FSTP float ptr [ESP + 0x4]          ; 0045b8ca
    FSTP float ptr [ESP + 0x8]          ; 0045b8ce
    FSTP float ptr [ESP]                ; 0045b8d2
    MOVSD ES:EDI,ESI                    ; 0045b8d5
    MOVSD ES:EDI,ESI                    ; 0045b8d6
    MOVSD ES:EDI,ESI                    ; 0045b8d7
    MOV EAX,ECX                         ; 0045b8d8
    ADD ESP,0xc                         ; 0045b8da
    POP EDI                             ; 0045b8dd
    RET                                 ; 0045b8de


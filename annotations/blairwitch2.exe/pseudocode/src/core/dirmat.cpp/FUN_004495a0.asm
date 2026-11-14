; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dirmat_cpp_FUN_004495a0(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[25]:
;   core_actor.cpp_FUN_00408d30 at 00408d4a
;   core_actor.cpp_FUN_00408de0 at 00408e2a
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00416d70 at 0041708f
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 at 00416cad
;   core_box.cpp_CBox_processPhysics_FUN_005b22f0 at 005b2462
;   core_box.cpp_CBox_setupVelocities_FUN_005b4610 at 005b464e
;   core_cloth.cpp_CCloth_step_FUN_005afe20 at 005b0378
;   core_cloth.cpp_FUN_005b19b0 at 005b1a62
;   core_dcamera.cpp_FUN_00443610 at 00443892
;   core_dglobe.cpp_CDemonGlobe_intersectAABB_FUN_00448c90 at 00448ce5
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004495a0
        ;   Label: core_dirmat.cpp_FUN_004495a0
    SUB ESP,0xc                         ; 004495a1
    MOV EDX,dword ptr [ESP + 0x14]      ; 004495a4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004495a8
    MOV ECX,ESI                         ; 004495ac
    FLD float ptr [EAX + 0x4]           ; 004495ae
    FMUL float ptr [EDX + 0xc]          ; 004495b1
    FLD float ptr [EAX + 0x4]           ; 004495b4
    FMUL float ptr [EDX + 0x10]         ; 004495b7
    FLD float ptr [EAX + 0x4]           ; 004495ba
    FMUL float ptr [EDX + 0x14]         ; 004495bd
    FLD float ptr [EAX]                 ; 004495c0
    FMUL float ptr [EDX]                ; 004495c2
    FLD float ptr [EAX]                 ; 004495c4
    FMUL float ptr [EDX + 0x4]          ; 004495c6
    FLD float ptr [EAX]                 ; 004495c9
    FXCH ST2                            ; 004495cb
    FADDP ST5,ST0                       ; 004495cd
    FXCH                                ; 004495cf
    FMUL float ptr [EDX + 0x8]          ; 004495d1
    FLD float ptr [EAX + 0x8]           ; 004495d4
    FMUL float ptr [EDX + 0x18]         ; 004495d7
    FXCH ST2                            ; 004495da
    FADDP ST4,ST0                       ; 004495dc
    FADDP ST2,ST0                       ; 004495de
    FLD float ptr [EAX + 0x8]           ; 004495e0
    FMUL float ptr [EDX + 0x1c]         ; 004495e3
    FLD float ptr [EAX + 0x8]           ; 004495e6
    FMUL float ptr [EDX + 0x20]         ; 004495e9
    MOV EDI,ESI                         ; 004495ec
    MOV ESI,ESP                         ; 004495ee
    FXCH ST2                            ; 004495f0
    FADDP ST5,ST0                       ; 004495f2
    FADDP ST3,ST0                       ; 004495f4
    FADDP                               ; 004495f6
    FXCH                                ; 004495f8
    FSTP float ptr [ESP + 0x4]          ; 004495fa
    FSTP float ptr [ESP + 0x8]          ; 004495fe
    FSTP float ptr [ESP]                ; 00449602
    MOVSD ES:EDI,ESI                    ; 00449605
    MOVSD ES:EDI,ESI                    ; 00449606
    MOVSD ES:EDI,ESI                    ; 00449607
    MOV EAX,ECX                         ; 00449608
    ADD ESP,0xc                         ; 0044960a
    POP EDI                             ; 0044960d
    RET                                 ; 0044960e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(float *param_1,float *param_2,float *param_3)
;
;
; XREF[26]:
;   FUN_00447f20 at 00448177
;   FUN_00554310 at 00554363
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 at 0040a233
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 at 0040a2c6
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320 at 004175fe
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 at 0041726a
;   core_box.cpp_CBox_processPhysics_FUN_0041ad10 at 0041ae79
;   core_box.cpp_CBox_setupVelocities_FUN_0041cb40 at 0041cb79
;   core_cloth.cpp_CCloth_applyRotation_FUN_00438780 at 00438810
;   core_cloth.cpp_CCloth_step_FUN_00436e80 at 004372ff
;   ... and 16 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044daa0
        ;   Label: core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044daa4
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044daa8
    FLD float ptr [EDX + 0x4]           ; 0044daac
    FMUL float ptr [EAX + 0xc]          ; 0044daaf
    FLD float ptr [EDX]                 ; 0044dab2
    FMUL float ptr [EAX]                ; 0044dab4
    FADDP                               ; 0044dab6
    FLD float ptr [EDX + 0x8]           ; 0044dab8
    FMUL float ptr [EAX + 0x18]         ; 0044dabb
    FADDP                               ; 0044dabe
    FSTP float ptr [ECX]                ; 0044dac0
    FLD float ptr [EDX + 0x4]           ; 0044dac2
    FMUL float ptr [EAX + 0x10]         ; 0044dac5
    FLD float ptr [EDX]                 ; 0044dac8
    FMUL float ptr [EAX + 0x4]          ; 0044daca
    FADDP                               ; 0044dacd
    FLD float ptr [EDX + 0x8]           ; 0044dacf
    FMUL float ptr [EAX + 0x1c]         ; 0044dad2
    FADDP                               ; 0044dad5
    FSTP float ptr [ECX + 0x4]          ; 0044dad7
    FLD float ptr [EDX + 0x4]           ; 0044dada
    FMUL float ptr [EAX + 0x14]         ; 0044dadd
    FLD float ptr [EDX]                 ; 0044dae0
    FMUL float ptr [EAX + 0x8]          ; 0044dae2
    FADDP                               ; 0044dae5
    FLD float ptr [EDX + 0x8]           ; 0044dae7
    FMUL float ptr [EAX + 0x20]         ; 0044daea
    FADDP                               ; 0044daed
    MOV EAX,ECX                         ; 0044daef
    FSTP float ptr [ECX + 0x8]          ; 0044daf1
    RET                                 ; 0044daf4


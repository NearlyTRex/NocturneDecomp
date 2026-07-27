; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(float *param_1,float *param_2)
;
;
; XREF[13]:
;   core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540 at 0040a5e4
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040a7fc
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680 at 004236d4
;   core_dcamera.cpp_FUN_00447f20 at 0044818f
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0 at 004538a1
;   core_morph.cpp_CMorph_getReady_FUN_004e03c0 at 004e0485
;   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0 at 00510118
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40 at 0051efd8
;   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280 at 0051b39e
;   core_spike.cpp_FUN_00533750 at 00533862
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041cc00
        ;   Label: core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041cc04
    FLD float ptr [ECX]                 ; 0041cc08
    FCOMP float ptr [EDX]               ; 0041cc0a
    FNSTSW AX                           ; 0041cc0c
    SAHF                                ; 0041cc0e
    JC 0x0041cc5f                       ; 0041cc0f
        ;   XREF to: 0041cc5f (CONDITIONAL_JUMP)  ; LAB_0041cc5f
    FLD float ptr [ECX]                 ; 0041cc11
        ;   Label: LAB_0041cc11
    FCOMP float ptr [EDX + 0xc]         ; 0041cc13
    FNSTSW AX                           ; 0041cc16
    SAHF                                ; 0041cc18
    JBE 0x0041cc20                      ; 0041cc19
        ;   XREF to: 0041cc20 (CONDITIONAL_JUMP)  ; LAB_0041cc20
    MOV EAX,dword ptr [ECX]             ; 0041cc1b
    MOV dword ptr [EDX + 0xc],EAX       ; 0041cc1d
    FLD float ptr [ECX + 0x4]           ; 0041cc20
        ;   Label: LAB_0041cc20
    FCOMP float ptr [EDX + 0x4]         ; 0041cc23
    FNSTSW AX                           ; 0041cc26
    SAHF                                ; 0041cc28
    JNC 0x0041cc31                      ; 0041cc29
        ;   XREF to: 0041cc31 (CONDITIONAL_JUMP)  ; LAB_0041cc31
    MOV EAX,dword ptr [ECX + 0x4]       ; 0041cc2b
    MOV dword ptr [EDX + 0x4],EAX       ; 0041cc2e
    FLD float ptr [ECX + 0x4]           ; 0041cc31
        ;   Label: LAB_0041cc31
    FCOMP float ptr [EDX + 0x10]        ; 0041cc34
    FNSTSW AX                           ; 0041cc37
    SAHF                                ; 0041cc39
    JBE 0x0041cc42                      ; 0041cc3a
        ;   XREF to: 0041cc42 (CONDITIONAL_JUMP)  ; LAB_0041cc42
    MOV EAX,dword ptr [ECX + 0x4]       ; 0041cc3c
    MOV dword ptr [EDX + 0x10],EAX      ; 0041cc3f
    FLD float ptr [ECX + 0x8]           ; 0041cc42
        ;   Label: LAB_0041cc42
    FCOMP float ptr [EDX + 0x8]         ; 0041cc45
    FNSTSW AX                           ; 0041cc48
    SAHF                                ; 0041cc4a
    JNC 0x0041cc53                      ; 0041cc4b
        ;   XREF to: 0041cc53 (CONDITIONAL_JUMP)  ; LAB_0041cc53
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041cc4d
    MOV dword ptr [EDX + 0x8],EAX       ; 0041cc50
    FLD float ptr [ECX + 0x8]           ; 0041cc53
        ;   Label: LAB_0041cc53
    FCOMP float ptr [EDX + 0x14]        ; 0041cc56
    FNSTSW AX                           ; 0041cc59
    SAHF                                ; 0041cc5b
    JA 0x0041cc65                       ; 0041cc5c
        ;   XREF to: 0041cc65 (CONDITIONAL_JUMP)  ; LAB_0041cc65
    RET                                 ; 0041cc5e
    MOV EAX,dword ptr [ECX]             ; 0041cc5f
        ;   Label: LAB_0041cc5f
    MOV dword ptr [EDX],EAX             ; 0041cc61
    JMP 0x0041cc11                      ; 0041cc63
        ;   XREF to: 0041cc11 (UNCONDITIONAL_JUMP)  ; LAB_0041cc11
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041cc65
        ;   Label: LAB_0041cc65
    MOV dword ptr [EDX + 0x14],EAX      ; 0041cc68
    RET                                 ; 0041cc6b


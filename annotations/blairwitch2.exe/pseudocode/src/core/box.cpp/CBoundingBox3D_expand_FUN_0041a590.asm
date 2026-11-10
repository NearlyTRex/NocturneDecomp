; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D *this_ptr,CVector3f *point)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
;
; XREF[13]:
;   core_actor.cpp_FUN_004090f0 at 00409217
;   core_actor.cpp_FUN_004093a0 at 0040949a
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00421a00 at 00421a54
;   core_dcamera.cpp_FUN_00443610 at 004438af
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_0044ee60 at 0044ef31
;   core_morph.cpp_CMorph_getReady_FUN_005b71d0 at 005b7295
;   core_setcolid.cpp_FUN_00536490 at 0053661e
;   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_00544930 at 00544a30
;   core_skeleton.cpp_FUN_005487d0 at 005488d7
;   core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_00560cb0 at 00560e08
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041a590
        ;   Label: core_box.cpp_CBoundingBox3D_expand_FUN_0041a590
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041a594
    FLD float ptr [ECX]                 ; 0041a598
    FCOMP float ptr [EDX]               ; 0041a59a
    FNSTSW AX                           ; 0041a59c
    SAHF                                ; 0041a59e
    JC 0x0041a5ef                       ; 0041a59f
        ;   XREF to: 0041a5ef (CONDITIONAL_JUMP)  ; LAB_0041a5ef
    FLD float ptr [ECX]                 ; 0041a5a1
        ;   Label: LAB_0041a5a1
    FCOMP float ptr [EDX + 0xc]         ; 0041a5a3
    FNSTSW AX                           ; 0041a5a6
    SAHF                                ; 0041a5a8
    JBE 0x0041a5b0                      ; 0041a5a9
        ;   XREF to: 0041a5b0 (CONDITIONAL_JUMP)  ; LAB_0041a5b0
    MOV EAX,dword ptr [ECX]             ; 0041a5ab
    MOV dword ptr [EDX + 0xc],EAX       ; 0041a5ad
    FLD float ptr [ECX + 0x4]           ; 0041a5b0
        ;   Label: LAB_0041a5b0
    FCOMP float ptr [EDX + 0x4]         ; 0041a5b3
    FNSTSW AX                           ; 0041a5b6
    SAHF                                ; 0041a5b8
    JNC 0x0041a5c1                      ; 0041a5b9
        ;   XREF to: 0041a5c1 (CONDITIONAL_JUMP)  ; LAB_0041a5c1
    MOV EAX,dword ptr [ECX + 0x4]       ; 0041a5bb
    MOV dword ptr [EDX + 0x4],EAX       ; 0041a5be
    FLD float ptr [ECX + 0x4]           ; 0041a5c1
        ;   Label: LAB_0041a5c1
    FCOMP float ptr [EDX + 0x10]        ; 0041a5c4
    FNSTSW AX                           ; 0041a5c7
    SAHF                                ; 0041a5c9
    JBE 0x0041a5d2                      ; 0041a5ca
        ;   XREF to: 0041a5d2 (CONDITIONAL_JUMP)  ; LAB_0041a5d2
    MOV EAX,dword ptr [ECX + 0x4]       ; 0041a5cc
    MOV dword ptr [EDX + 0x10],EAX      ; 0041a5cf
    FLD float ptr [ECX + 0x8]           ; 0041a5d2
        ;   Label: LAB_0041a5d2
    FCOMP float ptr [EDX + 0x8]         ; 0041a5d5
    FNSTSW AX                           ; 0041a5d8
    SAHF                                ; 0041a5da
    JNC 0x0041a5e3                      ; 0041a5db
        ;   XREF to: 0041a5e3 (CONDITIONAL_JUMP)  ; LAB_0041a5e3
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041a5dd
    MOV dword ptr [EDX + 0x8],EAX       ; 0041a5e0
    FLD float ptr [ECX + 0x8]           ; 0041a5e3
        ;   Label: LAB_0041a5e3
    FCOMP float ptr [EDX + 0x14]        ; 0041a5e6
    FNSTSW AX                           ; 0041a5e9
    SAHF                                ; 0041a5eb
    JA 0x0041a5f5                       ; 0041a5ec
        ;   XREF to: 0041a5f5 (CONDITIONAL_JUMP)  ; LAB_0041a5f5
    RET                                 ; 0041a5ee
    MOV EAX,dword ptr [ECX]             ; 0041a5ef
        ;   Label: LAB_0041a5ef
    MOV dword ptr [EDX],EAX             ; 0041a5f1
    JMP 0x0041a5a1                      ; 0041a5f3
        ;   XREF to: 0041a5a1 (UNCONDITIONAL_JUMP)  ; LAB_0041a5a1
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041a5f5
        ;   Label: LAB_0041a5f5
    MOV dword ptr [EDX + 0x14],EAX      ; 0041a5f8
    RET                                 ; 0041a5fb


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_box_cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D *this_ptr,CVector3f *point)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
;
; XREF[19]:
;   core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270 at 00409314
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 at 0040952c
;   core_bugs.cpp_CBugs_FUN_004272f0 at 00427344
;   core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590 at 0043d63c
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 004434bc
;   core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060 at 004542c9
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010 at 004780e1
;   core_morph.cpp_CMorph_getReady_FUN_0052b680 at 0052b745
;   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10 at 00572b48
;   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 at 0058e83a
;   ... and 9 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00420240
        ;   Label: core_box.cpp_CBoundingBox3D_expand_FUN_00420240
    MOV ECX,dword ptr [ESP + 0x8]       ; 00420244
    FLD float ptr [ECX]                 ; 00420248
    FCOMP float ptr [EDX]               ; 0042024a
    FNSTSW AX                           ; 0042024c
    SAHF                                ; 0042024e
    JC 0x0042029f                       ; 0042024f
        ;   XREF to: 0042029f (CONDITIONAL_JUMP)  ; LAB_0042029f
    FLD float ptr [ECX]                 ; 00420251
        ;   Label: LAB_00420251
    FCOMP float ptr [EDX + 0xc]         ; 00420253
    FNSTSW AX                           ; 00420256
    SAHF                                ; 00420258
    JBE 0x00420260                      ; 00420259
        ;   XREF to: 00420260 (CONDITIONAL_JUMP)  ; LAB_00420260
    MOV EAX,dword ptr [ECX]             ; 0042025b
    MOV dword ptr [EDX + 0xc],EAX       ; 0042025d
    FLD float ptr [ECX + 0x4]           ; 00420260
        ;   Label: LAB_00420260
    FCOMP float ptr [EDX + 0x4]         ; 00420263
    FNSTSW AX                           ; 00420266
    SAHF                                ; 00420268
    JNC 0x00420271                      ; 00420269
        ;   XREF to: 00420271 (CONDITIONAL_JUMP)  ; LAB_00420271
    MOV EAX,dword ptr [ECX + 0x4]       ; 0042026b
    MOV dword ptr [EDX + 0x4],EAX       ; 0042026e
    FLD float ptr [ECX + 0x4]           ; 00420271
        ;   Label: LAB_00420271
    FCOMP float ptr [EDX + 0x10]        ; 00420274
    FNSTSW AX                           ; 00420277
    SAHF                                ; 00420279
    JBE 0x00420282                      ; 0042027a
        ;   XREF to: 00420282 (CONDITIONAL_JUMP)  ; LAB_00420282
    MOV EAX,dword ptr [ECX + 0x4]       ; 0042027c
    MOV dword ptr [EDX + 0x10],EAX      ; 0042027f
    FLD float ptr [ECX + 0x8]           ; 00420282
        ;   Label: LAB_00420282
    FCOMP float ptr [EDX + 0x8]         ; 00420285
    FNSTSW AX                           ; 00420288
    SAHF                                ; 0042028a
    JNC 0x00420293                      ; 0042028b
        ;   XREF to: 00420293 (CONDITIONAL_JUMP)  ; LAB_00420293
    MOV EAX,dword ptr [ECX + 0x8]       ; 0042028d
    MOV dword ptr [EDX + 0x8],EAX       ; 00420290
    FLD float ptr [ECX + 0x8]           ; 00420293
        ;   Label: LAB_00420293
    FCOMP float ptr [EDX + 0x14]        ; 00420296
    FNSTSW AX                           ; 00420299
    SAHF                                ; 0042029b
    JA 0x004202a5                       ; 0042029c
        ;   XREF to: 004202a5 (CONDITIONAL_JUMP)  ; LAB_004202a5
    RET                                 ; 0042029e
    MOV EAX,dword ptr [ECX]             ; 0042029f
        ;   Label: LAB_0042029f
    MOV dword ptr [EDX],EAX             ; 004202a1
    JMP 0x00420251                      ; 004202a3
        ;   XREF to: 00420251 (UNCONDITIONAL_JUMP)  ; LAB_00420251
    MOV EAX,dword ptr [ECX + 0x8]       ; 004202a5
        ;   Label: LAB_004202a5
    MOV dword ptr [EDX + 0x14],EAX      ; 004202a8
    RET                                 ; 004202ab


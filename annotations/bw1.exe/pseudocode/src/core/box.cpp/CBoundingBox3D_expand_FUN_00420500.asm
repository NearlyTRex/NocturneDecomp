; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D *this_ptr,CVector3f *point)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
;
; XREF[13]:
;   core_actor.cpp_FUN_00408ec0 at 00408fe7
;   core_actor.cpp_FUN_00409170 at 00409267
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00427a30 at 00427a84
;   core_dcamera.cpp_FUN_00454cc0 at 00454f5f
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00467a30 at 00467b0c
;   core_morph.cpp_CMorph_getReady_FUN_00523310 at 005233d5
;   core_setcolid.cpp_FUN_005578b0 at 00557a3e
;   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_00566fd0 at 005670d0
;   core_skeleton.cpp_FUN_0056ae70 at 0056af77
;   core_spike.cpp_FUN_00583700 at 00583858
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00420500
        ;   Label: core_box.cpp_CBoundingBox3D_expand_FUN_00420500
    MOV ECX,dword ptr [ESP + 0x8]       ; 00420504
    FLD float ptr [ECX]                 ; 00420508
    FCOMP float ptr [EDX]               ; 0042050a
    FNSTSW AX                           ; 0042050c
    SAHF                                ; 0042050e
    JC 0x0042055f                       ; 0042050f
        ;   XREF to: 0042055f (CONDITIONAL_JUMP)  ; LAB_0042055f
    FLD float ptr [ECX]                 ; 00420511
        ;   Label: LAB_00420511
    FCOMP float ptr [EDX + 0xc]         ; 00420513
    FNSTSW AX                           ; 00420516
    SAHF                                ; 00420518
    JBE 0x00420520                      ; 00420519
        ;   XREF to: 00420520 (CONDITIONAL_JUMP)  ; LAB_00420520
    MOV EAX,dword ptr [ECX]             ; 0042051b
    MOV dword ptr [EDX + 0xc],EAX       ; 0042051d
    FLD float ptr [ECX + 0x4]           ; 00420520
        ;   Label: LAB_00420520
    FCOMP float ptr [EDX + 0x4]         ; 00420523
    FNSTSW AX                           ; 00420526
    SAHF                                ; 00420528
    JNC 0x00420531                      ; 00420529
        ;   XREF to: 00420531 (CONDITIONAL_JUMP)  ; LAB_00420531
    MOV EAX,dword ptr [ECX + 0x4]       ; 0042052b
    MOV dword ptr [EDX + 0x4],EAX       ; 0042052e
    FLD float ptr [ECX + 0x4]           ; 00420531
        ;   Label: LAB_00420531
    FCOMP float ptr [EDX + 0x10]        ; 00420534
    FNSTSW AX                           ; 00420537
    SAHF                                ; 00420539
    JBE 0x00420542                      ; 0042053a
        ;   XREF to: 00420542 (CONDITIONAL_JUMP)  ; LAB_00420542
    MOV EAX,dword ptr [ECX + 0x4]       ; 0042053c
    MOV dword ptr [EDX + 0x10],EAX      ; 0042053f
    FLD float ptr [ECX + 0x8]           ; 00420542
        ;   Label: LAB_00420542
    FCOMP float ptr [EDX + 0x8]         ; 00420545
    FNSTSW AX                           ; 00420548
    SAHF                                ; 0042054a
    JNC 0x00420553                      ; 0042054b
        ;   XREF to: 00420553 (CONDITIONAL_JUMP)  ; LAB_00420553
    MOV EAX,dword ptr [ECX + 0x8]       ; 0042054d
    MOV dword ptr [EDX + 0x8],EAX       ; 00420550
    FLD float ptr [ECX + 0x8]           ; 00420553
        ;   Label: LAB_00420553
    FCOMP float ptr [EDX + 0x14]        ; 00420556
    FNSTSW AX                           ; 00420559
    SAHF                                ; 0042055b
    JA 0x00420565                       ; 0042055c
        ;   XREF to: 00420565 (CONDITIONAL_JUMP)  ; LAB_00420565
    RET                                 ; 0042055e
    MOV EAX,dword ptr [ECX]             ; 0042055f
        ;   Label: LAB_0042055f
    MOV dword ptr [EDX],EAX             ; 00420561
    JMP 0x00420511                      ; 00420563
        ;   XREF to: 00420511 (UNCONDITIONAL_JUMP)  ; LAB_00420511
    MOV EAX,dword ptr [ECX + 0x8]       ; 00420565
        ;   Label: LAB_00420565
    MOV dword ptr [EDX + 0x14],EAX      ; 00420568
    RET                                 ; 0042056b


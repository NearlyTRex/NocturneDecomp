; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f *this_ptr,CVector3f *output,CVector3f *input)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output
; CVector3f *      Stack[0xc]:4   input
;
; XREF[49]:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 at 0040a25a
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 at 0040a213
;   core_box.cpp_CBox_loadFromFile_FUN_0041c850 at 0041c9a9
;   core_box.cpp_CBox_processPhysics_FUN_0041ad10 at 0041af66
;   core_box.cpp_CBox_updateTransform_FUN_0041aaa0 at 0041ac2c
;   core_bugs.cpp_CBugs_FUN_00422050 at 00422210
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370 at 004226a6
;   core_charactr.cpp_CCharacter_FUN_0042af70 at 0042b17d
;   core_charactr.cpp_CCharacter_dismember_FUN_00427b60 at 00427d5e
;   core_cloth.cpp_CCloth_applyConstraints_FUN_004366f0 at 00436ca3
;   ... and 39 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044da40
        ;   Label: core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044da44
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044da48
    FLD float ptr [EDX + 0x4]           ; 0044da4c
    FMUL float ptr [EAX + 0x4]          ; 0044da4f
    FLD float ptr [EDX]                 ; 0044da52
    FMUL float ptr [EAX]                ; 0044da54
    FADDP                               ; 0044da56
    FLD float ptr [EDX + 0x8]           ; 0044da58
    FMUL float ptr [EAX + 0x8]          ; 0044da5b
    FADDP                               ; 0044da5e
    FSTP float ptr [ECX]                ; 0044da60
    FLD float ptr [EDX + 0x4]           ; 0044da62
    FMUL float ptr [EAX + 0x10]         ; 0044da65
    FLD float ptr [EDX]                 ; 0044da68
    FMUL float ptr [EAX + 0xc]          ; 0044da6a
    FADDP                               ; 0044da6d
    FLD float ptr [EDX + 0x8]           ; 0044da6f
    FMUL float ptr [EAX + 0x14]         ; 0044da72
    FADDP                               ; 0044da75
    FSTP float ptr [ECX + 0x4]          ; 0044da77
    FLD float ptr [EDX + 0x4]           ; 0044da7a
    FMUL float ptr [EAX + 0x1c]         ; 0044da7d
    FLD float ptr [EDX]                 ; 0044da80
    FMUL float ptr [EAX + 0x18]         ; 0044da82
    FADDP                               ; 0044da85
    FLD float ptr [EDX + 0x8]           ; 0044da87
    FMUL float ptr [EAX + 0x20]         ; 0044da8a
    FADDP                               ; 0044da8d
    MOV EAX,ECX                         ; 0044da8f
    FSTP float ptr [ECX + 0x8]          ; 0044da91
    RET                                 ; 0044da94


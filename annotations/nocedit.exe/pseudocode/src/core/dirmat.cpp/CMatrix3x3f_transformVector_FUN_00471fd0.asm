; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0 (CMatrix3x3f *this_ptr,CVector3f *output,CVector3f *input)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output
; CVector3f *      Stack[0xc]:4   input
;
; XREF[44]:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 at 00408eda
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 at 00408e93
;   core_box.cpp_CBox_loadFromFile_FUN_0041fe90 at 0041ffe9
;   core_box.cpp_CBox_processPhysics_FUN_0041e350 at 0041e5a6
;   core_box.cpp_CBox_updateTransform_FUN_0041e0e0 at 0041e26c
;   core_bugs.cpp_CBugs_FUN_00425cc0 at 00425e80
;   core_bugs.cpp_CBugs_FUN_00425fe0 at 00426316
;   core_charactr.cpp_CCharacter_FUN_0042ede0 at 0042f26a
;   core_cloth.cpp_CCloth_applyConstraints_FUN_0043a420 at 0043a9d3
;   core_cloth.cpp_CCloth_step_FUN_0043abb0 at 0043ae36
;   ... and 34 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00471fd0
        ;   Label: core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00471fd4
    MOV EDX,dword ptr [ESP + 0xc]       ; 00471fd8
    FLD float ptr [EDX + 0x4]           ; 00471fdc
    FMUL float ptr [EAX + 0x4]          ; 00471fdf
    FLD float ptr [EDX]                 ; 00471fe2
    FMUL float ptr [EAX]                ; 00471fe4
    FADDP                               ; 00471fe6
    FLD float ptr [EDX + 0x8]           ; 00471fe8
    FMUL float ptr [EAX + 0x8]          ; 00471feb
    FADDP                               ; 00471fee
    FSTP float ptr [ECX]                ; 00471ff0
    FLD float ptr [EDX + 0x4]           ; 00471ff2
    FMUL float ptr [EAX + 0x10]         ; 00471ff5
    FLD float ptr [EDX]                 ; 00471ff8
    FMUL float ptr [EAX + 0xc]          ; 00471ffa
    FADDP                               ; 00471ffd
    FLD float ptr [EDX + 0x8]           ; 00471fff
    FMUL float ptr [EAX + 0x14]         ; 00472002
    FADDP                               ; 00472005
    FSTP float ptr [ECX + 0x4]          ; 00472007
    FLD float ptr [EDX + 0x4]           ; 0047200a
    FMUL float ptr [EAX + 0x1c]         ; 0047200d
    FLD float ptr [EDX]                 ; 00472010
    FMUL float ptr [EAX + 0x18]         ; 00472012
    FADDP                               ; 00472015
    FLD float ptr [EDX + 0x8]           ; 00472017
    FMUL float ptr [EAX + 0x20]         ; 0047201a
    FADDP                               ; 0047201d
    MOV EAX,ECX                         ; 0047201f
    FSTP float ptr [ECX + 0x8]          ; 00472021
    RET                                 ; 00472024


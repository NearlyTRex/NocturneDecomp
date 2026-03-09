; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_xform_cpp_transformVector3x4_FUN_005f4dc0(CVector3f *output_vector,CVector3f *input_vector,CMatrix3x4f *matrix)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   output_vector
; CVector3f *      Stack[0x8]:4   input_vector
; CMatrix3x4f *    Stack[0xc]:4   matrix
;
; XREF[52]:
;   core_baron.cpp_CBaron_performLightningAttack_FUN_004136b0 at 00413972
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 0041326b
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 0041579c
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416f9e
;   core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041ca40 at 0041cb6c
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c67e
;   core_bride.cpp_CBride_getTargetPoint_FUN_00424aa0 at 00424af2
;   core_bugs.cpp_CBugs_updateBugRenderingData_FUN_004268e0 at 00426ace
;   core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042fcc0 at 0042fcf8
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30 at 0042bf07
;   ... and 42 more
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 005f4dc0
        ;   Label: core_xform.cpp_transformVector3x4_FUN_005f4dc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005f4dc4
    MOV EAX,dword ptr [ESP + 0xc]       ; 005f4dc8
    FLD float ptr [EDX + 0x4]           ; 005f4dcc
    FMUL float ptr [EAX + 0x4]          ; 005f4dcf
    FLD float ptr [EDX]                 ; 005f4dd2
    FMUL float ptr [EAX]                ; 005f4dd4
    FADDP                               ; 005f4dd6
    FLD float ptr [EDX + 0x8]           ; 005f4dd8
    FMUL float ptr [EAX + 0x8]          ; 005f4ddb
    FADDP                               ; 005f4dde
    FADD float ptr [EAX + 0xc]          ; 005f4de0
    FSTP float ptr [ECX]                ; 005f4de3
    FLD float ptr [EDX + 0x4]           ; 005f4de5
    FMUL float ptr [EAX + 0x14]         ; 005f4de8
    FLD float ptr [EDX]                 ; 005f4deb
    FMUL float ptr [EAX + 0x10]         ; 005f4ded
    FADDP                               ; 005f4df0
    FLD float ptr [EDX + 0x8]           ; 005f4df2
    FMUL float ptr [EAX + 0x18]         ; 005f4df5
    FADDP                               ; 005f4df8
    FADD float ptr [EAX + 0x1c]         ; 005f4dfa
    FSTP float ptr [ECX + 0x4]          ; 005f4dfd
    FLD float ptr [EDX + 0x4]           ; 005f4e00
    FMUL float ptr [EAX + 0x24]         ; 005f4e03
    FLD float ptr [EDX]                 ; 005f4e06
    FMUL float ptr [EAX + 0x20]         ; 005f4e08
    FADDP                               ; 005f4e0b
    FLD float ptr [EDX + 0x8]           ; 005f4e0d
    FMUL float ptr [EAX + 0x28]         ; 005f4e10
    FADDP                               ; 005f4e13
    FADD float ptr [EAX + 0x2c]         ; 005f4e15
    MOV EAX,ECX                         ; 005f4e18
    FSTP float ptr [ECX + 0x8]          ; 005f4e1a
    RET                                 ; 005f4e1d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_xform_cpp_transformVector3x4_FUN_0055a8b0(CVector3f *output_vector,CVector3f *input_vector,CMatrix3x4f *matrix)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   output_vector
; CVector3f *      Stack[0x8]:4   input_vector
; CMatrix3x4f *    Stack[0xc]:4   matrix
;
; XREF[52]:
;   core_baron.cpp_CBaron_FUN_00410cc0 at 00410f4a
;   core_baron.cpp_CBaron_process_FUN_00410490 at 0041087b
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 004127ac
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413f2e
;   core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_004194b0 at 004195dc
;   core_boneguy.cpp_CBoneGuy_process_FUN_00418a00 at 004190ee
;   core_bride.cpp_CBride_getTargetPoint_FUN_00420eb0 at 00420f02
;   core_bride.cpp_CBride_process_FUN_0041fe40 at 0042036f
;   core_bugs.cpp_CBugs_updateBugRenderingData_FUN_00422c70 at 00422e5e
;   core_chain.cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890 at 0042b8c8
;   ... and 42 more
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0055a8b0
        ;   Label: core_xform.cpp_transformVector3x4_FUN_0055a8b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055a8b4
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055a8b8
    FLD float ptr [EDX + 0x4]           ; 0055a8bc
    FMUL float ptr [EAX + 0x4]          ; 0055a8bf
    FLD float ptr [EDX]                 ; 0055a8c2
    FMUL float ptr [EAX]                ; 0055a8c4
    FADDP                               ; 0055a8c6
    FLD float ptr [EDX + 0x8]           ; 0055a8c8
    FMUL float ptr [EAX + 0x8]          ; 0055a8cb
    FADDP                               ; 0055a8ce
    FADD float ptr [EAX + 0xc]          ; 0055a8d0
    FSTP float ptr [ECX]                ; 0055a8d3
    FLD float ptr [EDX + 0x4]           ; 0055a8d5
    FMUL float ptr [EAX + 0x14]         ; 0055a8d8
    FLD float ptr [EDX]                 ; 0055a8db
    FMUL float ptr [EAX + 0x10]         ; 0055a8dd
    FADDP                               ; 0055a8e0
    FLD float ptr [EDX + 0x8]           ; 0055a8e2
    FMUL float ptr [EAX + 0x18]         ; 0055a8e5
    FADDP                               ; 0055a8e8
    FADD float ptr [EAX + 0x1c]         ; 0055a8ea
    FSTP float ptr [ECX + 0x4]          ; 0055a8ed
    FLD float ptr [EDX + 0x4]           ; 0055a8f0
    FMUL float ptr [EAX + 0x24]         ; 0055a8f3
    FLD float ptr [EDX]                 ; 0055a8f6
    FMUL float ptr [EAX + 0x20]         ; 0055a8f8
    FADDP                               ; 0055a8fb
    FLD float ptr [EDX + 0x8]           ; 0055a8fd
    FMUL float ptr [EAX + 0x28]         ; 0055a900
    FADDP                               ; 0055a903
    FADD float ptr [EAX + 0x2c]         ; 0055a905
    MOV EAX,ECX                         ; 0055a908
    FSTP float ptr [ECX + 0x8]          ; 0055a90a
    RET                                 ; 0055a90d


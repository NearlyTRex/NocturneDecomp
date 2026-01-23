; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output
; CVector3f *      Stack[0xc]:4   input
;
; XREF[30]:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 at 00408eb3
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 at 00408f46
;   core_bodypart.cpp_FUN_0041a050 at 0041a57a
;   core_bodypart.cpp_FUN_0041a630 at 0041a90e
;   core_box.cpp_CBox_processPhysics_FUN_0041e350 at 0041ef23
;   core_box.cpp_CBox_setupVelocities_FUN_00420180 at 004201b9
;   core_cloth.cpp_FUN_0043abb0 at 0043b02f
;   core_cloth.cpp_FUN_0043e1a0 at 0043e230
;   core_curtain.cpp_FUN_00449f10 at 00449f7e
;   core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060 at 004542b1
;   ... and 20 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00472030
        ;   Label: core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
    MOV ECX,dword ptr [ESP + 0x8]       ; 00472034
    MOV EDX,dword ptr [ESP + 0xc]       ; 00472038
    FLD float ptr [EDX + 0x4]           ; 0047203c
    FMUL float ptr [EAX + 0xc]          ; 0047203f
    FLD float ptr [EDX]                 ; 00472042
    FMUL float ptr [EAX]                ; 00472044
    FADDP                               ; 00472046
    FLD float ptr [EDX + 0x8]           ; 00472048
    FMUL float ptr [EAX + 0x18]         ; 0047204b
    FADDP                               ; 0047204e
    FSTP float ptr [ECX]                ; 00472050
    FLD float ptr [EDX + 0x4]           ; 00472052
    FMUL float ptr [EAX + 0x10]         ; 00472055
    FLD float ptr [EDX]                 ; 00472058
    FMUL float ptr [EAX + 0x4]          ; 0047205a
    FADDP                               ; 0047205d
    FLD float ptr [EDX + 0x8]           ; 0047205f
    FMUL float ptr [EAX + 0x1c]         ; 00472062
    FADDP                               ; 00472065
    FSTP float ptr [ECX + 0x4]          ; 00472067
    FLD float ptr [EDX + 0x4]           ; 0047206a
    FMUL float ptr [EAX + 0x14]         ; 0047206d
    FLD float ptr [EDX]                 ; 00472070
    FMUL float ptr [EAX + 0x8]          ; 00472072
    FADDP                               ; 00472075
    FLD float ptr [EDX + 0x8]           ; 00472077
    FMUL float ptr [EAX + 0x20]         ; 0047207a
    FADDP                               ; 0047207d
    MOV EAX,ECX                         ; 0047207f
    FSTP float ptr [ECX + 0x8]          ; 00472081
    RET                                 ; 00472084


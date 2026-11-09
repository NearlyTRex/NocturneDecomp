; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00568830(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; SPoseData *      Stack[0x8]:4   pose_data
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
;
; XREF[2]:
;   core_doc.cpp_FUN_0046caa0 at 0046cb7a
;   core_stranger.cpp_FUN_00588ad0 at 00588bad
;
; Called Functions:
;   core_skeleton.cpp_FUN_00568860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568830
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_00568830
    MOV EAX,dword ptr [ESP + 0xc]       ; 00568831
    MOV EDX,dword ptr [ESP + 0x18]      ; 00568835
    PUSH EDX                            ; 00568839
    MOV ECX,dword ptr [ESP + 0x18]      ; 0056883a
    PUSH ECX                            ; 0056883e
    PUSH dword ptr [ESP + 0x18]         ; 0056883f
    PUSH EAX                            ; 00568843
    ADD EAX,0xc                         ; 00568844
    PUSH EAX                            ; 00568847
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00568848
    PUSH EBX                            ; 0056884c
    CALL core_skeleton.cpp_FUN_00568860 ; 0056884d
        ;   XREF to: 00568860 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00568860(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, CVector3f * source_position, float blend_weight, ...)
    ADD ESP,0x18                        ; 00568852
    POP EBX                             ; 00568855
    RET                                 ; 00568856


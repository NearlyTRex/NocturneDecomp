; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0054d3c0(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; SPoseData *      Stack[0x8]:4   pose_data
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
;
; XREF[1]:
;   core_prye.cpp_FUN_0051c1c0 at 0051c2a9
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0054d3f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d3c0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0054d3c0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054d3c1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0054d3c5
    PUSH EDX                            ; 0054d3c9
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054d3ca
    PUSH ECX                            ; 0054d3ce
    PUSH dword ptr [ESP + 0x18]         ; 0054d3cf
    PUSH EAX                            ; 0054d3d3
    ADD EAX,0xc                         ; 0054d3d4
    PUSH EAX                            ; 0054d3d7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0054d3d8
    PUSH EBX                            ; 0054d3dc
    CALL core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0054d3f0 ; 0054d3dd
        ;   XREF to: 0054d3f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0054d3f0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, CVector3f * source_position, float blend_weight, ...)
    ADD ESP,0x18                        ; 0054d3e2
    POP EBX                             ; 0054d3e5
    RET                                 ; 0054d3e6


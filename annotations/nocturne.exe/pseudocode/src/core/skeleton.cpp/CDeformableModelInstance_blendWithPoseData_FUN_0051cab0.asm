; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; SPoseData *      Stack[0x8]:4   pose_data
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
;
; XREF[1]:
;   core_stranger.cpp_FUN_005384d0 at 005385aa
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051cab0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0051cab0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051cab1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051cab5
    PUSH EDX                            ; 0051cab9
    MOV ECX,dword ptr [ESP + 0x18]      ; 0051caba
    PUSH ECX                            ; 0051cabe
    PUSH dword ptr [ESP + 0x18]         ; 0051cabf
    PUSH EAX                            ; 0051cac3
    ADD EAX,0xc                         ; 0051cac4
    PUSH EAX                            ; 0051cac7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0051cac8
    PUSH EBX                            ; 0051cacc
    CALL core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0 ; 0051cacd
        ;   XREF to: 0051cae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0051cae0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, CVector3f * source_position, float blend_weight, ...)
    ADD ESP,0x18                        ; 0051cad2
    POP EBX                             ; 0051cad5
    RET                                 ; 0051cad6


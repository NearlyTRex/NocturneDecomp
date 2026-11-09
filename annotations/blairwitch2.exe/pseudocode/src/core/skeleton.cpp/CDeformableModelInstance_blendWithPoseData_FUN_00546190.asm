; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_00546190(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; SPoseData *      Stack[0x8]:4   pose_data
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
;
; XREF[2]:
;   core_doc.cpp_FUN_00453d80 at 00453e54
;   core_stranger.cpp_FUN_00565ff0 at 005660cd
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546190
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_00546190
    MOV EAX,dword ptr [ESP + 0xc]       ; 00546191
    MOV EDX,dword ptr [ESP + 0x18]      ; 00546195
    PUSH EDX                            ; 00546199
    MOV ECX,dword ptr [ESP + 0x18]      ; 0054619a
    PUSH ECX                            ; 0054619e
    PUSH dword ptr [ESP + 0x18]         ; 0054619f
    PUSH EAX                            ; 005461a3
    ADD EAX,0xc                         ; 005461a4
    PUSH EAX                            ; 005461a7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005461a8
    PUSH EBX                            ; 005461ac
    CALL core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0 ; 005461ad
        ;   XREF to: 005461c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_005461c0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, CVector3f * source_position, float blend_weight, ...)
    ADD ESP,0x18                        ; 005461b2
    POP EBX                             ; 005461b5
    RET                                 ; 005461b6


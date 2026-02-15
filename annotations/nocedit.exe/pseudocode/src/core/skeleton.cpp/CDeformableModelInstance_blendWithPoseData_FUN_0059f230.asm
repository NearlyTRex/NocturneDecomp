; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230(CDeformableModelInstance *this_ptr,SPoseData *pose_data,float blend_weight,int bone_index,CDeformableModel_MotionBlendWeightFunc *blend_callback)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; SPoseData *      Stack[0x8]:4   pose_data
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   bone_index
; CDeformableModel_MotionBlendWeightFunc * Stack[0x14]:4   blend_callback
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005be520 at 005be5fa
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f230
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_blendWithPoseData_FUN_0059f230
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059f231
    MOV EDX,dword ptr [ESP + 0x18]      ; 0059f235
    PUSH EDX                            ; 0059f239
    MOV ECX,dword ptr [ESP + 0x18]      ; 0059f23a
    PUSH ECX                            ; 0059f23e
    PUSH dword ptr [ESP + 0x18]         ; 0059f23f
    PUSH EAX                            ; 0059f243
    ADD EAX,0xc                         ; 0059f244
    PUSH EAX                            ; 0059f247
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0059f248
    PUSH EBX                            ; 0059f24c
    CALL core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260 ; 0059f24d
        ;   XREF to: 0059f260 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, CVector3f * source_position, float blend_weight, ...)
    ADD ESP,0x18                        ; 0059f252
    POP EBX                             ; 0059f255
    RET                                 ; 0059f256


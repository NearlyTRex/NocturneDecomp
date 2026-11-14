; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_skeleton_cpp_blendWeightCallback_FUN_0054bef0(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)
;
; Parameters:
; int              Stack[0x4]:4   current_bone_index
; int              Stack[0x8]:4   target_bone_index
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   hierarchy_distance
; CDeformableModelInstance * Stack[0x14]:4   instance
;
; XREF[9]:
;   core_charactr.cpp_CCharacter_applyGesture_FUN_004320d0 at 004321ac
;   core_ghoul.cpp_CGhoul_process_FUN_004c6eb0 at 004c71ee
;   core_prye.cpp_CPrye_makeDrawDecision_FUN_0051e6d0 at 0051e9c1
;   core_prye.cpp_FUN_0051c1c0 at 0051c284
;   core_prye.cpp_FUN_0051e280 at 0051e2f7
;   core_prye.cpp_FUN_0051ee10 at 0051ef2f
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 at 0054c157
;   core_toxhand.cpp_CTheHand_process_FUN_0056c140 at 0056c7e2
;   core_zombiepriest.cpp_FUN_0058e8d0 at 0058eb60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 0054bef0
        ;   Label: core_skeleton.cpp_blendWeightCallback_FUN_0054bef0
    RET                                 ; 0054bef4


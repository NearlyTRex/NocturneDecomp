; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0 (int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance, CDeformableModelInstance *instance)
;
; Parameters:
; int              Stack[0x4]:4   current_bone_index
; int              Stack[0x8]:4   target_bone_index
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   hierarchy_distance
; CDeformableModelInstance * Stack[0x14]:4   instance
;
; XREF[22]:
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 004130dc
;   core_charactr.cpp_CCharacter_FUN_0042e570 at 0042e584
;   core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0 at 0042d471
;   core_colonel.cpp_CColonel_process_FUN_0043fa00 at 0043fc47
;   core_gabriela.cpp_FUN_004d4d80 at 004d53a9
;   core_gabriela.cpp_FUN_004d6d40 at 004d6f2a
;   core_gabriela.cpp_FUN_004d6f80 at 004d703d
;   core_ghoul.cpp_CGhoul_FUN_004e6600 at 004e68e7
;   core_haystack.cpp_CHaystack_process_FUN_004f0e40 at 004f1099
;   core_hostage.cpp_CHostage_process_FUN_004f4bd0 at 004f5ef0
;   ... and 12 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 0059ddb0
        ;   Label: core_skeleton.cpp_defaultBlendWeight_FUN_0059ddb0
    RET                                 ; 0059ddb4


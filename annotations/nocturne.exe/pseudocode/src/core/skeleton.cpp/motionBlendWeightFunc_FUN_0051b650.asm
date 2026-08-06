; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650(int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,CDeformableModelInstance *instance)
;
; Parameters:
; int              Stack[0x4]:4   current_bone_index
; int              Stack[0x8]:4   target_bone_index
; float            Stack[0xc]:4   blend_weight
; int              Stack[0x10]:4   hierarchy_distance
; CDeformableModelInstance * Stack[0x14]:4   instance
;
; XREF[21]:
;   core_baron.cpp_CBaron_process_FUN_00410490 at 004106ec
;   core_charactr.cpp_CCharacter_applyGesture_FUN_00429560 at 00429601
;   core_colonel.cpp_CColonel_process_FUN_00439f50 at 0043a197
;   core_gabriela.cpp_CGabriella_FUN_004998c0 at 00499aaa
;   core_gabriela.cpp_CGabriella_FUN_00499b00 at 00499bbd
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900 at 004979d0
;   core_ghoul.cpp_CGhoul_process_FUN_004a9270 at 004a9557
;   core_haystack.cpp_CHaystack_process_FUN_004b32d0 at 004b3529
;   core_hostage.cpp_CHostage_process_FUN_004b6d80 at 004b80a0
;   core_icepick.cpp_CIcePick_FUN_004ba740 at 004ba7aa
;   ... and 11 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 0051b650
        ;   Label: core_skeleton.cpp_motionBlendWeightFunc_FUN_0051b650
    RET                                 ; 0051b654


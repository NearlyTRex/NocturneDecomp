; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 (CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[40]:
;   core_armour.cpp_CArmour_process_FUN_00412260 at 00412318
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 004130d4
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 00415665
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416a93
;   core_beast.cpp_CBeast_process_FUN_004182a0 at 0041830c
;   core_biggs.cpp_CBiggs_process_FUN_00418700 at 004188df
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c522
;   core_bride.cpp_CBride_process_FUN_00423a30 at 00424478
;   core_cloth.cpp_CCloth_boneEditor_FUN_0043c880 at 0043d492
;   core_colonel.cpp_CColonel_process_FUN_0043fa00 at 0043fc2b
;   ... and 30 more
;
; Referenced Globals:
;   double g_DeformableModelTweenThreshold = 0.00100000000000000
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e020
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059e021
    PUSH -0x1                           ; 0059e025
    MOV EDX,dword ptr [EBX + 0x4]       ; 0059e027
    PUSH dword ptr [EBX + 0x8]          ; 0059e02a
    PUSH EDX                            ; 0059e02d
    PUSH EBX                            ; 0059e02e
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0 ; 0059e02f
        ;   XREF to: 0059e0a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)
    FLD float ptr [EBX + 0x14]          ; 0059e034
    ADD ESP,0x10                        ; 0059e037
    FCOMP double ptr [0x0064edc8]       ; 0059e03a | g_DeformableModelTweenThreshold
    FNSTSW AX                           ; 0059e040
    SAHF                                ; 0059e042
    JA 0x0059e047                       ; 0059e043
        ;   XREF to: 0059e047 (CONDITIONAL_JUMP)  ; LAB_0059e047
    POP EBX                             ; 0059e045
    RET                                 ; 0059e046
    PUSH 0x59ddb0                       ; 0059e047
        ;   Label: LAB_0059e047
    PUSH -0x1                           ; 0059e04c
    PUSH dword ptr [EBX + 0x14]         ; 0059e04e
    MOV ECX,dword ptr [EBX + 0x18]      ; 0059e051
    PUSH dword ptr [EBX + 0x1c]         ; 0059e054
    PUSH ECX                            ; 0059e057
    PUSH EBX                            ; 0059e058
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 ; 0059e059
        ;   XREF to: 0059eb50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 0059e05e
    POP EBX                             ; 0059e061
    RET                                 ; 0059e062


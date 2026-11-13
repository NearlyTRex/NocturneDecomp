; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[43]:
;   core_armour.cpp_CArmour_process_FUN_0040ef00 at 0040efb9
;   core_baron.cpp_CBaron_process_FUN_0040f950 at 0040fafa
;   core_basicene.cpp_FUN_0059f0e0 at 0059f31b
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 00411c52
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 004131a3
;   core_beast.cpp_CBeast_process_FUN_00414a80 at 00414aec
;   core_biggs.cpp_CBiggs_process_FUN_00414e50 at 00415044
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 00418cdb
;   core_bride.cpp_CBride_process_FUN_0041dbe0 at 0041e715
;   core_colonel.cpp_CColonel_process_FUN_00435830 at 00435af3
;   ... and 33 more
;
; Referenced Globals:
;   undefined4 DAT_005e72cf
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544f00
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00544f01
    PUSH -0x1                           ; 00544f05
    MOV EDX,dword ptr [EBX + 0x4]       ; 00544f07
    PUSH dword ptr [EBX + 0x8]          ; 00544f0a
    PUSH EDX                            ; 00544f0d
    PUSH EBX                            ; 00544f0e
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80 ; 00544f0f
        ;   XREF to: 00544f80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_00544f80(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)
    FLD float ptr [EBX + 0x14]          ; 00544f14
    ADD ESP,0x10                        ; 00544f17
    FCOMP double ptr [0x005e72cf]       ; 00544f1a | DAT_005e72cf
    FNSTSW AX                           ; 00544f20
    SAHF                                ; 00544f22
    JA 0x00544f27                       ; 00544f23
        ;   XREF to: 00544f27 (CONDITIONAL_JUMP)  ; LAB_00544f27
    POP EBX                             ; 00544f25
    RET                                 ; 00544f26
    PUSH 0x544cc0                       ; 00544f27
        ;   Label: LAB_00544f27
    PUSH -0x1                           ; 00544f2c
    PUSH dword ptr [EBX + 0x14]         ; 00544f2e
    MOV ECX,dword ptr [EBX + 0x18]      ; 00544f31
    PUSH dword ptr [EBX + 0x1c]         ; 00544f34
    PUSH ECX                            ; 00544f37
    PUSH EBX                            ; 00544f38
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60 ; 00544f39
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_00545a60(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 00544f3e
    POP EBX                             ; 00544f41
    RET                                 ; 00544f42


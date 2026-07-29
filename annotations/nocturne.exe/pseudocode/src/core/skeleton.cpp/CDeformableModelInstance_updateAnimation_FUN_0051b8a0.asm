; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[39]:
;   core_armour.cpp_FUN_0040fa20 at 0040fad8
;   core_baron.cpp_FUN_00410490 at 004106e4
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 00412675
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413a23
;   core_beast.cpp_CBeast_process_FUN_004150d0 at 0041513c
;   core_biggs.cpp_CBiggs_process_FUN_004154b0 at 0041568f
;   core_boneguy.cpp_FUN_00418a00 at 00418f92
;   core_bride.cpp_FUN_0041fe40 at 00420888
;   core_colonel.cpp_FUN_00439f50 at 0043a17b
;   core_cow.cpp_CZombieCow_process_FUN_0043bdb0 at 0043bfd6
;   ... and 29 more
;
; Referenced Globals:
;   double DOUBLE_00591b63 = 0.00100000000000000
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b8a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b8a1
    PUSH -0x1                           ; 0051b8a5
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051b8a7
    PUSH dword ptr [EBX + 0x8]          ; 0051b8aa
    PUSH EDX                            ; 0051b8ad
    PUSH EBX                            ; 0051b8ae
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920 ; 0051b8af
        ;   XREF to: 0051b920 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0051b920(CDeformableModelInstance * this_ptr, int motion_index, float frame_number, int bone_index)
    FLD float ptr [EBX + 0x14]          ; 0051b8b4
    ADD ESP,0x10                        ; 0051b8b7
    FCOMP double ptr [0x00591b63]       ; 0051b8ba | DOUBLE_00591b63
    FNSTSW AX                           ; 0051b8c0
    SAHF                                ; 0051b8c2
    JA 0x0051b8c7                       ; 0051b8c3
        ;   XREF to: 0051b8c7 (CONDITIONAL_JUMP)  ; LAB_0051b8c7
    POP EBX                             ; 0051b8c5
    RET                                 ; 0051b8c6
    PUSH 0x51b650                       ; 0051b8c7
        ;   Label: LAB_0051b8c7
    PUSH -0x1                           ; 0051b8cc
    PUSH dword ptr [EBX + 0x14]         ; 0051b8ce
    MOV ECX,dword ptr [EBX + 0x18]      ; 0051b8d1
    PUSH dword ptr [EBX + 0x1c]         ; 0051b8d4
    PUSH ECX                            ; 0051b8d7
    PUSH EBX                            ; 0051b8d8
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 0051b8d9
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 0051b8de
    POP EBX                             ; 0051b8e1
    RET                                 ; 0051b8e2


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[40]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a105a
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 005976d2
;   core_bird.cpp_CBird_process_FUN_0040fb40 at 0040fdb1
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a166
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00418014
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426b32
;   core_charactr.cpp_FUN_0042cd70 at 0042cdec
;   core_constrct.cpp_CConstruct_process_FUN_00442a20 at 004435a7
;   core_cow.cpp_CZombieCow_process_FUN_00445130 at 0044537d
;   core_darkwolf.cpp_CDarkwolf_process_FUN_005989e0 at 00598c15
;   ... and 30 more
;
; Referenced Globals:
;   undefined4 DAT_005d1fcc
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
;   core_skeleton.cpp_FUN_0054c1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c130
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054c131
    PUSH -0x1                           ; 0054c135
    MOV EDX,dword ptr [EBX + 0x4]       ; 0054c137
    PUSH dword ptr [EBX + 0x8]          ; 0054c13a
    PUSH EDX                            ; 0054c13d
    PUSH EBX                            ; 0054c13e
    CALL core_skeleton.cpp_FUN_0054c1b0 ; 0054c13f
        ;   XREF to: 0054c1b0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054c1b0()
    FLD float ptr [EBX + 0x14]          ; 0054c144
    ADD ESP,0x10                        ; 0054c147
    FCOMP double ptr [0x005d1fcc]       ; 0054c14a | DAT_005d1fcc
    FNSTSW AX                           ; 0054c150
    SAHF                                ; 0054c152
    JA 0x0054c157                       ; 0054c153
        ;   XREF to: 0054c157 (CONDITIONAL_JUMP)  ; LAB_0054c157
    POP EBX                             ; 0054c155
    RET                                 ; 0054c156
    PUSH 0x54bef0                       ; 0054c157
        ;   Label: LAB_0054c157
    PUSH -0x1                           ; 0054c15c
    PUSH dword ptr [EBX + 0x14]         ; 0054c15e
    MOV ECX,dword ptr [EBX + 0x18]      ; 0054c161
    PUSH dword ptr [EBX + 0x1c]         ; 0054c164
    PUSH ECX                            ; 0054c167
    PUSH EBX                            ; 0054c168
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90 ; 0054c169
        ;   XREF to: 0054cc90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90(CDeformableModelInstance * this_ptr, int target_motion_index, float target_frame_number, float blend_weight, ...)
    ADD ESP,0x18                        ; 0054c16e
    POP EBX                             ; 0054c171
    RET                                 ; 0054c172


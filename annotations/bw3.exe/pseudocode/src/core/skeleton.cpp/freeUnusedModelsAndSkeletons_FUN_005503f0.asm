; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_freeUnusedModelsAndSkeletons_FUN_005503f0(void)
;
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_004f6a80 at 004f6bb9
;
; Referenced Globals:
;   undefined4 DAT_02802f5c
;   undefined4 DAT_02cd28bc
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_free_FUN_00548370
;   core_skeleton.cpp_CSkeleton_free_FUN_00547b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005503f0
        ;   Label: core_skeleton.cpp_freeUnusedModelsAndSkeletons_FUN_005503f0
    PUSH ESI                            ; 005503f1
    MOV ESI,0x272af5c                   ; 005503f2
    XOR EBX,EBX                         ; 005503f7
    CMP dword ptr [EBX + 0x2802f5c],0x0 ; 005503f9 | DAT_02802f5c
        ;   Label: LAB_005503f9
    JZ 0x00550437                       ; 00550400
        ;   XREF to: 00550437 (CONDITIONAL_JUMP)  ; LAB_00550437
    ADD EBX,0x4                         ; 00550402
        ;   Label: LAB_00550402
    ADD ESI,0x3600                      ; 00550405
    CMP EBX,0x100                       ; 0055040b
    JNZ 0x005503f9                      ; 00550411
        ;   XREF to: 005503f9 (CONDITIONAL_JUMP)  ; LAB_005503f9
    MOV ESI,0x280305c                   ; 00550413
    XOR EBX,EBX                         ; 00550418
    CMP dword ptr [EBX + 0x2cd28bc],0x0 ; 0055041a | DAT_02cd28bc
        ;   Label: LAB_0055041a
    JZ 0x00550442                       ; 00550421
        ;   XREF to: 00550442 (CONDITIONAL_JUMP)  ; LAB_00550442
    ADD EBX,0x4                         ; 00550423
        ;   Label: LAB_00550423
    ADD ESI,0x1ec9c                     ; 00550426
    CMP EBX,0xa0                        ; 0055042c
    JNZ 0x0055041a                      ; 00550432
        ;   XREF to: 0055041a (CONDITIONAL_JUMP)  ; LAB_0055041a
    POP ESI                             ; 00550434
    POP EBX                             ; 00550435
    RET                                 ; 00550436
    PUSH ESI                            ; 00550437
        ;   Label: LAB_00550437
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_00548370 ; 00550438
        ;   XREF to: 00548370 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_00548370(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0055043d
    JMP 0x00550402                      ; 00550440
        ;   XREF to: 00550402 (UNCONDITIONAL_JUMP)  ; LAB_00550402
    PUSH 0x1                            ; 00550442
        ;   Label: LAB_00550442
    PUSH ESI                            ; 00550444
    CALL core_skeleton.cpp_CSkeleton_free_FUN_00547b90 ; 00550445
        ;   XREF to: 00547b90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_free_FUN_00547b90(CSkeleton * this_ptr, int free_motion_list)
    ADD ESP,0x8                         ; 0055044a
    JMP 0x00550423                      ; 0055044d
        ;   XREF to: 00550423 (UNCONDITIONAL_JUMP)  ; LAB_00550423


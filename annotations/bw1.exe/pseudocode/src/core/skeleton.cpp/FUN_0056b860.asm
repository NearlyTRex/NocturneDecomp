; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0056b860(void)
;
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_0051b2b0 at 0051b3e9
;
; Referenced Globals:
;   undefined4 DAT_027902bc
;   undefined4 DAT_02c5fc1c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_free_FUN_005637d0
;   core_skeleton.cpp_FUN_00562f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b860
        ;   Label: core_skeleton.cpp_FUN_0056b860
    PUSH ESI                            ; 0056b861
    MOV ESI,0x26b82bc                   ; 0056b862
    XOR EBX,EBX                         ; 0056b867
    CMP dword ptr [EBX + 0x27902bc],0x0 ; 0056b869 | DAT_027902bc
        ;   Label: LAB_0056b869
    JZ 0x0056b8a7                       ; 0056b870
        ;   XREF to: 0056b8a7 (CONDITIONAL_JUMP)  ; LAB_0056b8a7
    ADD EBX,0x4                         ; 0056b872
        ;   Label: LAB_0056b872
    ADD ESI,0x3600                      ; 0056b875
    CMP EBX,0x100                       ; 0056b87b
    JNZ 0x0056b869                      ; 0056b881
        ;   XREF to: 0056b869 (CONDITIONAL_JUMP)  ; LAB_0056b869
    MOV ESI,0x27903bc                   ; 0056b883
    XOR EBX,EBX                         ; 0056b888
    CMP dword ptr [EBX + 0x2c5fc1c],0x0 ; 0056b88a | DAT_02c5fc1c
        ;   Label: LAB_0056b88a
    JZ 0x0056b8b2                       ; 0056b891
        ;   XREF to: 0056b8b2 (CONDITIONAL_JUMP)  ; LAB_0056b8b2
    ADD EBX,0x4                         ; 0056b893
        ;   Label: LAB_0056b893
    ADD ESI,0x1ec9c                     ; 0056b896
    CMP EBX,0xa0                        ; 0056b89c
    JNZ 0x0056b88a                      ; 0056b8a2
        ;   XREF to: 0056b88a (CONDITIONAL_JUMP)  ; LAB_0056b88a
    POP ESI                             ; 0056b8a4
    POP EBX                             ; 0056b8a5
    RET                                 ; 0056b8a6
    PUSH ESI                            ; 0056b8a7
        ;   Label: LAB_0056b8a7
    CALL core_skeleton.cpp_CDeformableModel_free_FUN_005637d0 ; 0056b8a8
        ;   XREF to: 005637d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_free_FUN_005637d0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0056b8ad
    JMP 0x0056b872                      ; 0056b8b0
        ;   XREF to: 0056b872 (UNCONDITIONAL_JUMP)  ; LAB_0056b872
    PUSH 0x1                            ; 0056b8b2
        ;   Label: LAB_0056b8b2
    PUSH ESI                            ; 0056b8b4
    CALL core_skeleton.cpp_FUN_00562f70 ; 0056b8b5
        ;   XREF to: 00562f70 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00562f70()
    ADD ESP,0x8                         ; 0056b8ba
    JMP 0x0056b893                      ; 0056b8bd
        ;   XREF to: 0056b893 (UNCONDITIONAL_JUMP)  ; LAB_0056b893


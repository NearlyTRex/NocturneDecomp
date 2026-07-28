; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00427730(CCharacter *param_1,CVector3f *param_2,undefined4 param_3,int param_4,float param_5,int param_6)
;
;
; XREF[8]:
;   core_batcreat.cpp_FUN_00413040 at 004130bc
;   core_batman.cpp_FUN_00414930 at 004149ac
;   core_bride.cpp_CBride_processDamage_FUN_00420c40 at 00420ca9
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510 at 004285a3
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_0045a6f0 at 0045a754
;   core_emitter.cpp_FUN_00478790 at 00478c46
;   core_fire.cpp_CGunFlame_init_FUN_004880d0 at 004881fe
;   core_flame.cpp_CFlame_process_FUN_0048d0c0 at 0048d37d
;
; Referenced Globals:
;   TerminatedCString s_CHero_0057a00e
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_004266a0
;   core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0051e9e0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427730
        ;   Label: core_charactr.cpp_FUN_00427730
    PUSH ESI                            ; 00427731
    PUSH EDI                            ; 00427732
    PUSH EBP                            ; 00427733
    MOV EBX,dword ptr [ESP + 0x14]      ; 00427734
    CMP dword ptr [EBX + 0x2f08],0x32   ; 00427738
    JGE 0x00427759                      ; 0042773f
        ;   XREF to: 00427759 (CONDITIONAL_JUMP)  ; LAB_00427759
    CMP dword ptr [ESP + 0x28],0x0      ; 00427741
    JZ 0x0042775e                       ; 00427746
        ;   XREF to: 0042775e (CONDITIONAL_JUMP)  ; LAB_0042775e
    LEA EDX,[EBX + 0x150]               ; 00427748
        ;   Label: LAB_00427748
    LEA EAX,[EBX + 0x23b0]              ; 0042774e
    CMP byte ptr [EAX],0x0              ; 00427754
    JNZ 0x00427772                      ; 00427757
        ;   XREF to: 00427772 (CONDITIONAL_JUMP)  ; LAB_00427772
    POP EBP                             ; 00427759
        ;   Label: LAB_00427759
    POP EDI                             ; 0042775a
    POP ESI                             ; 0042775b
    POP EBX                             ; 0042775c
    RET                                 ; 0042775d
    PUSH 0x57a00e                       ; 0042775e | = "CHero"
        ;   Label: LAB_0042775e
    PUSH EBX                            ; 00427763
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 00427764
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00427769
    TEST EAX,EAX                        ; 0042776c
    JNZ 0x00427759                      ; 0042776e
        ;   XREF to: 00427759 (CONDITIONAL_JUMP)  ; LAB_00427759
    JMP 0x00427748                      ; 00427770
        ;   XREF to: 00427748 (UNCONDITIONAL_JUMP)  ; LAB_00427748
    MOV ESI,dword ptr [ESP + 0x18]      ; 00427772
        ;   Label: LAB_00427772
    PUSH ESI                            ; 00427776
    PUSH EDX                            ; 00427777
    CALL core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0051e9e0 ; 00427778
        ;   XREF to: 0051e9e0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0051e9e0(CDeformableModelInstance * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0042777d
    MOV ECX,EAX                         ; 00427780
    MOV EDI,dword ptr [EBX + 0x2f08]    ; 00427782
    XOR EAX,EAX                         ; 00427788
    TEST EDI,EDI                        ; 0042778a
    JLE 0x004277a6                      ; 0042778c
        ;   XREF to: 004277a6 (CONDITIONAL_JUMP)  ; LAB_004277a6
    MOV EDX,EBX                         ; 0042778e
    CMP ECX,dword ptr [EDX + 0x2f18]    ; 00427790
        ;   Label: LAB_00427790
    JZ 0x00427759                       ; 00427796
        ;   XREF to: 00427759 (CONDITIONAL_JUMP)  ; LAB_00427759
    INC EAX                             ; 00427798
    MOV EBP,dword ptr [EBX + 0x2f08]    ; 00427799
    ADD EDX,0x18                        ; 0042779f
    CMP EAX,EBP                         ; 004277a2
    JL 0x00427790                       ; 004277a4
        ;   XREF to: 00427790 (CONDITIONAL_JUMP)  ; LAB_00427790
    MOV EAX,dword ptr [ESP + 0x20]      ; 004277a6
        ;   Label: LAB_004277a6
    MOV dword ptr [EBX + 0x2f0c],EAX    ; 004277aa
    MOV EAX,dword ptr [ESP + 0x24]      ; 004277b0
    PUSH ECX                            ; 004277b4
    MOV dword ptr [EBX + 0x2f10],EAX    ; 004277b5
    LEA EAX,[EBX + 0x150]               ; 004277bb
    PUSH EAX                            ; 004277c1
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 004277c2
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004277c7
    PUSH EAX                            ; 004277ca
    PUSH EBX                            ; 004277cb
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_004266a0 ; 004277cc
        ;   XREF to: 004266a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_004266a0(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    ADD ESP,0xc                         ; 004277d1
    MOV dword ptr [EBX + 0xfc],0x1      ; 004277d4
    POP EBP                             ; 004277de
    POP EDI                             ; 004277df
    POP ESI                             ; 004277e0
    POP EBX                             ; 004277e1
    RET                                 ; 004277e2


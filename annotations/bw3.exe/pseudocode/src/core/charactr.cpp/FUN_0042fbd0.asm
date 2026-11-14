; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042fbd0(CCharacter *param_1,CVector3f *param_2,undefined4 param_3,EFlameType param_4,float param_5,int param_6,float param_7)
;
;
; XREF[7]:
;   core_burncrss.cpp_CBurncross_fire_FUN_00424550 at 00424c18
;   core_charactr.cpp_CCharacter_processDamage_FUN_00430d60 at 00430e2d
;   core_emitter.cpp_CEmitter_process_FUN_00487eb0 at 004885ce
;   core_fire.cpp_CGunFlame_burnNearby_FUN_0049df60 at 0049e124
;   core_fire.cpp_CRing_process_FUN_0049fdf0 at 004a0269
;   core_flame.cpp_CFlame_process_FUN_004a5b10 at 004a5e09
;   core_mattnntt.cpp_CMattanntote_process_FUN_00591f30 at 00593601
;
; Referenced Globals:
;   TerminatedCString s_CHero_005b8382
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0
;   core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0054f480
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042fbd0
        ;   Label: core_charactr.cpp_FUN_0042fbd0
    PUSH ESI                            ; 0042fbd1
    PUSH EDI                            ; 0042fbd2
    PUSH EBP                            ; 0042fbd3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0042fbd4
    CMP dword ptr [EBX + 0x33a0],0x32   ; 0042fbd8
    JGE 0x0042fbf9                      ; 0042fbdf
        ;   XREF to: 0042fbf9 (CONDITIONAL_JUMP)  ; LAB_0042fbf9
    CMP dword ptr [ESP + 0x28],0x0      ; 0042fbe1
    JZ 0x0042fbfe                       ; 0042fbe6
        ;   XREF to: 0042fbfe (CONDITIONAL_JUMP)  ; LAB_0042fbfe
    LEA EDX,[EBX + 0x158]               ; 0042fbe8
        ;   Label: LAB_0042fbe8
    LEA EAX,[EBX + 0x24a8]              ; 0042fbee
    CMP byte ptr [EAX],0x0              ; 0042fbf4
    JNZ 0x0042fc12                      ; 0042fbf7
        ;   XREF to: 0042fc12 (CONDITIONAL_JUMP)  ; LAB_0042fc12
    POP EBP                             ; 0042fbf9
        ;   Label: LAB_0042fbf9
    POP EDI                             ; 0042fbfa
    POP ESI                             ; 0042fbfb
    POP EBX                             ; 0042fbfc
    RET                                 ; 0042fbfd
    PUSH 0x5b8382                       ; 0042fbfe | = "CHero"
        ;   Label: LAB_0042fbfe
    PUSH EBX                            ; 0042fc03
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 0042fc04
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0042fc09
    TEST EAX,EAX                        ; 0042fc0c
    JNZ 0x0042fbf9                      ; 0042fc0e
        ;   XREF to: 0042fbf9 (CONDITIONAL_JUMP)  ; LAB_0042fbf9
    JMP 0x0042fbe8                      ; 0042fc10
        ;   XREF to: 0042fbe8 (UNCONDITIONAL_JUMP)  ; LAB_0042fbe8
    MOV ESI,dword ptr [ESP + 0x18]      ; 0042fc12
        ;   Label: LAB_0042fc12
    PUSH ESI                            ; 0042fc16
    PUSH EDX                            ; 0042fc17
    CALL core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0054f480 ; 0042fc18
        ;   XREF to: 0054f480 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0054f480(CDeformableModelInstance * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0042fc1d
    MOV ECX,EAX                         ; 0042fc20
    MOV EDI,dword ptr [EBX + 0x33a0]    ; 0042fc22
    XOR EAX,EAX                         ; 0042fc28
    TEST EDI,EDI                        ; 0042fc2a
    JLE 0x0042fc46                      ; 0042fc2c
        ;   XREF to: 0042fc46 (CONDITIONAL_JUMP)  ; LAB_0042fc46
    MOV EDX,EBX                         ; 0042fc2e
    CMP ECX,dword ptr [EDX + 0x33b0]    ; 0042fc30
        ;   Label: LAB_0042fc30
    JZ 0x0042fbf9                       ; 0042fc36
        ;   XREF to: 0042fbf9 (CONDITIONAL_JUMP)  ; LAB_0042fbf9
    INC EAX                             ; 0042fc38
    MOV EBP,dword ptr [EBX + 0x33a0]    ; 0042fc39
    ADD EDX,0x18                        ; 0042fc3f
    CMP EAX,EBP                         ; 0042fc42
    JL 0x0042fc30                       ; 0042fc44
        ;   XREF to: 0042fc30 (CONDITIONAL_JUMP)  ; LAB_0042fc30
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042fc46
        ;   Label: LAB_0042fc46
    MOV dword ptr [EBX + 0x33a4],EAX    ; 0042fc4a
    MOV EAX,dword ptr [ESP + 0x24]      ; 0042fc50
    MOV dword ptr [EBX + 0x33a8],EAX    ; 0042fc54
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042fc5a
    PUSH ECX                            ; 0042fc5e
    MOV dword ptr [EBX + 0x3260],EAX    ; 0042fc5f
    LEA EAX,[EBX + 0x158]               ; 0042fc65
    PUSH EAX                            ; 0042fc6b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0042fc6c
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042fc71
    PUSH EAX                            ; 0042fc74
    PUSH EBX                            ; 0042fc75
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0 ; 0042fc76
        ;   XREF to: 0042e4b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    ADD ESP,0xc                         ; 0042fc7b
    MOV dword ptr [EBX + 0xfc],0x1      ; 0042fc7e
    POP EBP                             ; 0042fc88
    POP EDI                             ; 0042fc89
    POP ESI                             ; 0042fc8a
    POP EBX                             ; 0042fc8b
    RET                                 ; 0042fc8c


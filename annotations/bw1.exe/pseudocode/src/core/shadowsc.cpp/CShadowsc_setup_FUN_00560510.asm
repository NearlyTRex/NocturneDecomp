; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shadowsc_cpp_CShadowsc_setup_FUN_00560510(CShadowsc *this_ptr)
;
; Parameters:
; CShadowsc *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_COMBATMODEHARD_005f17e7
;   TerminatedCString s_Bip01_Spine1_005f17f6
;   TerminatedCString s_Bip01_Head_005f1803
;   TerminatedCString s_Bip01_R_Finger0_005f180e
;   TerminatedCString s_Bip01_L_Finger0_005f181e
;   TerminatedCString s_Dummy05_005f182e
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;   core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560510
        ;   Label: core_shadowsc.cpp_CShadowsc_setup_FUN_00560510
    PUSH ESI                            ; 00560511
    MOV EBX,dword ptr [ESP + 0xc]       ; 00560512
    LEA EAX,[EBX + 0x158]               ; 00560516
    PUSH EAX                            ; 0056051c
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 0056051d
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00560522
    PUSH 0x5f17e7                       ; 00560525 | = "COMBATMODEHARD"
    MOV EDX,dword ptr [0x0061b4d0]      ; 0056052a | DAT_0061b4d0
    PUSH EDX                            ; 00560530
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00560531
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00560536
    TEST EAX,EAX                        ; 00560539
    JZ 0x005605fe                       ; 0056053b
        ;   XREF to: 005605fe (CONDITIONAL_JUMP)  ; LAB_005605fe
    MOV dword ptr [EBX + 0xc288],0x3f800000 ; 00560541
    LEA EAX,[EBX + 0x158]               ; 0056054b
        ;   Label: LAB_0056054b
    PUSH EAX                            ; 00560551
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00560552
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00560557
    PUSH 0x1                            ; 0056055a
    PUSH 0x5f17f6                       ; 0056055c | = "Bip01 Spine1"
    PUSH EAX                            ; 00560561
    MOV ESI,EAX                         ; 00560562
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00560564
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00560569
    PUSH 0x1                            ; 0056056c
    PUSH 0x5f1803                       ; 0056056e | = "Bip01 Head"
    PUSH ESI                            ; 00560573
    MOV dword ptr [EBX + 0xc268],EAX    ; 00560574
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 0056057a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 0056057f
    PUSH 0x1                            ; 00560582
    PUSH 0x5f180e                       ; 00560584 | = "Bip01 R Finger0"
    PUSH ESI                            ; 00560589
    MOV dword ptr [EBX + 0xc26c],EAX    ; 0056058a
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 00560590
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 00560595
    PUSH 0x1                            ; 00560598
    PUSH 0x5f181e                       ; 0056059a | = "Bip01 L Finger0"
    PUSH ESI                            ; 0056059f
    MOV dword ptr [EBX + 0xc270],EAX    ; 005605a0
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005605a6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 005605ab
    PUSH 0x1                            ; 005605ae
    PUSH 0x5f182e                       ; 005605b0 | = "Dummy05"
    PUSH ESI                            ; 005605b5
    MOV dword ptr [EBX + 0xc274],EAX    ; 005605b6
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 005605bc
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    MOV dword ptr [EBX + 0xc28c],0x0    ; 005605c1
    MOV dword ptr [EBX + 0xc290],0x0    ; 005605cb
    MOV dword ptr [EBX + 0xc294],0x0    ; 005605d5
    ADD ESP,0xc                         ; 005605df
    MOV dword ptr [EBX + 0xfc],0x1      ; 005605e2
    PUSH EBX                            ; 005605ec
    MOV dword ptr [EBX + 0xc278],EAX    ; 005605ed
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 005605f3
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005605f8
    POP ESI                             ; 005605fb
    POP EBX                             ; 005605fc
    RET                                 ; 005605fd
    MOV dword ptr [EBX + 0xc288],0x3f400000 ; 005605fe
        ;   Label: LAB_005605fe
    JMP 0x0056054b                      ; 00560608
        ;   XREF to: 0056054b (UNCONDITIONAL_JUMP)  ; LAB_0056054b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004f7710(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
; int              Stack[0xc]:4   hero_type
; CCharacter *     Stack[0x10]:4   existing_actor
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_createHeros_FUN_004f7880 at 004f78d7
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005c8c90
;   TerminatedCString s_CDemonMission_createOneH_005c8ca4
;   TerminatedCString s_core_mission_cpp_005c8cd3
;   TerminatedCString s_CDemonMission_createOneH_005c8ce7
;   TerminatedCString s_Can_t_find_hero_placehol_005c8d1c
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined1* PTR_s_CGabriella_005fffc4 = 005c5138
;   undefined4 DAT_00600530
;   undefined4 DAT_01d5ba00
;   undefined4 DAT_01d5baac
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d81080
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_hero.cpp_FUN_004d4be0
;   core_main.c_FUN_004e4330
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7710
        ;   Label: core_mission.cpp_CDemonMission_createOneHero_FUN_004f7710
    PUSH ESI                            ; 004f7711
    PUSH EDI                            ; 004f7712
    PUSH EBP                            ; 004f7713
    SUB ESP,0x4                         ; 004f7714
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f7717
    MOV EBP,dword ptr [ESP + 0x24]      ; 004f771b
    CMP EDI,dword ptr [0x01d5ba00]      ; 004f771f | DAT_01d5ba00
    JGE 0x004f77a9                      ; 004f7725
        ;   XREF to: 004f77a9 (CONDITIONAL_JUMP)  ; LAB_004f77a9
    CMP dword ptr [EDI*0x4 + 0x1d5ba04],0x0 ; 004f772b
        ;   Label: LAB_004f772b
    JZ 0x004f7757                       ; 004f7733
        ;   XREF to: 004f7757 (CONDITIONAL_JUMP)  ; LAB_004f7757
    MOV EAX,0x5c8cd3                    ; 004f7735 | = "..\\core\\mission.cpp"
    MOV EDX,0x652                       ; 004f773a
    PUSH 0x5c8ce7                       ; 004f773f | = "CDemonMission::createOneHero - hero a..."
    MOV [0x01d71de0],EAX                ; 004f7744 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004f7749 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f774f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f7754
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f7757
        ;   Label: LAB_004f7757
    XOR ECX,ECX                         ; 004f775b
    MOV ESI,dword ptr [ESI + 0x143c]    ; 004f775d
    MOV dword ptr [ESP],ECX             ; 004f7763
    TEST ESI,ESI                        ; 004f7766
    JZ 0x004f778a                       ; 004f7768
        ;   XREF to: 004f778a (CONDITIONAL_JUMP)  ; LAB_004f778a
    MOV EBX,dword ptr [0x01d5baac]      ; 004f776a | DAT_01d5baac
        ;   Label: LAB_004f776a
    PUSH EBX                            ; 004f7770
    PUSH ESI                            ; 004f7771
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004f7772
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004f7777
    ADD ESP,0x8                         ; 004f7779
    TEST EAX,EAX                        ; 004f777c
    JNZ 0x004f77d1                      ; 004f777e
        ;   XREF to: 004f77d1 (CONDITIONAL_JUMP)  ; LAB_004f77d1
    MOV ESI,dword ptr [ESI + 0x14c]     ; 004f7780
        ;   Label: LAB_004f7780
    TEST ESI,ESI                        ; 004f7786
    JNZ 0x004f776a                      ; 004f7788
        ;   XREF to: 004f776a (CONDITIONAL_JUMP)  ; LAB_004f776a
    MOV ESI,dword ptr [ESP]             ; 004f778a
        ;   Label: LAB_004f778a
    TEST ESI,ESI                        ; 004f778d
    JZ 0x004f7860                       ; 004f778f
        ;   XREF to: 004f7860 (CONDITIONAL_JUMP)  ; LAB_004f7860
    MOV EAX,0x1                         ; 004f7795
    MOV dword ptr [EDI*0x4 + 0x1d5ba04],ESI ; 004f779a
    ADD ESP,0x4                         ; 004f77a1
    POP EBP                             ; 004f77a4
    POP EDI                             ; 004f77a5
    POP ESI                             ; 004f77a6
    POP EBX                             ; 004f77a7
    RET                                 ; 004f77a8
    MOV ECX,0x5c8c90                    ; 004f77a9 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004f77a9
    MOV EBX,0x651                       ; 004f77ae
    PUSH 0x5c8ca4                       ; 004f77b3 | = "CDemonMission::createOneHero - too ma..."
    MOV dword ptr [0x01d71de0],ECX      ; 004f77b8 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 004f77be | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f77c4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f77c9
    JMP 0x004f772b                      ; 004f77cc
        ;   XREF to: 004f772b (UNCONDITIONAL_JUMP)  ; LAB_004f772b
    CMP EDI,dword ptr [EAX + 0x158]     ; 004f77d1
        ;   Label: LAB_004f77d1
    JNZ 0x004f7780                      ; 004f77d7
        ;   XREF to: 004f7780 (CONDITIONAL_JUMP)  ; LAB_004f7780
    TEST EBP,EBP                        ; 004f77d9
    JZ 0x004f7846                       ; 004f77db
        ;   XREF to: 004f7846 (CONDITIONAL_JUMP)  ; LAB_004f7846
    LEA EAX,[EBX + 0x30]                ; 004f77dd
    PUSH EAX                            ; 004f77e0
    LEA EAX,[EBX + 0x20]                ; 004f77e1
    PUSH EAX                            ; 004f77e4
    MOV ESI,dword ptr [EBP + 0x154]     ; 004f77e5
    PUSH EBP                            ; 004f77eb
    MOV dword ptr [ESP + 0xc],EBP       ; 004f77ec
    CALL dword ptr [ESI + 0x68]         ; 004f77f0
    ADD ESP,0xc                         ; 004f77f3
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004f77f6
    LEA EBX,[EBP + 0x158]               ; 004f77f9
    PUSH EBX                            ; 004f77ff
    MOV dword ptr [EBP + 0x2c],EAX      ; 004f7800
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 ; 004f7803
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f7808
    PUSH 0x0                            ; 004f780b
    PUSH 0x0                            ; 004f780d
    PUSH EBX                            ; 004f780f
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 004f7810
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 004f7815
    PUSH 0x0                            ; 004f7818
    PUSH 0x0                            ; 004f781a
    PUSH 0x0                            ; 004f781c
    MOV EAX,dword ptr [EBP + 0x154]     ; 004f781e
    PUSH EBP                            ; 004f7824
    CALL dword ptr [EAX + 0x130]        ; 004f7825
    ADD ESP,0x10                        ; 004f782b
    MOV ECX,dword ptr [ESP]             ; 004f782e
        ;   Label: LAB_004f782e
    PUSH ECX                            ; 004f7831
    MOV EBX,dword ptr [0x00600530]      ; 004f7832 | DAT_00600530
    PUSH EBX                            ; 004f7838 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 004f7839
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004f783e
    JMP 0x004f778a                      ; 004f7841
        ;   XREF to: 004f778a (UNCONDITIONAL_JUMP)  ; LAB_004f778a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f7846
        ;   Label: LAB_004f7846
    MOV EDX,dword ptr [EAX*0x4 + 0x5fffc4] ; 004f784a | PTR_s_CGabriella_005fffc4
    PUSH EDX                            ; 004f7851
    PUSH EBX                            ; 004f7852
    CALL core_hero.cpp_FUN_004d4be0     ; 004f7853
        ;   XREF to: 004d4be0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d4be0()
    ADD ESP,0x8                         ; 004f7858
    MOV dword ptr [ESP],EAX             ; 004f785b
    JMP 0x004f782e                      ; 004f785e
        ;   XREF to: 004f782e (UNCONDITIONAL_JUMP)  ; LAB_004f782e
    PUSH EDI                            ; 004f7860
        ;   Label: LAB_004f7860
    PUSH 0x5c8d1c                       ; 004f7861 | = "Can't find hero placeholder for hero %d"
    MOV EDI,dword ptr [0x005fb140]      ; 004f7866 | g_CEditorToolsPtr
    PUSH EDI                            ; 004f786c
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004f786d
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004f7872
    XOR EAX,EAX                         ; 004f7875
    ADD ESP,0x4                         ; 004f7877
    POP EBP                             ; 004f787a
    POP EDI                             ; 004f787b
    POP ESI                             ; 004f787c
    POP EBX                             ; 004f787d
    RET                                 ; 004f787e


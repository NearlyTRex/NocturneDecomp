; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_004d9920(CDemonMission *this_ptr,int index,int hero_type,CCharacter *existing_actor)
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
;   core_mission.cpp_CDemonMission_createHeros_FUN_004d9a80 at 004d9ad7
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_00589eb5
;   TerminatedCString s_CDemonMission_createOneH_00589ec9
;   TerminatedCString s_core_mission_cpp_00589ef8
;   TerminatedCString s_CDemonMission_createOneH_00589f0c
;   TerminatedCString s_Can_t_find_hero_placehol_00589f41
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   undefined4 DAT_01cae0d4
;   undefined4 g_CHeroPlaceholderActorType_01cae128.name_hash
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_hero.cpp_CHeroPlaceholder_createHero_FUN_004b6080
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990
;   shape_edittool.cpp_FUN_0046fcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9920
        ;   Label: core_mission.cpp_CDemonMission_createOneHero_FUN_004d9920
    PUSH ESI                            ; 004d9921
    PUSH EDI                            ; 004d9922
    PUSH EBP                            ; 004d9923
    SUB ESP,0x4                         ; 004d9924
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004d9927
    MOV EBP,dword ptr [ESP + 0x24]      ; 004d992b
    CMP EDI,dword ptr [0x01cae0d4]      ; 004d992f | DAT_01cae0d4
    JGE 0x004d99b9                      ; 004d9935
        ;   XREF to: 004d99b9 (CONDITIONAL_JUMP)  ; LAB_004d99b9
    CMP dword ptr [EDI*0x4 + 0x1cae0d8],0x0 ; 004d993b
        ;   Label: LAB_004d993b
    JZ 0x004d9967                       ; 004d9943
        ;   XREF to: 004d9967 (CONDITIONAL_JUMP)  ; LAB_004d9967
    MOV EAX,0x589ef8                    ; 004d9945 | = "..\\core\\mission.cpp"
    MOV EDX,0x5f4                       ; 004d994a
    PUSH 0x589f0c                       ; 004d994f | = "CDemonMission::createOneHero - hero a..."
    MOV [0x01cc4800],EAX                ; 004d9954 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 004d9959 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004d995f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004d9964
    MOV ESI,dword ptr [ESP + 0x18]      ; 004d9967
        ;   Label: LAB_004d9967
    XOR ECX,ECX                         ; 004d996b
    MOV ESI,dword ptr [ESI + 0x514]     ; 004d996d
    MOV dword ptr [ESP],ECX             ; 004d9973
    TEST ESI,ESI                        ; 004d9976
    JZ 0x004d999a                       ; 004d9978
        ;   XREF to: 004d999a (CONDITIONAL_JUMP)  ; LAB_004d999a
    MOV EBX,dword ptr [0x01cae160]      ; 004d997a | g_CHeroPlaceholderActorType_01cae128.name_hash
        ;   Label: LAB_004d997a
    PUSH EBX                            ; 004d9980
    PUSH ESI                            ; 004d9981
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004d9982
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004d9987
    ADD ESP,0x8                         ; 004d9989
    TEST EAX,EAX                        ; 004d998c
    JNZ 0x004d99e1                      ; 004d998e
        ;   XREF to: 004d99e1 (CONDITIONAL_JUMP)  ; LAB_004d99e1
    MOV ESI,dword ptr [ESI + 0x144]     ; 004d9990
        ;   Label: LAB_004d9990
    TEST ESI,ESI                        ; 004d9996
    JNZ 0x004d997a                      ; 004d9998
        ;   XREF to: 004d997a (CONDITIONAL_JUMP)  ; LAB_004d997a
    MOV ESI,dword ptr [ESP]             ; 004d999a
        ;   Label: LAB_004d999a
    TEST ESI,ESI                        ; 004d999d
    JZ 0x004d9a60                       ; 004d999f
        ;   XREF to: 004d9a60 (CONDITIONAL_JUMP)  ; LAB_004d9a60
    MOV EAX,0x1                         ; 004d99a5
    MOV dword ptr [EDI*0x4 + 0x1cae0d8],ESI ; 004d99aa
    ADD ESP,0x4                         ; 004d99b1
    POP EBP                             ; 004d99b4
    POP EDI                             ; 004d99b5
    POP ESI                             ; 004d99b6
    POP EBX                             ; 004d99b7
    RET                                 ; 004d99b8
    MOV ECX,0x589eb5                    ; 004d99b9 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004d99b9
    MOV EBX,0x5f3                       ; 004d99be
    PUSH 0x589ec9                       ; 004d99c3 | = "CDemonMission::createOneHero - too ma..."
    MOV dword ptr [0x01cc4800],ECX      ; 004d99c8 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 004d99ce | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004d99d4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004d99d9
    JMP 0x004d993b                      ; 004d99dc
        ;   XREF to: 004d993b (UNCONDITIONAL_JUMP)  ; LAB_004d993b
    CMP EDI,dword ptr [EAX + 0x150]     ; 004d99e1
        ;   Label: LAB_004d99e1
    JNZ 0x004d9990                      ; 004d99e7
        ;   XREF to: 004d9990 (CONDITIONAL_JUMP)  ; LAB_004d9990
    TEST EBP,EBP                        ; 004d99e9
    JZ 0x004d9a4d                       ; 004d99eb
        ;   XREF to: 004d9a4d (CONDITIONAL_JUMP)  ; LAB_004d9a4d
    LEA EAX,[EBX + 0x30]                ; 004d99ed
    PUSH EAX                            ; 004d99f0
    LEA EAX,[EBX + 0x20]                ; 004d99f1
    PUSH EAX                            ; 004d99f4
    MOV ESI,dword ptr [EBP + 0x14c]     ; 004d99f5
    PUSH EBP                            ; 004d99fb
    MOV dword ptr [ESP + 0xc],EBP       ; 004d99fc
    CALL dword ptr [ESI + 0x60]         ; 004d9a00
    ADD ESP,0xc                         ; 004d9a03
    PUSH 0x0                            ; 004d9a06
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004d9a08
    PUSH 0x0                            ; 004d9a0b
    MOV dword ptr [EBP + 0x2c],EAX      ; 004d9a0d
    LEA EAX,[EBP + 0x150]               ; 004d9a10
    PUSH EAX                            ; 004d9a16
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990 ; 004d9a17
        ;   XREF to: 004e1990 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 004d9a1c
    PUSH 0x0                            ; 004d9a1f
    PUSH 0x0                            ; 004d9a21
    PUSH 0x0                            ; 004d9a23
    MOV EAX,dword ptr [EBP + 0x14c]     ; 004d9a25
    PUSH EBP                            ; 004d9a2b
    CALL dword ptr [EAX + 0x128]        ; 004d9a2c
    ADD ESP,0x10                        ; 004d9a32
    MOV ECX,dword ptr [ESP]             ; 004d9a35
        ;   Label: LAB_004d9a35
    PUSH ECX                            ; 004d9a38
    MOV EBX,dword ptr [0x005baf90]      ; 004d9a39 | g_CDemonMission_PTR_005baf90
    PUSH EBX                            ; 004d9a3f
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60 ; 004d9a40
        ;   XREF to: 004d8c60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d9a45
    JMP 0x004d999a                      ; 004d9a48
        ;   XREF to: 004d999a (UNCONDITIONAL_JUMP)  ; LAB_004d999a
    MOV EDX,dword ptr [ESP + 0x20]      ; 004d9a4d
        ;   Label: LAB_004d9a4d
    PUSH EDX                            ; 004d9a51
    PUSH EBX                            ; 004d9a52
    CALL core_hero.cpp_CHeroPlaceholder_createHero_FUN_004b6080 ; 004d9a53
        ;   XREF to: 004b6080 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHeroPlaceholder_createHero_FUN_004b6080(CHeroPlaceholder * this_ptr, EHeroType hero_type)
    ADD ESP,0x8                         ; 004d9a58
    MOV dword ptr [ESP],EAX             ; 004d9a5b
    JMP 0x004d9a35                      ; 004d9a5e
        ;   XREF to: 004d9a35 (UNCONDITIONAL_JUMP)  ; LAB_004d9a35
    PUSH EDI                            ; 004d9a60
        ;   Label: LAB_004d9a60
    PUSH 0x589f41                       ; 004d9a61 | = "Can't find hero placeholder for hero %d"
    MOV EDI,dword ptr [0x005b6d50]      ; 004d9a66 | g_CEditorTools_PTR_005b6d50
    PUSH EDI                            ; 004d9a6c
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004d9a6d
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0xc                         ; 004d9a72
    XOR EAX,EAX                         ; 004d9a75
    ADD ESP,0x4                         ; 004d9a77
    POP EBP                             ; 004d9a7a
    POP EDI                             ; 004d9a7b
    POP ESI                             ; 004d9a7c
    POP EBX                             ; 004d9a7d
    RET                                 ; 004d9a7e


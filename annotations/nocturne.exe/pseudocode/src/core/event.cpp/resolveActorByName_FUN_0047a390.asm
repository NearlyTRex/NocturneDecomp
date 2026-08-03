; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_0047a390(char *name,uint class_hash,char *class_name)
;
; Parameters:
; char *           Stack[0x4]:4   name
; uint             Stack[0x8]:4   class_hash
; char *           Stack[0xc]:4   class_name
;
; XREF[3]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047e82d
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047b0dc
;   core_event.cpp_parseVectorLocation_FUN_0047a4c0 at 0047a55e
;
; Referenced Globals:
;   TerminatedCString s_Must_specify_actor_name_0057f3c6
;   undefined4 s_ust_specify_actor_name_0057f3c6+1
;   undefined4 s_st_specify_actor_name_0057f3c6+2
;   undefined4 s_t_specify_actor_name_0057f3c6+3
;   TerminatedCString s_anon_0057f3de
;   TerminatedCString s_Can_t_use_actor_specifie_0057f3e0
;   TerminatedCString s_Actor_s_does_not_exist_0057f40e
;   TerminatedCString s_Actor_s_is_of_type_s_thi_0057f429
;   undefined4 DAT_0059cf1c
;   undefined4 DAT_005b7650
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   CNetGame* g_CNetGame_PTR_005bdee0 = 01cea280
;   undefined4 DAT_01c08b60
;   undefined4 DAT_01c08b61
;   undefined4 DAT_01c08b62
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
;   core_actor.cpp_isOfClassHash_FUN_0040d860
;   core_event.cpp_CEventList_getActorByVarName_FUN_00480b30
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a390
        ;   Label: core_event.cpp_resolveActorByName_FUN_0047a390
    PUSH ESI                            ; 0047a391
    PUSH EDI                            ; 0047a392
    PUSH EBP                            ; 0047a393
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047a394
    TEST EBX,EBX                        ; 0047a398
    JZ 0x0047a3c7                       ; 0047a39a
        ;   XREF to: 0047a3c7 (CONDITIONAL_JUMP)  ; LAB_0047a3c7
    MOV AH,byte ptr [EBX]               ; 0047a39c
    TEST AH,AH                          ; 0047a39e
    JZ 0x0047a3c7                       ; 0047a3a0
        ;   XREF to: 0047a3c7 (CONDITIONAL_JUMP)  ; LAB_0047a3c7
    CMP AH,0x40                         ; 0047a3a2
    JNZ 0x0047a3f2                      ; 0047a3a5
        ;   XREF to: 0047a3f2 (CONDITIONAL_JUMP)  ; LAB_0047a3f2
    PUSH EBX                            ; 0047a3a7
    MOV ESI,dword ptr [0x005b7650]      ; 0047a3a8 | DAT_005b7650
    PUSH ESI                            ; 0047a3ae
    CALL core_event.cpp_CEventList_getActorByVarName_FUN_00480b30 ; 0047a3af
        ;   XREF to: 00480b30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_CEventList_getActorByVarName_FUN_00480b30(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 0047a3b4
    MOV ESI,EAX                         ; 0047a3b7
    TEST EAX,EAX                        ; 0047a3b9
    JNZ 0x0047a41f                      ; 0047a3bb
        ;   XREF to: 0047a41f (CONDITIONAL_JUMP)  ; LAB_0047a41f
    MOV EAX,[0x0059cf1c]                ; 0047a3bd | DAT_0059cf1c
        ;   Label: LAB_0047a3bd
    POP EBP                             ; 0047a3c2
    POP EDI                             ; 0047a3c3
    POP ESI                             ; 0047a3c4
    POP EBX                             ; 0047a3c5
    RET                                 ; 0047a3c6
    MOV ESI,0x57f3c6                    ; 0047a3c7 | = "Must specify actor name"
        ;   Label: LAB_0047a3c7
    MOV EDI,0x1c08b60                   ; 0047a3cc
    PUSH EDI                            ; 0047a3d1 | DAT_01c08b60
    MOV AL,byte ptr [ESI]               ; 0047a3d2 | = "Must specify actor name" | s_st_specify_actor_name_0057f3c6+2
        ;   Label: LAB_0047a3d2
    MOV byte ptr [EDI],AL               ; 0047a3d4 | DAT_01c08b60 | DAT_01c08b62
    CMP AL,0x0                          ; 0047a3d6
    JZ 0x0047a3ea                       ; 0047a3d8
        ;   XREF to: 0047a3ea (CONDITIONAL_JUMP)  ; LAB_0047a3ea
    MOV AL,byte ptr [ESI + 0x1]         ; 0047a3da | s_ust_specify_actor_name_0057f3c6+1 | s_t_specify_actor_name_0057f3c6+3
    ADD ESI,0x2                         ; 0047a3dd
    MOV byte ptr [EDI + 0x1],AL         ; 0047a3e0 | DAT_01c08b61 | DAT_01c08b63
    ADD EDI,0x2                         ; 0047a3e3
    CMP AL,0x0                          ; 0047a3e6
    JNZ 0x0047a3d2                      ; 0047a3e8
        ;   XREF to: 0047a3d2 (CONDITIONAL_JUMP)  ; LAB_0047a3d2
    POP EDI                             ; 0047a3ea
        ;   Label: LAB_0047a3ea
    XOR EAX,EAX                         ; 0047a3eb
    POP EBP                             ; 0047a3ed
    POP EDI                             ; 0047a3ee
    POP ESI                             ; 0047a3ef
    POP EBX                             ; 0047a3f0
    RET                                 ; 0047a3f1
    PUSH 0x57f3de                       ; 0047a3f2 | = "$"
        ;   Label: LAB_0047a3f2
    PUSH EBX                            ; 0047a3f7
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047a3f8
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0047a3fd
    TEST EAX,EAX                        ; 0047a400
    JNZ 0x0047a45d                      ; 0047a402
        ;   XREF to: 0047a45d (CONDITIONAL_JUMP)  ; LAB_0047a45d
    MOV EAX,[0x005bdee0]                ; 0047a404 | g_CNetGame_PTR_005bdee0
    CMP dword ptr [EAX],0x0             ; 0047a409 | g_CNetGame_01cea280
    JNZ 0x0047a444                      ; 0047a40c
        ;   XREF to: 0047a444 (CONDITIONAL_JUMP)  ; LAB_0047a444
    MOV ESI,dword ptr [0x01cae0e8]      ; 0047a40e | DAT_01cae0e8
    MOV ESI,dword ptr [ESI*0x4 + 0x1cae0d8] ; 0047a414
    TEST ESI,ESI                        ; 0047a41b
    JZ 0x0047a3bd                       ; 0047a41d
        ;   XREF to: 0047a3bd (CONDITIONAL_JUMP)  ; LAB_0047a3bd
    MOV EDI,dword ptr [ESP + 0x18]      ; 0047a41f
        ;   Label: LAB_0047a41f
    PUSH EDI                            ; 0047a423
    PUSH ESI                            ; 0047a424
    CALL core_actor.cpp_isOfClassHash_FUN_0040d860 ; 0047a425
        ;   XREF to: 0040d860 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClassHash_FUN_0040d860(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0047a42a
    TEST EAX,EAX                        ; 0047a42d
    JNZ 0x0047a4b6                      ; 0047a42f
        ;   XREF to: 0047a4b6 (CONDITIONAL_JUMP)  ; LAB_0047a4b6
    CMP byte ptr [EBX],0x40             ; 0047a435
    JNZ 0x0047a48d                      ; 0047a438
        ;   XREF to: 0047a48d (CONDITIONAL_JUMP)  ; LAB_0047a48d
    MOV EAX,[0x0059cf1c]                ; 0047a43a | DAT_0059cf1c
    POP EBP                             ; 0047a43f
    POP EDI                             ; 0047a440
    POP ESI                             ; 0047a441
    POP EBX                             ; 0047a442
    RET                                 ; 0047a443
    PUSH 0x57f3e0                       ; 0047a444 | = "Can't use '$' actor specifier in mult..."
        ;   Label: LAB_0047a444
    PUSH 0x1c08b60                      ; 0047a449 | DAT_01c08b60
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0047a44e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 0047a453
    XOR EAX,EAX                         ; 0047a456
    POP EBP                             ; 0047a458
    POP EDI                             ; 0047a459
    POP ESI                             ; 0047a45a
    POP EBX                             ; 0047a45b
    RET                                 ; 0047a45c
    PUSH EBX                            ; 0047a45d
        ;   Label: LAB_0047a45d
    MOV EDX,dword ptr [0x005baf90]      ; 0047a45e | g_CDemonMission_PTR_005baf90
    PUSH EDX                            ; 0047a464
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0 ; 0047a465
        ;   XREF to: 004d90a0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 0047a46a
    MOV ESI,EAX                         ; 0047a46d
    TEST EAX,EAX                        ; 0047a46f
    JNZ 0x0047a41f                      ; 0047a471
        ;   XREF to: 0047a41f (CONDITIONAL_JUMP)  ; LAB_0047a41f
    PUSH EBX                            ; 0047a473
    PUSH 0x57f40e                       ; 0047a474 | = "Actor \"%s\" does not exist."
    PUSH 0x1c08b60                      ; 0047a479 | DAT_01c08b60
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0047a47e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0047a483
    XOR EAX,EAX                         ; 0047a486
    POP EBP                             ; 0047a488
    POP EDI                             ; 0047a489
    POP ESI                             ; 0047a48a
    POP EBX                             ; 0047a48b
    RET                                 ; 0047a48c
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0047a48d
        ;   Label: LAB_0047a48d
    PUSH EBP                            ; 0047a491
    PUSH ESI                            ; 0047a492
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 0047a493
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0047a498
    PUSH EAX                            ; 0047a49b
    PUSH EBX                            ; 0047a49c
    PUSH 0x57f429                       ; 0047a49d | = "Actor \"%s\" is of type %s, this comm..."
    PUSH 0x1c08b60                      ; 0047a4a2 | DAT_01c08b60
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0047a4a7
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x14                        ; 0047a4ac
    XOR EAX,EAX                         ; 0047a4af
    POP EBP                             ; 0047a4b1
    POP EDI                             ; 0047a4b2
    POP ESI                             ; 0047a4b3
    POP EBX                             ; 0047a4b4
    RET                                 ; 0047a4b5
    MOV EAX,ESI                         ; 0047a4b6
        ;   Label: LAB_0047a4b6
    POP EBP                             ; 0047a4b8
    POP EDI                             ; 0047a4b9
    POP ESI                             ; 0047a4ba
    POP EBX                             ; 0047a4bb
    RET                                 ; 0047a4bc


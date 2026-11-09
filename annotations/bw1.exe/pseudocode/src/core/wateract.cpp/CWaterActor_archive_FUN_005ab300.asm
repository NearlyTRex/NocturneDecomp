; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_wateract_cpp_CWaterActor_archive_FUN_005ab300(CWaterActor *this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f9322
;   TerminatedCString s_opacity_005f9327
;   TerminatedCString s_heightDelta_005f932f
;   TerminatedCString s_timeToMove_005f933b
;   TerminatedCString s_moveSound_005f9346
;   TerminatedCString s_moveEvent_005f9350
;   TerminatedCString s_param_005f935a
;   TerminatedCString s_heightDelta_005f9360
;   TerminatedCString s_timeToMoveUp_005f936c
;   TerminatedCString s_timeToMoveDown_005f9379
;   TerminatedCString s_moveUpSound_005f9388
;   TerminatedCString s_moveDownSound_005f9394
;   TerminatedCString s_moveUpEvent_005f93a2
;   TerminatedCString s_moveDownEvent_005f93ae
;   TerminatedCString s_param_005f93bc
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab300
        ;   Label: core_wateract.cpp_CWaterActor_archive_FUN_005ab300
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ab301
    PUSH EBX                            ; 005ab305
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 005ab306
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ab30b
    PUSH 0x5f9322                       ; 005ab30e | DAT_005f9322
    LEA EAX,[EBX + 0x158]               ; 005ab313
    PUSH EAX                            ; 005ab319
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 005ab31a
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 005ab31f
    PUSH 0x5f9327                       ; 005ab322 | = "opacity"
    LEA EAX,[EBX + 0x164]               ; 005ab327
    PUSH EAX                            ; 005ab32d
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005ab32e
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x00625ff4]      ; 005ab333 | g_CWaterActorClassVersion
    ADD ESP,0x8                         ; 005ab339
    CMP EDX,0x2                         ; 005ab33c
    JZ 0x005ab44b                       ; 005ab33f
        ;   XREF to: 005ab44b (CONDITIONAL_JUMP)  ; LAB_005ab44b
    CMP dword ptr [0x00625ff4],0x3      ; 005ab345 | g_CWaterActorClassVersion
        ;   Label: LAB_005ab345
    JL 0x005ab406                       ; 005ab34c
        ;   XREF to: 005ab406 (CONDITIONAL_JUMP)  ; LAB_005ab406
    PUSH 0x5f9360                       ; 005ab352 | = "heightDelta"
    LEA EAX,[EBX + 0x168]               ; 005ab357
    PUSH EAX                            ; 005ab35d
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005ab35e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005ab363
    PUSH 0x5f936c                       ; 005ab366 | = "timeToMoveUp"
    LEA EAX,[EBX + 0x16c]               ; 005ab36b
    PUSH EAX                            ; 005ab371
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005ab372
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005ab377
    PUSH 0x5f9379                       ; 005ab37a | = "timeToMoveDown"
    LEA EAX,[EBX + 0x170]               ; 005ab37f
    PUSH EAX                            ; 005ab385
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005ab386
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005ab38b
    PUSH 0x5f9388                       ; 005ab38e | = "moveUpSound"
    LEA EAX,[EBX + 0x174]               ; 005ab393
    PUSH EAX                            ; 005ab399
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005ab39a
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005ab39f
    PUSH 0x5f9394                       ; 005ab3a2 | = "moveDownSound"
    LEA EAX,[EBX + 0x194]               ; 005ab3a7
    PUSH EAX                            ; 005ab3ad
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005ab3ae
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005ab3b3
    PUSH 0x5f93a2                       ; 005ab3b6 | = "moveUpEvent"
    LEA EAX,[EBX + 0x1b4]               ; 005ab3bb
    PUSH EAX                            ; 005ab3c1
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005ab3c2
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005ab3c7
    PUSH 0x5f93ae                       ; 005ab3ca | = "moveDownEvent"
    LEA EAX,[EBX + 0x218]               ; 005ab3cf
    PUSH EAX                            ; 005ab3d5
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005ab3d6
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005ab3db
    PUSH 0x5f93bc                       ; 005ab3de | = "param"
    LEA EAX,[EBX + 0x27c]               ; 005ab3e3
    PUSH EAX                            ; 005ab3e9
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005ab3ea
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005ab3ef
    PUSH 0x5f93c2                       ; 005ab3f2 | = "state"
    LEA EAX,[EBX + 0x280]               ; 005ab3f7
    PUSH EAX                            ; 005ab3fd
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005ab3fe
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ab403
    CMP dword ptr [0x00625ff4],0x4      ; 005ab406 | g_CWaterActorClassVersion
        ;   Label: LAB_005ab406
    JL 0x005ab423                       ; 005ab40d
        ;   XREF to: 005ab423 (CONDITIONAL_JUMP)  ; LAB_005ab423
    PUSH 0x5f93c8                       ; 005ab40f | = "patchSize"
    LEA EAX,[EBX + 0x284]               ; 005ab414
    PUSH EAX                            ; 005ab41a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005ab41b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005ab420
    CMP dword ptr [0x00625ff4],0x5      ; 005ab423 | g_CWaterActorClassVersion
        ;   Label: LAB_005ab423
    JL 0x005ab440                       ; 005ab42a
        ;   XREF to: 005ab440 (CONDITIONAL_JUMP)  ; LAB_005ab440
    PUSH 0x5f93d2                       ; 005ab42c | = "roundFlag"
    LEA EAX,[EBX + 0x288]               ; 005ab431
    PUSH EAX                            ; 005ab437
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005ab438
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ab43d
    CMP dword ptr [0x00625ff4],0x6      ; 005ab440 | g_CWaterActorClassVersion
        ;   Label: LAB_005ab440
    JGE 0x005ab4b4                      ; 005ab447
        ;   XREF to: 005ab4b4 (CONDITIONAL_JUMP)  ; LAB_005ab4b4
    POP EBX                             ; 005ab449
    RET                                 ; 005ab44a
    PUSH 0x5f932f                       ; 005ab44b | = "heightDelta"
        ;   Label: LAB_005ab44b
    LEA EAX,[EBX + 0x168]               ; 005ab450
    PUSH EAX                            ; 005ab456
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005ab457
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005ab45c
    PUSH 0x5f933b                       ; 005ab45f | = "timeToMove"
    LEA EAX,[EBX + 0x16c]               ; 005ab464
    PUSH EAX                            ; 005ab46a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005ab46b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005ab470
    PUSH 0x5f9346                       ; 005ab473 | = "moveSound"
    LEA EAX,[EBX + 0x174]               ; 005ab478
    PUSH EAX                            ; 005ab47e
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005ab47f
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005ab484
    PUSH 0x5f9350                       ; 005ab487 | = "moveEvent"
    LEA EAX,[EBX + 0x1b4]               ; 005ab48c
    PUSH EAX                            ; 005ab492
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005ab493
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005ab498
    PUSH 0x5f935a                       ; 005ab49b | = "param"
    LEA EAX,[EBX + 0x27c]               ; 005ab4a0
    PUSH EAX                            ; 005ab4a6
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005ab4a7
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005ab4ac
    JMP 0x005ab345                      ; 005ab4af
        ;   XREF to: 005ab345 (UNCONDITIONAL_JUMP)  ; LAB_005ab345
    PUSH 0x5f93dc                       ; 005ab4b4 | DAT_005f93dc
        ;   Label: LAB_005ab4b4
    LEA EAX,[EBX + 0x28c]               ; 005ab4b9
    PUSH EAX                            ; 005ab4bf
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005ab4c0
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ab4c5
    PUSH 0x5f93e1                       ; 005ab4c8 | DAT_005f93e1
    LEA EAX,[EBX + 0x290]               ; 005ab4cd
    PUSH EAX                            ; 005ab4d3
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005ab4d4
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ab4d9
    PUSH 0x5f93e6                       ; 005ab4dc | DAT_005f93e6
    ADD EBX,0x294                       ; 005ab4e1
    PUSH EBX                            ; 005ab4e7
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005ab4e8
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ab4ed
    POP EBX                             ; 005ab4f0
    RET                                 ; 005ab4f1


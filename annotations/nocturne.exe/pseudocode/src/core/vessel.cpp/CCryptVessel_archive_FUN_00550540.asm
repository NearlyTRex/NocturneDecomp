; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vessel_cpp_CCryptVessel_archive_FUN_00550540(int param_1)
;
;
; Referenced Globals:
;   string s_modelName_005974c5
;   TerminatedCString s_prey_005974cf
;   string s_neutral_005974d4
;   string s_destroyedEvent_005974dc
;   string s_startLoc_005974eb
;   string s_endLoc_005974f4
;   string s_state_005974fb
;   string s_timer_00597501
;   string s_winEvent_00597507
;   string s_eatDistance_00597510
;   string s_visualType_0059751c
;   undefined4 DAT_005c11c4
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550540
        ;   Label: core_vessel.cpp_CCryptVessel_archive_FUN_00550540
    MOV EBX,dword ptr [ESP + 0x8]       ; 00550541
    PUSH EBX                            ; 00550545
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 00550546
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 0055054b
    PUSH 0x5974c5                       ; 0055054e | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 00550553
    PUSH EAX                            ; 00550559
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 0055055a
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00()
    ADD ESP,0x8                         ; 0055055f
    PUSH 0x5974cf                       ; 00550562 | = "prey"
    LEA EAX,[EBX + 0x2d0]               ; 00550567
    PUSH EAX                            ; 0055056d
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0055056e
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00550573
    PUSH 0x5974d4                       ; 00550576 | = "neutral"
    LEA EAX,[EBX + 0x2d4]               ; 0055057b
    PUSH EAX                            ; 00550581
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00550582
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00550587
    PUSH 0x5974dc                       ; 0055058a | = "destroyedEvent"
    LEA EAX,[EBX + 0x2d8]               ; 0055058f
    PUSH EAX                            ; 00550595
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00550596
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0055059b
    PUSH 0x5974eb                       ; 0055059e | = "startLoc"
    LEA EAX,[EBX + 0x3a0]               ; 005505a3
    PUSH EAX                            ; 005505a9
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 005505aa
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 005505af
    PUSH 0x5974f4                       ; 005505b2 | = "endLoc"
    LEA EAX,[EBX + 0x3a4]               ; 005505b7
    PUSH EAX                            ; 005505bd
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 005505be
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 005505c3
    PUSH 0x5974fb                       ; 005505c6 | = "state"
    LEA EAX,[EBX + 0x3b0]               ; 005505cb
    PUSH EAX                            ; 005505d1
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 005505d2
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 005505d7
    PUSH 0x597501                       ; 005505da | = "timer"
    LEA EAX,[EBX + 0x3b4]               ; 005505df
    PUSH EAX                            ; 005505e5
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 005505e6
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    MOV EDX,dword ptr [0x005c11c4]      ; 005505eb | DAT_005c11c4
    ADD ESP,0x8                         ; 005505f1
    CMP EDX,0x2                         ; 005505f4
    JGE 0x00550621                      ; 005505f7
        ;   XREF to: 00550621 (CONDITIONAL_JUMP)  ; LAB_00550621
    CMP dword ptr [0x005c11c4],0x3      ; 005505f9 | DAT_005c11c4
        ;   Label: LAB_005505f9
    JL 0x00550616                       ; 00550600
        ;   XREF to: 00550616 (CONDITIONAL_JUMP)  ; LAB_00550616
    PUSH 0x597510                       ; 00550602 | = "eatDistance"
    LEA EAX,[EBX + 0x3a8]               ; 00550607
    PUSH EAX                            ; 0055060d
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0055060e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 00550613
    CMP dword ptr [0x005c11c4],0x4      ; 00550616 | DAT_005c11c4
        ;   Label: LAB_00550616
    JGE 0x00550637                      ; 0055061d
        ;   XREF to: 00550637 (CONDITIONAL_JUMP)  ; LAB_00550637
    POP EBX                             ; 0055061f
    RET                                 ; 00550620
    PUSH 0x597507                       ; 00550621 | = "winEvent"
        ;   Label: LAB_00550621
    LEA EAX,[EBX + 0x33c]               ; 00550626
    PUSH EAX                            ; 0055062c
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0055062d
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 00550632
    JMP 0x005505f9                      ; 00550635
        ;   XREF to: 005505f9 (UNCONDITIONAL_JUMP)  ; LAB_005505f9
    PUSH 0x59751c                       ; 00550637 | = "visualType"
        ;   Label: LAB_00550637
    ADD EBX,0x3ac                       ; 0055063c
    PUSH EBX                            ; 00550642
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00550643
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00550648
    POP EBX                             ; 0055064b
    RET                                 ; 0055064c


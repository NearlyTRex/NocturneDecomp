; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_FUN_004fc350(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_loadSet_FUN_004fc6b0 at 004fc71f
;   core_mission.cpp_FUN_004fca90 at 004fcade
;   core_mission.cpp_FUN_004fce00 at 004fce49
;
; Referenced Globals:
;   TerminatedCString s_Setting_up_actors_005de66c
;   TerminatedCString s_Setting_up_actors_005de67e
;   TerminatedCString s_Setting_up_actors_005de690
;   TerminatedCString s_Setting_up_actors_005de6a2
;   undefined4 DAT_00617e10
;
; Called Functions:
;   core_level.cpp_FUN_004e1600
;   core_skeleton.cpp_FUN_00549180
;   core_skeleton.cpp_FUN_005491b0
;   support_newmsg.cpp_getLocalizedString_FUN_0050fe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc350
        ;   Label: core_mission.cpp_FUN_004fc350
    PUSH ESI                            ; 004fc351
    PUSH EDI                            ; 004fc352
    PUSH EBP                            ; 004fc353
    SUB ESP,0x4                         ; 004fc354
    PUSH 0x0                            ; 004fc357
    PUSH 0x5de66c                       ; 004fc359 | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004fc35e
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004fc363
    PUSH EAX                            ; 004fc366
    MOV EDX,dword ptr [0x00617e10]      ; 004fc367 | DAT_00617e10
    PUSH EDX                            ; 004fc36d
    CALL core_level.cpp_FUN_004e1600    ; 004fc36e
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; void core_level.cpp_FUN_004e1600(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 004fc373
    MOV EBX,dword ptr [ESP + 0x18]      ; 004fc376
    CALL core_skeleton.cpp_FUN_00549180 ; 004fc37a
        ;   XREF to: 00549180 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00549180()
    MOV EBX,dword ptr [EBX + 0x1114]    ; 004fc37f
    XOR EDI,EDI                         ; 004fc385
    TEST EBX,EBX                        ; 004fc387
    JZ 0x004fc3b0                       ; 004fc389
        ;   XREF to: 004fc3b0 (CONDITIONAL_JUMP)  ; LAB_004fc3b0
    PUSH EBX                            ; 004fc38b
        ;   Label: LAB_004fc38b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fc38c
    INC EDI                             ; 004fc392
    CALL dword ptr [EAX + 0xc]          ; 004fc393
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004fc396
    ADD ESP,0x4                         ; 004fc39c
    TEST EBX,EBX                        ; 004fc39f
    JNZ 0x004fc38b                      ; 004fc3a1
        ;   XREF to: 004fc38b (CONDITIONAL_JUMP)  ; LAB_004fc38b
    LEA EAX,[EAX]                       ; 004fc3a3
    LEA EDX,[EDX]                       ; 004fc3a9
    NOP                                 ; 004fc3af
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fc3b0
        ;   Label: LAB_004fc3b0
    CMP dword ptr [EAX + 0x1008],0x0    ; 004fc3b4
    JZ 0x004fc48a                       ; 004fc3bb
        ;   XREF to: 004fc48a (CONDITIONAL_JUMP)  ; LAB_004fc48a
    MOV EBX,dword ptr [ESP + 0x18]      ; 004fc3c1
        ;   Label: LAB_004fc3c1
    MOV EBX,dword ptr [EBX + 0x1114]    ; 004fc3c5
    XOR ESI,ESI                         ; 004fc3cb
    TEST EBX,EBX                        ; 004fc3cd
    JZ 0x004fc472                       ; 004fc3cf
        ;   XREF to: 004fc472 (CONDITIONAL_JUMP)  ; LAB_004fc472
    LEA EAX,[EDI*0x4 + 0x0]             ; 004fc3d5
    SUB EAX,EDI                         ; 004fc3dc
    MOV EDX,EAX                         ; 004fc3de
    SAR EDX,0x1f                        ; 004fc3e0
    SHL EDX,0x2                         ; 004fc3e3
    SBB EAX,EDX                         ; 004fc3e6
    SAR EAX,0x2                         ; 004fc3e8
    MOV dword ptr [ESP],EAX             ; 004fc3eb
    MOV EDX,EDI                         ; 004fc3ee
    MOV EAX,EDI                         ; 004fc3f0
    SAR EDX,0x1f                        ; 004fc3f2
    SUB EAX,EDX                         ; 004fc3f5
    SAR EAX,0x1                         ; 004fc3f7
    MOV EBP,EAX                         ; 004fc3f9
    MOV EDX,EDI                         ; 004fc3fb
    MOV EAX,EDI                         ; 004fc3fd
    SAR EDX,0x1f                        ; 004fc3ff
    SHL EDX,0x2                         ; 004fc402
    SBB EAX,EDX                         ; 004fc405
    SAR EAX,0x2                         ; 004fc407
    MOV EDI,EAX                         ; 004fc40a
    PUSH EBX                            ; 004fc40c
        ;   Label: LAB_004fc40c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fc40d
    INC ESI                             ; 004fc413
    CALL dword ptr [EAX + 0x8]          ; 004fc414
    ADD ESP,0x4                         ; 004fc417
    CMP ESI,EDI                         ; 004fc41a
    JZ 0x004fc494                       ; 004fc41c
        ;   XREF to: 004fc494 (CONDITIONAL_JUMP)  ; LAB_004fc494
    CMP ESI,EBP                         ; 004fc422
        ;   Label: LAB_004fc422
    JNZ 0x004fc445                      ; 004fc424
        ;   XREF to: 004fc445 (CONDITIONAL_JUMP)  ; LAB_004fc445
    PUSH 0x0                            ; 004fc426
    PUSH 0x5de690                       ; 004fc428 | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004fc42d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004fc432
    PUSH EAX                            ; 004fc435
    MOV EDX,dword ptr [0x00617e10]      ; 004fc436 | DAT_00617e10
    PUSH EDX                            ; 004fc43c
    CALL core_level.cpp_FUN_004e1600    ; 004fc43d
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; void core_level.cpp_FUN_004e1600(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 004fc442
    CMP ESI,dword ptr [ESP]             ; 004fc445
        ;   Label: LAB_004fc445
    JNZ 0x004fc468                      ; 004fc448
        ;   XREF to: 004fc468 (CONDITIONAL_JUMP)  ; LAB_004fc468
    PUSH 0x0                            ; 004fc44a
    PUSH 0x5de6a2                       ; 004fc44c | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004fc451
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004fc456
    PUSH EAX                            ; 004fc459
    MOV EAX,[0x00617e10]                ; 004fc45a | DAT_00617e10
    PUSH EAX                            ; 004fc45f
    CALL core_level.cpp_FUN_004e1600    ; 004fc460
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; void core_level.cpp_FUN_004e1600(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 004fc465
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004fc468
        ;   Label: LAB_004fc468
    TEST EBX,EBX                        ; 004fc46e
    JNZ 0x004fc40c                      ; 004fc470
        ;   XREF to: 004fc40c (CONDITIONAL_JUMP)  ; LAB_004fc40c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004fc472
        ;   Label: LAB_004fc472
    MOV EDX,dword ptr [ESP + 0x18]      ; 004fc476
    MOV EAX,dword ptr [EAX]             ; 004fc47a
    MOV dword ptr [EDX + 0x1450],EAX    ; 004fc47c
    ADD ESP,0x4                         ; 004fc482
    POP EBP                             ; 004fc485
    POP EDI                             ; 004fc486
    POP ESI                             ; 004fc487
    POP EBX                             ; 004fc488
    RET                                 ; 004fc489
    CALL core_skeleton.cpp_FUN_005491b0 ; 004fc48a
        ;   XREF to: 005491b0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005491b0()
        ;   Label: LAB_004fc48a
    JMP 0x004fc3c1                      ; 004fc48f
        ;   XREF to: 004fc3c1 (UNCONDITIONAL_JUMP)  ; LAB_004fc3c1
    PUSH 0x0                            ; 004fc494
        ;   Label: LAB_004fc494
    PUSH 0x5de67e                       ; 004fc496 | = "Setting up actors"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004fc49b
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004fc4a0
    PUSH EAX                            ; 004fc4a3
    MOV EAX,[0x00617e10]                ; 004fc4a4 | DAT_00617e10
    PUSH EAX                            ; 004fc4a9
    CALL core_level.cpp_FUN_004e1600    ; 004fc4aa
        ;   XREF to: 004e1600 (UNCONDITIONAL_CALL)  ; void core_level.cpp_FUN_004e1600(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 004fc4af
    JMP 0x004fc422                      ; 004fc4b2
        ;   XREF to: 004fc422 (UNCONDITIONAL_JUMP)  ; LAB_004fc422


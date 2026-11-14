; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_00512420(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005cc2a2+1
;   TerminatedCString s_toStartEvent_005cc2ad
;   TerminatedCString s_toEndEvent_005cc2ba
;   TerminatedCString s_stopEvent_005cc2c5
;   TerminatedCString s_startSound_005cc2cf
;   TerminatedCString s_stopSound_005cc2da
;   TerminatedCString s_activeSound_005cc2e4
;   TerminatedCString s_courseFilename_005cc2f0
;   TerminatedCString s_startPos_005cc2ff
;   TerminatedCString s_origOrient_005cc308
;   TerminatedCString s_endPos_005cc313
;   TerminatedCString s_endOrient_005cc31a
;   TerminatedCString s_state_005cc324
;   TerminatedCString s_param_005cc32a
;   TerminatedCString s_travelTimeToStart_005cc330
;   ... and 22 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveQuaternion_FUN_0040b5e0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512420
        ;   Label: core_platfrm.cpp_CPlatform_archive_FUN_00512420
    PUSH ESI                            ; 00512421
    PUSH EDI                            ; 00512422
    PUSH EBP                            ; 00512423
    SUB ESP,0xc                         ; 00512424
    MOV EDI,dword ptr [ESP + 0x20]      ; 00512427
    PUSH EDI                            ; 0051242b
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 0051242c
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00512431
    PUSH 0x5cc2a3                       ; 00512434 | s_modelName_005cc2a2+1
    LEA EAX,[EDI + 0x158]               ; 00512439
    PUSH EAX                            ; 0051243f
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 00512440
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00512445
    PUSH 0x5cc2ad                       ; 00512448 | = "toStartEvent"
    LEA EAX,[EDI + 0x354]               ; 0051244d
    PUSH EAX                            ; 00512453
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00512454
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00512459
    PUSH 0x5cc2ba                       ; 0051245c | = "toEndEvent"
    LEA EAX,[EDI + 0x3b8]               ; 00512461
    PUSH EAX                            ; 00512467
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00512468
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0051246d
    PUSH 0x5cc2c5                       ; 00512470 | = "stopEvent"
    LEA EAX,[EDI + 0x41c]               ; 00512475
    PUSH EAX                            ; 0051247b
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0051247c
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00512481
    PUSH 0x5cc2cf                       ; 00512484 | = "startSound"
    LEA EAX,[EDI + 0x480]               ; 00512489
    PUSH EAX                            ; 0051248f
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00512490
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00512495
    PUSH 0x5cc2da                       ; 00512498 | = "stopSound"
    LEA EAX,[EDI + 0x494]               ; 0051249d
    PUSH EAX                            ; 005124a3
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 005124a4
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005124a9
    PUSH 0x5cc2e4                       ; 005124ac | = "activeSound"
    LEA EAX,[EDI + 0x4a8]               ; 005124b1
    PUSH EAX                            ; 005124b7
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 005124b8
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005124bd
    PUSH 0x5cc2f0                       ; 005124c0 | = "courseFilename"
    LEA EAX,[EDI + 0x2f0]               ; 005124c5
    PUSH EAX                            ; 005124cb
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 005124cc
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    MOV AH,byte ptr [EDI + 0x2f0]       ; 005124d1
    ADD ESP,0x8                         ; 005124d7
    TEST AH,AH                          ; 005124da
    JZ 0x005126ef                       ; 005124dc
        ;   XREF to: 005126ef (CONDITIONAL_JUMP)  ; LAB_005126ef
    PUSH 0x5cc324                       ; 005124e2 | = "state"
        ;   Label: LAB_005124e2
    LEA EAX,[EDI + 0x2d4]               ; 005124e7
    PUSH EAX                            ; 005124ed
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 005124ee
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005124f3
    PUSH 0x5cc32a                       ; 005124f6 | = "param"
    LEA EAX,[EDI + 0x2dc]               ; 005124fb
    PUSH EAX                            ; 00512501
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00512502
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00512507
    PUSH 0x5cc330                       ; 0051250a | = "travelTimeToStart"
    LEA EAX,[EDI + 0x2ec]               ; 0051250f
    PUSH EAX                            ; 00512515
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00512516
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x00603718]      ; 0051251b | g_CPlatformClassVersion
    ADD ESP,0x8                         ; 00512521
    CMP EDX,0x7                         ; 00512524
    JL 0x00512744                       ; 00512527
        ;   XREF to: 00512744 (CONDITIONAL_JUMP)  ; LAB_00512744
    PUSH 0x5cc342                       ; 0051252d | = "travelTimeToEnd"
    LEA EAX,[EDI + 0x2e8]               ; 00512532
    PUSH EAX                            ; 00512538
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00512539
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0051253e
    PUSH 0x5cc352                       ; 00512541 | = "groundType"
        ;   Label: LAB_00512541
    LEA EAX,[EDI + 0x2d8]               ; 00512546
    PUSH EAX                            ; 0051254c
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0051254d
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    MOV ECX,dword ptr [0x00603718]      ; 00512552 | g_CPlatformClassVersion
    ADD ESP,0x8                         ; 00512558
    CMP ECX,0x2                         ; 0051255b
    JL 0x00512574                       ; 0051255e
        ;   XREF to: 00512574 (CONDITIONAL_JUMP)  ; LAB_00512574
    PUSH 0x5cc35d                       ; 00512560 | = "oneShot"
    LEA EAX,[EDI + 0x4c0]               ; 00512565
    PUSH EAX                            ; 0051256b
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0051256c
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00512571
    CMP dword ptr [0x00603718],0x3      ; 00512574 | g_CPlatformClassVersion
        ;   Label: LAB_00512574
    JL 0x00512591                       ; 0051257b
        ;   XREF to: 00512591 (CONDITIONAL_JUMP)  ; LAB_00512591
    PUSH 0x5cc365                       ; 0051257d | = "blockVirtualDirectorFlag"
    LEA EAX,[EDI + 0x4c4]               ; 00512582
    PUSH EAX                            ; 00512588
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00512589
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0051258e
    CMP dword ptr [0x00603718],0x4      ; 00512591 | g_CPlatformClassVersion
        ;   Label: LAB_00512591
    JL 0x005125ae                       ; 00512598
        ;   XREF to: 005125ae (CONDITIONAL_JUMP)  ; LAB_005125ae
    PUSH 0x5cc37e                       ; 0051259a | = "renderInBackgroundWhenNotMovingFlag"
    LEA EAX,[EDI + 0x4c8]               ; 0051259f
    PUSH EAX                            ; 005125a5
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 005125a6
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005125ab
    CMP dword ptr [0x00603718],0x5      ; 005125ae | g_CPlatformClassVersion
        ;   Label: LAB_005125ae
    JL 0x005125cb                       ; 005125b5
        ;   XREF to: 005125cb (CONDITIONAL_JUMP)  ; LAB_005125cb
    PUSH 0x5cc3a2                       ; 005125b7 | = "cameraWhileMoving"
    LEA EAX,[EDI + 0x4cc]               ; 005125bc
    PUSH EAX                            ; 005125c2
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 005125c3
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005125c8
    CMP dword ptr [0x00603718],0x6      ; 005125cb | g_CPlatformClassVersion
        ;   Label: LAB_005125cb
    JL 0x005125e8                       ; 005125d2
        ;   XREF to: 005125e8 (CONDITIONAL_JUMP)  ; LAB_005125e8
    PUSH 0x5cc3b4                       ; 005125d4 | = "plotAsBoxInShadow"
    LEA EAX,[EDI + 0x50c]               ; 005125d9
    PUSH EAX                            ; 005125df
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 005125e0
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005125e5
    CMP dword ptr [0x00603718],0x8      ; 005125e8 | g_CPlatformClassVersion
        ;   Label: LAB_005125e8
    JL 0x005126a0                       ; 005125ef
        ;   XREF to: 005126a0 (CONDITIONAL_JUMP)  ; LAB_005126a0
    PUSH 0x5cc3c6                       ; 005125f5 | = "goalParam"
    LEA EAX,[EDI + 0x2e0]               ; 005125fa
    PUSH EAX                            ; 00512600
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00512601
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00512606
    PUSH 0x5cc3d0                       ; 00512609 | = "currentMovementRate"
    LEA EAX,[EDI + 0x2e4]               ; 0051260e
    PUSH EAX                            ; 00512614
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00512615
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    MOV ECX,dword ptr [0x007df9b8]      ; 0051261a | DAT_007df9b8
    ADD ESP,0x8                         ; 00512620
    CMP ECX,0x1                         ; 00512623
    JZ 0x00512755                       ; 00512626
        ;   XREF to: 00512755 (CONDITIONAL_JUMP)  ; LAB_00512755
    MOV EAX,EDI                         ; 0051262c
    XOR EBX,EBX                         ; 0051262e
    LEA ESI,[EDI + 0x208]               ; 00512630
    MOV dword ptr [ESP + 0x8],EBX       ; 00512636
    CMP dword ptr [EAX + 0x51c],0x0     ; 0051263a
        ;   Label: LAB_0051263a
    JZ 0x00512647                       ; 00512641
        ;   XREF to: 00512647 (CONDITIONAL_JUMP)  ; LAB_00512647
    INC dword ptr [ESP + 0x8]           ; 00512643
    ADD EAX,0x34                        ; 00512647
        ;   Label: LAB_00512647
    CMP EAX,ESI                         ; 0051264a
    JNZ 0x0051263a                      ; 0051264c
        ;   XREF to: 0051263a (CONDITIONAL_JUMP)  ; LAB_0051263a
    PUSH 0x5cc440                       ; 0051264e | = "attachCount"
    LEA EAX,[ESP + 0xc]                 ; 00512653
    PUSH EAX                            ; 00512657
    LEA EBP,[EDI + 0x51c]               ; 00512658
    XOR EBX,EBX                         ; 0051265e
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00512660
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    MOV ESI,EDI                         ; 00512665
    ADD ESP,0x8                         ; 00512667
    LEA EAX,[EBX*0x4 + 0x0]             ; 0051266a
        ;   Label: LAB_0051266a
    SUB EAX,EBX                         ; 00512671
    SHL EAX,0x2                         ; 00512673
    ADD EAX,EBX                         ; 00512676
    MOV EDX,dword ptr [ESI + 0x51c]     ; 00512678
    SHL EAX,0x2                         ; 0051267e
    TEST EDX,EDX                        ; 00512681
    JZ 0x00512695                       ; 00512683
        ;   XREF to: 00512695 (CONDITIONAL_JUMP)  ; LAB_00512695
    PUSH 0x5cc44c                       ; 00512685 | = "attach actor"
    ADD EAX,EBP                         ; 0051268a
    PUSH EAX                            ; 0051268c
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0051268d
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b930(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00512692
    INC EBX                             ; 00512695
        ;   Label: LAB_00512695
    ADD ESI,0x34                        ; 00512696
    CMP EBX,0xa                         ; 00512699
    JL 0x0051266a                       ; 0051269c
        ;   XREF to: 0051266a (CONDITIONAL_JUMP)  ; LAB_0051266a
    MOV EAX,EAX                         ; 0051269e
    CMP dword ptr [0x00603718],0x9      ; 005126a0 | g_CPlatformClassVersion
        ;   Label: LAB_005126a0
    JL 0x005126bd                       ; 005126a7
        ;   XREF to: 005126bd (CONDITIONAL_JUMP)  ; LAB_005126bd
    PUSH 0x5cc459                       ; 005126a9 | = "pushFlag"
    LEA EAX,[EDI + 0x510]               ; 005126ae
    PUSH EAX                            ; 005126b4
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 005126b5
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005126ba
    CMP dword ptr [0x00603718],0xa      ; 005126bd | g_CPlatformClassVersion
        ;   Label: LAB_005126bd
    JL 0x005126da                       ; 005126c4
        ;   XREF to: 005126da (CONDITIONAL_JUMP)  ; LAB_005126da
    PUSH 0x5cc462                       ; 005126c6 | = "recomputeFog"
    LEA EAX,[EDI + 0x514]               ; 005126cb
    PUSH EAX                            ; 005126d1
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 005126d2
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005126d7
    CMP dword ptr [0x00603718],0xb      ; 005126da | g_CPlatformClassVersion
        ;   Label: LAB_005126da
    JGE 0x005127ca                      ; 005126e1
        ;   XREF to: 005127ca (CONDITIONAL_JUMP)  ; LAB_005127ca
    ADD ESP,0xc                         ; 005126e7
    POP EBP                             ; 005126ea
    POP EDI                             ; 005126eb
    POP ESI                             ; 005126ec
    POP EBX                             ; 005126ed
    RET                                 ; 005126ee
    PUSH 0x5cc2ff                       ; 005126ef | = "startPos"
        ;   Label: LAB_005126ef
    LEA EAX,[EDI + 0x31c]               ; 005126f4
    PUSH EAX                            ; 005126fa
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 005126fb
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b400(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00512700
    PUSH 0x5cc308                       ; 00512703 | = "origOrient"
    LEA EAX,[EDI + 0x334]               ; 00512708
    PUSH EAX                            ; 0051270e
    CALL core_actor.cpp_archiveQuaternion_FUN_0040b5e0 ; 0051270f
        ;   XREF to: 0040b5e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveQuaternion_FUN_0040b5e0(CQuaternion4f * quat_ptr, char * property_type)
    ADD ESP,0x8                         ; 00512714
    PUSH 0x5cc313                       ; 00512717 | = "endPos"
    LEA EAX,[EDI + 0x328]               ; 0051271c
    PUSH EAX                            ; 00512722
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 00512723
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b400(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00512728
    PUSH 0x5cc31a                       ; 0051272b | = "endOrient"
    LEA EAX,[EDI + 0x344]               ; 00512730
    PUSH EAX                            ; 00512736
    CALL core_actor.cpp_archiveQuaternion_FUN_0040b5e0 ; 00512737
        ;   XREF to: 0040b5e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveQuaternion_FUN_0040b5e0(CQuaternion4f * quat_ptr, char * property_type)
    ADD ESP,0x8                         ; 0051273c
    JMP 0x005124e2                      ; 0051273f
        ;   XREF to: 005124e2 (UNCONDITIONAL_JUMP)  ; LAB_005124e2
    MOV EAX,dword ptr [EDI + 0x2ec]     ; 00512744
        ;   Label: LAB_00512744
    MOV dword ptr [EDI + 0x2e8],EAX     ; 0051274a
    JMP 0x00512541                      ; 00512750
        ;   XREF to: 00512541 (UNCONDITIONAL_JUMP)  ; LAB_00512541
    PUSH 0x5cc3e4                       ; 00512755 | = "attachCount"
        ;   Label: LAB_00512755
    LEA EAX,[ESP + 0x4]                 ; 0051275a
    PUSH EAX                            ; 0051275e
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0051275f
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00512764
    CMP dword ptr [ESP],0xa             ; 00512767
    JLE 0x0051278f                      ; 0051276b
        ;   XREF to: 0051278f (CONDITIONAL_JUMP)  ; LAB_0051278f
    MOV EBP,0x5cc3f0                    ; 0051276d | = "..\\core\\platfrm.cpp"
    MOV EAX,0x316                       ; 00512772
    PUSH 0x5cc404                       ; 00512777 | = "CPlatform::archive - too many attache..."
    MOV dword ptr [0x01d71de0],EBP      ; 0051277c | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00512782 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00512787
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0051278c
    MOV EDX,dword ptr [ESP]             ; 0051278f
        ;   Label: LAB_0051278f
    XOR ESI,ESI                         ; 00512792
    TEST EDX,EDX                        ; 00512794
    JLE 0x005126a0                      ; 00512796
        ;   XREF to: 005126a0 (CONDITIONAL_JUMP)  ; LAB_005126a0
    MOV EBX,EDI                         ; 0051279c
    PUSH 0x5cc433                       ; 0051279e | = "attach actor"
        ;   Label: LAB_0051279e
    LEA EAX,[ESP + 0x8]                 ; 005127a3
    PUSH EAX                            ; 005127a7
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 005127a8
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b930(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005127ad
    MOV EAX,dword ptr [ESP + 0x4]       ; 005127b0
    MOV dword ptr [EBX + 0x51c],EAX     ; 005127b4
    INC ESI                             ; 005127ba
    MOV ECX,dword ptr [ESP]             ; 005127bb
    ADD EBX,0x34                        ; 005127be
    CMP ESI,ECX                         ; 005127c1
    JL 0x0051279e                       ; 005127c3
        ;   XREF to: 0051279e (CONDITIONAL_JUMP)  ; LAB_0051279e
    JMP 0x005126a0                      ; 005127c5
        ;   XREF to: 005126a0 (UNCONDITIONAL_JUMP)  ; LAB_005126a0
    PUSH 0x5cc46f                       ; 005127ca | = "plotInShadowFlag"
        ;   Label: LAB_005127ca
    ADD EDI,0x518                       ; 005127cf
    PUSH EDI                            ; 005127d5
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 005127d6
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005127db
    ADD ESP,0xc                         ; 005127de
    POP EBP                             ; 005127e1
    POP EDI                             ; 005127e2
    POP ESI                             ; 005127e3
    POP EBX                             ; 005127e4
    RET                                 ; 005127e5


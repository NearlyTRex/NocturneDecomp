; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_archive_FUN_00478490(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005da81b+1
;   TerminatedCString s_doorType_005da826
;   TerminatedCString s_doorSide_005da82f
;   TerminatedCString s_doorState_005da838
;   TerminatedCString s_doorSwing_005da842
;   TerminatedCString s_openEvent_005da84c
;   TerminatedCString s_closeEvent_005da856
;   TerminatedCString s_openSound_005da861
;   TerminatedCString s_closeSound_005da86b
;   TerminatedCString s_keyMask_005da876
;   TerminatedCString s_origPos_005da87e
;   TerminatedCString s_origOrient_005da886
;   TerminatedCString s_param_005da891
;   TerminatedCString s_maxParam_005da897
;   TerminatedCString s_openSpeed_005da8a0
;   ... and 20 more
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_archiveRules_FUN_0040be80
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478490
        ;   Label: core_door.cpp_CDoor_archive_FUN_00478490
    PUSH EDI                            ; 00478491
    MOV EBX,dword ptr [ESP + 0xc]       ; 00478492
    PUSH EBX                            ; 00478496
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 00478497
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0047849c
    PUSH 0x5da81c                       ; 0047849f | s_modelName_005da81b+1
    LEA EDI,[EBX + 0x158]               ; 004784a4
    PUSH EDI                            ; 004784aa
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 004784ab
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770()
    ADD ESP,0x8                         ; 004784b0
    PUSH 0x5da826                       ; 004784b3 | = "doorType"
    LEA EDI,[EBX + 0x2d8]               ; 004784b8
    PUSH EDI                            ; 004784be
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004784bf
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004784c4
    PUSH 0x5da82f                       ; 004784c7 | = "doorSide"
    LEA EDI,[EBX + 0x2dc]               ; 004784cc
    PUSH EDI                            ; 004784d2
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004784d3
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004784d8
    PUSH 0x5da838                       ; 004784db | = "doorState"
    LEA EDI,[EBX + 0x2e0]               ; 004784e0
    PUSH EDI                            ; 004784e6
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004784e7
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004784ec
    PUSH 0x5da842                       ; 004784ef | = "doorSwing"
    LEA EDI,[EBX + 0x2e4]               ; 004784f4
    PUSH EDI                            ; 004784fa
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004784fb
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00478500
    PUSH 0x5da84c                       ; 00478503 | = "openEvent"
    LEA EDI,[EBX + 0x2e8]               ; 00478508
    PUSH EDI                            ; 0047850e
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0047850f
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00478514
    PUSH 0x5da856                       ; 00478517 | = "closeEvent"
    LEA EDI,[EBX + 0x34c]               ; 0047851c
    PUSH EDI                            ; 00478522
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00478523
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00478528
    PUSH 0x5da861                       ; 0047852b | = "openSound"
    LEA EDI,[EBX + 0x864]               ; 00478530
    PUSH EDI                            ; 00478536
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00478537
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0047853c
    PUSH 0x5da86b                       ; 0047853f | = "closeSound"
    LEA EDI,[EBX + 0x8c8]               ; 00478544
    PUSH EDI                            ; 0047854a
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0047854b
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00478550
    PUSH 0x5da876                       ; 00478553 | = "keyMask"
    LEA EDI,[EBX + 0x990]               ; 00478558
    PUSH EDI                            ; 0047855e
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0047855f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00478564
    PUSH 0x5da87e                       ; 00478567 | = "origPos"
    LEA EDI,[EBX + 0x994]               ; 0047856c
    PUSH EDI                            ; 00478572
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 00478573
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 00478578
    PUSH 0x5da886                       ; 0047857b | = "origOrient"
    LEA EDI,[EBX + 0x9a0]               ; 00478580
    PUSH EDI                            ; 00478586
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 00478587
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 0047858c
    PUSH 0x5da891                       ; 0047858f | = "param"
    LEA EDI,[EBX + 0x9ac]               ; 00478594
    PUSH EDI                            ; 0047859a
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0047859b
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004785a0
    PUSH 0x5da897                       ; 004785a3 | = "maxParam"
    LEA EDI,[EBX + 0x9b0]               ; 004785a8
    PUSH EDI                            ; 004785ae
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004785af
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004785b4
    PUSH 0x5da8a0                       ; 004785b7 | = "openSpeed"
    LEA EDI,[EBX + 0x9b4]               ; 004785bc
    PUSH EDI                            ; 004785c2
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004785c3
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004785c8
    PUSH 0x5da8aa                       ; 004785cb | = "closeSpeed"
    LEA EDI,[EBX + 0x9b8]               ; 004785d0
    PUSH EDI                            ; 004785d6
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004785d7
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    MOV EDX,dword ptr [0x006124f4]      ; 004785dc | g_CDoorClassVersion
    ADD ESP,0x8                         ; 004785e2
    CMP EDX,0x2                         ; 004785e5
    JGE 0x00478731                      ; 004785e8
        ;   XREF to: 00478731 (CONDITIONAL_JUMP)  ; LAB_00478731
    CMP dword ptr [0x006124f4],0x3      ; 004785ee | g_CDoorClassVersion
        ;   Label: LAB_004785ee
    JL 0x0047861f                       ; 004785f5
        ;   XREF to: 0047861f (CONDITIONAL_JUMP)  ; LAB_0047861f
    PUSH 0x5da8c0                       ; 004785f7 | = "eventToTriggerWhenOpen"
    LEA EDI,[EBX + 0x3b0]               ; 004785fc
    PUSH EDI                            ; 00478602
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00478603
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00478608
    PUSH 0x5da8d7                       ; 0047860b | = "eventToTriggerWhenClosed"
    LEA EDI,[EBX + 0x414]               ; 00478610
    PUSH EDI                            ; 00478616
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00478617
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0047861c
    CMP dword ptr [0x006124f4],0x4      ; 0047861f | g_CDoorClassVersion
        ;   Label: LAB_0047861f
    JL 0x0047863c                       ; 00478626
        ;   XREF to: 0047863c (CONDITIONAL_JUMP)  ; LAB_0047863c
    PUSH 0x5da8f0                       ; 00478628 | = "oneShot"
    LEA EDI,[EBX + 0x9c8]               ; 0047862d
    PUSH EDI                            ; 00478633
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00478634
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00478639
    MOV EDI,dword ptr [0x006124f4]      ; 0047863c | g_CDoorClassVersion
        ;   Label: LAB_0047863c
    CMP EDI,0x7                         ; 00478642
    JL 0x0047874a                       ; 00478645
        ;   XREF to: 0047874a (CONDITIONAL_JUMP)  ; LAB_0047874a
    PUSH 0x5da8f8                       ; 0047864b | = "openRules"
    LEA EDI,[EBX + 0x478]               ; 00478650
    PUSH EDI                            ; 00478656
    CALL core_actor.cpp_archiveRules_FUN_0040be80 ; 00478657
        ;   XREF to: 0040be80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveRules_FUN_0040be80()
    ADD ESP,0x8                         ; 0047865c
    CMP dword ptr [0x006124f4],0x6      ; 0047865f | g_CDoorClassVersion
        ;   Label: LAB_0047865f
    JL 0x0047867c                       ; 00478666
        ;   XREF to: 0047867c (CONDITIONAL_JUMP)  ; LAB_0047867c
    PUSH 0x5da917                       ; 00478668 | = "blockVirtualDirectorFlag"
    LEA EDI,[EBX + 0x9d0]               ; 0047866d
    PUSH EDI                            ; 00478673
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00478674
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00478679
    CMP dword ptr [0x006124f4],0x8      ; 0047867c | g_CDoorClassVersion
        ;   Label: LAB_0047867c
    JL 0x00478699                       ; 00478683
        ;   XREF to: 00478699 (CONDITIONAL_JUMP)  ; LAB_00478699
    PUSH 0x5da930                       ; 00478685 | = "plotAsBoxInShadow"
    LEA EDI,[EBX + 0x9d4]               ; 0047868a
    PUSH EDI                            ; 00478690
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00478691
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00478696
    CMP dword ptr [0x006124f4],0x9      ; 00478699 | g_CDoorClassVersion
        ;   Label: LAB_00478699
    JL 0x004786b6                       ; 004786a0
        ;   XREF to: 004786b6 (CONDITIONAL_JUMP)  ; LAB_004786b6
    PUSH 0x5da942                       ; 004786a2 | = "allowedSides"
    LEA EDI,[EBX + 0x9d8]               ; 004786a7
    PUSH EDI                            ; 004786ad
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004786ae
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004786b3
    CMP dword ptr [0x006124f4],0xa      ; 004786b6 | g_CDoorClassVersion
        ;   Label: LAB_004786b6
    JL 0x004786d3                       ; 004786bd
        ;   XREF to: 004786d3 (CONDITIONAL_JUMP)  ; LAB_004786d3
    PUSH 0x5da94f                       ; 004786bf | = "allowBulletHoles"
    LEA EDI,[EBX + 0x9dc]               ; 004786c4
    PUSH EDI                            ; 004786ca
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004786cb
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004786d0
    CMP dword ptr [0x006124f4],0xb      ; 004786d3 | g_CDoorClassVersion
        ;   Label: LAB_004786d3
    JL 0x004786f0                       ; 004786da
        ;   XREF to: 004786f0 (CONDITIONAL_JUMP)  ; LAB_004786f0
    PUSH 0x5da960                       ; 004786dc | = "lockedSound"
    LEA EDI,[EBX + 0x92c]               ; 004786e1
    PUSH EDI                            ; 004786e7
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004786e8
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004786ed
    CMP dword ptr [0x006124f4],0xc      ; 004786f0 | g_CDoorClassVersion
        ;   Label: LAB_004786f0
    JL 0x00478721                       ; 004786f7
        ;   XREF to: 00478721 (CONDITIONAL_JUMP)  ; LAB_00478721
    PUSH 0x5da96c                       ; 004786f9 | = "shakeMeEvent"
    LEA EDI,[EBX + 0x9e4]               ; 004786fe
    PUSH EDI                            ; 00478704
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00478705
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0047870a
    PUSH 0x5da979                       ; 0047870d | = "shakeMeStrength"
    LEA EDI,[EBX + 0x9e0]               ; 00478712
    PUSH EDI                            ; 00478718
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00478719
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0047871e
    CMP dword ptr [0x006124f4],0xd      ; 00478721 | g_CDoorClassVersion
        ;   Label: LAB_00478721
    JGE 0x004787b6                      ; 00478728
        ;   XREF to: 004787b6 (CONDITIONAL_JUMP)  ; LAB_004787b6
    POP EDI                             ; 0047872e
    POP EBX                             ; 0047872f
    RET                                 ; 00478730
    PUSH 0x5da8b5                       ; 00478731 | = "groundType"
        ;   Label: LAB_00478731
    LEA EDI,[EBX + 0x2d4]               ; 00478736
    PUSH EDI                            ; 0047873c
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0047873d
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00478742
    JMP 0x004785ee                      ; 00478745
        ;   XREF to: 004785ee (UNCONDITIONAL_JUMP)  ; LAB_004785ee
    CMP EDI,0x5                         ; 0047874a
        ;   Label: LAB_0047874a
    JL 0x0047865f                       ; 0047874d
        ;   XREF to: 0047865f (CONDITIONAL_JUMP)  ; LAB_0047865f
    PUSH 0x5da902                       ; 00478753 | = "scriptOpenEvent"
    LEA EDI,[EBX + 0x670]               ; 00478758
    PUSH EDI                            ; 0047875e
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0047875f
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    MOV AH,byte ptr [EBX + 0x670]       ; 00478764
    ADD ESP,0x8                         ; 0047876a
    TEST AH,AH                          ; 0047876d
    JNZ 0x00478780                      ; 0047876f
        ;   XREF to: 00478780 (CONDITIONAL_JUMP)  ; LAB_00478780
    MOV dword ptr [EBX + 0x478],0x0     ; 00478771
    JMP 0x0047865f                      ; 0047877b
        ;   XREF to: 0047865f (UNCONDITIONAL_JUMP)  ; LAB_0047865f
    PUSH ESI                            ; 00478780
        ;   Label: LAB_00478780
    MOV ESI,0x5da912                    ; 00478781 | DAT_005da912
    LEA EDI,[EBX + 0x47c]               ; 00478786
    PUSH EDI                            ; 0047878c
    MOV AL,byte ptr [ESI]               ; 0047878d | DAT_005da912 | DAT_005da914
        ;   Label: LAB_0047878d
    MOV byte ptr [EDI],AL               ; 0047878f
    CMP AL,0x0                          ; 00478791
    JZ 0x004787a5                       ; 00478793
        ;   XREF to: 004787a5 (CONDITIONAL_JUMP)  ; LAB_004787a5
    MOV AL,byte ptr [ESI + 0x1]         ; 00478795 | DAT_005da913 | DAT_005da915
    ADD ESI,0x2                         ; 00478798
    MOV byte ptr [EDI + 0x1],AL         ; 0047879b
    ADD EDI,0x2                         ; 0047879e
    CMP AL,0x0                          ; 004787a1
    JNZ 0x0047878d                      ; 004787a3
        ;   XREF to: 0047878d (CONDITIONAL_JUMP)  ; LAB_0047878d
    POP EDI                             ; 004787a5
        ;   Label: LAB_004787a5
    MOV dword ptr [EBX + 0x478],0x1     ; 004787a6
    POP ESI                             ; 004787b0
    JMP 0x0047865f                      ; 004787b1
        ;   XREF to: 0047865f (UNCONDITIONAL_JUMP)  ; LAB_0047865f
    PUSH 0x5da989                       ; 004787b6 | = "handleVertexIndex"
        ;   Label: LAB_004787b6
    ADD EBX,0xa48                       ; 004787bb
    PUSH EBX                            ; 004787c1
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004787c2
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004787c7
    POP EDI                             ; 004787ca
    POP EBX                             ; 004787cb
    RET                                 ; 004787cc


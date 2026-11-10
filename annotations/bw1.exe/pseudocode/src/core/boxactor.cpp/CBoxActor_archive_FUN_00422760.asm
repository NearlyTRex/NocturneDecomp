; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_archive_FUN_00422760(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_boxactor.cpp_CLightActor_archive_FUN_004231e0 at 004231ea
;   core_stone.cpp_CTempleStone_archive_FUN_00584ee0 at 00584ee5
;
; Referenced Globals:
;   undefined4 s_L_modelName_005d4c1a+2
;   TerminatedCString s_weightInPounds_005d4c26
;   undefined4 DAT_005d4c35
;   undefined4 DAT_005d4c39
;   TerminatedCString s_loopWavName_005d4c3d
;   TerminatedCString s_collisionWavName_005d4c49
;   TerminatedCString s_canBeCarried_005d4c5a
;   TerminatedCString s_pickupType_005d4c67
;   TerminatedCString s_carriedByActor_005d4c72
;   TerminatedCString s_canBePushed_005d4c81
;   TerminatedCString s_pushedByActor_005d4c8d
;   TerminatedCString s_groundType_005d4c9b
;   TerminatedCString s_simBox_005d4ca6
;   TerminatedCString s_plotInShadowFlag_005d4cad
;   TerminatedCString s_collisionFlag_005d4cbe
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveBox_FUN_0040bbf0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_archiveOrientation_FUN_0040b260
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422760
        ;   Label: core_boxactor.cpp_CBoxActor_archive_FUN_00422760
    PUSH ESI                            ; 00422761
    SUB ESP,0x104                       ; 00422762
    MOV EBX,dword ptr [ESP + 0x110]     ; 00422768
    PUSH EBX                            ; 0042276f
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 00422770
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00422775
    PUSH 0x5d4c1c                       ; 00422778 | s_L_modelName_005d4c1a+2
    LEA EAX,[EBX + 0x158]               ; 0042277d
    PUSH EAX                            ; 00422783
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 00422784
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770()
    ADD ESP,0x8                         ; 00422789
    PUSH 0x5d4c26                       ; 0042278c | = "weightInPounds"
    LEA EAX,[EBX + 0x390]               ; 00422791
    PUSH EAX                            ; 00422797
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00422798
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0042279d
    PUSH 0x5d4c35                       ; 004227a0 | DAT_005d4c35
    LEA EAX,[EBX + 0x30c]               ; 004227a5
    PUSH EAX                            ; 004227ab
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004227ac
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004227b1
    PUSH 0x5d4c39                       ; 004227b4 | DAT_005d4c39
    LEA EAX,[EBX + 0x300]               ; 004227b9
    PUSH EAX                            ; 004227bf
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 004227c0
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 004227c5
    PUSH 0x5d4c3d                       ; 004227c8 | = "loopWavName"
    LEA EAX,[EBX + 0x2d4]               ; 004227cd
    PUSH EAX                            ; 004227d3
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004227d4
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004227d9
    PUSH 0x5d4c49                       ; 004227dc | = "collisionWavName"
    LEA EAX,[EBX + 0x2e8]               ; 004227e1
    PUSH EAX                            ; 004227e7
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 004227e8
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    MOV EDX,dword ptr [0x00610b5c]      ; 004227ed | g_CBoxActorClassVersion
    ADD ESP,0x8                         ; 004227f3
    CMP EDX,0x7                         ; 004227f6
    JL 0x004229c9                       ; 004227f9
        ;   XREF to: 004229c9 (CONDITIONAL_JUMP)  ; LAB_004229c9
    PUSH 0x5d4c67                       ; 004227ff | = "pickupType"
    LEA EAX,[EBX + 0x314]               ; 00422804
    PUSH EAX                            ; 0042280a
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042280b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422810
    PUSH 0x5d4c72                       ; 00422813 | = "carriedByActor"
        ;   Label: LAB_00422813
    LEA EAX,[EBX + 0x318]               ; 00422818
    PUSH EAX                            ; 0042281e
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0042281f
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    MOV ESI,dword ptr [0x00610b5c]      ; 00422824 | g_CBoxActorClassVersion
    ADD ESP,0x8                         ; 0042282a
    CMP ESI,0x2                         ; 0042282d
    JL 0x0042285a                       ; 00422830
        ;   XREF to: 0042285a (CONDITIONAL_JUMP)  ; LAB_0042285a
    PUSH 0x5d4c81                       ; 00422832 | = "canBePushed"
    LEA EAX,[EBX + 0x31c]               ; 00422837
    PUSH EAX                            ; 0042283d
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042283e
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422843
    PUSH 0x5d4c8d                       ; 00422846 | = "pushedByActor"
    LEA EAX,[EBX + 0x320]               ; 0042284b
    PUSH EAX                            ; 00422851
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 00422852
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 00422857
    CMP dword ptr [0x00610b5c],0x3      ; 0042285a | g_CBoxActorClassVersion
        ;   Label: LAB_0042285a
    JL 0x00422877                       ; 00422861
        ;   XREF to: 00422877 (CONDITIONAL_JUMP)  ; LAB_00422877
    PUSH 0x5d4c9b                       ; 00422863 | = "groundType"
    LEA EAX,[EBX + 0x5f0]               ; 00422868
    PUSH EAX                            ; 0042286e
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0042286f
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422874
    CMP dword ptr [0x00610b5c],0x4      ; 00422877 | g_CBoxActorClassVersion
        ;   Label: LAB_00422877
    JL 0x00422a03                       ; 0042287e
        ;   XREF to: 00422a03 (CONDITIONAL_JUMP)  ; LAB_00422a03
    PUSH 0x5d4ca6                       ; 00422884 | = "simBox"
    LEA EAX,[EBX + 0x394]               ; 00422889
    PUSH EAX                            ; 0042288f
    CALL core_actor.cpp_archiveBox_FUN_0040bbf0 ; 00422890
        ;   XREF to: 0040bbf0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveBox_FUN_0040bbf0(CBox * box_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422895
    CMP dword ptr [0x00610b5c],0x5      ; 00422898 | g_CBoxActorClassVersion
        ;   Label: LAB_00422898
    JL 0x00422a12                       ; 0042289f
        ;   XREF to: 00422a12 (CONDITIONAL_JUMP)  ; LAB_00422a12
    PUSH 0x5d4cad                       ; 004228a5 | = "plotInShadowFlag"
    LEA EAX,[EBX + 0x5f4]               ; 004228aa
    PUSH EAX                            ; 004228b0
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004228b1
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004228b6
    CMP dword ptr [0x00610b5c],0x6      ; 004228b9 | g_CBoxActorClassVersion
        ;   Label: LAB_004228b9
    JL 0x00422a21                       ; 004228c0
        ;   XREF to: 00422a21 (CONDITIONAL_JUMP)  ; LAB_00422a21
    PUSH 0x5d4cbe                       ; 004228c6 | = "collisionFlag"
    LEA EAX,[EBX + 0x5f8]               ; 004228cb
    PUSH EAX                            ; 004228d1
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004228d2
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004228d7
    CMP dword ptr [0x00610b5c],0x8      ; 004228da | g_CBoxActorClassVersion
        ;   Label: LAB_004228da
    JL 0x0042290b                       ; 004228e1
        ;   XREF to: 0042290b (CONDITIONAL_JUMP)  ; LAB_0042290b
    PUSH 0x5d4ccc                       ; 004228e3 | = "isTransparent"
    LEA EAX,[EBX + 0xfc]                ; 004228e8
    PUSH EAX                            ; 004228ee
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004228ef
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004228f4
    PUSH 0x5d4cda                       ; 004228f7 | = "dontUseNormals"
    LEA EAX,[EBX + 0x5fc]               ; 004228fc
    PUSH EAX                            ; 00422902
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00422903
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422908
    CMP dword ptr [0x00610b5c],0x9      ; 0042290b | g_CBoxActorClassVersion
        ;   Label: LAB_0042290b
    JNZ 0x00422926                      ; 00422912
        ;   XREF to: 00422926 (CONDITIONAL_JUMP)  ; LAB_00422926
    PUSH 0x5d4ce9                       ; 00422914 | = "descriptiveName"
    LEA EAX,[ESP + 0x4]                 ; 00422919
    PUSH EAX                            ; 0042291d
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0042291e
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00422923
    CMP dword ptr [0x00610b5c],0xb      ; 00422926 | g_CBoxActorClassVersion
        ;   Label: LAB_00422926
    JL 0x00422943                       ; 0042292d
        ;   XREF to: 00422943 (CONDITIONAL_JUMP)  ; LAB_00422943
    PUSH 0x5d4cf9                       ; 0042292f | = "constrainExtentsActor"
    LEA EAX,[EBX + 0x324]               ; 00422934
    PUSH EAX                            ; 0042293a
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0042293b
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 00422940
    CMP dword ptr [0x00610b5c],0xc      ; 00422943 | g_CBoxActorClassVersion
        ;   Label: LAB_00422943
    JL 0x00422960                       ; 0042294a
        ;   XREF to: 00422960 (CONDITIONAL_JUMP)  ; LAB_00422960
    PUSH 0x5d4d0f                       ; 0042294c | = "useEvent"
    LEA EAX,[EBX + 0x600]               ; 00422951
    PUSH EAX                            ; 00422957
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00422958
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0042295d
    CMP dword ptr [0x00610b5c],0xd      ; 00422960 | g_CBoxActorClassVersion
        ;   Label: LAB_00422960
    JL 0x0042297d                       ; 00422967
        ;   XREF to: 0042297d (CONDITIONAL_JUMP)  ; LAB_0042297d
    PUSH 0x5d4d18                       ; 00422969 | = "allowedMeleeAttackTypes"
    LEA EAX,[EBX + 0x664]               ; 0042296e
    PUSH EAX                            ; 00422974
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00422975
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0042297a
    CMP dword ptr [0x00610b5c],0xe      ; 0042297d | g_CBoxActorClassVersion
        ;   Label: LAB_0042297d
    JL 0x0042299a                       ; 00422984
        ;   XREF to: 0042299a (CONDITIONAL_JUMP)  ; LAB_0042299a
    PUSH 0x5d4d30                       ; 00422986 | = "pushSound"
    LEA EAX,[EBX + 0x32c]               ; 0042298b
    PUSH EAX                            ; 00422991
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00422992
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00422997
    CMP dword ptr [0x00610b5c],0xf      ; 0042299a | g_CBoxActorClassVersion
        ;   Label: LAB_0042299a
    JL 0x004229b7                       ; 004229a1
        ;   XREF to: 004229b7 (CONDITIONAL_JUMP)  ; LAB_004229b7
    PUSH 0x5d4d3a                       ; 004229a3 | = "blockVirtualDirectorFlag"
    LEA EAX,[EBX + 0x668]               ; 004229a8
    PUSH EAX                            ; 004229ae
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004229af
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004229b4
    CMP dword ptr [0x00610b5c],0x10     ; 004229b7 | g_CBoxActorClassVersion
        ;   Label: LAB_004229b7
    JGE 0x00422a30                      ; 004229be
        ;   XREF to: 00422a30 (CONDITIONAL_JUMP)  ; LAB_00422a30
    ADD ESP,0x104                       ; 004229c0
    POP ESI                             ; 004229c6
    POP EBX                             ; 004229c7
    RET                                 ; 004229c8
    PUSH 0x5d4c5a                       ; 004229c9 | = "canBeCarried"
        ;   Label: LAB_004229c9
    LEA EAX,[ESP + 0x104]               ; 004229ce
    PUSH EAX                            ; 004229d5
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004229d6
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004229db
    MOV ECX,dword ptr [ESP + 0x100]     ; 004229de
    TEST ECX,ECX                        ; 004229e5
    JZ 0x004229f8                       ; 004229e7
        ;   XREF to: 004229f8 (CONDITIONAL_JUMP)  ; LAB_004229f8
    MOV dword ptr [EBX + 0x314],0x3     ; 004229e9
    JMP 0x00422813                      ; 004229f3
        ;   XREF to: 00422813 (UNCONDITIONAL_JUMP)  ; LAB_00422813
    MOV dword ptr [EBX + 0x314],ECX     ; 004229f8
        ;   Label: LAB_004229f8
    JMP 0x00422813                      ; 004229fe
        ;   XREF to: 00422813 (UNCONDITIONAL_JUMP)  ; LAB_00422813
    MOV dword ptr [EBX + 0x5e8],0xffffffff ; 00422a03
        ;   Label: LAB_00422a03
    JMP 0x00422898                      ; 00422a0d
        ;   XREF to: 00422898 (UNCONDITIONAL_JUMP)  ; LAB_00422898
    MOV dword ptr [EBX + 0x5f4],0x1     ; 00422a12
        ;   Label: LAB_00422a12
    JMP 0x004228b9                      ; 00422a1c
        ;   XREF to: 004228b9 (UNCONDITIONAL_JUMP)  ; LAB_004228b9
    MOV dword ptr [EBX + 0x5f8],0x1     ; 00422a21
        ;   Label: LAB_00422a21
    JMP 0x004228da                      ; 00422a2b
        ;   XREF to: 004228da (UNCONDITIONAL_JUMP)  ; LAB_004228da
    PUSH 0x5d4d53                       ; 00422a30 | = "camOrient"
        ;   Label: LAB_00422a30
    ADD EBX,0x66c                       ; 00422a35
    PUSH EBX                            ; 00422a3b
    CALL core_actor.cpp_archiveOrientation_FUN_0040b260 ; 00422a3c
        ;   XREF to: 0040b260 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveOrientation_FUN_0040b260()
    ADD ESP,0x8                         ; 00422a41
    ADD ESP,0x104                       ; 00422a44
    POP ESI                             ; 00422a4a
    POP EBX                             ; 00422a4b
    RET                                 ; 00422a4c


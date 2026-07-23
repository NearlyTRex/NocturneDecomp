; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lever_cpp_CLever_archive_FUN_004c66f0(int param_1)
;
; Local Variables:
; undefined1       Stack[-0xd4]:1  local_d4
; undefined1       Stack[-0xd3]:1  local_d3
;
; Referenced Globals:
;   TerminatedCString s_modelName_00587945
;   TerminatedCString s_modelName_0058794f
;   TerminatedCString s_leverType_00587959
;   TerminatedCString s_onEvent_00587963
;   TerminatedCString s_offEvent_0058796b
;   TerminatedCString s_sound_00587974
;   TerminatedCString s_param_0058797a
;   TerminatedCString s_momentaryFlag_00587980
;   TerminatedCString s_linkedLever_0058798e
;   TerminatedCString s_endVertexIndex_0058799a
;   TerminatedCString s_moving_005879a9
;   TerminatedCString s_moveToPct_005879b0
;   TerminatedCString s_rules_005879ba
;   TerminatedCString s_allowedSides_005879c0
;   TerminatedCString s_enableCollision_005879cd
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveRules_FUN_0040d110
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c66f0
        ;   Label: core_lever.cpp_CLever_archive_FUN_004c66f0
    PUSH ESI                            ; 004c66f1
    PUSH EDI                            ; 004c66f2
    SUB ESP,0xc8                        ; 004c66f3
    MOV EBX,dword ptr [ESP + 0xd8]      ; 004c66f9
    PUSH EBX                            ; 004c6700
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004c6701
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    MOV EDX,dword ptr [0x00763e88]      ; 004c6706 | DAT_00763e88
    ADD ESP,0x4                         ; 004c670c
    LEA EDI,[EBX + 0x150]               ; 004c670f
    CMP EDX,0x1                         ; 004c6715
    JZ 0x004c688d                       ; 004c6718
        ;   XREF to: 004c688d (CONDITIONAL_JUMP)  ; LAB_004c688d
    MOV EDI,ESP                         ; 004c671e
    LEA ESI,[EBX + 0x1c8]               ; 004c6720
    PUSH EDI                            ; 004c6726
    MOV AL,byte ptr [ESI]               ; 004c6727
        ;   Label: LAB_004c6727
    MOV byte ptr [EDI],AL               ; 004c6729
    CMP AL,0x0                          ; 004c672b
    JZ 0x004c673f                       ; 004c672d
        ;   XREF to: 004c673f (CONDITIONAL_JUMP)  ; LAB_004c673f
    MOV AL,byte ptr [ESI + 0x1]         ; 004c672f
    ADD ESI,0x2                         ; 004c6732
    MOV byte ptr [EDI + 0x1],AL         ; 004c6735
    ADD EDI,0x2                         ; 004c6738
    CMP AL,0x0                          ; 004c673b
    JNZ 0x004c6727                      ; 004c673d
        ;   XREF to: 004c6727 (CONDITIONAL_JUMP)  ; LAB_004c6727
    POP EDI                             ; 004c673f
        ;   Label: LAB_004c673f
    PUSH 0x58794f                       ; 004c6740 | = "modelName"
    LEA ESI,[ESP + 0x4]                 ; 004c6745
    PUSH ESI                            ; 004c6749
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004c674a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004c674f
        ;   Label: LAB_004c674f
    PUSH 0x587959                       ; 004c6752 | = "leverType"
    LEA ESI,[EBX + 0x2d0]               ; 004c6757
    PUSH ESI                            ; 004c675d
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004c675e
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004c6763
    PUSH 0x587963                       ; 004c6766 | = "onEvent"
    LEA ESI,[EBX + 0x2d8]               ; 004c676b
    PUSH ESI                            ; 004c6771
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004c6772
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004c6777
    PUSH 0x58796b                       ; 004c677a | = "offEvent"
    LEA ESI,[EBX + 0x33c]               ; 004c677f
    PUSH ESI                            ; 004c6785
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004c6786
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004c678b
    PUSH 0x587974                       ; 004c678e | = "sound"
    LEA ESI,[EBX + 0x3a0]               ; 004c6793
    PUSH ESI                            ; 004c6799
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004c679a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004c679f
    PUSH 0x58797a                       ; 004c67a2 | = "param"
    LEA ESI,[EBX + 0x2d4]               ; 004c67a7
    PUSH ESI                            ; 004c67ad
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004c67ae
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    MOV ECX,dword ptr [0x005bacbc]      ; 004c67b3 | DAT_005bacbc
    ADD ESP,0x8                         ; 004c67b9
    CMP ECX,0x2                         ; 004c67bc
    JL 0x004c67d5                       ; 004c67bf
        ;   XREF to: 004c67d5 (CONDITIONAL_JUMP)  ; LAB_004c67d5
    PUSH 0x587980                       ; 004c67c1 | = "momentaryFlag"
    LEA ESI,[EBX + 0x404]               ; 004c67c6
    PUSH ESI                            ; 004c67cc
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004c67cd
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004c67d2
    CMP dword ptr [0x005bacbc],0x3      ; 004c67d5 | DAT_005bacbc
        ;   Label: LAB_004c67d5
    JL 0x004c67f2                       ; 004c67dc
        ;   XREF to: 004c67f2 (CONDITIONAL_JUMP)  ; LAB_004c67f2
    PUSH 0x58798e                       ; 004c67de | = "linkedLever"
    LEA ESI,[EBX + 0x408]               ; 004c67e3
    PUSH ESI                            ; 004c67e9
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 004c67ea
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 004c67ef
    CMP dword ptr [0x005bacbc],0x4      ; 004c67f2 | DAT_005bacbc
        ;   Label: LAB_004c67f2
    JL 0x004c680f                       ; 004c67f9
        ;   XREF to: 004c680f (CONDITIONAL_JUMP)  ; LAB_004c680f
    PUSH 0x58799a                       ; 004c67fb | = "endVertexIndex"
    LEA ESI,[EBX + 0x40c]               ; 004c6800
    PUSH ESI                            ; 004c6806
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004c6807
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004c680c
    CMP dword ptr [0x005bacbc],0x5      ; 004c680f | DAT_005bacbc
        ;   Label: LAB_004c680f
    JL 0x004c6840                       ; 004c6816
        ;   XREF to: 004c6840 (CONDITIONAL_JUMP)  ; LAB_004c6840
    PUSH 0x5879a9                       ; 004c6818 | = "moving"
    LEA ESI,[EBX + 0x410]               ; 004c681d
    PUSH ESI                            ; 004c6823
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004c6824
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004c6829
    PUSH 0x5879b0                       ; 004c682c | = "moveToPct"
    LEA ESI,[EBX + 0x414]               ; 004c6831
    PUSH ESI                            ; 004c6837
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004c6838
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004c683d
    CMP dword ptr [0x005bacbc],0x6      ; 004c6840 | DAT_005bacbc
        ;   Label: LAB_004c6840
    JL 0x004c685d                       ; 004c6847
        ;   XREF to: 004c685d (CONDITIONAL_JUMP)  ; LAB_004c685d
    PUSH 0x5879ba                       ; 004c6849 | = "rules"
    LEA ESI,[EBX + 0x418]               ; 004c684e
    PUSH ESI                            ; 004c6854
    CALL core_actor.cpp_archiveRules_FUN_0040d110 ; 004c6855
        ;   XREF to: 0040d110 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveRules_FUN_0040d110()
    ADD ESP,0x8                         ; 004c685a
    CMP dword ptr [0x005bacbc],0x7      ; 004c685d | DAT_005bacbc
        ;   Label: LAB_004c685d
    JL 0x004c687a                       ; 004c6864
        ;   XREF to: 004c687a (CONDITIONAL_JUMP)  ; LAB_004c687a
    PUSH 0x5879c0                       ; 004c6866 | = "allowedSides"
    LEA ESI,[EBX + 0x804]               ; 004c686b
    PUSH ESI                            ; 004c6871
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004c6872
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004c6877
    CMP dword ptr [0x005bacbc],0x8      ; 004c687a | DAT_005bacbc
        ;   Label: LAB_004c687a
    JGE 0x004c68ad                      ; 004c6881
        ;   XREF to: 004c68ad (CONDITIONAL_JUMP)  ; LAB_004c68ad
    ADD ESP,0xc8                        ; 004c6883
    POP EDI                             ; 004c6889
    POP ESI                             ; 004c688a
    POP EBX                             ; 004c688b
    RET                                 ; 004c688c
    PUSH 0x587945                       ; 004c688d | = "modelName"
        ;   Label: LAB_004c688d
    LEA ESI,[ESP + 0x4]                 ; 004c6892
    PUSH ESI                            ; 004c6896
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004c6897
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004c689c
    MOV ESI,ESP                         ; 004c689f
    PUSH ESI                            ; 004c68a1
    PUSH EDI                            ; 004c68a2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004c68a3
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    JMP 0x004c674f                      ; 004c68a8
        ;   XREF to: 004c674f (UNCONDITIONAL_JUMP)  ; LAB_004c674f
    PUSH 0x5879cd                       ; 004c68ad | = "enableCollision"
        ;   Label: LAB_004c68ad
    ADD EBX,0x808                       ; 004c68b2
    PUSH EBX                            ; 004c68b8
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004c68b9
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004c68be
    ADD ESP,0xc8                        ; 004c68c1
    POP EDI                             ; 004c68c7
    POP ESI                             ; 004c68c8
    POP EBX                             ; 004c68c9
    RET                                 ; 004c68ca


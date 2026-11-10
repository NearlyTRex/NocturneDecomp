; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_prye_cpp_CPrye_archive_FUN_00521f40(CPrye *this_ptr)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_objectToPickUp_005cd5d6+1
;   TerminatedCString s_doorToOpen_005cd5e6
;   TerminatedCString s_leverToPull_005cd5f1
;   TerminatedCString s_ladderToClimb_005cd5fd
;   TerminatedCString s_lhCarryObject_005cd60b
;   TerminatedCString s_rhCarryObject_005cd619
;   TerminatedCString s_ladderToDescend_005cd627
;   TerminatedCString s_gunsDrawn_005cd637
;   TerminatedCString s_weapon_005cd641
;   TerminatedCString s_actionPending_005cd648
;   TerminatedCString s_layerActionIndex_005cd656
;   TerminatedCString s_layerActionT_005cd667
;   int g_CPryeClassVersion = 0x1
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_hero.cpp_CHero_archive_FUN_004d27b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521f40
        ;   Label: core_prye.cpp_CPrye_archive_FUN_00521f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00521f41
    PUSH EBX                            ; 00521f45
    CALL core_hero.cpp_CHero_archive_FUN_004d27b0 ; 00521f46
        ;   XREF to: 004d27b0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004d27b0(CHero * this_ptr)
    MOV EDX,dword ptr [0x00603978]      ; 00521f4b | g_CPryeClassVersion
    ADD ESP,0x4                         ; 00521f51
    CMP EDX,0x2                         ; 00521f54
    JL 0x00521fae                       ; 00521f57
        ;   XREF to: 00521fae (CONDITIONAL_JUMP)  ; LAB_00521fae
    CMP EDX,0x4                         ; 00521f59
    JG 0x00521fae                       ; 00521f5c
        ;   XREF to: 00521fae (CONDITIONAL_JUMP)  ; LAB_00521fae
    PUSH 0x5cd5d7                       ; 00521f5e | s_objectToPickUp_005cd5d6+1
    LEA EAX,[EBX + 0x20b98]             ; 00521f63
    PUSH EAX                            ; 00521f69
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00521f6a
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00521f6f
    PUSH 0x5cd5e6                       ; 00521f72 | = "doorToOpen"
    LEA EAX,[EBX + 0x20b94]             ; 00521f77
    PUSH EAX                            ; 00521f7d
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00521f7e
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00521f83
    PUSH 0x5cd5f1                       ; 00521f86 | = "leverToPull"
    LEA EAX,[EBX + 0x20ba0]             ; 00521f8b
    PUSH EAX                            ; 00521f91
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00521f92
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00521f97
    PUSH 0x5cd5fd                       ; 00521f9a | = "ladderToClimb"
    LEA EAX,[EBX + 0x20ba4]             ; 00521f9f
    PUSH EAX                            ; 00521fa5
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00521fa6
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00521fab
    CMP dword ptr [0x00603978],0x2      ; 00521fae | g_CPryeClassVersion
        ;   Label: LAB_00521fae
    JNZ 0x00521fdf                      ; 00521fb5
        ;   XREF to: 00521fdf (CONDITIONAL_JUMP)  ; LAB_00521fdf
    PUSH 0x5cd60b                       ; 00521fb7 | = "lhCarryObject"
    LEA EAX,[EBX + 0x25b0]              ; 00521fbc
    PUSH EAX                            ; 00521fc2
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00521fc3
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00521fc8
    PUSH 0x5cd619                       ; 00521fcb | = "rhCarryObject"
    LEA EAX,[EBX + 0x2628]              ; 00521fd0
    PUSH EAX                            ; 00521fd6
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00521fd7
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00521fdc
    CMP dword ptr [0x00603978],0x4      ; 00521fdf | g_CPryeClassVersion
        ;   Label: LAB_00521fdf
    JL 0x00521ffc                       ; 00521fe6
        ;   XREF to: 00521ffc (CONDITIONAL_JUMP)  ; LAB_00521ffc
    PUSH 0x5cd627                       ; 00521fe8 | = "ladderToDescend"
    LEA EAX,[EBX + 0x20c20]             ; 00521fed
    PUSH EAX                            ; 00521ff3
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00521ff4
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00521ff9
    CMP dword ptr [0x00603978],0x6      ; 00521ffc | g_CPryeClassVersion
        ;   Label: LAB_00521ffc
    JL 0x00522019                       ; 00522003
        ;   XREF to: 00522019 (CONDITIONAL_JUMP)  ; LAB_00522019
    PUSH 0x5cd637                       ; 00522005 | = "gunsDrawn"
    LEA EAX,[EBX + 0x20bcc]             ; 0052200a
    PUSH EAX                            ; 00522010
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00522011
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00522016
    CMP dword ptr [0x00603978],0x7      ; 00522019 | g_CPryeClassVersion
        ;   Label: LAB_00522019
    JL 0x00522036                       ; 00522020
        ;   XREF to: 00522036 (CONDITIONAL_JUMP)  ; LAB_00522036
    PUSH 0x5cd641                       ; 00522022 | = "weapon"
    LEA EAX,[EBX + 0x20c24]             ; 00522027
    PUSH EAX                            ; 0052202d
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 0052202e
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00522033
    CMP dword ptr [0x00603978],0x8      ; 00522036 | g_CPryeClassVersion
        ;   Label: LAB_00522036
    JL 0x00522053                       ; 0052203d
        ;   XREF to: 00522053 (CONDITIONAL_JUMP)  ; LAB_00522053
    PUSH 0x5cd648                       ; 0052203f | = "actionPending"
    LEA EAX,[EBX + 0x20b64]             ; 00522044
    PUSH EAX                            ; 0052204a
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0052204b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00522050
    CMP dword ptr [0x00603978],0x9      ; 00522053 | g_CPryeClassVersion
        ;   Label: LAB_00522053
    JGE 0x0052205e                      ; 0052205a
        ;   XREF to: 0052205e (CONDITIONAL_JUMP)  ; LAB_0052205e
    POP EBX                             ; 0052205c
    RET                                 ; 0052205d
    PUSH 0x5cd656                       ; 0052205e | = "layerActionIndex"
        ;   Label: LAB_0052205e
    LEA EAX,[EBX + 0x2f00]              ; 00522063
    PUSH EAX                            ; 00522069
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0052206a
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0052206f
    PUSH 0x5cd667                       ; 00522072 | = "layerActionT"
    ADD EBX,0x2f04                      ; 00522077
    PUSH EBX                            ; 0052207d
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0052207e
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00522083
    POP EBX                             ; 00522086
    RET                                 ; 00522087


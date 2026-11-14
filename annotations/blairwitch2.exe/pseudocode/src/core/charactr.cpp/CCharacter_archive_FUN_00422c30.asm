; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_archive_FUN_00422c30(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0 at 00487f31
;   core_hero.cpp_CHero_archive_FUN_004ce590 at 004ce634
;   core_npc.cpp_CNPC_archive_FUN_005109e0 at 005109f4
;
; Referenced Globals:
;   TerminatedCString s_hitPoints_005ccb28
;   TerminatedCString s_numCarryHands_005ccb32
;   TerminatedCString s_carry_hand_005ccb40
;   TerminatedCString s_carry_actor_005ccb4b
;   TerminatedCString s_numCarryHands_005ccb57
;   TerminatedCString s_carry_hand_005ccb65
;   TerminatedCString s_carry_actor_005ccb70
;   TerminatedCString s_talkToMeEvent_005ccb7c
;   TerminatedCString s_grabbedBy_005ccb8a
;   TerminatedCString s_grabbedType_005ccb94
;   TerminatedCString s_clothList_005ccba0
;   TerminatedCString s_sizeScale_005ccbaa
;   TerminatedCString s_healthBarMode_005ccbb4
;   TerminatedCString s_descriptiveName_005ccbc2
;   TerminatedCString s_maxHitPoints_005ccbd2
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveClothList_FUN_0040bfd0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveLocalizedString_FUN_0040b850
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422c30
        ;   Label: core_charactr.cpp_CCharacter_archive_FUN_00422c30
    PUSH ESI                            ; 00422c31
    PUSH EDI                            ; 00422c32
    PUSH EBP                            ; 00422c33
    SUB ESP,0x10                        ; 00422c34
    MOV EBX,dword ptr [ESP + 0x24]      ; 00422c37
    PUSH EBX                            ; 00422c3b
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 00422c3c
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00422c41
    PUSH 0x5ccb28                       ; 00422c44 | = "hitPoints"
    LEA EAX,[EBX + 0x25a8]              ; 00422c49
    PUSH EAX                            ; 00422c4f
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00422c50
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x00609ab8]      ; 00422c55 | g_CCharacterClassVersion
    ADD ESP,0x8                         ; 00422c5b
    CMP EDX,0x2                         ; 00422c5e
    JL 0x00422ce0                       ; 00422c61
        ;   XREF to: 00422ce0 (CONDITIONAL_JUMP)  ; LAB_00422ce0
    CMP dword ptr [0x007bc038],0x1      ; 00422c67 | DAT_007bc038
    JZ 0x00422df7                       ; 00422c6e
        ;   XREF to: 00422df7 (CONDITIONAL_JUMP)  ; LAB_00422df7
    XOR ESI,ESI                         ; 00422c74
    MOV EAX,EBX                         ; 00422c76
    MOV dword ptr [ESP],ESI             ; 00422c78
    MOV dword ptr [ESP + 0xc],ESI       ; 00422c7b
    LEA ESI,[EBX + 0xf0]                ; 00422c7f
    CMP dword ptr [EAX + 0x2620],0x0    ; 00422c85
        ;   Label: LAB_00422c85
    JZ 0x00422c92                       ; 00422c8c
        ;   XREF to: 00422c92 (CONDITIONAL_JUMP)  ; LAB_00422c92
    INC dword ptr [ESP + 0xc]           ; 00422c8e
    ADD EAX,0x78                        ; 00422c92
        ;   Label: LAB_00422c92
    CMP EAX,ESI                         ; 00422c95
    JNZ 0x00422c85                      ; 00422c97
        ;   XREF to: 00422c85 (CONDITIONAL_JUMP)  ; LAB_00422c85
    PUSH 0x5ccb57                       ; 00422c99 | = "numCarryHands"
    LEA EAX,[ESP + 0x10]                ; 00422c9e
    MOV ESI,0x2                         ; 00422ca2
    PUSH EAX                            ; 00422ca7
    XOR EDI,EDI                         ; 00422ca8
    MOV dword ptr [ESP + 0x8],ESI       ; 00422caa
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00422cae
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422cb3
    LEA ESI,[EBX + 0x2618]              ; 00422cb6
    MOV dword ptr [ESP],EDI             ; 00422cbc
    IMUL EAX,dword ptr [ESP],0x78       ; 00422cbf
        ;   Label: LAB_00422cbf
    CMP dword ptr [EBX + EAX*0x1 + 0x2620],0x0 ; 00422cc3
    JNZ 0x00422e5e                      ; 00422ccb
        ;   XREF to: 00422e5e (CONDITIONAL_JUMP)  ; LAB_00422e5e
    MOV EDI,dword ptr [ESP]             ; 00422cd1
        ;   Label: LAB_00422cd1
    INC EDI                             ; 00422cd4
    MOV dword ptr [ESP],EDI             ; 00422cd5
    CMP EDI,0x2                         ; 00422cd8
    JL 0x00422cbf                       ; 00422cdb
        ;   XREF to: 00422cbf (CONDITIONAL_JUMP)  ; LAB_00422cbf
    LEA EAX,[EAX]                       ; 00422cdd
    CMP dword ptr [0x00609ab8],0x3      ; 00422ce0 | g_CCharacterClassVersion
        ;   Label: LAB_00422ce0
    JL 0x00422cfd                       ; 00422ce7
        ;   XREF to: 00422cfd (CONDITIONAL_JUMP)  ; LAB_00422cfd
    PUSH 0x5ccb7c                       ; 00422ce9 | = "talkToMeEvent"
    LEA EAX,[EBX + 0x2708]              ; 00422cee
    PUSH EAX                            ; 00422cf4
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00422cf5
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00422cfa
    CMP dword ptr [0x00609ab8],0x4      ; 00422cfd | g_CCharacterClassVersion
        ;   Label: LAB_00422cfd
    JL 0x00422d42                       ; 00422d04
        ;   XREF to: 00422d42 (CONDITIONAL_JUMP)  ; LAB_00422d42
    PUSH 0x5ccb8a                       ; 00422d06 | = "grabbedBy"
    LEA EAX,[EBX + 0x276c]              ; 00422d0b
    PUSH EAX                            ; 00422d11
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 00422d12
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422d17
    PUSH 0x5ccb94                       ; 00422d1a | = "grabbedType"
    LEA EAX,[EBX + 0x2770]              ; 00422d1f
    PUSH EAX                            ; 00422d25
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00422d26
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422d2b
    PUSH 0x5ccba0                       ; 00422d2e | = "clothList"
    LEA EAX,[EBX + 0x2d0c]              ; 00422d33
    PUSH EAX                            ; 00422d39
    CALL core_actor.cpp_archiveClothList_FUN_0040bfd0 ; 00422d3a
        ;   XREF to: 0040bfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveClothList_FUN_0040bfd0(CClothList * cloth_list, char * property_name)
    ADD ESP,0x8                         ; 00422d3f
    CMP dword ptr [0x00609ab8],0x5      ; 00422d42 | g_CCharacterClassVersion
        ;   Label: LAB_00422d42
    JL 0x00422d5f                       ; 00422d49
        ;   XREF to: 00422d5f (CONDITIONAL_JUMP)  ; LAB_00422d5f
    PUSH 0x5ccbaa                       ; 00422d4b | = "sizeScale"
    LEA EAX,[EBX + 0x2824]              ; 00422d50
    PUSH EAX                            ; 00422d56
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00422d57
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422d5c
    CMP dword ptr [0x00609ab8],0x6      ; 00422d5f | g_CCharacterClassVersion
        ;   Label: LAB_00422d5f
    JL 0x00422e8c                       ; 00422d66
        ;   XREF to: 00422e8c (CONDITIONAL_JUMP)  ; LAB_00422e8c
    PUSH 0x5ccbb4                       ; 00422d6c | = "healthBarMode"
    LEA EAX,[EBX + 0x25b0]              ; 00422d71
    PUSH EAX                            ; 00422d77
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00422d78
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422d7d
    PUSH 0x5ccbc2                       ; 00422d80 | = "descriptiveName"
    LEA EAX,[EBX + 0x25b4]              ; 00422d85
    PUSH EAX                            ; 00422d8b
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040b850 ; 00422d8c
        ;   XREF to: 0040b850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocalizedString_FUN_0040b850(char * string_buffer, char * localization_key)
    ADD ESP,0x8                         ; 00422d91
    PUSH 0x5ccbd2                       ; 00422d94 | = "maxHitPoints"
    LEA EAX,[EBX + 0x25ac]              ; 00422d99
    PUSH EAX                            ; 00422d9f
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00422da0
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422da5
    CMP dword ptr [0x00609ab8],0x7      ; 00422da8 | g_CCharacterClassVersion
        ;   Label: LAB_00422da8
    JL 0x00422dc5                       ; 00422daf
        ;   XREF to: 00422dc5 (CONDITIONAL_JUMP)  ; LAB_00422dc5
    PUSH 0x5ccbdf                       ; 00422db1 | = "spectralFlag"
    LEA EAX,[EBX + 0x2814]              ; 00422db6
    PUSH EAX                            ; 00422dbc
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00422dbd
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422dc2
    CMP dword ptr [0x00609ab8],0x8      ; 00422dc5 | g_CCharacterClassVersion
        ;   Label: LAB_00422dc5
    JL 0x00422de2                       ; 00422dcc
        ;   XREF to: 00422de2 (CONDITIONAL_JUMP)  ; LAB_00422de2
    PUSH 0x5ccbec                       ; 00422dce | = "invulnerableFlag"
    LEA EAX,[EBX + 0x281c]              ; 00422dd3
    PUSH EAX                            ; 00422dd9
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00422dda
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422ddf
    CMP dword ptr [0x00609ab8],0x9      ; 00422de2 | g_CCharacterClassVersion
        ;   Label: LAB_00422de2
    JGE 0x00422e9d                      ; 00422de9
        ;   XREF to: 00422e9d (CONDITIONAL_JUMP)  ; LAB_00422e9d
    ADD ESP,0x10                        ; 00422def
    POP EBP                             ; 00422df2
    POP EDI                             ; 00422df3
    POP ESI                             ; 00422df4
    POP EBX                             ; 00422df5
    RET                                 ; 00422df6
    PUSH 0x5ccb32                       ; 00422df7 | = "numCarryHands"
        ;   Label: LAB_00422df7
    LEA EAX,[ESP + 0x8]                 ; 00422dfc
    PUSH EAX                            ; 00422e00
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00422e01
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422e06
    XOR EBP,EBP                         ; 00422e09
    MOV EAX,dword ptr [ESP + 0x4]       ; 00422e0b
    MOV dword ptr [ESP],EBP             ; 00422e0f
    TEST EAX,EAX                        ; 00422e12
    JLE 0x00422ce0                      ; 00422e14
        ;   XREF to: 00422ce0 (CONDITIONAL_JUMP)  ; LAB_00422ce0
    LEA ESI,[EBX + 0x2618]              ; 00422e1a
    PUSH 0x5ccb40                       ; 00422e20 | = "carry hand"
        ;   Label: LAB_00422e20
    LEA EAX,[ESP + 0xc]                 ; 00422e25
    PUSH EAX                            ; 00422e29
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00422e2a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422e2f
    IMUL EAX,dword ptr [ESP + 0x8],0x78 ; 00422e32
    ADD EAX,ESI                         ; 00422e37
    PUSH 0x5ccb4b                       ; 00422e39 | = "carry actor"
    ADD EAX,0x8                         ; 00422e3e
    PUSH EAX                            ; 00422e41
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 00422e42
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422e47
    MOV ECX,dword ptr [ESP]             ; 00422e4a
    INC ECX                             ; 00422e4d
    MOV EDI,dword ptr [ESP + 0x4]       ; 00422e4e
    MOV dword ptr [ESP],ECX             ; 00422e52
    CMP ECX,EDI                         ; 00422e55
    JL 0x00422e20                       ; 00422e57
        ;   XREF to: 00422e20 (CONDITIONAL_JUMP)  ; LAB_00422e20
    JMP 0x00422ce0                      ; 00422e59
        ;   XREF to: 00422ce0 (UNCONDITIONAL_JUMP)  ; LAB_00422ce0
    PUSH 0x5ccb65                       ; 00422e5e | = "carry hand"
        ;   Label: LAB_00422e5e
    LEA EAX,[ESP + 0x4]                 ; 00422e63
    PUSH EAX                            ; 00422e67
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00422e68
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422e6d
    IMUL EAX,dword ptr [ESP],0x78       ; 00422e70
    ADD EAX,ESI                         ; 00422e74
    PUSH 0x5ccb70                       ; 00422e76 | = "carry actor"
    ADD EAX,0x8                         ; 00422e7b
    PUSH EAX                            ; 00422e7e
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 00422e7f
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422e84
    JMP 0x00422cd1                      ; 00422e87
        ;   XREF to: 00422cd1 (UNCONDITIONAL_JUMP)  ; LAB_00422cd1
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 00422e8c
        ;   Label: LAB_00422e8c
    MOV dword ptr [EBX + 0x25ac],EAX    ; 00422e92
    JMP 0x00422da8                      ; 00422e98
        ;   XREF to: 00422da8 (UNCONDITIONAL_JUMP)  ; LAB_00422da8
    PUSH 0x5ccbfd                       ; 00422e9d | = "etheralFlag"
        ;   Label: LAB_00422e9d
    ADD EBX,0x2810                      ; 00422ea2
    PUSH EBX                            ; 00422ea8
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00422ea9
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00422eae
    ADD ESP,0x10                        ; 00422eb1
    POP EBP                             ; 00422eb4
    POP EDI                             ; 00422eb5
    POP ESI                             ; 00422eb6
    POP EBX                             ; 00422eb7
    RET                                 ; 00422eb8


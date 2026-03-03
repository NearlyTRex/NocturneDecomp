; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_archive_FUN_004d6090(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_objectToPickUp_0062b025
;   TerminatedCString s_doorToOpen_0062b034
;   TerminatedCString s_leverToPull_0062b03f
;   TerminatedCString s_ladderToClimb_0062b04b
;   TerminatedCString s_lhCarryObject_0062b059
;   TerminatedCString s_rhCarryObject_0062b067
;   int g_CGabriellaClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_hero.cpp_CHero_archive_FUN_004f2610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6090
        ;   Label: core_gabriela.cpp_CGabriella_archive_FUN_004d6090
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d6091
    PUSH EBX                            ; 004d6095
    CALL core_hero.cpp_CHero_archive_FUN_004f2610 ; 004d6096
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004f2610(CHero * this_ptr)
    MOV EDX,dword ptr [0x0067b5a4]      ; 004d609b | g_CGabriellaClassVersion
    ADD ESP,0x4                         ; 004d60a1
    CMP EDX,0x2                         ; 004d60a4
    JL 0x004d60fe                       ; 004d60a7
        ;   XREF to: 004d60fe (CONDITIONAL_JUMP)  ; LAB_004d60fe
    CMP EDX,0x3                         ; 004d60a9
    JG 0x004d60fe                       ; 004d60ac
        ;   XREF to: 004d60fe (CONDITIONAL_JUMP)  ; LAB_004d60fe
    PUSH 0x62b025                       ; 004d60ae | = "objectToPickUp"
    LEA EAX,[EBX + 0x1fba0]             ; 004d60b3
    PUSH EAX                            ; 004d60b9
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004d60ba
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d60bf
    PUSH 0x62b034                       ; 004d60c2 | = "doorToOpen"
    LEA EAX,[EBX + 0x1fb9c]             ; 004d60c7
    PUSH EAX                            ; 004d60cd
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004d60ce
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d60d3
    PUSH 0x62b03f                       ; 004d60d6 | = "leverToPull"
    LEA EAX,[EBX + 0x1fba8]             ; 004d60db
    PUSH EAX                            ; 004d60e1
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004d60e2
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d60e7
    PUSH 0x62b04b                       ; 004d60ea | = "ladderToClimb"
    LEA EAX,[EBX + 0x1fbac]             ; 004d60ef
    PUSH EAX                            ; 004d60f5
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004d60f6
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d60fb
    CMP dword ptr [0x0067b5a4],0x2      ; 004d60fe | g_CGabriellaClassVersion
        ;   Label: LAB_004d60fe
    JZ 0x004d6109                       ; 004d6105
        ;   XREF to: 004d6109 (CONDITIONAL_JUMP)  ; LAB_004d6109
    POP EBX                             ; 004d6107
    RET                                 ; 004d6108
    PUSH 0x62b059                       ; 004d6109 | = "lhCarryObject"
        ;   Label: LAB_004d6109
    LEA EAX,[EBX + 0x24b4]              ; 004d610e
    PUSH EAX                            ; 004d6114
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004d6115
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d611a
    PUSH 0x62b067                       ; 004d611d | = "rhCarryObject"
    ADD EBX,0x24f8                      ; 004d6122
    PUSH EBX                            ; 004d6128
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 004d6129
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004d612e
    POP EBX                             ; 004d6131
    RET                                 ; 004d6132


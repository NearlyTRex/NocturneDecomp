; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_archive_FUN_004b0fb0(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_objectToPickUp_005d70ea+1
;   TerminatedCString s_doorToOpen_005d70fa
;   TerminatedCString s_leverToPull_005d7105
;   TerminatedCString s_ladderToClimb_005d7111
;   TerminatedCString s_lhCarryObject_005d711f
;   TerminatedCString s_rhCarryObject_005d712d
;   int g_CGabriellaClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_hero.cpp_CHero_archive_FUN_004ce590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0fb0
        ;   Label: core_gabriela.cpp_CGabriella_archive_FUN_004b0fb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b0fb1
    PUSH EBX                            ; 004b0fb5
    CALL core_hero.cpp_CHero_archive_FUN_004ce590 ; 004b0fb6
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004ce590(CHero * this_ptr)
    MOV EDX,dword ptr [0x006163d4]      ; 004b0fbb | g_CGabriellaClassVersion
    ADD ESP,0x4                         ; 004b0fc1
    CMP EDX,0x2                         ; 004b0fc4
    JL 0x004b101e                       ; 004b0fc7
        ;   XREF to: 004b101e (CONDITIONAL_JUMP)  ; LAB_004b101e
    CMP EDX,0x3                         ; 004b0fc9
    JG 0x004b101e                       ; 004b0fcc
        ;   XREF to: 004b101e (CONDITIONAL_JUMP)  ; LAB_004b101e
    PUSH 0x5d70eb                       ; 004b0fce | s_objectToPickUp_005d70ea+1
    LEA EAX,[EBX + 0x25608]             ; 004b0fd3
    PUSH EAX                            ; 004b0fd9
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004b0fda
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b0fdf
    PUSH 0x5d70fa                       ; 004b0fe2 | = "doorToOpen"
    LEA EAX,[EBX + 0x25604]             ; 004b0fe7
    PUSH EAX                            ; 004b0fed
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004b0fee
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b0ff3
    PUSH 0x5d7105                       ; 004b0ff6 | = "leverToPull"
    LEA EAX,[EBX + 0x25610]             ; 004b0ffb
    PUSH EAX                            ; 004b1001
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004b1002
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b1007
    PUSH 0x5d7111                       ; 004b100a | = "ladderToClimb"
    LEA EAX,[EBX + 0x25614]             ; 004b100f
    PUSH EAX                            ; 004b1015
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004b1016
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b101b
    CMP dword ptr [0x006163d4],0x2      ; 004b101e | g_CGabriellaClassVersion
        ;   Label: LAB_004b101e
    JZ 0x004b1029                       ; 004b1025
        ;   XREF to: 004b1029 (CONDITIONAL_JUMP)  ; LAB_004b1029
    POP EBX                             ; 004b1027
    RET                                 ; 004b1028
    PUSH 0x5d711f                       ; 004b1029 | = "lhCarryObject"
        ;   Label: LAB_004b1029
    LEA EAX,[EBX + 0x2620]              ; 004b102e
    PUSH EAX                            ; 004b1034
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004b1035
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b103a
    PUSH 0x5d712d                       ; 004b103d | = "rhCarryObject"
    ADD EBX,0x2698                      ; 004b1042
    PUSH EBX                            ; 004b1048
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004b1049
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b104e
    POP EBX                             ; 004b1051
    RET                                 ; 004b1052


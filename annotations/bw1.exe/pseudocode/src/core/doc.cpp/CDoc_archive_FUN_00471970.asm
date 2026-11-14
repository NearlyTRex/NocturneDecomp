; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_doc_cpp_CDoc_archive_FUN_00471970(CDoc *this_ptr)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_objectToPickUp_005da1f3+1
;   TerminatedCString s_doorToOpen_005da203
;   TerminatedCString s_leverToPull_005da20e
;   TerminatedCString s_ladderToClimb_005da21a
;   TerminatedCString s_lhCarryObject_005da228
;   TerminatedCString s_rhCarryObject_005da236
;   TerminatedCString s_ladderToDescend_005da244
;   TerminatedCString s_gunsDrawn_005da254
;   TerminatedCString s_weapon_005da25e
;   TerminatedCString s_actionPending_005da265
;   TerminatedCString s_layerActionIndex_005da273
;   TerminatedCString s_layerActionT_005da284
;   int g_CDocClassVersion = 0x9
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_hero.cpp_CHero_archive_FUN_004eab00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471970
        ;   Label: core_doc.cpp_CDoc_archive_FUN_00471970
    MOV EBX,dword ptr [ESP + 0x8]       ; 00471971
    PUSH EBX                            ; 00471975
    CALL core_hero.cpp_CHero_archive_FUN_004eab00 ; 00471976
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004eab00(CHero * this_ptr)
    MOV EDX,dword ptr [0x006124cc]      ; 0047197b | g_CDocClassVersion
    ADD ESP,0x4                         ; 00471981
    CMP EDX,0x2                         ; 00471984
    JL 0x004719de                       ; 00471987
        ;   XREF to: 004719de (CONDITIONAL_JUMP)  ; LAB_004719de
    CMP EDX,0x4                         ; 00471989
    JG 0x004719de                       ; 0047198c
        ;   XREF to: 004719de (CONDITIONAL_JUMP)  ; LAB_004719de
    PUSH 0x5da1f4                       ; 0047198e | s_objectToPickUp_005da1f3+1
    LEA EAX,[EBX + 0x1ff78]             ; 00471993
    PUSH EAX                            ; 00471999
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0047199a
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0047199f
    PUSH 0x5da203                       ; 004719a2 | = "doorToOpen"
    LEA EAX,[EBX + 0x1ff74]             ; 004719a7
    PUSH EAX                            ; 004719ad
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004719ae
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004719b3
    PUSH 0x5da20e                       ; 004719b6 | = "leverToPull"
    LEA EAX,[EBX + 0x1ff80]             ; 004719bb
    PUSH EAX                            ; 004719c1
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004719c2
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004719c7
    PUSH 0x5da21a                       ; 004719ca | = "ladderToClimb"
    LEA EAX,[EBX + 0x1ff84]             ; 004719cf
    PUSH EAX                            ; 004719d5
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004719d6
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004719db
    CMP dword ptr [0x006124cc],0x2      ; 004719de | g_CDocClassVersion
        ;   Label: LAB_004719de
    JNZ 0x00471a0f                      ; 004719e5
        ;   XREF to: 00471a0f (CONDITIONAL_JUMP)  ; LAB_00471a0f
    PUSH 0x5da228                       ; 004719e7 | = "lhCarryObject"
    LEA EAX,[EBX + 0x25b0]              ; 004719ec
    PUSH EAX                            ; 004719f2
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004719f3
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 004719f8
    PUSH 0x5da236                       ; 004719fb | = "rhCarryObject"
    LEA EAX,[EBX + 0x2628]              ; 00471a00
    PUSH EAX                            ; 00471a06
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 00471a07
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00471a0c
    CMP dword ptr [0x006124cc],0x4      ; 00471a0f | g_CDocClassVersion
        ;   Label: LAB_00471a0f
    JL 0x00471a2c                       ; 00471a16
        ;   XREF to: 00471a2c (CONDITIONAL_JUMP)  ; LAB_00471a2c
    PUSH 0x5da244                       ; 00471a18 | = "ladderToDescend"
    LEA EAX,[EBX + 0x20000]             ; 00471a1d
    PUSH EAX                            ; 00471a23
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 00471a24
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00471a29
    CMP dword ptr [0x006124cc],0x6      ; 00471a2c | g_CDocClassVersion
        ;   Label: LAB_00471a2c
    JL 0x00471a49                       ; 00471a33
        ;   XREF to: 00471a49 (CONDITIONAL_JUMP)  ; LAB_00471a49
    PUSH 0x5da254                       ; 00471a35 | = "gunsDrawn"
    LEA EAX,[EBX + 0x1ffac]             ; 00471a3a
    PUSH EAX                            ; 00471a40
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00471a41
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00471a46
    CMP dword ptr [0x006124cc],0x7      ; 00471a49 | g_CDocClassVersion
        ;   Label: LAB_00471a49
    JL 0x00471a66                       ; 00471a50
        ;   XREF to: 00471a66 (CONDITIONAL_JUMP)  ; LAB_00471a66
    PUSH 0x5da25e                       ; 00471a52 | = "weapon"
    LEA EAX,[EBX + 0x20004]             ; 00471a57
    PUSH EAX                            ; 00471a5d
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 00471a5e
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00471a63
    CMP dword ptr [0x006124cc],0x8      ; 00471a66 | g_CDocClassVersion
        ;   Label: LAB_00471a66
    JL 0x00471a83                       ; 00471a6d
        ;   XREF to: 00471a83 (CONDITIONAL_JUMP)  ; LAB_00471a83
    PUSH 0x5da265                       ; 00471a6f | = "actionPending"
    LEA EAX,[EBX + 0x1ff5c]             ; 00471a74
    PUSH EAX                            ; 00471a7a
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00471a7b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00471a80
    CMP dword ptr [0x006124cc],0x9      ; 00471a83 | g_CDocClassVersion
        ;   Label: LAB_00471a83
    JGE 0x00471a8e                      ; 00471a8a
        ;   XREF to: 00471a8e (CONDITIONAL_JUMP)  ; LAB_00471a8e
    POP EBX                             ; 00471a8c
    RET                                 ; 00471a8d
    PUSH 0x5da273                       ; 00471a8e | = "layerActionIndex"
        ;   Label: LAB_00471a8e
    LEA EAX,[EBX + 0x2c98]              ; 00471a93
    PUSH EAX                            ; 00471a99
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00471a9a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00471a9f
    PUSH 0x5da284                       ; 00471aa2 | = "layerActionT"
    ADD EBX,0x2c9c                      ; 00471aa7
    PUSH EBX                            ; 00471aad
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00471aae
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00471ab3
    POP EBX                             ; 00471ab6
    RET                                 ; 00471ab7


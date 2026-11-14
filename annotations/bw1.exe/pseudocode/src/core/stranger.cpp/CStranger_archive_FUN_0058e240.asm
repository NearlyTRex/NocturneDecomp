; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_archive_FUN_0058e240(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_objectToPickUp_005f6e18+1
;   TerminatedCString s_doorToOpen_005f6e28
;   TerminatedCString s_leverToPull_005f6e33
;   TerminatedCString s_ladderToClimb_005f6e3f
;   TerminatedCString s_lhCarryObject_005f6e4d
;   TerminatedCString s_rhCarryObject_005f6e5b
;   TerminatedCString s_ladderToDescend_005f6e69
;   TerminatedCString s_gunsDrawn_005f6e79
;   TerminatedCString s_weapon_005f6e83
;   TerminatedCString s_actionPending_005f6e8a
;   TerminatedCString s_layerActionIndex_005f6e98
;   TerminatedCString s_layerActionT_005f6ea9
;   int g_CStrangerClassVersion = 0x9
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_hero.cpp_CHero_archive_FUN_004eab00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058e240
        ;   Label: core_stranger.cpp_CStranger_archive_FUN_0058e240
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058e241
    PUSH EBX                            ; 0058e245
    CALL core_hero.cpp_CHero_archive_FUN_004eab00 ; 0058e246
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004eab00(CHero * this_ptr)
    MOV EDX,dword ptr [0x00625930]      ; 0058e24b | g_CStrangerClassVersion
    ADD ESP,0x4                         ; 0058e251
    CMP EDX,0x2                         ; 0058e254
    JL 0x0058e2ae                       ; 0058e257
        ;   XREF to: 0058e2ae (CONDITIONAL_JUMP)  ; LAB_0058e2ae
    CMP EDX,0x4                         ; 0058e259
    JG 0x0058e2ae                       ; 0058e25c
        ;   XREF to: 0058e2ae (CONDITIONAL_JUMP)  ; LAB_0058e2ae
    PUSH 0x5f6e19                       ; 0058e25e | s_objectToPickUp_005f6e18+1
    LEA EAX,[EBX + 0x1ff78]             ; 0058e263
    PUSH EAX                            ; 0058e269
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0058e26a
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058e26f
    PUSH 0x5f6e28                       ; 0058e272 | = "doorToOpen"
    LEA EAX,[EBX + 0x1ff74]             ; 0058e277
    PUSH EAX                            ; 0058e27d
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0058e27e
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058e283
    PUSH 0x5f6e33                       ; 0058e286 | = "leverToPull"
    LEA EAX,[EBX + 0x1ff80]             ; 0058e28b
    PUSH EAX                            ; 0058e291
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0058e292
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058e297
    PUSH 0x5f6e3f                       ; 0058e29a | = "ladderToClimb"
    LEA EAX,[EBX + 0x1ff84]             ; 0058e29f
    PUSH EAX                            ; 0058e2a5
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0058e2a6
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058e2ab
    CMP dword ptr [0x00625930],0x2      ; 0058e2ae | g_CStrangerClassVersion
        ;   Label: LAB_0058e2ae
    JNZ 0x0058e2df                      ; 0058e2b5
        ;   XREF to: 0058e2df (CONDITIONAL_JUMP)  ; LAB_0058e2df
    PUSH 0x5f6e4d                       ; 0058e2b7 | = "lhCarryObject"
    LEA EAX,[EBX + 0x25b0]              ; 0058e2bc
    PUSH EAX                            ; 0058e2c2
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0058e2c3
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058e2c8
    PUSH 0x5f6e5b                       ; 0058e2cb | = "rhCarryObject"
    LEA EAX,[EBX + 0x2628]              ; 0058e2d0
    PUSH EAX                            ; 0058e2d6
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0058e2d7
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058e2dc
    CMP dword ptr [0x00625930],0x4      ; 0058e2df | g_CStrangerClassVersion
        ;   Label: LAB_0058e2df
    JL 0x0058e2fc                       ; 0058e2e6
        ;   XREF to: 0058e2fc (CONDITIONAL_JUMP)  ; LAB_0058e2fc
    PUSH 0x5f6e69                       ; 0058e2e8 | = "ladderToDescend"
    LEA EAX,[EBX + 0x20000]             ; 0058e2ed
    PUSH EAX                            ; 0058e2f3
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0058e2f4
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058e2f9
    CMP dword ptr [0x00625930],0x6      ; 0058e2fc | g_CStrangerClassVersion
        ;   Label: LAB_0058e2fc
    JL 0x0058e319                       ; 0058e303
        ;   XREF to: 0058e319 (CONDITIONAL_JUMP)  ; LAB_0058e319
    PUSH 0x5f6e79                       ; 0058e305 | = "gunsDrawn"
    LEA EAX,[EBX + 0x1ffac]             ; 0058e30a
    PUSH EAX                            ; 0058e310
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0058e311
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058e316
    CMP dword ptr [0x00625930],0x7      ; 0058e319 | g_CStrangerClassVersion
        ;   Label: LAB_0058e319
    JL 0x0058e336                       ; 0058e320
        ;   XREF to: 0058e336 (CONDITIONAL_JUMP)  ; LAB_0058e336
    PUSH 0x5f6e83                       ; 0058e322 | = "weapon"
    LEA EAX,[EBX + 0x20004]             ; 0058e327
    PUSH EAX                            ; 0058e32d
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 0058e32e
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058e333
    CMP dword ptr [0x00625930],0x8      ; 0058e336 | g_CStrangerClassVersion
        ;   Label: LAB_0058e336
    JL 0x0058e353                       ; 0058e33d
        ;   XREF to: 0058e353 (CONDITIONAL_JUMP)  ; LAB_0058e353
    PUSH 0x5f6e8a                       ; 0058e33f | = "actionPending"
    LEA EAX,[EBX + 0x1ff5c]             ; 0058e344
    PUSH EAX                            ; 0058e34a
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0058e34b
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058e350
    CMP dword ptr [0x00625930],0x9      ; 0058e353 | g_CStrangerClassVersion
        ;   Label: LAB_0058e353
    JGE 0x0058e35e                      ; 0058e35a
        ;   XREF to: 0058e35e (CONDITIONAL_JUMP)  ; LAB_0058e35e
    POP EBX                             ; 0058e35c
    RET                                 ; 0058e35d
    PUSH 0x5f6e98                       ; 0058e35e | = "layerActionIndex"
        ;   Label: LAB_0058e35e
    LEA EAX,[EBX + 0x2c98]              ; 0058e363
    PUSH EAX                            ; 0058e369
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0058e36a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058e36f
    PUSH 0x5f6ea9                       ; 0058e372 | = "layerActionT"
    ADD EBX,0x2c9c                      ; 0058e377
    PUSH EBX                            ; 0058e37d
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0058e37e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058e383
    POP EBX                             ; 0058e386
    RET                                 ; 0058e387


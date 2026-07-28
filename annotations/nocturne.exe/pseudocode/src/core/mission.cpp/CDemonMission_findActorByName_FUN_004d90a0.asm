; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0(CDemonMission *this_ptr,char *name)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[9]:
;   core_event.cpp_resolveActorByName_FUN_0047a390 at 0047a465
;   core_game.cpp_FUN_004a4170 at 004a4865
;   core_hiram.cpp_CHiram_process_FUN_004b6770 at 004b6846
;   core_mission.cpp_CDemonMission_ensureHeroPlaceholder_FUN_004d9c20 at 004d9cbe
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004d9680 at 004d96e4
;   core_mission.cpp_CDemonMission_loadActor_FUN_004d8aa0 at 004d8b9f
;   core_script.cpp_getActor_FUN_004fe180 at 004fe2a9
;   core_script.cpp_readActorReference_FUN_00505200 at 00505266
;   core_trigger.cpp_FUN_00547b30 at 00547c56
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d90a0
        ;   Label: core_mission.cpp_CDemonMission_findActorByName_FUN_004d90a0
    PUSH ESI                            ; 004d90a1
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d90a2
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d90a6
    MOV EBX,dword ptr [EBX + 0x514]     ; 004d90aa
    TEST EBX,EBX                        ; 004d90b0
    JZ 0x004d90cc                       ; 004d90b2
        ;   XREF to: 004d90cc (CONDITIONAL_JUMP)  ; LAB_004d90cc
    PUSH ESI                            ; 004d90b4
        ;   Label: LAB_004d90b4
    PUSH EBX                            ; 004d90b5
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d90b6
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d90bb
    TEST EAX,EAX                        ; 004d90be
    JZ 0x004d90d1                       ; 004d90c0
        ;   XREF to: 004d90d1 (CONDITIONAL_JUMP)  ; LAB_004d90d1
    MOV EBX,dword ptr [EBX + 0x144]     ; 004d90c2
    TEST EBX,EBX                        ; 004d90c8
    JNZ 0x004d90b4                      ; 004d90ca
        ;   XREF to: 004d90b4 (CONDITIONAL_JUMP)  ; LAB_004d90b4
    XOR EAX,EAX                         ; 004d90cc
        ;   Label: LAB_004d90cc
    POP ESI                             ; 004d90ce
    POP EBX                             ; 004d90cf
    RET                                 ; 004d90d0
    MOV EAX,EBX                         ; 004d90d1
        ;   Label: LAB_004d90d1
    POP ESI                             ; 004d90d3
    POP EBX                             ; 004d90d4
    RET                                 ; 004d90d5


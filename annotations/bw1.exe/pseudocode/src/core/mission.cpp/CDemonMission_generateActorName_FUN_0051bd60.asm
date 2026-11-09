; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x2b]:1  local_2b
;
; XREF[13]:
;   core_baron.cpp_FUN_00410640 at 004106b2
;   core_bodypart.cpp_FUN_00418940 at 00418a01
;   core_game.cpp_FUN_004d2540 at 004d255d
;   core_game.cpp_FUN_004d25fe at 004d2633
;   core_game.cpp_FUN_004d27b0 at 004d413d
;   core_gore.cpp_FUN_004e63e0 at 004e649c
;   core_hero.cpp_FUN_004ecca0 at 004eccf9
;   core_inv.cpp_FUN_004f7690 at 004f8535
;   core_mimic.cpp_CMimic_processMorph_FUN_00510c20 at 00510cb2
;   core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160 at 0051b19a
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408830
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_0051bcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051bd60
        ;   Label: core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60
    PUSH ESI                            ; 0051bd61
    PUSH EDI                            ; 0051bd62
    SUB ESP,0x20                        ; 0051bd63
    MOV EDI,dword ptr [ESP + 0x34]      ; 0051bd66
    PUSH EDI                            ; 0051bd6a
    MOV byte ptr [EDI],0x0              ; 0051bd6b
    CALL core_actor.cpp_FUN_00408830    ; 0051bd6e
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0051bd73
    MOV BL,byte ptr [EAX]               ; 0051bd76
    MOV EDX,EAX                         ; 0051bd78
    CMP BL,0x43                         ; 0051bd7a
    JNZ 0x0051bd82                      ; 0051bd7d
        ;   XREF to: 0051bd82 (CONDITIONAL_JUMP)  ; LAB_0051bd82
    LEA EDX,[EAX + 0x1]                 ; 0051bd7f
    PUSH EDX                            ; 0051bd82
        ;   Label: LAB_0051bd82
    LEA EAX,[ESP + 0x4]                 ; 0051bd83
    PUSH EAX                            ; 0051bd87
    MOV EDX,dword ptr [ESP + 0x38]      ; 0051bd88
    PUSH EDX                            ; 0051bd8c
    CALL core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_0051bcc0 ; 0051bd8d
        ;   XREF to: 0051bcc0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_0051bcc0(CDemonMission * this_ptr, char * out_buf, char * base_name)
    ADD ESP,0xc                         ; 0051bd92
    MOV ESI,ESP                         ; 0051bd95
    PUSH EDI                            ; 0051bd97
    MOV AL,byte ptr [ESI]               ; 0051bd98
        ;   Label: LAB_0051bd98
    MOV byte ptr [EDI],AL               ; 0051bd9a
    CMP AL,0x0                          ; 0051bd9c
    JZ 0x0051bdb0                       ; 0051bd9e
        ;   XREF to: 0051bdb0 (CONDITIONAL_JUMP)  ; LAB_0051bdb0
    MOV AL,byte ptr [ESI + 0x1]         ; 0051bda0
    ADD ESI,0x2                         ; 0051bda3
    MOV byte ptr [EDI + 0x1],AL         ; 0051bda6
    ADD EDI,0x2                         ; 0051bda9
    CMP AL,0x0                          ; 0051bdac
    JNZ 0x0051bd98                      ; 0051bdae
        ;   XREF to: 0051bd98 (CONDITIONAL_JUMP)  ; LAB_0051bd98
    POP EDI                             ; 0051bdb0
        ;   Label: LAB_0051bdb0
    ADD ESP,0x20                        ; 0051bdb1
    POP EDI                             ; 0051bdb4
    POP ESI                             ; 0051bdb5
    POP EBX                             ; 0051bdb6
    RET                                 ; 0051bdb7


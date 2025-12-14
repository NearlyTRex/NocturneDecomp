; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_actor.cpp_getActorClassByName_FUN_0040c3c0(char * className)
;
; Parameters:
; char *           Stack[0x4]:4   className
;
; XREF[2]:
;   core_actor.cpp_createActorByName_FUN_0040c430 at 0040c438
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 at 005230ab
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;   int g_NumActorClassTypes
;   CDemonActorType*[200] g_ActorClassRegistrations
;   undefined4 g_ActorClassRegistrations[1]
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005feb30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c3c0
        ;   Label: core_actor.cpp_getActorClassByName_FUN_0040c3c0
    PUSH ESI                            ; 0040c3c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040c3c2
    XOR EBX,EBX                         ; 0040c3c6
    XOR EAX,EAX                         ; 0040c3c8
        ;   Label: LAB_0040c3c8
    MOV AL,byte ptr [ESI]               ; 0040c3ca
    INC ESI                             ; 0040c3cc
    TEST EAX,EAX                        ; 0040c3cd
    JNZ 0x0040c3f7                      ; 0040c3cf
        ;   XREF to: 0040c3f7 (CONDITIONAL_JUMP)  ; LAB_0040c3f7
    MOV EDX,dword ptr [0x00822044]      ; 0040c3d1 | g_NumActorClassTypes
    MOV ESI,EBX                         ; 0040c3d7
    TEST EDX,EDX                        ; 0040c3d9
    JLE 0x0040c3f2                      ; 0040c3db
        ;   XREF to: 0040c3f2 (CONDITIONAL_JUMP)  ; LAB_0040c3f2
    SHL EDX,0x2                         ; 0040c3dd
    MOV EBX,dword ptr [EAX + 0x822048]  ; 0040c3e0 | g_ActorClassRegistrations | g_ActorClassRegistrations[1]
        ;   Label: LAB_0040c3e0
    CMP ESI,dword ptr [EBX + 0x38]      ; 0040c3e6
    JZ 0x0040c428                       ; 0040c3e9
        ;   XREF to: 0040c428 (CONDITIONAL_JUMP)  ; LAB_0040c428
    ADD EAX,0x4                         ; 0040c3eb
    CMP EAX,EDX                         ; 0040c3ee
    JL 0x0040c3e0                       ; 0040c3f0
        ;   XREF to: 0040c3e0 (CONDITIONAL_JUMP)  ; LAB_0040c3e0
    XOR EAX,EAX                         ; 0040c3f2
        ;   Label: LAB_0040c3f2
    POP ESI                             ; 0040c3f4
    POP EBX                             ; 0040c3f5
    RET                                 ; 0040c3f6
    MOV DL,AL                           ; 0040c3f7
        ;   Label: LAB_0040c3f7
    INC DL                              ; 0040c3f9
    AND EDX,0xff                        ; 0040c3fb
    TEST byte ptr [EDX + 0x6849c4],0xe0 ; 0040c401 | g_CharacterClassificationTable
    JZ 0x0040c3c8                       ; 0040c408
        ;   XREF to: 0040c3c8 (CONDITIONAL_JUMP)  ; LAB_0040c3c8
    PUSH EAX                            ; 0040c40a
    CALL crt_ctype.c_tolower_FUN_005feb30 ; 0040c40b
        ;   XREF to: 005feb30 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005feb30(int character)
    MOV EDX,EBX                         ; 0040c410
    SHL EDX,0x7                         ; 0040c412
    SHR EBX,0x19                        ; 0040c415
    ADD EDX,EBX                         ; 0040c418
    MOV EBX,EAX                         ; 0040c41a
    SHL EBX,0x11                        ; 0040c41c
    ADD EBX,EDX                         ; 0040c41f
    ADD ESP,0x4                         ; 0040c421
    ADD EBX,EAX                         ; 0040c424
    JMP 0x0040c3c8                      ; 0040c426
        ;   XREF to: 0040c3c8 (UNCONDITIONAL_JUMP)  ; LAB_0040c3c8
    MOV EAX,EBX                         ; 0040c428
        ;   Label: LAB_0040c428
    POP ESI                             ; 0040c42a
    POP EBX                             ; 0040c42b
    RET                                 ; 0040c42c


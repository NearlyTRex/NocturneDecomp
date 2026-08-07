; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_actor_cpp_getActorClassByName_FUN_0040d4d0(char *className)
;
; Parameters:
; char *           Stack[0x4]:4   className
;
; XREF[2]:
;   core_actor.cpp_createActorByName_FUN_0040d540 at 0040d548
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0 at 004d81db
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;   undefined4 DAT_00763e94
;   undefined4 DAT_00763e98
;   undefined4 DAT_00763e9c
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_00564860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d4d0
        ;   Label: core_actor.cpp_getActorClassByName_FUN_0040d4d0
    PUSH ESI                            ; 0040d4d1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040d4d2
    XOR EBX,EBX                         ; 0040d4d6
    XOR EAX,EAX                         ; 0040d4d8
        ;   Label: LAB_0040d4d8
    MOV AL,byte ptr [ESI]               ; 0040d4da
    INC ESI                             ; 0040d4dc
    TEST EAX,EAX                        ; 0040d4dd
    JNZ 0x0040d507                      ; 0040d4df
        ;   XREF to: 0040d507 (CONDITIONAL_JUMP)  ; LAB_0040d507
    MOV EDX,dword ptr [0x00763e94]      ; 0040d4e1 | DAT_00763e94
    MOV ESI,EBX                         ; 0040d4e7
    TEST EDX,EDX                        ; 0040d4e9
    JLE 0x0040d502                      ; 0040d4eb
        ;   XREF to: 0040d502 (CONDITIONAL_JUMP)  ; LAB_0040d502
    SHL EDX,0x2                         ; 0040d4ed
    MOV EBX,dword ptr [EAX + 0x763e98]  ; 0040d4f0 | DAT_00763e98 | DAT_00763e9c
        ;   Label: LAB_0040d4f0
    CMP ESI,dword ptr [EBX + 0x38]      ; 0040d4f6
    JZ 0x0040d538                       ; 0040d4f9
        ;   XREF to: 0040d538 (CONDITIONAL_JUMP)  ; LAB_0040d538
    ADD EAX,0x4                         ; 0040d4fb
    CMP EAX,EDX                         ; 0040d4fe
    JL 0x0040d4f0                       ; 0040d500
        ;   XREF to: 0040d4f0 (CONDITIONAL_JUMP)  ; LAB_0040d4f0
    XOR EAX,EAX                         ; 0040d502
        ;   Label: LAB_0040d502
    POP ESI                             ; 0040d504
    POP EBX                             ; 0040d505
    RET                                 ; 0040d506
    MOV DL,AL                           ; 0040d507
        ;   Label: LAB_0040d507
    INC DL                              ; 0040d509
    AND EDX,0xff                        ; 0040d50b
    TEST byte ptr [EDX + 0x5c168c],0xe0 ; 0040d511 | g_CharacterClassificationTable
    JZ 0x0040d4d8                       ; 0040d518
        ;   XREF to: 0040d4d8 (CONDITIONAL_JUMP)  ; LAB_0040d4d8
    PUSH EAX                            ; 0040d51a
    CALL crt_ctype.c_tolower_FUN_00564860 ; 0040d51b
        ;   XREF to: 00564860 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_00564860(int character)
    MOV EDX,EBX                         ; 0040d520
    SHL EDX,0x7                         ; 0040d522
    SHR EBX,0x19                        ; 0040d525
    ADD EDX,EBX                         ; 0040d528
    MOV EBX,EAX                         ; 0040d52a
    SHL EBX,0x11                        ; 0040d52c
    ADD EBX,EDX                         ; 0040d52f
    ADD ESP,0x4                         ; 0040d531
    ADD EBX,EAX                         ; 0040d534
    JMP 0x0040d4d8                      ; 0040d536
        ;   XREF to: 0040d4d8 (UNCONDITIONAL_JUMP)  ; LAB_0040d4d8
    MOV EAX,EBX                         ; 0040d538
        ;   Label: LAB_0040d538
    POP ESI                             ; 0040d53a
    POP EBX                             ; 0040d53b
    RET                                 ; 0040d53c


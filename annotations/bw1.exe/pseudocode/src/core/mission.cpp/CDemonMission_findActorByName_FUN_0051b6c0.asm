; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_0051b6c0(CDemonMission *this_ptr,char *name)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[8]:
;   core_event.cpp_resolveActorByName_FUN_004a1370 at 004a1445
;   core_game.cpp_FUN_004d6990 at 004d6fc9
;   core_hiram.cpp_CHiram_process_FUN_004ed2b0 at 004ed386
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_0051bcc0 at 0051bd24
;   core_mission.cpp_CDemonMission_loadActor_FUN_0051afa0 at 0051b09f
;   core_mission.cpp_FUN_0051c240 at 0051c2e0
;   core_script.cpp_getActor_FUN_005433c0 at 005434e9
;   core_script.cpp_readActorReference_FUN_0054b320 at 0054b386
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b6c0
        ;   Label: core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0
    PUSH ESI                            ; 0051b6c1
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051b6c2
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051b6c6
    MOV EBX,dword ptr [EBX + 0x1118]    ; 0051b6ca
    TEST EBX,EBX                        ; 0051b6d0
    JZ 0x0051b6ec                       ; 0051b6d2
        ;   XREF to: 0051b6ec (CONDITIONAL_JUMP)  ; LAB_0051b6ec
    PUSH ESI                            ; 0051b6d4
        ;   Label: LAB_0051b6d4
    PUSH EBX                            ; 0051b6d5
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0051b6d6
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0051b6db
    TEST EAX,EAX                        ; 0051b6de
    JZ 0x0051b6f1                       ; 0051b6e0
        ;   XREF to: 0051b6f1 (CONDITIONAL_JUMP)  ; LAB_0051b6f1
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0051b6e2
    TEST EBX,EBX                        ; 0051b6e8
    JNZ 0x0051b6d4                      ; 0051b6ea
        ;   XREF to: 0051b6d4 (CONDITIONAL_JUMP)  ; LAB_0051b6d4
    XOR EAX,EAX                         ; 0051b6ec
        ;   Label: LAB_0051b6ec
    POP ESI                             ; 0051b6ee
    POP EBX                             ; 0051b6ef
    RET                                 ; 0051b6f0
    MOV EAX,EBX                         ; 0051b6f1
        ;   Label: LAB_0051b6f1
    POP ESI                             ; 0051b6f3
    POP EBX                             ; 0051b6f4
    RET                                 ; 0051b6f5


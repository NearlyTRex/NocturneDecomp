; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_mission_cpp_CDemonMission_findActorByName_FUN_004f6e90(CDemonMission *this_ptr,char *name)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[8]:
;   core_event.cpp_resolveActorByName_FUN_0048b950 at 0048ba25
;   core_game.cpp_FUN_004bdfb0 at 004be60f
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004f7490 at 004f74f4
;   core_mission.cpp_CDemonMission_loadActor_FUN_004f6770 at 004f686f
;   core_mission.cpp_FUN_004f7a20 at 004f7ac0
;   core_script.cpp_getActor_FUN_005289b0 at 00528ad9
;   core_script.cpp_readActorReference_FUN_00530a10 at 00530a76
;   core_spawner.cpp_FUN_00563970 at 00563a0a
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6e90
        ;   Label: core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90
    PUSH ESI                            ; 004f6e91
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f6e92
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f6e96
    MOV EBX,dword ptr [EBX + 0x143c]    ; 004f6e9a
    TEST EBX,EBX                        ; 004f6ea0
    JZ 0x004f6ebc                       ; 004f6ea2
        ;   XREF to: 004f6ebc (CONDITIONAL_JUMP)  ; LAB_004f6ebc
    PUSH ESI                            ; 004f6ea4
        ;   Label: LAB_004f6ea4
    PUSH EBX                            ; 004f6ea5
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004f6ea6
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f6eab
    TEST EAX,EAX                        ; 004f6eae
    JZ 0x004f6ec1                       ; 004f6eb0
        ;   XREF to: 004f6ec1 (CONDITIONAL_JUMP)  ; LAB_004f6ec1
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004f6eb2
    TEST EBX,EBX                        ; 004f6eb8
    JNZ 0x004f6ea4                      ; 004f6eba
        ;   XREF to: 004f6ea4 (CONDITIONAL_JUMP)  ; LAB_004f6ea4
    XOR EAX,EAX                         ; 004f6ebc
        ;   Label: LAB_004f6ebc
    POP ESI                             ; 004f6ebe
    POP EBX                             ; 004f6ebf
    RET                                 ; 004f6ec0
    MOV EAX,EBX                         ; 004f6ec1
        ;   Label: LAB_004f6ec1
    POP ESI                             ; 004f6ec3
    POP EBX                             ; 004f6ec4
    RET                                 ; 004f6ec5


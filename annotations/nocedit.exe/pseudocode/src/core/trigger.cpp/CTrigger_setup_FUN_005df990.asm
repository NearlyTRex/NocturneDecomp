; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_setup_FUN_005df990(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_CWaypoint_setup_FUN_005ebeb0 at 005ebebb
;
; Referenced Globals:
;   TerminatedCString s_none_0065560c
;   TerminatedCString s_none_00655611
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   undefined4 g_CDemonMissionInstance.is_in_editor
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005df990
        ;   Label: core_trigger.cpp_CTrigger_setup_FUN_005df990
    MOV EBX,dword ptr [ESP + 0x8]       ; 005df991
    PUSH EBX                            ; 005df995
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005df996
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    MOV EAX,[0x0067d550]                ; 005df99b | g_CDemonMissionPtr
    MOV dword ptr [EBX + 0xf8],0x0      ; 005df9a0
    MOV EAX,dword ptr [EAX + 0x4]       ; 005df9aa | g_CDemonMissionInstance.is_in_editor
    MOV dword ptr [EBX + 0x100],0x1     ; 005df9ad
    ADD ESP,0x4                         ; 005df9b7
    MOV EDX,dword ptr [EBX + 0x174]     ; 005df9ba
    MOV dword ptr [EBX + 0xfc],EAX      ; 005df9c0
    CMP EDX,0x5                         ; 005df9c6
    JZ 0x005dfa66                       ; 005df9c9
        ;   XREF to: 005dfa66 (CONDITIONAL_JUMP)  ; LAB_005dfa66
    CMP dword ptr [EBX + 0x174],0x4     ; 005df9cf
        ;   Label: LAB_005df9cf
    JNZ 0x005df9e2                      ; 005df9d6
        ;   XREF to: 005df9e2 (CONDITIONAL_JUMP)  ; LAB_005df9e2
    MOV dword ptr [EBX + 0x100],0x0     ; 005df9d8
    CMP dword ptr [EBX + 0x174],0x7     ; 005df9e2
        ;   Label: LAB_005df9e2
    JNZ 0x005df9f5                      ; 005df9e9
        ;   XREF to: 005df9f5 (CONDITIONAL_JUMP)  ; LAB_005df9f5
    MOV dword ptr [EBX + 0x100],0x0     ; 005df9eb
    PUSH 0x65560c                       ; 005df9f5 | = "none"
        ;   Label: LAB_005df9f5
    LEA EAX,[EBX + 0x224]               ; 005df9fa
    MOV dword ptr [EBX + 0x2f0],0x0     ; 005dfa00
    PUSH EAX                            ; 005dfa0a
    MOV dword ptr [EBX + 0x368],0x0     ; 005dfa0b
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005dfa15
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005dfa1a
    TEST EAX,EAX                        ; 005dfa1d
    JNZ 0x005dfa28                      ; 005dfa1f
        ;   XREF to: 005dfa28 (CONDITIONAL_JUMP)  ; LAB_005dfa28
    MOV byte ptr [EBX + 0x224],0x0      ; 005dfa21
    PUSH 0x655611                       ; 005dfa28 | = "none"
        ;   Label: LAB_005dfa28
    LEA EAX,[EBX + 0x288]               ; 005dfa2d
    PUSH EAX                            ; 005dfa33
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005dfa34
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005dfa39
    TEST EAX,EAX                        ; 005dfa3c
    JNZ 0x005dfa47                      ; 005dfa3e
        ;   XREF to: 005dfa47 (CONDITIONAL_JUMP)  ; LAB_005dfa47
    MOV byte ptr [EBX + 0x288],0x0      ; 005dfa40
    MOV AH,byte ptr [EBX + 0x224]       ; 005dfa47
        ;   Label: LAB_005dfa47
    MOV dword ptr [EBX + 0x104],0x0     ; 005dfa4d
    TEST AH,AH                          ; 005dfa57
    JNZ 0x005dfa64                      ; 005dfa59
        ;   XREF to: 005dfa64 (CONDITIONAL_JUMP)  ; LAB_005dfa64
    CMP byte ptr [EBX + 0x288],0x0      ; 005dfa5b
    JZ 0x005dfa75                       ; 005dfa62
        ;   XREF to: 005dfa75 (CONDITIONAL_JUMP)  ; LAB_005dfa75
    POP EBX                             ; 005dfa64
        ;   Label: LAB_005dfa64
    RET                                 ; 005dfa65
    MOV dword ptr [EBX + 0x100],0x0     ; 005dfa66
        ;   Label: LAB_005dfa66
    JMP 0x005df9cf                      ; 005dfa70
        ;   XREF to: 005df9cf (UNCONDITIONAL_JUMP)  ; LAB_005df9cf
    MOV dword ptr [EBX + 0x104],0x1     ; 005dfa75
        ;   Label: LAB_005dfa75
    POP EBX                             ; 005dfa7f
    RET                                 ; 005dfa80


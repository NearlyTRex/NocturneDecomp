; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_event_cpp_DifferentWaysToDie2_FUN_004aa960(void)
;
;
; XREF[1]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004aba9c
;
; Referenced Globals:
;   TerminatedCString s_generic_006245d3
;   TerminatedCString s_bullet_006245db
;   TerminatedCString s_Fire_006245e2
;   TerminatedCString s_Blade_006245e7
;   TerminatedCString s_Stake_006245ed
;   TerminatedCString s_Gas_006245f3
;   TerminatedCString s_electrocute_006245f7
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa960
        ;   Label: core_event.cpp_DifferentWaysToDie2_FUN_004aa960
    PUSH ESI                            ; 004aa961
    MOV ESI,dword ptr [ESP + 0xc]       ; 004aa962
    MOV EBX,dword ptr [ESP + 0x10]      ; 004aa966
    PUSH 0x6245d3                       ; 004aa96a | = "generic"
    PUSH ESI                            ; 004aa96f
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa970
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa975
    TEST EAX,EAX                        ; 004aa978
    JNZ 0x004aa98a                      ; 004aa97a
        ;   XREF to: 004aa98a (CONDITIONAL_JUMP)  ; LAB_004aa98a
    MOV dword ptr [EBX],0x64            ; 004aa97c
    MOV EAX,0x1                         ; 004aa982
    POP ESI                             ; 004aa987
    POP EBX                             ; 004aa988
    RET                                 ; 004aa989
    PUSH 0x6245db                       ; 004aa98a | = "bullet"
        ;   Label: LAB_004aa98a
    PUSH ESI                            ; 004aa98f
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa990
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa995
    TEST EAX,EAX                        ; 004aa998
    JNZ 0x004aa9aa                      ; 004aa99a
        ;   XREF to: 004aa9aa (CONDITIONAL_JUMP)  ; LAB_004aa9aa
    MOV dword ptr [EBX],0x65            ; 004aa99c
    MOV EAX,0x1                         ; 004aa9a2
    POP ESI                             ; 004aa9a7
    POP EBX                             ; 004aa9a8
    RET                                 ; 004aa9a9
    PUSH 0x6245e2                       ; 004aa9aa | = "Fire"
        ;   Label: LAB_004aa9aa
    PUSH ESI                            ; 004aa9af
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa9b0
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa9b5
    TEST EAX,EAX                        ; 004aa9b8
    JNZ 0x004aa9ca                      ; 004aa9ba
        ;   XREF to: 004aa9ca (CONDITIONAL_JUMP)  ; LAB_004aa9ca
    MOV dword ptr [EBX],0x66            ; 004aa9bc
    MOV EAX,0x1                         ; 004aa9c2
    POP ESI                             ; 004aa9c7
    POP EBX                             ; 004aa9c8
    RET                                 ; 004aa9c9
    PUSH 0x6245e7                       ; 004aa9ca | = "Blade"
        ;   Label: LAB_004aa9ca
    PUSH ESI                            ; 004aa9cf
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa9d0
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa9d5
    TEST EAX,EAX                        ; 004aa9d8
    JNZ 0x004aa9ea                      ; 004aa9da
        ;   XREF to: 004aa9ea (CONDITIONAL_JUMP)  ; LAB_004aa9ea
    MOV dword ptr [EBX],0x67            ; 004aa9dc
    MOV EAX,0x1                         ; 004aa9e2
    POP ESI                             ; 004aa9e7
    POP EBX                             ; 004aa9e8
    RET                                 ; 004aa9e9
    PUSH 0x6245ed                       ; 004aa9ea | = "Stake"
        ;   Label: LAB_004aa9ea
    PUSH ESI                            ; 004aa9ef
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aa9f0
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa9f5
    TEST EAX,EAX                        ; 004aa9f8
    JNZ 0x004aaa0a                      ; 004aa9fa
        ;   XREF to: 004aaa0a (CONDITIONAL_JUMP)  ; LAB_004aaa0a
    MOV dword ptr [EBX],0x68            ; 004aa9fc
    MOV EAX,0x1                         ; 004aaa02
    POP ESI                             ; 004aaa07
    POP EBX                             ; 004aaa08
    RET                                 ; 004aaa09
    PUSH 0x6245f3                       ; 004aaa0a | = "Gas"
        ;   Label: LAB_004aaa0a
    PUSH ESI                            ; 004aaa0f
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aaa10
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aaa15
    TEST EAX,EAX                        ; 004aaa18
    JNZ 0x004aaa2a                      ; 004aaa1a
        ;   XREF to: 004aaa2a (CONDITIONAL_JUMP)  ; LAB_004aaa2a
    MOV dword ptr [EBX],0x69            ; 004aaa1c
    MOV EAX,0x1                         ; 004aaa22
    POP ESI                             ; 004aaa27
    POP EBX                             ; 004aaa28
    RET                                 ; 004aaa29
    PUSH 0x6245f7                       ; 004aaa2a | = "electrocute"
        ;   Label: LAB_004aaa2a
    PUSH ESI                            ; 004aaa2f
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004aaa30
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aaa35
    TEST EAX,EAX                        ; 004aaa38
    JNZ 0x004aaa4a                      ; 004aaa3a
        ;   XREF to: 004aaa4a (CONDITIONAL_JUMP)  ; LAB_004aaa4a
    MOV dword ptr [EBX],0x6a            ; 004aaa3c
    MOV EAX,0x1                         ; 004aaa42
    POP ESI                             ; 004aaa47
    POP EBX                             ; 004aaa48
    RET                                 ; 004aaa49
    XOR EAX,EAX                         ; 004aaa4a
        ;   Label: LAB_004aaa4a
    POP ESI                             ; 004aaa4c
    POP EBX                             ; 004aaa4d
    RET                                 ; 004aaa4e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_event.cpp_CEventList_FUN_004adc10(CEventList * this_ptr, char * str)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   str
;
; XREF[1]:
;   core_event.cpp_CEventList_FUN_004ae140 at 004ae31e
;
; Referenced Globals:
;   TerminatedCString s_TRUE_006252a9
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004b0860
;   core_event.cpp_CEventList_FUN_004b08b0
;   core_event.cpp_CEventList_FUN_004b0900
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004adc10
        ;   Label: core_event.cpp_CEventList_FUN_004adc10
    PUSH ESI                            ; 004adc11
    PUSH EDI                            ; 004adc12
    PUSH EBP                            ; 004adc13
    MOV EDI,dword ptr [ESP + 0x14]      ; 004adc14
    MOV EBP,dword ptr [ESP + 0x18]      ; 004adc18
    PUSH 0x6252a9                       ; 004adc1c | = "TRUE" | s_TRUE_006252a9 = TRUE
    PUSH EBP                            ; 004adc21
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004adc22 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004adc27
    TEST EAX,EAX                        ; 004adc2a
    JZ 0x004adc6a                       ; 004adc2c | LAB_004adc6a
        ;   XREF to: 004adc6a (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EDI + 0xc84]     ; 004adc2e
    XOR ESI,ESI                         ; 004adc34
    TEST EDX,EDX                        ; 004adc36
    JLE 0x004adc5c                      ; 004adc38 | LAB_004adc5c
        ;   XREF to: 004adc5c (CONDITIONAL_JUMP)
    LEA EBX,[EDI + 0xc88]               ; 004adc3a
    PUSH EBP                            ; 004adc40
        ;   Label: LAB_004adc40
    PUSH EBX                            ; 004adc41
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004adc42 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004adc47
    TEST EAX,EAX                        ; 004adc4a
    JZ 0x004adc6a                       ; 004adc4c | LAB_004adc6a
        ;   XREF to: 004adc6a (CONDITIONAL_JUMP)
    INC ESI                             ; 004adc4e
    MOV ECX,dword ptr [EDI + 0xc84]     ; 004adc4f
    ADD EBX,0x20                        ; 004adc55
    CMP ESI,ECX                         ; 004adc58
    JL 0x004adc40                       ; 004adc5a | LAB_004adc40
        ;   XREF to: 004adc40 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004adc5c
        ;   Label: LAB_004adc5c
    PUSH EDI                            ; 004adc5d
    CALL core_event.cpp_CEventList_FUN_004b0860 ; 004adc5e | int core_event.cpp_CEventList_FUN_004b0860(CEventList * this_ptr)
        ;   XREF to: 004b0860 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004adc63
    TEST EAX,EAX                        ; 004adc66
    JL 0x004adc74                       ; 004adc68 | LAB_004adc74
        ;   XREF to: 004adc74 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004adc6a
        ;   Label: LAB_004adc6a
    POP EBP                             ; 004adc6f
    POP EDI                             ; 004adc70
    POP ESI                             ; 004adc71
    POP EBX                             ; 004adc72
    RET                                 ; 004adc73
    PUSH EBP                            ; 004adc74
        ;   Label: LAB_004adc74
    PUSH EDI                            ; 004adc75
    CALL core_event.cpp_CEventList_FUN_004b08b0 ; 004adc76 | int core_event.cpp_CEventList_FUN_004b08b0(CEventList * this_ptr)
        ;   XREF to: 004b08b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004adc7b
    TEST EAX,EAX                        ; 004adc7e
    JGE 0x004adc6a                      ; 004adc80 | LAB_004adc6a
        ;   XREF to: 004adc6a (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004adc82
    PUSH EDI                            ; 004adc83
    CALL core_event.cpp_CEventList_FUN_004b0900 ; 004adc84 | int core_event.cpp_CEventList_FUN_004b0900(CEventList * this_ptr)
        ;   XREF to: 004b0900 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004adc89
    TEST EAX,EAX                        ; 004adc8c
    JGE 0x004adc6a                      ; 004adc8e | LAB_004adc6a
        ;   XREF to: 004adc6a (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004adc90
    POP EBP                             ; 004adc92
    POP EDI                             ; 004adc93
    POP ESI                             ; 004adc94
    POP EBX                             ; 004adc95
    RET                                 ; 004adc96


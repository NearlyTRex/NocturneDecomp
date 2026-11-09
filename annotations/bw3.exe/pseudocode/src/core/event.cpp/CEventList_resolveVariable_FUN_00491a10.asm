; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_resolveVariable_FUN_00491a10(CEventList *this_ptr,char *identifier)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   identifier
;
; XREF[1]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_00491f40 at 00492121
;
; Referenced Globals:
;   undefined4 DAT_005bf4c0
;
; Called Functions:
;   core_event.cpp_CEventList_findGameFlag_FUN_00494d80
;   core_event.cpp_CEventList_findPersistentEvent_FUN_00494d30
;   core_event.cpp_CEventList_findTimer_FUN_00494dd0
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491a10
        ;   Label: core_event.cpp_CEventList_resolveVariable_FUN_00491a10
    PUSH ESI                            ; 00491a11
    PUSH EDI                            ; 00491a12
    PUSH EBP                            ; 00491a13
    MOV EDI,dword ptr [ESP + 0x14]      ; 00491a14
    MOV EBP,dword ptr [ESP + 0x18]      ; 00491a18
    PUSH 0x5bf4c0                       ; 00491a1c | DAT_005bf4c0
    PUSH EBP                            ; 00491a21
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00491a22
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00491a27
    TEST EAX,EAX                        ; 00491a2a
    JZ 0x00491a6a                       ; 00491a2c
        ;   XREF to: 00491a6a (CONDITIONAL_JUMP)  ; LAB_00491a6a
    MOV EDX,dword ptr [EDI + 0xc84]     ; 00491a2e
    XOR ESI,ESI                         ; 00491a34
    TEST EDX,EDX                        ; 00491a36
    JLE 0x00491a5c                      ; 00491a38
        ;   XREF to: 00491a5c (CONDITIONAL_JUMP)  ; LAB_00491a5c
    LEA EBX,[EDI + 0xc88]               ; 00491a3a
    PUSH EBP                            ; 00491a40
        ;   Label: LAB_00491a40
    PUSH EBX                            ; 00491a41
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00491a42
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00491a47
    TEST EAX,EAX                        ; 00491a4a
    JZ 0x00491a6a                       ; 00491a4c
        ;   XREF to: 00491a6a (CONDITIONAL_JUMP)  ; LAB_00491a6a
    INC ESI                             ; 00491a4e
    MOV ECX,dword ptr [EDI + 0xc84]     ; 00491a4f
    ADD EBX,0x20                        ; 00491a55
    CMP ESI,ECX                         ; 00491a58
    JL 0x00491a40                       ; 00491a5a
        ;   XREF to: 00491a40 (CONDITIONAL_JUMP)  ; LAB_00491a40
    PUSH EBP                            ; 00491a5c
        ;   Label: LAB_00491a5c
    PUSH EDI                            ; 00491a5d
    CALL core_event.cpp_CEventList_findPersistentEvent_FUN_00494d30 ; 00491a5e
        ;   XREF to: 00494d30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findPersistentEvent_FUN_00494d30(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 00491a63
    TEST EAX,EAX                        ; 00491a66
    JL 0x00491a74                       ; 00491a68
        ;   XREF to: 00491a74 (CONDITIONAL_JUMP)  ; LAB_00491a74
    MOV EAX,0x1                         ; 00491a6a
        ;   Label: LAB_00491a6a
    POP EBP                             ; 00491a6f
    POP EDI                             ; 00491a70
    POP ESI                             ; 00491a71
    POP EBX                             ; 00491a72
    RET                                 ; 00491a73
    PUSH EBP                            ; 00491a74
        ;   Label: LAB_00491a74
    PUSH EDI                            ; 00491a75
    CALL core_event.cpp_CEventList_findGameFlag_FUN_00494d80 ; 00491a76
        ;   XREF to: 00494d80 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findGameFlag_FUN_00494d80(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 00491a7b
    TEST EAX,EAX                        ; 00491a7e
    JGE 0x00491a6a                      ; 00491a80
        ;   XREF to: 00491a6a (CONDITIONAL_JUMP)  ; LAB_00491a6a
    PUSH EBP                            ; 00491a82
    PUSH EDI                            ; 00491a83
    CALL core_event.cpp_CEventList_findTimer_FUN_00494dd0 ; 00491a84
        ;   XREF to: 00494dd0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findTimer_FUN_00494dd0(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 00491a89
    TEST EAX,EAX                        ; 00491a8c
    JGE 0x00491a6a                      ; 00491a8e
        ;   XREF to: 00491a6a (CONDITIONAL_JUMP)  ; LAB_00491a6a
    XOR EAX,EAX                         ; 00491a90
    POP EBP                             ; 00491a92
    POP EDI                             ; 00491a93
    POP ESI                             ; 00491a94
    POP EBX                             ; 00491a95
    RET                                 ; 00491a96


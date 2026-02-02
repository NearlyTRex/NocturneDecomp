; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_event_cpp_CEventList_FUN_004b0b80(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_event.cpp_FUN_004aa400 at 004aa41f
;   core_script.cpp_getActor_FUN_005594e0 at 00559552
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004b0bf0
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0b80
        ;   Label: core_event.cpp_CEventList_FUN_004b0b80
    PUSH ESI                            ; 004b0b81
    PUSH EDI                            ; 004b0b82
    PUSH EBP                            ; 004b0b83
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b0b84
    MOV EDX,dword ptr [ESP + 0x18]      ; 004b0b88
    PUSH EDX                            ; 004b0b8c
    PUSH EDI                            ; 004b0b8d
    CALL core_event.cpp_CEventList_FUN_004b0bf0 ; 004b0b8e
        ;   XREF to: 004b0bf0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_FUN_004b0bf0(CEventList * this_ptr)
    ADD ESP,0x8                         ; 004b0b93
    TEST EAX,EAX                        ; 004b0b96
    JL 0x004b0bbc                       ; 004b0b98
        ;   XREF to: 004b0bbc (CONDITIONAL_JUMP)  ; LAB_004b0bbc
    ADD EAX,EAX                         ; 004b0b9a
    MOV EBX,EAX                         ; 004b0b9c
    SHL EAX,0x4                         ; 004b0b9e
    ADD EDI,0x37da                      ; 004b0ba1
    SUB EAX,EBX                         ; 004b0ba7
    XOR ESI,ESI                         ; 004b0ba9
    ADD EDI,EAX                         ; 004b0bab
    XOR EBX,EBX                         ; 004b0bad
    MOV EAX,[0x006810c8]                ; 004b0baf | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_004b0baf
    CMP ESI,dword ptr [EAX + 0x14d154]  ; 004b0bb4 | g_CDemonSetInstance.actor_list_ptr
    JL 0x004b0bc9                       ; 004b0bba
        ;   XREF to: 004b0bc9 (CONDITIONAL_JUMP)  ; LAB_004b0bc9
    XOR EAX,EAX                         ; 004b0bbc
        ;   Label: LAB_004b0bbc
    POP EBP                             ; 004b0bbe
    POP EDI                             ; 004b0bbf
    POP ESI                             ; 004b0bc0
    POP EBX                             ; 004b0bc1
    RET                                 ; 004b0bc2
    INC ESI                             ; 004b0bc3
        ;   Label: LAB_004b0bc3
    ADD EBX,0x4                         ; 004b0bc4
    JMP 0x004b0baf                      ; 004b0bc7
        ;   XREF to: 004b0baf (UNCONDITIONAL_JUMP)  ; LAB_004b0baf
    PUSH EDI                            ; 004b0bc9
        ;   Label: LAB_004b0bc9
    MOV EBP,dword ptr [EBX + EAX*0x1 + 0x14d158] ; 004b0bca | g_CDemonSetInstance.actor_list_data[0]
    PUSH EBP                            ; 004b0bd1
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b0bd2
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b0bd7
    TEST EAX,EAX                        ; 004b0bda
    JNZ 0x004b0bc3                      ; 004b0bdc
        ;   XREF to: 004b0bc3 (CONDITIONAL_JUMP)  ; LAB_004b0bc3
    MOV EAX,[0x006810c8]                ; 004b0bde | g_CDemonSetPtr
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14d158] ; 004b0be3 | g_CDemonSetInstance.actor_list_data[0]
    POP EBP                             ; 004b0bea
    POP EDI                             ; 004b0beb
    POP ESI                             ; 004b0bec
    POP EBX                             ; 004b0bed
    RET                                 ; 004b0bee


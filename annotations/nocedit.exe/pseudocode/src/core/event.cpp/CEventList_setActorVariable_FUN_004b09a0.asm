; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_004b09a0(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c3da
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_00625bf9
;   TerminatedCString s_Tried_to_assign_actor_va_00625c0b
;   TerminatedCString s_core_event_cpp_00625c49
;   TerminatedCString s_CEventList_setActorVaria_00625c5b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   core_event.cpp_CEventList_findActorVariable_FUN_004b0bf0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b09a0
        ;   Label: core_event.cpp_CEventList_setActorVariable_FUN_004b09a0
    PUSH ESI                            ; 004b09a1
    PUSH EDI                            ; 004b09a2
    PUSH EBP                            ; 004b09a3
    SUB ESP,0x8                         ; 004b09a4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004b09a7
    MOV EDI,dword ptr [ESP + 0x20]      ; 004b09ab
    MOV EBP,dword ptr [ESP + 0x24]      ; 004b09af
    TEST EBP,EBP                        ; 004b09b3
    JZ 0x004b09eb                       ; 004b09b5
        ;   XREF to: 004b09eb (CONDITIONAL_JUMP)  ; LAB_004b09eb
    CMP byte ptr [EBP],0x0              ; 004b09b7
    JNZ 0x004b09eb                      ; 004b09bb
        ;   XREF to: 004b09eb (CONDITIONAL_JUMP)  ; LAB_004b09eb
    MOV EDX,0x625bf9                    ; 004b09bd | = "..\\core\\event.cpp"
    MOV ECX,0xb2b                       ; 004b09c2
    PUSH EBP                            ; 004b09c7
    MOV dword ptr [0x02f0ca48],EDX      ; 004b09c8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004b09ce | g_CurrentLineNumber
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 004b09d4
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004b09d9
    PUSH EAX                            ; 004b09dc
    PUSH EDI                            ; 004b09dd
    PUSH 0x625c0b                       ; 004b09de | = "Tried to assign actor var %s an actor..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b09e3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 004b09e8
    PUSH EDI                            ; 004b09eb
        ;   Label: LAB_004b09eb
    PUSH EBX                            ; 004b09ec
    CALL core_event.cpp_CEventList_findActorVariable_FUN_004b0bf0 ; 004b09ed
        ;   XREF to: 004b0bf0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findActorVariable_FUN_004b0bf0(CEventList * this_ptr, char * name)
    MOV ESI,EAX                         ; 004b09f2
    ADD ESP,0x8                         ; 004b09f4
    TEST EAX,EAX                        ; 004b09f7
    JL 0x004b0a6f                       ; 004b09f9
        ;   XREF to: 004b0a6f (CONDITIONAL_JUMP)  ; LAB_004b0a6f
    LEA EAX,[EBX + 0x37da]              ; 004b09fb
    MOV dword ptr [ESP],EAX             ; 004b0a01
    MOV EAX,ESI                         ; 004b0a04
    ADD EAX,EAX                         ; 004b0a06
    MOV EDX,EAX                         ; 004b0a08
    SHL EAX,0x4                         ; 004b0a0a
    SUB EAX,EDX                         ; 004b0a0d
    MOV EDX,dword ptr [ESP]             ; 004b0a0f
    ADD EDX,EAX                         ; 004b0a12
    LEA ECX,[EBX + 0x34ec]              ; 004b0a14
    MOV dword ptr [ESP + 0x4],EDX       ; 004b0a1a
    LEA EDX,[ECX + EAX*0x1]             ; 004b0a1e
    TEST EBP,EBP                        ; 004b0a21
    JZ 0x004b0b19                       ; 004b0a23
        ;   XREF to: 004b0b19 (CONDITIONAL_JUMP)  ; LAB_004b0b19
    MOV ESI,EDI                         ; 004b0a29
    MOV EDI,EDX                         ; 004b0a2b
    PUSH EDI                            ; 004b0a2d
    MOV AL,byte ptr [ESI]               ; 004b0a2e
        ;   Label: LAB_004b0a2e
    MOV byte ptr [EDI],AL               ; 004b0a30
    CMP AL,0x0                          ; 004b0a32
    JZ 0x004b0a46                       ; 004b0a34
        ;   XREF to: 004b0a46 (CONDITIONAL_JUMP)  ; LAB_004b0a46
    MOV AL,byte ptr [ESI + 0x1]         ; 004b0a36
    ADD ESI,0x2                         ; 004b0a39
    MOV byte ptr [EDI + 0x1],AL         ; 004b0a3c
    ADD EDI,0x2                         ; 004b0a3f
    CMP AL,0x0                          ; 004b0a42
    JNZ 0x004b0a2e                      ; 004b0a44
        ;   XREF to: 004b0a2e (CONDITIONAL_JUMP)  ; LAB_004b0a2e
    POP EDI                             ; 004b0a46
        ;   Label: LAB_004b0a46
    MOV EDI,dword ptr [ESP + 0x4]       ; 004b0a47
    MOV ESI,EBP                         ; 004b0a4b
    PUSH EDI                            ; 004b0a4d
    MOV AL,byte ptr [ESI]               ; 004b0a4e
        ;   Label: LAB_004b0a4e
    MOV byte ptr [EDI],AL               ; 004b0a50
    CMP AL,0x0                          ; 004b0a52
    JZ 0x004b0a66                       ; 004b0a54
        ;   XREF to: 004b0a66 (CONDITIONAL_JUMP)  ; LAB_004b0a66
    MOV AL,byte ptr [ESI + 0x1]         ; 004b0a56
    ADD ESI,0x2                         ; 004b0a59
    MOV byte ptr [EDI + 0x1],AL         ; 004b0a5c
    ADD EDI,0x2                         ; 004b0a5f
    CMP AL,0x0                          ; 004b0a62
    JNZ 0x004b0a4e                      ; 004b0a64
        ;   XREF to: 004b0a4e (CONDITIONAL_JUMP)  ; LAB_004b0a4e
    POP EDI                             ; 004b0a66
        ;   Label: LAB_004b0a66
    ADD ESP,0x8                         ; 004b0a67
        ;   Label: LAB_004b0a67
    POP EBP                             ; 004b0a6a
    POP EDI                             ; 004b0a6b
    POP ESI                             ; 004b0a6c
    POP EBX                             ; 004b0a6d
    RET                                 ; 004b0a6e
    TEST EBP,EBP                        ; 004b0a6f
        ;   Label: LAB_004b0a6f
    JZ 0x004b0a67                       ; 004b0a71
        ;   XREF to: 004b0a67 (CONDITIONAL_JUMP)  ; LAB_004b0a67
    CMP dword ptr [EBX + 0x34e8],0x19   ; 004b0a73
    JL 0x004b0aa1                       ; 004b0a7a
        ;   XREF to: 004b0aa1 (CONDITIONAL_JUMP)  ; LAB_004b0aa1
    PUSH 0x19                           ; 004b0a7c
    MOV ECX,0x625c49                    ; 004b0a7e | = "..\\core\\event.cpp"
    MOV ESI,0xb38                       ; 004b0a83
    PUSH 0x625c5b                       ; 004b0a88 | = "CEventList::setActorVariable - alread..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004b0a8d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004b0a93 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b0a99
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004b0a9e
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 004b0aa1
        ;   Label: LAB_004b0aa1
    ADD EAX,EAX                         ; 004b0aa7
    MOV EDX,EAX                         ; 004b0aa9
    SHL EAX,0x4                         ; 004b0aab
    SUB EAX,EDX                         ; 004b0aae
    MOV EDX,EAX                         ; 004b0ab0
    LEA EAX,[EBX + 0x34ec]              ; 004b0ab2
    ADD EAX,EDX                         ; 004b0ab8
    MOV ESI,EDI                         ; 004b0aba
    MOV EDI,EAX                         ; 004b0abc
    PUSH EDI                            ; 004b0abe
    MOV AL,byte ptr [ESI]               ; 004b0abf
        ;   Label: LAB_004b0abf
    MOV byte ptr [EDI],AL               ; 004b0ac1
    CMP AL,0x0                          ; 004b0ac3
    JZ 0x004b0ad7                       ; 004b0ac5
        ;   XREF to: 004b0ad7 (CONDITIONAL_JUMP)  ; LAB_004b0ad7
    MOV AL,byte ptr [ESI + 0x1]         ; 004b0ac7
    ADD ESI,0x2                         ; 004b0aca
    MOV byte ptr [EDI + 0x1],AL         ; 004b0acd
    ADD EDI,0x2                         ; 004b0ad0
    CMP AL,0x0                          ; 004b0ad3
    JNZ 0x004b0abf                      ; 004b0ad5
        ;   XREF to: 004b0abf (CONDITIONAL_JUMP)  ; LAB_004b0abf
    POP EDI                             ; 004b0ad7
        ;   Label: LAB_004b0ad7
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 004b0ad8
    ADD EAX,EAX                         ; 004b0ade
    MOV EDX,EAX                         ; 004b0ae0
    SHL EAX,0x4                         ; 004b0ae2
    LEA EDI,[EBX + 0x37da]              ; 004b0ae5
    SUB EAX,EDX                         ; 004b0aeb
    MOV ESI,EBP                         ; 004b0aed
    ADD EDI,EAX                         ; 004b0aef
    PUSH EDI                            ; 004b0af1
    MOV AL,byte ptr [ESI]               ; 004b0af2
        ;   Label: LAB_004b0af2
    MOV byte ptr [EDI],AL               ; 004b0af4
    CMP AL,0x0                          ; 004b0af6
    JZ 0x004b0b0a                       ; 004b0af8
        ;   XREF to: 004b0b0a (CONDITIONAL_JUMP)  ; LAB_004b0b0a
    MOV AL,byte ptr [ESI + 0x1]         ; 004b0afa
    ADD ESI,0x2                         ; 004b0afd
    MOV byte ptr [EDI + 0x1],AL         ; 004b0b00
    ADD EDI,0x2                         ; 004b0b03
    CMP AL,0x0                          ; 004b0b06
    JNZ 0x004b0af2                      ; 004b0b08
        ;   XREF to: 004b0af2 (CONDITIONAL_JUMP)  ; LAB_004b0af2
    POP EDI                             ; 004b0b0a
        ;   Label: LAB_004b0b0a
    INC dword ptr [EBX + 0x34e8]        ; 004b0b0b
    ADD ESP,0x8                         ; 004b0b11
    POP EBP                             ; 004b0b14
    POP EDI                             ; 004b0b15
    POP ESI                             ; 004b0b16
    POP EBX                             ; 004b0b17
    RET                                 ; 004b0b18
    MOV EDI,dword ptr [EBX + 0x34e8]    ; 004b0b19
        ;   Label: LAB_004b0b19
    DEC EDI                             ; 004b0b1f
    MOV EAX,EDI                         ; 004b0b20
    SUB EAX,ESI                         ; 004b0b22
    ADD EAX,EAX                         ; 004b0b24
    MOV dword ptr [EBX + 0x34e8],EDI    ; 004b0b26
    MOV EDI,EAX                         ; 004b0b2c
    SHL EAX,0x4                         ; 004b0b2e
    SUB EAX,EDI                         ; 004b0b31
    PUSH EAX                            ; 004b0b33
    LEA EAX,[ESI + 0x1]                 ; 004b0b34
    ADD EAX,EAX                         ; 004b0b37
    MOV EDI,EAX                         ; 004b0b39
    SHL EAX,0x4                         ; 004b0b3b
    SUB EAX,EDI                         ; 004b0b3e
    ADD ECX,EAX                         ; 004b0b40
    PUSH ECX                            ; 004b0b42
    PUSH EDX                            ; 004b0b43
    MOV EDI,EAX                         ; 004b0b44
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b0b46
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 004b0b4b
    SUB EAX,ESI                         ; 004b0b51
    ADD EAX,EAX                         ; 004b0b53
    MOV EDX,EAX                         ; 004b0b55
    SHL EAX,0x4                         ; 004b0b57
    ADD ESP,0xc                         ; 004b0b5a
    SUB EAX,EDX                         ; 004b0b5d
    MOV EBP,dword ptr [ESP]             ; 004b0b5f
    PUSH EAX                            ; 004b0b62
    ADD EDI,EBP                         ; 004b0b63
    PUSH EDI                            ; 004b0b65
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b0b66
    PUSH EAX                            ; 004b0b6a
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b0b6b
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004b0b70
    ADD ESP,0x8                         ; 004b0b73
    POP EBP                             ; 004b0b76
    POP EDI                             ; 004b0b77
    POP ESI                             ; 004b0b78
    POP EBX                             ; 004b0b79
    RET                                 ; 004b0b7a


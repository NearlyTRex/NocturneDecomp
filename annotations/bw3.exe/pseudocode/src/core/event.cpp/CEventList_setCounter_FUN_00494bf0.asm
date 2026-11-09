; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_setCounter_FUN_00494bf0(CEventList *this_ptr,char *name,int value)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
; int              Stack[0xc]:4   value
;
; XREF[2]:
;   core_event.cpp_FUN_0048c2e0 at 0048e5bf
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052ccd8
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005bff89
;   TerminatedCString s_CEventList_setCounter_to_005bff9b
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_event.cpp_CEventList_findCounter_FUN_00494e20
;   core_main.c_FUN_004e4330
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494bf0
        ;   Label: core_event.cpp_CEventList_setCounter_FUN_00494bf0
    PUSH ESI                            ; 00494bf1
    PUSH EDI                            ; 00494bf2
    PUSH EBP                            ; 00494bf3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00494bf4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00494bf8
    MOV EDX,dword ptr [ESP + 0x18]      ; 00494bfc
    PUSH EDX                            ; 00494c00
    PUSH EBX                            ; 00494c01
    CALL core_event.cpp_CEventList_findCounter_FUN_00494e20 ; 00494c02
        ;   XREF to: 00494e20 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findCounter_FUN_00494e20(CEventList * this_ptr, char * name)
    MOV ESI,EAX                         ; 00494c07
    ADD ESP,0x8                         ; 00494c09
    TEST EAX,EAX                        ; 00494c0c
    JL 0x00494c7e                       ; 00494c0e
        ;   XREF to: 00494c7e (CONDITIONAL_JUMP)  ; LAB_00494c7e
    LEA EDI,[EAX*0x4 + 0x0]             ; 00494c10
    TEST EBP,EBP                        ; 00494c17
    JZ 0x00494c27                       ; 00494c19
        ;   XREF to: 00494c27 (CONDITIONAL_JUMP)  ; LAB_00494c27
    MOV dword ptr [EDI + EBX*0x1 + 0x34c0],EBP ; 00494c1b
    POP EBP                             ; 00494c22
        ;   Label: LAB_00494c22
    POP EDI                             ; 00494c23
    POP ESI                             ; 00494c24
    POP EBX                             ; 00494c25
    RET                                 ; 00494c26
    MOV EAX,dword ptr [EBX + 0x337c]    ; 00494c27
        ;   Label: LAB_00494c27
    DEC EAX                             ; 00494c2d
    MOV dword ptr [EBX + 0x337c],EAX    ; 00494c2e
    SUB EAX,ESI                         ; 00494c34
    SHL EAX,0x5                         ; 00494c36
    PUSH EAX                            ; 00494c39
    MOV EAX,ESI                         ; 00494c3a
    SHL EAX,0x5                         ; 00494c3c
    LEA EBP,[EBX + 0x3380]              ; 00494c3f
    LEA EDX,[EAX + 0x20]                ; 00494c45
    ADD EDX,EBP                         ; 00494c48
    PUSH EDX                            ; 00494c4a
    ADD EAX,EBP                         ; 00494c4b
    PUSH EAX                            ; 00494c4d
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00494c4e
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x337c]    ; 00494c53
    SUB EAX,ESI                         ; 00494c59
    ADD ESP,0xc                         ; 00494c5b
    SHL EAX,0x2                         ; 00494c5e
    ADD EBX,0x34c0                      ; 00494c61
    PUSH EAX                            ; 00494c67
    LEA EAX,[EDI + 0x4]                 ; 00494c68
    ADD EAX,EBX                         ; 00494c6b
    PUSH EAX                            ; 00494c6d
    ADD EBX,EDI                         ; 00494c6e
    PUSH EBX                            ; 00494c70
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00494c71
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00494c76
    POP EBP                             ; 00494c79
    POP EDI                             ; 00494c7a
    POP ESI                             ; 00494c7b
    POP EBX                             ; 00494c7c
    RET                                 ; 00494c7d
    TEST EBP,EBP                        ; 00494c7e
        ;   Label: LAB_00494c7e
    JZ 0x00494c22                       ; 00494c80
        ;   XREF to: 00494c22 (CONDITIONAL_JUMP)  ; LAB_00494c22
    CMP dword ptr [EBX + 0x337c],0xa    ; 00494c82
    JL 0x00494cae                       ; 00494c89
        ;   XREF to: 00494cae (CONDITIONAL_JUMP)  ; LAB_00494cae
    MOV ESI,0x5bff89                    ; 00494c8b | = "..\\core\\event.cpp"
    MOV EDI,0xebb                       ; 00494c90
    PUSH 0x5bff9b                       ; 00494c95 | = "CEventList::setCounter - too many cou..."
    MOV dword ptr [0x01d71de0],ESI      ; 00494c9a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00494ca0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00494ca6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00494cab
    MOV EAX,dword ptr [EBX + 0x337c]    ; 00494cae
        ;   Label: LAB_00494cae
    LEA EDI,[EBX + 0x3380]              ; 00494cb4
    SHL EAX,0x5                         ; 00494cba
    MOV ESI,dword ptr [ESP + 0x18]      ; 00494cbd
    ADD EDI,EAX                         ; 00494cc1
    PUSH EDI                            ; 00494cc3
    MOV AL,byte ptr [ESI]               ; 00494cc4
        ;   Label: LAB_00494cc4
    MOV byte ptr [EDI],AL               ; 00494cc6
    CMP AL,0x0                          ; 00494cc8
    JZ 0x00494cdc                       ; 00494cca
        ;   XREF to: 00494cdc (CONDITIONAL_JUMP)  ; LAB_00494cdc
    MOV AL,byte ptr [ESI + 0x1]         ; 00494ccc
    ADD ESI,0x2                         ; 00494ccf
    MOV byte ptr [EDI + 0x1],AL         ; 00494cd2
    ADD EDI,0x2                         ; 00494cd5
    CMP AL,0x0                          ; 00494cd8
    JNZ 0x00494cc4                      ; 00494cda
        ;   XREF to: 00494cc4 (CONDITIONAL_JUMP)  ; LAB_00494cc4
    POP EDI                             ; 00494cdc
        ;   Label: LAB_00494cdc
    MOV EAX,dword ptr [EBX + 0x337c]    ; 00494cdd
    MOV dword ptr [EBX + EAX*0x4 + 0x34c0],EBP ; 00494ce3
    INC dword ptr [EBX + 0x337c]        ; 00494cea
    POP EBP                             ; 00494cf0
    POP EDI                             ; 00494cf1
    POP ESI                             ; 00494cf2
    POP EBX                             ; 00494cf3
    RET                                 ; 00494cf4


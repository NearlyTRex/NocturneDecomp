; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_setCounter_FUN_004b0720(CEventList *this_ptr,char *name,int value)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
; int              Stack[0xc]:4   value
;
; XREF[2]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004abc14
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055d299
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_00625bbb
;   TerminatedCString s_CEventList_setCounter_to_00625bcd
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_event.cpp_CEventList_findCounter_FUN_004b0950
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0720
        ;   Label: core_event.cpp_CEventList_setCounter_FUN_004b0720
    PUSH ESI                            ; 004b0721
    PUSH EDI                            ; 004b0722
    PUSH EBP                            ; 004b0723
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b0724
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004b0728
    MOV EDX,dword ptr [ESP + 0x18]      ; 004b072c
    PUSH EDX                            ; 004b0730
    PUSH EBX                            ; 004b0731
    CALL core_event.cpp_CEventList_findCounter_FUN_004b0950 ; 004b0732
        ;   XREF to: 004b0950 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findCounter_FUN_004b0950(CEventList * this_ptr, char * name)
    MOV ESI,EAX                         ; 004b0737
    ADD ESP,0x8                         ; 004b0739
    TEST EAX,EAX                        ; 004b073c
    JL 0x004b07ae                       ; 004b073e
        ;   XREF to: 004b07ae (CONDITIONAL_JUMP)  ; LAB_004b07ae
    LEA EDI,[EAX*0x4 + 0x0]             ; 004b0740
    TEST EBP,EBP                        ; 004b0747
    JZ 0x004b0757                       ; 004b0749
        ;   XREF to: 004b0757 (CONDITIONAL_JUMP)  ; LAB_004b0757
    MOV dword ptr [EDI + EBX*0x1 + 0x34c0],EBP ; 004b074b
    POP EBP                             ; 004b0752
        ;   Label: LAB_004b0752
    POP EDI                             ; 004b0753
    POP ESI                             ; 004b0754
    POP EBX                             ; 004b0755
    RET                                 ; 004b0756
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004b0757
        ;   Label: LAB_004b0757
    DEC EAX                             ; 004b075d
    MOV dword ptr [EBX + 0x337c],EAX    ; 004b075e
    SUB EAX,ESI                         ; 004b0764
    SHL EAX,0x5                         ; 004b0766
    PUSH EAX                            ; 004b0769
    MOV EAX,ESI                         ; 004b076a
    SHL EAX,0x5                         ; 004b076c
    LEA EBP,[EBX + 0x3380]              ; 004b076f
    LEA EDX,[EAX + 0x20]                ; 004b0775
    ADD EDX,EBP                         ; 004b0778
    PUSH EDX                            ; 004b077a
    ADD EAX,EBP                         ; 004b077b
    PUSH EAX                            ; 004b077d
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b077e
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004b0783
    SUB EAX,ESI                         ; 004b0789
    ADD ESP,0xc                         ; 004b078b
    SHL EAX,0x2                         ; 004b078e
    ADD EBX,0x34c0                      ; 004b0791
    PUSH EAX                            ; 004b0797
    LEA EAX,[EDI + 0x4]                 ; 004b0798
    ADD EAX,EBX                         ; 004b079b
    PUSH EAX                            ; 004b079d
    ADD EBX,EDI                         ; 004b079e
    PUSH EBX                            ; 004b07a0
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b07a1
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004b07a6
    POP EBP                             ; 004b07a9
    POP EDI                             ; 004b07aa
    POP ESI                             ; 004b07ab
    POP EBX                             ; 004b07ac
    RET                                 ; 004b07ad
    TEST EBP,EBP                        ; 004b07ae
        ;   Label: LAB_004b07ae
    JZ 0x004b0752                       ; 004b07b0
        ;   XREF to: 004b0752 (CONDITIONAL_JUMP)  ; LAB_004b0752
    CMP dword ptr [EBX + 0x337c],0xa    ; 004b07b2
    JL 0x004b07de                       ; 004b07b9
        ;   XREF to: 004b07de (CONDITIONAL_JUMP)  ; LAB_004b07de
    MOV ESI,0x625bbb                    ; 004b07bb | = "..\\core\\event.cpp"
    MOV EDI,0xab2                       ; 004b07c0
    PUSH 0x625bcd                       ; 004b07c5 | = "CEventList::setCounter - too many cou..."
    MOV dword ptr [0x02f0ca48],ESI      ; 004b07ca | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004b07d0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b07d6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b07db
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004b07de
        ;   Label: LAB_004b07de
    LEA EDI,[EBX + 0x3380]              ; 004b07e4
    SHL EAX,0x5                         ; 004b07ea
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b07ed
    ADD EDI,EAX                         ; 004b07f1
    PUSH EDI                            ; 004b07f3
    MOV AL,byte ptr [ESI]               ; 004b07f4
        ;   Label: LAB_004b07f4
    MOV byte ptr [EDI],AL               ; 004b07f6
    CMP AL,0x0                          ; 004b07f8
    JZ 0x004b080c                       ; 004b07fa
        ;   XREF to: 004b080c (CONDITIONAL_JUMP)  ; LAB_004b080c
    MOV AL,byte ptr [ESI + 0x1]         ; 004b07fc
    ADD ESI,0x2                         ; 004b07ff
    MOV byte ptr [EDI + 0x1],AL         ; 004b0802
    ADD EDI,0x2                         ; 004b0805
    CMP AL,0x0                          ; 004b0808
    JNZ 0x004b07f4                      ; 004b080a
        ;   XREF to: 004b07f4 (CONDITIONAL_JUMP)  ; LAB_004b07f4
    POP EDI                             ; 004b080c
        ;   Label: LAB_004b080c
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004b080d
    MOV dword ptr [EBX + EAX*0x4 + 0x34c0],EBP ; 004b0813
    INC dword ptr [EBX + 0x337c]        ; 004b081a
    POP EBP                             ; 004b0820
    POP EDI                             ; 004b0821
    POP ESI                             ; 004b0822
    POP EBX                             ; 004b0823
    RET                                 ; 004b0824


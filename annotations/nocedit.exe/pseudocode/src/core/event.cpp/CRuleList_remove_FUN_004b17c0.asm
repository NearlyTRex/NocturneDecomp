; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CRuleList_remove_FUN_004b17c0(CRuleList *this_ptr)
;
; Parameters:
; CRuleList *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040fe51
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_00625fc1
;   TerminatedCString s_CRuleList_remove_invalid_00625fd3
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b17c0
        ;   Label: core_event.cpp_CRuleList_remove_FUN_004b17c0
    PUSH ESI                            ; 004b17c1
    PUSH EDI                            ; 004b17c2
    PUSH EBP                            ; 004b17c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b17c4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b17c8
    TEST ESI,ESI                        ; 004b17cc
    JL 0x004b185d                       ; 004b17ce
        ;   XREF to: 004b185d (CONDITIONAL_JUMP)  ; LAB_004b185d
    CMP ESI,dword ptr [EBX]             ; 004b17d4
    JGE 0x004b185d                      ; 004b17d6
        ;   XREF to: 004b185d (CONDITIONAL_JUMP)  ; LAB_004b185d
    MOV EBP,dword ptr [EBX]             ; 004b17dc
        ;   Label: LAB_004b17dc
    DEC EBP                             ; 004b17de
    MOV EDX,EBP                         ; 004b17df
    SUB EDX,ESI                         ; 004b17e1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b17e3
    SUB EAX,EDX                         ; 004b17ea
    LEA ECX,[EBX + 0x4]                 ; 004b17ec
    SHL EAX,0x3                         ; 004b17ef
    MOV dword ptr [EBX],EBP             ; 004b17f2
    ADD EAX,EDX                         ; 004b17f4
    LEA EDX,[ESI + 0x1]                 ; 004b17f6
    SHL EAX,0x2                         ; 004b17f9
    LEA EDI,[EDX*0x4 + 0x0]             ; 004b17fc
    PUSH EAX                            ; 004b1803
    SUB EDI,EDX                         ; 004b1804
    LEA EBP,[ESI*0x4 + 0x0]             ; 004b1806
    SHL EDI,0x3                         ; 004b180d
    SUB EBP,ESI                         ; 004b1810
    ADD EDI,EDX                         ; 004b1812
    SHL EBP,0x3                         ; 004b1814
    SHL EDI,0x2                         ; 004b1817
    ADD EBP,ESI                         ; 004b181a
    LEA EAX,[ECX + EDI*0x1]             ; 004b181c
    SHL EBP,0x2                         ; 004b181f
    PUSH EAX                            ; 004b1822
    ADD ECX,EBP                         ; 004b1823
    PUSH ECX                            ; 004b1825
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b1826
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EDX,dword ptr [EBX]             ; 004b182b
    SUB EDX,ESI                         ; 004b182d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b182f
    SUB EAX,EDX                         ; 004b1836
    SHL EAX,0x3                         ; 004b1838
    ADD EAX,EDX                         ; 004b183b
    ADD ESP,0xc                         ; 004b183d
    SHL EAX,0x2                         ; 004b1840
    ADD EBX,0x1f8                       ; 004b1843
    PUSH EAX                            ; 004b1849
    ADD EDI,EBX                         ; 004b184a
    PUSH EDI                            ; 004b184c
    ADD EBX,EBP                         ; 004b184d
    PUSH EBX                            ; 004b184f
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b1850
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004b1855
    POP EBP                             ; 004b1858
    POP EDI                             ; 004b1859
    POP ESI                             ; 004b185a
    POP EBX                             ; 004b185b
    RET                                 ; 004b185c
    MOV ECX,0x625fc1                    ; 004b185d | = "..\\core\\event.cpp"
        ;   Label: LAB_004b185d
    MOV EDI,0xcef                       ; 004b1862
    PUSH 0x625fd3                       ; 004b1867 | = "CRuleList::remove - invalid index"
    MOV dword ptr [0x02f0ca48],ECX      ; 004b186c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004b1872 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b1878
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b187d
    JMP 0x004b17dc                      ; 004b1880
        ;   XREF to: 004b17dc (UNCONDITIONAL_JUMP)  ; LAB_004b17dc


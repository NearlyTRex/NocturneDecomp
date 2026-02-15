; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_removeChatOut_FUN_0053f4b0(int index)
;
; Parameters:
; int              Stack[0x4]:4   index
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063d245
;   TerminatedCString s_removeChatOut_invalid_in_0063d259
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_02f98ad0
;   undefined4 DAT_02f98ad4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f4b0
        ;   Label: core_netgame.cpp_removeChatOut_FUN_0053f4b0
    PUSH EDI                            ; 0053f4b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053f4b2
    TEST EBX,EBX                        ; 0053f4b6
    JL 0x0053f51b                       ; 0053f4b8
        ;   XREF to: 0053f51b (CONDITIONAL_JUMP)  ; LAB_0053f51b
    CMP EBX,dword ptr [0x02f98ad0]      ; 0053f4ba | DAT_02f98ad0
    JGE 0x0053f51b                      ; 0053f4c0
        ;   XREF to: 0053f51b (CONDITIONAL_JUMP)  ; LAB_0053f51b
    MOV EDI,dword ptr [0x02f98ad0]      ; 0053f4c2 | DAT_02f98ad0
        ;   Label: LAB_0053f4c2
    DEC EDI                             ; 0053f4c8
    MOV EDX,EDI                         ; 0053f4c9
    SUB EDX,EBX                         ; 0053f4cb
    MOV EAX,EDX                         ; 0053f4cd
    SHL EAX,0x4                         ; 0053f4cf
    ADD EAX,EDX                         ; 0053f4d2
    SHL EAX,0x2                         ; 0053f4d4
    ADD EAX,EDX                         ; 0053f4d7
    SHL EAX,0x2                         ; 0053f4d9
    LEA EDX,[EBX + 0x1]                 ; 0053f4dc
    PUSH EAX                            ; 0053f4df
    MOV EAX,EDX                         ; 0053f4e0
    SHL EAX,0x4                         ; 0053f4e2
    ADD EAX,EDX                         ; 0053f4e5
    SHL EAX,0x2                         ; 0053f4e7
    ADD EAX,EDX                         ; 0053f4ea
    SHL EAX,0x2                         ; 0053f4ec
    ADD EAX,0x2f98ad4                   ; 0053f4ef | DAT_02f98ad4
    PUSH EAX                            ; 0053f4f4
    MOV EAX,EBX                         ; 0053f4f5
    SHL EAX,0x4                         ; 0053f4f7
    ADD EAX,EBX                         ; 0053f4fa
    SHL EAX,0x2                         ; 0053f4fc
    ADD EAX,EBX                         ; 0053f4ff
    SHL EAX,0x2                         ; 0053f501
    ADD EAX,0x2f98ad4                   ; 0053f504 | DAT_02f98ad4
    PUSH EAX                            ; 0053f509
    MOV dword ptr [0x02f98ad0],EDI      ; 0053f50a | DAT_02f98ad0
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0053f510
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0053f515
    POP EDI                             ; 0053f518
    POP EBX                             ; 0053f519
    RET                                 ; 0053f51a
    PUSH ESI                            ; 0053f51b
        ;   Label: LAB_0053f51b
    MOV ECX,0x63d245                    ; 0053f51c | = "..\\core\\netgame.cpp"
    MOV ESI,0x107                       ; 0053f521
    PUSH 0x63d259                       ; 0053f526 | = "removeChatOut - invalid index"
    MOV dword ptr [0x02f0ca48],ECX      ; 0053f52b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0053f531 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053f537
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0053f53c
    POP ESI                             ; 0053f53f
    JMP 0x0053f4c2                      ; 0053f540
        ;   XREF to: 0053f4c2 (UNCONDITIONAL_JUMP)  ; LAB_0053f4c2


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330 (CEventList *this_ptr,char *name,int add_flag)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
; int              Stack[0xc]:4   add_flag
;
; XREF[2]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ab741
;   core_hostage.cpp_CHostage_process_FUN_004f4bd0 at 004f5bd9
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_00625a89
;   TerminatedCString s_Too_many_persistent_even_00625a9b
;   TerminatedCString s_core_event_cpp_00625ab7
;   TerminatedCString s_Event_name_s_too_long_00625ac9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_event.cpp_CEventList_findPersistentEvent_FUN_004b0860
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;   crt_string.c_strupr_FUN_00600770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0330
        ;   Label: core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330
    PUSH ESI                            ; 004b0331
    PUSH EBP                            ; 004b0332
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b0333
    MOV ESI,dword ptr [ESP + 0x14]      ; 004b0337
    TEST ESI,ESI                        ; 004b033b
    JZ 0x004b0344                       ; 004b033d
        ;   XREF to: 004b0344 (CONDITIONAL_JUMP)  ; LAB_004b0344
    CMP byte ptr [ESI],0x0              ; 004b033f
    JNZ 0x004b0348                      ; 004b0342
        ;   XREF to: 004b0348 (CONDITIONAL_JUMP)  ; LAB_004b0348
    POP EBP                             ; 004b0344
        ;   Label: LAB_004b0344
    POP ESI                             ; 004b0345
    POP EBX                             ; 004b0346
    RET                                 ; 004b0347
    PUSH ESI                            ; 004b0348
        ;   Label: LAB_004b0348
    PUSH EBX                            ; 004b0349
    CALL core_event.cpp_CEventList_findPersistentEvent_FUN_004b0860 ; 004b034a
        ;   XREF to: 004b0860 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findPersistentEvent_FUN_004b0860(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004b034f
    CMP dword ptr [ESP + 0x18],0x0      ; 004b0352
    JZ 0x004b041c                       ; 004b0357
        ;   XREF to: 004b041c (CONDITIONAL_JUMP)  ; LAB_004b041c
    TEST EAX,EAX                        ; 004b035d
    JGE 0x004b0344                      ; 004b035f
        ;   XREF to: 004b0344 (CONDITIONAL_JUMP)  ; LAB_004b0344
    CMP dword ptr [EBX + 0x258c],0x64   ; 004b0361
    JGE 0x004b03f5                      ; 004b0368
        ;   XREF to: 004b03f5 (CONDITIONAL_JUMP)  ; LAB_004b03f5
    PUSH EDI                            ; 004b036e
        ;   Label: LAB_004b036e
    MOV EDI,ESI                         ; 004b036f
    SUB ECX,ECX                         ; 004b0371
    DEC ECX                             ; 004b0373
    XOR EAX,EAX                         ; 004b0374
    SCASB.REPNE ES:EDI                  ; 004b0376
    NOT ECX                             ; 004b0378
    DEC ECX                             ; 004b037a
    CMP ECX,0x20                        ; 004b037b
    JC 0x004b03a4                       ; 004b037e
        ;   XREF to: 004b03a4 (CONDITIONAL_JUMP)  ; LAB_004b03a4
    PUSH ESI                            ; 004b0380
    MOV EDX,0x625ab7                    ; 004b0381 | = "..\\core\\event.cpp"
    MOV ECX,0x9fb                       ; 004b0386
    PUSH 0x625ac9                       ; 004b038b | = "Event name %s too long!"
    MOV dword ptr [0x02f0ca48],EDX      ; 004b0390 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004b0396 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b039c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004b03a1
    MOV EDI,dword ptr [EBX + 0x258c]    ; 004b03a4
        ;   Label: LAB_004b03a4
    LEA EDX,[EBX + 0x2590]              ; 004b03aa
    SHL EDI,0x5                         ; 004b03b0
    ADD EDI,EDX                         ; 004b03b3
    PUSH EDI                            ; 004b03b5
    MOV AL,byte ptr [ESI]               ; 004b03b6
        ;   Label: LAB_004b03b6
    MOV byte ptr [EDI],AL               ; 004b03b8
    CMP AL,0x0                          ; 004b03ba
    JZ 0x004b03ce                       ; 004b03bc
        ;   XREF to: 004b03ce (CONDITIONAL_JUMP)  ; LAB_004b03ce
    MOV AL,byte ptr [ESI + 0x1]         ; 004b03be
    ADD ESI,0x2                         ; 004b03c1
    MOV byte ptr [EDI + 0x1],AL         ; 004b03c4
    ADD EDI,0x2                         ; 004b03c7
    CMP AL,0x0                          ; 004b03ca
    JNZ 0x004b03b6                      ; 004b03cc
        ;   XREF to: 004b03b6 (CONDITIONAL_JUMP)  ; LAB_004b03b6
    POP EDI                             ; 004b03ce
        ;   Label: LAB_004b03ce
    MOV EAX,dword ptr [EBX + 0x258c]    ; 004b03cf
    SHL EAX,0x5                         ; 004b03d5
    ADD EDX,EAX                         ; 004b03d8
    PUSH EDX                            ; 004b03da
    CALL crt_string.c_strupr_FUN_00600770 ; 004b03db
        ;   XREF to: 00600770 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_00600770(char * string)
    MOV ESI,dword ptr [EBX + 0x258c]    ; 004b03e0
    INC ESI                             ; 004b03e6
    ADD ESP,0x4                         ; 004b03e7
    MOV dword ptr [EBX + 0x258c],ESI    ; 004b03ea
    POP EDI                             ; 004b03f0
    POP EBP                             ; 004b03f1
    POP ESI                             ; 004b03f2
    POP EBX                             ; 004b03f3
    RET                                 ; 004b03f4
    MOV EBP,0x625a89                    ; 004b03f5 | = "..\\core\\event.cpp"
        ;   Label: LAB_004b03f5
    MOV EAX,0x9f5                       ; 004b03fa
    PUSH 0x625a9b                       ; 004b03ff | = "Too many persistent events!"
    MOV dword ptr [0x02f0ca48],EBP      ; 004b0404 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004b040a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b040f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b0414
    JMP 0x004b036e                      ; 004b0417
        ;   XREF to: 004b036e (UNCONDITIONAL_JUMP)  ; LAB_004b036e
    TEST EAX,EAX                        ; 004b041c
        ;   Label: LAB_004b041c
    JL 0x004b0344                       ; 004b041e
        ;   XREF to: 004b0344 (CONDITIONAL_JUMP)  ; LAB_004b0344
    MOV ECX,dword ptr [EBX + 0x258c]    ; 004b0424
    DEC ECX                             ; 004b042a
    MOV EDX,ECX                         ; 004b042b
    SUB EDX,EAX                         ; 004b042d
    ADD EBX,0x2590                      ; 004b042f
    SHL EDX,0x5                         ; 004b0435
    SHL EAX,0x5                         ; 004b0438
    PUSH EDX                            ; 004b043b
    LEA EDX,[EAX + 0x20]                ; 004b043c
    ADD EDX,EBX                         ; 004b043f
    PUSH EDX                            ; 004b0441
    ADD EAX,EBX                         ; 004b0442
    PUSH EAX                            ; 004b0444
    MOV dword ptr [EBX + -0x4],ECX      ; 004b0445
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b0448
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004b044d
    POP EBP                             ; 004b0450
    POP ESI                             ; 004b0451
    POP EBX                             ; 004b0452
    RET                                 ; 004b0453


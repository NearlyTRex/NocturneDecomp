; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_event.cpp_CEventList_FUN_004b0470(CEventList * this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_event.cpp_CEventList_FUN_004aacc0 at 004ab84b
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_00625ae1
;   TerminatedCString s_Too_many_game_flags_00625af3
;   TerminatedCString s_core_event_cpp_00625b08
;   TerminatedCString s_Event_name_s_too_long_00625b1a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004b08b0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;   crt_string.c_strupr_FUN_00600770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0470
        ;   Label: core_event.cpp_CEventList_FUN_004b0470
    PUSH ESI                            ; 004b0471
    PUSH EBP                            ; 004b0472
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b0473
    MOV ESI,dword ptr [ESP + 0x14]      ; 004b0477
    TEST ESI,ESI                        ; 004b047b
    JZ 0x004b0484                       ; 004b047d
        ;   XREF to: 004b0484 (CONDITIONAL_JUMP)  ; LAB_004b0484
    CMP byte ptr [ESI],0x0              ; 004b047f
    JNZ 0x004b0488                      ; 004b0482
        ;   XREF to: 004b0488 (CONDITIONAL_JUMP)  ; LAB_004b0488
    POP EBP                             ; 004b0484
        ;   Label: LAB_004b0484
    POP ESI                             ; 004b0485
    POP EBX                             ; 004b0486
    RET                                 ; 004b0487
    PUSH ESI                            ; 004b0488
        ;   Label: LAB_004b0488
    PUSH EBX                            ; 004b0489
    CALL core_event.cpp_CEventList_FUN_004b08b0 ; 004b048a
        ;   XREF to: 004b08b0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_FUN_004b08b0(CEventList * this_ptr)
    ADD ESP,0x8                         ; 004b048f
    CMP dword ptr [ESP + 0x18],0x0      ; 004b0492
    JZ 0x004b055c                       ; 004b0497
        ;   XREF to: 004b055c (CONDITIONAL_JUMP)  ; LAB_004b055c
    TEST EAX,EAX                        ; 004b049d
    JGE 0x004b0484                      ; 004b049f
        ;   XREF to: 004b0484 (CONDITIONAL_JUMP)  ; LAB_004b0484
    CMP dword ptr [EBX + 0x1908],0xa    ; 004b04a1
    JGE 0x004b0535                      ; 004b04a8
        ;   XREF to: 004b0535 (CONDITIONAL_JUMP)  ; LAB_004b0535
    PUSH EDI                            ; 004b04ae
        ;   Label: LAB_004b04ae
    MOV EDI,ESI                         ; 004b04af
    SUB ECX,ECX                         ; 004b04b1
    DEC ECX                             ; 004b04b3
    XOR EAX,EAX                         ; 004b04b4
    SCASB.REPNE ES:EDI                  ; 004b04b6
    NOT ECX                             ; 004b04b8
    DEC ECX                             ; 004b04ba
    CMP ECX,0x20                        ; 004b04bb
    JC 0x004b04e4                       ; 004b04be
        ;   XREF to: 004b04e4 (CONDITIONAL_JUMP)  ; LAB_004b04e4
    PUSH ESI                            ; 004b04c0
    MOV EDX,0x625b08                    ; 004b04c1 | = "..\\core\\event.cpp"
    MOV ECX,0xa3d                       ; 004b04c6
    PUSH 0x625b1a                       ; 004b04cb | = "Event name %s too long!"
    MOV dword ptr [0x02f0ca48],EDX      ; 004b04d0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004b04d6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b04dc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004b04e1
    MOV EDI,dword ptr [EBX + 0x1908]    ; 004b04e4
        ;   Label: LAB_004b04e4
    LEA EDX,[EBX + 0x190c]              ; 004b04ea
    SHL EDI,0x5                         ; 004b04f0
    ADD EDI,EDX                         ; 004b04f3
    PUSH EDI                            ; 004b04f5
    MOV AL,byte ptr [ESI]               ; 004b04f6
        ;   Label: LAB_004b04f6
    MOV byte ptr [EDI],AL               ; 004b04f8
    CMP AL,0x0                          ; 004b04fa
    JZ 0x004b050e                       ; 004b04fc
        ;   XREF to: 004b050e (CONDITIONAL_JUMP)  ; LAB_004b050e
    MOV AL,byte ptr [ESI + 0x1]         ; 004b04fe
    ADD ESI,0x2                         ; 004b0501
    MOV byte ptr [EDI + 0x1],AL         ; 004b0504
    ADD EDI,0x2                         ; 004b0507
    CMP AL,0x0                          ; 004b050a
    JNZ 0x004b04f6                      ; 004b050c
        ;   XREF to: 004b04f6 (CONDITIONAL_JUMP)  ; LAB_004b04f6
    POP EDI                             ; 004b050e
        ;   Label: LAB_004b050e
    MOV EAX,dword ptr [EBX + 0x1908]    ; 004b050f
    SHL EAX,0x5                         ; 004b0515
    ADD EDX,EAX                         ; 004b0518
    PUSH EDX                            ; 004b051a
    CALL crt_string.c_strupr_FUN_00600770 ; 004b051b
        ;   XREF to: 00600770 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_00600770(char * string)
    MOV ESI,dword ptr [EBX + 0x1908]    ; 004b0520
    INC ESI                             ; 004b0526
    ADD ESP,0x4                         ; 004b0527
    MOV dword ptr [EBX + 0x1908],ESI    ; 004b052a
    POP EDI                             ; 004b0530
    POP EBP                             ; 004b0531
    POP ESI                             ; 004b0532
    POP EBX                             ; 004b0533
    RET                                 ; 004b0534
    MOV EBP,0x625ae1                    ; 004b0535 | = "..\\core\\event.cpp"
        ;   Label: LAB_004b0535
    MOV EAX,0xa37                       ; 004b053a
    PUSH 0x625af3                       ; 004b053f | = "Too many game flags!"
    MOV dword ptr [0x02f0ca48],EBP      ; 004b0544 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004b054a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b054f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b0554
    JMP 0x004b04ae                      ; 004b0557
        ;   XREF to: 004b04ae (UNCONDITIONAL_JUMP)  ; LAB_004b04ae
    TEST EAX,EAX                        ; 004b055c
        ;   Label: LAB_004b055c
    JL 0x004b0484                       ; 004b055e
        ;   XREF to: 004b0484 (CONDITIONAL_JUMP)  ; LAB_004b0484
    MOV ECX,dword ptr [EBX + 0x1908]    ; 004b0564
    DEC ECX                             ; 004b056a
    MOV EDX,ECX                         ; 004b056b
    SUB EDX,EAX                         ; 004b056d
    ADD EBX,0x190c                      ; 004b056f
    SHL EDX,0x5                         ; 004b0575
    SHL EAX,0x5                         ; 004b0578
    PUSH EDX                            ; 004b057b
    LEA EDX,[EAX + 0x20]                ; 004b057c
    ADD EDX,EBX                         ; 004b057f
    PUSH EDX                            ; 004b0581
    ADD EAX,EBX                         ; 004b0582
    PUSH EAX                            ; 004b0584
    MOV dword ptr [EBX + -0x4],ECX      ; 004b0585
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b0588
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004b058d
    POP EBP                             ; 004b0590
    POP ESI                             ; 004b0591
    POP EBX                             ; 004b0592
    RET                                 ; 004b0593


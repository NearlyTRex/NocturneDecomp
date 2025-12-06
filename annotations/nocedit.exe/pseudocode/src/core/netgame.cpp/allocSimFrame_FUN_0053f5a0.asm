; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_allocSimFrame_FUN_0053f5a0()
;
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063d277
;   TerminatedCString s_allocSimFrame_sim_histor_0063d28b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_SimFrameCount
;   undefined4 g_SimFrameHistory
;   undefined4 DAT_02f9c128
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f5a0
        ;   Label: core_netgame.cpp_allocSimFrame_FUN_0053f5a0
    PUSH EBP                            ; 0053f5a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053f5a2
    MOV ECX,dword ptr [0x02f9c0c0]      ; 0053f5a6 | int g_SimFrameCount
    XOR EDX,EDX                         ; 0053f5ac
    TEST ECX,ECX                        ; 0053f5ae
    JLE 0x0053f5e1                      ; 0053f5b0 | LAB_0053f5e1
        ;   XREF to: 0053f5e1 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 0053f5b2
    MOV ESI,ECX                         ; 0053f5b3
    SHL ECX,0x2                         ; 0053f5b5
    SUB ECX,ESI                         ; 0053f5b8
    SHL ECX,0x3                         ; 0053f5ba
    ADD ECX,ESI                         ; 0053f5bd
    XOR EAX,EAX                         ; 0053f5bf
    SHL ECX,0x2                         ; 0053f5c1
    POP ESI                             ; 0053f5c4
    CMP EBX,dword ptr [EAX + 0x2f9c0c4] ; 0053f5c5 | undefined4 g_SimFrameHistory | DAT_02f9c128
        ;   Label: LAB_0053f5c5
    JNZ 0x0053f5d9                      ; 0053f5cb | LAB_0053f5d9
        ;   XREF to: 0053f5d9 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 0053f5cd
    JL 0x0053f5e1                       ; 0053f5cf | LAB_0053f5e1
        ;   XREF to: 0053f5e1 (CONDITIONAL_JUMP)
    ADD EAX,0x2f9c0c4                   ; 0053f5d1 | undefined4 DAT_02f9c128 | undefined4 g_SimFrameHistory
    POP EBP                             ; 0053f5d6
    POP EBX                             ; 0053f5d7
    RET                                 ; 0053f5d8
    ADD EAX,0x64                        ; 0053f5d9
        ;   Label: LAB_0053f5d9
    INC EDX                             ; 0053f5dc
    CMP EAX,ECX                         ; 0053f5dd
    JL 0x0053f5c5                       ; 0053f5df | LAB_0053f5c5
        ;   XREF to: 0053f5c5 (CONDITIONAL_JUMP)
    CMP dword ptr [0x02f9c0c0],0x200    ; 0053f5e1 | int g_SimFrameCount
        ;   Label: LAB_0053f5e1
    JL 0x0053f60f                       ; 0053f5eb | LAB_0053f60f
        ;   XREF to: 0053f60f (CONDITIONAL_JUMP)
    MOV EBP,0x63d277                    ; 0053f5ed | = "..\\core\\netgame.cpp" | s_core_netgame_cpp_0063d277 = ..\core\netgame.cpp
    MOV EAX,0x12b                       ; 0053f5f2
    PUSH 0x63d28b                       ; 0053f5f7 | = "allocSimFrame - sim history list full" | s_allocSimFrame_sim_histor_0063d28b = allocSimFrame - sim history list full
    MOV dword ptr [0x02f0ca48],EBP      ; 0053f5fc | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0053f602 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053f607 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0053f60c
    MOV EDX,dword ptr [0x02f9c0c0]      ; 0053f60f | int g_SimFrameCount
        ;   Label: LAB_0053f60f
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053f615
    SUB EAX,EDX                         ; 0053f61c
    SHL EAX,0x3                         ; 0053f61e
    MOV EBX,0x2f9c0c4                   ; 0053f621 | undefined4 g_SimFrameHistory
    ADD EAX,EDX                         ; 0053f626
    PUSH 0x64                           ; 0053f628
    SHL EAX,0x2                         ; 0053f62a
    PUSH 0x0                            ; 0053f62d
    ADD EBX,EAX                         ; 0053f62f
    INC EDX                             ; 0053f631
    PUSH EBX                            ; 0053f632
    MOV dword ptr [0x02f9c0c0],EDX      ; 0053f633 | int g_SimFrameCount
    CALL crt_memory.c_memset_FUN_005fde40 ; 0053f639 | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053f63e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053f641
    MOV dword ptr [EBX],EAX             ; 0053f645 | undefined4 g_SimFrameHistory
    MOV EAX,EBX                         ; 0053f647
    POP EBP                             ; 0053f649
    POP EBX                             ; 0053f64a
    RET                                 ; 0053f64b


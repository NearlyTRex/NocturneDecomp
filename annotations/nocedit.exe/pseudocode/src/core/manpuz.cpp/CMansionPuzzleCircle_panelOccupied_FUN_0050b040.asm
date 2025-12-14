; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040()
;
;
; XREF[1]:
;   core_manpuz.cpp_FUN_0050a610 at 0050a891
;
; Referenced Globals:
;   TerminatedCString s_core_manpuz_cpp_006358ba
;   TerminatedCString s_CMansionPuzzleCircle_pan_006358cd
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_manpuz.cpp_FUN_0050aef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b040
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040
    PUSH ESI                            ; 0050b041
    PUSH EBP                            ; 0050b042
    MOV ESI,dword ptr [ESP + 0x10]      ; 0050b043
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050b047
    TEST EBX,EBX                        ; 0050b04b
    JL 0x0050b054                       ; 0050b04d
        ;   XREF to: 0050b054 (CONDITIONAL_JUMP)  ; LAB_0050b054
    CMP EBX,0xc                         ; 0050b04f
    JL 0x0050b078                       ; 0050b052
        ;   XREF to: 0050b078 (CONDITIONAL_JUMP)  ; LAB_0050b078
    PUSH EBX                            ; 0050b054
        ;   Label: LAB_0050b054
    MOV EDX,0x6358ba                    ; 0050b055 | = "..\\core\\manpuz.cpp"
    MOV ECX,0x5e6                       ; 0050b05a
    PUSH 0x6358cd                       ; 0050b05f | = "CMansionPuzzleCircle::panelOccupied -..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0050b064 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0050b06a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050b070
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0050b075
    LEA EAX,[EBX*0x4 + 0x0]             ; 0050b078
        ;   Label: LAB_0050b078
    SUB EAX,EBX                         ; 0050b07f
    SHL EAX,0x3                         ; 0050b081
    ADD EAX,EBX                         ; 0050b084
    CMP dword ptr [ESI + EAX*0x4 + 0x5f0],0x0 ; 0050b086
    JZ 0x0050b099                       ; 0050b08e
        ;   XREF to: 0050b099 (CONDITIONAL_JUMP)  ; LAB_0050b099
    MOV EAX,0x1                         ; 0050b090
        ;   Label: LAB_0050b090
    POP EBP                             ; 0050b095
    POP ESI                             ; 0050b096
    POP EBX                             ; 0050b097
    RET                                 ; 0050b098
    PUSH EBX                            ; 0050b099
        ;   Label: LAB_0050b099
    PUSH ESI                            ; 0050b09a
    CALL core_manpuz.cpp_FUN_0050aef0   ; 0050b09b
        ;   XREF to: 0050aef0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_0050aef0()
    MOV EDX,EAX                         ; 0050b0a0
    SHL EAX,0x2                         ; 0050b0a2
    SUB EAX,EDX                         ; 0050b0a5
    SHL EAX,0x3                         ; 0050b0a7
    ADD EAX,EDX                         ; 0050b0aa
    SHL EAX,0x2                         ; 0050b0ac
    ADD EAX,ESI                         ; 0050b0af
    MOV EBP,dword ptr [EAX + 0x5f0]     ; 0050b0b1
    ADD ESP,0x8                         ; 0050b0b7
    TEST EBP,EBP                        ; 0050b0ba
    JZ 0x0050b0ca                       ; 0050b0bc
        ;   XREF to: 0050b0ca (CONDITIONAL_JUMP)  ; LAB_0050b0ca
    TEST dword ptr [EAX + 0x5f8],0x7fffffff ; 0050b0be
    JNZ 0x0050b090                      ; 0050b0c8
        ;   XREF to: 0050b090 (CONDITIONAL_JUMP)  ; LAB_0050b090
    XOR EAX,EAX                         ; 0050b0ca
        ;   Label: LAB_0050b0ca
    POP EBP                             ; 0050b0cc
    POP ESI                             ; 0050b0cd
    POP EBX                             ; 0050b0ce
    RET                                 ; 0050b0cf


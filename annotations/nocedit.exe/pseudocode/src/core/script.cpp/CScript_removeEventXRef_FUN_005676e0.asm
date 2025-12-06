; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_CScript_removeEventXRef_FUN_005676e0()
;
;
; XREF[1]:
;   core_script.cpp_FUN_00562920 at 005633cc
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_0064408b
;   TerminatedCString s_CDemonMission_removeEven_0064409e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005676e0
        ;   Label: core_script.cpp_CScript_removeEventXRef_FUN_005676e0
    PUSH ESI                            ; 005676e1
    PUSH EBP                            ; 005676e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005676e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005676e7
    TEST EBX,EBX                        ; 005676eb
    JL 0x00567745                       ; 005676ed | LAB_00567745
        ;   XREF to: 00567745 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [ESI + 0x28]      ; 005676ef
    JGE 0x00567745                      ; 005676f2 | LAB_00567745
        ;   XREF to: 00567745 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESI + 0x28]      ; 005676f4
        ;   Label: LAB_005676f4
    DEC EBP                             ; 005676f7
    MOV EDX,EBP                         ; 005676f8
    SUB EDX,EBX                         ; 005676fa
    MOV EAX,EDX                         ; 005676fc
    SHL EAX,0x4                         ; 005676fe
    ADD EAX,EDX                         ; 00567701
    SHL EAX,0x2                         ; 00567703
    ADD EAX,EDX                         ; 00567706
    SHL EAX,0x2                         ; 00567708
    LEA EDX,[EBX + 0x1]                 ; 0056770b
    PUSH EAX                            ; 0056770e
    MOV EAX,EDX                         ; 0056770f
    SHL EAX,0x4                         ; 00567711
    ADD EAX,EDX                         ; 00567714
    SHL EAX,0x2                         ; 00567716
    ADD EAX,EDX                         ; 00567719
    SHL EAX,0x2                         ; 0056771b
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0056771e
    ADD EAX,EDX                         ; 00567721
    PUSH EAX                            ; 00567723
    MOV EAX,EBX                         ; 00567724
    SHL EAX,0x4                         ; 00567726
    ADD EAX,EBX                         ; 00567729
    SHL EAX,0x2                         ; 0056772b
    ADD EAX,EBX                         ; 0056772e
    SHL EAX,0x2                         ; 00567730
    ADD EAX,EDX                         ; 00567733
    PUSH EAX                            ; 00567735
    MOV dword ptr [ESI + 0x28],EBP      ; 00567736
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00567739 | void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0056773e
    POP EBP                             ; 00567741
    POP ESI                             ; 00567742
    POP EBX                             ; 00567743
    RET                                 ; 00567744
    PUSH EDI                            ; 00567745
        ;   Label: LAB_00567745
    MOV ECX,0x64408b                    ; 00567746 | = "..\\core\\script.cpp" | s_core_script_cpp_0064408b = ..\core\script.cpp
    MOV EDI,0x1d77                      ; 0056774b
    PUSH 0x64409e                       ; 00567750 | = "CDemonMission::removeEventXRef - inva..." | s_CDemonMission_removeEven_0064409e = CDemonMission::removeEventXRef - invalid index
    MOV dword ptr [0x02f0ca48],ECX      ; 00567755 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0056775b | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00567761 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00567766
    POP EDI                             ; 00567769
    JMP 0x005676f4                      ; 0056776a | LAB_005676f4
        ;   XREF to: 005676f4 (UNCONDITIONAL_JUMP)


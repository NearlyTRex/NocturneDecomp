; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_0053ea30()
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   core_script.cpp_FUN_00567630 at 005676a7
;
; Referenced Globals:
;   void* switchdataD_0053e9dc = 0053eaa9
;   CScript* g_CScriptPtr = 0310f858
;   CScript g_CScriptInstance
;
; Called Functions:
;   core_actor.cpp_CActorProperty_FUN_0040ea50
;   core_actor.cpp_FUN_0040e130
;   core_script.cpp_CScript_ReallocSomething_FUN_00567510
;   core_script.cpp_FUN_00567010
;   core_script.cpp_FUN_005671a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ea30
        ;   Label: core_msnedit.cpp_FUN_0053ea30
    PUSH ESI                            ; 0053ea31
    PUSH EDI                            ; 0053ea32
    PUSH EBP                            ; 0053ea33
    SUB ESP,0x2618                      ; 0053ea34
    MOV EDI,dword ptr [ESP + 0x262c]    ; 0053ea3a
    MOV EDI,dword ptr [EDI + 0x548]     ; 0053ea41
    TEST EDI,EDI                        ; 0053ea47
    JZ 0x0053eac2                       ; 0053ea49 | LAB_0053eac2
        ;   XREF to: 0053eac2 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 0053ea4f
        ;   Label: LAB_0053ea4f
    PUSH EAX                            ; 0053ea51
    MOV dword ptr [ESP + 0x260c],EDI    ; 0053ea52
    CALL core_actor.cpp_FUN_0040e130    ; 0053ea59 | void core_actor.cpp_FUN_0040e130()
        ;   XREF to: 0040e130 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0053ea5e
    MOV EAX,ESP                         ; 0053ea61
    PUSH EAX                            ; 0053ea63
    MOV EBX,dword ptr [EDI + 0x154]     ; 0053ea64
    PUSH EDI                            ; 0053ea6a
    CALL dword ptr [EBX + 0xd4]         ; 0053ea6b
    ADD ESP,0x8                         ; 0053ea71
    MOV EDX,dword ptr [ESP + 0x4]       ; 0053ea74
    XOR ESI,ESI                         ; 0053ea78
    TEST EDX,EDX                        ; 0053ea7a
    JLE 0x0053eab8                      ; 0053ea7c | LAB_0053eab8
        ;   XREF to: 0053eab8 (CONDITIONAL_JUMP)
    LEA EBX,[ESP + 0x8]                 ; 0053ea7e
    LEA EAX,[ESP + 0x2504]              ; 0053ea82
        ;   Label: LAB_0053ea82
    PUSH EAX                            ; 0053ea89
    PUSH EDI                            ; 0053ea8a
    PUSH EBX                            ; 0053ea8b
    CALL core_actor.cpp_CActorProperty_FUN_0040ea50 ; 0053ea8c | undefined core_actor.cpp_CActorProperty_FUN_0040ea50()
        ;   XREF to: 0040ea50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053ea91
    MOV dword ptr [ESP + 0x260c],ESI    ; 0053ea94
    MOV EAX,dword ptr [EBX]             ; 0053ea9b
    CMP EAX,0x11                        ; 0053ea9d
    JA 0x0053eaa9                       ; 0053eaa0 | caseD_f
        ;   XREF to: 0053eaa9 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x53e9dc]  ; 0053eaa2 | void * switchdataD_0053e9dc
        ;   Label: switchD
    MOV ECX,dword ptr [ESP + 0x4]       ; 0053eaa9
        ;   Label: caseD_11
    INC ESI                             ; 0053eaad
    ADD EBX,0xec                        ; 0053eaae
    CMP ESI,ECX                         ; 0053eab4
    JL 0x0053ea82                       ; 0053eab6 | LAB_0053ea82
        ;   XREF to: 0053ea82 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EDI + 0x14c]     ; 0053eab8
        ;   Label: LAB_0053eab8
    TEST EDI,EDI                        ; 0053eabe
    JNZ 0x0053ea4f                      ; 0053eac0 | LAB_0053ea4f
        ;   XREF to: 0053ea4f (CONDITIONAL_JUMP)
    ADD ESP,0x2618                      ; 0053eac2
        ;   Label: LAB_0053eac2
    POP EBP                             ; 0053eac8
    POP EDI                             ; 0053eac9
    POP ESI                             ; 0053eaca
    POP EBX                             ; 0053eacb
    RET                                 ; 0053eacc
    MOV EAX,dword ptr [EBX + 0x68]      ; 0053eacd
        ;   Label: caseD_5
    MOV EAX,dword ptr [EAX]             ; 0053ead0
    TEST EAX,EAX                        ; 0053ead2
    JZ 0x0053eaa9                       ; 0053ead4 | caseD_f
        ;   XREF to: 0053eaa9 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x2504]              ; 0053ead6
    PUSH EAX                            ; 0053eadd
    MOV ECX,dword ptr [0x00680d50]      ; 0053eade | CScript g_CScriptInstance | CScript * g_CScriptPtr
    MOV EDX,0x7                         ; 0053eae4
    PUSH ECX                            ; 0053eae9 | CScript g_CScriptInstance
    MOV dword ptr [ESP + 0x260c],EDX    ; 0053eaea
    CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510 ; 0053eaf1 | undefined core_script.cpp_CScript_ReallocSomething_FUN_00567510()
        ;   XREF to: 00567510 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0053eaf6
    JMP 0x0053eaa9                      ; 0053eaf9 | caseD_f
        ;   XREF to: 0053eaa9 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x2504]              ; 0053eafb
        ;   Label: caseD_b
    PUSH EAX                            ; 0053eb02
    PUSH EAX                            ; 0053eb03
    MOV EAX,[0x00680d50]                ; 0053eb04 | CScript g_CScriptInstance | CScript * g_CScriptPtr
    PUSH EAX                            ; 0053eb09 | CScript g_CScriptInstance
    CALL core_script.cpp_FUN_005671a0   ; 0053eb0a | undefined core_script.cpp_FUN_005671a0()
        ;   XREF to: 005671a0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053eb0f
    JMP 0x0053eaa9                      ; 0053eb12 | caseD_f
        ;   XREF to: 0053eaa9 (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x2504]              ; 0053eb14
        ;   Label: caseD_c
    PUSH EAX                            ; 0053eb1b
    PUSH EAX                            ; 0053eb1c
    MOV EBP,dword ptr [0x00680d50]      ; 0053eb1d | CScript * g_CScriptPtr
    PUSH EBP                            ; 0053eb23 | CScript g_CScriptInstance
    CALL core_script.cpp_FUN_00567010   ; 0053eb24 | undefined core_script.cpp_FUN_00567010()
        ;   XREF to: 00567010 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053eb29
    JMP 0x0053eaa9                      ; 0053eb2c | caseD_f
        ;   XREF to: 0053eaa9 (UNCONDITIONAL_JUMP)


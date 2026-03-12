; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_rebuildEventXRefs_FUN_00567630(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; SScriptXRef      Stack[-0x124]:276  SStack_124
;
; XREF[1]:
;   core_script.cpp_editParameterValue_FUN_00562920 at 00563d00
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_msnedit.cpp_CDemonMission_buildScriptCrossReferences_FUN_0053ea30
;   core_script.cpp_CScript_buildParsedLines_FUN_0055a370
;   core_script.cpp_CScript_parseCommand_FUN_00567080
;   crt_stdlib.c__qsort_FUN_005fdf38
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567630
        ;   Label: core_script.cpp_CScript_rebuildEventXRefs_FUN_00567630
    PUSH ESI                            ; 00567631
    PUSH EDI                            ; 00567632
    PUSH EBP                            ; 00567633
    SUB ESP,0x114                       ; 00567634
    MOV EBX,dword ptr [ESP + 0x128]     ; 0056763a
    PUSH EBX                            ; 00567641
    MOV dword ptr [EBX + 0x28],0x0      ; 00567642
    CALL core_script.cpp_CScript_buildParsedLines_FUN_0055a370 ; 00567649
        ;   XREF to: 0055a370 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_buildParsedLines_FUN_0055a370(CScript * this_ptr)
    XOR EDI,EDI                         ; 0056764e
    MOV EDX,dword ptr [EBX + 0x30]      ; 00567650
    ADD ESP,0x4                         ; 00567653
    TEST EDX,EDX                        ; 00567656
    JLE 0x005676a0                      ; 00567658
        ;   XREF to: 005676a0 (CONDITIONAL_JUMP)  ; LAB_005676a0
    XOR ESI,ESI                         ; 0056765a
    XOR ECX,ECX                         ; 0056765c
        ;   Label: LAB_0056765c
    MOV dword ptr [ESP + 0x104],ECX     ; 0056765e
    MOV EAX,dword ptr [EBX + 0x34]      ; 00567665
    MOV EAX,dword ptr [ESI + EAX*0x1]   ; 00567668
    MOV dword ptr [ESP + 0x10c],EAX     ; 0056766b
    MOV EAX,ESP                         ; 00567672
    PUSH EAX                            ; 00567674
    MOV EAX,dword ptr [EBX + 0x34]      ; 00567675
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x4] ; 00567678
    PUSH EBP                            ; 0056767c
    PUSH EBX                            ; 0056767d
    ADD ESI,0x8                         ; 0056767e
    INC EDI                             ; 00567681
    CALL core_script.cpp_CScript_parseCommand_FUN_00567080 ; 00567682
        ;   XREF to: 00567080 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_parseCommand_FUN_00567080(CScript * this_ptr, char * text, SScriptXRef * xref_data)
    MOV EAX,dword ptr [EBX + 0x30]      ; 00567687
    ADD ESP,0xc                         ; 0056768a
    CMP EDI,EAX                         ; 0056768d
    JL 0x0056765c                       ; 0056768f
        ;   XREF to: 0056765c (CONDITIONAL_JUMP)  ; LAB_0056765c
    LEA EAX,[EAX]                       ; 00567691
    LEA EDX,[EDX]                       ; 00567697
    LEA EAX,[EAX]                       ; 0056769d
    MOV EDX,dword ptr [0x0067d550]      ; 005676a0 | g_CDemonMissionInstance | g_CDemonMissionPtr
        ;   Label: LAB_005676a0
    PUSH EDX                            ; 005676a6 | g_CDemonMissionInstance
    CALL core_msnedit.cpp_CDemonMission_buildScriptCrossReferences_FUN_0053ea30 ; 005676a7
        ;   XREF to: 0053ea30 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_buildScriptCrossReferences_FUN_0053ea30(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 005676ac
    PUSH 0x5675a0                       ; 005676af
    PUSH 0x114                          ; 005676b4
    MOV ECX,dword ptr [EBX + 0x28]      ; 005676b9
    PUSH ECX                            ; 005676bc
    MOV ESI,dword ptr [EBX + 0x2c]      ; 005676bd
    PUSH ESI                            ; 005676c0
    CALL crt_stdlib.c__qsort_FUN_005fdf38 ; 005676c1
        ;   XREF to: 005fdf38 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__qsort_FUN_005fdf38(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 005676c6
    ADD ESP,0x114                       ; 005676c9
    POP EBP                             ; 005676cf
    POP EDI                             ; 005676d0
    POP ESI                             ; 005676d1
    POP EBX                             ; 005676d2
    RET                                 ; 005676d3


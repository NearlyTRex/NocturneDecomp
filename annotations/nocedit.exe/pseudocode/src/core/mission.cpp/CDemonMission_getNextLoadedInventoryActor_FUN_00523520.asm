; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520(CDemonMission *this_ptr,char *actor_name)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   actor_name
;
; XREF[1]:
;   core_inv.cpp_CInventory_load_FUN_004ff400 at 004ff570
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_00638d9c
;   TerminatedCString s_CDemonMission_getNextLoa_00638db0
;   TerminatedCString s_core_mission_cpp_00638de6
;   TerminatedCString s_CDemonMission_getNextLoa_00638dfa
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523520
        ;   Label: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520
    PUSH EDI                            ; 00523521
    PUSH EBP                            ; 00523522
    MOV EBX,dword ptr [ESP + 0x10]      ; 00523523
    CMP dword ptr [EBX + 0x888],0x0     ; 00523527
    JNZ 0x00523555                      ; 0052352e
        ;   XREF to: 00523555 (CONDITIONAL_JUMP)  ; LAB_00523555
    PUSH ESI                            ; 00523530
    MOV ECX,0x638d9c                    ; 00523531 | = "..\\core\\mission.cpp"
    MOV ESI,0x186                       ; 00523536
    PUSH 0x638db0                       ; 0052353b | = "CDemonMission::getNextLoadedInventory..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00523540 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00523546 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052354c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00523551
    POP ESI                             ; 00523554
    MOV EDI,dword ptr [ESP + 0x14]      ; 00523555
        ;   Label: LAB_00523555
    PUSH EDI                            ; 00523559
    MOV EBP,dword ptr [EBX + 0x888]     ; 0052355a
    PUSH EBP                            ; 00523560
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 00523561
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00523566
    TEST EAX,EAX                        ; 00523569
    JNZ 0x00523583                      ; 0052356b
        ;   XREF to: 00523583 (CONDITIONAL_JUMP)  ; LAB_00523583
    MOV EAX,dword ptr [EBX + 0x888]     ; 0052356d
        ;   Label: LAB_0052356d
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00523573
    MOV dword ptr [EBX + 0x888],EDX     ; 00523579
    POP EBP                             ; 0052357f
    POP EDI                             ; 00523580
    POP EBX                             ; 00523581
    RET                                 ; 00523582
    MOV ECX,dword ptr [EBX + 0x888]     ; 00523583
        ;   Label: LAB_00523583
    PUSH ECX                            ; 00523589
    PUSH EDI                            ; 0052358a
    MOV EAX,0x638de6                    ; 0052358b | = "..\\core\\mission.cpp"
    MOV EDX,0x18b                       ; 00523590
    PUSH 0x638dfa                       ; 00523595 | = "CDemonMission::getNextLoadedInventory..."
    MOV [0x02f0ca48],EAX                ; 0052359a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0052359f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005235a5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 005235aa
    JMP 0x0052356d                      ; 005235ad
        ;   XREF to: 0052356d (UNCONDITIONAL_JUMP)  ; LAB_0052356d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_msnedit.cpp_readIni_FUN_00537530(CDemonMission * mission_ptr, CIniFile * ini_file)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   mission_ptr
; CIniFile *       Stack[0x8]:4   ini_file
;
; XREF[1]:
;   core_inivar.cpp_readIniData_FUN_004fbd90 at 004fc4c3
;
; Referenced Globals:
;   TerminatedCString s_renderSkyInEditor_0063b7cd
;   TerminatedCString s_renderWaterInEditor_0063b7df
;   TerminatedCString s_fullLightInEditor_0063b7f3
;   TerminatedCString s_disableMouseHitOnBarrier_0063b805
;   TerminatedCString s_dynamicRenderMode_0063b81f
;   TerminatedCString s_confirmNewActorNames_0063b831
;   undefined4 g_DynamicRenderMode
;   int g_ConfirmNewActorNames = 0x1
;   int g_DisableMouseHitOnBarrier
;
; Called Functions:
;   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537530
        ;   Label: core_msnedit.cpp_readIni_FUN_00537530
    PUSH ESI                            ; 00537531
    MOV EBX,dword ptr [ESP + 0xc]       ; 00537532
    MOV ESI,dword ptr [ESP + 0x10]      ; 00537536
    LEA EAX,[EBX + 0x30]                ; 0053753a
    MOV dword ptr [EBX + 0x30],0x0      ; 0053753d
    PUSH EAX                            ; 00537544
    MOV dword ptr [EBX + 0x34],0x0      ; 00537545
    PUSH 0x63b7cd                       ; 0053754c | = "renderSkyInEditor" | s_renderSkyInEditor_0063b7cd = renderSkyInEditor
    MOV dword ptr [EBX + 0x38],0x1      ; 00537551
    XOR EDX,EDX                         ; 00537558
    PUSH ESI                            ; 0053755a
    MOV dword ptr [0x02f7a020],EDX      ; 0053755b | int g_DisableMouseHitOnBarrier
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 00537561 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00537566
    LEA EAX,[EBX + 0x34]                ; 00537569
    PUSH EAX                            ; 0053756c
    PUSH 0x63b7df                       ; 0053756d | = "renderWaterInEditor" | s_renderWaterInEditor_0063b7df = renderWaterInEditor
    PUSH ESI                            ; 00537572
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 00537573 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00537578
    ADD EBX,0x38                        ; 0053757b
    PUSH EBX                            ; 0053757e
    PUSH 0x63b7f3                       ; 0053757f | = "fullLightInEditor" | s_fullLightInEditor_0063b7f3 = fullLightInEditor
    PUSH ESI                            ; 00537584
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 00537585 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053758a
    PUSH 0x2f7a020                      ; 0053758d | int g_DisableMouseHitOnBarrier
    PUSH 0x63b805                       ; 00537592 | = "disableMouseHitOnBarriers" | s_disableMouseHitOnBarrier_0063b805 = disableMouseHitOnBarriers
    PUSH ESI                            ; 00537597
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 00537598 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053759d
    PUSH 0x680810                       ; 005375a0 | undefined4 g_DynamicRenderMode
    PUSH 0x63b81f                       ; 005375a5 | = "dynamicRenderMode" | s_dynamicRenderMode_0063b81f = dynamicRenderMode
    PUSH ESI                            ; 005375aa
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 005375ab | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005375b0
    PUSH 0x680814                       ; 005375b3 | int g_ConfirmNewActorNames
    PUSH 0x63b831                       ; 005375b8 | = "confirmNewActorNames" | s_confirmNewActorNames_0063b831 = confirmNewActorNames
    PUSH ESI                            ; 005375bd
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 005375be | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005375c3
    POP ESI                             ; 005375c6
    POP EBX                             ; 005375c7
    RET                                 ; 005375c8


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_msnedit_cpp_CDemonMission_readIni_FUN_00537530(CDemonMission *this_ptr,CIniFile *ini_file)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
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
;   int g_DynamicRenderMode = 0x1
;   int g_ConfirmNewActorNames = 0x1
;   int g_DisableMouseHitOnBarrier
;
; Called Functions:
;   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537530
        ;   Label: core_msnedit.cpp_CDemonMission_readIni_FUN_00537530
    PUSH ESI                            ; 00537531
    MOV EBX,dword ptr [ESP + 0xc]       ; 00537532
    MOV ESI,dword ptr [ESP + 0x10]      ; 00537536
    LEA EAX,[EBX + 0x30]                ; 0053753a
    MOV dword ptr [EBX + 0x30],0x0      ; 0053753d
    PUSH EAX                            ; 00537544
    MOV dword ptr [EBX + 0x34],0x0      ; 00537545
    PUSH 0x63b7cd                       ; 0053754c | = "renderSkyInEditor"
    MOV dword ptr [EBX + 0x38],0x1      ; 00537551
    XOR EDX,EDX                         ; 00537558
    PUSH ESI                            ; 0053755a
    MOV dword ptr [0x02f7a020],EDX      ; 0053755b | g_DisableMouseHitOnBarrier
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 00537561
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 00537566
    LEA EAX,[EBX + 0x34]                ; 00537569
    PUSH EAX                            ; 0053756c
    PUSH 0x63b7df                       ; 0053756d | = "renderWaterInEditor"
    PUSH ESI                            ; 00537572
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 00537573
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 00537578
    ADD EBX,0x38                        ; 0053757b
    PUSH EBX                            ; 0053757e
    PUSH 0x63b7f3                       ; 0053757f | = "fullLightInEditor"
    PUSH ESI                            ; 00537584
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 00537585
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 0053758a
    PUSH 0x2f7a020                      ; 0053758d | g_DisableMouseHitOnBarrier
    PUSH 0x63b805                       ; 00537592 | = "disableMouseHitOnBarriers"
    PUSH ESI                            ; 00537597
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 00537598
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 0053759d
    PUSH 0x680810                       ; 005375a0 | g_DynamicRenderMode
    PUSH 0x63b81f                       ; 005375a5 | = "dynamicRenderMode"
    PUSH ESI                            ; 005375aa
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 005375ab
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 005375b0
    PUSH 0x680814                       ; 005375b3 | g_ConfirmNewActorNames
    PUSH 0x63b831                       ; 005375b8 | = "confirmNewActorNames"
    PUSH ESI                            ; 005375bd
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 005375be
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 005375c3
    POP ESI                             ; 005375c6
    POP EBX                             ; 005375c7
    RET                                 ; 005375c8


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_msnedit_cpp_writeIni_FUN_005375d0(CDemonMission *mission,CIniFile *ini_file)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   mission
; CIniFile *       Stack[0x8]:4   ini_file
;
; XREF[1]:
;   core_inivar.cpp_writeIniData_FUN_004fc510 at 004fcbad
;
; Referenced Globals:
;   TerminatedCString s_renderSkyInEditor_0063b846
;   TerminatedCString s_renderWaterInEditor_0063b858
;   TerminatedCString s_fullLightInEditor_0063b86c
;   TerminatedCString s_disableMouseHitOnBarrier_0063b87e
;   TerminatedCString s_dynamicRenderMode_0063b898
;   TerminatedCString s_confirmNewActorNames_0063b8aa
;   int g_DynamicRenderMode = 0x1
;   int g_ConfirmNewActorNames = 0x1
;   int g_DisableMouseHitOnBarrier
;
; Called Functions:
;   engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005375d0
        ;   Label: core_msnedit.cpp_writeIni_FUN_005375d0
    PUSH ESI                            ; 005375d1
    PUSH EDI                            ; 005375d2
    PUSH EBP                            ; 005375d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005375d4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005375d8
    MOV EDX,dword ptr [ESI + 0x30]      ; 005375dc
    PUSH EDX                            ; 005375df
    PUSH 0x63b846                       ; 005375e0 | = "renderSkyInEditor"
    PUSH EBX                            ; 005375e5
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 005375e6
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 005375eb
    MOV ECX,dword ptr [ESI + 0x34]      ; 005375ee
    PUSH ECX                            ; 005375f1
    PUSH 0x63b858                       ; 005375f2 | = "renderWaterInEditor"
    PUSH EBX                            ; 005375f7
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 005375f8
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 005375fd
    MOV EDI,dword ptr [ESI + 0x38]      ; 00537600
    PUSH EDI                            ; 00537603
    PUSH 0x63b86c                       ; 00537604 | = "fullLightInEditor"
    PUSH EBX                            ; 00537609
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 0053760a
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 0053760f
    MOV EBP,dword ptr [0x02f7a020]      ; 00537612 | g_DisableMouseHitOnBarrier
    PUSH EBP                            ; 00537618
    PUSH 0x63b87e                       ; 00537619 | = "disableMouseHitOnBarriers"
    PUSH EBX                            ; 0053761e
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 0053761f
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 00537624
    MOV EAX,[0x00680810]                ; 00537627 | g_DynamicRenderMode
    PUSH EAX                            ; 0053762c
    PUSH 0x63b898                       ; 0053762d | = "dynamicRenderMode"
    PUSH EBX                            ; 00537632
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 00537633
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 00537638
    MOV EDX,dword ptr [0x00680814]      ; 0053763b | g_ConfirmNewActorNames
    PUSH EDX                            ; 00537641
    PUSH 0x63b8aa                       ; 00537642 | = "confirmNewActorNames"
    PUSH EBX                            ; 00537647
    CALL engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90 ; 00537648
        ;   XREF to: 004fbc90 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90(CIniFile * this_ptr, char * key, int value)
    ADD ESP,0xc                         ; 0053764d
    POP EBP                             ; 00537650
    POP EDI                             ; 00537651
    POP ESI                             ; 00537652
    POP EBX                             ; 00537653
    RET                                 ; 00537654


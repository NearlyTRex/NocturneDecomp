; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_00478c00(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[3]:
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443328
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 at 00478d68
;   core_fire.cpp_loadDynamiteAssets_FUN_004c41d0 at 004c41d5
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0061f924
;   TerminatedCString s_Can_t_load_s_because_key_0061f937
;   int g_KeyframeModelCount
;   CKeyFramedModel[256] g_CKeyFramedModelPool
;   undefined4 DAT_026acb5c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478c00
        ;   Label: core_dmodel.cpp_loadModel_FUN_00478c00
    PUSH ESI                            ; 00478c01
    PUSH EDI                            ; 00478c02
    PUSH EBP                            ; 00478c03
    MOV EBP,ESP                         ; 00478c04
    MOV EDI,dword ptr [EBP + 0x14]      ; 00478c06
    MOV EDX,dword ptr [0x026a7480]      ; 00478c09 | g_KeyframeModelCount
    XOR ESI,ESI                         ; 00478c0f
    TEST EDX,EDX                        ; 00478c11
    JLE 0x00478c39                      ; 00478c13
        ;   XREF to: 00478c39 (CONDITIONAL_JUMP)  ; LAB_00478c39
    MOV EBX,0x26a7484                   ; 00478c15 | g_CKeyFramedModelPool
    PUSH EDI                            ; 00478c1a
        ;   Label: LAB_00478c1a
    PUSH EBX                            ; 00478c1b | g_CKeyFramedModelPool | DAT_026acb5c
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00478c1c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00478c21
    TEST EAX,EAX                        ; 00478c24
    JZ 0x00478c9b                       ; 00478c26
        ;   XREF to: 00478c9b (CONDITIONAL_JUMP)  ; LAB_00478c9b
    MOV ECX,dword ptr [0x026a7480]      ; 00478c28 | g_KeyframeModelCount
    INC ESI                             ; 00478c2e
    ADD EBX,0x56d8                      ; 00478c2f
    CMP ESI,ECX                         ; 00478c35
    JL 0x00478c1a                       ; 00478c37
        ;   XREF to: 00478c1a (CONDITIONAL_JUMP)  ; LAB_00478c1a
    CMP dword ptr [0x026a7480],0x100    ; 00478c39 | g_KeyframeModelCount
        ;   Label: LAB_00478c39
    JL 0x00478c6d                       ; 00478c43
        ;   XREF to: 00478c6d (CONDITIONAL_JUMP)  ; LAB_00478c6d
    PUSH 0x100                          ; 00478c45
    PUSH EDI                            ; 00478c4a
    MOV ESI,0x61f924                    ; 00478c4b | = "..\\core\\dmodel.cpp"
    MOV EAX,0x4cd                       ; 00478c50
    PUSH 0x61f937                       ; 00478c55 | = "Can't load %s because keyFrame model ..."
    MOV dword ptr [0x02f0ca48],ESI      ; 00478c5a | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00478c60 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00478c65
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00478c6a
    MOV EDX,dword ptr [0x026a7480]      ; 00478c6d | g_KeyframeModelCount
        ;   Label: LAB_00478c6d
    IMUL EBX,EDX,0x56d8                 ; 00478c73
    PUSH EDI                            ; 00478c79
    ADD EBX,0x26a7484                   ; 00478c7a | g_CKeyFramedModelPool
    LEA ECX,[EDX + 0x1]                 ; 00478c80
    PUSH EBX                            ; 00478c83
    MOV dword ptr [0x026a7480],ECX      ; 00478c84 | g_KeyframeModelCount
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 ; 00478c8a
        ;   XREF to: 00476db0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00478c8f
    PUSH EBX                            ; 00478c92
    CALL core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190 ; 00478c93
        ;   XREF to: 00478190 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00478c98
    MOV EAX,EBX                         ; 00478c9b | g_CKeyFramedModelPool
        ;   Label: LAB_00478c9b
    POP EBP                             ; 00478c9d
    POP EDI                             ; 00478c9e
    POP ESI                             ; 00478c9f
    POP EBX                             ; 00478ca0
    RET                                 ; 00478ca1


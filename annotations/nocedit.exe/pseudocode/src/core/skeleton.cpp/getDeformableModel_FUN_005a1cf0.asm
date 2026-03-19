; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * __cdecl core_skeleton_cpp_getDeformableModel_FUN_005a1cf0(char *model_filename)
;
; Parameters:
; char *           Stack[0x4]:4   model_filename
;
; XREF[2]:
;   core_baron.cpp_CBaronWeapon_setup_FUN_00413da0 at 00413db2
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 at 005a045a
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064f038
;   TerminatedCString s_Can_t_load_s_because_def_0064f04d
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_DeformableModelCount
;   CDeformableModel[64] g_DeformableModelPool
;   undefined4 g_DeformableModelPool[0].model_filename[0]
;   undefined4 g_DeformableModelPool[1].model_filename[0]
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780
;   core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1cf0
        ;   Label: core_skeleton.cpp_getDeformableModel_FUN_005a1cf0
    PUSH ESI                            ; 005a1cf1
    PUSH EDI                            ; 005a1cf2
    PUSH EBP                            ; 005a1cf3
    MOV EBP,ESP                         ; 005a1cf4
    MOV EDX,dword ptr [0x0368c89c]      ; 005a1cf6 | g_DeformableModelCount
    XOR EBX,EBX                         ; 005a1cfc
    TEST EDX,EDX                        ; 005a1cfe
    JLE 0x005a1d40                      ; 005a1d00
        ;   XREF to: 005a1d40 (CONDITIONAL_JUMP)  ; LAB_005a1d40
    MOV ESI,0x368c8a0                   ; 005a1d02 | g_DeformableModelPool
    ADD ESI,0x8fb0                      ; 005a1d07
    IMUL EAX,EBX,0x9000                 ; 005a1d0d
        ;   Label: LAB_005a1d0d
    MOV EDI,dword ptr [EBP + 0x14]      ; 005a1d13
    PUSH EDI                            ; 005a1d16
    MOV EDI,0x368c8a0                   ; 005a1d17 | g_DeformableModelPool
    PUSH ESI                            ; 005a1d1c | g_DeformableModelPool[0].model_filename[0] | g_DeformableModelPool[1].model_filename[0]
    ADD EDI,EAX                         ; 005a1d1d
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005a1d1f
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a1d24
    TEST EAX,EAX                        ; 005a1d27
    JZ 0x005a1db5                       ; 005a1d29
        ;   XREF to: 005a1db5 (CONDITIONAL_JUMP)  ; LAB_005a1db5
    MOV ECX,dword ptr [0x0368c89c]      ; 005a1d2f | g_DeformableModelCount
    INC EBX                             ; 005a1d35
    ADD ESI,0x9000                      ; 005a1d36
    CMP EBX,ECX                         ; 005a1d3c
    JL 0x005a1d0d                       ; 005a1d3e
        ;   XREF to: 005a1d0d (CONDITIONAL_JUMP)  ; LAB_005a1d0d
    CMP dword ptr [0x0368c89c],0x40     ; 005a1d40 | g_DeformableModelCount
        ;   Label: LAB_005a1d40
    JL 0x005a1d72                       ; 005a1d47
        ;   XREF to: 005a1d72 (CONDITIONAL_JUMP)  ; LAB_005a1d72
    PUSH 0x40                           ; 005a1d49
    MOV EAX,dword ptr [EBP + 0x14]      ; 005a1d4b
    PUSH EAX                            ; 005a1d4e
    MOV ESI,0x64f038                    ; 005a1d4f | = "..\\core\\skeleton.cpp"
    MOV EDI,0x1057                      ; 005a1d54
    PUSH 0x64f04d                       ; 005a1d59 | = "Can't load %s because deformable mode..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005a1d5e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005a1d64 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a1d6a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 005a1d6f
    MOV EBX,dword ptr [0x0368c89c]      ; 005a1d72 | g_DeformableModelCount
        ;   Label: LAB_005a1d72
    MOV EDX,dword ptr [EBP + 0x14]      ; 005a1d78
    LEA EAX,[EBX*0x8 + 0x0]             ; 005a1d7b
    MOV ECX,dword ptr [0x0368c89c]      ; 005a1d82 | g_DeformableModelCount
    ADD EAX,EBX                         ; 005a1d88
    MOV EBX,0x368c8a0                   ; 005a1d8a | g_DeformableModelPool
    SHL EAX,0xc                         ; 005a1d8f
    PUSH EDX                            ; 005a1d92
    ADD EBX,EAX                         ; 005a1d93
    INC ECX                             ; 005a1d95
    PUSH EBX                            ; 005a1d96
    MOV dword ptr [0x0368c89c],ECX      ; 005a1d97 | g_DeformableModelCount
    CALL core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0 ; 005a1d9d
        ;   XREF to: 0059b8d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0(CDeformableModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a1da2
    PUSH EBX                            ; 005a1da5
    CALL core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780 ; 005a1da6
        ;   XREF to: 0059a780 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005a1dab
    MOV EAX,EBX                         ; 005a1dae
    POP EBP                             ; 005a1db0
    POP EDI                             ; 005a1db1
    POP ESI                             ; 005a1db2
    POP EBX                             ; 005a1db3
    RET                                 ; 005a1db4
    MOV EAX,EDI                         ; 005a1db5 | g_DeformableModelPool
        ;   Label: LAB_005a1db5
    POP EBP                             ; 005a1db7
    POP EDI                             ; 005a1db8
    POP ESI                             ; 005a1db9
    POP EBX                             ; 005a1dba
    RET                                 ; 005a1dbb


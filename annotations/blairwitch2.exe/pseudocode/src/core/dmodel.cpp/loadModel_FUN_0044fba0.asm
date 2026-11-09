; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_loadModel_FUN_0044fba0(char *param_1)
;
;
; XREF[6]:
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 at 0044fd08
;   core_elephant.cpp_FUN_00486360 at 00486444
;   core_fire.cpp_FUN_004995e0 at 004995e5
;   core_gun.cpp_FUN_004cbdc0 at 004cc1a9
;   core_shotgun.cpp_FUN_0053f990 at 0053fa8f
;   core_tommygun.cpp_FUN_00575800 at 00575c13
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005cfa8a
;   TerminatedCString s_Can_t_load_s_because_key_005cfa9d
;   undefined4 DAT_01b13a1c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_0044efe0
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_0044dcd0
;   core_main.c_FUN_004e4500
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044fba0
        ;   Label: core_dmodel.cpp_loadModel_FUN_0044fba0
    PUSH ESI                            ; 0044fba1
    PUSH EDI                            ; 0044fba2
    PUSH EBP                            ; 0044fba3
    MOV EBP,ESP                         ; 0044fba4
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044fba6
    MOV EDX,dword ptr [0x01b13a1c]      ; 0044fba9 | DAT_01b13a1c
    XOR ESI,ESI                         ; 0044fbaf
    TEST EDX,EDX                        ; 0044fbb1
    JLE 0x0044fbd9                      ; 0044fbb3
        ;   XREF to: 0044fbd9 (CONDITIONAL_JUMP)  ; LAB_0044fbd9
    MOV EBX,0x1b13a20                   ; 0044fbb5
    PUSH EDI                            ; 0044fbba
        ;   Label: LAB_0044fbba
    PUSH EBX                            ; 0044fbbb
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0044fbbc
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0044fbc1
    TEST EAX,EAX                        ; 0044fbc4
    JZ 0x0044fc3b                       ; 0044fbc6
        ;   XREF to: 0044fc3b (CONDITIONAL_JUMP)  ; LAB_0044fc3b
    MOV ECX,dword ptr [0x01b13a1c]      ; 0044fbc8 | DAT_01b13a1c
    INC ESI                             ; 0044fbce
    ADD EBX,0x398                       ; 0044fbcf
    CMP ESI,ECX                         ; 0044fbd5
    JL 0x0044fbba                       ; 0044fbd7
        ;   XREF to: 0044fbba (CONDITIONAL_JUMP)  ; LAB_0044fbba
    CMP dword ptr [0x01b13a1c],0x100    ; 0044fbd9 | DAT_01b13a1c
        ;   Label: LAB_0044fbd9
    JL 0x0044fc0d                       ; 0044fbe3
        ;   XREF to: 0044fc0d (CONDITIONAL_JUMP)  ; LAB_0044fc0d
    PUSH 0x100                          ; 0044fbe5
    PUSH EDI                            ; 0044fbea
    MOV ESI,0x5cfa8a                    ; 0044fbeb | = "..\\core\\dmodel.cpp"
    MOV EAX,0x4cd                       ; 0044fbf0
    PUSH 0x5cfa9d                       ; 0044fbf5 | = "Can't load %s because keyFrame model ..."
    MOV dword ptr [0x01d046a0],ESI      ; 0044fbfa | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0044fc00 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044fc05
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 0044fc0a
    MOV EDX,dword ptr [0x01b13a1c]      ; 0044fc0d | DAT_01b13a1c
        ;   Label: LAB_0044fc0d
    IMUL EBX,EDX,0x398                  ; 0044fc13
    PUSH EDI                            ; 0044fc19
    ADD EBX,0x1b13a20                   ; 0044fc1a
    LEA ECX,[EDX + 0x1]                 ; 0044fc20
    PUSH EBX                            ; 0044fc23
    MOV dword ptr [0x01b13a1c],ECX      ; 0044fc24 | DAT_01b13a1c
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_0044dcd0 ; 0044fc2a
        ;   XREF to: 0044dcd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_0044dcd0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0044fc2f
    PUSH EBX                            ; 0044fc32
    CALL core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_0044efe0 ; 0044fc33
        ;   XREF to: 0044efe0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_0044efe0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0044fc38
    MOV EAX,EBX                         ; 0044fc3b
        ;   Label: LAB_0044fc3b
    POP EBP                             ; 0044fc3d
    POP EDI                             ; 0044fc3e
    POP ESI                             ; 0044fc3f
    POP EBX                             ; 0044fc40
    RET                                 ; 0044fc41


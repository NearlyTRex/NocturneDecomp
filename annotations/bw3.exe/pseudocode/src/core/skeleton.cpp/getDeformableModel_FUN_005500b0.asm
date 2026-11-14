; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * __cdecl core_skeleton_cpp_getDeformableModel_FUN_005500b0(char *model_filename)
;
; Parameters:
; char *           Stack[0x4]:4   model_filename
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 at 0054e6ba
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d223c
;   TerminatedCString s_Can_t_load_s_because_def_005d2251
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02802f5c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00548750
;   core_skeleton.cpp_CDeformableModel_load_FUN_005499d0
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005500b0
        ;   Label: core_skeleton.cpp_getDeformableModel_FUN_005500b0
    PUSH ESI                            ; 005500b1
    PUSH EDI                            ; 005500b2
    PUSH EBP                            ; 005500b3
    MOV EBP,ESP                         ; 005500b4
    MOV ESI,0x272af5c                   ; 005500b6
    XOR EBX,EBX                         ; 005500bb
    ADD ESI,0x35b0                      ; 005500bd
    IMUL EAX,EBX,0x3600                 ; 005500c3
        ;   Label: LAB_005500c3
    MOV EDX,dword ptr [EBP + 0x14]      ; 005500c9
    PUSH EDX                            ; 005500cc
    MOV EDI,0x272af5c                   ; 005500cd
    PUSH ESI                            ; 005500d2
    ADD EDI,EAX                         ; 005500d3
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005500d5
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005500da
    TEST EAX,EAX                        ; 005500dd
    JZ 0x00550154                       ; 005500df
        ;   XREF to: 00550154 (CONDITIONAL_JUMP)  ; LAB_00550154
    INC EBX                             ; 005500e5
    ADD ESI,0x3600                      ; 005500e6
    CMP EBX,0x40                        ; 005500ec
    JL 0x005500c3                       ; 005500ef
        ;   XREF to: 005500c3 (CONDITIONAL_JUMP)  ; LAB_005500c3
    MOV ECX,dword ptr [0x02802f5c]      ; 005500f1 | DAT_02802f5c
    XOR EBX,EBX                         ; 005500f7
    XOR EAX,EAX                         ; 005500f9
    TEST ECX,ECX                        ; 005500fb
    JZ 0x00550114                       ; 005500fd
        ;   XREF to: 00550114 (CONDITIONAL_JUMP)  ; LAB_00550114
    ADD EBX,0x4                         ; 005500ff
        ;   Label: LAB_005500ff
    INC EAX                             ; 00550102
    CMP EBX,0x100                       ; 00550103
    JGE 0x00550170                      ; 00550109
        ;   XREF to: 00550170 (CONDITIONAL_JUMP)  ; LAB_00550170
    CMP dword ptr [EBX + 0x2802f5c],0x0 ; 0055010b
    JNZ 0x005500ff                      ; 00550112
        ;   XREF to: 005500ff (CONDITIONAL_JUMP)  ; LAB_005500ff
    MOV ESI,EAX                         ; 00550114
        ;   Label: LAB_00550114
    SHL EAX,0x2                         ; 00550116
    SUB EAX,ESI                         ; 00550119
    SHL EAX,0x9                         ; 0055011b
    MOV ESI,EAX                         ; 0055011e
    SHL EAX,0x3                         ; 00550120
    MOV EDX,dword ptr [EBP + 0x14]      ; 00550123
    ADD EAX,ESI                         ; 00550126
    MOV ESI,0x272af5c                   ; 00550128
    PUSH EDX                            ; 0055012d
    ADD ESI,EAX                         ; 0055012e
    PUSH ESI                            ; 00550130
    CALL core_skeleton.cpp_CDeformableModel_load_FUN_005499d0 ; 00550131
        ;   XREF to: 005499d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_load_FUN_005499d0(CDeformableModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00550136
    PUSH ESI                            ; 00550139
    CALL core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00548750 ; 0055013a
        ;   XREF to: 00548750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00548750(CDeformableModel * this_ptr)
    MOV ECX,0x1                         ; 0055013f
    ADD ESP,0x4                         ; 00550144
    MOV EAX,ESI                         ; 00550147
    MOV dword ptr [EBX + 0x2802f5c],ECX ; 00550149
    POP EBP                             ; 0055014f
    POP EDI                             ; 00550150
    POP ESI                             ; 00550151
    POP EBX                             ; 00550152
    RET                                 ; 00550153
    PUSH EDI                            ; 00550154
        ;   Label: LAB_00550154
    MOV ESI,0x1                         ; 00550155
    CALL core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00548750 ; 0055015a
        ;   XREF to: 00548750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00548750(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0055015f
    MOV EAX,EDI                         ; 00550162
    MOV dword ptr [EBX*0x4 + 0x2802f5c],ESI ; 00550164 | DAT_02802f5c
    POP EBP                             ; 0055016b
    POP EDI                             ; 0055016c
    POP ESI                             ; 0055016d
    POP EBX                             ; 0055016e
    RET                                 ; 0055016f
    PUSH 0x40                           ; 00550170
        ;   Label: LAB_00550170
    MOV EDI,dword ptr [EBP + 0x14]      ; 00550172
    PUSH EDI                            ; 00550175
    MOV EBX,0x5d223c                    ; 00550176 | = "..\\core\\skeleton.cpp"
    MOV ESI,0x107d                      ; 0055017b
    PUSH 0x5d2251                       ; 00550180 | = "Can't load %s because deformable mode..."
    MOV dword ptr [0x01d71de0],EBX      ; 00550185 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0055018b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00550191
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00550196
    XOR EAX,EAX                         ; 00550199
    POP EBP                             ; 0055019b
    POP EDI                             ; 0055019c
    POP ESI                             ; 0055019d
    POP EBX                             ; 0055019e
    RET                                 ; 0055019f


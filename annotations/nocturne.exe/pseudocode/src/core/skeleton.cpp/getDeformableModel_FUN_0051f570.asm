; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * __cdecl core_skeleton_cpp_getDeformableModel_FUN_0051f570(char *model_filename)
;
; Parameters:
; char *           Stack[0x4]:4   model_filename
;
; XREF[2]:
;   core_baron.cpp_CBaronWeapon_setup_FUN_004113b0 at 004113c2
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 at 0051dcda
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591dd3
;   TerminatedCString s_Can_t_load_s_because_def_00591de8
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_0268cef0
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_005180a0
;   core_skeleton.cpp_CDeformableModel_load_FUN_005191f0
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f570
        ;   Label: core_skeleton.cpp_getDeformableModel_FUN_0051f570
    PUSH ESI                            ; 0051f571
    PUSH EDI                            ; 0051f572
    PUSH EBP                            ; 0051f573
    MOV EBP,ESP                         ; 0051f574
    MOV EDX,dword ptr [0x0268cef0]      ; 0051f576 | DAT_0268cef0
    XOR EBX,EBX                         ; 0051f57c
    TEST EDX,EDX                        ; 0051f57e
    JLE 0x0051f5c0                      ; 0051f580
        ;   XREF to: 0051f5c0 (CONDITIONAL_JUMP)  ; LAB_0051f5c0
    MOV ESI,0x268cef4                   ; 0051f582
    ADD ESI,0x2a70                      ; 0051f587
    IMUL EAX,EBX,0x2ac0                 ; 0051f58d
        ;   Label: LAB_0051f58d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0051f593
    PUSH EDI                            ; 0051f596
    MOV EDI,0x268cef4                   ; 0051f597
    PUSH ESI                            ; 0051f59c
    ADD EDI,EAX                         ; 0051f59d
    CALL crt_string.c__stricmp_FUN_00564520 ; 0051f59f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0051f5a4
    TEST EAX,EAX                        ; 0051f5a7
    JZ 0x0051f641                       ; 0051f5a9
        ;   XREF to: 0051f641 (CONDITIONAL_JUMP)  ; LAB_0051f641
    MOV ECX,dword ptr [0x0268cef0]      ; 0051f5af | DAT_0268cef0
    INC EBX                             ; 0051f5b5
    ADD ESI,0x2ac0                      ; 0051f5b6
    CMP EBX,ECX                         ; 0051f5bc
    JL 0x0051f58d                       ; 0051f5be
        ;   XREF to: 0051f58d (CONDITIONAL_JUMP)  ; LAB_0051f58d
    CMP dword ptr [0x0268cef0],0x40     ; 0051f5c0 | DAT_0268cef0
        ;   Label: LAB_0051f5c0
    JL 0x0051f5f2                       ; 0051f5c7
        ;   XREF to: 0051f5f2 (CONDITIONAL_JUMP)  ; LAB_0051f5f2
    PUSH 0x40                           ; 0051f5c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051f5cb
    PUSH EAX                            ; 0051f5ce
    MOV ESI,0x591dd3                    ; 0051f5cf | = "..\\core\\skeleton.cpp"
    MOV EDI,0x1057                      ; 0051f5d4
    PUSH 0x591de8                       ; 0051f5d9 | = "Can't load %s because deformable mode..."
    MOV dword ptr [0x01cc4800],ESI      ; 0051f5de | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0051f5e4 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0051f5ea
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 0051f5ef
    MOV EBX,dword ptr [0x0268cef0]      ; 0051f5f2 | DAT_0268cef0
        ;   Label: LAB_0051f5f2
    LEA EAX,[EBX*0x4 + 0x0]             ; 0051f5f8
    ADD EAX,EBX                         ; 0051f5ff
    SHL EAX,0x2                         ; 0051f601
    SUB EAX,EBX                         ; 0051f604
    SHL EAX,0x6                         ; 0051f606
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051f609
    MOV EBX,EAX                         ; 0051f60c
    SHL EAX,0x3                         ; 0051f60e
    MOV ECX,dword ptr [0x0268cef0]      ; 0051f611 | DAT_0268cef0
    ADD EAX,EBX                         ; 0051f617
    MOV EBX,0x268cef4                   ; 0051f619
    PUSH EDX                            ; 0051f61e
    ADD EBX,EAX                         ; 0051f61f
    INC ECX                             ; 0051f621
    PUSH EBX                            ; 0051f622
    MOV dword ptr [0x0268cef0],ECX      ; 0051f623 | DAT_0268cef0
    CALL core_skeleton.cpp_CDeformableModel_load_FUN_005191f0 ; 0051f629
        ;   XREF to: 005191f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_load_FUN_005191f0(CDeformableModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0051f62e
    PUSH EBX                            ; 0051f631
    CALL core_skeleton.cpp_CDeformableModel_captureTextures_FUN_005180a0 ; 0051f632
        ;   XREF to: 005180a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_captureTextures_FUN_005180a0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0051f637
    MOV EAX,EBX                         ; 0051f63a
    POP EBP                             ; 0051f63c
    POP EDI                             ; 0051f63d
    POP ESI                             ; 0051f63e
    POP EBX                             ; 0051f63f
    RET                                 ; 0051f640
    MOV EAX,EDI                         ; 0051f641
        ;   Label: LAB_0051f641
    POP EBP                             ; 0051f643
    POP EDI                             ; 0051f644
    POP ESI                             ; 0051f645
    POP EBX                             ; 0051f646
    RET                                 ; 0051f647


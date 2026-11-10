; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModel * core_skeleton_cpp_FUN_0056b520(char *param_1)
;
;
; XREF[2]:
;   core_baron.cpp_CBaronWeapon_setup_FUN_004104c0 at 004104d2
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 at 00569b2a
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f2739
;   TerminatedCString s_Can_t_load_s_because_def_005f274e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_027902bc
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00563bb0
;   core_skeleton.cpp_CDeformableModel_load_FUN_00564e40
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b520
        ;   Label: core_skeleton.cpp_FUN_0056b520
    PUSH ESI                            ; 0056b521
    PUSH EDI                            ; 0056b522
    PUSH EBP                            ; 0056b523
    MOV EBP,ESP                         ; 0056b524
    MOV ESI,0x26b82bc                   ; 0056b526
    XOR EBX,EBX                         ; 0056b52b
    ADD ESI,0x35b0                      ; 0056b52d
    IMUL EAX,EBX,0x3600                 ; 0056b533
        ;   Label: LAB_0056b533
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056b539
    PUSH EDX                            ; 0056b53c
    MOV EDI,0x26b82bc                   ; 0056b53d
    PUSH ESI                            ; 0056b542
    ADD EDI,EAX                         ; 0056b543
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0056b545
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0056b54a
    TEST EAX,EAX                        ; 0056b54d
    JZ 0x0056b5c4                       ; 0056b54f
        ;   XREF to: 0056b5c4 (CONDITIONAL_JUMP)  ; LAB_0056b5c4
    INC EBX                             ; 0056b555
    ADD ESI,0x3600                      ; 0056b556
    CMP EBX,0x40                        ; 0056b55c
    JL 0x0056b533                       ; 0056b55f
        ;   XREF to: 0056b533 (CONDITIONAL_JUMP)  ; LAB_0056b533
    MOV ECX,dword ptr [0x027902bc]      ; 0056b561 | DAT_027902bc
    XOR EBX,EBX                         ; 0056b567
    XOR EAX,EAX                         ; 0056b569
    TEST ECX,ECX                        ; 0056b56b
    JZ 0x0056b584                       ; 0056b56d
        ;   XREF to: 0056b584 (CONDITIONAL_JUMP)  ; LAB_0056b584
    ADD EBX,0x4                         ; 0056b56f
        ;   Label: LAB_0056b56f
    INC EAX                             ; 0056b572
    CMP EBX,0x100                       ; 0056b573
    JGE 0x0056b5e0                      ; 0056b579
        ;   XREF to: 0056b5e0 (CONDITIONAL_JUMP)  ; LAB_0056b5e0
    CMP dword ptr [EBX + 0x27902bc],0x0 ; 0056b57b
    JNZ 0x0056b56f                      ; 0056b582
        ;   XREF to: 0056b56f (CONDITIONAL_JUMP)  ; LAB_0056b56f
    MOV ESI,EAX                         ; 0056b584
        ;   Label: LAB_0056b584
    SHL EAX,0x2                         ; 0056b586
    SUB EAX,ESI                         ; 0056b589
    SHL EAX,0x9                         ; 0056b58b
    MOV ESI,EAX                         ; 0056b58e
    SHL EAX,0x3                         ; 0056b590
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056b593
    ADD EAX,ESI                         ; 0056b596
    MOV ESI,0x26b82bc                   ; 0056b598
    PUSH EDX                            ; 0056b59d
    ADD ESI,EAX                         ; 0056b59e
    PUSH ESI                            ; 0056b5a0
    CALL core_skeleton.cpp_CDeformableModel_load_FUN_00564e40 ; 0056b5a1
        ;   XREF to: 00564e40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_load_FUN_00564e40(CDeformableModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0056b5a6
    PUSH ESI                            ; 0056b5a9
    CALL core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00563bb0 ; 0056b5aa
        ;   XREF to: 00563bb0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00563bb0(CDeformableModel * this_ptr)
    MOV ECX,0x1                         ; 0056b5af
    ADD ESP,0x4                         ; 0056b5b4
    MOV EAX,ESI                         ; 0056b5b7
    MOV dword ptr [EBX + 0x27902bc],ECX ; 0056b5b9
    POP EBP                             ; 0056b5bf
    POP EDI                             ; 0056b5c0
    POP ESI                             ; 0056b5c1
    POP EBX                             ; 0056b5c2
    RET                                 ; 0056b5c3
    PUSH EDI                            ; 0056b5c4
        ;   Label: LAB_0056b5c4
    MOV ESI,0x1                         ; 0056b5c5
    CALL core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00563bb0 ; 0056b5ca
        ;   XREF to: 00563bb0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00563bb0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 0056b5cf
    MOV EAX,EDI                         ; 0056b5d2
    MOV dword ptr [EBX*0x4 + 0x27902bc],ESI ; 0056b5d4 | DAT_027902bc
    POP EBP                             ; 0056b5db
    POP EDI                             ; 0056b5dc
    POP ESI                             ; 0056b5dd
    POP EBX                             ; 0056b5de
    RET                                 ; 0056b5df
    PUSH 0x40                           ; 0056b5e0
        ;   Label: LAB_0056b5e0
    MOV EDI,dword ptr [EBP + 0x14]      ; 0056b5e2
    PUSH EDI                            ; 0056b5e5
    MOV EBX,0x5f2739                    ; 0056b5e6 | = "..\\core\\skeleton.cpp"
    MOV ESI,0x1086                      ; 0056b5eb
    PUSH 0x5f274e                       ; 0056b5f0 | = "Can't load %s because deformable mode..."
    MOV dword ptr [0x01d1d400],EBX      ; 0056b5f5 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0056b5fb | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056b601
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 0056b606
    XOR EAX,EAX                         ; 0056b609
    POP EBP                             ; 0056b60b
    POP EDI                             ; 0056b60c
    POP ESI                             ; 0056b60d
    POP EBX                             ; 0056b60e
    RET                                 ; 0056b60f


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_actor_cpp_FUN_0040c870(CDemonActor *param_1,CVector3f *param_2,EGroundType param_3,float param_4)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_005d2e49
;   TerminatedCString s_FeetAreWet_005d2e4f
;   TerminatedCString s_twig_wav_005d2e5a
;   TerminatedCString s_CShadow_005d2e64
;   TerminatedCString s_footstep_s_s_wav_f_005d2e6c
;   undefined4 DAT_005d2e89
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061c010
;   CGore* g_CGorePtr = 01cd0e3c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006236b8
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonCameraInstance.field4_0x4
;   undefined4 g_CDemonCameraInstance.field8_0x8
;   undefined4 g_CDemonCameraInstance.field12_0xc
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;   core_actor.cpp_FUN_0040cc00
;   core_actor.cpp_FUN_0040cc60
;   core_actor.cpp_FUN_0040cd00
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_fire.cpp_FUN_004b5f00
;   core_gore.cpp_CGore_createFootstep_FUN_004e6510
;   core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004e6590
;   core_ground.cpp_FUN_004e7010
;   core_setcolid.cpp_FUN_005595a0
;   core_sound.cpp_CSound_playActorSound_FUN_0057d8a0
;   crt_unknown.c_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c870
        ;   Label: core_actor.cpp_FUN_0040c870
    PUSH ESI                            ; 0040c871
    PUSH EDI                            ; 0040c872
    PUSH EBP                            ; 0040c873
    SUB ESP,0xc0                        ; 0040c874
    MOV EBP,dword ptr [ESP + 0xd4]      ; 0040c87a
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0040c881
    LEA EDI,[ESP + 0x88]                ; 0040c888
    MOV ESI,0x1fe37f0                   ; 0040c88f
    MOVSD ES:EDI,ESI                    ; 0040c894 | g_CDemonCameraInstance.field4_0x4
    MOVSD ES:EDI,ESI                    ; 0040c895 | g_CDemonCameraInstance.field8_0x8
    MOVSD ES:EDI,ESI                    ; 0040c896 | g_CDemonCameraInstance.field12_0xc
    LEA EDI,[ESP + 0x7c]                ; 0040c897
    LEA ESI,[ESP + 0x88]                ; 0040c89b
    MOVSD ES:EDI,ESI                    ; 0040c8a2
    MOVSD ES:EDI,ESI                    ; 0040c8a3
    MOVSD ES:EDI,ESI                    ; 0040c8a4
    FLD float ptr [EBX]                 ; 0040c8a5
    FSUB float ptr [ESP + 0x7c]         ; 0040c8a7
    FMUL ST0                            ; 0040c8ab
    FLD float ptr [EBX + 0x4]           ; 0040c8ad
    FSUB float ptr [ESP + 0x80]         ; 0040c8b0
    FMUL ST0                            ; 0040c8b7
    FLD float ptr [EBX + 0x8]           ; 0040c8b9
    FXCH                                ; 0040c8bc
    FADDP ST2,ST0                       ; 0040c8be
    FSUB float ptr [ESP + 0x84]         ; 0040c8c0
    FMUL ST0                            ; 0040c8c7
    FADDP                               ; 0040c8c9
    FCOMP float ptr [0x005d2e89]        ; 0040c8cb | DAT_005d2e89
    FNSTSW AX                           ; 0040c8d1
    SAHF                                ; 0040c8d3
    JBE 0x0040c8e3                      ; 0040c8d4
        ;   XREF to: 0040c8e3 (CONDITIONAL_JUMP)  ; LAB_0040c8e3
    XOR EAX,EAX                         ; 0040c8d6
    ADD ESP,0xc0                        ; 0040c8d8
    POP EBP                             ; 0040c8de
    POP EDI                             ; 0040c8df
    POP ESI                             ; 0040c8e0
    POP EBX                             ; 0040c8e1
    RET                                 ; 0040c8e2
    PUSH EBX                            ; 0040c8e3
        ;   Label: LAB_0040c8e3
    MOV EDX,dword ptr [0x00622c18]      ; 0040c8e4 | g_CDemonSetPtr
    PUSH EDX                            ; 0040c8ea | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_005595a0 ; 0040c8eb
        ;   XREF to: 005595a0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_FUN_005595a0(CDemonSet * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0040c8f0
    TEST EAX,EAX                        ; 0040c8f3
    JZ 0x0040c929                       ; 0040c8f5
        ;   XREF to: 0040c929 (CONDITIONAL_JUMP)  ; LAB_0040c929
    PUSH 0x5d2e49                       ; 0040c8f7 | = "CHero"
    MOV ECX,0x6                         ; 0040c8fc
    PUSH EBP                            ; 0040c901
    MOV dword ptr [ESP + 0xe4],ECX      ; 0040c902
    CALL core_actor.cpp_FUN_0040c550    ; 0040c909
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040c90e
    TEST EAX,EAX                        ; 0040c911
    JZ 0x0040c929                       ; 0040c913
        ;   XREF to: 0040c929 (CONDITIONAL_JUMP)  ; LAB_0040c929
    PUSH 0x5d2e4f                       ; 0040c915 | = "FeetAreWet"
    MOV ESI,dword ptr [0x0061b4d0]      ; 0040c91a | DAT_0061b4d0
    PUSH ESI                            ; 0040c920
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 0040c921
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0040c926
    LEA EAX,[EBP + 0x118]               ; 0040c929
        ;   Label: LAB_0040c929
    PUSH EAX                            ; 0040c92f
    PUSH EBX                            ; 0040c930
    MOV EDI,dword ptr [0x0061dca4]      ; 0040c931 | g_CGorePtr
    PUSH EDI                            ; 0040c937
    CALL core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004e6590 ; 0040c938
        ;   XREF to: 004e6590 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CGore_findBloodTypeAtPosition_FUN_004e6590(CGore * this_ptr, CVector3f * position, int * out_blood_type)
    ADD ESP,0xc                         ; 0040c93d
    TEST EAX,EAX                        ; 0040c940
    JZ 0x0040cb0e                       ; 0040c942
        ;   XREF to: 0040cb0e (CONDITIONAL_JUMP)  ; LAB_0040cb0e
    MOV dword ptr [EBP + 0x114],0xffff  ; 0040c948
    MOV ESI,dword ptr [EBP + 0x118]     ; 0040c952
        ;   Label: LAB_0040c952
    PUSH ESI                            ; 0040c958
    MOV EDI,dword ptr [EBP + 0x114]     ; 0040c959
    PUSH EDI                            ; 0040c95f
    PUSH 0xb                            ; 0040c960
    LEA EAX,[EBP + 0x30]                ; 0040c962
    PUSH EAX                            ; 0040c965
    PUSH EBX                            ; 0040c966
    MOV EAX,[0x0061dca4]                ; 0040c967 | g_CGorePtr
    PUSH EAX                            ; 0040c96c
    CALL core_gore.cpp_CGore_createFootstep_FUN_004e6510 ; 0040c96d
        ;   XREF to: 004e6510 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createFootstep_FUN_004e6510(CGore * this_ptr, CVector3f * position, UOrientationVector * orientation, int surface_type, ...)
    MOV EDX,dword ptr [EBP + 0x114]     ; 0040c972
    SUB EDX,0x2000                      ; 0040c978
    ADD ESP,0x18                        ; 0040c97e
    MOV dword ptr [EBP + 0x114],EDX     ; 0040c981
    TEST EDX,EDX                        ; 0040c987
    JL 0x0040cb4c                       ; 0040c989
        ;   XREF to: 0040cb4c (CONDITIONAL_JUMP)  ; LAB_0040cb4c
    CMP dword ptr [ESP + 0xdc],0xe      ; 0040c98f
        ;   Label: LAB_0040c98f
    JNZ 0x0040cab6                      ; 0040c997
        ;   XREF to: 0040cab6 (CONDITIONAL_JUMP)  ; LAB_0040cab6
    PUSH 0x3c23d70a                     ; 0040c99d
    CALL core_actor.cpp_FUN_0040cd00    ; 0040c9a2
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0040c9a7
    TEST EAX,EAX                        ; 0040c9aa
    JZ 0x0040c9c4                       ; 0040c9ac
        ;   XREF to: 0040c9c4 (CONDITIONAL_JUMP)  ; LAB_0040c9c4
    PUSH EBX                            ; 0040c9ae
    PUSH 0x5d2e5a                       ; 0040c9af | = "twig?.wav"
    PUSH EBP                            ; 0040c9b4
    MOV EDI,dword ptr [0x006236b8]      ; 0040c9b5 | DAT_006236b8
    PUSH EDI                            ; 0040c9bb
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 0040c9bc
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0040c9c1
    PUSH 0x5d2e64                       ; 0040c9c4 | = "CShadow"
        ;   Label: LAB_0040c9c4
    PUSH EBP                            ; 0040c9c9
    CALL core_actor.cpp_FUN_0040c550    ; 0040c9ca
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040c9cf
    TEST EAX,EAX                        ; 0040c9d2
    JZ 0x0040cb5b                       ; 0040c9d4
        ;   XREF to: 0040cb5b (CONDITIONAL_JUMP)  ; LAB_0040cb5b
    MOV dword ptr [EBP + 0x11c],0x1     ; 0040c9da
    MOV EAX,dword ptr [EBP + 0x11c]     ; 0040c9e4
        ;   Label: LAB_0040c9e4
    XOR ESI,ESI                         ; 0040c9ea
    TEST EAX,EAX                        ; 0040c9ec
    JLE 0x0040cab6                      ; 0040c9ee
        ;   XREF to: 0040cab6 (CONDITIONAL_JUMP)  ; LAB_0040cab6
    PUSH 0x3fc90fdb                     ; 0040c9f4
        ;   Label: LAB_0040c9f4
    PUSH 0x3f490fdb                     ; 0040c9f9
    CALL core_actor.cpp_FUN_0040cc00    ; 0040c9fe
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xc4],EAX      ; 0040ca03
    FLD float ptr [ESP + 0xc4]          ; 0040ca0a
    ADD ESP,0x8                         ; 0040ca11
    PUSH 0x40c90fdb                     ; 0040ca14
    PUSH 0x0                            ; 0040ca19
    FSTP float ptr [ESP + 0xa8]         ; 0040ca1b
    CALL core_actor.cpp_FUN_0040cc00    ; 0040ca22
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xc4],EAX      ; 0040ca27
    FLD float ptr [ESP + 0xc4]          ; 0040ca2e
    ADD ESP,0x8                         ; 0040ca35
    FLD float ptr [ESP + 0xa0]          ; 0040ca38
    FCOS                                ; 0040ca3f
    FLD ST1                             ; 0040ca41
    FCOS                                ; 0040ca43
    FXCH ST2                            ; 0040ca45
    FSIN                                ; 0040ca47
    FXCH ST2                            ; 0040ca49
    FMUL ST1                            ; 0040ca4b
    FXCH ST2                            ; 0040ca4d
    FMULP                               ; 0040ca4f
    XOR EDI,EDI                         ; 0040ca51
    MOV EAX,0x41700000                  ; 0040ca53
    MOV dword ptr [ESP + 0x74],EDI      ; 0040ca58
    MOV dword ptr [ESP + 0xb8],EAX      ; 0040ca5c
    LEA EAX,[ESP + 0x64]                ; 0040ca63
    FXCH                                ; 0040ca67
    FSTP float ptr [ESP + 0x70]         ; 0040ca69
    FSTP float ptr [ESP + 0x78]         ; 0040ca6d
    CMP EAX,EBX                         ; 0040ca71
    JZ 0x0040ca89                       ; 0040ca73
        ;   XREF to: 0040ca89 (CONDITIONAL_JUMP)  ; LAB_0040ca89
    MOV EAX,dword ptr [EBX]             ; 0040ca75
    MOV dword ptr [ESP + 0x64],EAX      ; 0040ca77
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040ca7b
    MOV dword ptr [ESP + 0x68],EAX      ; 0040ca7e
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040ca82
    MOV dword ptr [ESP + 0x6c],EAX      ; 0040ca85
    PUSH dword ptr [ESP + 0xb8]         ; 0040ca89
        ;   Label: LAB_0040ca89
    PUSH 0x0                            ; 0040ca90
    LEA EAX,[ESP + 0x78]                ; 0040ca92
    PUSH EAX                            ; 0040ca96
    PUSH EBX                            ; 0040ca97
    MOV EDX,dword ptr [0x0061c010]      ; 0040ca98 | DAT_0061c010
    PUSH EDX                            ; 0040ca9e
    INC ESI                             ; 0040ca9f
    CALL core_fire.cpp_FUN_004b5f00     ; 0040caa0
        ;   XREF to: 004b5f00 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004b5f00()
    MOV ECX,dword ptr [EBP + 0x11c]     ; 0040caa5
    ADD ESP,0x14                        ; 0040caab
    CMP ESI,ECX                         ; 0040caae
    JL 0x0040c9f4                       ; 0040cab0
        ;   XREF to: 0040c9f4 (CONDITIONAL_JUMP)  ; LAB_0040c9f4
    FLD float ptr [ESP + 0xe0]          ; 0040cab6
        ;   Label: LAB_0040cab6
    SUB ESP,0x8                         ; 0040cabd
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0040cac0
    FSTP double ptr [ESP]               ; 0040cac7
    PUSH EDX                            ; 0040caca
    CALL core_ground.cpp_FUN_004e7010   ; 0040cacb
        ;   XREF to: 004e7010 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_FUN_004e7010(EGroundType type)
    ADD ESP,0x4                         ; 0040cad0
    PUSH EAX                            ; 0040cad3
    LEA EAX,[EBP + 0x120]               ; 0040cad4
    PUSH EAX                            ; 0040cada
    PUSH 0x5d2e6c                       ; 0040cadb | = "footstep-%s-!-%s-?.wav @ %f"
    LEA EAX,[ESP + 0x14]                ; 0040cae0
    PUSH EAX                            ; 0040cae4
    CALL crt_unknown.c_FUN_005bfb40     ; 0040cae5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x18                        ; 0040caea
    PUSH EBX                            ; 0040caed
    LEA EAX,[ESP + 0x4]                 ; 0040caee
    PUSH EAX                            ; 0040caf2
    PUSH EBP                            ; 0040caf3
    MOV ECX,dword ptr [0x006236b8]      ; 0040caf4 | DAT_006236b8
    PUSH ECX                            ; 0040cafa
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 0040cafb
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0040cb00
    ADD ESP,0xc0                        ; 0040cb03
    POP EBP                             ; 0040cb09
    POP EDI                             ; 0040cb0a
    POP ESI                             ; 0040cb0b
    POP EBX                             ; 0040cb0c
    RET                                 ; 0040cb0d
    CMP dword ptr [EBP + 0x114],0x0     ; 0040cb0e
        ;   Label: LAB_0040cb0e
    JG 0x0040c952                       ; 0040cb15
        ;   XREF to: 0040c952 (CONDITIONAL_JUMP)  ; LAB_0040c952
    MOV EDX,dword ptr [ESP + 0xdc]      ; 0040cb1b
    CMP EDX,0x3                         ; 0040cb22
    JNZ 0x0040c98f                      ; 0040cb25
        ;   XREF to: 0040c98f (CONDITIONAL_JUMP)  ; LAB_0040c98f
    PUSH 0x0                            ; 0040cb2b
    PUSH 0x4000                         ; 0040cb2d
    PUSH EDX                            ; 0040cb32
    LEA EAX,[EBP + 0x30]                ; 0040cb33
    PUSH EAX                            ; 0040cb36
    PUSH EBX                            ; 0040cb37
    MOV ECX,dword ptr [0x0061dca4]      ; 0040cb38 | g_CGorePtr
    PUSH ECX                            ; 0040cb3e
    CALL core_gore.cpp_CGore_createFootstep_FUN_004e6510 ; 0040cb3f
        ;   XREF to: 004e6510 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createFootstep_FUN_004e6510(CGore * this_ptr, CVector3f * position, UOrientationVector * orientation, int surface_type, ...)
    ADD ESP,0x18                        ; 0040cb44
    JMP 0x0040c98f                      ; 0040cb47
        ;   XREF to: 0040c98f (UNCONDITIONAL_JUMP)  ; LAB_0040c98f
    MOV dword ptr [EBP + 0x114],0x0     ; 0040cb4c
        ;   Label: LAB_0040cb4c
    JMP 0x0040c98f                      ; 0040cb56
        ;   XREF to: 0040c98f (UNCONDITIONAL_JUMP)  ; LAB_0040c98f
    PUSH 0x3                            ; 0040cb5b
        ;   Label: LAB_0040cb5b
    PUSH 0x1                            ; 0040cb5d
    CALL core_actor.cpp_FUN_0040cc60    ; 0040cb5f
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0040cb64
    MOV dword ptr [EBP + 0x11c],EAX     ; 0040cb67
    JMP 0x0040c9e4                      ; 0040cb6d
        ;   XREF to: 0040c9e4 (UNCONDITIONAL_JUMP)  ; LAB_0040c9e4


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_schngeis_cpp_FUN_005a3420(CDemonActor *param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_005a33f4 = 005a343d
;   TerminatedCString s_schnellbreath01_005f0129
;   TerminatedCString s_schnellarm0_wav_005f0139
;   TerminatedCString s_schnellbite01_wav_005f014a
;   TerminatedCString s_schnellfootsteps0_wav_005f015c
;   TerminatedCString s_schnelljump_wav_005f0173
;   TerminatedCString s_schnelldeath01_wav_005f0183
;   undefined4 DAT_005ff358
;   undefined4 DAT_005ff35c
;   undefined4 DAT_005ff360
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;   unkafter_basicene.cpp_FUN_0059e880
;   unkafter_basicene.cpp_FUN_0059f740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3420
        ;   Label: core_schngeis.cpp_FUN_005a3420
    PUSH ESI                            ; 005a3421
    PUSH EDI                            ; 005a3422
    PUSH EBP                            ; 005a3423
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a3424
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a3428
    SUB EAX,0x1f40                      ; 005a342c
    CMP EAX,0x9                         ; 005a3431
    JA 0x005a3458                       ; 005a3434
        ;   XREF to: 005a3458 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5a33f4]  ; 005a3436 | caseD_1f40 | caseD_1f41 | caseD_1f42
        ;   Label: switchD
    MOV ESI,dword ptr [EBX + 0x11858]   ; 005a343d
        ;   Label: caseD_1f40
    PUSH 0x40000000                     ; 005a3443
    PUSH ESI                            ; 005a3448
    PUSH dword ptr [0x005ff358]         ; 005a3449 | DAT_005ff358
    PUSH EBX                            ; 005a344f
        ;   Label: LAB_005a344f
    CALL unkafter_basicene.cpp_FUN_0059f740 ; 005a3450
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f740()
    ADD ESP,0x10                        ; 005a3455
        ;   Label: LAB_005a3455
    MOV EDI,dword ptr [ESP + 0x18]      ; 005a3458
        ;   Label: default
    PUSH EDI                            ; 005a345c
    PUSH EBX                            ; 005a345d
    CALL unkafter_basicene.cpp_FUN_0059e880 ; 005a345e
        ;   XREF to: 0059e880 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e880()
    ADD ESP,0x8                         ; 005a3463
    POP EBP                             ; 005a3466
    POP EDI                             ; 005a3467
    POP ESI                             ; 005a3468
    POP EBX                             ; 005a3469
    RET                                 ; 005a346a
    LEA EAX,[EBX + 0x20]                ; 005a346b
        ;   Label: caseD_1f41
    PUSH EAX                            ; 005a346e
    PUSH 0x5f0129                       ; 005a346f | = "schnellbreath01"
    PUSH EBX                            ; 005a3474
    MOV ECX,dword ptr [0x0061c068]      ; 005a3475 | DAT_0061c068
    PUSH ECX                            ; 005a347b
    MOV dword ptr [EBX + 0x11864],0x1   ; 005a347c
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a3486
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    JMP 0x005a3455                      ; 005a348b
        ;   XREF to: 005a3455 (UNCONDITIONAL_JUMP)  ; LAB_005a3455
    MOV dword ptr [EBX + 0x11864],0x0   ; 005a348d
        ;   Label: caseD_1f42
    MOV EDI,dword ptr [ESP + 0x18]      ; 005a3497
    PUSH EDI                            ; 005a349b
    PUSH EBX                            ; 005a349c
    CALL unkafter_basicene.cpp_FUN_0059e880 ; 005a349d
        ;   XREF to: 0059e880 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e880()
    ADD ESP,0x8                         ; 005a34a2
    POP EBP                             ; 005a34a5
    POP EDI                             ; 005a34a6
    POP ESI                             ; 005a34a7
    POP EBX                             ; 005a34a8
    RET                                 ; 005a34a9
    MOV EDX,dword ptr [EBX + 0x11858]   ; 005a34aa
        ;   Label: caseD_1f43
    PUSH 0x40000000                     ; 005a34b0
    PUSH EDX                            ; 005a34b5
    PUSH dword ptr [0x005ff35c]         ; 005a34b6 | DAT_005ff35c
    JMP 0x005a344f                      ; 005a34bc
        ;   XREF to: 005a344f (UNCONDITIONAL_JUMP)  ; LAB_005a344f
    MOV EAX,dword ptr [EBX + 0x1185c]   ; 005a34be
        ;   Label: caseD_1f44
    PUSH 0x40000000                     ; 005a34c4
    PUSH EAX                            ; 005a34c9
    PUSH dword ptr [0x005ff360]         ; 005a34ca | DAT_005ff360
    JMP 0x005a344f                      ; 005a34d0
        ;   XREF to: 005a344f (UNCONDITIONAL_JUMP)  ; LAB_005a344f
    LEA EAX,[EBX + 0x20]                ; 005a34d5
        ;   Label: caseD_1f45
    PUSH EAX                            ; 005a34d8
    PUSH 0x5f0139                       ; 005a34d9 | = "schnellarm0?.wav"
    PUSH EBX                            ; 005a34de
    MOV EBP,dword ptr [0x0061c068]      ; 005a34df | DAT_0061c068
    PUSH EBP                            ; 005a34e5
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a34e6
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    JMP 0x005a3455                      ; 005a34eb
        ;   XREF to: 005a3455 (UNCONDITIONAL_JUMP)  ; LAB_005a3455
    LEA EAX,[EBX + 0x20]                ; 005a34f0
        ;   Label: caseD_1f46
    PUSH EAX                            ; 005a34f3
    PUSH 0x5f014a                       ; 005a34f4 | = "schnellbite01.wav"
    PUSH EBX                            ; 005a34f9
    MOV EDI,dword ptr [0x0061c068]      ; 005a34fa | DAT_0061c068
    PUSH EDI                            ; 005a3500
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a3501
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    JMP 0x005a3455                      ; 005a3506
        ;   XREF to: 005a3455 (UNCONDITIONAL_JUMP)  ; LAB_005a3455
    LEA EAX,[EBX + 0x20]                ; 005a350b
        ;   Label: caseD_1f47
    PUSH EAX                            ; 005a350e
    PUSH 0x5f015c                       ; 005a350f | = "schnellfootsteps0?.wav"
    PUSH EBX                            ; 005a3514
    MOV ESI,dword ptr [0x0061c068]      ; 005a3515 | DAT_0061c068
    PUSH ESI                            ; 005a351b
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a351c
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    JMP 0x005a3455                      ; 005a3521
        ;   XREF to: 005a3455 (UNCONDITIONAL_JUMP)  ; LAB_005a3455
    LEA EAX,[EBX + 0x20]                ; 005a3526
        ;   Label: caseD_1f48
    PUSH EAX                            ; 005a3529
    PUSH 0x5f0173                       ; 005a352a | = "schnelljump.wav"
    PUSH EBX                            ; 005a352f
    MOV ECX,dword ptr [0x0061c068]      ; 005a3530 | DAT_0061c068
    PUSH ECX                            ; 005a3536
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a3537
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    JMP 0x005a3455                      ; 005a353c
        ;   XREF to: 005a3455 (UNCONDITIONAL_JUMP)  ; LAB_005a3455
    LEA EAX,[EBX + 0x20]                ; 005a3541
        ;   Label: caseD_1f49
    PUSH EAX                            ; 005a3544
    PUSH 0x5f0183                       ; 005a3545 | = "schnelldeath01.wav"
    PUSH EBX                            ; 005a354a
    MOV EDX,dword ptr [0x0061c068]      ; 005a354b | DAT_0061c068
    PUSH EDX                            ; 005a3551
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a3552
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    JMP 0x005a3455                      ; 005a3557
        ;   XREF to: 005a3455 (UNCONDITIONAL_JUMP)  ; LAB_005a3455

